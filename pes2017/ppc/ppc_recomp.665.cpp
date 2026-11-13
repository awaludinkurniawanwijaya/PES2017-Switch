#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BE3718"))) PPC_WEAK_FUNC(sub_83BE3718);
PPC_FUNC_IMPL(__imp__sub_83BE3718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27440
	ctx.r3.s64 = ctx.r11.s64 + -27440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3724"))) PPC_WEAK_FUNC(sub_83BE3724);
PPC_FUNC_IMPL(__imp__sub_83BE3724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3728"))) PPC_WEAK_FUNC(sub_83BE3728);
PPC_FUNC_IMPL(__imp__sub_83BE3728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3734"))) PPC_WEAK_FUNC(sub_83BE3734);
PPC_FUNC_IMPL(__imp__sub_83BE3734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3738"))) PPC_WEAK_FUNC(sub_83BE3738);
PPC_FUNC_IMPL(__imp__sub_83BE3738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27424
	ctx.r3.s64 = ctx.r11.s64 + -27424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3744"))) PPC_WEAK_FUNC(sub_83BE3744);
PPC_FUNC_IMPL(__imp__sub_83BE3744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3748"))) PPC_WEAK_FUNC(sub_83BE3748);
PPC_FUNC_IMPL(__imp__sub_83BE3748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27416
	ctx.r3.s64 = ctx.r11.s64 + -27416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3754"))) PPC_WEAK_FUNC(sub_83BE3754);
PPC_FUNC_IMPL(__imp__sub_83BE3754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3758"))) PPC_WEAK_FUNC(sub_83BE3758);
PPC_FUNC_IMPL(__imp__sub_83BE3758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27408
	ctx.r3.s64 = ctx.r11.s64 + -27408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3764"))) PPC_WEAK_FUNC(sub_83BE3764);
PPC_FUNC_IMPL(__imp__sub_83BE3764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3768"))) PPC_WEAK_FUNC(sub_83BE3768);
PPC_FUNC_IMPL(__imp__sub_83BE3768) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,12992
	ctx.r7.s64 = ctx.r8.s64 + 12992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,12992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,12992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3790"))) PPC_WEAK_FUNC(sub_83BE3790);
PPC_FUNC_IMPL(__imp__sub_83BE3790) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-15164
	ctx.r6.s64 = ctx.r7.s64 + -15164;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15236(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15236);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,12992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12992);
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
	// std r9,-15164(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15164, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE37D8"))) PPC_WEAK_FUNC(sub_83BE37D8);
PPC_FUNC_IMPL(__imp__sub_83BE37D8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,12976
	ctx.r3.s64 = ctx.r11.s64 + 12976;
	// bl 0x83523120
	ctx.lr = 0x83BE37F0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27400
	ctx.r3.s64 = ctx.r10.s64 + -27400;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE37FC;
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

__attribute__((alias("__imp__sub_83BE380C"))) PPC_WEAK_FUNC(sub_83BE380C);
PPC_FUNC_IMPL(__imp__sub_83BE380C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3810"))) PPC_WEAK_FUNC(sub_83BE3810);
PPC_FUNC_IMPL(__imp__sub_83BE3810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27384
	ctx.r3.s64 = ctx.r11.s64 + -27384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE381C"))) PPC_WEAK_FUNC(sub_83BE381C);
PPC_FUNC_IMPL(__imp__sub_83BE381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3820"))) PPC_WEAK_FUNC(sub_83BE3820);
PPC_FUNC_IMPL(__imp__sub_83BE3820) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,13000
	ctx.r3.s64 = ctx.r11.s64 + 13000;
	// bl 0x8259af80
	ctx.lr = 0x83BE3838;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27368
	ctx.r3.s64 = ctx.r10.s64 + -27368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3844;
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

__attribute__((alias("__imp__sub_83BE3854"))) PPC_WEAK_FUNC(sub_83BE3854);
PPC_FUNC_IMPL(__imp__sub_83BE3854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3858"))) PPC_WEAK_FUNC(sub_83BE3858);
PPC_FUNC_IMPL(__imp__sub_83BE3858) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,12980
	ctx.r11.s64 = ctx.r8.s64 + 12980;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15188(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15188);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27376
	ctx.r3.s64 = ctx.r6.s64 + -27376;
	// stw r10,12980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3888"))) PPC_WEAK_FUNC(sub_83BE3888);
PPC_FUNC_IMPL(__imp__sub_83BE3888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27360
	ctx.r3.s64 = ctx.r11.s64 + -27360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3894"))) PPC_WEAK_FUNC(sub_83BE3894);
PPC_FUNC_IMPL(__imp__sub_83BE3894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3898"))) PPC_WEAK_FUNC(sub_83BE3898);
PPC_FUNC_IMPL(__imp__sub_83BE3898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27352
	ctx.r3.s64 = ctx.r11.s64 + -27352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE38A4"))) PPC_WEAK_FUNC(sub_83BE38A4);
PPC_FUNC_IMPL(__imp__sub_83BE38A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE38A8"))) PPC_WEAK_FUNC(sub_83BE38A8);
PPC_FUNC_IMPL(__imp__sub_83BE38A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE38B4"))) PPC_WEAK_FUNC(sub_83BE38B4);
PPC_FUNC_IMPL(__imp__sub_83BE38B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE38B8"))) PPC_WEAK_FUNC(sub_83BE38B8);
PPC_FUNC_IMPL(__imp__sub_83BE38B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27336
	ctx.r3.s64 = ctx.r11.s64 + -27336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE38C4"))) PPC_WEAK_FUNC(sub_83BE38C4);
PPC_FUNC_IMPL(__imp__sub_83BE38C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE38C8"))) PPC_WEAK_FUNC(sub_83BE38C8);
PPC_FUNC_IMPL(__imp__sub_83BE38C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27328
	ctx.r3.s64 = ctx.r11.s64 + -27328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE38D4"))) PPC_WEAK_FUNC(sub_83BE38D4);
PPC_FUNC_IMPL(__imp__sub_83BE38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE38D8"))) PPC_WEAK_FUNC(sub_83BE38D8);
PPC_FUNC_IMPL(__imp__sub_83BE38D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE38E4"))) PPC_WEAK_FUNC(sub_83BE38E4);
PPC_FUNC_IMPL(__imp__sub_83BE38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE38E8"))) PPC_WEAK_FUNC(sub_83BE38E8);
PPC_FUNC_IMPL(__imp__sub_83BE38E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE38F4"))) PPC_WEAK_FUNC(sub_83BE38F4);
PPC_FUNC_IMPL(__imp__sub_83BE38F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE38F8"))) PPC_WEAK_FUNC(sub_83BE38F8);
PPC_FUNC_IMPL(__imp__sub_83BE38F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3904"))) PPC_WEAK_FUNC(sub_83BE3904);
PPC_FUNC_IMPL(__imp__sub_83BE3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3908"))) PPC_WEAK_FUNC(sub_83BE3908);
PPC_FUNC_IMPL(__imp__sub_83BE3908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3914"))) PPC_WEAK_FUNC(sub_83BE3914);
PPC_FUNC_IMPL(__imp__sub_83BE3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3918"))) PPC_WEAK_FUNC(sub_83BE3918);
PPC_FUNC_IMPL(__imp__sub_83BE3918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3924"))) PPC_WEAK_FUNC(sub_83BE3924);
PPC_FUNC_IMPL(__imp__sub_83BE3924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3928"))) PPC_WEAK_FUNC(sub_83BE3928);
PPC_FUNC_IMPL(__imp__sub_83BE3928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27280
	ctx.r3.s64 = ctx.r11.s64 + -27280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3934"))) PPC_WEAK_FUNC(sub_83BE3934);
PPC_FUNC_IMPL(__imp__sub_83BE3934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3938"))) PPC_WEAK_FUNC(sub_83BE3938);
PPC_FUNC_IMPL(__imp__sub_83BE3938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27272
	ctx.r3.s64 = ctx.r11.s64 + -27272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3944"))) PPC_WEAK_FUNC(sub_83BE3944);
PPC_FUNC_IMPL(__imp__sub_83BE3944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3948"))) PPC_WEAK_FUNC(sub_83BE3948);
PPC_FUNC_IMPL(__imp__sub_83BE3948) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// bl 0x83523120
	ctx.lr = 0x83BE3960;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27264
	ctx.r3.s64 = ctx.r10.s64 + -27264;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE396C;
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

__attribute__((alias("__imp__sub_83BE397C"))) PPC_WEAK_FUNC(sub_83BE397C);
PPC_FUNC_IMPL(__imp__sub_83BE397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3980"))) PPC_WEAK_FUNC(sub_83BE3980);
PPC_FUNC_IMPL(__imp__sub_83BE3980) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13360
	ctx.r7.s64 = ctx.r8.s64 + 13360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE39A8"))) PPC_WEAK_FUNC(sub_83BE39A8);
PPC_FUNC_IMPL(__imp__sub_83BE39A8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-15028
	ctx.r6.s64 = ctx.r7.s64 + -15028;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-15100(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -15100);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13360);
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
	// std r9,-15028(r7)
	PPC_STORE_U64(ctx.r7.u32 + -15028, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE39F0"))) PPC_WEAK_FUNC(sub_83BE39F0);
PPC_FUNC_IMPL(__imp__sub_83BE39F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27248
	ctx.r3.s64 = ctx.r11.s64 + -27248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE39FC"))) PPC_WEAK_FUNC(sub_83BE39FC);
PPC_FUNC_IMPL(__imp__sub_83BE39FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3A00"))) PPC_WEAK_FUNC(sub_83BE3A00);
PPC_FUNC_IMPL(__imp__sub_83BE3A00) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// bl 0x8259af80
	ctx.lr = 0x83BE3A18;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27232
	ctx.r3.s64 = ctx.r10.s64 + -27232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3A24;
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

__attribute__((alias("__imp__sub_83BE3A34"))) PPC_WEAK_FUNC(sub_83BE3A34);
PPC_FUNC_IMPL(__imp__sub_83BE3A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3A38"))) PPC_WEAK_FUNC(sub_83BE3A38);
PPC_FUNC_IMPL(__imp__sub_83BE3A38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13348
	ctx.r11.s64 = ctx.r8.s64 + 13348;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-15052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15052);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27240
	ctx.r3.s64 = ctx.r6.s64 + -27240;
	// stw r10,13348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3A68"))) PPC_WEAK_FUNC(sub_83BE3A68);
PPC_FUNC_IMPL(__imp__sub_83BE3A68) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,25800
	ctx.r4.s64 = ctx.r11.s64 + 25800;
	// addi r3,r10,-15004
	ctx.r3.s64 = ctx.r10.s64 + -15004;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BE3A8C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-27224
	ctx.r3.s64 = ctx.r9.s64 + -27224;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3A98;
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

__attribute__((alias("__imp__sub_83BE3AA8"))) PPC_WEAK_FUNC(sub_83BE3AA8);
PPC_FUNC_IMPL(__imp__sub_83BE3AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27120
	ctx.r3.s64 = ctx.r11.s64 + -27120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3AB4"))) PPC_WEAK_FUNC(sub_83BE3AB4);
PPC_FUNC_IMPL(__imp__sub_83BE3AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3AB8"))) PPC_WEAK_FUNC(sub_83BE3AB8);
PPC_FUNC_IMPL(__imp__sub_83BE3AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27112
	ctx.r3.s64 = ctx.r11.s64 + -27112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3AC4"))) PPC_WEAK_FUNC(sub_83BE3AC4);
PPC_FUNC_IMPL(__imp__sub_83BE3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3AC8"))) PPC_WEAK_FUNC(sub_83BE3AC8);
PPC_FUNC_IMPL(__imp__sub_83BE3AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27104
	ctx.r3.s64 = ctx.r11.s64 + -27104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3AD4"))) PPC_WEAK_FUNC(sub_83BE3AD4);
PPC_FUNC_IMPL(__imp__sub_83BE3AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3AD8"))) PPC_WEAK_FUNC(sub_83BE3AD8);
PPC_FUNC_IMPL(__imp__sub_83BE3AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27096
	ctx.r3.s64 = ctx.r11.s64 + -27096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3AE4"))) PPC_WEAK_FUNC(sub_83BE3AE4);
PPC_FUNC_IMPL(__imp__sub_83BE3AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3AE8"))) PPC_WEAK_FUNC(sub_83BE3AE8);
PPC_FUNC_IMPL(__imp__sub_83BE3AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27088
	ctx.r3.s64 = ctx.r11.s64 + -27088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3AF4"))) PPC_WEAK_FUNC(sub_83BE3AF4);
PPC_FUNC_IMPL(__imp__sub_83BE3AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3AF8"))) PPC_WEAK_FUNC(sub_83BE3AF8);
PPC_FUNC_IMPL(__imp__sub_83BE3AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B04"))) PPC_WEAK_FUNC(sub_83BE3B04);
PPC_FUNC_IMPL(__imp__sub_83BE3B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B08"))) PPC_WEAK_FUNC(sub_83BE3B08);
PPC_FUNC_IMPL(__imp__sub_83BE3B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27072
	ctx.r3.s64 = ctx.r11.s64 + -27072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B14"))) PPC_WEAK_FUNC(sub_83BE3B14);
PPC_FUNC_IMPL(__imp__sub_83BE3B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B18"))) PPC_WEAK_FUNC(sub_83BE3B18);
PPC_FUNC_IMPL(__imp__sub_83BE3B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27064
	ctx.r3.s64 = ctx.r11.s64 + -27064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B24"))) PPC_WEAK_FUNC(sub_83BE3B24);
PPC_FUNC_IMPL(__imp__sub_83BE3B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B28"))) PPC_WEAK_FUNC(sub_83BE3B28);
PPC_FUNC_IMPL(__imp__sub_83BE3B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27056
	ctx.r3.s64 = ctx.r11.s64 + -27056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B34"))) PPC_WEAK_FUNC(sub_83BE3B34);
PPC_FUNC_IMPL(__imp__sub_83BE3B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B38"))) PPC_WEAK_FUNC(sub_83BE3B38);
PPC_FUNC_IMPL(__imp__sub_83BE3B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27048
	ctx.r3.s64 = ctx.r11.s64 + -27048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B44"))) PPC_WEAK_FUNC(sub_83BE3B44);
PPC_FUNC_IMPL(__imp__sub_83BE3B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B48"))) PPC_WEAK_FUNC(sub_83BE3B48);
PPC_FUNC_IMPL(__imp__sub_83BE3B48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27040
	ctx.r3.s64 = ctx.r11.s64 + -27040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B54"))) PPC_WEAK_FUNC(sub_83BE3B54);
PPC_FUNC_IMPL(__imp__sub_83BE3B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B58"))) PPC_WEAK_FUNC(sub_83BE3B58);
PPC_FUNC_IMPL(__imp__sub_83BE3B58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27032
	ctx.r3.s64 = ctx.r11.s64 + -27032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3B64"))) PPC_WEAK_FUNC(sub_83BE3B64);
PPC_FUNC_IMPL(__imp__sub_83BE3B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3B68"))) PPC_WEAK_FUNC(sub_83BE3B68);
PPC_FUNC_IMPL(__imp__sub_83BE3B68) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x83523120
	ctx.lr = 0x83BE3B80;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-27024
	ctx.r3.s64 = ctx.r10.s64 + -27024;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3B8C;
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

__attribute__((alias("__imp__sub_83BE3B9C"))) PPC_WEAK_FUNC(sub_83BE3B9C);
PPC_FUNC_IMPL(__imp__sub_83BE3B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3BA0"))) PPC_WEAK_FUNC(sub_83BE3BA0);
PPC_FUNC_IMPL(__imp__sub_83BE3BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,13728
	ctx.r7.s64 = ctx.r8.s64 + 13728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,13728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3BC8"))) PPC_WEAK_FUNC(sub_83BE3BC8);
PPC_FUNC_IMPL(__imp__sub_83BE3BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-14688
	ctx.r6.s64 = ctx.r7.s64 + -14688;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14760(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14760);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,13728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13728);
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
	// std r9,-14688(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14688, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3C10"))) PPC_WEAK_FUNC(sub_83BE3C10);
PPC_FUNC_IMPL(__imp__sub_83BE3C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-27008
	ctx.r3.s64 = ctx.r11.s64 + -27008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3C1C"))) PPC_WEAK_FUNC(sub_83BE3C1C);
PPC_FUNC_IMPL(__imp__sub_83BE3C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3C20"))) PPC_WEAK_FUNC(sub_83BE3C20);
PPC_FUNC_IMPL(__imp__sub_83BE3C20) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// bl 0x8259af80
	ctx.lr = 0x83BE3C38;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26992
	ctx.r3.s64 = ctx.r10.s64 + -26992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3C44;
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

__attribute__((alias("__imp__sub_83BE3C54"))) PPC_WEAK_FUNC(sub_83BE3C54);
PPC_FUNC_IMPL(__imp__sub_83BE3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3C58"))) PPC_WEAK_FUNC(sub_83BE3C58);
PPC_FUNC_IMPL(__imp__sub_83BE3C58) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,13716
	ctx.r11.s64 = ctx.r8.s64 + 13716;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14712);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-27000
	ctx.r3.s64 = ctx.r6.s64 + -27000;
	// stw r10,13716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3C88"))) PPC_WEAK_FUNC(sub_83BE3C88);
PPC_FUNC_IMPL(__imp__sub_83BE3C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26984
	ctx.r3.s64 = ctx.r11.s64 + -26984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3C94"))) PPC_WEAK_FUNC(sub_83BE3C94);
PPC_FUNC_IMPL(__imp__sub_83BE3C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3C98"))) PPC_WEAK_FUNC(sub_83BE3C98);
PPC_FUNC_IMPL(__imp__sub_83BE3C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26976
	ctx.r3.s64 = ctx.r11.s64 + -26976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3CA4"))) PPC_WEAK_FUNC(sub_83BE3CA4);
PPC_FUNC_IMPL(__imp__sub_83BE3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3CA8"))) PPC_WEAK_FUNC(sub_83BE3CA8);
PPC_FUNC_IMPL(__imp__sub_83BE3CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26968
	ctx.r3.s64 = ctx.r11.s64 + -26968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3CB4"))) PPC_WEAK_FUNC(sub_83BE3CB4);
PPC_FUNC_IMPL(__imp__sub_83BE3CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3CB8"))) PPC_WEAK_FUNC(sub_83BE3CB8);
PPC_FUNC_IMPL(__imp__sub_83BE3CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26960
	ctx.r3.s64 = ctx.r11.s64 + -26960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3CC4"))) PPC_WEAK_FUNC(sub_83BE3CC4);
PPC_FUNC_IMPL(__imp__sub_83BE3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3CC8"))) PPC_WEAK_FUNC(sub_83BE3CC8);
PPC_FUNC_IMPL(__imp__sub_83BE3CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26952
	ctx.r3.s64 = ctx.r11.s64 + -26952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3CD4"))) PPC_WEAK_FUNC(sub_83BE3CD4);
PPC_FUNC_IMPL(__imp__sub_83BE3CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3CD8"))) PPC_WEAK_FUNC(sub_83BE3CD8);
PPC_FUNC_IMPL(__imp__sub_83BE3CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26944
	ctx.r3.s64 = ctx.r11.s64 + -26944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3CE4"))) PPC_WEAK_FUNC(sub_83BE3CE4);
PPC_FUNC_IMPL(__imp__sub_83BE3CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3CE8"))) PPC_WEAK_FUNC(sub_83BE3CE8);
PPC_FUNC_IMPL(__imp__sub_83BE3CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26936
	ctx.r3.s64 = ctx.r11.s64 + -26936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3CF4"))) PPC_WEAK_FUNC(sub_83BE3CF4);
PPC_FUNC_IMPL(__imp__sub_83BE3CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3CF8"))) PPC_WEAK_FUNC(sub_83BE3CF8);
PPC_FUNC_IMPL(__imp__sub_83BE3CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26928
	ctx.r3.s64 = ctx.r11.s64 + -26928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3D04"))) PPC_WEAK_FUNC(sub_83BE3D04);
PPC_FUNC_IMPL(__imp__sub_83BE3D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3D08"))) PPC_WEAK_FUNC(sub_83BE3D08);
PPC_FUNC_IMPL(__imp__sub_83BE3D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26920
	ctx.r3.s64 = ctx.r11.s64 + -26920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3D14"))) PPC_WEAK_FUNC(sub_83BE3D14);
PPC_FUNC_IMPL(__imp__sub_83BE3D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3D18"))) PPC_WEAK_FUNC(sub_83BE3D18);
PPC_FUNC_IMPL(__imp__sub_83BE3D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3D24"))) PPC_WEAK_FUNC(sub_83BE3D24);
PPC_FUNC_IMPL(__imp__sub_83BE3D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3D28"))) PPC_WEAK_FUNC(sub_83BE3D28);
PPC_FUNC_IMPL(__imp__sub_83BE3D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26904
	ctx.r3.s64 = ctx.r11.s64 + -26904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3D34"))) PPC_WEAK_FUNC(sub_83BE3D34);
PPC_FUNC_IMPL(__imp__sub_83BE3D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3D38"))) PPC_WEAK_FUNC(sub_83BE3D38);
PPC_FUNC_IMPL(__imp__sub_83BE3D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26896
	ctx.r3.s64 = ctx.r11.s64 + -26896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3D44"))) PPC_WEAK_FUNC(sub_83BE3D44);
PPC_FUNC_IMPL(__imp__sub_83BE3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3D48"))) PPC_WEAK_FUNC(sub_83BE3D48);
PPC_FUNC_IMPL(__imp__sub_83BE3D48) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,14080
	ctx.r3.s64 = ctx.r11.s64 + 14080;
	// bl 0x83523120
	ctx.lr = 0x83BE3D60;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26888
	ctx.r3.s64 = ctx.r10.s64 + -26888;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3D6C;
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

__attribute__((alias("__imp__sub_83BE3D7C"))) PPC_WEAK_FUNC(sub_83BE3D7C);
PPC_FUNC_IMPL(__imp__sub_83BE3D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3D80"))) PPC_WEAK_FUNC(sub_83BE3D80);
PPC_FUNC_IMPL(__imp__sub_83BE3D80) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,14096
	ctx.r7.s64 = ctx.r8.s64 + 14096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,14096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3DA8"))) PPC_WEAK_FUNC(sub_83BE3DA8);
PPC_FUNC_IMPL(__imp__sub_83BE3DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-14516
	ctx.r6.s64 = ctx.r7.s64 + -14516;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14588(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14588);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,14096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14096);
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
	// std r9,-14516(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14516, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3DF0"))) PPC_WEAK_FUNC(sub_83BE3DF0);
PPC_FUNC_IMPL(__imp__sub_83BE3DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26872
	ctx.r3.s64 = ctx.r11.s64 + -26872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3DFC"))) PPC_WEAK_FUNC(sub_83BE3DFC);
PPC_FUNC_IMPL(__imp__sub_83BE3DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3E00"))) PPC_WEAK_FUNC(sub_83BE3E00);
PPC_FUNC_IMPL(__imp__sub_83BE3E00) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,14104
	ctx.r3.s64 = ctx.r11.s64 + 14104;
	// bl 0x8259af80
	ctx.lr = 0x83BE3E18;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26856
	ctx.r3.s64 = ctx.r10.s64 + -26856;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3E24;
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

__attribute__((alias("__imp__sub_83BE3E34"))) PPC_WEAK_FUNC(sub_83BE3E34);
PPC_FUNC_IMPL(__imp__sub_83BE3E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3E38"))) PPC_WEAK_FUNC(sub_83BE3E38);
PPC_FUNC_IMPL(__imp__sub_83BE3E38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,14084
	ctx.r11.s64 = ctx.r8.s64 + 14084;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14540);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26864
	ctx.r3.s64 = ctx.r6.s64 + -26864;
	// stw r10,14084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3E68"))) PPC_WEAK_FUNC(sub_83BE3E68);
PPC_FUNC_IMPL(__imp__sub_83BE3E68) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,28212
	ctx.r4.s64 = ctx.r11.s64 + 28212;
	// addi r3,r10,-14492
	ctx.r3.s64 = ctx.r10.s64 + -14492;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BE3E8C;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-26848
	ctx.r3.s64 = ctx.r9.s64 + -26848;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3E98;
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

__attribute__((alias("__imp__sub_83BE3EA8"))) PPC_WEAK_FUNC(sub_83BE3EA8);
PPC_FUNC_IMPL(__imp__sub_83BE3EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26744
	ctx.r3.s64 = ctx.r11.s64 + -26744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3EB4"))) PPC_WEAK_FUNC(sub_83BE3EB4);
PPC_FUNC_IMPL(__imp__sub_83BE3EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3EB8"))) PPC_WEAK_FUNC(sub_83BE3EB8);
PPC_FUNC_IMPL(__imp__sub_83BE3EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26736
	ctx.r3.s64 = ctx.r11.s64 + -26736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3EC4"))) PPC_WEAK_FUNC(sub_83BE3EC4);
PPC_FUNC_IMPL(__imp__sub_83BE3EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3EC8"))) PPC_WEAK_FUNC(sub_83BE3EC8);
PPC_FUNC_IMPL(__imp__sub_83BE3EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26728
	ctx.r3.s64 = ctx.r11.s64 + -26728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3ED4"))) PPC_WEAK_FUNC(sub_83BE3ED4);
PPC_FUNC_IMPL(__imp__sub_83BE3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3ED8"))) PPC_WEAK_FUNC(sub_83BE3ED8);
PPC_FUNC_IMPL(__imp__sub_83BE3ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26720
	ctx.r3.s64 = ctx.r11.s64 + -26720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3EE4"))) PPC_WEAK_FUNC(sub_83BE3EE4);
PPC_FUNC_IMPL(__imp__sub_83BE3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3EE8"))) PPC_WEAK_FUNC(sub_83BE3EE8);
PPC_FUNC_IMPL(__imp__sub_83BE3EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26712
	ctx.r3.s64 = ctx.r11.s64 + -26712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3EF4"))) PPC_WEAK_FUNC(sub_83BE3EF4);
PPC_FUNC_IMPL(__imp__sub_83BE3EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3EF8"))) PPC_WEAK_FUNC(sub_83BE3EF8);
PPC_FUNC_IMPL(__imp__sub_83BE3EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26704
	ctx.r3.s64 = ctx.r11.s64 + -26704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F04"))) PPC_WEAK_FUNC(sub_83BE3F04);
PPC_FUNC_IMPL(__imp__sub_83BE3F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F08"))) PPC_WEAK_FUNC(sub_83BE3F08);
PPC_FUNC_IMPL(__imp__sub_83BE3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F14"))) PPC_WEAK_FUNC(sub_83BE3F14);
PPC_FUNC_IMPL(__imp__sub_83BE3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F18"))) PPC_WEAK_FUNC(sub_83BE3F18);
PPC_FUNC_IMPL(__imp__sub_83BE3F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26688
	ctx.r3.s64 = ctx.r11.s64 + -26688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F24"))) PPC_WEAK_FUNC(sub_83BE3F24);
PPC_FUNC_IMPL(__imp__sub_83BE3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F28"))) PPC_WEAK_FUNC(sub_83BE3F28);
PPC_FUNC_IMPL(__imp__sub_83BE3F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26680
	ctx.r3.s64 = ctx.r11.s64 + -26680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F34"))) PPC_WEAK_FUNC(sub_83BE3F34);
PPC_FUNC_IMPL(__imp__sub_83BE3F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F38"))) PPC_WEAK_FUNC(sub_83BE3F38);
PPC_FUNC_IMPL(__imp__sub_83BE3F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26672
	ctx.r3.s64 = ctx.r11.s64 + -26672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F44"))) PPC_WEAK_FUNC(sub_83BE3F44);
PPC_FUNC_IMPL(__imp__sub_83BE3F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F48"))) PPC_WEAK_FUNC(sub_83BE3F48);
PPC_FUNC_IMPL(__imp__sub_83BE3F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26664
	ctx.r3.s64 = ctx.r11.s64 + -26664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F54"))) PPC_WEAK_FUNC(sub_83BE3F54);
PPC_FUNC_IMPL(__imp__sub_83BE3F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F58"))) PPC_WEAK_FUNC(sub_83BE3F58);
PPC_FUNC_IMPL(__imp__sub_83BE3F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26656
	ctx.r3.s64 = ctx.r11.s64 + -26656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE3F64"))) PPC_WEAK_FUNC(sub_83BE3F64);
PPC_FUNC_IMPL(__imp__sub_83BE3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3F68"))) PPC_WEAK_FUNC(sub_83BE3F68);
PPC_FUNC_IMPL(__imp__sub_83BE3F68) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,15200
	ctx.r3.s64 = ctx.r11.s64 + 15200;
	// bl 0x83523120
	ctx.lr = 0x83BE3F80;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26648
	ctx.r3.s64 = ctx.r10.s64 + -26648;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE3F8C;
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

__attribute__((alias("__imp__sub_83BE3F9C"))) PPC_WEAK_FUNC(sub_83BE3F9C);
PPC_FUNC_IMPL(__imp__sub_83BE3F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE3FA0"))) PPC_WEAK_FUNC(sub_83BE3FA0);
PPC_FUNC_IMPL(__imp__sub_83BE3FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15216
	ctx.r7.s64 = ctx.r8.s64 + 15216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15216);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15216, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE3FC8"))) PPC_WEAK_FUNC(sub_83BE3FC8);
PPC_FUNC_IMPL(__imp__sub_83BE3FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-14348
	ctx.r6.s64 = ctx.r7.s64 + -14348;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14420(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14420);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15216);
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
	// std r9,-14348(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14348, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE4010"))) PPC_WEAK_FUNC(sub_83BE4010);
PPC_FUNC_IMPL(__imp__sub_83BE4010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26632
	ctx.r3.s64 = ctx.r11.s64 + -26632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE401C"))) PPC_WEAK_FUNC(sub_83BE401C);
PPC_FUNC_IMPL(__imp__sub_83BE401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4020"))) PPC_WEAK_FUNC(sub_83BE4020);
PPC_FUNC_IMPL(__imp__sub_83BE4020) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,15224
	ctx.r3.s64 = ctx.r11.s64 + 15224;
	// bl 0x8259af80
	ctx.lr = 0x83BE4038;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26616
	ctx.r3.s64 = ctx.r10.s64 + -26616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE4044;
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

__attribute__((alias("__imp__sub_83BE4054"))) PPC_WEAK_FUNC(sub_83BE4054);
PPC_FUNC_IMPL(__imp__sub_83BE4054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4058"))) PPC_WEAK_FUNC(sub_83BE4058);
PPC_FUNC_IMPL(__imp__sub_83BE4058) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15204
	ctx.r11.s64 = ctx.r8.s64 + 15204;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14372(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14372);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26624
	ctx.r3.s64 = ctx.r6.s64 + -26624;
	// stw r10,15204(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15204, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4088"))) PPC_WEAK_FUNC(sub_83BE4088);
PPC_FUNC_IMPL(__imp__sub_83BE4088) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,29860
	ctx.r4.s64 = ctx.r11.s64 + 29860;
	// addi r3,r10,-14324
	ctx.r3.s64 = ctx.r10.s64 + -14324;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BE40AC;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-26608
	ctx.r3.s64 = ctx.r9.s64 + -26608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE40B8;
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

__attribute__((alias("__imp__sub_83BE40C8"))) PPC_WEAK_FUNC(sub_83BE40C8);
PPC_FUNC_IMPL(__imp__sub_83BE40C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE40D4"))) PPC_WEAK_FUNC(sub_83BE40D4);
PPC_FUNC_IMPL(__imp__sub_83BE40D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE40D8"))) PPC_WEAK_FUNC(sub_83BE40D8);
PPC_FUNC_IMPL(__imp__sub_83BE40D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26360
	ctx.r3.s64 = ctx.r11.s64 + -26360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE40E4"))) PPC_WEAK_FUNC(sub_83BE40E4);
PPC_FUNC_IMPL(__imp__sub_83BE40E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE40E8"))) PPC_WEAK_FUNC(sub_83BE40E8);
PPC_FUNC_IMPL(__imp__sub_83BE40E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26352
	ctx.r3.s64 = ctx.r11.s64 + -26352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE40F4"))) PPC_WEAK_FUNC(sub_83BE40F4);
PPC_FUNC_IMPL(__imp__sub_83BE40F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE40F8"))) PPC_WEAK_FUNC(sub_83BE40F8);
PPC_FUNC_IMPL(__imp__sub_83BE40F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26344
	ctx.r3.s64 = ctx.r11.s64 + -26344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4104"))) PPC_WEAK_FUNC(sub_83BE4104);
PPC_FUNC_IMPL(__imp__sub_83BE4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4108"))) PPC_WEAK_FUNC(sub_83BE4108);
PPC_FUNC_IMPL(__imp__sub_83BE4108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26336
	ctx.r3.s64 = ctx.r11.s64 + -26336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4114"))) PPC_WEAK_FUNC(sub_83BE4114);
PPC_FUNC_IMPL(__imp__sub_83BE4114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4118"))) PPC_WEAK_FUNC(sub_83BE4118);
PPC_FUNC_IMPL(__imp__sub_83BE4118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26328
	ctx.r3.s64 = ctx.r11.s64 + -26328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4124"))) PPC_WEAK_FUNC(sub_83BE4124);
PPC_FUNC_IMPL(__imp__sub_83BE4124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4128"))) PPC_WEAK_FUNC(sub_83BE4128);
PPC_FUNC_IMPL(__imp__sub_83BE4128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26320
	ctx.r3.s64 = ctx.r11.s64 + -26320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4134"))) PPC_WEAK_FUNC(sub_83BE4134);
PPC_FUNC_IMPL(__imp__sub_83BE4134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4138"))) PPC_WEAK_FUNC(sub_83BE4138);
PPC_FUNC_IMPL(__imp__sub_83BE4138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26312
	ctx.r3.s64 = ctx.r11.s64 + -26312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4144"))) PPC_WEAK_FUNC(sub_83BE4144);
PPC_FUNC_IMPL(__imp__sub_83BE4144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4148"))) PPC_WEAK_FUNC(sub_83BE4148);
PPC_FUNC_IMPL(__imp__sub_83BE4148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26304
	ctx.r3.s64 = ctx.r11.s64 + -26304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4154"))) PPC_WEAK_FUNC(sub_83BE4154);
PPC_FUNC_IMPL(__imp__sub_83BE4154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4158"))) PPC_WEAK_FUNC(sub_83BE4158);
PPC_FUNC_IMPL(__imp__sub_83BE4158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26296
	ctx.r3.s64 = ctx.r11.s64 + -26296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4164"))) PPC_WEAK_FUNC(sub_83BE4164);
PPC_FUNC_IMPL(__imp__sub_83BE4164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4168"))) PPC_WEAK_FUNC(sub_83BE4168);
PPC_FUNC_IMPL(__imp__sub_83BE4168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26288
	ctx.r3.s64 = ctx.r11.s64 + -26288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4174"))) PPC_WEAK_FUNC(sub_83BE4174);
PPC_FUNC_IMPL(__imp__sub_83BE4174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4178"))) PPC_WEAK_FUNC(sub_83BE4178);
PPC_FUNC_IMPL(__imp__sub_83BE4178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26280
	ctx.r3.s64 = ctx.r11.s64 + -26280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4184"))) PPC_WEAK_FUNC(sub_83BE4184);
PPC_FUNC_IMPL(__imp__sub_83BE4184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4188"))) PPC_WEAK_FUNC(sub_83BE4188);
PPC_FUNC_IMPL(__imp__sub_83BE4188) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,15568
	ctx.r3.s64 = ctx.r11.s64 + 15568;
	// bl 0x83523120
	ctx.lr = 0x83BE41A0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26272
	ctx.r3.s64 = ctx.r10.s64 + -26272;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE41AC;
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

__attribute__((alias("__imp__sub_83BE41BC"))) PPC_WEAK_FUNC(sub_83BE41BC);
PPC_FUNC_IMPL(__imp__sub_83BE41BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE41C0"))) PPC_WEAK_FUNC(sub_83BE41C0);
PPC_FUNC_IMPL(__imp__sub_83BE41C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15584
	ctx.r7.s64 = ctx.r8.s64 + 15584;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15584(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15584);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15584(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15584, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE41E8"))) PPC_WEAK_FUNC(sub_83BE41E8);
PPC_FUNC_IMPL(__imp__sub_83BE41E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-14188
	ctx.r6.s64 = ctx.r7.s64 + -14188;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14260(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14260);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15584(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15584);
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
	// std r9,-14188(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14188, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE4230"))) PPC_WEAK_FUNC(sub_83BE4230);
PPC_FUNC_IMPL(__imp__sub_83BE4230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26256
	ctx.r3.s64 = ctx.r11.s64 + -26256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE423C"))) PPC_WEAK_FUNC(sub_83BE423C);
PPC_FUNC_IMPL(__imp__sub_83BE423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4240"))) PPC_WEAK_FUNC(sub_83BE4240);
PPC_FUNC_IMPL(__imp__sub_83BE4240) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,15592
	ctx.r3.s64 = ctx.r11.s64 + 15592;
	// bl 0x8259af80
	ctx.lr = 0x83BE4258;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26240
	ctx.r3.s64 = ctx.r10.s64 + -26240;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE4264;
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

__attribute__((alias("__imp__sub_83BE4274"))) PPC_WEAK_FUNC(sub_83BE4274);
PPC_FUNC_IMPL(__imp__sub_83BE4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4278"))) PPC_WEAK_FUNC(sub_83BE4278);
PPC_FUNC_IMPL(__imp__sub_83BE4278) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15572
	ctx.r11.s64 = ctx.r8.s64 + 15572;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14212);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26248
	ctx.r3.s64 = ctx.r6.s64 + -26248;
	// stw r10,15572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15572, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE42A8"))) PPC_WEAK_FUNC(sub_83BE42A8);
PPC_FUNC_IMPL(__imp__sub_83BE42A8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,31148
	ctx.r4.s64 = ctx.r11.s64 + 31148;
	// addi r3,r10,-14164
	ctx.r3.s64 = ctx.r10.s64 + -14164;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BE42CC;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-26232
	ctx.r3.s64 = ctx.r9.s64 + -26232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE42D8;
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

__attribute__((alias("__imp__sub_83BE42E8"))) PPC_WEAK_FUNC(sub_83BE42E8);
PPC_FUNC_IMPL(__imp__sub_83BE42E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26128
	ctx.r3.s64 = ctx.r11.s64 + -26128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE42F4"))) PPC_WEAK_FUNC(sub_83BE42F4);
PPC_FUNC_IMPL(__imp__sub_83BE42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE42F8"))) PPC_WEAK_FUNC(sub_83BE42F8);
PPC_FUNC_IMPL(__imp__sub_83BE42F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26120
	ctx.r3.s64 = ctx.r11.s64 + -26120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4304"))) PPC_WEAK_FUNC(sub_83BE4304);
PPC_FUNC_IMPL(__imp__sub_83BE4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4308"))) PPC_WEAK_FUNC(sub_83BE4308);
PPC_FUNC_IMPL(__imp__sub_83BE4308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26112
	ctx.r3.s64 = ctx.r11.s64 + -26112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4314"))) PPC_WEAK_FUNC(sub_83BE4314);
PPC_FUNC_IMPL(__imp__sub_83BE4314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4318"))) PPC_WEAK_FUNC(sub_83BE4318);
PPC_FUNC_IMPL(__imp__sub_83BE4318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26104
	ctx.r3.s64 = ctx.r11.s64 + -26104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4324"))) PPC_WEAK_FUNC(sub_83BE4324);
PPC_FUNC_IMPL(__imp__sub_83BE4324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4328"))) PPC_WEAK_FUNC(sub_83BE4328);
PPC_FUNC_IMPL(__imp__sub_83BE4328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26096
	ctx.r3.s64 = ctx.r11.s64 + -26096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4334"))) PPC_WEAK_FUNC(sub_83BE4334);
PPC_FUNC_IMPL(__imp__sub_83BE4334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4338"))) PPC_WEAK_FUNC(sub_83BE4338);
PPC_FUNC_IMPL(__imp__sub_83BE4338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26088
	ctx.r3.s64 = ctx.r11.s64 + -26088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4344"))) PPC_WEAK_FUNC(sub_83BE4344);
PPC_FUNC_IMPL(__imp__sub_83BE4344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4348"))) PPC_WEAK_FUNC(sub_83BE4348);
PPC_FUNC_IMPL(__imp__sub_83BE4348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26080
	ctx.r3.s64 = ctx.r11.s64 + -26080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4354"))) PPC_WEAK_FUNC(sub_83BE4354);
PPC_FUNC_IMPL(__imp__sub_83BE4354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4358"))) PPC_WEAK_FUNC(sub_83BE4358);
PPC_FUNC_IMPL(__imp__sub_83BE4358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26072
	ctx.r3.s64 = ctx.r11.s64 + -26072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4364"))) PPC_WEAK_FUNC(sub_83BE4364);
PPC_FUNC_IMPL(__imp__sub_83BE4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4368"))) PPC_WEAK_FUNC(sub_83BE4368);
PPC_FUNC_IMPL(__imp__sub_83BE4368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26064
	ctx.r3.s64 = ctx.r11.s64 + -26064;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4374"))) PPC_WEAK_FUNC(sub_83BE4374);
PPC_FUNC_IMPL(__imp__sub_83BE4374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4378"))) PPC_WEAK_FUNC(sub_83BE4378);
PPC_FUNC_IMPL(__imp__sub_83BE4378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26056
	ctx.r3.s64 = ctx.r11.s64 + -26056;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4384"))) PPC_WEAK_FUNC(sub_83BE4384);
PPC_FUNC_IMPL(__imp__sub_83BE4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4388"))) PPC_WEAK_FUNC(sub_83BE4388);
PPC_FUNC_IMPL(__imp__sub_83BE4388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26048
	ctx.r3.s64 = ctx.r11.s64 + -26048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4394"))) PPC_WEAK_FUNC(sub_83BE4394);
PPC_FUNC_IMPL(__imp__sub_83BE4394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4398"))) PPC_WEAK_FUNC(sub_83BE4398);
PPC_FUNC_IMPL(__imp__sub_83BE4398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26040
	ctx.r3.s64 = ctx.r11.s64 + -26040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE43A4"))) PPC_WEAK_FUNC(sub_83BE43A4);
PPC_FUNC_IMPL(__imp__sub_83BE43A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE43A8"))) PPC_WEAK_FUNC(sub_83BE43A8);
PPC_FUNC_IMPL(__imp__sub_83BE43A8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,15936
	ctx.r3.s64 = ctx.r11.s64 + 15936;
	// bl 0x83523120
	ctx.lr = 0x83BE43C0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26032
	ctx.r3.s64 = ctx.r10.s64 + -26032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE43CC;
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

__attribute__((alias("__imp__sub_83BE43DC"))) PPC_WEAK_FUNC(sub_83BE43DC);
PPC_FUNC_IMPL(__imp__sub_83BE43DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE43E0"))) PPC_WEAK_FUNC(sub_83BE43E0);
PPC_FUNC_IMPL(__imp__sub_83BE43E0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,15952
	ctx.r7.s64 = ctx.r8.s64 + 15952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,15952(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15952);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,15952(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15952, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE4408"))) PPC_WEAK_FUNC(sub_83BE4408);
PPC_FUNC_IMPL(__imp__sub_83BE4408) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-14032
	ctx.r6.s64 = ctx.r7.s64 + -14032;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-14104(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -14104);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,15952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15952);
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
	// std r9,-14032(r7)
	PPC_STORE_U64(ctx.r7.u32 + -14032, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE4450"))) PPC_WEAK_FUNC(sub_83BE4450);
PPC_FUNC_IMPL(__imp__sub_83BE4450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-26016
	ctx.r3.s64 = ctx.r11.s64 + -26016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE445C"))) PPC_WEAK_FUNC(sub_83BE445C);
PPC_FUNC_IMPL(__imp__sub_83BE445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4460"))) PPC_WEAK_FUNC(sub_83BE4460);
PPC_FUNC_IMPL(__imp__sub_83BE4460) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,15960
	ctx.r3.s64 = ctx.r11.s64 + 15960;
	// bl 0x8259af80
	ctx.lr = 0x83BE4478;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-26000
	ctx.r3.s64 = ctx.r10.s64 + -26000;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE4484;
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

__attribute__((alias("__imp__sub_83BE4494"))) PPC_WEAK_FUNC(sub_83BE4494);
PPC_FUNC_IMPL(__imp__sub_83BE4494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4498"))) PPC_WEAK_FUNC(sub_83BE4498);
PPC_FUNC_IMPL(__imp__sub_83BE4498) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,15940
	ctx.r11.s64 = ctx.r8.s64 + 15940;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-14056(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14056);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-26008
	ctx.r3.s64 = ctx.r6.s64 + -26008;
	// stw r10,15940(r8)
	PPC_STORE_U32(ctx.r8.u32 + 15940, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE44C8"))) PPC_WEAK_FUNC(sub_83BE44C8);
PPC_FUNC_IMPL(__imp__sub_83BE44C8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,32132
	ctx.r4.s64 = ctx.r11.s64 + 32132;
	// addi r3,r10,-14008
	ctx.r3.s64 = ctx.r10.s64 + -14008;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8259cc28
	ctx.lr = 0x83BE44EC;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-25992
	ctx.r3.s64 = ctx.r9.s64 + -25992;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE44F8;
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

__attribute__((alias("__imp__sub_83BE4508"))) PPC_WEAK_FUNC(sub_83BE4508);
PPC_FUNC_IMPL(__imp__sub_83BE4508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25888
	ctx.r3.s64 = ctx.r11.s64 + -25888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4514"))) PPC_WEAK_FUNC(sub_83BE4514);
PPC_FUNC_IMPL(__imp__sub_83BE4514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4518"))) PPC_WEAK_FUNC(sub_83BE4518);
PPC_FUNC_IMPL(__imp__sub_83BE4518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25880
	ctx.r3.s64 = ctx.r11.s64 + -25880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4524"))) PPC_WEAK_FUNC(sub_83BE4524);
PPC_FUNC_IMPL(__imp__sub_83BE4524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4528"))) PPC_WEAK_FUNC(sub_83BE4528);
PPC_FUNC_IMPL(__imp__sub_83BE4528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25872
	ctx.r3.s64 = ctx.r11.s64 + -25872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4534"))) PPC_WEAK_FUNC(sub_83BE4534);
PPC_FUNC_IMPL(__imp__sub_83BE4534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4538"))) PPC_WEAK_FUNC(sub_83BE4538);
PPC_FUNC_IMPL(__imp__sub_83BE4538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25864
	ctx.r3.s64 = ctx.r11.s64 + -25864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4544"))) PPC_WEAK_FUNC(sub_83BE4544);
PPC_FUNC_IMPL(__imp__sub_83BE4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4548"))) PPC_WEAK_FUNC(sub_83BE4548);
PPC_FUNC_IMPL(__imp__sub_83BE4548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25856
	ctx.r3.s64 = ctx.r11.s64 + -25856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4554"))) PPC_WEAK_FUNC(sub_83BE4554);
PPC_FUNC_IMPL(__imp__sub_83BE4554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4558"))) PPC_WEAK_FUNC(sub_83BE4558);
PPC_FUNC_IMPL(__imp__sub_83BE4558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25848
	ctx.r3.s64 = ctx.r11.s64 + -25848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4564"))) PPC_WEAK_FUNC(sub_83BE4564);
PPC_FUNC_IMPL(__imp__sub_83BE4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4568"))) PPC_WEAK_FUNC(sub_83BE4568);
PPC_FUNC_IMPL(__imp__sub_83BE4568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25840
	ctx.r3.s64 = ctx.r11.s64 + -25840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4574"))) PPC_WEAK_FUNC(sub_83BE4574);
PPC_FUNC_IMPL(__imp__sub_83BE4574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4578"))) PPC_WEAK_FUNC(sub_83BE4578);
PPC_FUNC_IMPL(__imp__sub_83BE4578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25832
	ctx.r3.s64 = ctx.r11.s64 + -25832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4584"))) PPC_WEAK_FUNC(sub_83BE4584);
PPC_FUNC_IMPL(__imp__sub_83BE4584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4588"))) PPC_WEAK_FUNC(sub_83BE4588);
PPC_FUNC_IMPL(__imp__sub_83BE4588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25824
	ctx.r3.s64 = ctx.r11.s64 + -25824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE4594"))) PPC_WEAK_FUNC(sub_83BE4594);
PPC_FUNC_IMPL(__imp__sub_83BE4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4598"))) PPC_WEAK_FUNC(sub_83BE4598);
PPC_FUNC_IMPL(__imp__sub_83BE4598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25816
	ctx.r3.s64 = ctx.r11.s64 + -25816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE45A4"))) PPC_WEAK_FUNC(sub_83BE45A4);
PPC_FUNC_IMPL(__imp__sub_83BE45A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE45A8"))) PPC_WEAK_FUNC(sub_83BE45A8);
PPC_FUNC_IMPL(__imp__sub_83BE45A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25808
	ctx.r3.s64 = ctx.r11.s64 + -25808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE45B4"))) PPC_WEAK_FUNC(sub_83BE45B4);
PPC_FUNC_IMPL(__imp__sub_83BE45B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE45B8"))) PPC_WEAK_FUNC(sub_83BE45B8);
PPC_FUNC_IMPL(__imp__sub_83BE45B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25800
	ctx.r3.s64 = ctx.r11.s64 + -25800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE45C4"))) PPC_WEAK_FUNC(sub_83BE45C4);
PPC_FUNC_IMPL(__imp__sub_83BE45C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE45C8"))) PPC_WEAK_FUNC(sub_83BE45C8);
PPC_FUNC_IMPL(__imp__sub_83BE45C8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,16304
	ctx.r3.s64 = ctx.r11.s64 + 16304;
	// bl 0x83523120
	ctx.lr = 0x83BE45E0;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-25792
	ctx.r3.s64 = ctx.r10.s64 + -25792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE45EC;
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

__attribute__((alias("__imp__sub_83BE45FC"))) PPC_WEAK_FUNC(sub_83BE45FC);
PPC_FUNC_IMPL(__imp__sub_83BE45FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4600"))) PPC_WEAK_FUNC(sub_83BE4600);
PPC_FUNC_IMPL(__imp__sub_83BE4600) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,16320
	ctx.r7.s64 = ctx.r8.s64 + 16320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,16320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE4628"))) PPC_WEAK_FUNC(sub_83BE4628);
PPC_FUNC_IMPL(__imp__sub_83BE4628) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-13852
	ctx.r6.s64 = ctx.r7.s64 + -13852;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-13924(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -13924);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,16320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16320);
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
	// std r9,-13852(r7)
	PPC_STORE_U64(ctx.r7.u32 + -13852, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE4670"))) PPC_WEAK_FUNC(sub_83BE4670);
PPC_FUNC_IMPL(__imp__sub_83BE4670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25776
	ctx.r3.s64 = ctx.r11.s64 + -25776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE467C"))) PPC_WEAK_FUNC(sub_83BE467C);
PPC_FUNC_IMPL(__imp__sub_83BE467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE4680"))) PPC_WEAK_FUNC(sub_83BE4680);
PPC_FUNC_IMPL(__imp__sub_83BE4680) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,16328
	ctx.r3.s64 = ctx.r11.s64 + 16328;
	// bl 0x8259af80
	ctx.lr = 0x83BE4698;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-25760
	ctx.r3.s64 = ctx.r10.s64 + -25760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE46A4;
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

__attribute__((alias("__imp__sub_83BE46B4"))) PPC_WEAK_FUNC(sub_83BE46B4);
PPC_FUNC_IMPL(__imp__sub_83BE46B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE46B8"))) PPC_WEAK_FUNC(sub_83BE46B8);
PPC_FUNC_IMPL(__imp__sub_83BE46B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,16308
	ctx.r11.s64 = ctx.r8.s64 + 16308;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-13876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13876);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-25768
	ctx.r3.s64 = ctx.r6.s64 + -25768;
	// stw r10,16308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE46E8"))) PPC_WEAK_FUNC(sub_83BE46E8);
PPC_FUNC_IMPL(__imp__sub_83BE46E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-25752
	ctx.r3.s64 = ctx.r11.s64 + -25752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

