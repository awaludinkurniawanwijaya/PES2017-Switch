#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C7CFE4"))) PPC_WEAK_FUNC(sub_83C7CFE4);
PPC_FUNC_IMPL(__imp__sub_83C7CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CFE8"))) PPC_WEAK_FUNC(sub_83C7CFE8);
PPC_FUNC_IMPL(__imp__sub_83C7CFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14864
	ctx.r3.s64 = ctx.r11.s64 + -14864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7CFF4"))) PPC_WEAK_FUNC(sub_83C7CFF4);
PPC_FUNC_IMPL(__imp__sub_83C7CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7CFF8"))) PPC_WEAK_FUNC(sub_83C7CFF8);
PPC_FUNC_IMPL(__imp__sub_83C7CFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14856
	ctx.r3.s64 = ctx.r11.s64 + -14856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D004"))) PPC_WEAK_FUNC(sub_83C7D004);
PPC_FUNC_IMPL(__imp__sub_83C7D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D008"))) PPC_WEAK_FUNC(sub_83C7D008);
PPC_FUNC_IMPL(__imp__sub_83C7D008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14848
	ctx.r3.s64 = ctx.r11.s64 + -14848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D014"))) PPC_WEAK_FUNC(sub_83C7D014);
PPC_FUNC_IMPL(__imp__sub_83C7D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D018"))) PPC_WEAK_FUNC(sub_83C7D018);
PPC_FUNC_IMPL(__imp__sub_83C7D018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14840
	ctx.r3.s64 = ctx.r11.s64 + -14840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D024"))) PPC_WEAK_FUNC(sub_83C7D024);
PPC_FUNC_IMPL(__imp__sub_83C7D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D028"))) PPC_WEAK_FUNC(sub_83C7D028);
PPC_FUNC_IMPL(__imp__sub_83C7D028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14832
	ctx.r3.s64 = ctx.r11.s64 + -14832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D034"))) PPC_WEAK_FUNC(sub_83C7D034);
PPC_FUNC_IMPL(__imp__sub_83C7D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D038"))) PPC_WEAK_FUNC(sub_83C7D038);
PPC_FUNC_IMPL(__imp__sub_83C7D038) {
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
	// addi r3,r11,13688
	ctx.r3.s64 = ctx.r11.s64 + 13688;
	// bl 0x83523120
	ctx.lr = 0x83C7D050;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14824
	ctx.r3.s64 = ctx.r10.s64 + -14824;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D05C;
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

__attribute__((alias("__imp__sub_83C7D06C"))) PPC_WEAK_FUNC(sub_83C7D06C);
PPC_FUNC_IMPL(__imp__sub_83C7D06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D070"))) PPC_WEAK_FUNC(sub_83C7D070);
PPC_FUNC_IMPL(__imp__sub_83C7D070) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13704
	ctx.r7.s64 = ctx.r8.s64 + 13704;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13704(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13704);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13704(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13704, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D098"))) PPC_WEAK_FUNC(sub_83C7D098);
PPC_FUNC_IMPL(__imp__sub_83C7D098) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-2464
	ctx.r6.s64 = ctx.r7.s64 + -2464;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13704(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13704);
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
	// std r9,-2464(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2464, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D0E0"))) PPC_WEAK_FUNC(sub_83C7D0E0);
PPC_FUNC_IMPL(__imp__sub_83C7D0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14808
	ctx.r3.s64 = ctx.r11.s64 + -14808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D0EC"))) PPC_WEAK_FUNC(sub_83C7D0EC);
PPC_FUNC_IMPL(__imp__sub_83C7D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D0F0"))) PPC_WEAK_FUNC(sub_83C7D0F0);
PPC_FUNC_IMPL(__imp__sub_83C7D0F0) {
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
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x8259af80
	ctx.lr = 0x83C7D108;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14792
	ctx.r3.s64 = ctx.r10.s64 + -14792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D114;
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

__attribute__((alias("__imp__sub_83C7D124"))) PPC_WEAK_FUNC(sub_83C7D124);
PPC_FUNC_IMPL(__imp__sub_83C7D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D128"))) PPC_WEAK_FUNC(sub_83C7D128);
PPC_FUNC_IMPL(__imp__sub_83C7D128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13692
	ctx.r11.s64 = ctx.r8.s64 + 13692;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2488);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14800
	ctx.r3.s64 = ctx.r6.s64 + -14800;
	// stw r10,13692(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13692, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D158"))) PPC_WEAK_FUNC(sub_83C7D158);
PPC_FUNC_IMPL(__imp__sub_83C7D158) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// addi r4,r11,124
	ctx.r4.s64 = ctx.r11.s64 + 124;
	// addi r3,r10,-2440
	ctx.r3.s64 = ctx.r10.s64 + -2440;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83C7D17C;
	sub_8259CC28(ctx, base);
	// lis r9,-31787
	ctx.r9.s64 = -2083192832;
	// addi r3,r9,-14784
	ctx.r3.s64 = ctx.r9.s64 + -14784;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D188;
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

__attribute__((alias("__imp__sub_83C7D198"))) PPC_WEAK_FUNC(sub_83C7D198);
PPC_FUNC_IMPL(__imp__sub_83C7D198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14680
	ctx.r3.s64 = ctx.r11.s64 + -14680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D1A4"))) PPC_WEAK_FUNC(sub_83C7D1A4);
PPC_FUNC_IMPL(__imp__sub_83C7D1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D1A8"))) PPC_WEAK_FUNC(sub_83C7D1A8);
PPC_FUNC_IMPL(__imp__sub_83C7D1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14672
	ctx.r3.s64 = ctx.r11.s64 + -14672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D1B4"))) PPC_WEAK_FUNC(sub_83C7D1B4);
PPC_FUNC_IMPL(__imp__sub_83C7D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D1B8"))) PPC_WEAK_FUNC(sub_83C7D1B8);
PPC_FUNC_IMPL(__imp__sub_83C7D1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14664
	ctx.r3.s64 = ctx.r11.s64 + -14664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D1C4"))) PPC_WEAK_FUNC(sub_83C7D1C4);
PPC_FUNC_IMPL(__imp__sub_83C7D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D1C8"))) PPC_WEAK_FUNC(sub_83C7D1C8);
PPC_FUNC_IMPL(__imp__sub_83C7D1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14656
	ctx.r3.s64 = ctx.r11.s64 + -14656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D1D4"))) PPC_WEAK_FUNC(sub_83C7D1D4);
PPC_FUNC_IMPL(__imp__sub_83C7D1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D1D8"))) PPC_WEAK_FUNC(sub_83C7D1D8);
PPC_FUNC_IMPL(__imp__sub_83C7D1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14648
	ctx.r3.s64 = ctx.r11.s64 + -14648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D1E4"))) PPC_WEAK_FUNC(sub_83C7D1E4);
PPC_FUNC_IMPL(__imp__sub_83C7D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D1E8"))) PPC_WEAK_FUNC(sub_83C7D1E8);
PPC_FUNC_IMPL(__imp__sub_83C7D1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14640
	ctx.r3.s64 = ctx.r11.s64 + -14640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D1F4"))) PPC_WEAK_FUNC(sub_83C7D1F4);
PPC_FUNC_IMPL(__imp__sub_83C7D1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D1F8"))) PPC_WEAK_FUNC(sub_83C7D1F8);
PPC_FUNC_IMPL(__imp__sub_83C7D1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14632
	ctx.r3.s64 = ctx.r11.s64 + -14632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D204"))) PPC_WEAK_FUNC(sub_83C7D204);
PPC_FUNC_IMPL(__imp__sub_83C7D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D208"))) PPC_WEAK_FUNC(sub_83C7D208);
PPC_FUNC_IMPL(__imp__sub_83C7D208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14624
	ctx.r3.s64 = ctx.r11.s64 + -14624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D214"))) PPC_WEAK_FUNC(sub_83C7D214);
PPC_FUNC_IMPL(__imp__sub_83C7D214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D218"))) PPC_WEAK_FUNC(sub_83C7D218);
PPC_FUNC_IMPL(__imp__sub_83C7D218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D224"))) PPC_WEAK_FUNC(sub_83C7D224);
PPC_FUNC_IMPL(__imp__sub_83C7D224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D228"))) PPC_WEAK_FUNC(sub_83C7D228);
PPC_FUNC_IMPL(__imp__sub_83C7D228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14608
	ctx.r3.s64 = ctx.r11.s64 + -14608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D234"))) PPC_WEAK_FUNC(sub_83C7D234);
PPC_FUNC_IMPL(__imp__sub_83C7D234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D238"))) PPC_WEAK_FUNC(sub_83C7D238);
PPC_FUNC_IMPL(__imp__sub_83C7D238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14600
	ctx.r3.s64 = ctx.r11.s64 + -14600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D244"))) PPC_WEAK_FUNC(sub_83C7D244);
PPC_FUNC_IMPL(__imp__sub_83C7D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D248"))) PPC_WEAK_FUNC(sub_83C7D248);
PPC_FUNC_IMPL(__imp__sub_83C7D248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14592
	ctx.r3.s64 = ctx.r11.s64 + -14592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D254"))) PPC_WEAK_FUNC(sub_83C7D254);
PPC_FUNC_IMPL(__imp__sub_83C7D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D258"))) PPC_WEAK_FUNC(sub_83C7D258);
PPC_FUNC_IMPL(__imp__sub_83C7D258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14584
	ctx.r3.s64 = ctx.r11.s64 + -14584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D264"))) PPC_WEAK_FUNC(sub_83C7D264);
PPC_FUNC_IMPL(__imp__sub_83C7D264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D268"))) PPC_WEAK_FUNC(sub_83C7D268);
PPC_FUNC_IMPL(__imp__sub_83C7D268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14576
	ctx.r3.s64 = ctx.r11.s64 + -14576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D274"))) PPC_WEAK_FUNC(sub_83C7D274);
PPC_FUNC_IMPL(__imp__sub_83C7D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D278"))) PPC_WEAK_FUNC(sub_83C7D278);
PPC_FUNC_IMPL(__imp__sub_83C7D278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14568
	ctx.r3.s64 = ctx.r11.s64 + -14568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D284"))) PPC_WEAK_FUNC(sub_83C7D284);
PPC_FUNC_IMPL(__imp__sub_83C7D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D288"))) PPC_WEAK_FUNC(sub_83C7D288);
PPC_FUNC_IMPL(__imp__sub_83C7D288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14560
	ctx.r3.s64 = ctx.r11.s64 + -14560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D294"))) PPC_WEAK_FUNC(sub_83C7D294);
PPC_FUNC_IMPL(__imp__sub_83C7D294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D298"))) PPC_WEAK_FUNC(sub_83C7D298);
PPC_FUNC_IMPL(__imp__sub_83C7D298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14552
	ctx.r3.s64 = ctx.r11.s64 + -14552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D2A4"))) PPC_WEAK_FUNC(sub_83C7D2A4);
PPC_FUNC_IMPL(__imp__sub_83C7D2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D2A8"))) PPC_WEAK_FUNC(sub_83C7D2A8);
PPC_FUNC_IMPL(__imp__sub_83C7D2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14544
	ctx.r3.s64 = ctx.r11.s64 + -14544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D2B4"))) PPC_WEAK_FUNC(sub_83C7D2B4);
PPC_FUNC_IMPL(__imp__sub_83C7D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D2B8"))) PPC_WEAK_FUNC(sub_83C7D2B8);
PPC_FUNC_IMPL(__imp__sub_83C7D2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14536
	ctx.r3.s64 = ctx.r11.s64 + -14536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D2C4"))) PPC_WEAK_FUNC(sub_83C7D2C4);
PPC_FUNC_IMPL(__imp__sub_83C7D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D2C8"))) PPC_WEAK_FUNC(sub_83C7D2C8);
PPC_FUNC_IMPL(__imp__sub_83C7D2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D2D4"))) PPC_WEAK_FUNC(sub_83C7D2D4);
PPC_FUNC_IMPL(__imp__sub_83C7D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D2D8"))) PPC_WEAK_FUNC(sub_83C7D2D8);
PPC_FUNC_IMPL(__imp__sub_83C7D2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14520
	ctx.r3.s64 = ctx.r11.s64 + -14520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D2E4"))) PPC_WEAK_FUNC(sub_83C7D2E4);
PPC_FUNC_IMPL(__imp__sub_83C7D2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D2E8"))) PPC_WEAK_FUNC(sub_83C7D2E8);
PPC_FUNC_IMPL(__imp__sub_83C7D2E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14512
	ctx.r3.s64 = ctx.r11.s64 + -14512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D2F4"))) PPC_WEAK_FUNC(sub_83C7D2F4);
PPC_FUNC_IMPL(__imp__sub_83C7D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D2F8"))) PPC_WEAK_FUNC(sub_83C7D2F8);
PPC_FUNC_IMPL(__imp__sub_83C7D2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D304"))) PPC_WEAK_FUNC(sub_83C7D304);
PPC_FUNC_IMPL(__imp__sub_83C7D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D308"))) PPC_WEAK_FUNC(sub_83C7D308);
PPC_FUNC_IMPL(__imp__sub_83C7D308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14496
	ctx.r3.s64 = ctx.r11.s64 + -14496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D314"))) PPC_WEAK_FUNC(sub_83C7D314);
PPC_FUNC_IMPL(__imp__sub_83C7D314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D318"))) PPC_WEAK_FUNC(sub_83C7D318);
PPC_FUNC_IMPL(__imp__sub_83C7D318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14488
	ctx.r3.s64 = ctx.r11.s64 + -14488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D324"))) PPC_WEAK_FUNC(sub_83C7D324);
PPC_FUNC_IMPL(__imp__sub_83C7D324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D328"))) PPC_WEAK_FUNC(sub_83C7D328);
PPC_FUNC_IMPL(__imp__sub_83C7D328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14480
	ctx.r3.s64 = ctx.r11.s64 + -14480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D334"))) PPC_WEAK_FUNC(sub_83C7D334);
PPC_FUNC_IMPL(__imp__sub_83C7D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D338"))) PPC_WEAK_FUNC(sub_83C7D338);
PPC_FUNC_IMPL(__imp__sub_83C7D338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14472
	ctx.r3.s64 = ctx.r11.s64 + -14472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D344"))) PPC_WEAK_FUNC(sub_83C7D344);
PPC_FUNC_IMPL(__imp__sub_83C7D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D348"))) PPC_WEAK_FUNC(sub_83C7D348);
PPC_FUNC_IMPL(__imp__sub_83C7D348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14464
	ctx.r3.s64 = ctx.r11.s64 + -14464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D354"))) PPC_WEAK_FUNC(sub_83C7D354);
PPC_FUNC_IMPL(__imp__sub_83C7D354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D358"))) PPC_WEAK_FUNC(sub_83C7D358);
PPC_FUNC_IMPL(__imp__sub_83C7D358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D364"))) PPC_WEAK_FUNC(sub_83C7D364);
PPC_FUNC_IMPL(__imp__sub_83C7D364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D368"))) PPC_WEAK_FUNC(sub_83C7D368);
PPC_FUNC_IMPL(__imp__sub_83C7D368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14448
	ctx.r3.s64 = ctx.r11.s64 + -14448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D374"))) PPC_WEAK_FUNC(sub_83C7D374);
PPC_FUNC_IMPL(__imp__sub_83C7D374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D378"))) PPC_WEAK_FUNC(sub_83C7D378);
PPC_FUNC_IMPL(__imp__sub_83C7D378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14440
	ctx.r3.s64 = ctx.r11.s64 + -14440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D384"))) PPC_WEAK_FUNC(sub_83C7D384);
PPC_FUNC_IMPL(__imp__sub_83C7D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D388"))) PPC_WEAK_FUNC(sub_83C7D388);
PPC_FUNC_IMPL(__imp__sub_83C7D388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14432
	ctx.r3.s64 = ctx.r11.s64 + -14432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D394"))) PPC_WEAK_FUNC(sub_83C7D394);
PPC_FUNC_IMPL(__imp__sub_83C7D394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D398"))) PPC_WEAK_FUNC(sub_83C7D398);
PPC_FUNC_IMPL(__imp__sub_83C7D398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14424
	ctx.r3.s64 = ctx.r11.s64 + -14424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D3A4"))) PPC_WEAK_FUNC(sub_83C7D3A4);
PPC_FUNC_IMPL(__imp__sub_83C7D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D3A8"))) PPC_WEAK_FUNC(sub_83C7D3A8);
PPC_FUNC_IMPL(__imp__sub_83C7D3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14416
	ctx.r3.s64 = ctx.r11.s64 + -14416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D3B4"))) PPC_WEAK_FUNC(sub_83C7D3B4);
PPC_FUNC_IMPL(__imp__sub_83C7D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D3B8"))) PPC_WEAK_FUNC(sub_83C7D3B8);
PPC_FUNC_IMPL(__imp__sub_83C7D3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D3C4"))) PPC_WEAK_FUNC(sub_83C7D3C4);
PPC_FUNC_IMPL(__imp__sub_83C7D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D3C8"))) PPC_WEAK_FUNC(sub_83C7D3C8);
PPC_FUNC_IMPL(__imp__sub_83C7D3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D3D4"))) PPC_WEAK_FUNC(sub_83C7D3D4);
PPC_FUNC_IMPL(__imp__sub_83C7D3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D3D8"))) PPC_WEAK_FUNC(sub_83C7D3D8);
PPC_FUNC_IMPL(__imp__sub_83C7D3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14080
	ctx.r7.s64 = ctx.r8.s64 + 14080;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14080(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14080);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14080(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14080, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D400"))) PPC_WEAK_FUNC(sub_83C7D400);
PPC_FUNC_IMPL(__imp__sub_83C7D400) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-2100
	ctx.r6.s64 = ctx.r7.s64 + -2100;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2172(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2172);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14080(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14080);
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
	// std r9,-2100(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2100, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D448"))) PPC_WEAK_FUNC(sub_83C7D448);
PPC_FUNC_IMPL(__imp__sub_83C7D448) {
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
	// addi r3,r11,14064
	ctx.r3.s64 = ctx.r11.s64 + 14064;
	// bl 0x83523120
	ctx.lr = 0x83C7D460;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14392
	ctx.r3.s64 = ctx.r10.s64 + -14392;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D46C;
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

__attribute__((alias("__imp__sub_83C7D47C"))) PPC_WEAK_FUNC(sub_83C7D47C);
PPC_FUNC_IMPL(__imp__sub_83C7D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D480"))) PPC_WEAK_FUNC(sub_83C7D480);
PPC_FUNC_IMPL(__imp__sub_83C7D480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14376
	ctx.r3.s64 = ctx.r11.s64 + -14376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D48C"))) PPC_WEAK_FUNC(sub_83C7D48C);
PPC_FUNC_IMPL(__imp__sub_83C7D48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D490"))) PPC_WEAK_FUNC(sub_83C7D490);
PPC_FUNC_IMPL(__imp__sub_83C7D490) {
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
	// addi r3,r11,14088
	ctx.r3.s64 = ctx.r11.s64 + 14088;
	// bl 0x8259af80
	ctx.lr = 0x83C7D4A8;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14360
	ctx.r3.s64 = ctx.r10.s64 + -14360;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D4B4;
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

__attribute__((alias("__imp__sub_83C7D4C4"))) PPC_WEAK_FUNC(sub_83C7D4C4);
PPC_FUNC_IMPL(__imp__sub_83C7D4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D4C8"))) PPC_WEAK_FUNC(sub_83C7D4C8);
PPC_FUNC_IMPL(__imp__sub_83C7D4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14068
	ctx.r11.s64 = ctx.r8.s64 + 14068;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-2124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2124);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14368
	ctx.r3.s64 = ctx.r6.s64 + -14368;
	// stw r10,14068(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14068, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D4F8"))) PPC_WEAK_FUNC(sub_83C7D4F8);
PPC_FUNC_IMPL(__imp__sub_83C7D4F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14352
	ctx.r3.s64 = ctx.r11.s64 + -14352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D504"))) PPC_WEAK_FUNC(sub_83C7D504);
PPC_FUNC_IMPL(__imp__sub_83C7D504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D508"))) PPC_WEAK_FUNC(sub_83C7D508);
PPC_FUNC_IMPL(__imp__sub_83C7D508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14344
	ctx.r3.s64 = ctx.r11.s64 + -14344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D514"))) PPC_WEAK_FUNC(sub_83C7D514);
PPC_FUNC_IMPL(__imp__sub_83C7D514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D518"))) PPC_WEAK_FUNC(sub_83C7D518);
PPC_FUNC_IMPL(__imp__sub_83C7D518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14336
	ctx.r3.s64 = ctx.r11.s64 + -14336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D524"))) PPC_WEAK_FUNC(sub_83C7D524);
PPC_FUNC_IMPL(__imp__sub_83C7D524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D528"))) PPC_WEAK_FUNC(sub_83C7D528);
PPC_FUNC_IMPL(__imp__sub_83C7D528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14328
	ctx.r3.s64 = ctx.r11.s64 + -14328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D534"))) PPC_WEAK_FUNC(sub_83C7D534);
PPC_FUNC_IMPL(__imp__sub_83C7D534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D538"))) PPC_WEAK_FUNC(sub_83C7D538);
PPC_FUNC_IMPL(__imp__sub_83C7D538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14320
	ctx.r3.s64 = ctx.r11.s64 + -14320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D544"))) PPC_WEAK_FUNC(sub_83C7D544);
PPC_FUNC_IMPL(__imp__sub_83C7D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D548"))) PPC_WEAK_FUNC(sub_83C7D548);
PPC_FUNC_IMPL(__imp__sub_83C7D548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14312
	ctx.r3.s64 = ctx.r11.s64 + -14312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D554"))) PPC_WEAK_FUNC(sub_83C7D554);
PPC_FUNC_IMPL(__imp__sub_83C7D554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D558"))) PPC_WEAK_FUNC(sub_83C7D558);
PPC_FUNC_IMPL(__imp__sub_83C7D558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14304
	ctx.r3.s64 = ctx.r11.s64 + -14304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D564"))) PPC_WEAK_FUNC(sub_83C7D564);
PPC_FUNC_IMPL(__imp__sub_83C7D564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D568"))) PPC_WEAK_FUNC(sub_83C7D568);
PPC_FUNC_IMPL(__imp__sub_83C7D568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14296
	ctx.r3.s64 = ctx.r11.s64 + -14296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D574"))) PPC_WEAK_FUNC(sub_83C7D574);
PPC_FUNC_IMPL(__imp__sub_83C7D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D578"))) PPC_WEAK_FUNC(sub_83C7D578);
PPC_FUNC_IMPL(__imp__sub_83C7D578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14288
	ctx.r3.s64 = ctx.r11.s64 + -14288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D584"))) PPC_WEAK_FUNC(sub_83C7D584);
PPC_FUNC_IMPL(__imp__sub_83C7D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D588"))) PPC_WEAK_FUNC(sub_83C7D588);
PPC_FUNC_IMPL(__imp__sub_83C7D588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D594"))) PPC_WEAK_FUNC(sub_83C7D594);
PPC_FUNC_IMPL(__imp__sub_83C7D594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D598"))) PPC_WEAK_FUNC(sub_83C7D598);
PPC_FUNC_IMPL(__imp__sub_83C7D598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14272
	ctx.r3.s64 = ctx.r11.s64 + -14272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D5A4"))) PPC_WEAK_FUNC(sub_83C7D5A4);
PPC_FUNC_IMPL(__imp__sub_83C7D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D5A8"))) PPC_WEAK_FUNC(sub_83C7D5A8);
PPC_FUNC_IMPL(__imp__sub_83C7D5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14264
	ctx.r3.s64 = ctx.r11.s64 + -14264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D5B4"))) PPC_WEAK_FUNC(sub_83C7D5B4);
PPC_FUNC_IMPL(__imp__sub_83C7D5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D5B8"))) PPC_WEAK_FUNC(sub_83C7D5B8);
PPC_FUNC_IMPL(__imp__sub_83C7D5B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14448
	ctx.r7.s64 = ctx.r8.s64 + 14448;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14448(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14448);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14448(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14448, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D5E0"))) PPC_WEAK_FUNC(sub_83C7D5E0);
PPC_FUNC_IMPL(__imp__sub_83C7D5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-1972
	ctx.r6.s64 = ctx.r7.s64 + -1972;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2044(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2044);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14448(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14448);
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
	// std r9,-1972(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1972, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D628"))) PPC_WEAK_FUNC(sub_83C7D628);
PPC_FUNC_IMPL(__imp__sub_83C7D628) {
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
	// addi r3,r11,14432
	ctx.r3.s64 = ctx.r11.s64 + 14432;
	// bl 0x83523120
	ctx.lr = 0x83C7D640;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14256
	ctx.r3.s64 = ctx.r10.s64 + -14256;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D64C;
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

__attribute__((alias("__imp__sub_83C7D65C"))) PPC_WEAK_FUNC(sub_83C7D65C);
PPC_FUNC_IMPL(__imp__sub_83C7D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D660"))) PPC_WEAK_FUNC(sub_83C7D660);
PPC_FUNC_IMPL(__imp__sub_83C7D660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D66C"))) PPC_WEAK_FUNC(sub_83C7D66C);
PPC_FUNC_IMPL(__imp__sub_83C7D66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D670"))) PPC_WEAK_FUNC(sub_83C7D670);
PPC_FUNC_IMPL(__imp__sub_83C7D670) {
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
	// addi r3,r11,14456
	ctx.r3.s64 = ctx.r11.s64 + 14456;
	// bl 0x8259af80
	ctx.lr = 0x83C7D688;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14224
	ctx.r3.s64 = ctx.r10.s64 + -14224;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D694;
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

__attribute__((alias("__imp__sub_83C7D6A4"))) PPC_WEAK_FUNC(sub_83C7D6A4);
PPC_FUNC_IMPL(__imp__sub_83C7D6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D6A8"))) PPC_WEAK_FUNC(sub_83C7D6A8);
PPC_FUNC_IMPL(__imp__sub_83C7D6A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14436
	ctx.r11.s64 = ctx.r8.s64 + 14436;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1996);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14232
	ctx.r3.s64 = ctx.r6.s64 + -14232;
	// stw r10,14436(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14436, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D6D8"))) PPC_WEAK_FUNC(sub_83C7D6D8);
PPC_FUNC_IMPL(__imp__sub_83C7D6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14216
	ctx.r3.s64 = ctx.r11.s64 + -14216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D6E4"))) PPC_WEAK_FUNC(sub_83C7D6E4);
PPC_FUNC_IMPL(__imp__sub_83C7D6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D6E8"))) PPC_WEAK_FUNC(sub_83C7D6E8);
PPC_FUNC_IMPL(__imp__sub_83C7D6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14208
	ctx.r3.s64 = ctx.r11.s64 + -14208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D6F4"))) PPC_WEAK_FUNC(sub_83C7D6F4);
PPC_FUNC_IMPL(__imp__sub_83C7D6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D6F8"))) PPC_WEAK_FUNC(sub_83C7D6F8);
PPC_FUNC_IMPL(__imp__sub_83C7D6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14200
	ctx.r3.s64 = ctx.r11.s64 + -14200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D704"))) PPC_WEAK_FUNC(sub_83C7D704);
PPC_FUNC_IMPL(__imp__sub_83C7D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D708"))) PPC_WEAK_FUNC(sub_83C7D708);
PPC_FUNC_IMPL(__imp__sub_83C7D708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14192
	ctx.r3.s64 = ctx.r11.s64 + -14192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D714"))) PPC_WEAK_FUNC(sub_83C7D714);
PPC_FUNC_IMPL(__imp__sub_83C7D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D718"))) PPC_WEAK_FUNC(sub_83C7D718);
PPC_FUNC_IMPL(__imp__sub_83C7D718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D724"))) PPC_WEAK_FUNC(sub_83C7D724);
PPC_FUNC_IMPL(__imp__sub_83C7D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D728"))) PPC_WEAK_FUNC(sub_83C7D728);
PPC_FUNC_IMPL(__imp__sub_83C7D728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D734"))) PPC_WEAK_FUNC(sub_83C7D734);
PPC_FUNC_IMPL(__imp__sub_83C7D734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D738"))) PPC_WEAK_FUNC(sub_83C7D738);
PPC_FUNC_IMPL(__imp__sub_83C7D738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14168
	ctx.r3.s64 = ctx.r11.s64 + -14168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D744"))) PPC_WEAK_FUNC(sub_83C7D744);
PPC_FUNC_IMPL(__imp__sub_83C7D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D748"))) PPC_WEAK_FUNC(sub_83C7D748);
PPC_FUNC_IMPL(__imp__sub_83C7D748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D754"))) PPC_WEAK_FUNC(sub_83C7D754);
PPC_FUNC_IMPL(__imp__sub_83C7D754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D758"))) PPC_WEAK_FUNC(sub_83C7D758);
PPC_FUNC_IMPL(__imp__sub_83C7D758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14152
	ctx.r3.s64 = ctx.r11.s64 + -14152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D764"))) PPC_WEAK_FUNC(sub_83C7D764);
PPC_FUNC_IMPL(__imp__sub_83C7D764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D768"))) PPC_WEAK_FUNC(sub_83C7D768);
PPC_FUNC_IMPL(__imp__sub_83C7D768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14144
	ctx.r3.s64 = ctx.r11.s64 + -14144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D774"))) PPC_WEAK_FUNC(sub_83C7D774);
PPC_FUNC_IMPL(__imp__sub_83C7D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D778"))) PPC_WEAK_FUNC(sub_83C7D778);
PPC_FUNC_IMPL(__imp__sub_83C7D778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D784"))) PPC_WEAK_FUNC(sub_83C7D784);
PPC_FUNC_IMPL(__imp__sub_83C7D784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D788"))) PPC_WEAK_FUNC(sub_83C7D788);
PPC_FUNC_IMPL(__imp__sub_83C7D788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D794"))) PPC_WEAK_FUNC(sub_83C7D794);
PPC_FUNC_IMPL(__imp__sub_83C7D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D798"))) PPC_WEAK_FUNC(sub_83C7D798);
PPC_FUNC_IMPL(__imp__sub_83C7D798) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14816
	ctx.r7.s64 = ctx.r8.s64 + 14816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14816(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14816);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14816(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14816, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D7C0"))) PPC_WEAK_FUNC(sub_83C7D7C0);
PPC_FUNC_IMPL(__imp__sub_83C7D7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31773
	ctx.r7.s64 = -2082275328;
	// lis r5,-31773
	ctx.r5.s64 = -2082275328;
	// addi r6,r7,-1844
	ctx.r6.s64 = ctx.r7.s64 + -1844;
	// lis r3,-31754
	ctx.r3.s64 = -2081030144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1916(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1916);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14816(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14816);
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
	// std r9,-1844(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1844, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C7D808"))) PPC_WEAK_FUNC(sub_83C7D808);
PPC_FUNC_IMPL(__imp__sub_83C7D808) {
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
	// addi r3,r11,14800
	ctx.r3.s64 = ctx.r11.s64 + 14800;
	// bl 0x83523120
	ctx.lr = 0x83C7D820;
	sub_83523120(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14120
	ctx.r3.s64 = ctx.r10.s64 + -14120;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D82C;
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

__attribute__((alias("__imp__sub_83C7D83C"))) PPC_WEAK_FUNC(sub_83C7D83C);
PPC_FUNC_IMPL(__imp__sub_83C7D83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D840"))) PPC_WEAK_FUNC(sub_83C7D840);
PPC_FUNC_IMPL(__imp__sub_83C7D840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14104
	ctx.r3.s64 = ctx.r11.s64 + -14104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D84C"))) PPC_WEAK_FUNC(sub_83C7D84C);
PPC_FUNC_IMPL(__imp__sub_83C7D84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D850"))) PPC_WEAK_FUNC(sub_83C7D850);
PPC_FUNC_IMPL(__imp__sub_83C7D850) {
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
	// addi r3,r11,14824
	ctx.r3.s64 = ctx.r11.s64 + 14824;
	// bl 0x8259af80
	ctx.lr = 0x83C7D868;
	sub_8259AF80(ctx, base);
	// lis r10,-31787
	ctx.r10.s64 = -2083192832;
	// addi r3,r10,-14088
	ctx.r3.s64 = ctx.r10.s64 + -14088;
	// bl 0x831cdcc8
	ctx.lr = 0x83C7D874;
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

__attribute__((alias("__imp__sub_83C7D884"))) PPC_WEAK_FUNC(sub_83C7D884);
PPC_FUNC_IMPL(__imp__sub_83C7D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D888"))) PPC_WEAK_FUNC(sub_83C7D888);
PPC_FUNC_IMPL(__imp__sub_83C7D888) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// lis r8,-31754
	ctx.r8.s64 = -2081030144;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14804
	ctx.r11.s64 = ctx.r8.s64 + 14804;
	// lis r6,-31787
	ctx.r6.s64 = -2083192832;
	// lwz r10,-1868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-14096
	ctx.r3.s64 = ctx.r6.s64 + -14096;
	// stw r10,14804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14804, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D8B8"))) PPC_WEAK_FUNC(sub_83C7D8B8);
PPC_FUNC_IMPL(__imp__sub_83C7D8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14080
	ctx.r3.s64 = ctx.r11.s64 + -14080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D8C4"))) PPC_WEAK_FUNC(sub_83C7D8C4);
PPC_FUNC_IMPL(__imp__sub_83C7D8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D8C8"))) PPC_WEAK_FUNC(sub_83C7D8C8);
PPC_FUNC_IMPL(__imp__sub_83C7D8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D8D4"))) PPC_WEAK_FUNC(sub_83C7D8D4);
PPC_FUNC_IMPL(__imp__sub_83C7D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D8D8"))) PPC_WEAK_FUNC(sub_83C7D8D8);
PPC_FUNC_IMPL(__imp__sub_83C7D8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14064
	ctx.r3.s64 = ctx.r11.s64 + -14064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D8E4"))) PPC_WEAK_FUNC(sub_83C7D8E4);
PPC_FUNC_IMPL(__imp__sub_83C7D8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D8E8"))) PPC_WEAK_FUNC(sub_83C7D8E8);
PPC_FUNC_IMPL(__imp__sub_83C7D8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14056
	ctx.r3.s64 = ctx.r11.s64 + -14056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D8F4"))) PPC_WEAK_FUNC(sub_83C7D8F4);
PPC_FUNC_IMPL(__imp__sub_83C7D8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D8F8"))) PPC_WEAK_FUNC(sub_83C7D8F8);
PPC_FUNC_IMPL(__imp__sub_83C7D8F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D904"))) PPC_WEAK_FUNC(sub_83C7D904);
PPC_FUNC_IMPL(__imp__sub_83C7D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D908"))) PPC_WEAK_FUNC(sub_83C7D908);
PPC_FUNC_IMPL(__imp__sub_83C7D908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14040
	ctx.r3.s64 = ctx.r11.s64 + -14040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D914"))) PPC_WEAK_FUNC(sub_83C7D914);
PPC_FUNC_IMPL(__imp__sub_83C7D914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D918"))) PPC_WEAK_FUNC(sub_83C7D918);
PPC_FUNC_IMPL(__imp__sub_83C7D918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14032
	ctx.r3.s64 = ctx.r11.s64 + -14032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D924"))) PPC_WEAK_FUNC(sub_83C7D924);
PPC_FUNC_IMPL(__imp__sub_83C7D924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D928"))) PPC_WEAK_FUNC(sub_83C7D928);
PPC_FUNC_IMPL(__imp__sub_83C7D928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14024
	ctx.r3.s64 = ctx.r11.s64 + -14024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D934"))) PPC_WEAK_FUNC(sub_83C7D934);
PPC_FUNC_IMPL(__imp__sub_83C7D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D938"))) PPC_WEAK_FUNC(sub_83C7D938);
PPC_FUNC_IMPL(__imp__sub_83C7D938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14016
	ctx.r3.s64 = ctx.r11.s64 + -14016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D944"))) PPC_WEAK_FUNC(sub_83C7D944);
PPC_FUNC_IMPL(__imp__sub_83C7D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D948"))) PPC_WEAK_FUNC(sub_83C7D948);
PPC_FUNC_IMPL(__imp__sub_83C7D948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D954"))) PPC_WEAK_FUNC(sub_83C7D954);
PPC_FUNC_IMPL(__imp__sub_83C7D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D958"))) PPC_WEAK_FUNC(sub_83C7D958);
PPC_FUNC_IMPL(__imp__sub_83C7D958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-14000
	ctx.r3.s64 = ctx.r11.s64 + -14000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D964"))) PPC_WEAK_FUNC(sub_83C7D964);
PPC_FUNC_IMPL(__imp__sub_83C7D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D968"))) PPC_WEAK_FUNC(sub_83C7D968);
PPC_FUNC_IMPL(__imp__sub_83C7D968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13992
	ctx.r3.s64 = ctx.r11.s64 + -13992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D974"))) PPC_WEAK_FUNC(sub_83C7D974);
PPC_FUNC_IMPL(__imp__sub_83C7D974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D978"))) PPC_WEAK_FUNC(sub_83C7D978);
PPC_FUNC_IMPL(__imp__sub_83C7D978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D984"))) PPC_WEAK_FUNC(sub_83C7D984);
PPC_FUNC_IMPL(__imp__sub_83C7D984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D988"))) PPC_WEAK_FUNC(sub_83C7D988);
PPC_FUNC_IMPL(__imp__sub_83C7D988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13976
	ctx.r3.s64 = ctx.r11.s64 + -13976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D994"))) PPC_WEAK_FUNC(sub_83C7D994);
PPC_FUNC_IMPL(__imp__sub_83C7D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D998"))) PPC_WEAK_FUNC(sub_83C7D998);
PPC_FUNC_IMPL(__imp__sub_83C7D998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13968
	ctx.r3.s64 = ctx.r11.s64 + -13968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D9A4"))) PPC_WEAK_FUNC(sub_83C7D9A4);
PPC_FUNC_IMPL(__imp__sub_83C7D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D9A8"))) PPC_WEAK_FUNC(sub_83C7D9A8);
PPC_FUNC_IMPL(__imp__sub_83C7D9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13960
	ctx.r3.s64 = ctx.r11.s64 + -13960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D9B4"))) PPC_WEAK_FUNC(sub_83C7D9B4);
PPC_FUNC_IMPL(__imp__sub_83C7D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D9B8"))) PPC_WEAK_FUNC(sub_83C7D9B8);
PPC_FUNC_IMPL(__imp__sub_83C7D9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13952
	ctx.r3.s64 = ctx.r11.s64 + -13952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D9C4"))) PPC_WEAK_FUNC(sub_83C7D9C4);
PPC_FUNC_IMPL(__imp__sub_83C7D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D9C8"))) PPC_WEAK_FUNC(sub_83C7D9C8);
PPC_FUNC_IMPL(__imp__sub_83C7D9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13944
	ctx.r3.s64 = ctx.r11.s64 + -13944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D9D4"))) PPC_WEAK_FUNC(sub_83C7D9D4);
PPC_FUNC_IMPL(__imp__sub_83C7D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D9D8"))) PPC_WEAK_FUNC(sub_83C7D9D8);
PPC_FUNC_IMPL(__imp__sub_83C7D9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13936
	ctx.r3.s64 = ctx.r11.s64 + -13936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D9E4"))) PPC_WEAK_FUNC(sub_83C7D9E4);
PPC_FUNC_IMPL(__imp__sub_83C7D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D9E8"))) PPC_WEAK_FUNC(sub_83C7D9E8);
PPC_FUNC_IMPL(__imp__sub_83C7D9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7D9F4"))) PPC_WEAK_FUNC(sub_83C7D9F4);
PPC_FUNC_IMPL(__imp__sub_83C7D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7D9F8"))) PPC_WEAK_FUNC(sub_83C7D9F8);
PPC_FUNC_IMPL(__imp__sub_83C7D9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13920
	ctx.r3.s64 = ctx.r11.s64 + -13920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA04"))) PPC_WEAK_FUNC(sub_83C7DA04);
PPC_FUNC_IMPL(__imp__sub_83C7DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA08"))) PPC_WEAK_FUNC(sub_83C7DA08);
PPC_FUNC_IMPL(__imp__sub_83C7DA08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13912
	ctx.r3.s64 = ctx.r11.s64 + -13912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA14"))) PPC_WEAK_FUNC(sub_83C7DA14);
PPC_FUNC_IMPL(__imp__sub_83C7DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA18"))) PPC_WEAK_FUNC(sub_83C7DA18);
PPC_FUNC_IMPL(__imp__sub_83C7DA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13904
	ctx.r3.s64 = ctx.r11.s64 + -13904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA24"))) PPC_WEAK_FUNC(sub_83C7DA24);
PPC_FUNC_IMPL(__imp__sub_83C7DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA28"))) PPC_WEAK_FUNC(sub_83C7DA28);
PPC_FUNC_IMPL(__imp__sub_83C7DA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA34"))) PPC_WEAK_FUNC(sub_83C7DA34);
PPC_FUNC_IMPL(__imp__sub_83C7DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA38"))) PPC_WEAK_FUNC(sub_83C7DA38);
PPC_FUNC_IMPL(__imp__sub_83C7DA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13888
	ctx.r3.s64 = ctx.r11.s64 + -13888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA44"))) PPC_WEAK_FUNC(sub_83C7DA44);
PPC_FUNC_IMPL(__imp__sub_83C7DA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA48"))) PPC_WEAK_FUNC(sub_83C7DA48);
PPC_FUNC_IMPL(__imp__sub_83C7DA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13880
	ctx.r3.s64 = ctx.r11.s64 + -13880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA54"))) PPC_WEAK_FUNC(sub_83C7DA54);
PPC_FUNC_IMPL(__imp__sub_83C7DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA58"))) PPC_WEAK_FUNC(sub_83C7DA58);
PPC_FUNC_IMPL(__imp__sub_83C7DA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA64"))) PPC_WEAK_FUNC(sub_83C7DA64);
PPC_FUNC_IMPL(__imp__sub_83C7DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA68"))) PPC_WEAK_FUNC(sub_83C7DA68);
PPC_FUNC_IMPL(__imp__sub_83C7DA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13864
	ctx.r3.s64 = ctx.r11.s64 + -13864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA74"))) PPC_WEAK_FUNC(sub_83C7DA74);
PPC_FUNC_IMPL(__imp__sub_83C7DA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA78"))) PPC_WEAK_FUNC(sub_83C7DA78);
PPC_FUNC_IMPL(__imp__sub_83C7DA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13856
	ctx.r3.s64 = ctx.r11.s64 + -13856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA84"))) PPC_WEAK_FUNC(sub_83C7DA84);
PPC_FUNC_IMPL(__imp__sub_83C7DA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA88"))) PPC_WEAK_FUNC(sub_83C7DA88);
PPC_FUNC_IMPL(__imp__sub_83C7DA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13848
	ctx.r3.s64 = ctx.r11.s64 + -13848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DA94"))) PPC_WEAK_FUNC(sub_83C7DA94);
PPC_FUNC_IMPL(__imp__sub_83C7DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DA98"))) PPC_WEAK_FUNC(sub_83C7DA98);
PPC_FUNC_IMPL(__imp__sub_83C7DA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13840
	ctx.r3.s64 = ctx.r11.s64 + -13840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DAA4"))) PPC_WEAK_FUNC(sub_83C7DAA4);
PPC_FUNC_IMPL(__imp__sub_83C7DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DAA8"))) PPC_WEAK_FUNC(sub_83C7DAA8);
PPC_FUNC_IMPL(__imp__sub_83C7DAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13832
	ctx.r3.s64 = ctx.r11.s64 + -13832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DAB4"))) PPC_WEAK_FUNC(sub_83C7DAB4);
PPC_FUNC_IMPL(__imp__sub_83C7DAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DAB8"))) PPC_WEAK_FUNC(sub_83C7DAB8);
PPC_FUNC_IMPL(__imp__sub_83C7DAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13824
	ctx.r3.s64 = ctx.r11.s64 + -13824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DAC4"))) PPC_WEAK_FUNC(sub_83C7DAC4);
PPC_FUNC_IMPL(__imp__sub_83C7DAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DAC8"))) PPC_WEAK_FUNC(sub_83C7DAC8);
PPC_FUNC_IMPL(__imp__sub_83C7DAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13816
	ctx.r3.s64 = ctx.r11.s64 + -13816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DAD4"))) PPC_WEAK_FUNC(sub_83C7DAD4);
PPC_FUNC_IMPL(__imp__sub_83C7DAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DAD8"))) PPC_WEAK_FUNC(sub_83C7DAD8);
PPC_FUNC_IMPL(__imp__sub_83C7DAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13808
	ctx.r3.s64 = ctx.r11.s64 + -13808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DAE4"))) PPC_WEAK_FUNC(sub_83C7DAE4);
PPC_FUNC_IMPL(__imp__sub_83C7DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DAE8"))) PPC_WEAK_FUNC(sub_83C7DAE8);
PPC_FUNC_IMPL(__imp__sub_83C7DAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13800
	ctx.r3.s64 = ctx.r11.s64 + -13800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DAF4"))) PPC_WEAK_FUNC(sub_83C7DAF4);
PPC_FUNC_IMPL(__imp__sub_83C7DAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DAF8"))) PPC_WEAK_FUNC(sub_83C7DAF8);
PPC_FUNC_IMPL(__imp__sub_83C7DAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13792
	ctx.r3.s64 = ctx.r11.s64 + -13792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB04"))) PPC_WEAK_FUNC(sub_83C7DB04);
PPC_FUNC_IMPL(__imp__sub_83C7DB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB08"))) PPC_WEAK_FUNC(sub_83C7DB08);
PPC_FUNC_IMPL(__imp__sub_83C7DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13784
	ctx.r3.s64 = ctx.r11.s64 + -13784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB14"))) PPC_WEAK_FUNC(sub_83C7DB14);
PPC_FUNC_IMPL(__imp__sub_83C7DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB18"))) PPC_WEAK_FUNC(sub_83C7DB18);
PPC_FUNC_IMPL(__imp__sub_83C7DB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13776
	ctx.r3.s64 = ctx.r11.s64 + -13776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB24"))) PPC_WEAK_FUNC(sub_83C7DB24);
PPC_FUNC_IMPL(__imp__sub_83C7DB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB28"))) PPC_WEAK_FUNC(sub_83C7DB28);
PPC_FUNC_IMPL(__imp__sub_83C7DB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13768
	ctx.r3.s64 = ctx.r11.s64 + -13768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB34"))) PPC_WEAK_FUNC(sub_83C7DB34);
PPC_FUNC_IMPL(__imp__sub_83C7DB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB38"))) PPC_WEAK_FUNC(sub_83C7DB38);
PPC_FUNC_IMPL(__imp__sub_83C7DB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13760
	ctx.r3.s64 = ctx.r11.s64 + -13760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB44"))) PPC_WEAK_FUNC(sub_83C7DB44);
PPC_FUNC_IMPL(__imp__sub_83C7DB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB48"))) PPC_WEAK_FUNC(sub_83C7DB48);
PPC_FUNC_IMPL(__imp__sub_83C7DB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13752
	ctx.r3.s64 = ctx.r11.s64 + -13752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB54"))) PPC_WEAK_FUNC(sub_83C7DB54);
PPC_FUNC_IMPL(__imp__sub_83C7DB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB58"))) PPC_WEAK_FUNC(sub_83C7DB58);
PPC_FUNC_IMPL(__imp__sub_83C7DB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13744
	ctx.r3.s64 = ctx.r11.s64 + -13744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB64"))) PPC_WEAK_FUNC(sub_83C7DB64);
PPC_FUNC_IMPL(__imp__sub_83C7DB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C7DB68"))) PPC_WEAK_FUNC(sub_83C7DB68);
PPC_FUNC_IMPL(__imp__sub_83C7DB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31787
	ctx.r11.s64 = -2083192832;
	// addi r3,r11,-13736
	ctx.r3.s64 = ctx.r11.s64 + -13736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C7DB74"))) PPC_WEAK_FUNC(sub_83C7DB74);
PPC_FUNC_IMPL(__imp__sub_83C7DB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

