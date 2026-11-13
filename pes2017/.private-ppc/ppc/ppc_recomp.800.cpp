#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83C5770C"))) PPC_WEAK_FUNC(sub_83C5770C);
PPC_FUNC_IMPL(__imp__sub_83C5770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57710"))) PPC_WEAK_FUNC(sub_83C57710);
PPC_FUNC_IMPL(__imp__sub_83C57710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1056
	ctx.r3.s64 = ctx.r11.s64 + 1056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5771C"))) PPC_WEAK_FUNC(sub_83C5771C);
PPC_FUNC_IMPL(__imp__sub_83C5771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57720"))) PPC_WEAK_FUNC(sub_83C57720);
PPC_FUNC_IMPL(__imp__sub_83C57720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1064
	ctx.r3.s64 = ctx.r11.s64 + 1064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5772C"))) PPC_WEAK_FUNC(sub_83C5772C);
PPC_FUNC_IMPL(__imp__sub_83C5772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57730"))) PPC_WEAK_FUNC(sub_83C57730);
PPC_FUNC_IMPL(__imp__sub_83C57730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1072
	ctx.r3.s64 = ctx.r11.s64 + 1072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5773C"))) PPC_WEAK_FUNC(sub_83C5773C);
PPC_FUNC_IMPL(__imp__sub_83C5773C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57740"))) PPC_WEAK_FUNC(sub_83C57740);
PPC_FUNC_IMPL(__imp__sub_83C57740) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-24360
	ctx.r7.s64 = ctx.r8.s64 + -24360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-24360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -24360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-24360(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57768"))) PPC_WEAK_FUNC(sub_83C57768);
PPC_FUNC_IMPL(__imp__sub_83C57768) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17688
	ctx.r6.s64 = ctx.r7.s64 + 17688;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17616(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17616);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-24360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24360);
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
	// std r9,17688(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C577B0"))) PPC_WEAK_FUNC(sub_83C577B0);
PPC_FUNC_IMPL(__imp__sub_83C577B0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-24376
	ctx.r3.s64 = ctx.r11.s64 + -24376;
	// bl 0x83523120
	ctx.lr = 0x83C577C8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1080
	ctx.r3.s64 = ctx.r10.s64 + 1080;
	// bl 0x831cdcc8
	ctx.lr = 0x83C577D4;
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

__attribute__((alias("__imp__sub_83C577E4"))) PPC_WEAK_FUNC(sub_83C577E4);
PPC_FUNC_IMPL(__imp__sub_83C577E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C577E8"))) PPC_WEAK_FUNC(sub_83C577E8);
PPC_FUNC_IMPL(__imp__sub_83C577E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1096
	ctx.r3.s64 = ctx.r11.s64 + 1096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C577F4"))) PPC_WEAK_FUNC(sub_83C577F4);
PPC_FUNC_IMPL(__imp__sub_83C577F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C577F8"))) PPC_WEAK_FUNC(sub_83C577F8);
PPC_FUNC_IMPL(__imp__sub_83C577F8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-24352
	ctx.r3.s64 = ctx.r11.s64 + -24352;
	// bl 0x8259af80
	ctx.lr = 0x83C57810;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1112
	ctx.r3.s64 = ctx.r10.s64 + 1112;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5781C;
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

__attribute__((alias("__imp__sub_83C5782C"))) PPC_WEAK_FUNC(sub_83C5782C);
PPC_FUNC_IMPL(__imp__sub_83C5782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57830"))) PPC_WEAK_FUNC(sub_83C57830);
PPC_FUNC_IMPL(__imp__sub_83C57830) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24372
	ctx.r11.s64 = ctx.r8.s64 + -24372;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17664(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17664);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1104
	ctx.r3.s64 = ctx.r6.s64 + 1104;
	// stw r10,-24372(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24372, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57860"))) PPC_WEAK_FUNC(sub_83C57860);
PPC_FUNC_IMPL(__imp__sub_83C57860) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1120
	ctx.r3.s64 = ctx.r11.s64 + 1120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5786C"))) PPC_WEAK_FUNC(sub_83C5786C);
PPC_FUNC_IMPL(__imp__sub_83C5786C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57870"))) PPC_WEAK_FUNC(sub_83C57870);
PPC_FUNC_IMPL(__imp__sub_83C57870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5787C"))) PPC_WEAK_FUNC(sub_83C5787C);
PPC_FUNC_IMPL(__imp__sub_83C5787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57880"))) PPC_WEAK_FUNC(sub_83C57880);
PPC_FUNC_IMPL(__imp__sub_83C57880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5788C"))) PPC_WEAK_FUNC(sub_83C5788C);
PPC_FUNC_IMPL(__imp__sub_83C5788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57890"))) PPC_WEAK_FUNC(sub_83C57890);
PPC_FUNC_IMPL(__imp__sub_83C57890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1144
	ctx.r3.s64 = ctx.r11.s64 + 1144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5789C"))) PPC_WEAK_FUNC(sub_83C5789C);
PPC_FUNC_IMPL(__imp__sub_83C5789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C578A0"))) PPC_WEAK_FUNC(sub_83C578A0);
PPC_FUNC_IMPL(__imp__sub_83C578A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1152
	ctx.r3.s64 = ctx.r11.s64 + 1152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C578AC"))) PPC_WEAK_FUNC(sub_83C578AC);
PPC_FUNC_IMPL(__imp__sub_83C578AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C578B0"))) PPC_WEAK_FUNC(sub_83C578B0);
PPC_FUNC_IMPL(__imp__sub_83C578B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1160
	ctx.r3.s64 = ctx.r11.s64 + 1160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C578BC"))) PPC_WEAK_FUNC(sub_83C578BC);
PPC_FUNC_IMPL(__imp__sub_83C578BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C578C0"))) PPC_WEAK_FUNC(sub_83C578C0);
PPC_FUNC_IMPL(__imp__sub_83C578C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1168
	ctx.r3.s64 = ctx.r11.s64 + 1168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C578CC"))) PPC_WEAK_FUNC(sub_83C578CC);
PPC_FUNC_IMPL(__imp__sub_83C578CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C578D0"))) PPC_WEAK_FUNC(sub_83C578D0);
PPC_FUNC_IMPL(__imp__sub_83C578D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1176
	ctx.r3.s64 = ctx.r11.s64 + 1176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C578DC"))) PPC_WEAK_FUNC(sub_83C578DC);
PPC_FUNC_IMPL(__imp__sub_83C578DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C578E0"))) PPC_WEAK_FUNC(sub_83C578E0);
PPC_FUNC_IMPL(__imp__sub_83C578E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1184
	ctx.r3.s64 = ctx.r11.s64 + 1184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C578EC"))) PPC_WEAK_FUNC(sub_83C578EC);
PPC_FUNC_IMPL(__imp__sub_83C578EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C578F0"))) PPC_WEAK_FUNC(sub_83C578F0);
PPC_FUNC_IMPL(__imp__sub_83C578F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1192
	ctx.r3.s64 = ctx.r11.s64 + 1192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C578FC"))) PPC_WEAK_FUNC(sub_83C578FC);
PPC_FUNC_IMPL(__imp__sub_83C578FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57900"))) PPC_WEAK_FUNC(sub_83C57900);
PPC_FUNC_IMPL(__imp__sub_83C57900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1200
	ctx.r3.s64 = ctx.r11.s64 + 1200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5790C"))) PPC_WEAK_FUNC(sub_83C5790C);
PPC_FUNC_IMPL(__imp__sub_83C5790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57910"))) PPC_WEAK_FUNC(sub_83C57910);
PPC_FUNC_IMPL(__imp__sub_83C57910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5791C"))) PPC_WEAK_FUNC(sub_83C5791C);
PPC_FUNC_IMPL(__imp__sub_83C5791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57920"))) PPC_WEAK_FUNC(sub_83C57920);
PPC_FUNC_IMPL(__imp__sub_83C57920) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23992
	ctx.r7.s64 = ctx.r8.s64 + -23992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23992(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57948"))) PPC_WEAK_FUNC(sub_83C57948);
PPC_FUNC_IMPL(__imp__sub_83C57948) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// bl 0x83523120
	ctx.lr = 0x83C57960;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1216
	ctx.r3.s64 = ctx.r10.s64 + 1216;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5796C;
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

__attribute__((alias("__imp__sub_83C5797C"))) PPC_WEAK_FUNC(sub_83C5797C);
PPC_FUNC_IMPL(__imp__sub_83C5797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57980"))) PPC_WEAK_FUNC(sub_83C57980);
PPC_FUNC_IMPL(__imp__sub_83C57980) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17816
	ctx.r6.s64 = ctx.r7.s64 + 17816;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23992);
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
	// std r9,17816(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17816, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C579C8"))) PPC_WEAK_FUNC(sub_83C579C8);
PPC_FUNC_IMPL(__imp__sub_83C579C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1232
	ctx.r3.s64 = ctx.r11.s64 + 1232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C579D4"))) PPC_WEAK_FUNC(sub_83C579D4);
PPC_FUNC_IMPL(__imp__sub_83C579D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C579D8"))) PPC_WEAK_FUNC(sub_83C579D8);
PPC_FUNC_IMPL(__imp__sub_83C579D8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-23984
	ctx.r3.s64 = ctx.r11.s64 + -23984;
	// bl 0x8259af80
	ctx.lr = 0x83C579F0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1248
	ctx.r3.s64 = ctx.r10.s64 + 1248;
	// bl 0x831cdcc8
	ctx.lr = 0x83C579FC;
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

__attribute__((alias("__imp__sub_83C57A0C"))) PPC_WEAK_FUNC(sub_83C57A0C);
PPC_FUNC_IMPL(__imp__sub_83C57A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57A10"))) PPC_WEAK_FUNC(sub_83C57A10);
PPC_FUNC_IMPL(__imp__sub_83C57A10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-24004
	ctx.r11.s64 = ctx.r8.s64 + -24004;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17792);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1240
	ctx.r3.s64 = ctx.r6.s64 + 1240;
	// stw r10,-24004(r8)
	PPC_STORE_U32(ctx.r8.u32 + -24004, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A40"))) PPC_WEAK_FUNC(sub_83C57A40);
PPC_FUNC_IMPL(__imp__sub_83C57A40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1256
	ctx.r3.s64 = ctx.r11.s64 + 1256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A4C"))) PPC_WEAK_FUNC(sub_83C57A4C);
PPC_FUNC_IMPL(__imp__sub_83C57A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57A50"))) PPC_WEAK_FUNC(sub_83C57A50);
PPC_FUNC_IMPL(__imp__sub_83C57A50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1264
	ctx.r3.s64 = ctx.r11.s64 + 1264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A5C"))) PPC_WEAK_FUNC(sub_83C57A5C);
PPC_FUNC_IMPL(__imp__sub_83C57A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57A60"))) PPC_WEAK_FUNC(sub_83C57A60);
PPC_FUNC_IMPL(__imp__sub_83C57A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1272
	ctx.r3.s64 = ctx.r11.s64 + 1272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A6C"))) PPC_WEAK_FUNC(sub_83C57A6C);
PPC_FUNC_IMPL(__imp__sub_83C57A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57A70"))) PPC_WEAK_FUNC(sub_83C57A70);
PPC_FUNC_IMPL(__imp__sub_83C57A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1280
	ctx.r3.s64 = ctx.r11.s64 + 1280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A7C"))) PPC_WEAK_FUNC(sub_83C57A7C);
PPC_FUNC_IMPL(__imp__sub_83C57A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57A80"))) PPC_WEAK_FUNC(sub_83C57A80);
PPC_FUNC_IMPL(__imp__sub_83C57A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1288
	ctx.r3.s64 = ctx.r11.s64 + 1288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A8C"))) PPC_WEAK_FUNC(sub_83C57A8C);
PPC_FUNC_IMPL(__imp__sub_83C57A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57A90"))) PPC_WEAK_FUNC(sub_83C57A90);
PPC_FUNC_IMPL(__imp__sub_83C57A90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1296
	ctx.r3.s64 = ctx.r11.s64 + 1296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57A9C"))) PPC_WEAK_FUNC(sub_83C57A9C);
PPC_FUNC_IMPL(__imp__sub_83C57A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57AA0"))) PPC_WEAK_FUNC(sub_83C57AA0);
PPC_FUNC_IMPL(__imp__sub_83C57AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1304
	ctx.r3.s64 = ctx.r11.s64 + 1304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57AAC"))) PPC_WEAK_FUNC(sub_83C57AAC);
PPC_FUNC_IMPL(__imp__sub_83C57AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57AB0"))) PPC_WEAK_FUNC(sub_83C57AB0);
PPC_FUNC_IMPL(__imp__sub_83C57AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1312
	ctx.r3.s64 = ctx.r11.s64 + 1312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57ABC"))) PPC_WEAK_FUNC(sub_83C57ABC);
PPC_FUNC_IMPL(__imp__sub_83C57ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57AC0"))) PPC_WEAK_FUNC(sub_83C57AC0);
PPC_FUNC_IMPL(__imp__sub_83C57AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1320
	ctx.r3.s64 = ctx.r11.s64 + 1320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57ACC"))) PPC_WEAK_FUNC(sub_83C57ACC);
PPC_FUNC_IMPL(__imp__sub_83C57ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57AD0"))) PPC_WEAK_FUNC(sub_83C57AD0);
PPC_FUNC_IMPL(__imp__sub_83C57AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1328
	ctx.r3.s64 = ctx.r11.s64 + 1328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57ADC"))) PPC_WEAK_FUNC(sub_83C57ADC);
PPC_FUNC_IMPL(__imp__sub_83C57ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57AE0"))) PPC_WEAK_FUNC(sub_83C57AE0);
PPC_FUNC_IMPL(__imp__sub_83C57AE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1336
	ctx.r3.s64 = ctx.r11.s64 + 1336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57AEC"))) PPC_WEAK_FUNC(sub_83C57AEC);
PPC_FUNC_IMPL(__imp__sub_83C57AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57AF0"))) PPC_WEAK_FUNC(sub_83C57AF0);
PPC_FUNC_IMPL(__imp__sub_83C57AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1344
	ctx.r3.s64 = ctx.r11.s64 + 1344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57AFC"))) PPC_WEAK_FUNC(sub_83C57AFC);
PPC_FUNC_IMPL(__imp__sub_83C57AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57B00"))) PPC_WEAK_FUNC(sub_83C57B00);
PPC_FUNC_IMPL(__imp__sub_83C57B00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23624
	ctx.r7.s64 = ctx.r8.s64 + -23624;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23624(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23624);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23624(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23624, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57B28"))) PPC_WEAK_FUNC(sub_83C57B28);
PPC_FUNC_IMPL(__imp__sub_83C57B28) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-23640
	ctx.r3.s64 = ctx.r11.s64 + -23640;
	// bl 0x83523120
	ctx.lr = 0x83C57B40;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1352
	ctx.r3.s64 = ctx.r10.s64 + 1352;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57B4C;
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

__attribute__((alias("__imp__sub_83C57B5C"))) PPC_WEAK_FUNC(sub_83C57B5C);
PPC_FUNC_IMPL(__imp__sub_83C57B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57B60"))) PPC_WEAK_FUNC(sub_83C57B60);
PPC_FUNC_IMPL(__imp__sub_83C57B60) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,17944
	ctx.r6.s64 = ctx.r7.s64 + 17944;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,17872(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 17872);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23624);
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
	// std r9,17944(r7)
	PPC_STORE_U64(ctx.r7.u32 + 17944, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57BA8"))) PPC_WEAK_FUNC(sub_83C57BA8);
PPC_FUNC_IMPL(__imp__sub_83C57BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1368
	ctx.r3.s64 = ctx.r11.s64 + 1368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57BB4"))) PPC_WEAK_FUNC(sub_83C57BB4);
PPC_FUNC_IMPL(__imp__sub_83C57BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57BB8"))) PPC_WEAK_FUNC(sub_83C57BB8);
PPC_FUNC_IMPL(__imp__sub_83C57BB8) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-23616
	ctx.r3.s64 = ctx.r11.s64 + -23616;
	// bl 0x8259af80
	ctx.lr = 0x83C57BD0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1384
	ctx.r3.s64 = ctx.r10.s64 + 1384;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57BDC;
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

__attribute__((alias("__imp__sub_83C57BEC"))) PPC_WEAK_FUNC(sub_83C57BEC);
PPC_FUNC_IMPL(__imp__sub_83C57BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57BF0"))) PPC_WEAK_FUNC(sub_83C57BF0);
PPC_FUNC_IMPL(__imp__sub_83C57BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23636
	ctx.r11.s64 = ctx.r8.s64 + -23636;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,17920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17920);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1376
	ctx.r3.s64 = ctx.r6.s64 + 1376;
	// stw r10,-23636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23636, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C20"))) PPC_WEAK_FUNC(sub_83C57C20);
PPC_FUNC_IMPL(__imp__sub_83C57C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C2C"))) PPC_WEAK_FUNC(sub_83C57C2C);
PPC_FUNC_IMPL(__imp__sub_83C57C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C30"))) PPC_WEAK_FUNC(sub_83C57C30);
PPC_FUNC_IMPL(__imp__sub_83C57C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1400
	ctx.r3.s64 = ctx.r11.s64 + 1400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C3C"))) PPC_WEAK_FUNC(sub_83C57C3C);
PPC_FUNC_IMPL(__imp__sub_83C57C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C40"))) PPC_WEAK_FUNC(sub_83C57C40);
PPC_FUNC_IMPL(__imp__sub_83C57C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1408
	ctx.r3.s64 = ctx.r11.s64 + 1408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C4C"))) PPC_WEAK_FUNC(sub_83C57C4C);
PPC_FUNC_IMPL(__imp__sub_83C57C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C50"))) PPC_WEAK_FUNC(sub_83C57C50);
PPC_FUNC_IMPL(__imp__sub_83C57C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1416
	ctx.r3.s64 = ctx.r11.s64 + 1416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C5C"))) PPC_WEAK_FUNC(sub_83C57C5C);
PPC_FUNC_IMPL(__imp__sub_83C57C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C60"))) PPC_WEAK_FUNC(sub_83C57C60);
PPC_FUNC_IMPL(__imp__sub_83C57C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1424
	ctx.r3.s64 = ctx.r11.s64 + 1424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C6C"))) PPC_WEAK_FUNC(sub_83C57C6C);
PPC_FUNC_IMPL(__imp__sub_83C57C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C70"))) PPC_WEAK_FUNC(sub_83C57C70);
PPC_FUNC_IMPL(__imp__sub_83C57C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1432
	ctx.r3.s64 = ctx.r11.s64 + 1432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C7C"))) PPC_WEAK_FUNC(sub_83C57C7C);
PPC_FUNC_IMPL(__imp__sub_83C57C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C80"))) PPC_WEAK_FUNC(sub_83C57C80);
PPC_FUNC_IMPL(__imp__sub_83C57C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1440
	ctx.r3.s64 = ctx.r11.s64 + 1440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C8C"))) PPC_WEAK_FUNC(sub_83C57C8C);
PPC_FUNC_IMPL(__imp__sub_83C57C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57C90"))) PPC_WEAK_FUNC(sub_83C57C90);
PPC_FUNC_IMPL(__imp__sub_83C57C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1448
	ctx.r3.s64 = ctx.r11.s64 + 1448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57C9C"))) PPC_WEAK_FUNC(sub_83C57C9C);
PPC_FUNC_IMPL(__imp__sub_83C57C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57CA0"))) PPC_WEAK_FUNC(sub_83C57CA0);
PPC_FUNC_IMPL(__imp__sub_83C57CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1456
	ctx.r3.s64 = ctx.r11.s64 + 1456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57CAC"))) PPC_WEAK_FUNC(sub_83C57CAC);
PPC_FUNC_IMPL(__imp__sub_83C57CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57CB0"))) PPC_WEAK_FUNC(sub_83C57CB0);
PPC_FUNC_IMPL(__imp__sub_83C57CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1464
	ctx.r3.s64 = ctx.r11.s64 + 1464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57CBC"))) PPC_WEAK_FUNC(sub_83C57CBC);
PPC_FUNC_IMPL(__imp__sub_83C57CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57CC0"))) PPC_WEAK_FUNC(sub_83C57CC0);
PPC_FUNC_IMPL(__imp__sub_83C57CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57CCC"))) PPC_WEAK_FUNC(sub_83C57CCC);
PPC_FUNC_IMPL(__imp__sub_83C57CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57CD0"))) PPC_WEAK_FUNC(sub_83C57CD0);
PPC_FUNC_IMPL(__imp__sub_83C57CD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1480
	ctx.r3.s64 = ctx.r11.s64 + 1480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57CDC"))) PPC_WEAK_FUNC(sub_83C57CDC);
PPC_FUNC_IMPL(__imp__sub_83C57CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57CE0"))) PPC_WEAK_FUNC(sub_83C57CE0);
PPC_FUNC_IMPL(__imp__sub_83C57CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-23256
	ctx.r7.s64 = ctx.r8.s64 + -23256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-23256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -23256);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-23256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23256, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57D08"))) PPC_WEAK_FUNC(sub_83C57D08);
PPC_FUNC_IMPL(__imp__sub_83C57D08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18072
	ctx.r6.s64 = ctx.r7.s64 + 18072;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18000(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18000);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-23256(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -23256);
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
	// std r9,18072(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18072, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57D50"))) PPC_WEAK_FUNC(sub_83C57D50);
PPC_FUNC_IMPL(__imp__sub_83C57D50) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-23272
	ctx.r3.s64 = ctx.r11.s64 + -23272;
	// bl 0x83523120
	ctx.lr = 0x83C57D68;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1488
	ctx.r3.s64 = ctx.r10.s64 + 1488;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57D74;
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

__attribute__((alias("__imp__sub_83C57D84"))) PPC_WEAK_FUNC(sub_83C57D84);
PPC_FUNC_IMPL(__imp__sub_83C57D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57D88"))) PPC_WEAK_FUNC(sub_83C57D88);
PPC_FUNC_IMPL(__imp__sub_83C57D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1504
	ctx.r3.s64 = ctx.r11.s64 + 1504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57D94"))) PPC_WEAK_FUNC(sub_83C57D94);
PPC_FUNC_IMPL(__imp__sub_83C57D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57D98"))) PPC_WEAK_FUNC(sub_83C57D98);
PPC_FUNC_IMPL(__imp__sub_83C57D98) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-23248
	ctx.r3.s64 = ctx.r11.s64 + -23248;
	// bl 0x8259af80
	ctx.lr = 0x83C57DB0;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1520
	ctx.r3.s64 = ctx.r10.s64 + 1520;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57DBC;
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

__attribute__((alias("__imp__sub_83C57DCC"))) PPC_WEAK_FUNC(sub_83C57DCC);
PPC_FUNC_IMPL(__imp__sub_83C57DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57DD0"))) PPC_WEAK_FUNC(sub_83C57DD0);
PPC_FUNC_IMPL(__imp__sub_83C57DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-23268
	ctx.r11.s64 = ctx.r8.s64 + -23268;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18048);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1512
	ctx.r3.s64 = ctx.r6.s64 + 1512;
	// stw r10,-23268(r8)
	PPC_STORE_U32(ctx.r8.u32 + -23268, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E00"))) PPC_WEAK_FUNC(sub_83C57E00);
PPC_FUNC_IMPL(__imp__sub_83C57E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1528
	ctx.r3.s64 = ctx.r11.s64 + 1528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E0C"))) PPC_WEAK_FUNC(sub_83C57E0C);
PPC_FUNC_IMPL(__imp__sub_83C57E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E10"))) PPC_WEAK_FUNC(sub_83C57E10);
PPC_FUNC_IMPL(__imp__sub_83C57E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1536
	ctx.r3.s64 = ctx.r11.s64 + 1536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E1C"))) PPC_WEAK_FUNC(sub_83C57E1C);
PPC_FUNC_IMPL(__imp__sub_83C57E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E20"))) PPC_WEAK_FUNC(sub_83C57E20);
PPC_FUNC_IMPL(__imp__sub_83C57E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1544
	ctx.r3.s64 = ctx.r11.s64 + 1544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E2C"))) PPC_WEAK_FUNC(sub_83C57E2C);
PPC_FUNC_IMPL(__imp__sub_83C57E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E30"))) PPC_WEAK_FUNC(sub_83C57E30);
PPC_FUNC_IMPL(__imp__sub_83C57E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1552
	ctx.r3.s64 = ctx.r11.s64 + 1552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E3C"))) PPC_WEAK_FUNC(sub_83C57E3C);
PPC_FUNC_IMPL(__imp__sub_83C57E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E40"))) PPC_WEAK_FUNC(sub_83C57E40);
PPC_FUNC_IMPL(__imp__sub_83C57E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E4C"))) PPC_WEAK_FUNC(sub_83C57E4C);
PPC_FUNC_IMPL(__imp__sub_83C57E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E50"))) PPC_WEAK_FUNC(sub_83C57E50);
PPC_FUNC_IMPL(__imp__sub_83C57E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1568
	ctx.r3.s64 = ctx.r11.s64 + 1568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E5C"))) PPC_WEAK_FUNC(sub_83C57E5C);
PPC_FUNC_IMPL(__imp__sub_83C57E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E60"))) PPC_WEAK_FUNC(sub_83C57E60);
PPC_FUNC_IMPL(__imp__sub_83C57E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1576
	ctx.r3.s64 = ctx.r11.s64 + 1576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E6C"))) PPC_WEAK_FUNC(sub_83C57E6C);
PPC_FUNC_IMPL(__imp__sub_83C57E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E70"))) PPC_WEAK_FUNC(sub_83C57E70);
PPC_FUNC_IMPL(__imp__sub_83C57E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1584
	ctx.r3.s64 = ctx.r11.s64 + 1584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E7C"))) PPC_WEAK_FUNC(sub_83C57E7C);
PPC_FUNC_IMPL(__imp__sub_83C57E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E80"))) PPC_WEAK_FUNC(sub_83C57E80);
PPC_FUNC_IMPL(__imp__sub_83C57E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E8C"))) PPC_WEAK_FUNC(sub_83C57E8C);
PPC_FUNC_IMPL(__imp__sub_83C57E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57E90"))) PPC_WEAK_FUNC(sub_83C57E90);
PPC_FUNC_IMPL(__imp__sub_83C57E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1600
	ctx.r3.s64 = ctx.r11.s64 + 1600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57E9C"))) PPC_WEAK_FUNC(sub_83C57E9C);
PPC_FUNC_IMPL(__imp__sub_83C57E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57EA0"))) PPC_WEAK_FUNC(sub_83C57EA0);
PPC_FUNC_IMPL(__imp__sub_83C57EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1608
	ctx.r3.s64 = ctx.r11.s64 + 1608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57EAC"))) PPC_WEAK_FUNC(sub_83C57EAC);
PPC_FUNC_IMPL(__imp__sub_83C57EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57EB0"))) PPC_WEAK_FUNC(sub_83C57EB0);
PPC_FUNC_IMPL(__imp__sub_83C57EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1616
	ctx.r3.s64 = ctx.r11.s64 + 1616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57EBC"))) PPC_WEAK_FUNC(sub_83C57EBC);
PPC_FUNC_IMPL(__imp__sub_83C57EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57EC0"))) PPC_WEAK_FUNC(sub_83C57EC0);
PPC_FUNC_IMPL(__imp__sub_83C57EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22888
	ctx.r7.s64 = ctx.r8.s64 + -22888;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22888(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22888);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22888(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22888, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57EE8"))) PPC_WEAK_FUNC(sub_83C57EE8);
PPC_FUNC_IMPL(__imp__sub_83C57EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18212
	ctx.r6.s64 = ctx.r7.s64 + 18212;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18140(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18140);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22888(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22888);
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
	// std r9,18212(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C57F30"))) PPC_WEAK_FUNC(sub_83C57F30);
PPC_FUNC_IMPL(__imp__sub_83C57F30) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-22904
	ctx.r3.s64 = ctx.r11.s64 + -22904;
	// bl 0x83523120
	ctx.lr = 0x83C57F48;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57F54;
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

__attribute__((alias("__imp__sub_83C57F64"))) PPC_WEAK_FUNC(sub_83C57F64);
PPC_FUNC_IMPL(__imp__sub_83C57F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57F68"))) PPC_WEAK_FUNC(sub_83C57F68);
PPC_FUNC_IMPL(__imp__sub_83C57F68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1640
	ctx.r3.s64 = ctx.r11.s64 + 1640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57F74"))) PPC_WEAK_FUNC(sub_83C57F74);
PPC_FUNC_IMPL(__imp__sub_83C57F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57F78"))) PPC_WEAK_FUNC(sub_83C57F78);
PPC_FUNC_IMPL(__imp__sub_83C57F78) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-22880
	ctx.r3.s64 = ctx.r11.s64 + -22880;
	// bl 0x8259af80
	ctx.lr = 0x83C57F90;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1656
	ctx.r3.s64 = ctx.r10.s64 + 1656;
	// bl 0x831cdcc8
	ctx.lr = 0x83C57F9C;
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

__attribute__((alias("__imp__sub_83C57FAC"))) PPC_WEAK_FUNC(sub_83C57FAC);
PPC_FUNC_IMPL(__imp__sub_83C57FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57FB0"))) PPC_WEAK_FUNC(sub_83C57FB0);
PPC_FUNC_IMPL(__imp__sub_83C57FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22900
	ctx.r11.s64 = ctx.r8.s64 + -22900;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1648
	ctx.r3.s64 = ctx.r6.s64 + 1648;
	// stw r10,-22900(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22900, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57FE0"))) PPC_WEAK_FUNC(sub_83C57FE0);
PPC_FUNC_IMPL(__imp__sub_83C57FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1664
	ctx.r3.s64 = ctx.r11.s64 + 1664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57FEC"))) PPC_WEAK_FUNC(sub_83C57FEC);
PPC_FUNC_IMPL(__imp__sub_83C57FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C57FF0"))) PPC_WEAK_FUNC(sub_83C57FF0);
PPC_FUNC_IMPL(__imp__sub_83C57FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1672
	ctx.r3.s64 = ctx.r11.s64 + 1672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C57FFC"))) PPC_WEAK_FUNC(sub_83C57FFC);
PPC_FUNC_IMPL(__imp__sub_83C57FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58000"))) PPC_WEAK_FUNC(sub_83C58000);
PPC_FUNC_IMPL(__imp__sub_83C58000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1680
	ctx.r3.s64 = ctx.r11.s64 + 1680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5800C"))) PPC_WEAK_FUNC(sub_83C5800C);
PPC_FUNC_IMPL(__imp__sub_83C5800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58010"))) PPC_WEAK_FUNC(sub_83C58010);
PPC_FUNC_IMPL(__imp__sub_83C58010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1688
	ctx.r3.s64 = ctx.r11.s64 + 1688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5801C"))) PPC_WEAK_FUNC(sub_83C5801C);
PPC_FUNC_IMPL(__imp__sub_83C5801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58020"))) PPC_WEAK_FUNC(sub_83C58020);
PPC_FUNC_IMPL(__imp__sub_83C58020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1696
	ctx.r3.s64 = ctx.r11.s64 + 1696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5802C"))) PPC_WEAK_FUNC(sub_83C5802C);
PPC_FUNC_IMPL(__imp__sub_83C5802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58030"))) PPC_WEAK_FUNC(sub_83C58030);
PPC_FUNC_IMPL(__imp__sub_83C58030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1704
	ctx.r3.s64 = ctx.r11.s64 + 1704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5803C"))) PPC_WEAK_FUNC(sub_83C5803C);
PPC_FUNC_IMPL(__imp__sub_83C5803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58040"))) PPC_WEAK_FUNC(sub_83C58040);
PPC_FUNC_IMPL(__imp__sub_83C58040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1712
	ctx.r3.s64 = ctx.r11.s64 + 1712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5804C"))) PPC_WEAK_FUNC(sub_83C5804C);
PPC_FUNC_IMPL(__imp__sub_83C5804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58050"))) PPC_WEAK_FUNC(sub_83C58050);
PPC_FUNC_IMPL(__imp__sub_83C58050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1720
	ctx.r3.s64 = ctx.r11.s64 + 1720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5805C"))) PPC_WEAK_FUNC(sub_83C5805C);
PPC_FUNC_IMPL(__imp__sub_83C5805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58060"))) PPC_WEAK_FUNC(sub_83C58060);
PPC_FUNC_IMPL(__imp__sub_83C58060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1728
	ctx.r3.s64 = ctx.r11.s64 + 1728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5806C"))) PPC_WEAK_FUNC(sub_83C5806C);
PPC_FUNC_IMPL(__imp__sub_83C5806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58070"))) PPC_WEAK_FUNC(sub_83C58070);
PPC_FUNC_IMPL(__imp__sub_83C58070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1736
	ctx.r3.s64 = ctx.r11.s64 + 1736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5807C"))) PPC_WEAK_FUNC(sub_83C5807C);
PPC_FUNC_IMPL(__imp__sub_83C5807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58080"))) PPC_WEAK_FUNC(sub_83C58080);
PPC_FUNC_IMPL(__imp__sub_83C58080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1744
	ctx.r3.s64 = ctx.r11.s64 + 1744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5808C"))) PPC_WEAK_FUNC(sub_83C5808C);
PPC_FUNC_IMPL(__imp__sub_83C5808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58090"))) PPC_WEAK_FUNC(sub_83C58090);
PPC_FUNC_IMPL(__imp__sub_83C58090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5809C"))) PPC_WEAK_FUNC(sub_83C5809C);
PPC_FUNC_IMPL(__imp__sub_83C5809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C580A0"))) PPC_WEAK_FUNC(sub_83C580A0);
PPC_FUNC_IMPL(__imp__sub_83C580A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22520
	ctx.r7.s64 = ctx.r8.s64 + -22520;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22520(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22520);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22520(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22520, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C580C8"))) PPC_WEAK_FUNC(sub_83C580C8);
PPC_FUNC_IMPL(__imp__sub_83C580C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18352
	ctx.r6.s64 = ctx.r7.s64 + 18352;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18280(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18280);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22520(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22520);
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
	// std r9,18352(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18352, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58110"))) PPC_WEAK_FUNC(sub_83C58110);
PPC_FUNC_IMPL(__imp__sub_83C58110) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-22536
	ctx.r3.s64 = ctx.r11.s64 + -22536;
	// bl 0x83523120
	ctx.lr = 0x83C58128;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1760
	ctx.r3.s64 = ctx.r10.s64 + 1760;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58134;
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

__attribute__((alias("__imp__sub_83C58144"))) PPC_WEAK_FUNC(sub_83C58144);
PPC_FUNC_IMPL(__imp__sub_83C58144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58148"))) PPC_WEAK_FUNC(sub_83C58148);
PPC_FUNC_IMPL(__imp__sub_83C58148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1776
	ctx.r3.s64 = ctx.r11.s64 + 1776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58154"))) PPC_WEAK_FUNC(sub_83C58154);
PPC_FUNC_IMPL(__imp__sub_83C58154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58158"))) PPC_WEAK_FUNC(sub_83C58158);
PPC_FUNC_IMPL(__imp__sub_83C58158) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// bl 0x8259af80
	ctx.lr = 0x83C58170;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1792
	ctx.r3.s64 = ctx.r10.s64 + 1792;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5817C;
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

__attribute__((alias("__imp__sub_83C5818C"))) PPC_WEAK_FUNC(sub_83C5818C);
PPC_FUNC_IMPL(__imp__sub_83C5818C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58190"))) PPC_WEAK_FUNC(sub_83C58190);
PPC_FUNC_IMPL(__imp__sub_83C58190) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22532
	ctx.r11.s64 = ctx.r8.s64 + -22532;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18328);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1784
	ctx.r3.s64 = ctx.r6.s64 + 1784;
	// stw r10,-22532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22532, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C581C0"))) PPC_WEAK_FUNC(sub_83C581C0);
PPC_FUNC_IMPL(__imp__sub_83C581C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1800
	ctx.r3.s64 = ctx.r11.s64 + 1800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C581CC"))) PPC_WEAK_FUNC(sub_83C581CC);
PPC_FUNC_IMPL(__imp__sub_83C581CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C581D0"))) PPC_WEAK_FUNC(sub_83C581D0);
PPC_FUNC_IMPL(__imp__sub_83C581D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C581DC"))) PPC_WEAK_FUNC(sub_83C581DC);
PPC_FUNC_IMPL(__imp__sub_83C581DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C581E0"))) PPC_WEAK_FUNC(sub_83C581E0);
PPC_FUNC_IMPL(__imp__sub_83C581E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1816
	ctx.r3.s64 = ctx.r11.s64 + 1816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C581EC"))) PPC_WEAK_FUNC(sub_83C581EC);
PPC_FUNC_IMPL(__imp__sub_83C581EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C581F0"))) PPC_WEAK_FUNC(sub_83C581F0);
PPC_FUNC_IMPL(__imp__sub_83C581F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1824
	ctx.r3.s64 = ctx.r11.s64 + 1824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C581FC"))) PPC_WEAK_FUNC(sub_83C581FC);
PPC_FUNC_IMPL(__imp__sub_83C581FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58200"))) PPC_WEAK_FUNC(sub_83C58200);
PPC_FUNC_IMPL(__imp__sub_83C58200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1832
	ctx.r3.s64 = ctx.r11.s64 + 1832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5820C"))) PPC_WEAK_FUNC(sub_83C5820C);
PPC_FUNC_IMPL(__imp__sub_83C5820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58210"))) PPC_WEAK_FUNC(sub_83C58210);
PPC_FUNC_IMPL(__imp__sub_83C58210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1840
	ctx.r3.s64 = ctx.r11.s64 + 1840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5821C"))) PPC_WEAK_FUNC(sub_83C5821C);
PPC_FUNC_IMPL(__imp__sub_83C5821C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58220"))) PPC_WEAK_FUNC(sub_83C58220);
PPC_FUNC_IMPL(__imp__sub_83C58220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5822C"))) PPC_WEAK_FUNC(sub_83C5822C);
PPC_FUNC_IMPL(__imp__sub_83C5822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58230"))) PPC_WEAK_FUNC(sub_83C58230);
PPC_FUNC_IMPL(__imp__sub_83C58230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5823C"))) PPC_WEAK_FUNC(sub_83C5823C);
PPC_FUNC_IMPL(__imp__sub_83C5823C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58240"))) PPC_WEAK_FUNC(sub_83C58240);
PPC_FUNC_IMPL(__imp__sub_83C58240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1864
	ctx.r3.s64 = ctx.r11.s64 + 1864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5824C"))) PPC_WEAK_FUNC(sub_83C5824C);
PPC_FUNC_IMPL(__imp__sub_83C5824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58250"))) PPC_WEAK_FUNC(sub_83C58250);
PPC_FUNC_IMPL(__imp__sub_83C58250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1872
	ctx.r3.s64 = ctx.r11.s64 + 1872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5825C"))) PPC_WEAK_FUNC(sub_83C5825C);
PPC_FUNC_IMPL(__imp__sub_83C5825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58260"))) PPC_WEAK_FUNC(sub_83C58260);
PPC_FUNC_IMPL(__imp__sub_83C58260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1880
	ctx.r3.s64 = ctx.r11.s64 + 1880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5826C"))) PPC_WEAK_FUNC(sub_83C5826C);
PPC_FUNC_IMPL(__imp__sub_83C5826C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58270"))) PPC_WEAK_FUNC(sub_83C58270);
PPC_FUNC_IMPL(__imp__sub_83C58270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1888
	ctx.r3.s64 = ctx.r11.s64 + 1888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5827C"))) PPC_WEAK_FUNC(sub_83C5827C);
PPC_FUNC_IMPL(__imp__sub_83C5827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58280"))) PPC_WEAK_FUNC(sub_83C58280);
PPC_FUNC_IMPL(__imp__sub_83C58280) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-22152
	ctx.r7.s64 = ctx.r8.s64 + -22152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22152(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22152);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-22152(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22152, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C582A8"))) PPC_WEAK_FUNC(sub_83C582A8);
PPC_FUNC_IMPL(__imp__sub_83C582A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18480
	ctx.r6.s64 = ctx.r7.s64 + 18480;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18408(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18408);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-22152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -22152);
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
	// std r9,18480(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18480, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C582F0"))) PPC_WEAK_FUNC(sub_83C582F0);
PPC_FUNC_IMPL(__imp__sub_83C582F0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// bl 0x83523120
	ctx.lr = 0x83C58308;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1896
	ctx.r3.s64 = ctx.r10.s64 + 1896;
	// bl 0x831cdcc8
	ctx.lr = 0x83C58314;
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

__attribute__((alias("__imp__sub_83C58324"))) PPC_WEAK_FUNC(sub_83C58324);
PPC_FUNC_IMPL(__imp__sub_83C58324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58328"))) PPC_WEAK_FUNC(sub_83C58328);
PPC_FUNC_IMPL(__imp__sub_83C58328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58334"))) PPC_WEAK_FUNC(sub_83C58334);
PPC_FUNC_IMPL(__imp__sub_83C58334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58338"))) PPC_WEAK_FUNC(sub_83C58338);
PPC_FUNC_IMPL(__imp__sub_83C58338) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// bl 0x8259af80
	ctx.lr = 0x83C58350;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,1928
	ctx.r3.s64 = ctx.r10.s64 + 1928;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5835C;
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

__attribute__((alias("__imp__sub_83C5836C"))) PPC_WEAK_FUNC(sub_83C5836C);
PPC_FUNC_IMPL(__imp__sub_83C5836C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58370"))) PPC_WEAK_FUNC(sub_83C58370);
PPC_FUNC_IMPL(__imp__sub_83C58370) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-22164
	ctx.r11.s64 = ctx.r8.s64 + -22164;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18456(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18456);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,1920
	ctx.r3.s64 = ctx.r6.s64 + 1920;
	// stw r10,-22164(r8)
	PPC_STORE_U32(ctx.r8.u32 + -22164, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583A0"))) PPC_WEAK_FUNC(sub_83C583A0);
PPC_FUNC_IMPL(__imp__sub_83C583A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1936
	ctx.r3.s64 = ctx.r11.s64 + 1936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583AC"))) PPC_WEAK_FUNC(sub_83C583AC);
PPC_FUNC_IMPL(__imp__sub_83C583AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C583B0"))) PPC_WEAK_FUNC(sub_83C583B0);
PPC_FUNC_IMPL(__imp__sub_83C583B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1944
	ctx.r3.s64 = ctx.r11.s64 + 1944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583BC"))) PPC_WEAK_FUNC(sub_83C583BC);
PPC_FUNC_IMPL(__imp__sub_83C583BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C583C0"))) PPC_WEAK_FUNC(sub_83C583C0);
PPC_FUNC_IMPL(__imp__sub_83C583C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1952
	ctx.r3.s64 = ctx.r11.s64 + 1952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583CC"))) PPC_WEAK_FUNC(sub_83C583CC);
PPC_FUNC_IMPL(__imp__sub_83C583CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C583D0"))) PPC_WEAK_FUNC(sub_83C583D0);
PPC_FUNC_IMPL(__imp__sub_83C583D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1960
	ctx.r3.s64 = ctx.r11.s64 + 1960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583DC"))) PPC_WEAK_FUNC(sub_83C583DC);
PPC_FUNC_IMPL(__imp__sub_83C583DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C583E0"))) PPC_WEAK_FUNC(sub_83C583E0);
PPC_FUNC_IMPL(__imp__sub_83C583E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1968
	ctx.r3.s64 = ctx.r11.s64 + 1968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583EC"))) PPC_WEAK_FUNC(sub_83C583EC);
PPC_FUNC_IMPL(__imp__sub_83C583EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C583F0"))) PPC_WEAK_FUNC(sub_83C583F0);
PPC_FUNC_IMPL(__imp__sub_83C583F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1976
	ctx.r3.s64 = ctx.r11.s64 + 1976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C583FC"))) PPC_WEAK_FUNC(sub_83C583FC);
PPC_FUNC_IMPL(__imp__sub_83C583FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58400"))) PPC_WEAK_FUNC(sub_83C58400);
PPC_FUNC_IMPL(__imp__sub_83C58400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1984
	ctx.r3.s64 = ctx.r11.s64 + 1984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5840C"))) PPC_WEAK_FUNC(sub_83C5840C);
PPC_FUNC_IMPL(__imp__sub_83C5840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58410"))) PPC_WEAK_FUNC(sub_83C58410);
PPC_FUNC_IMPL(__imp__sub_83C58410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,1992
	ctx.r3.s64 = ctx.r11.s64 + 1992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5841C"))) PPC_WEAK_FUNC(sub_83C5841C);
PPC_FUNC_IMPL(__imp__sub_83C5841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58420"))) PPC_WEAK_FUNC(sub_83C58420);
PPC_FUNC_IMPL(__imp__sub_83C58420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2000
	ctx.r3.s64 = ctx.r11.s64 + 2000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5842C"))) PPC_WEAK_FUNC(sub_83C5842C);
PPC_FUNC_IMPL(__imp__sub_83C5842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58430"))) PPC_WEAK_FUNC(sub_83C58430);
PPC_FUNC_IMPL(__imp__sub_83C58430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2008
	ctx.r3.s64 = ctx.r11.s64 + 2008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5843C"))) PPC_WEAK_FUNC(sub_83C5843C);
PPC_FUNC_IMPL(__imp__sub_83C5843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58440"))) PPC_WEAK_FUNC(sub_83C58440);
PPC_FUNC_IMPL(__imp__sub_83C58440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2016
	ctx.r3.s64 = ctx.r11.s64 + 2016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5844C"))) PPC_WEAK_FUNC(sub_83C5844C);
PPC_FUNC_IMPL(__imp__sub_83C5844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58450"))) PPC_WEAK_FUNC(sub_83C58450);
PPC_FUNC_IMPL(__imp__sub_83C58450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2024
	ctx.r3.s64 = ctx.r11.s64 + 2024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5845C"))) PPC_WEAK_FUNC(sub_83C5845C);
PPC_FUNC_IMPL(__imp__sub_83C5845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58460"))) PPC_WEAK_FUNC(sub_83C58460);
PPC_FUNC_IMPL(__imp__sub_83C58460) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-21784
	ctx.r7.s64 = ctx.r8.s64 + -21784;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-21784(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21784);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-21784(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21784, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C58488"))) PPC_WEAK_FUNC(sub_83C58488);
PPC_FUNC_IMPL(__imp__sub_83C58488) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31774
	ctx.r7.s64 = -2082340864;
	// lis r5,-31774
	ctx.r5.s64 = -2082340864;
	// addi r6,r7,18608
	ctx.r6.s64 = ctx.r7.s64 + 18608;
	// lis r3,-31755
	ctx.r3.s64 = -2081095680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,18536(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18536);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-21784(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -21784);
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
	// std r9,18608(r7)
	PPC_STORE_U64(ctx.r7.u32 + 18608, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83C584D0"))) PPC_WEAK_FUNC(sub_83C584D0);
PPC_FUNC_IMPL(__imp__sub_83C584D0) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-21800
	ctx.r3.s64 = ctx.r11.s64 + -21800;
	// bl 0x83523120
	ctx.lr = 0x83C584E8;
	sub_83523120(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2032
	ctx.r3.s64 = ctx.r10.s64 + 2032;
	// bl 0x831cdcc8
	ctx.lr = 0x83C584F4;
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

__attribute__((alias("__imp__sub_83C58504"))) PPC_WEAK_FUNC(sub_83C58504);
PPC_FUNC_IMPL(__imp__sub_83C58504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58508"))) PPC_WEAK_FUNC(sub_83C58508);
PPC_FUNC_IMPL(__imp__sub_83C58508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2048
	ctx.r3.s64 = ctx.r11.s64 + 2048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58514"))) PPC_WEAK_FUNC(sub_83C58514);
PPC_FUNC_IMPL(__imp__sub_83C58514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58518"))) PPC_WEAK_FUNC(sub_83C58518);
PPC_FUNC_IMPL(__imp__sub_83C58518) {
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
	// lis r11,-31755
	ctx.r11.s64 = -2081095680;
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// bl 0x8259af80
	ctx.lr = 0x83C58530;
	sub_8259AF80(ctx, base);
	// lis r10,-31788
	ctx.r10.s64 = -2083258368;
	// addi r3,r10,2064
	ctx.r3.s64 = ctx.r10.s64 + 2064;
	// bl 0x831cdcc8
	ctx.lr = 0x83C5853C;
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

__attribute__((alias("__imp__sub_83C5854C"))) PPC_WEAK_FUNC(sub_83C5854C);
PPC_FUNC_IMPL(__imp__sub_83C5854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58550"))) PPC_WEAK_FUNC(sub_83C58550);
PPC_FUNC_IMPL(__imp__sub_83C58550) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31774
	ctx.r10.s64 = -2082340864;
	// lis r8,-31755
	ctx.r8.s64 = -2081095680;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-21796
	ctx.r11.s64 = ctx.r8.s64 + -21796;
	// lis r6,-31788
	ctx.r6.s64 = -2083258368;
	// lwz r10,18584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18584);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,2056
	ctx.r3.s64 = ctx.r6.s64 + 2056;
	// stw r10,-21796(r8)
	PPC_STORE_U32(ctx.r8.u32 + -21796, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C58580"))) PPC_WEAK_FUNC(sub_83C58580);
PPC_FUNC_IMPL(__imp__sub_83C58580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2072
	ctx.r3.s64 = ctx.r11.s64 + 2072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5858C"))) PPC_WEAK_FUNC(sub_83C5858C);
PPC_FUNC_IMPL(__imp__sub_83C5858C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C58590"))) PPC_WEAK_FUNC(sub_83C58590);
PPC_FUNC_IMPL(__imp__sub_83C58590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2080
	ctx.r3.s64 = ctx.r11.s64 + 2080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C5859C"))) PPC_WEAK_FUNC(sub_83C5859C);
PPC_FUNC_IMPL(__imp__sub_83C5859C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C585A0"))) PPC_WEAK_FUNC(sub_83C585A0);
PPC_FUNC_IMPL(__imp__sub_83C585A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2088
	ctx.r3.s64 = ctx.r11.s64 + 2088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C585AC"))) PPC_WEAK_FUNC(sub_83C585AC);
PPC_FUNC_IMPL(__imp__sub_83C585AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C585B0"))) PPC_WEAK_FUNC(sub_83C585B0);
PPC_FUNC_IMPL(__imp__sub_83C585B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2096
	ctx.r3.s64 = ctx.r11.s64 + 2096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83C585BC"))) PPC_WEAK_FUNC(sub_83C585BC);
PPC_FUNC_IMPL(__imp__sub_83C585BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83C585C0"))) PPC_WEAK_FUNC(sub_83C585C0);
PPC_FUNC_IMPL(__imp__sub_83C585C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31788
	ctx.r11.s64 = -2083258368;
	// addi r3,r11,2104
	ctx.r3.s64 = ctx.r11.s64 + 2104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

