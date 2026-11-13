#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C06028"))) PPC_WEAK_FUNC(sub_83C06028);
PPC_FUNC_IMPL(__imp__sub_83C06028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16568
	ctx.r3.s64 = ctx.r11.s64 + 16568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06034"))) PPC_WEAK_FUNC(sub_83C06034);
PPC_FUNC_IMPL(__imp__sub_83C06034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06038"))) PPC_WEAK_FUNC(sub_83C06038);
PPC_FUNC_IMPL(__imp__sub_83C06038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16576
	ctx.r3.s64 = ctx.r11.s64 + 16576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06044"))) PPC_WEAK_FUNC(sub_83C06044);
PPC_FUNC_IMPL(__imp__sub_83C06044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06048"))) PPC_WEAK_FUNC(sub_83C06048);
PPC_FUNC_IMPL(__imp__sub_83C06048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16584
	ctx.r3.s64 = ctx.r11.s64 + 16584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06054"))) PPC_WEAK_FUNC(sub_83C06054);
PPC_FUNC_IMPL(__imp__sub_83C06054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06058"))) PPC_WEAK_FUNC(sub_83C06058);
PPC_FUNC_IMPL(__imp__sub_83C06058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16592
	ctx.r3.s64 = ctx.r11.s64 + 16592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06064"))) PPC_WEAK_FUNC(sub_83C06064);
PPC_FUNC_IMPL(__imp__sub_83C06064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06068"))) PPC_WEAK_FUNC(sub_83C06068);
PPC_FUNC_IMPL(__imp__sub_83C06068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16600
	ctx.r3.s64 = ctx.r11.s64 + 16600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06074"))) PPC_WEAK_FUNC(sub_83C06074);
PPC_FUNC_IMPL(__imp__sub_83C06074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06078"))) PPC_WEAK_FUNC(sub_83C06078);
PPC_FUNC_IMPL(__imp__sub_83C06078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16608
	ctx.r3.s64 = ctx.r11.s64 + 16608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06084"))) PPC_WEAK_FUNC(sub_83C06084);
PPC_FUNC_IMPL(__imp__sub_83C06084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06088"))) PPC_WEAK_FUNC(sub_83C06088);
PPC_FUNC_IMPL(__imp__sub_83C06088) {
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
	// addi r3,r11,-6980
	ctx.r3.s64 = ctx.r11.s64 + -6980;
	// bl 0x83523120
	ctx.lr = 0x83C060A0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,16616
	ctx.r3.s64 = ctx.r10.s64 + 16616;
	// bl 0x831cdcc8
	ctx.lr = 0x83C060AC;
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

__attribute__((alias("__imp__sub_83C060BC"))) PPC_WEAK_FUNC(sub_83C060BC);
PPC_FUNC_IMPL(__imp__sub_83C060BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C060C0"))) PPC_WEAK_FUNC(sub_83C060C0);
PPC_FUNC_IMPL(__imp__sub_83C060C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6964
	ctx.r7.s64 = ctx.r8.s64 + -6964;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6964(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6964);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6964(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6964, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C060E8"))) PPC_WEAK_FUNC(sub_83C060E8);
PPC_FUNC_IMPL(__imp__sub_83C060E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,31384
	ctx.r6.s64 = ctx.r7.s64 + 31384;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31312(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31312);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6964(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6964);
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
	// std r9,31384(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31384, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C06130"))) PPC_WEAK_FUNC(sub_83C06130);
PPC_FUNC_IMPL(__imp__sub_83C06130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16632
	ctx.r3.s64 = ctx.r11.s64 + 16632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0613C"))) PPC_WEAK_FUNC(sub_83C0613C);
PPC_FUNC_IMPL(__imp__sub_83C0613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06140"))) PPC_WEAK_FUNC(sub_83C06140);
PPC_FUNC_IMPL(__imp__sub_83C06140) {
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
	// addi r3,r11,-6952
	ctx.r3.s64 = ctx.r11.s64 + -6952;
	// bl 0x8259af80
	ctx.lr = 0x83C06158;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,16648
	ctx.r3.s64 = ctx.r10.s64 + 16648;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06164;
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

__attribute__((alias("__imp__sub_83C06174"))) PPC_WEAK_FUNC(sub_83C06174);
PPC_FUNC_IMPL(__imp__sub_83C06174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06178"))) PPC_WEAK_FUNC(sub_83C06178);
PPC_FUNC_IMPL(__imp__sub_83C06178) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6976
	ctx.r11.s64 = ctx.r8.s64 + -6976;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,31360(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31360);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16640
	ctx.r3.s64 = ctx.r6.s64 + 16640;
	// stw r10,-6976(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6976, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C061A8"))) PPC_WEAK_FUNC(sub_83C061A8);
PPC_FUNC_IMPL(__imp__sub_83C061A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16656
	ctx.r3.s64 = ctx.r11.s64 + 16656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C061B4"))) PPC_WEAK_FUNC(sub_83C061B4);
PPC_FUNC_IMPL(__imp__sub_83C061B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C061B8"))) PPC_WEAK_FUNC(sub_83C061B8);
PPC_FUNC_IMPL(__imp__sub_83C061B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16664
	ctx.r3.s64 = ctx.r11.s64 + 16664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C061C4"))) PPC_WEAK_FUNC(sub_83C061C4);
PPC_FUNC_IMPL(__imp__sub_83C061C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C061C8"))) PPC_WEAK_FUNC(sub_83C061C8);
PPC_FUNC_IMPL(__imp__sub_83C061C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16672
	ctx.r3.s64 = ctx.r11.s64 + 16672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C061D4"))) PPC_WEAK_FUNC(sub_83C061D4);
PPC_FUNC_IMPL(__imp__sub_83C061D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C061D8"))) PPC_WEAK_FUNC(sub_83C061D8);
PPC_FUNC_IMPL(__imp__sub_83C061D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16680
	ctx.r3.s64 = ctx.r11.s64 + 16680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C061E4"))) PPC_WEAK_FUNC(sub_83C061E4);
PPC_FUNC_IMPL(__imp__sub_83C061E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C061E8"))) PPC_WEAK_FUNC(sub_83C061E8);
PPC_FUNC_IMPL(__imp__sub_83C061E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16688
	ctx.r3.s64 = ctx.r11.s64 + 16688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C061F4"))) PPC_WEAK_FUNC(sub_83C061F4);
PPC_FUNC_IMPL(__imp__sub_83C061F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C061F8"))) PPC_WEAK_FUNC(sub_83C061F8);
PPC_FUNC_IMPL(__imp__sub_83C061F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16696
	ctx.r3.s64 = ctx.r11.s64 + 16696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06204"))) PPC_WEAK_FUNC(sub_83C06204);
PPC_FUNC_IMPL(__imp__sub_83C06204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06208"))) PPC_WEAK_FUNC(sub_83C06208);
PPC_FUNC_IMPL(__imp__sub_83C06208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16704
	ctx.r3.s64 = ctx.r11.s64 + 16704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06214"))) PPC_WEAK_FUNC(sub_83C06214);
PPC_FUNC_IMPL(__imp__sub_83C06214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06218"))) PPC_WEAK_FUNC(sub_83C06218);
PPC_FUNC_IMPL(__imp__sub_83C06218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16712
	ctx.r3.s64 = ctx.r11.s64 + 16712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06224"))) PPC_WEAK_FUNC(sub_83C06224);
PPC_FUNC_IMPL(__imp__sub_83C06224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06228"))) PPC_WEAK_FUNC(sub_83C06228);
PPC_FUNC_IMPL(__imp__sub_83C06228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16720
	ctx.r3.s64 = ctx.r11.s64 + 16720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06234"))) PPC_WEAK_FUNC(sub_83C06234);
PPC_FUNC_IMPL(__imp__sub_83C06234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06238"))) PPC_WEAK_FUNC(sub_83C06238);
PPC_FUNC_IMPL(__imp__sub_83C06238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16728
	ctx.r3.s64 = ctx.r11.s64 + 16728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06244"))) PPC_WEAK_FUNC(sub_83C06244);
PPC_FUNC_IMPL(__imp__sub_83C06244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06248"))) PPC_WEAK_FUNC(sub_83C06248);
PPC_FUNC_IMPL(__imp__sub_83C06248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16736
	ctx.r3.s64 = ctx.r11.s64 + 16736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06254"))) PPC_WEAK_FUNC(sub_83C06254);
PPC_FUNC_IMPL(__imp__sub_83C06254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06258"))) PPC_WEAK_FUNC(sub_83C06258);
PPC_FUNC_IMPL(__imp__sub_83C06258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06264"))) PPC_WEAK_FUNC(sub_83C06264);
PPC_FUNC_IMPL(__imp__sub_83C06264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06268"))) PPC_WEAK_FUNC(sub_83C06268);
PPC_FUNC_IMPL(__imp__sub_83C06268) {
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
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// bl 0x83523120
	ctx.lr = 0x83C06280;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,16752
	ctx.r3.s64 = ctx.r10.s64 + 16752;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0628C;
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

__attribute__((alias("__imp__sub_83C0629C"))) PPC_WEAK_FUNC(sub_83C0629C);
PPC_FUNC_IMPL(__imp__sub_83C0629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C062A0"))) PPC_WEAK_FUNC(sub_83C062A0);
PPC_FUNC_IMPL(__imp__sub_83C062A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6592
	ctx.r7.s64 = ctx.r8.s64 + -6592;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6592);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6592, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C062C8"))) PPC_WEAK_FUNC(sub_83C062C8);
PPC_FUNC_IMPL(__imp__sub_83C062C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,31528
	ctx.r6.s64 = ctx.r7.s64 + 31528;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31456(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31456);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6592(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6592);
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
	// std r9,31528(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31528, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C06310"))) PPC_WEAK_FUNC(sub_83C06310);
PPC_FUNC_IMPL(__imp__sub_83C06310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16768
	ctx.r3.s64 = ctx.r11.s64 + 16768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0631C"))) PPC_WEAK_FUNC(sub_83C0631C);
PPC_FUNC_IMPL(__imp__sub_83C0631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06320"))) PPC_WEAK_FUNC(sub_83C06320);
PPC_FUNC_IMPL(__imp__sub_83C06320) {
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
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// bl 0x8259af80
	ctx.lr = 0x83C06338;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,16784
	ctx.r3.s64 = ctx.r10.s64 + 16784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06344;
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

__attribute__((alias("__imp__sub_83C06354"))) PPC_WEAK_FUNC(sub_83C06354);
PPC_FUNC_IMPL(__imp__sub_83C06354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06358"))) PPC_WEAK_FUNC(sub_83C06358);
PPC_FUNC_IMPL(__imp__sub_83C06358) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6604
	ctx.r11.s64 = ctx.r8.s64 + -6604;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,31504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,16776
	ctx.r3.s64 = ctx.r6.s64 + 16776;
	// stw r10,-6604(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6604, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06388"))) PPC_WEAK_FUNC(sub_83C06388);
PPC_FUNC_IMPL(__imp__sub_83C06388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06394"))) PPC_WEAK_FUNC(sub_83C06394);
PPC_FUNC_IMPL(__imp__sub_83C06394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06398"))) PPC_WEAK_FUNC(sub_83C06398);
PPC_FUNC_IMPL(__imp__sub_83C06398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16800
	ctx.r3.s64 = ctx.r11.s64 + 16800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C063A4"))) PPC_WEAK_FUNC(sub_83C063A4);
PPC_FUNC_IMPL(__imp__sub_83C063A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C063A8"))) PPC_WEAK_FUNC(sub_83C063A8);
PPC_FUNC_IMPL(__imp__sub_83C063A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16808
	ctx.r3.s64 = ctx.r11.s64 + 16808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C063B4"))) PPC_WEAK_FUNC(sub_83C063B4);
PPC_FUNC_IMPL(__imp__sub_83C063B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C063B8"))) PPC_WEAK_FUNC(sub_83C063B8);
PPC_FUNC_IMPL(__imp__sub_83C063B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16816
	ctx.r3.s64 = ctx.r11.s64 + 16816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C063C4"))) PPC_WEAK_FUNC(sub_83C063C4);
PPC_FUNC_IMPL(__imp__sub_83C063C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C063C8"))) PPC_WEAK_FUNC(sub_83C063C8);
PPC_FUNC_IMPL(__imp__sub_83C063C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16824
	ctx.r3.s64 = ctx.r11.s64 + 16824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C063D4"))) PPC_WEAK_FUNC(sub_83C063D4);
PPC_FUNC_IMPL(__imp__sub_83C063D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C063D8"))) PPC_WEAK_FUNC(sub_83C063D8);
PPC_FUNC_IMPL(__imp__sub_83C063D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16832
	ctx.r3.s64 = ctx.r11.s64 + 16832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C063E4"))) PPC_WEAK_FUNC(sub_83C063E4);
PPC_FUNC_IMPL(__imp__sub_83C063E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C063E8"))) PPC_WEAK_FUNC(sub_83C063E8);
PPC_FUNC_IMPL(__imp__sub_83C063E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16840
	ctx.r3.s64 = ctx.r11.s64 + 16840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C063F4"))) PPC_WEAK_FUNC(sub_83C063F4);
PPC_FUNC_IMPL(__imp__sub_83C063F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C063F8"))) PPC_WEAK_FUNC(sub_83C063F8);
PPC_FUNC_IMPL(__imp__sub_83C063F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16848
	ctx.r3.s64 = ctx.r11.s64 + 16848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06404"))) PPC_WEAK_FUNC(sub_83C06404);
PPC_FUNC_IMPL(__imp__sub_83C06404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06408"))) PPC_WEAK_FUNC(sub_83C06408);
PPC_FUNC_IMPL(__imp__sub_83C06408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16856
	ctx.r3.s64 = ctx.r11.s64 + 16856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06414"))) PPC_WEAK_FUNC(sub_83C06414);
PPC_FUNC_IMPL(__imp__sub_83C06414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06418"))) PPC_WEAK_FUNC(sub_83C06418);
PPC_FUNC_IMPL(__imp__sub_83C06418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16864
	ctx.r3.s64 = ctx.r11.s64 + 16864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06424"))) PPC_WEAK_FUNC(sub_83C06424);
PPC_FUNC_IMPL(__imp__sub_83C06424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06428"))) PPC_WEAK_FUNC(sub_83C06428);
PPC_FUNC_IMPL(__imp__sub_83C06428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16872
	ctx.r3.s64 = ctx.r11.s64 + 16872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06434"))) PPC_WEAK_FUNC(sub_83C06434);
PPC_FUNC_IMPL(__imp__sub_83C06434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06438"))) PPC_WEAK_FUNC(sub_83C06438);
PPC_FUNC_IMPL(__imp__sub_83C06438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16880
	ctx.r3.s64 = ctx.r11.s64 + 16880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06444"))) PPC_WEAK_FUNC(sub_83C06444);
PPC_FUNC_IMPL(__imp__sub_83C06444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06448"))) PPC_WEAK_FUNC(sub_83C06448);
PPC_FUNC_IMPL(__imp__sub_83C06448) {
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
	// addi r3,r11,-6240
	ctx.r3.s64 = ctx.r11.s64 + -6240;
	// bl 0x83523120
	ctx.lr = 0x83C06460;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,16888
	ctx.r3.s64 = ctx.r10.s64 + 16888;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0646C;
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

__attribute__((alias("__imp__sub_83C0647C"))) PPC_WEAK_FUNC(sub_83C0647C);
PPC_FUNC_IMPL(__imp__sub_83C0647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06480"))) PPC_WEAK_FUNC(sub_83C06480);
PPC_FUNC_IMPL(__imp__sub_83C06480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16904
	ctx.r3.s64 = ctx.r11.s64 + 16904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0648C"))) PPC_WEAK_FUNC(sub_83C0648C);
PPC_FUNC_IMPL(__imp__sub_83C0648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06490"))) PPC_WEAK_FUNC(sub_83C06490);
PPC_FUNC_IMPL(__imp__sub_83C06490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16912
	ctx.r3.s64 = ctx.r11.s64 + 16912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0649C"))) PPC_WEAK_FUNC(sub_83C0649C);
PPC_FUNC_IMPL(__imp__sub_83C0649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C064A0"))) PPC_WEAK_FUNC(sub_83C064A0);
PPC_FUNC_IMPL(__imp__sub_83C064A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16920
	ctx.r3.s64 = ctx.r11.s64 + 16920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C064AC"))) PPC_WEAK_FUNC(sub_83C064AC);
PPC_FUNC_IMPL(__imp__sub_83C064AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C064B0"))) PPC_WEAK_FUNC(sub_83C064B0);
PPC_FUNC_IMPL(__imp__sub_83C064B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16928
	ctx.r3.s64 = ctx.r11.s64 + 16928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C064BC"))) PPC_WEAK_FUNC(sub_83C064BC);
PPC_FUNC_IMPL(__imp__sub_83C064BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C064C0"))) PPC_WEAK_FUNC(sub_83C064C0);
PPC_FUNC_IMPL(__imp__sub_83C064C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16936
	ctx.r3.s64 = ctx.r11.s64 + 16936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C064CC"))) PPC_WEAK_FUNC(sub_83C064CC);
PPC_FUNC_IMPL(__imp__sub_83C064CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C064D0"))) PPC_WEAK_FUNC(sub_83C064D0);
PPC_FUNC_IMPL(__imp__sub_83C064D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C064DC"))) PPC_WEAK_FUNC(sub_83C064DC);
PPC_FUNC_IMPL(__imp__sub_83C064DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C064E0"))) PPC_WEAK_FUNC(sub_83C064E0);
PPC_FUNC_IMPL(__imp__sub_83C064E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16952
	ctx.r3.s64 = ctx.r11.s64 + 16952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C064EC"))) PPC_WEAK_FUNC(sub_83C064EC);
PPC_FUNC_IMPL(__imp__sub_83C064EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C064F0"))) PPC_WEAK_FUNC(sub_83C064F0);
PPC_FUNC_IMPL(__imp__sub_83C064F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16960
	ctx.r3.s64 = ctx.r11.s64 + 16960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C064FC"))) PPC_WEAK_FUNC(sub_83C064FC);
PPC_FUNC_IMPL(__imp__sub_83C064FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06500"))) PPC_WEAK_FUNC(sub_83C06500);
PPC_FUNC_IMPL(__imp__sub_83C06500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16968
	ctx.r3.s64 = ctx.r11.s64 + 16968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0650C"))) PPC_WEAK_FUNC(sub_83C0650C);
PPC_FUNC_IMPL(__imp__sub_83C0650C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06510"))) PPC_WEAK_FUNC(sub_83C06510);
PPC_FUNC_IMPL(__imp__sub_83C06510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16976
	ctx.r3.s64 = ctx.r11.s64 + 16976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0651C"))) PPC_WEAK_FUNC(sub_83C0651C);
PPC_FUNC_IMPL(__imp__sub_83C0651C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06520"))) PPC_WEAK_FUNC(sub_83C06520);
PPC_FUNC_IMPL(__imp__sub_83C06520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16984
	ctx.r3.s64 = ctx.r11.s64 + 16984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0652C"))) PPC_WEAK_FUNC(sub_83C0652C);
PPC_FUNC_IMPL(__imp__sub_83C0652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06530"))) PPC_WEAK_FUNC(sub_83C06530);
PPC_FUNC_IMPL(__imp__sub_83C06530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,16992
	ctx.r3.s64 = ctx.r11.s64 + 16992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0653C"))) PPC_WEAK_FUNC(sub_83C0653C);
PPC_FUNC_IMPL(__imp__sub_83C0653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06540"))) PPC_WEAK_FUNC(sub_83C06540);
PPC_FUNC_IMPL(__imp__sub_83C06540) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-6208
	ctx.r7.s64 = ctx.r8.s64 + -6208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-6208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6208);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-6208(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6208, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C06568"))) PPC_WEAK_FUNC(sub_83C06568);
PPC_FUNC_IMPL(__imp__sub_83C06568) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,31804
	ctx.r6.s64 = ctx.r7.s64 + 31804;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31732(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31732);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-6208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6208);
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
	// std r9,31804(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31804, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C065B0"))) PPC_WEAK_FUNC(sub_83C065B0);
PPC_FUNC_IMPL(__imp__sub_83C065B0) {
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
	// addi r3,r11,-6224
	ctx.r3.s64 = ctx.r11.s64 + -6224;
	// bl 0x83523120
	ctx.lr = 0x83C065C8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17000
	ctx.r3.s64 = ctx.r10.s64 + 17000;
	// bl 0x831cdcc8
	ctx.lr = 0x83C065D4;
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

__attribute__((alias("__imp__sub_83C065E4"))) PPC_WEAK_FUNC(sub_83C065E4);
PPC_FUNC_IMPL(__imp__sub_83C065E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C065E8"))) PPC_WEAK_FUNC(sub_83C065E8);
PPC_FUNC_IMPL(__imp__sub_83C065E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17016
	ctx.r3.s64 = ctx.r11.s64 + 17016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C065F4"))) PPC_WEAK_FUNC(sub_83C065F4);
PPC_FUNC_IMPL(__imp__sub_83C065F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C065F8"))) PPC_WEAK_FUNC(sub_83C065F8);
PPC_FUNC_IMPL(__imp__sub_83C065F8) {
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
	// addi r3,r11,-6200
	ctx.r3.s64 = ctx.r11.s64 + -6200;
	// bl 0x8259af80
	ctx.lr = 0x83C06610;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17032
	ctx.r3.s64 = ctx.r10.s64 + 17032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0661C;
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

__attribute__((alias("__imp__sub_83C0662C"))) PPC_WEAK_FUNC(sub_83C0662C);
PPC_FUNC_IMPL(__imp__sub_83C0662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06630"))) PPC_WEAK_FUNC(sub_83C06630);
PPC_FUNC_IMPL(__imp__sub_83C06630) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-6220
	ctx.r11.s64 = ctx.r8.s64 + -6220;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,31780(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31780);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17024
	ctx.r3.s64 = ctx.r6.s64 + 17024;
	// stw r10,-6220(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6220, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06660"))) PPC_WEAK_FUNC(sub_83C06660);
PPC_FUNC_IMPL(__imp__sub_83C06660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17040
	ctx.r3.s64 = ctx.r11.s64 + 17040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0666C"))) PPC_WEAK_FUNC(sub_83C0666C);
PPC_FUNC_IMPL(__imp__sub_83C0666C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06670"))) PPC_WEAK_FUNC(sub_83C06670);
PPC_FUNC_IMPL(__imp__sub_83C06670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17048
	ctx.r3.s64 = ctx.r11.s64 + 17048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0667C"))) PPC_WEAK_FUNC(sub_83C0667C);
PPC_FUNC_IMPL(__imp__sub_83C0667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06680"))) PPC_WEAK_FUNC(sub_83C06680);
PPC_FUNC_IMPL(__imp__sub_83C06680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17056
	ctx.r3.s64 = ctx.r11.s64 + 17056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0668C"))) PPC_WEAK_FUNC(sub_83C0668C);
PPC_FUNC_IMPL(__imp__sub_83C0668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06690"))) PPC_WEAK_FUNC(sub_83C06690);
PPC_FUNC_IMPL(__imp__sub_83C06690) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17064
	ctx.r3.s64 = ctx.r11.s64 + 17064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0669C"))) PPC_WEAK_FUNC(sub_83C0669C);
PPC_FUNC_IMPL(__imp__sub_83C0669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C066A0"))) PPC_WEAK_FUNC(sub_83C066A0);
PPC_FUNC_IMPL(__imp__sub_83C066A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17072
	ctx.r3.s64 = ctx.r11.s64 + 17072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C066AC"))) PPC_WEAK_FUNC(sub_83C066AC);
PPC_FUNC_IMPL(__imp__sub_83C066AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C066B0"))) PPC_WEAK_FUNC(sub_83C066B0);
PPC_FUNC_IMPL(__imp__sub_83C066B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17080
	ctx.r3.s64 = ctx.r11.s64 + 17080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C066BC"))) PPC_WEAK_FUNC(sub_83C066BC);
PPC_FUNC_IMPL(__imp__sub_83C066BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C066C0"))) PPC_WEAK_FUNC(sub_83C066C0);
PPC_FUNC_IMPL(__imp__sub_83C066C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17088
	ctx.r3.s64 = ctx.r11.s64 + 17088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C066CC"))) PPC_WEAK_FUNC(sub_83C066CC);
PPC_FUNC_IMPL(__imp__sub_83C066CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C066D0"))) PPC_WEAK_FUNC(sub_83C066D0);
PPC_FUNC_IMPL(__imp__sub_83C066D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17096
	ctx.r3.s64 = ctx.r11.s64 + 17096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C066DC"))) PPC_WEAK_FUNC(sub_83C066DC);
PPC_FUNC_IMPL(__imp__sub_83C066DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C066E0"))) PPC_WEAK_FUNC(sub_83C066E0);
PPC_FUNC_IMPL(__imp__sub_83C066E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17104
	ctx.r3.s64 = ctx.r11.s64 + 17104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C066EC"))) PPC_WEAK_FUNC(sub_83C066EC);
PPC_FUNC_IMPL(__imp__sub_83C066EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C066F0"))) PPC_WEAK_FUNC(sub_83C066F0);
PPC_FUNC_IMPL(__imp__sub_83C066F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17112
	ctx.r3.s64 = ctx.r11.s64 + 17112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C066FC"))) PPC_WEAK_FUNC(sub_83C066FC);
PPC_FUNC_IMPL(__imp__sub_83C066FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06700"))) PPC_WEAK_FUNC(sub_83C06700);
PPC_FUNC_IMPL(__imp__sub_83C06700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17120
	ctx.r3.s64 = ctx.r11.s64 + 17120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0670C"))) PPC_WEAK_FUNC(sub_83C0670C);
PPC_FUNC_IMPL(__imp__sub_83C0670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06710"))) PPC_WEAK_FUNC(sub_83C06710);
PPC_FUNC_IMPL(__imp__sub_83C06710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17128
	ctx.r3.s64 = ctx.r11.s64 + 17128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0671C"))) PPC_WEAK_FUNC(sub_83C0671C);
PPC_FUNC_IMPL(__imp__sub_83C0671C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06720"))) PPC_WEAK_FUNC(sub_83C06720);
PPC_FUNC_IMPL(__imp__sub_83C06720) {
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
	// addi r3,r11,-5856
	ctx.r3.s64 = ctx.r11.s64 + -5856;
	// bl 0x83523120
	ctx.lr = 0x83C06738;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17136
	ctx.r3.s64 = ctx.r10.s64 + 17136;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06744;
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

__attribute__((alias("__imp__sub_83C06754"))) PPC_WEAK_FUNC(sub_83C06754);
PPC_FUNC_IMPL(__imp__sub_83C06754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06758"))) PPC_WEAK_FUNC(sub_83C06758);
PPC_FUNC_IMPL(__imp__sub_83C06758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lis r8,-31776
	ctx.r8.s64 = -2082471936;
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// lwz r11,31940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31940);
	// lis r5,-31758
	ctx.r5.s64 = -2081292288;
	// lwz r10,31944(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31944);
	// lwz r9,31948(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31948);
	// addi r4,r5,-5848
	ctx.r4.s64 = ctx.r5.s64 + -5848;
	// lwz r8,31952(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 31952);
	// lwz r7,31956(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 31956);
	// lwz r6,31960(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31960);
	// stw r11,-5848(r5)
	PPC_STORE_U32(ctx.r5.u32 + -5848, ctx.r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
	// stw r6,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C067AC"))) PPC_WEAK_FUNC(sub_83C067AC);
PPC_FUNC_IMPL(__imp__sub_83C067AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C067B0"))) PPC_WEAK_FUNC(sub_83C067B0);
PPC_FUNC_IMPL(__imp__sub_83C067B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17152
	ctx.r3.s64 = ctx.r11.s64 + 17152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C067BC"))) PPC_WEAK_FUNC(sub_83C067BC);
PPC_FUNC_IMPL(__imp__sub_83C067BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C067C0"))) PPC_WEAK_FUNC(sub_83C067C0);
PPC_FUNC_IMPL(__imp__sub_83C067C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17160
	ctx.r3.s64 = ctx.r11.s64 + 17160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C067CC"))) PPC_WEAK_FUNC(sub_83C067CC);
PPC_FUNC_IMPL(__imp__sub_83C067CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C067D0"))) PPC_WEAK_FUNC(sub_83C067D0);
PPC_FUNC_IMPL(__imp__sub_83C067D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17168
	ctx.r3.s64 = ctx.r11.s64 + 17168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C067DC"))) PPC_WEAK_FUNC(sub_83C067DC);
PPC_FUNC_IMPL(__imp__sub_83C067DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C067E0"))) PPC_WEAK_FUNC(sub_83C067E0);
PPC_FUNC_IMPL(__imp__sub_83C067E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17176
	ctx.r3.s64 = ctx.r11.s64 + 17176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C067EC"))) PPC_WEAK_FUNC(sub_83C067EC);
PPC_FUNC_IMPL(__imp__sub_83C067EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C067F0"))) PPC_WEAK_FUNC(sub_83C067F0);
PPC_FUNC_IMPL(__imp__sub_83C067F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17184
	ctx.r3.s64 = ctx.r11.s64 + 17184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C067FC"))) PPC_WEAK_FUNC(sub_83C067FC);
PPC_FUNC_IMPL(__imp__sub_83C067FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06800"))) PPC_WEAK_FUNC(sub_83C06800);
PPC_FUNC_IMPL(__imp__sub_83C06800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17192
	ctx.r3.s64 = ctx.r11.s64 + 17192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0680C"))) PPC_WEAK_FUNC(sub_83C0680C);
PPC_FUNC_IMPL(__imp__sub_83C0680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06810"))) PPC_WEAK_FUNC(sub_83C06810);
PPC_FUNC_IMPL(__imp__sub_83C06810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17200
	ctx.r3.s64 = ctx.r11.s64 + 17200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0681C"))) PPC_WEAK_FUNC(sub_83C0681C);
PPC_FUNC_IMPL(__imp__sub_83C0681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06820"))) PPC_WEAK_FUNC(sub_83C06820);
PPC_FUNC_IMPL(__imp__sub_83C06820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17208
	ctx.r3.s64 = ctx.r11.s64 + 17208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0682C"))) PPC_WEAK_FUNC(sub_83C0682C);
PPC_FUNC_IMPL(__imp__sub_83C0682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06830"))) PPC_WEAK_FUNC(sub_83C06830);
PPC_FUNC_IMPL(__imp__sub_83C06830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17216
	ctx.r3.s64 = ctx.r11.s64 + 17216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0683C"))) PPC_WEAK_FUNC(sub_83C0683C);
PPC_FUNC_IMPL(__imp__sub_83C0683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06840"))) PPC_WEAK_FUNC(sub_83C06840);
PPC_FUNC_IMPL(__imp__sub_83C06840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17224
	ctx.r3.s64 = ctx.r11.s64 + 17224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0684C"))) PPC_WEAK_FUNC(sub_83C0684C);
PPC_FUNC_IMPL(__imp__sub_83C0684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06850"))) PPC_WEAK_FUNC(sub_83C06850);
PPC_FUNC_IMPL(__imp__sub_83C06850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17232
	ctx.r3.s64 = ctx.r11.s64 + 17232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0685C"))) PPC_WEAK_FUNC(sub_83C0685C);
PPC_FUNC_IMPL(__imp__sub_83C0685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06860"))) PPC_WEAK_FUNC(sub_83C06860);
PPC_FUNC_IMPL(__imp__sub_83C06860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17240
	ctx.r3.s64 = ctx.r11.s64 + 17240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C0686C"))) PPC_WEAK_FUNC(sub_83C0686C);
PPC_FUNC_IMPL(__imp__sub_83C0686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06870"))) PPC_WEAK_FUNC(sub_83C06870);
PPC_FUNC_IMPL(__imp__sub_83C06870) {
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
	// addi r3,r11,-5824
	ctx.r3.s64 = ctx.r11.s64 + -5824;
	// bl 0x83523120
	ctx.lr = 0x83C06888;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17248
	ctx.r3.s64 = ctx.r10.s64 + 17248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06894;
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

__attribute__((alias("__imp__sub_83C068A4"))) PPC_WEAK_FUNC(sub_83C068A4);
PPC_FUNC_IMPL(__imp__sub_83C068A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C068A8"))) PPC_WEAK_FUNC(sub_83C068A8);
PPC_FUNC_IMPL(__imp__sub_83C068A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17264
	ctx.r3.s64 = ctx.r11.s64 + 17264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C068B4"))) PPC_WEAK_FUNC(sub_83C068B4);
PPC_FUNC_IMPL(__imp__sub_83C068B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C068B8"))) PPC_WEAK_FUNC(sub_83C068B8);
PPC_FUNC_IMPL(__imp__sub_83C068B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17272
	ctx.r3.s64 = ctx.r11.s64 + 17272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C068C4"))) PPC_WEAK_FUNC(sub_83C068C4);
PPC_FUNC_IMPL(__imp__sub_83C068C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C068C8"))) PPC_WEAK_FUNC(sub_83C068C8);
PPC_FUNC_IMPL(__imp__sub_83C068C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17280
	ctx.r3.s64 = ctx.r11.s64 + 17280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C068D4"))) PPC_WEAK_FUNC(sub_83C068D4);
PPC_FUNC_IMPL(__imp__sub_83C068D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C068D8"))) PPC_WEAK_FUNC(sub_83C068D8);
PPC_FUNC_IMPL(__imp__sub_83C068D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17288
	ctx.r3.s64 = ctx.r11.s64 + 17288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C068E4"))) PPC_WEAK_FUNC(sub_83C068E4);
PPC_FUNC_IMPL(__imp__sub_83C068E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C068E8"))) PPC_WEAK_FUNC(sub_83C068E8);
PPC_FUNC_IMPL(__imp__sub_83C068E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17296
	ctx.r3.s64 = ctx.r11.s64 + 17296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C068F4"))) PPC_WEAK_FUNC(sub_83C068F4);
PPC_FUNC_IMPL(__imp__sub_83C068F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C068F8"))) PPC_WEAK_FUNC(sub_83C068F8);
PPC_FUNC_IMPL(__imp__sub_83C068F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17304
	ctx.r3.s64 = ctx.r11.s64 + 17304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06904"))) PPC_WEAK_FUNC(sub_83C06904);
PPC_FUNC_IMPL(__imp__sub_83C06904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06908"))) PPC_WEAK_FUNC(sub_83C06908);
PPC_FUNC_IMPL(__imp__sub_83C06908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17312
	ctx.r3.s64 = ctx.r11.s64 + 17312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06914"))) PPC_WEAK_FUNC(sub_83C06914);
PPC_FUNC_IMPL(__imp__sub_83C06914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06918"))) PPC_WEAK_FUNC(sub_83C06918);
PPC_FUNC_IMPL(__imp__sub_83C06918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17320
	ctx.r3.s64 = ctx.r11.s64 + 17320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06924"))) PPC_WEAK_FUNC(sub_83C06924);
PPC_FUNC_IMPL(__imp__sub_83C06924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06928"))) PPC_WEAK_FUNC(sub_83C06928);
PPC_FUNC_IMPL(__imp__sub_83C06928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17328
	ctx.r3.s64 = ctx.r11.s64 + 17328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06934"))) PPC_WEAK_FUNC(sub_83C06934);
PPC_FUNC_IMPL(__imp__sub_83C06934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06938"))) PPC_WEAK_FUNC(sub_83C06938);
PPC_FUNC_IMPL(__imp__sub_83C06938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17336
	ctx.r3.s64 = ctx.r11.s64 + 17336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06944"))) PPC_WEAK_FUNC(sub_83C06944);
PPC_FUNC_IMPL(__imp__sub_83C06944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06948"))) PPC_WEAK_FUNC(sub_83C06948);
PPC_FUNC_IMPL(__imp__sub_83C06948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17344
	ctx.r3.s64 = ctx.r11.s64 + 17344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06954"))) PPC_WEAK_FUNC(sub_83C06954);
PPC_FUNC_IMPL(__imp__sub_83C06954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06958"))) PPC_WEAK_FUNC(sub_83C06958);
PPC_FUNC_IMPL(__imp__sub_83C06958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17352
	ctx.r3.s64 = ctx.r11.s64 + 17352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06964"))) PPC_WEAK_FUNC(sub_83C06964);
PPC_FUNC_IMPL(__imp__sub_83C06964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06968"))) PPC_WEAK_FUNC(sub_83C06968);
PPC_FUNC_IMPL(__imp__sub_83C06968) {
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
	// addi r3,r11,-5816
	ctx.r3.s64 = ctx.r11.s64 + -5816;
	// bl 0x83523120
	ctx.lr = 0x83C06980;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17360
	ctx.r3.s64 = ctx.r10.s64 + 17360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C0698C;
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

__attribute__((alias("__imp__sub_83C0699C"))) PPC_WEAK_FUNC(sub_83C0699C);
PPC_FUNC_IMPL(__imp__sub_83C0699C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C069A0"))) PPC_WEAK_FUNC(sub_83C069A0);
PPC_FUNC_IMPL(__imp__sub_83C069A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17376
	ctx.r3.s64 = ctx.r11.s64 + 17376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C069AC"))) PPC_WEAK_FUNC(sub_83C069AC);
PPC_FUNC_IMPL(__imp__sub_83C069AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C069B0"))) PPC_WEAK_FUNC(sub_83C069B0);
PPC_FUNC_IMPL(__imp__sub_83C069B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17384
	ctx.r3.s64 = ctx.r11.s64 + 17384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C069BC"))) PPC_WEAK_FUNC(sub_83C069BC);
PPC_FUNC_IMPL(__imp__sub_83C069BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C069C0"))) PPC_WEAK_FUNC(sub_83C069C0);
PPC_FUNC_IMPL(__imp__sub_83C069C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17488
	ctx.r3.s64 = ctx.r11.s64 + 17488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C069CC"))) PPC_WEAK_FUNC(sub_83C069CC);
PPC_FUNC_IMPL(__imp__sub_83C069CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C069D0"))) PPC_WEAK_FUNC(sub_83C069D0);
PPC_FUNC_IMPL(__imp__sub_83C069D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17496
	ctx.r3.s64 = ctx.r11.s64 + 17496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C069DC"))) PPC_WEAK_FUNC(sub_83C069DC);
PPC_FUNC_IMPL(__imp__sub_83C069DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C069E0"))) PPC_WEAK_FUNC(sub_83C069E0);
PPC_FUNC_IMPL(__imp__sub_83C069E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C069EC"))) PPC_WEAK_FUNC(sub_83C069EC);
PPC_FUNC_IMPL(__imp__sub_83C069EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C069F0"))) PPC_WEAK_FUNC(sub_83C069F0);
PPC_FUNC_IMPL(__imp__sub_83C069F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17512
	ctx.r3.s64 = ctx.r11.s64 + 17512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C069FC"))) PPC_WEAK_FUNC(sub_83C069FC);
PPC_FUNC_IMPL(__imp__sub_83C069FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A00"))) PPC_WEAK_FUNC(sub_83C06A00);
PPC_FUNC_IMPL(__imp__sub_83C06A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17520
	ctx.r3.s64 = ctx.r11.s64 + 17520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A0C"))) PPC_WEAK_FUNC(sub_83C06A0C);
PPC_FUNC_IMPL(__imp__sub_83C06A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A10"))) PPC_WEAK_FUNC(sub_83C06A10);
PPC_FUNC_IMPL(__imp__sub_83C06A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A1C"))) PPC_WEAK_FUNC(sub_83C06A1C);
PPC_FUNC_IMPL(__imp__sub_83C06A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A20"))) PPC_WEAK_FUNC(sub_83C06A20);
PPC_FUNC_IMPL(__imp__sub_83C06A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17536
	ctx.r3.s64 = ctx.r11.s64 + 17536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A2C"))) PPC_WEAK_FUNC(sub_83C06A2C);
PPC_FUNC_IMPL(__imp__sub_83C06A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A30"))) PPC_WEAK_FUNC(sub_83C06A30);
PPC_FUNC_IMPL(__imp__sub_83C06A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17544
	ctx.r3.s64 = ctx.r11.s64 + 17544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A3C"))) PPC_WEAK_FUNC(sub_83C06A3C);
PPC_FUNC_IMPL(__imp__sub_83C06A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A40"))) PPC_WEAK_FUNC(sub_83C06A40);
PPC_FUNC_IMPL(__imp__sub_83C06A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17552
	ctx.r3.s64 = ctx.r11.s64 + 17552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A4C"))) PPC_WEAK_FUNC(sub_83C06A4C);
PPC_FUNC_IMPL(__imp__sub_83C06A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A50"))) PPC_WEAK_FUNC(sub_83C06A50);
PPC_FUNC_IMPL(__imp__sub_83C06A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17560
	ctx.r3.s64 = ctx.r11.s64 + 17560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A5C"))) PPC_WEAK_FUNC(sub_83C06A5C);
PPC_FUNC_IMPL(__imp__sub_83C06A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A60"))) PPC_WEAK_FUNC(sub_83C06A60);
PPC_FUNC_IMPL(__imp__sub_83C06A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17568
	ctx.r3.s64 = ctx.r11.s64 + 17568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A6C"))) PPC_WEAK_FUNC(sub_83C06A6C);
PPC_FUNC_IMPL(__imp__sub_83C06A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A70"))) PPC_WEAK_FUNC(sub_83C06A70);
PPC_FUNC_IMPL(__imp__sub_83C06A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17576
	ctx.r3.s64 = ctx.r11.s64 + 17576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06A7C"))) PPC_WEAK_FUNC(sub_83C06A7C);
PPC_FUNC_IMPL(__imp__sub_83C06A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06A80"))) PPC_WEAK_FUNC(sub_83C06A80);
PPC_FUNC_IMPL(__imp__sub_83C06A80) {
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
	// addi r3,r11,-5792
	ctx.r3.s64 = ctx.r11.s64 + -5792;
	// bl 0x83523120
	ctx.lr = 0x83C06A98;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17584
	ctx.r3.s64 = ctx.r10.s64 + 17584;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06AA4;
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

__attribute__((alias("__imp__sub_83C06AB4"))) PPC_WEAK_FUNC(sub_83C06AB4);
PPC_FUNC_IMPL(__imp__sub_83C06AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06AB8"))) PPC_WEAK_FUNC(sub_83C06AB8);
PPC_FUNC_IMPL(__imp__sub_83C06AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06AC4"))) PPC_WEAK_FUNC(sub_83C06AC4);
PPC_FUNC_IMPL(__imp__sub_83C06AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06AC8"))) PPC_WEAK_FUNC(sub_83C06AC8);
PPC_FUNC_IMPL(__imp__sub_83C06AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17608
	ctx.r3.s64 = ctx.r11.s64 + 17608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06AD4"))) PPC_WEAK_FUNC(sub_83C06AD4);
PPC_FUNC_IMPL(__imp__sub_83C06AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06AD8"))) PPC_WEAK_FUNC(sub_83C06AD8);
PPC_FUNC_IMPL(__imp__sub_83C06AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17616
	ctx.r3.s64 = ctx.r11.s64 + 17616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06AE4"))) PPC_WEAK_FUNC(sub_83C06AE4);
PPC_FUNC_IMPL(__imp__sub_83C06AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06AE8"))) PPC_WEAK_FUNC(sub_83C06AE8);
PPC_FUNC_IMPL(__imp__sub_83C06AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17624
	ctx.r3.s64 = ctx.r11.s64 + 17624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06AF4"))) PPC_WEAK_FUNC(sub_83C06AF4);
PPC_FUNC_IMPL(__imp__sub_83C06AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06AF8"))) PPC_WEAK_FUNC(sub_83C06AF8);
PPC_FUNC_IMPL(__imp__sub_83C06AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17632
	ctx.r3.s64 = ctx.r11.s64 + 17632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B04"))) PPC_WEAK_FUNC(sub_83C06B04);
PPC_FUNC_IMPL(__imp__sub_83C06B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B08"))) PPC_WEAK_FUNC(sub_83C06B08);
PPC_FUNC_IMPL(__imp__sub_83C06B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17640
	ctx.r3.s64 = ctx.r11.s64 + 17640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B14"))) PPC_WEAK_FUNC(sub_83C06B14);
PPC_FUNC_IMPL(__imp__sub_83C06B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B18"))) PPC_WEAK_FUNC(sub_83C06B18);
PPC_FUNC_IMPL(__imp__sub_83C06B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B24"))) PPC_WEAK_FUNC(sub_83C06B24);
PPC_FUNC_IMPL(__imp__sub_83C06B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B28"))) PPC_WEAK_FUNC(sub_83C06B28);
PPC_FUNC_IMPL(__imp__sub_83C06B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17656
	ctx.r3.s64 = ctx.r11.s64 + 17656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B34"))) PPC_WEAK_FUNC(sub_83C06B34);
PPC_FUNC_IMPL(__imp__sub_83C06B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B38"))) PPC_WEAK_FUNC(sub_83C06B38);
PPC_FUNC_IMPL(__imp__sub_83C06B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B44"))) PPC_WEAK_FUNC(sub_83C06B44);
PPC_FUNC_IMPL(__imp__sub_83C06B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B48"))) PPC_WEAK_FUNC(sub_83C06B48);
PPC_FUNC_IMPL(__imp__sub_83C06B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B54"))) PPC_WEAK_FUNC(sub_83C06B54);
PPC_FUNC_IMPL(__imp__sub_83C06B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B58"))) PPC_WEAK_FUNC(sub_83C06B58);
PPC_FUNC_IMPL(__imp__sub_83C06B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17680
	ctx.r3.s64 = ctx.r11.s64 + 17680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B64"))) PPC_WEAK_FUNC(sub_83C06B64);
PPC_FUNC_IMPL(__imp__sub_83C06B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B68"))) PPC_WEAK_FUNC(sub_83C06B68);
PPC_FUNC_IMPL(__imp__sub_83C06B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17688
	ctx.r3.s64 = ctx.r11.s64 + 17688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06B74"))) PPC_WEAK_FUNC(sub_83C06B74);
PPC_FUNC_IMPL(__imp__sub_83C06B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06B78"))) PPC_WEAK_FUNC(sub_83C06B78);
PPC_FUNC_IMPL(__imp__sub_83C06B78) {
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
	// addi r3,r11,-5784
	ctx.r3.s64 = ctx.r11.s64 + -5784;
	// bl 0x83523120
	ctx.lr = 0x83C06B90;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17696
	ctx.r3.s64 = ctx.r10.s64 + 17696;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06B9C;
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

__attribute__((alias("__imp__sub_83C06BAC"))) PPC_WEAK_FUNC(sub_83C06BAC);
PPC_FUNC_IMPL(__imp__sub_83C06BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06BB0"))) PPC_WEAK_FUNC(sub_83C06BB0);
PPC_FUNC_IMPL(__imp__sub_83C06BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-5768
	ctx.r7.s64 = ctx.r8.s64 + -5768;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-5768(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5768);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-5768(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5768, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C06BD8"))) PPC_WEAK_FUNC(sub_83C06BD8);
PPC_FUNC_IMPL(__imp__sub_83C06BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addi r6,r7,-32692
	ctx.r6.s64 = ctx.r7.s64 + -32692;
	// lis r3,-31758
	ctx.r3.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-32764(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -32764);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-5768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5768);
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
	// std r9,-32692(r7)
	PPC_STORE_U64(ctx.r7.u32 + -32692, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C06C20"))) PPC_WEAK_FUNC(sub_83C06C20);
PPC_FUNC_IMPL(__imp__sub_83C06C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,17712
	ctx.r3.s64 = ctx.r11.s64 + 17712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C06C2C"))) PPC_WEAK_FUNC(sub_83C06C2C);
PPC_FUNC_IMPL(__imp__sub_83C06C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06C30"))) PPC_WEAK_FUNC(sub_83C06C30);
PPC_FUNC_IMPL(__imp__sub_83C06C30) {
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
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// bl 0x8259af80
	ctx.lr = 0x83C06C48;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,17728
	ctx.r3.s64 = ctx.r10.s64 + 17728;
	// bl 0x831cdcc8
	ctx.lr = 0x83C06C54;
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

__attribute__((alias("__imp__sub_83C06C64"))) PPC_WEAK_FUNC(sub_83C06C64);
PPC_FUNC_IMPL(__imp__sub_83C06C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C06C68"))) PPC_WEAK_FUNC(sub_83C06C68);
PPC_FUNC_IMPL(__imp__sub_83C06C68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-5780
	ctx.r11.s64 = ctx.r8.s64 + -5780;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-32716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32716);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,17720
	ctx.r3.s64 = ctx.r6.s64 + 17720;
	// stw r10,-5780(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

