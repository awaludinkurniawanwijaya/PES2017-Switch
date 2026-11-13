#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C874D8"))) PPC_WEAK_FUNC(sub_83C874D8);
PPC_FUNC_IMPL(__imp__sub_83C874D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,1992
	ctx.r3.s64 = ctx.r11.s64 + 1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C874E4"))) PPC_WEAK_FUNC(sub_83C874E4);
PPC_FUNC_IMPL(__imp__sub_83C874E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C874E8"))) PPC_WEAK_FUNC(sub_83C874E8);
PPC_FUNC_IMPL(__imp__sub_83C874E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C874F4"))) PPC_WEAK_FUNC(sub_83C874F4);
PPC_FUNC_IMPL(__imp__sub_83C874F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C874F8"))) PPC_WEAK_FUNC(sub_83C874F8);
PPC_FUNC_IMPL(__imp__sub_83C874F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2008
	ctx.r3.s64 = ctx.r11.s64 + 2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87504"))) PPC_WEAK_FUNC(sub_83C87504);
PPC_FUNC_IMPL(__imp__sub_83C87504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87508"))) PPC_WEAK_FUNC(sub_83C87508);
PPC_FUNC_IMPL(__imp__sub_83C87508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87514"))) PPC_WEAK_FUNC(sub_83C87514);
PPC_FUNC_IMPL(__imp__sub_83C87514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87518"))) PPC_WEAK_FUNC(sub_83C87518);
PPC_FUNC_IMPL(__imp__sub_83C87518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2024
	ctx.r3.s64 = ctx.r11.s64 + 2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87524"))) PPC_WEAK_FUNC(sub_83C87524);
PPC_FUNC_IMPL(__imp__sub_83C87524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87528"))) PPC_WEAK_FUNC(sub_83C87528);
PPC_FUNC_IMPL(__imp__sub_83C87528) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24860
	ctx.r7.s64 = ctx.r8.s64 + 24860;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24860(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24860);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24860, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87550"))) PPC_WEAK_FUNC(sub_83C87550);
PPC_FUNC_IMPL(__imp__sub_83C87550) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// bl 0x83523120
	ctx.lr = 0x83C87568;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,2032
	ctx.r3.s64 = ctx.r10.s64 + 2032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87574;
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

__attribute__((alias("__imp__sub_83C87584"))) PPC_WEAK_FUNC(sub_83C87584);
PPC_FUNC_IMPL(__imp__sub_83C87584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87588"))) PPC_WEAK_FUNC(sub_83C87588);
PPC_FUNC_IMPL(__imp__sub_83C87588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87594"))) PPC_WEAK_FUNC(sub_83C87594);
PPC_FUNC_IMPL(__imp__sub_83C87594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87598"))) PPC_WEAK_FUNC(sub_83C87598);
PPC_FUNC_IMPL(__imp__sub_83C87598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2056
	ctx.r3.s64 = ctx.r11.s64 + 2056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C875A4"))) PPC_WEAK_FUNC(sub_83C875A4);
PPC_FUNC_IMPL(__imp__sub_83C875A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C875A8"))) PPC_WEAK_FUNC(sub_83C875A8);
PPC_FUNC_IMPL(__imp__sub_83C875A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2064
	ctx.r3.s64 = ctx.r11.s64 + 2064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C875B4"))) PPC_WEAK_FUNC(sub_83C875B4);
PPC_FUNC_IMPL(__imp__sub_83C875B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C875B8"))) PPC_WEAK_FUNC(sub_83C875B8);
PPC_FUNC_IMPL(__imp__sub_83C875B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2072
	ctx.r3.s64 = ctx.r11.s64 + 2072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C875C4"))) PPC_WEAK_FUNC(sub_83C875C4);
PPC_FUNC_IMPL(__imp__sub_83C875C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C875C8"))) PPC_WEAK_FUNC(sub_83C875C8);
PPC_FUNC_IMPL(__imp__sub_83C875C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2080
	ctx.r3.s64 = ctx.r11.s64 + 2080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C875D4"))) PPC_WEAK_FUNC(sub_83C875D4);
PPC_FUNC_IMPL(__imp__sub_83C875D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C875D8"))) PPC_WEAK_FUNC(sub_83C875D8);
PPC_FUNC_IMPL(__imp__sub_83C875D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C875E4"))) PPC_WEAK_FUNC(sub_83C875E4);
PPC_FUNC_IMPL(__imp__sub_83C875E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C875E8"))) PPC_WEAK_FUNC(sub_83C875E8);
PPC_FUNC_IMPL(__imp__sub_83C875E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C875F4"))) PPC_WEAK_FUNC(sub_83C875F4);
PPC_FUNC_IMPL(__imp__sub_83C875F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C875F8"))) PPC_WEAK_FUNC(sub_83C875F8);
PPC_FUNC_IMPL(__imp__sub_83C875F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2104
	ctx.r3.s64 = ctx.r11.s64 + 2104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87604"))) PPC_WEAK_FUNC(sub_83C87604);
PPC_FUNC_IMPL(__imp__sub_83C87604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87608"))) PPC_WEAK_FUNC(sub_83C87608);
PPC_FUNC_IMPL(__imp__sub_83C87608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2112
	ctx.r3.s64 = ctx.r11.s64 + 2112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87614"))) PPC_WEAK_FUNC(sub_83C87614);
PPC_FUNC_IMPL(__imp__sub_83C87614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87618"))) PPC_WEAK_FUNC(sub_83C87618);
PPC_FUNC_IMPL(__imp__sub_83C87618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2120
	ctx.r3.s64 = ctx.r11.s64 + 2120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87624"))) PPC_WEAK_FUNC(sub_83C87624);
PPC_FUNC_IMPL(__imp__sub_83C87624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87628"))) PPC_WEAK_FUNC(sub_83C87628);
PPC_FUNC_IMPL(__imp__sub_83C87628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87634"))) PPC_WEAK_FUNC(sub_83C87634);
PPC_FUNC_IMPL(__imp__sub_83C87634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87638"))) PPC_WEAK_FUNC(sub_83C87638);
PPC_FUNC_IMPL(__imp__sub_83C87638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87644"))) PPC_WEAK_FUNC(sub_83C87644);
PPC_FUNC_IMPL(__imp__sub_83C87644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87648"))) PPC_WEAK_FUNC(sub_83C87648);
PPC_FUNC_IMPL(__imp__sub_83C87648) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24872
	ctx.r7.s64 = ctx.r8.s64 + 24872;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24872);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24872(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24872, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87670"))) PPC_WEAK_FUNC(sub_83C87670);
PPC_FUNC_IMPL(__imp__sub_83C87670) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24868
	ctx.r3.s64 = ctx.r11.s64 + 24868;
	// bl 0x83523120
	ctx.lr = 0x83C87688;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,2144
	ctx.r3.s64 = ctx.r10.s64 + 2144;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87694;
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

__attribute__((alias("__imp__sub_83C876A4"))) PPC_WEAK_FUNC(sub_83C876A4);
PPC_FUNC_IMPL(__imp__sub_83C876A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C876A8"))) PPC_WEAK_FUNC(sub_83C876A8);
PPC_FUNC_IMPL(__imp__sub_83C876A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2160
	ctx.r3.s64 = ctx.r11.s64 + 2160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C876B4"))) PPC_WEAK_FUNC(sub_83C876B4);
PPC_FUNC_IMPL(__imp__sub_83C876B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C876B8"))) PPC_WEAK_FUNC(sub_83C876B8);
PPC_FUNC_IMPL(__imp__sub_83C876B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C876C4"))) PPC_WEAK_FUNC(sub_83C876C4);
PPC_FUNC_IMPL(__imp__sub_83C876C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C876C8"))) PPC_WEAK_FUNC(sub_83C876C8);
PPC_FUNC_IMPL(__imp__sub_83C876C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2176
	ctx.r3.s64 = ctx.r11.s64 + 2176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C876D4"))) PPC_WEAK_FUNC(sub_83C876D4);
PPC_FUNC_IMPL(__imp__sub_83C876D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C876D8"))) PPC_WEAK_FUNC(sub_83C876D8);
PPC_FUNC_IMPL(__imp__sub_83C876D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2184
	ctx.r3.s64 = ctx.r11.s64 + 2184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C876E4"))) PPC_WEAK_FUNC(sub_83C876E4);
PPC_FUNC_IMPL(__imp__sub_83C876E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C876E8"))) PPC_WEAK_FUNC(sub_83C876E8);
PPC_FUNC_IMPL(__imp__sub_83C876E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2192
	ctx.r3.s64 = ctx.r11.s64 + 2192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C876F4"))) PPC_WEAK_FUNC(sub_83C876F4);
PPC_FUNC_IMPL(__imp__sub_83C876F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C876F8"))) PPC_WEAK_FUNC(sub_83C876F8);
PPC_FUNC_IMPL(__imp__sub_83C876F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2200
	ctx.r3.s64 = ctx.r11.s64 + 2200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87704"))) PPC_WEAK_FUNC(sub_83C87704);
PPC_FUNC_IMPL(__imp__sub_83C87704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87708"))) PPC_WEAK_FUNC(sub_83C87708);
PPC_FUNC_IMPL(__imp__sub_83C87708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2208
	ctx.r3.s64 = ctx.r11.s64 + 2208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87714"))) PPC_WEAK_FUNC(sub_83C87714);
PPC_FUNC_IMPL(__imp__sub_83C87714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87718"))) PPC_WEAK_FUNC(sub_83C87718);
PPC_FUNC_IMPL(__imp__sub_83C87718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2216
	ctx.r3.s64 = ctx.r11.s64 + 2216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87724"))) PPC_WEAK_FUNC(sub_83C87724);
PPC_FUNC_IMPL(__imp__sub_83C87724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87728"))) PPC_WEAK_FUNC(sub_83C87728);
PPC_FUNC_IMPL(__imp__sub_83C87728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2224
	ctx.r3.s64 = ctx.r11.s64 + 2224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87734"))) PPC_WEAK_FUNC(sub_83C87734);
PPC_FUNC_IMPL(__imp__sub_83C87734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87738"))) PPC_WEAK_FUNC(sub_83C87738);
PPC_FUNC_IMPL(__imp__sub_83C87738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2232
	ctx.r3.s64 = ctx.r11.s64 + 2232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87744"))) PPC_WEAK_FUNC(sub_83C87744);
PPC_FUNC_IMPL(__imp__sub_83C87744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87748"))) PPC_WEAK_FUNC(sub_83C87748);
PPC_FUNC_IMPL(__imp__sub_83C87748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2240
	ctx.r3.s64 = ctx.r11.s64 + 2240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87754"))) PPC_WEAK_FUNC(sub_83C87754);
PPC_FUNC_IMPL(__imp__sub_83C87754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87758"))) PPC_WEAK_FUNC(sub_83C87758);
PPC_FUNC_IMPL(__imp__sub_83C87758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2248
	ctx.r3.s64 = ctx.r11.s64 + 2248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87764"))) PPC_WEAK_FUNC(sub_83C87764);
PPC_FUNC_IMPL(__imp__sub_83C87764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87768"))) PPC_WEAK_FUNC(sub_83C87768);
PPC_FUNC_IMPL(__imp__sub_83C87768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2256
	ctx.r3.s64 = ctx.r11.s64 + 2256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87774"))) PPC_WEAK_FUNC(sub_83C87774);
PPC_FUNC_IMPL(__imp__sub_83C87774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87778"))) PPC_WEAK_FUNC(sub_83C87778);
PPC_FUNC_IMPL(__imp__sub_83C87778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2264
	ctx.r3.s64 = ctx.r11.s64 + 2264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87784"))) PPC_WEAK_FUNC(sub_83C87784);
PPC_FUNC_IMPL(__imp__sub_83C87784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87788"))) PPC_WEAK_FUNC(sub_83C87788);
PPC_FUNC_IMPL(__imp__sub_83C87788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2272
	ctx.r3.s64 = ctx.r11.s64 + 2272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87794"))) PPC_WEAK_FUNC(sub_83C87794);
PPC_FUNC_IMPL(__imp__sub_83C87794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87798"))) PPC_WEAK_FUNC(sub_83C87798);
PPC_FUNC_IMPL(__imp__sub_83C87798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2280
	ctx.r3.s64 = ctx.r11.s64 + 2280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C877A4"))) PPC_WEAK_FUNC(sub_83C877A4);
PPC_FUNC_IMPL(__imp__sub_83C877A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C877A8"))) PPC_WEAK_FUNC(sub_83C877A8);
PPC_FUNC_IMPL(__imp__sub_83C877A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2288
	ctx.r3.s64 = ctx.r11.s64 + 2288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C877B4"))) PPC_WEAK_FUNC(sub_83C877B4);
PPC_FUNC_IMPL(__imp__sub_83C877B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C877B8"))) PPC_WEAK_FUNC(sub_83C877B8);
PPC_FUNC_IMPL(__imp__sub_83C877B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2296
	ctx.r3.s64 = ctx.r11.s64 + 2296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C877C4"))) PPC_WEAK_FUNC(sub_83C877C4);
PPC_FUNC_IMPL(__imp__sub_83C877C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C877C8"))) PPC_WEAK_FUNC(sub_83C877C8);
PPC_FUNC_IMPL(__imp__sub_83C877C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2304
	ctx.r3.s64 = ctx.r11.s64 + 2304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C877D4"))) PPC_WEAK_FUNC(sub_83C877D4);
PPC_FUNC_IMPL(__imp__sub_83C877D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C877D8"))) PPC_WEAK_FUNC(sub_83C877D8);
PPC_FUNC_IMPL(__imp__sub_83C877D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2312
	ctx.r3.s64 = ctx.r11.s64 + 2312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C877E4"))) PPC_WEAK_FUNC(sub_83C877E4);
PPC_FUNC_IMPL(__imp__sub_83C877E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C877E8"))) PPC_WEAK_FUNC(sub_83C877E8);
PPC_FUNC_IMPL(__imp__sub_83C877E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2320
	ctx.r3.s64 = ctx.r11.s64 + 2320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C877F4"))) PPC_WEAK_FUNC(sub_83C877F4);
PPC_FUNC_IMPL(__imp__sub_83C877F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C877F8"))) PPC_WEAK_FUNC(sub_83C877F8);
PPC_FUNC_IMPL(__imp__sub_83C877F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2328
	ctx.r3.s64 = ctx.r11.s64 + 2328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87804"))) PPC_WEAK_FUNC(sub_83C87804);
PPC_FUNC_IMPL(__imp__sub_83C87804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87808"))) PPC_WEAK_FUNC(sub_83C87808);
PPC_FUNC_IMPL(__imp__sub_83C87808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2336
	ctx.r3.s64 = ctx.r11.s64 + 2336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87814"))) PPC_WEAK_FUNC(sub_83C87814);
PPC_FUNC_IMPL(__imp__sub_83C87814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87818"))) PPC_WEAK_FUNC(sub_83C87818);
PPC_FUNC_IMPL(__imp__sub_83C87818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2344
	ctx.r3.s64 = ctx.r11.s64 + 2344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87824"))) PPC_WEAK_FUNC(sub_83C87824);
PPC_FUNC_IMPL(__imp__sub_83C87824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87828"))) PPC_WEAK_FUNC(sub_83C87828);
PPC_FUNC_IMPL(__imp__sub_83C87828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2352
	ctx.r3.s64 = ctx.r11.s64 + 2352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87834"))) PPC_WEAK_FUNC(sub_83C87834);
PPC_FUNC_IMPL(__imp__sub_83C87834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87838"))) PPC_WEAK_FUNC(sub_83C87838);
PPC_FUNC_IMPL(__imp__sub_83C87838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2360
	ctx.r3.s64 = ctx.r11.s64 + 2360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87844"))) PPC_WEAK_FUNC(sub_83C87844);
PPC_FUNC_IMPL(__imp__sub_83C87844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87848"))) PPC_WEAK_FUNC(sub_83C87848);
PPC_FUNC_IMPL(__imp__sub_83C87848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2368
	ctx.r3.s64 = ctx.r11.s64 + 2368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87854"))) PPC_WEAK_FUNC(sub_83C87854);
PPC_FUNC_IMPL(__imp__sub_83C87854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87858"))) PPC_WEAK_FUNC(sub_83C87858);
PPC_FUNC_IMPL(__imp__sub_83C87858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2376
	ctx.r3.s64 = ctx.r11.s64 + 2376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87864"))) PPC_WEAK_FUNC(sub_83C87864);
PPC_FUNC_IMPL(__imp__sub_83C87864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87868"))) PPC_WEAK_FUNC(sub_83C87868);
PPC_FUNC_IMPL(__imp__sub_83C87868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2384
	ctx.r3.s64 = ctx.r11.s64 + 2384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87874"))) PPC_WEAK_FUNC(sub_83C87874);
PPC_FUNC_IMPL(__imp__sub_83C87874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87878"))) PPC_WEAK_FUNC(sub_83C87878);
PPC_FUNC_IMPL(__imp__sub_83C87878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2392
	ctx.r3.s64 = ctx.r11.s64 + 2392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87884"))) PPC_WEAK_FUNC(sub_83C87884);
PPC_FUNC_IMPL(__imp__sub_83C87884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87888"))) PPC_WEAK_FUNC(sub_83C87888);
PPC_FUNC_IMPL(__imp__sub_83C87888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2400
	ctx.r3.s64 = ctx.r11.s64 + 2400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87894"))) PPC_WEAK_FUNC(sub_83C87894);
PPC_FUNC_IMPL(__imp__sub_83C87894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87898"))) PPC_WEAK_FUNC(sub_83C87898);
PPC_FUNC_IMPL(__imp__sub_83C87898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2408
	ctx.r3.s64 = ctx.r11.s64 + 2408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C878A4"))) PPC_WEAK_FUNC(sub_83C878A4);
PPC_FUNC_IMPL(__imp__sub_83C878A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C878A8"))) PPC_WEAK_FUNC(sub_83C878A8);
PPC_FUNC_IMPL(__imp__sub_83C878A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2416
	ctx.r3.s64 = ctx.r11.s64 + 2416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C878B4"))) PPC_WEAK_FUNC(sub_83C878B4);
PPC_FUNC_IMPL(__imp__sub_83C878B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C878B8"))) PPC_WEAK_FUNC(sub_83C878B8);
PPC_FUNC_IMPL(__imp__sub_83C878B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 2424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C878C4"))) PPC_WEAK_FUNC(sub_83C878C4);
PPC_FUNC_IMPL(__imp__sub_83C878C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C878C8"))) PPC_WEAK_FUNC(sub_83C878C8);
PPC_FUNC_IMPL(__imp__sub_83C878C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C878D4"))) PPC_WEAK_FUNC(sub_83C878D4);
PPC_FUNC_IMPL(__imp__sub_83C878D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C878D8"))) PPC_WEAK_FUNC(sub_83C878D8);
PPC_FUNC_IMPL(__imp__sub_83C878D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2440
	ctx.r3.s64 = ctx.r11.s64 + 2440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C878E4"))) PPC_WEAK_FUNC(sub_83C878E4);
PPC_FUNC_IMPL(__imp__sub_83C878E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C878E8"))) PPC_WEAK_FUNC(sub_83C878E8);
PPC_FUNC_IMPL(__imp__sub_83C878E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2448
	ctx.r3.s64 = ctx.r11.s64 + 2448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C878F4"))) PPC_WEAK_FUNC(sub_83C878F4);
PPC_FUNC_IMPL(__imp__sub_83C878F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C878F8"))) PPC_WEAK_FUNC(sub_83C878F8);
PPC_FUNC_IMPL(__imp__sub_83C878F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87904"))) PPC_WEAK_FUNC(sub_83C87904);
PPC_FUNC_IMPL(__imp__sub_83C87904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87908"))) PPC_WEAK_FUNC(sub_83C87908);
PPC_FUNC_IMPL(__imp__sub_83C87908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2464
	ctx.r3.s64 = ctx.r11.s64 + 2464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87914"))) PPC_WEAK_FUNC(sub_83C87914);
PPC_FUNC_IMPL(__imp__sub_83C87914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87918"))) PPC_WEAK_FUNC(sub_83C87918);
PPC_FUNC_IMPL(__imp__sub_83C87918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2472
	ctx.r3.s64 = ctx.r11.s64 + 2472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87924"))) PPC_WEAK_FUNC(sub_83C87924);
PPC_FUNC_IMPL(__imp__sub_83C87924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87928"))) PPC_WEAK_FUNC(sub_83C87928);
PPC_FUNC_IMPL(__imp__sub_83C87928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2480
	ctx.r3.s64 = ctx.r11.s64 + 2480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87934"))) PPC_WEAK_FUNC(sub_83C87934);
PPC_FUNC_IMPL(__imp__sub_83C87934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87938"))) PPC_WEAK_FUNC(sub_83C87938);
PPC_FUNC_IMPL(__imp__sub_83C87938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2488
	ctx.r3.s64 = ctx.r11.s64 + 2488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87944"))) PPC_WEAK_FUNC(sub_83C87944);
PPC_FUNC_IMPL(__imp__sub_83C87944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87948"))) PPC_WEAK_FUNC(sub_83C87948);
PPC_FUNC_IMPL(__imp__sub_83C87948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2496
	ctx.r3.s64 = ctx.r11.s64 + 2496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87954"))) PPC_WEAK_FUNC(sub_83C87954);
PPC_FUNC_IMPL(__imp__sub_83C87954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87958"))) PPC_WEAK_FUNC(sub_83C87958);
PPC_FUNC_IMPL(__imp__sub_83C87958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87964"))) PPC_WEAK_FUNC(sub_83C87964);
PPC_FUNC_IMPL(__imp__sub_83C87964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87968"))) PPC_WEAK_FUNC(sub_83C87968);
PPC_FUNC_IMPL(__imp__sub_83C87968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2512
	ctx.r3.s64 = ctx.r11.s64 + 2512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87974"))) PPC_WEAK_FUNC(sub_83C87974);
PPC_FUNC_IMPL(__imp__sub_83C87974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87978"))) PPC_WEAK_FUNC(sub_83C87978);
PPC_FUNC_IMPL(__imp__sub_83C87978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2520
	ctx.r3.s64 = ctx.r11.s64 + 2520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87984"))) PPC_WEAK_FUNC(sub_83C87984);
PPC_FUNC_IMPL(__imp__sub_83C87984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87988"))) PPC_WEAK_FUNC(sub_83C87988);
PPC_FUNC_IMPL(__imp__sub_83C87988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2528
	ctx.r3.s64 = ctx.r11.s64 + 2528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87994"))) PPC_WEAK_FUNC(sub_83C87994);
PPC_FUNC_IMPL(__imp__sub_83C87994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87998"))) PPC_WEAK_FUNC(sub_83C87998);
PPC_FUNC_IMPL(__imp__sub_83C87998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2536
	ctx.r3.s64 = ctx.r11.s64 + 2536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C879A4"))) PPC_WEAK_FUNC(sub_83C879A4);
PPC_FUNC_IMPL(__imp__sub_83C879A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C879A8"))) PPC_WEAK_FUNC(sub_83C879A8);
PPC_FUNC_IMPL(__imp__sub_83C879A8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,24912
	ctx.r7.s64 = ctx.r8.s64 + 24912;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24912);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,24912(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24912, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C879D0"))) PPC_WEAK_FUNC(sub_83C879D0);
PPC_FUNC_IMPL(__imp__sub_83C879D0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24896
	ctx.r3.s64 = ctx.r11.s64 + 24896;
	// bl 0x83523120
	ctx.lr = 0x83C879E8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,2544
	ctx.r3.s64 = ctx.r10.s64 + 2544;
	// bl 0x831cdcc8
	ctx.lr = 0x83C879F4;
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

__attribute__((alias("__imp__sub_83C87A04"))) PPC_WEAK_FUNC(sub_83C87A04);
PPC_FUNC_IMPL(__imp__sub_83C87A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87A08"))) PPC_WEAK_FUNC(sub_83C87A08);
PPC_FUNC_IMPL(__imp__sub_83C87A08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// addi r6,r7,-29624
	ctx.r6.s64 = ctx.r7.s64 + -29624;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-29708(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -29708);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,24912(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24912);
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
	// std r9,-29624(r7)
	PPC_STORE_U64(ctx.r7.u32 + -29624, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87A50"))) PPC_WEAK_FUNC(sub_83C87A50);
PPC_FUNC_IMPL(__imp__sub_83C87A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2560
	ctx.r3.s64 = ctx.r11.s64 + 2560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87A5C"))) PPC_WEAK_FUNC(sub_83C87A5C);
PPC_FUNC_IMPL(__imp__sub_83C87A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87A60"))) PPC_WEAK_FUNC(sub_83C87A60);
PPC_FUNC_IMPL(__imp__sub_83C87A60) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,24920
	ctx.r3.s64 = ctx.r11.s64 + 24920;
	// bl 0x8259af80
	ctx.lr = 0x83C87A78;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,2576
	ctx.r3.s64 = ctx.r10.s64 + 2576;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87A84;
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

__attribute__((alias("__imp__sub_83C87A94"))) PPC_WEAK_FUNC(sub_83C87A94);
PPC_FUNC_IMPL(__imp__sub_83C87A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87A98"))) PPC_WEAK_FUNC(sub_83C87A98);
PPC_FUNC_IMPL(__imp__sub_83C87A98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,24900
	ctx.r11.s64 = ctx.r8.s64 + 24900;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-29660(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29660);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2568
	ctx.r3.s64 = ctx.r6.s64 + 2568;
	// stw r10,24900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87AC8"))) PPC_WEAK_FUNC(sub_83C87AC8);
PPC_FUNC_IMPL(__imp__sub_83C87AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2584
	ctx.r3.s64 = ctx.r11.s64 + 2584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87AD4"))) PPC_WEAK_FUNC(sub_83C87AD4);
PPC_FUNC_IMPL(__imp__sub_83C87AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87AD8"))) PPC_WEAK_FUNC(sub_83C87AD8);
PPC_FUNC_IMPL(__imp__sub_83C87AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2592
	ctx.r3.s64 = ctx.r11.s64 + 2592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87AE4"))) PPC_WEAK_FUNC(sub_83C87AE4);
PPC_FUNC_IMPL(__imp__sub_83C87AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87AE8"))) PPC_WEAK_FUNC(sub_83C87AE8);
PPC_FUNC_IMPL(__imp__sub_83C87AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2600
	ctx.r3.s64 = ctx.r11.s64 + 2600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87AF4"))) PPC_WEAK_FUNC(sub_83C87AF4);
PPC_FUNC_IMPL(__imp__sub_83C87AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87AF8"))) PPC_WEAK_FUNC(sub_83C87AF8);
PPC_FUNC_IMPL(__imp__sub_83C87AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2608
	ctx.r3.s64 = ctx.r11.s64 + 2608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B04"))) PPC_WEAK_FUNC(sub_83C87B04);
PPC_FUNC_IMPL(__imp__sub_83C87B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B08"))) PPC_WEAK_FUNC(sub_83C87B08);
PPC_FUNC_IMPL(__imp__sub_83C87B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B14"))) PPC_WEAK_FUNC(sub_83C87B14);
PPC_FUNC_IMPL(__imp__sub_83C87B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B18"))) PPC_WEAK_FUNC(sub_83C87B18);
PPC_FUNC_IMPL(__imp__sub_83C87B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2624
	ctx.r3.s64 = ctx.r11.s64 + 2624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B24"))) PPC_WEAK_FUNC(sub_83C87B24);
PPC_FUNC_IMPL(__imp__sub_83C87B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B28"))) PPC_WEAK_FUNC(sub_83C87B28);
PPC_FUNC_IMPL(__imp__sub_83C87B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2632
	ctx.r3.s64 = ctx.r11.s64 + 2632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B34"))) PPC_WEAK_FUNC(sub_83C87B34);
PPC_FUNC_IMPL(__imp__sub_83C87B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B38"))) PPC_WEAK_FUNC(sub_83C87B38);
PPC_FUNC_IMPL(__imp__sub_83C87B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2640
	ctx.r3.s64 = ctx.r11.s64 + 2640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B44"))) PPC_WEAK_FUNC(sub_83C87B44);
PPC_FUNC_IMPL(__imp__sub_83C87B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B48"))) PPC_WEAK_FUNC(sub_83C87B48);
PPC_FUNC_IMPL(__imp__sub_83C87B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B54"))) PPC_WEAK_FUNC(sub_83C87B54);
PPC_FUNC_IMPL(__imp__sub_83C87B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B58"))) PPC_WEAK_FUNC(sub_83C87B58);
PPC_FUNC_IMPL(__imp__sub_83C87B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2656
	ctx.r3.s64 = ctx.r11.s64 + 2656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B64"))) PPC_WEAK_FUNC(sub_83C87B64);
PPC_FUNC_IMPL(__imp__sub_83C87B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B68"))) PPC_WEAK_FUNC(sub_83C87B68);
PPC_FUNC_IMPL(__imp__sub_83C87B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2664
	ctx.r3.s64 = ctx.r11.s64 + 2664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B74"))) PPC_WEAK_FUNC(sub_83C87B74);
PPC_FUNC_IMPL(__imp__sub_83C87B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B78"))) PPC_WEAK_FUNC(sub_83C87B78);
PPC_FUNC_IMPL(__imp__sub_83C87B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87B84"))) PPC_WEAK_FUNC(sub_83C87B84);
PPC_FUNC_IMPL(__imp__sub_83C87B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87B88"))) PPC_WEAK_FUNC(sub_83C87B88);
PPC_FUNC_IMPL(__imp__sub_83C87B88) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25268
	ctx.r7.s64 = ctx.r8.s64 + 25268;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25268(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25268);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25268(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25268, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C87BB0"))) PPC_WEAK_FUNC(sub_83C87BB0);
PPC_FUNC_IMPL(__imp__sub_83C87BB0) {
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
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,25264
	ctx.r3.s64 = ctx.r11.s64 + 25264;
	// bl 0x83523120
	ctx.lr = 0x83C87BC8;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,2680
	ctx.r3.s64 = ctx.r10.s64 + 2680;
	// bl 0x831cdcc8
	ctx.lr = 0x83C87BD4;
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

__attribute__((alias("__imp__sub_83C87BE4"))) PPC_WEAK_FUNC(sub_83C87BE4);
PPC_FUNC_IMPL(__imp__sub_83C87BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87BE8"))) PPC_WEAK_FUNC(sub_83C87BE8);
PPC_FUNC_IMPL(__imp__sub_83C87BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2696
	ctx.r3.s64 = ctx.r11.s64 + 2696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87BF4"))) PPC_WEAK_FUNC(sub_83C87BF4);
PPC_FUNC_IMPL(__imp__sub_83C87BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87BF8"))) PPC_WEAK_FUNC(sub_83C87BF8);
PPC_FUNC_IMPL(__imp__sub_83C87BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C04"))) PPC_WEAK_FUNC(sub_83C87C04);
PPC_FUNC_IMPL(__imp__sub_83C87C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C08"))) PPC_WEAK_FUNC(sub_83C87C08);
PPC_FUNC_IMPL(__imp__sub_83C87C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2712
	ctx.r3.s64 = ctx.r11.s64 + 2712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C14"))) PPC_WEAK_FUNC(sub_83C87C14);
PPC_FUNC_IMPL(__imp__sub_83C87C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C18"))) PPC_WEAK_FUNC(sub_83C87C18);
PPC_FUNC_IMPL(__imp__sub_83C87C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2720
	ctx.r3.s64 = ctx.r11.s64 + 2720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C24"))) PPC_WEAK_FUNC(sub_83C87C24);
PPC_FUNC_IMPL(__imp__sub_83C87C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C28"))) PPC_WEAK_FUNC(sub_83C87C28);
PPC_FUNC_IMPL(__imp__sub_83C87C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2728
	ctx.r3.s64 = ctx.r11.s64 + 2728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C34"))) PPC_WEAK_FUNC(sub_83C87C34);
PPC_FUNC_IMPL(__imp__sub_83C87C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C38"))) PPC_WEAK_FUNC(sub_83C87C38);
PPC_FUNC_IMPL(__imp__sub_83C87C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C44"))) PPC_WEAK_FUNC(sub_83C87C44);
PPC_FUNC_IMPL(__imp__sub_83C87C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C48"))) PPC_WEAK_FUNC(sub_83C87C48);
PPC_FUNC_IMPL(__imp__sub_83C87C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2744
	ctx.r3.s64 = ctx.r11.s64 + 2744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C54"))) PPC_WEAK_FUNC(sub_83C87C54);
PPC_FUNC_IMPL(__imp__sub_83C87C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C58"))) PPC_WEAK_FUNC(sub_83C87C58);
PPC_FUNC_IMPL(__imp__sub_83C87C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2752
	ctx.r3.s64 = ctx.r11.s64 + 2752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C64"))) PPC_WEAK_FUNC(sub_83C87C64);
PPC_FUNC_IMPL(__imp__sub_83C87C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C68"))) PPC_WEAK_FUNC(sub_83C87C68);
PPC_FUNC_IMPL(__imp__sub_83C87C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2760
	ctx.r3.s64 = ctx.r11.s64 + 2760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C74"))) PPC_WEAK_FUNC(sub_83C87C74);
PPC_FUNC_IMPL(__imp__sub_83C87C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C78"))) PPC_WEAK_FUNC(sub_83C87C78);
PPC_FUNC_IMPL(__imp__sub_83C87C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C84"))) PPC_WEAK_FUNC(sub_83C87C84);
PPC_FUNC_IMPL(__imp__sub_83C87C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C88"))) PPC_WEAK_FUNC(sub_83C87C88);
PPC_FUNC_IMPL(__imp__sub_83C87C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2776
	ctx.r3.s64 = ctx.r11.s64 + 2776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87C94"))) PPC_WEAK_FUNC(sub_83C87C94);
PPC_FUNC_IMPL(__imp__sub_83C87C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87C98"))) PPC_WEAK_FUNC(sub_83C87C98);
PPC_FUNC_IMPL(__imp__sub_83C87C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2784
	ctx.r3.s64 = ctx.r11.s64 + 2784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87CA4"))) PPC_WEAK_FUNC(sub_83C87CA4);
PPC_FUNC_IMPL(__imp__sub_83C87CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87CA8"))) PPC_WEAK_FUNC(sub_83C87CA8);
PPC_FUNC_IMPL(__imp__sub_83C87CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2792
	ctx.r3.s64 = ctx.r11.s64 + 2792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87CB4"))) PPC_WEAK_FUNC(sub_83C87CB4);
PPC_FUNC_IMPL(__imp__sub_83C87CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87CB8"))) PPC_WEAK_FUNC(sub_83C87CB8);
PPC_FUNC_IMPL(__imp__sub_83C87CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2800
	ctx.r3.s64 = ctx.r11.s64 + 2800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87CC4"))) PPC_WEAK_FUNC(sub_83C87CC4);
PPC_FUNC_IMPL(__imp__sub_83C87CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87CC8"))) PPC_WEAK_FUNC(sub_83C87CC8);
PPC_FUNC_IMPL(__imp__sub_83C87CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87CD4"))) PPC_WEAK_FUNC(sub_83C87CD4);
PPC_FUNC_IMPL(__imp__sub_83C87CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87CD8"))) PPC_WEAK_FUNC(sub_83C87CD8);
PPC_FUNC_IMPL(__imp__sub_83C87CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87CE4"))) PPC_WEAK_FUNC(sub_83C87CE4);
PPC_FUNC_IMPL(__imp__sub_83C87CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87CE8"))) PPC_WEAK_FUNC(sub_83C87CE8);
PPC_FUNC_IMPL(__imp__sub_83C87CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2824
	ctx.r3.s64 = ctx.r11.s64 + 2824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87CF4"))) PPC_WEAK_FUNC(sub_83C87CF4);
PPC_FUNC_IMPL(__imp__sub_83C87CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87CF8"))) PPC_WEAK_FUNC(sub_83C87CF8);
PPC_FUNC_IMPL(__imp__sub_83C87CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2832
	ctx.r3.s64 = ctx.r11.s64 + 2832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D04"))) PPC_WEAK_FUNC(sub_83C87D04);
PPC_FUNC_IMPL(__imp__sub_83C87D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D08"))) PPC_WEAK_FUNC(sub_83C87D08);
PPC_FUNC_IMPL(__imp__sub_83C87D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2840
	ctx.r3.s64 = ctx.r11.s64 + 2840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D14"))) PPC_WEAK_FUNC(sub_83C87D14);
PPC_FUNC_IMPL(__imp__sub_83C87D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D18"))) PPC_WEAK_FUNC(sub_83C87D18);
PPC_FUNC_IMPL(__imp__sub_83C87D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2848
	ctx.r3.s64 = ctx.r11.s64 + 2848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D24"))) PPC_WEAK_FUNC(sub_83C87D24);
PPC_FUNC_IMPL(__imp__sub_83C87D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D28"))) PPC_WEAK_FUNC(sub_83C87D28);
PPC_FUNC_IMPL(__imp__sub_83C87D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2856
	ctx.r3.s64 = ctx.r11.s64 + 2856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D34"))) PPC_WEAK_FUNC(sub_83C87D34);
PPC_FUNC_IMPL(__imp__sub_83C87D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D38"))) PPC_WEAK_FUNC(sub_83C87D38);
PPC_FUNC_IMPL(__imp__sub_83C87D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2864
	ctx.r3.s64 = ctx.r11.s64 + 2864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D44"))) PPC_WEAK_FUNC(sub_83C87D44);
PPC_FUNC_IMPL(__imp__sub_83C87D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D48"))) PPC_WEAK_FUNC(sub_83C87D48);
PPC_FUNC_IMPL(__imp__sub_83C87D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2872
	ctx.r3.s64 = ctx.r11.s64 + 2872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D54"))) PPC_WEAK_FUNC(sub_83C87D54);
PPC_FUNC_IMPL(__imp__sub_83C87D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D58"))) PPC_WEAK_FUNC(sub_83C87D58);
PPC_FUNC_IMPL(__imp__sub_83C87D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2880
	ctx.r3.s64 = ctx.r11.s64 + 2880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D64"))) PPC_WEAK_FUNC(sub_83C87D64);
PPC_FUNC_IMPL(__imp__sub_83C87D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D68"))) PPC_WEAK_FUNC(sub_83C87D68);
PPC_FUNC_IMPL(__imp__sub_83C87D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D74"))) PPC_WEAK_FUNC(sub_83C87D74);
PPC_FUNC_IMPL(__imp__sub_83C87D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D78"))) PPC_WEAK_FUNC(sub_83C87D78);
PPC_FUNC_IMPL(__imp__sub_83C87D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D84"))) PPC_WEAK_FUNC(sub_83C87D84);
PPC_FUNC_IMPL(__imp__sub_83C87D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D88"))) PPC_WEAK_FUNC(sub_83C87D88);
PPC_FUNC_IMPL(__imp__sub_83C87D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2904
	ctx.r3.s64 = ctx.r11.s64 + 2904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87D94"))) PPC_WEAK_FUNC(sub_83C87D94);
PPC_FUNC_IMPL(__imp__sub_83C87D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87D98"))) PPC_WEAK_FUNC(sub_83C87D98);
PPC_FUNC_IMPL(__imp__sub_83C87D98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2912
	ctx.r3.s64 = ctx.r11.s64 + 2912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87DA4"))) PPC_WEAK_FUNC(sub_83C87DA4);
PPC_FUNC_IMPL(__imp__sub_83C87DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87DA8"))) PPC_WEAK_FUNC(sub_83C87DA8);
PPC_FUNC_IMPL(__imp__sub_83C87DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2920
	ctx.r3.s64 = ctx.r11.s64 + 2920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87DB4"))) PPC_WEAK_FUNC(sub_83C87DB4);
PPC_FUNC_IMPL(__imp__sub_83C87DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87DB8"))) PPC_WEAK_FUNC(sub_83C87DB8);
PPC_FUNC_IMPL(__imp__sub_83C87DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2928
	ctx.r3.s64 = ctx.r11.s64 + 2928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87DC4"))) PPC_WEAK_FUNC(sub_83C87DC4);
PPC_FUNC_IMPL(__imp__sub_83C87DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87DC8"))) PPC_WEAK_FUNC(sub_83C87DC8);
PPC_FUNC_IMPL(__imp__sub_83C87DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2936
	ctx.r3.s64 = ctx.r11.s64 + 2936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87DD4"))) PPC_WEAK_FUNC(sub_83C87DD4);
PPC_FUNC_IMPL(__imp__sub_83C87DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87DD8"))) PPC_WEAK_FUNC(sub_83C87DD8);
PPC_FUNC_IMPL(__imp__sub_83C87DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2944
	ctx.r3.s64 = ctx.r11.s64 + 2944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87DE4"))) PPC_WEAK_FUNC(sub_83C87DE4);
PPC_FUNC_IMPL(__imp__sub_83C87DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87DE8"))) PPC_WEAK_FUNC(sub_83C87DE8);
PPC_FUNC_IMPL(__imp__sub_83C87DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2952
	ctx.r3.s64 = ctx.r11.s64 + 2952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87DF4"))) PPC_WEAK_FUNC(sub_83C87DF4);
PPC_FUNC_IMPL(__imp__sub_83C87DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87DF8"))) PPC_WEAK_FUNC(sub_83C87DF8);
PPC_FUNC_IMPL(__imp__sub_83C87DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2960
	ctx.r3.s64 = ctx.r11.s64 + 2960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E04"))) PPC_WEAK_FUNC(sub_83C87E04);
PPC_FUNC_IMPL(__imp__sub_83C87E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E08"))) PPC_WEAK_FUNC(sub_83C87E08);
PPC_FUNC_IMPL(__imp__sub_83C87E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2968
	ctx.r3.s64 = ctx.r11.s64 + 2968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E14"))) PPC_WEAK_FUNC(sub_83C87E14);
PPC_FUNC_IMPL(__imp__sub_83C87E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E18"))) PPC_WEAK_FUNC(sub_83C87E18);
PPC_FUNC_IMPL(__imp__sub_83C87E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2976
	ctx.r3.s64 = ctx.r11.s64 + 2976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E24"))) PPC_WEAK_FUNC(sub_83C87E24);
PPC_FUNC_IMPL(__imp__sub_83C87E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E28"))) PPC_WEAK_FUNC(sub_83C87E28);
PPC_FUNC_IMPL(__imp__sub_83C87E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2984
	ctx.r3.s64 = ctx.r11.s64 + 2984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E34"))) PPC_WEAK_FUNC(sub_83C87E34);
PPC_FUNC_IMPL(__imp__sub_83C87E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E38"))) PPC_WEAK_FUNC(sub_83C87E38);
PPC_FUNC_IMPL(__imp__sub_83C87E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,2992
	ctx.r3.s64 = ctx.r11.s64 + 2992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E44"))) PPC_WEAK_FUNC(sub_83C87E44);
PPC_FUNC_IMPL(__imp__sub_83C87E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E48"))) PPC_WEAK_FUNC(sub_83C87E48);
PPC_FUNC_IMPL(__imp__sub_83C87E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,3000
	ctx.r3.s64 = ctx.r11.s64 + 3000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E54"))) PPC_WEAK_FUNC(sub_83C87E54);
PPC_FUNC_IMPL(__imp__sub_83C87E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E58"))) PPC_WEAK_FUNC(sub_83C87E58);
PPC_FUNC_IMPL(__imp__sub_83C87E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,3008
	ctx.r3.s64 = ctx.r11.s64 + 3008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E64"))) PPC_WEAK_FUNC(sub_83C87E64);
PPC_FUNC_IMPL(__imp__sub_83C87E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E68"))) PPC_WEAK_FUNC(sub_83C87E68);
PPC_FUNC_IMPL(__imp__sub_83C87E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,3016
	ctx.r3.s64 = ctx.r11.s64 + 3016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E74"))) PPC_WEAK_FUNC(sub_83C87E74);
PPC_FUNC_IMPL(__imp__sub_83C87E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C87E78"))) PPC_WEAK_FUNC(sub_83C87E78);
PPC_FUNC_IMPL(__imp__sub_83C87E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,3024
	ctx.r3.s64 = ctx.r11.s64 + 3024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C87E84"))) PPC_WEAK_FUNC(sub_83C87E84);
PPC_FUNC_IMPL(__imp__sub_83C87E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

