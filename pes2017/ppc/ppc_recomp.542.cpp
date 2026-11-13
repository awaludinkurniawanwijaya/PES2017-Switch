#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83B7C628"))) PPC_WEAK_FUNC(sub_83B7C628);
PPC_FUNC_IMPL(__imp__sub_83B7C628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32008
	ctx.r3.s64 = ctx.r11.s64 + 32008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C634"))) PPC_WEAK_FUNC(sub_83B7C634);
PPC_FUNC_IMPL(__imp__sub_83B7C634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C638"))) PPC_WEAK_FUNC(sub_83B7C638);
PPC_FUNC_IMPL(__imp__sub_83B7C638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32016
	ctx.r3.s64 = ctx.r11.s64 + 32016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C644"))) PPC_WEAK_FUNC(sub_83B7C644);
PPC_FUNC_IMPL(__imp__sub_83B7C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C648"))) PPC_WEAK_FUNC(sub_83B7C648);
PPC_FUNC_IMPL(__imp__sub_83B7C648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32024
	ctx.r3.s64 = ctx.r11.s64 + 32024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C654"))) PPC_WEAK_FUNC(sub_83B7C654);
PPC_FUNC_IMPL(__imp__sub_83B7C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C658"))) PPC_WEAK_FUNC(sub_83B7C658);
PPC_FUNC_IMPL(__imp__sub_83B7C658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C664"))) PPC_WEAK_FUNC(sub_83B7C664);
PPC_FUNC_IMPL(__imp__sub_83B7C664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C668"))) PPC_WEAK_FUNC(sub_83B7C668);
PPC_FUNC_IMPL(__imp__sub_83B7C668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32040
	ctx.r3.s64 = ctx.r11.s64 + 32040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C674"))) PPC_WEAK_FUNC(sub_83B7C674);
PPC_FUNC_IMPL(__imp__sub_83B7C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C678"))) PPC_WEAK_FUNC(sub_83B7C678);
PPC_FUNC_IMPL(__imp__sub_83B7C678) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14180
	ctx.r7.s64 = ctx.r8.s64 + -14180;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14180);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14180(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14180, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7C6A0"))) PPC_WEAK_FUNC(sub_83B7C6A0);
PPC_FUNC_IMPL(__imp__sub_83B7C6A0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14184
	ctx.r3.s64 = ctx.r11.s64 + -14184;
	// bl 0x83523120
	ctx.lr = 0x83B7C6B8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32048
	ctx.r3.s64 = ctx.r10.s64 + 32048;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7C6C4;
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

__attribute__((alias("__imp__sub_83B7C6D4"))) PPC_WEAK_FUNC(sub_83B7C6D4);
PPC_FUNC_IMPL(__imp__sub_83B7C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C6D8"))) PPC_WEAK_FUNC(sub_83B7C6D8);
PPC_FUNC_IMPL(__imp__sub_83B7C6D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32064
	ctx.r3.s64 = ctx.r11.s64 + 32064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C6E4"))) PPC_WEAK_FUNC(sub_83B7C6E4);
PPC_FUNC_IMPL(__imp__sub_83B7C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C6E8"))) PPC_WEAK_FUNC(sub_83B7C6E8);
PPC_FUNC_IMPL(__imp__sub_83B7C6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C6F4"))) PPC_WEAK_FUNC(sub_83B7C6F4);
PPC_FUNC_IMPL(__imp__sub_83B7C6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C6F8"))) PPC_WEAK_FUNC(sub_83B7C6F8);
PPC_FUNC_IMPL(__imp__sub_83B7C6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32080
	ctx.r3.s64 = ctx.r11.s64 + 32080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C704"))) PPC_WEAK_FUNC(sub_83B7C704);
PPC_FUNC_IMPL(__imp__sub_83B7C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C708"))) PPC_WEAK_FUNC(sub_83B7C708);
PPC_FUNC_IMPL(__imp__sub_83B7C708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32088
	ctx.r3.s64 = ctx.r11.s64 + 32088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C714"))) PPC_WEAK_FUNC(sub_83B7C714);
PPC_FUNC_IMPL(__imp__sub_83B7C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C718"))) PPC_WEAK_FUNC(sub_83B7C718);
PPC_FUNC_IMPL(__imp__sub_83B7C718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32096
	ctx.r3.s64 = ctx.r11.s64 + 32096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C724"))) PPC_WEAK_FUNC(sub_83B7C724);
PPC_FUNC_IMPL(__imp__sub_83B7C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C728"))) PPC_WEAK_FUNC(sub_83B7C728);
PPC_FUNC_IMPL(__imp__sub_83B7C728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32104
	ctx.r3.s64 = ctx.r11.s64 + 32104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C734"))) PPC_WEAK_FUNC(sub_83B7C734);
PPC_FUNC_IMPL(__imp__sub_83B7C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C738"))) PPC_WEAK_FUNC(sub_83B7C738);
PPC_FUNC_IMPL(__imp__sub_83B7C738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32112
	ctx.r3.s64 = ctx.r11.s64 + 32112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C744"))) PPC_WEAK_FUNC(sub_83B7C744);
PPC_FUNC_IMPL(__imp__sub_83B7C744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C748"))) PPC_WEAK_FUNC(sub_83B7C748);
PPC_FUNC_IMPL(__imp__sub_83B7C748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32120
	ctx.r3.s64 = ctx.r11.s64 + 32120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C754"))) PPC_WEAK_FUNC(sub_83B7C754);
PPC_FUNC_IMPL(__imp__sub_83B7C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C758"))) PPC_WEAK_FUNC(sub_83B7C758);
PPC_FUNC_IMPL(__imp__sub_83B7C758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C764"))) PPC_WEAK_FUNC(sub_83B7C764);
PPC_FUNC_IMPL(__imp__sub_83B7C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C768"))) PPC_WEAK_FUNC(sub_83B7C768);
PPC_FUNC_IMPL(__imp__sub_83B7C768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32136
	ctx.r3.s64 = ctx.r11.s64 + 32136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C774"))) PPC_WEAK_FUNC(sub_83B7C774);
PPC_FUNC_IMPL(__imp__sub_83B7C774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C778"))) PPC_WEAK_FUNC(sub_83B7C778);
PPC_FUNC_IMPL(__imp__sub_83B7C778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32144
	ctx.r3.s64 = ctx.r11.s64 + 32144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C784"))) PPC_WEAK_FUNC(sub_83B7C784);
PPC_FUNC_IMPL(__imp__sub_83B7C784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C788"))) PPC_WEAK_FUNC(sub_83B7C788);
PPC_FUNC_IMPL(__imp__sub_83B7C788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32152
	ctx.r3.s64 = ctx.r11.s64 + 32152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C794"))) PPC_WEAK_FUNC(sub_83B7C794);
PPC_FUNC_IMPL(__imp__sub_83B7C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C798"))) PPC_WEAK_FUNC(sub_83B7C798);
PPC_FUNC_IMPL(__imp__sub_83B7C798) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14168
	ctx.r7.s64 = ctx.r8.s64 + -14168;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14168(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14168);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14168(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14168, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7C7C0"))) PPC_WEAK_FUNC(sub_83B7C7C0);
PPC_FUNC_IMPL(__imp__sub_83B7C7C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14172
	ctx.r3.s64 = ctx.r11.s64 + -14172;
	// bl 0x83523120
	ctx.lr = 0x83B7C7D8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32160
	ctx.r3.s64 = ctx.r10.s64 + 32160;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7C7E4;
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

__attribute__((alias("__imp__sub_83B7C7F4"))) PPC_WEAK_FUNC(sub_83B7C7F4);
PPC_FUNC_IMPL(__imp__sub_83B7C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C7F8"))) PPC_WEAK_FUNC(sub_83B7C7F8);
PPC_FUNC_IMPL(__imp__sub_83B7C7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32176
	ctx.r3.s64 = ctx.r11.s64 + 32176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C804"))) PPC_WEAK_FUNC(sub_83B7C804);
PPC_FUNC_IMPL(__imp__sub_83B7C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C808"))) PPC_WEAK_FUNC(sub_83B7C808);
PPC_FUNC_IMPL(__imp__sub_83B7C808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32184
	ctx.r3.s64 = ctx.r11.s64 + 32184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C814"))) PPC_WEAK_FUNC(sub_83B7C814);
PPC_FUNC_IMPL(__imp__sub_83B7C814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C818"))) PPC_WEAK_FUNC(sub_83B7C818);
PPC_FUNC_IMPL(__imp__sub_83B7C818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32192
	ctx.r3.s64 = ctx.r11.s64 + 32192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C824"))) PPC_WEAK_FUNC(sub_83B7C824);
PPC_FUNC_IMPL(__imp__sub_83B7C824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C828"))) PPC_WEAK_FUNC(sub_83B7C828);
PPC_FUNC_IMPL(__imp__sub_83B7C828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32200
	ctx.r3.s64 = ctx.r11.s64 + 32200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C834"))) PPC_WEAK_FUNC(sub_83B7C834);
PPC_FUNC_IMPL(__imp__sub_83B7C834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C838"))) PPC_WEAK_FUNC(sub_83B7C838);
PPC_FUNC_IMPL(__imp__sub_83B7C838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C844"))) PPC_WEAK_FUNC(sub_83B7C844);
PPC_FUNC_IMPL(__imp__sub_83B7C844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C848"))) PPC_WEAK_FUNC(sub_83B7C848);
PPC_FUNC_IMPL(__imp__sub_83B7C848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32216
	ctx.r3.s64 = ctx.r11.s64 + 32216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C854"))) PPC_WEAK_FUNC(sub_83B7C854);
PPC_FUNC_IMPL(__imp__sub_83B7C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C858"))) PPC_WEAK_FUNC(sub_83B7C858);
PPC_FUNC_IMPL(__imp__sub_83B7C858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32224
	ctx.r3.s64 = ctx.r11.s64 + 32224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C864"))) PPC_WEAK_FUNC(sub_83B7C864);
PPC_FUNC_IMPL(__imp__sub_83B7C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C868"))) PPC_WEAK_FUNC(sub_83B7C868);
PPC_FUNC_IMPL(__imp__sub_83B7C868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32232
	ctx.r3.s64 = ctx.r11.s64 + 32232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C874"))) PPC_WEAK_FUNC(sub_83B7C874);
PPC_FUNC_IMPL(__imp__sub_83B7C874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C878"))) PPC_WEAK_FUNC(sub_83B7C878);
PPC_FUNC_IMPL(__imp__sub_83B7C878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C884"))) PPC_WEAK_FUNC(sub_83B7C884);
PPC_FUNC_IMPL(__imp__sub_83B7C884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C888"))) PPC_WEAK_FUNC(sub_83B7C888);
PPC_FUNC_IMPL(__imp__sub_83B7C888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32248
	ctx.r3.s64 = ctx.r11.s64 + 32248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C894"))) PPC_WEAK_FUNC(sub_83B7C894);
PPC_FUNC_IMPL(__imp__sub_83B7C894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C898"))) PPC_WEAK_FUNC(sub_83B7C898);
PPC_FUNC_IMPL(__imp__sub_83B7C898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32256
	ctx.r3.s64 = ctx.r11.s64 + 32256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C8A4"))) PPC_WEAK_FUNC(sub_83B7C8A4);
PPC_FUNC_IMPL(__imp__sub_83B7C8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C8A8"))) PPC_WEAK_FUNC(sub_83B7C8A8);
PPC_FUNC_IMPL(__imp__sub_83B7C8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32264
	ctx.r3.s64 = ctx.r11.s64 + 32264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C8B4"))) PPC_WEAK_FUNC(sub_83B7C8B4);
PPC_FUNC_IMPL(__imp__sub_83B7C8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C8B8"))) PPC_WEAK_FUNC(sub_83B7C8B8);
PPC_FUNC_IMPL(__imp__sub_83B7C8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14156
	ctx.r7.s64 = ctx.r8.s64 + -14156;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14156(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14156);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14156(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14156, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7C8E0"))) PPC_WEAK_FUNC(sub_83B7C8E0);
PPC_FUNC_IMPL(__imp__sub_83B7C8E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14160
	ctx.r3.s64 = ctx.r11.s64 + -14160;
	// bl 0x83523120
	ctx.lr = 0x83B7C8F8;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32272
	ctx.r3.s64 = ctx.r10.s64 + 32272;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7C904;
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

__attribute__((alias("__imp__sub_83B7C914"))) PPC_WEAK_FUNC(sub_83B7C914);
PPC_FUNC_IMPL(__imp__sub_83B7C914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C918"))) PPC_WEAK_FUNC(sub_83B7C918);
PPC_FUNC_IMPL(__imp__sub_83B7C918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32288
	ctx.r3.s64 = ctx.r11.s64 + 32288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C924"))) PPC_WEAK_FUNC(sub_83B7C924);
PPC_FUNC_IMPL(__imp__sub_83B7C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C928"))) PPC_WEAK_FUNC(sub_83B7C928);
PPC_FUNC_IMPL(__imp__sub_83B7C928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C934"))) PPC_WEAK_FUNC(sub_83B7C934);
PPC_FUNC_IMPL(__imp__sub_83B7C934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C938"))) PPC_WEAK_FUNC(sub_83B7C938);
PPC_FUNC_IMPL(__imp__sub_83B7C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32304
	ctx.r3.s64 = ctx.r11.s64 + 32304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C944"))) PPC_WEAK_FUNC(sub_83B7C944);
PPC_FUNC_IMPL(__imp__sub_83B7C944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C948"))) PPC_WEAK_FUNC(sub_83B7C948);
PPC_FUNC_IMPL(__imp__sub_83B7C948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32312
	ctx.r3.s64 = ctx.r11.s64 + 32312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C954"))) PPC_WEAK_FUNC(sub_83B7C954);
PPC_FUNC_IMPL(__imp__sub_83B7C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C958"))) PPC_WEAK_FUNC(sub_83B7C958);
PPC_FUNC_IMPL(__imp__sub_83B7C958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32320
	ctx.r3.s64 = ctx.r11.s64 + 32320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C964"))) PPC_WEAK_FUNC(sub_83B7C964);
PPC_FUNC_IMPL(__imp__sub_83B7C964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C968"))) PPC_WEAK_FUNC(sub_83B7C968);
PPC_FUNC_IMPL(__imp__sub_83B7C968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32328
	ctx.r3.s64 = ctx.r11.s64 + 32328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C974"))) PPC_WEAK_FUNC(sub_83B7C974);
PPC_FUNC_IMPL(__imp__sub_83B7C974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C978"))) PPC_WEAK_FUNC(sub_83B7C978);
PPC_FUNC_IMPL(__imp__sub_83B7C978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32336
	ctx.r3.s64 = ctx.r11.s64 + 32336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C984"))) PPC_WEAK_FUNC(sub_83B7C984);
PPC_FUNC_IMPL(__imp__sub_83B7C984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C988"))) PPC_WEAK_FUNC(sub_83B7C988);
PPC_FUNC_IMPL(__imp__sub_83B7C988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C994"))) PPC_WEAK_FUNC(sub_83B7C994);
PPC_FUNC_IMPL(__imp__sub_83B7C994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C998"))) PPC_WEAK_FUNC(sub_83B7C998);
PPC_FUNC_IMPL(__imp__sub_83B7C998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32352
	ctx.r3.s64 = ctx.r11.s64 + 32352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C9A4"))) PPC_WEAK_FUNC(sub_83B7C9A4);
PPC_FUNC_IMPL(__imp__sub_83B7C9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C9A8"))) PPC_WEAK_FUNC(sub_83B7C9A8);
PPC_FUNC_IMPL(__imp__sub_83B7C9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32360
	ctx.r3.s64 = ctx.r11.s64 + 32360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C9B4"))) PPC_WEAK_FUNC(sub_83B7C9B4);
PPC_FUNC_IMPL(__imp__sub_83B7C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C9B8"))) PPC_WEAK_FUNC(sub_83B7C9B8);
PPC_FUNC_IMPL(__imp__sub_83B7C9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32368
	ctx.r3.s64 = ctx.r11.s64 + 32368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C9C4"))) PPC_WEAK_FUNC(sub_83B7C9C4);
PPC_FUNC_IMPL(__imp__sub_83B7C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C9C8"))) PPC_WEAK_FUNC(sub_83B7C9C8);
PPC_FUNC_IMPL(__imp__sub_83B7C9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32376
	ctx.r3.s64 = ctx.r11.s64 + 32376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7C9D4"))) PPC_WEAK_FUNC(sub_83B7C9D4);
PPC_FUNC_IMPL(__imp__sub_83B7C9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7C9D8"))) PPC_WEAK_FUNC(sub_83B7C9D8);
PPC_FUNC_IMPL(__imp__sub_83B7C9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14144
	ctx.r7.s64 = ctx.r8.s64 + -14144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14144);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14144(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14144, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7CA00"))) PPC_WEAK_FUNC(sub_83B7CA00);
PPC_FUNC_IMPL(__imp__sub_83B7CA00) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14148
	ctx.r3.s64 = ctx.r11.s64 + -14148;
	// bl 0x83523120
	ctx.lr = 0x83B7CA18;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32384
	ctx.r3.s64 = ctx.r10.s64 + 32384;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7CA24;
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

__attribute__((alias("__imp__sub_83B7CA34"))) PPC_WEAK_FUNC(sub_83B7CA34);
PPC_FUNC_IMPL(__imp__sub_83B7CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA38"))) PPC_WEAK_FUNC(sub_83B7CA38);
PPC_FUNC_IMPL(__imp__sub_83B7CA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CA44"))) PPC_WEAK_FUNC(sub_83B7CA44);
PPC_FUNC_IMPL(__imp__sub_83B7CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA48"))) PPC_WEAK_FUNC(sub_83B7CA48);
PPC_FUNC_IMPL(__imp__sub_83B7CA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32408
	ctx.r3.s64 = ctx.r11.s64 + 32408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CA54"))) PPC_WEAK_FUNC(sub_83B7CA54);
PPC_FUNC_IMPL(__imp__sub_83B7CA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA58"))) PPC_WEAK_FUNC(sub_83B7CA58);
PPC_FUNC_IMPL(__imp__sub_83B7CA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32416
	ctx.r3.s64 = ctx.r11.s64 + 32416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CA64"))) PPC_WEAK_FUNC(sub_83B7CA64);
PPC_FUNC_IMPL(__imp__sub_83B7CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA68"))) PPC_WEAK_FUNC(sub_83B7CA68);
PPC_FUNC_IMPL(__imp__sub_83B7CA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32424
	ctx.r3.s64 = ctx.r11.s64 + 32424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CA74"))) PPC_WEAK_FUNC(sub_83B7CA74);
PPC_FUNC_IMPL(__imp__sub_83B7CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA78"))) PPC_WEAK_FUNC(sub_83B7CA78);
PPC_FUNC_IMPL(__imp__sub_83B7CA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32432
	ctx.r3.s64 = ctx.r11.s64 + 32432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CA84"))) PPC_WEAK_FUNC(sub_83B7CA84);
PPC_FUNC_IMPL(__imp__sub_83B7CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA88"))) PPC_WEAK_FUNC(sub_83B7CA88);
PPC_FUNC_IMPL(__imp__sub_83B7CA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32440
	ctx.r3.s64 = ctx.r11.s64 + 32440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CA94"))) PPC_WEAK_FUNC(sub_83B7CA94);
PPC_FUNC_IMPL(__imp__sub_83B7CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CA98"))) PPC_WEAK_FUNC(sub_83B7CA98);
PPC_FUNC_IMPL(__imp__sub_83B7CA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32448
	ctx.r3.s64 = ctx.r11.s64 + 32448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CAA4"))) PPC_WEAK_FUNC(sub_83B7CAA4);
PPC_FUNC_IMPL(__imp__sub_83B7CAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CAA8"))) PPC_WEAK_FUNC(sub_83B7CAA8);
PPC_FUNC_IMPL(__imp__sub_83B7CAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32456
	ctx.r3.s64 = ctx.r11.s64 + 32456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CAB4"))) PPC_WEAK_FUNC(sub_83B7CAB4);
PPC_FUNC_IMPL(__imp__sub_83B7CAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CAB8"))) PPC_WEAK_FUNC(sub_83B7CAB8);
PPC_FUNC_IMPL(__imp__sub_83B7CAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32464
	ctx.r3.s64 = ctx.r11.s64 + 32464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CAC4"))) PPC_WEAK_FUNC(sub_83B7CAC4);
PPC_FUNC_IMPL(__imp__sub_83B7CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CAC8"))) PPC_WEAK_FUNC(sub_83B7CAC8);
PPC_FUNC_IMPL(__imp__sub_83B7CAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32472
	ctx.r3.s64 = ctx.r11.s64 + 32472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CAD4"))) PPC_WEAK_FUNC(sub_83B7CAD4);
PPC_FUNC_IMPL(__imp__sub_83B7CAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CAD8"))) PPC_WEAK_FUNC(sub_83B7CAD8);
PPC_FUNC_IMPL(__imp__sub_83B7CAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32480
	ctx.r3.s64 = ctx.r11.s64 + 32480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CAE4"))) PPC_WEAK_FUNC(sub_83B7CAE4);
PPC_FUNC_IMPL(__imp__sub_83B7CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CAE8"))) PPC_WEAK_FUNC(sub_83B7CAE8);
PPC_FUNC_IMPL(__imp__sub_83B7CAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32488
	ctx.r3.s64 = ctx.r11.s64 + 32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CAF4"))) PPC_WEAK_FUNC(sub_83B7CAF4);
PPC_FUNC_IMPL(__imp__sub_83B7CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CAF8"))) PPC_WEAK_FUNC(sub_83B7CAF8);
PPC_FUNC_IMPL(__imp__sub_83B7CAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14132
	ctx.r7.s64 = ctx.r8.s64 + -14132;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14132);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14132(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14132, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7CB20"))) PPC_WEAK_FUNC(sub_83B7CB20);
PPC_FUNC_IMPL(__imp__sub_83B7CB20) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// bl 0x83523120
	ctx.lr = 0x83B7CB38;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32496
	ctx.r3.s64 = ctx.r10.s64 + 32496;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7CB44;
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

__attribute__((alias("__imp__sub_83B7CB54"))) PPC_WEAK_FUNC(sub_83B7CB54);
PPC_FUNC_IMPL(__imp__sub_83B7CB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CB58"))) PPC_WEAK_FUNC(sub_83B7CB58);
PPC_FUNC_IMPL(__imp__sub_83B7CB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32512
	ctx.r3.s64 = ctx.r11.s64 + 32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CB64"))) PPC_WEAK_FUNC(sub_83B7CB64);
PPC_FUNC_IMPL(__imp__sub_83B7CB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CB68"))) PPC_WEAK_FUNC(sub_83B7CB68);
PPC_FUNC_IMPL(__imp__sub_83B7CB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32520
	ctx.r3.s64 = ctx.r11.s64 + 32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CB74"))) PPC_WEAK_FUNC(sub_83B7CB74);
PPC_FUNC_IMPL(__imp__sub_83B7CB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CB78"))) PPC_WEAK_FUNC(sub_83B7CB78);
PPC_FUNC_IMPL(__imp__sub_83B7CB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32528
	ctx.r3.s64 = ctx.r11.s64 + 32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CB84"))) PPC_WEAK_FUNC(sub_83B7CB84);
PPC_FUNC_IMPL(__imp__sub_83B7CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CB88"))) PPC_WEAK_FUNC(sub_83B7CB88);
PPC_FUNC_IMPL(__imp__sub_83B7CB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CB94"))) PPC_WEAK_FUNC(sub_83B7CB94);
PPC_FUNC_IMPL(__imp__sub_83B7CB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CB98"))) PPC_WEAK_FUNC(sub_83B7CB98);
PPC_FUNC_IMPL(__imp__sub_83B7CB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32544
	ctx.r3.s64 = ctx.r11.s64 + 32544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CBA4"))) PPC_WEAK_FUNC(sub_83B7CBA4);
PPC_FUNC_IMPL(__imp__sub_83B7CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CBA8"))) PPC_WEAK_FUNC(sub_83B7CBA8);
PPC_FUNC_IMPL(__imp__sub_83B7CBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32552
	ctx.r3.s64 = ctx.r11.s64 + 32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CBB4"))) PPC_WEAK_FUNC(sub_83B7CBB4);
PPC_FUNC_IMPL(__imp__sub_83B7CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CBB8"))) PPC_WEAK_FUNC(sub_83B7CBB8);
PPC_FUNC_IMPL(__imp__sub_83B7CBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32560
	ctx.r3.s64 = ctx.r11.s64 + 32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CBC4"))) PPC_WEAK_FUNC(sub_83B7CBC4);
PPC_FUNC_IMPL(__imp__sub_83B7CBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CBC8"))) PPC_WEAK_FUNC(sub_83B7CBC8);
PPC_FUNC_IMPL(__imp__sub_83B7CBC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32568
	ctx.r3.s64 = ctx.r11.s64 + 32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CBD4"))) PPC_WEAK_FUNC(sub_83B7CBD4);
PPC_FUNC_IMPL(__imp__sub_83B7CBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CBD8"))) PPC_WEAK_FUNC(sub_83B7CBD8);
PPC_FUNC_IMPL(__imp__sub_83B7CBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32576
	ctx.r3.s64 = ctx.r11.s64 + 32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CBE4"))) PPC_WEAK_FUNC(sub_83B7CBE4);
PPC_FUNC_IMPL(__imp__sub_83B7CBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CBE8"))) PPC_WEAK_FUNC(sub_83B7CBE8);
PPC_FUNC_IMPL(__imp__sub_83B7CBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32584
	ctx.r3.s64 = ctx.r11.s64 + 32584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CBF4"))) PPC_WEAK_FUNC(sub_83B7CBF4);
PPC_FUNC_IMPL(__imp__sub_83B7CBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CBF8"))) PPC_WEAK_FUNC(sub_83B7CBF8);
PPC_FUNC_IMPL(__imp__sub_83B7CBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32592
	ctx.r3.s64 = ctx.r11.s64 + 32592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CC04"))) PPC_WEAK_FUNC(sub_83B7CC04);
PPC_FUNC_IMPL(__imp__sub_83B7CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CC08"))) PPC_WEAK_FUNC(sub_83B7CC08);
PPC_FUNC_IMPL(__imp__sub_83B7CC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32600
	ctx.r3.s64 = ctx.r11.s64 + 32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CC14"))) PPC_WEAK_FUNC(sub_83B7CC14);
PPC_FUNC_IMPL(__imp__sub_83B7CC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CC18"))) PPC_WEAK_FUNC(sub_83B7CC18);
PPC_FUNC_IMPL(__imp__sub_83B7CC18) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14120
	ctx.r7.s64 = ctx.r8.s64 + -14120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14120);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14120(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14120, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7CC40"))) PPC_WEAK_FUNC(sub_83B7CC40);
PPC_FUNC_IMPL(__imp__sub_83B7CC40) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14124
	ctx.r3.s64 = ctx.r11.s64 + -14124;
	// bl 0x83523120
	ctx.lr = 0x83B7CC58;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32608
	ctx.r3.s64 = ctx.r10.s64 + 32608;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7CC64;
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

__attribute__((alias("__imp__sub_83B7CC74"))) PPC_WEAK_FUNC(sub_83B7CC74);
PPC_FUNC_IMPL(__imp__sub_83B7CC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CC78"))) PPC_WEAK_FUNC(sub_83B7CC78);
PPC_FUNC_IMPL(__imp__sub_83B7CC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32624
	ctx.r3.s64 = ctx.r11.s64 + 32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CC84"))) PPC_WEAK_FUNC(sub_83B7CC84);
PPC_FUNC_IMPL(__imp__sub_83B7CC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CC88"))) PPC_WEAK_FUNC(sub_83B7CC88);
PPC_FUNC_IMPL(__imp__sub_83B7CC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32632
	ctx.r3.s64 = ctx.r11.s64 + 32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CC94"))) PPC_WEAK_FUNC(sub_83B7CC94);
PPC_FUNC_IMPL(__imp__sub_83B7CC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CC98"))) PPC_WEAK_FUNC(sub_83B7CC98);
PPC_FUNC_IMPL(__imp__sub_83B7CC98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32640
	ctx.r3.s64 = ctx.r11.s64 + 32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CCA4"))) PPC_WEAK_FUNC(sub_83B7CCA4);
PPC_FUNC_IMPL(__imp__sub_83B7CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CCA8"))) PPC_WEAK_FUNC(sub_83B7CCA8);
PPC_FUNC_IMPL(__imp__sub_83B7CCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32648
	ctx.r3.s64 = ctx.r11.s64 + 32648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CCB4"))) PPC_WEAK_FUNC(sub_83B7CCB4);
PPC_FUNC_IMPL(__imp__sub_83B7CCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CCB8"))) PPC_WEAK_FUNC(sub_83B7CCB8);
PPC_FUNC_IMPL(__imp__sub_83B7CCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32656
	ctx.r3.s64 = ctx.r11.s64 + 32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CCC4"))) PPC_WEAK_FUNC(sub_83B7CCC4);
PPC_FUNC_IMPL(__imp__sub_83B7CCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CCC8"))) PPC_WEAK_FUNC(sub_83B7CCC8);
PPC_FUNC_IMPL(__imp__sub_83B7CCC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32664
	ctx.r3.s64 = ctx.r11.s64 + 32664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CCD4"))) PPC_WEAK_FUNC(sub_83B7CCD4);
PPC_FUNC_IMPL(__imp__sub_83B7CCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CCD8"))) PPC_WEAK_FUNC(sub_83B7CCD8);
PPC_FUNC_IMPL(__imp__sub_83B7CCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32672
	ctx.r3.s64 = ctx.r11.s64 + 32672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CCE4"))) PPC_WEAK_FUNC(sub_83B7CCE4);
PPC_FUNC_IMPL(__imp__sub_83B7CCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CCE8"))) PPC_WEAK_FUNC(sub_83B7CCE8);
PPC_FUNC_IMPL(__imp__sub_83B7CCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32680
	ctx.r3.s64 = ctx.r11.s64 + 32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CCF4"))) PPC_WEAK_FUNC(sub_83B7CCF4);
PPC_FUNC_IMPL(__imp__sub_83B7CCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CCF8"))) PPC_WEAK_FUNC(sub_83B7CCF8);
PPC_FUNC_IMPL(__imp__sub_83B7CCF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32688
	ctx.r3.s64 = ctx.r11.s64 + 32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CD04"))) PPC_WEAK_FUNC(sub_83B7CD04);
PPC_FUNC_IMPL(__imp__sub_83B7CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CD08"))) PPC_WEAK_FUNC(sub_83B7CD08);
PPC_FUNC_IMPL(__imp__sub_83B7CD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32696
	ctx.r3.s64 = ctx.r11.s64 + 32696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CD14"))) PPC_WEAK_FUNC(sub_83B7CD14);
PPC_FUNC_IMPL(__imp__sub_83B7CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CD18"))) PPC_WEAK_FUNC(sub_83B7CD18);
PPC_FUNC_IMPL(__imp__sub_83B7CD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32704
	ctx.r3.s64 = ctx.r11.s64 + 32704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CD24"))) PPC_WEAK_FUNC(sub_83B7CD24);
PPC_FUNC_IMPL(__imp__sub_83B7CD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CD28"))) PPC_WEAK_FUNC(sub_83B7CD28);
PPC_FUNC_IMPL(__imp__sub_83B7CD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32712
	ctx.r3.s64 = ctx.r11.s64 + 32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CD34"))) PPC_WEAK_FUNC(sub_83B7CD34);
PPC_FUNC_IMPL(__imp__sub_83B7CD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CD38"))) PPC_WEAK_FUNC(sub_83B7CD38);
PPC_FUNC_IMPL(__imp__sub_83B7CD38) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14108
	ctx.r7.s64 = ctx.r8.s64 + -14108;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14108);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14108(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14108, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7CD60"))) PPC_WEAK_FUNC(sub_83B7CD60);
PPC_FUNC_IMPL(__imp__sub_83B7CD60) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14112
	ctx.r3.s64 = ctx.r11.s64 + -14112;
	// bl 0x83523120
	ctx.lr = 0x83B7CD78;
	sub_83523120(ctx, base);
	// lis r10,-31793
	ctx.r10.s64 = -2083586048;
	// addi r3,r10,32720
	ctx.r3.s64 = ctx.r10.s64 + 32720;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7CD84;
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

__attribute__((alias("__imp__sub_83B7CD94"))) PPC_WEAK_FUNC(sub_83B7CD94);
PPC_FUNC_IMPL(__imp__sub_83B7CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CD98"))) PPC_WEAK_FUNC(sub_83B7CD98);
PPC_FUNC_IMPL(__imp__sub_83B7CD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32736
	ctx.r3.s64 = ctx.r11.s64 + 32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CDA4"))) PPC_WEAK_FUNC(sub_83B7CDA4);
PPC_FUNC_IMPL(__imp__sub_83B7CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CDA8"))) PPC_WEAK_FUNC(sub_83B7CDA8);
PPC_FUNC_IMPL(__imp__sub_83B7CDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32744
	ctx.r3.s64 = ctx.r11.s64 + 32744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CDB4"))) PPC_WEAK_FUNC(sub_83B7CDB4);
PPC_FUNC_IMPL(__imp__sub_83B7CDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CDB8"))) PPC_WEAK_FUNC(sub_83B7CDB8);
PPC_FUNC_IMPL(__imp__sub_83B7CDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32752
	ctx.r3.s64 = ctx.r11.s64 + 32752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CDC4"))) PPC_WEAK_FUNC(sub_83B7CDC4);
PPC_FUNC_IMPL(__imp__sub_83B7CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CDC8"))) PPC_WEAK_FUNC(sub_83B7CDC8);
PPC_FUNC_IMPL(__imp__sub_83B7CDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31793
	ctx.r11.s64 = -2083586048;
	// addi r3,r11,32760
	ctx.r3.s64 = ctx.r11.s64 + 32760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CDD4"))) PPC_WEAK_FUNC(sub_83B7CDD4);
PPC_FUNC_IMPL(__imp__sub_83B7CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CDD8"))) PPC_WEAK_FUNC(sub_83B7CDD8);
PPC_FUNC_IMPL(__imp__sub_83B7CDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32768
	ctx.r3.s64 = ctx.r11.s64 + -32768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CDE4"))) PPC_WEAK_FUNC(sub_83B7CDE4);
PPC_FUNC_IMPL(__imp__sub_83B7CDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CDE8"))) PPC_WEAK_FUNC(sub_83B7CDE8);
PPC_FUNC_IMPL(__imp__sub_83B7CDE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32760
	ctx.r3.s64 = ctx.r11.s64 + -32760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CDF4"))) PPC_WEAK_FUNC(sub_83B7CDF4);
PPC_FUNC_IMPL(__imp__sub_83B7CDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CDF8"))) PPC_WEAK_FUNC(sub_83B7CDF8);
PPC_FUNC_IMPL(__imp__sub_83B7CDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32752
	ctx.r3.s64 = ctx.r11.s64 + -32752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CE04"))) PPC_WEAK_FUNC(sub_83B7CE04);
PPC_FUNC_IMPL(__imp__sub_83B7CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CE08"))) PPC_WEAK_FUNC(sub_83B7CE08);
PPC_FUNC_IMPL(__imp__sub_83B7CE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32744
	ctx.r3.s64 = ctx.r11.s64 + -32744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CE14"))) PPC_WEAK_FUNC(sub_83B7CE14);
PPC_FUNC_IMPL(__imp__sub_83B7CE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CE18"))) PPC_WEAK_FUNC(sub_83B7CE18);
PPC_FUNC_IMPL(__imp__sub_83B7CE18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32736
	ctx.r3.s64 = ctx.r11.s64 + -32736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CE24"))) PPC_WEAK_FUNC(sub_83B7CE24);
PPC_FUNC_IMPL(__imp__sub_83B7CE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CE28"))) PPC_WEAK_FUNC(sub_83B7CE28);
PPC_FUNC_IMPL(__imp__sub_83B7CE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32728
	ctx.r3.s64 = ctx.r11.s64 + -32728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CE34"))) PPC_WEAK_FUNC(sub_83B7CE34);
PPC_FUNC_IMPL(__imp__sub_83B7CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CE38"))) PPC_WEAK_FUNC(sub_83B7CE38);
PPC_FUNC_IMPL(__imp__sub_83B7CE38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32720
	ctx.r3.s64 = ctx.r11.s64 + -32720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CE44"))) PPC_WEAK_FUNC(sub_83B7CE44);
PPC_FUNC_IMPL(__imp__sub_83B7CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CE48"))) PPC_WEAK_FUNC(sub_83B7CE48);
PPC_FUNC_IMPL(__imp__sub_83B7CE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32712
	ctx.r3.s64 = ctx.r11.s64 + -32712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CE54"))) PPC_WEAK_FUNC(sub_83B7CE54);
PPC_FUNC_IMPL(__imp__sub_83B7CE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CE58"))) PPC_WEAK_FUNC(sub_83B7CE58);
PPC_FUNC_IMPL(__imp__sub_83B7CE58) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14096
	ctx.r7.s64 = ctx.r8.s64 + -14096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14096(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7CE80"))) PPC_WEAK_FUNC(sub_83B7CE80);
PPC_FUNC_IMPL(__imp__sub_83B7CE80) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14100
	ctx.r3.s64 = ctx.r11.s64 + -14100;
	// bl 0x83523120
	ctx.lr = 0x83B7CE98;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-32704
	ctx.r3.s64 = ctx.r10.s64 + -32704;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7CEA4;
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

__attribute__((alias("__imp__sub_83B7CEB4"))) PPC_WEAK_FUNC(sub_83B7CEB4);
PPC_FUNC_IMPL(__imp__sub_83B7CEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CEB8"))) PPC_WEAK_FUNC(sub_83B7CEB8);
PPC_FUNC_IMPL(__imp__sub_83B7CEB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32688
	ctx.r3.s64 = ctx.r11.s64 + -32688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CEC4"))) PPC_WEAK_FUNC(sub_83B7CEC4);
PPC_FUNC_IMPL(__imp__sub_83B7CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CEC8"))) PPC_WEAK_FUNC(sub_83B7CEC8);
PPC_FUNC_IMPL(__imp__sub_83B7CEC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32680
	ctx.r3.s64 = ctx.r11.s64 + -32680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CED4"))) PPC_WEAK_FUNC(sub_83B7CED4);
PPC_FUNC_IMPL(__imp__sub_83B7CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CED8"))) PPC_WEAK_FUNC(sub_83B7CED8);
PPC_FUNC_IMPL(__imp__sub_83B7CED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32672
	ctx.r3.s64 = ctx.r11.s64 + -32672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CEE4"))) PPC_WEAK_FUNC(sub_83B7CEE4);
PPC_FUNC_IMPL(__imp__sub_83B7CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CEE8"))) PPC_WEAK_FUNC(sub_83B7CEE8);
PPC_FUNC_IMPL(__imp__sub_83B7CEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32664
	ctx.r3.s64 = ctx.r11.s64 + -32664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CEF4"))) PPC_WEAK_FUNC(sub_83B7CEF4);
PPC_FUNC_IMPL(__imp__sub_83B7CEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CEF8"))) PPC_WEAK_FUNC(sub_83B7CEF8);
PPC_FUNC_IMPL(__imp__sub_83B7CEF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF04"))) PPC_WEAK_FUNC(sub_83B7CF04);
PPC_FUNC_IMPL(__imp__sub_83B7CF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF08"))) PPC_WEAK_FUNC(sub_83B7CF08);
PPC_FUNC_IMPL(__imp__sub_83B7CF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32648
	ctx.r3.s64 = ctx.r11.s64 + -32648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF14"))) PPC_WEAK_FUNC(sub_83B7CF14);
PPC_FUNC_IMPL(__imp__sub_83B7CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF18"))) PPC_WEAK_FUNC(sub_83B7CF18);
PPC_FUNC_IMPL(__imp__sub_83B7CF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32640
	ctx.r3.s64 = ctx.r11.s64 + -32640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF24"))) PPC_WEAK_FUNC(sub_83B7CF24);
PPC_FUNC_IMPL(__imp__sub_83B7CF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF28"))) PPC_WEAK_FUNC(sub_83B7CF28);
PPC_FUNC_IMPL(__imp__sub_83B7CF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32632
	ctx.r3.s64 = ctx.r11.s64 + -32632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF34"))) PPC_WEAK_FUNC(sub_83B7CF34);
PPC_FUNC_IMPL(__imp__sub_83B7CF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF38"))) PPC_WEAK_FUNC(sub_83B7CF38);
PPC_FUNC_IMPL(__imp__sub_83B7CF38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32624
	ctx.r3.s64 = ctx.r11.s64 + -32624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF44"))) PPC_WEAK_FUNC(sub_83B7CF44);
PPC_FUNC_IMPL(__imp__sub_83B7CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF48"))) PPC_WEAK_FUNC(sub_83B7CF48);
PPC_FUNC_IMPL(__imp__sub_83B7CF48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32616
	ctx.r3.s64 = ctx.r11.s64 + -32616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF54"))) PPC_WEAK_FUNC(sub_83B7CF54);
PPC_FUNC_IMPL(__imp__sub_83B7CF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF58"))) PPC_WEAK_FUNC(sub_83B7CF58);
PPC_FUNC_IMPL(__imp__sub_83B7CF58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32608
	ctx.r3.s64 = ctx.r11.s64 + -32608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF64"))) PPC_WEAK_FUNC(sub_83B7CF64);
PPC_FUNC_IMPL(__imp__sub_83B7CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF68"))) PPC_WEAK_FUNC(sub_83B7CF68);
PPC_FUNC_IMPL(__imp__sub_83B7CF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32600
	ctx.r3.s64 = ctx.r11.s64 + -32600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CF74"))) PPC_WEAK_FUNC(sub_83B7CF74);
PPC_FUNC_IMPL(__imp__sub_83B7CF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CF78"))) PPC_WEAK_FUNC(sub_83B7CF78);
PPC_FUNC_IMPL(__imp__sub_83B7CF78) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14084
	ctx.r7.s64 = ctx.r8.s64 + -14084;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14084(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14084);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14084(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14084, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7CFA0"))) PPC_WEAK_FUNC(sub_83B7CFA0);
PPC_FUNC_IMPL(__imp__sub_83B7CFA0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14088
	ctx.r3.s64 = ctx.r11.s64 + -14088;
	// bl 0x83523120
	ctx.lr = 0x83B7CFB8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-32592
	ctx.r3.s64 = ctx.r10.s64 + -32592;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7CFC4;
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

__attribute__((alias("__imp__sub_83B7CFD4"))) PPC_WEAK_FUNC(sub_83B7CFD4);
PPC_FUNC_IMPL(__imp__sub_83B7CFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CFD8"))) PPC_WEAK_FUNC(sub_83B7CFD8);
PPC_FUNC_IMPL(__imp__sub_83B7CFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CFE4"))) PPC_WEAK_FUNC(sub_83B7CFE4);
PPC_FUNC_IMPL(__imp__sub_83B7CFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CFE8"))) PPC_WEAK_FUNC(sub_83B7CFE8);
PPC_FUNC_IMPL(__imp__sub_83B7CFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32568
	ctx.r3.s64 = ctx.r11.s64 + -32568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7CFF4"))) PPC_WEAK_FUNC(sub_83B7CFF4);
PPC_FUNC_IMPL(__imp__sub_83B7CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7CFF8"))) PPC_WEAK_FUNC(sub_83B7CFF8);
PPC_FUNC_IMPL(__imp__sub_83B7CFF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32560
	ctx.r3.s64 = ctx.r11.s64 + -32560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D004"))) PPC_WEAK_FUNC(sub_83B7D004);
PPC_FUNC_IMPL(__imp__sub_83B7D004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D008"))) PPC_WEAK_FUNC(sub_83B7D008);
PPC_FUNC_IMPL(__imp__sub_83B7D008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32552
	ctx.r3.s64 = ctx.r11.s64 + -32552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D014"))) PPC_WEAK_FUNC(sub_83B7D014);
PPC_FUNC_IMPL(__imp__sub_83B7D014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D018"))) PPC_WEAK_FUNC(sub_83B7D018);
PPC_FUNC_IMPL(__imp__sub_83B7D018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32544
	ctx.r3.s64 = ctx.r11.s64 + -32544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D024"))) PPC_WEAK_FUNC(sub_83B7D024);
PPC_FUNC_IMPL(__imp__sub_83B7D024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D028"))) PPC_WEAK_FUNC(sub_83B7D028);
PPC_FUNC_IMPL(__imp__sub_83B7D028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32536
	ctx.r3.s64 = ctx.r11.s64 + -32536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D034"))) PPC_WEAK_FUNC(sub_83B7D034);
PPC_FUNC_IMPL(__imp__sub_83B7D034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D038"))) PPC_WEAK_FUNC(sub_83B7D038);
PPC_FUNC_IMPL(__imp__sub_83B7D038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32528
	ctx.r3.s64 = ctx.r11.s64 + -32528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D044"))) PPC_WEAK_FUNC(sub_83B7D044);
PPC_FUNC_IMPL(__imp__sub_83B7D044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D048"))) PPC_WEAK_FUNC(sub_83B7D048);
PPC_FUNC_IMPL(__imp__sub_83B7D048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32520
	ctx.r3.s64 = ctx.r11.s64 + -32520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D054"))) PPC_WEAK_FUNC(sub_83B7D054);
PPC_FUNC_IMPL(__imp__sub_83B7D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D058"))) PPC_WEAK_FUNC(sub_83B7D058);
PPC_FUNC_IMPL(__imp__sub_83B7D058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D064"))) PPC_WEAK_FUNC(sub_83B7D064);
PPC_FUNC_IMPL(__imp__sub_83B7D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D068"))) PPC_WEAK_FUNC(sub_83B7D068);
PPC_FUNC_IMPL(__imp__sub_83B7D068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32504
	ctx.r3.s64 = ctx.r11.s64 + -32504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D074"))) PPC_WEAK_FUNC(sub_83B7D074);
PPC_FUNC_IMPL(__imp__sub_83B7D074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D078"))) PPC_WEAK_FUNC(sub_83B7D078);
PPC_FUNC_IMPL(__imp__sub_83B7D078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32496
	ctx.r3.s64 = ctx.r11.s64 + -32496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D084"))) PPC_WEAK_FUNC(sub_83B7D084);
PPC_FUNC_IMPL(__imp__sub_83B7D084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D088"))) PPC_WEAK_FUNC(sub_83B7D088);
PPC_FUNC_IMPL(__imp__sub_83B7D088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31792
	ctx.r11.s64 = -2083520512;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83B7D094"))) PPC_WEAK_FUNC(sub_83B7D094);
PPC_FUNC_IMPL(__imp__sub_83B7D094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83B7D098"))) PPC_WEAK_FUNC(sub_83B7D098);
PPC_FUNC_IMPL(__imp__sub_83B7D098) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-14072
	ctx.r7.s64 = ctx.r8.s64 + -14072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-14072(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14072);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-14072(r8)
	PPC_STORE_U32(ctx.r8.u32 + -14072, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83B7D0C0"))) PPC_WEAK_FUNC(sub_83B7D0C0);
PPC_FUNC_IMPL(__imp__sub_83B7D0C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r3,r11,-14076
	ctx.r3.s64 = ctx.r11.s64 + -14076;
	// bl 0x83523120
	ctx.lr = 0x83B7D0D8;
	sub_83523120(ctx, base);
	// lis r10,-31792
	ctx.r10.s64 = -2083520512;
	// addi r3,r10,-32480
	ctx.r3.s64 = ctx.r10.s64 + -32480;
	// bl 0x831cdcc8
	ctx.lr = 0x83B7D0E4;
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

__attribute__((alias("__imp__sub_83B7D0F4"))) PPC_WEAK_FUNC(sub_83B7D0F4);
PPC_FUNC_IMPL(__imp__sub_83B7D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

