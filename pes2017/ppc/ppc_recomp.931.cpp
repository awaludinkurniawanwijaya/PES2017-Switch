#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83CD0724"))) PPC_WEAK_FUNC(sub_83CD0724);
PPC_FUNC_IMPL(__imp__sub_83CD0724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0728"))) PPC_WEAK_FUNC(sub_83CD0728);
PPC_FUNC_IMPL(__imp__sub_83CD0728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0734"))) PPC_WEAK_FUNC(sub_83CD0734);
PPC_FUNC_IMPL(__imp__sub_83CD0734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0738"))) PPC_WEAK_FUNC(sub_83CD0738);
PPC_FUNC_IMPL(__imp__sub_83CD0738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-23016
	ctx.r3.s64 = ctx.r11.s64 + -23016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0744"))) PPC_WEAK_FUNC(sub_83CD0744);
PPC_FUNC_IMPL(__imp__sub_83CD0744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0748"))) PPC_WEAK_FUNC(sub_83CD0748);
PPC_FUNC_IMPL(__imp__sub_83CD0748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-23008
	ctx.r3.s64 = ctx.r11.s64 + -23008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0754"))) PPC_WEAK_FUNC(sub_83CD0754);
PPC_FUNC_IMPL(__imp__sub_83CD0754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0758"))) PPC_WEAK_FUNC(sub_83CD0758);
PPC_FUNC_IMPL(__imp__sub_83CD0758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-23000
	ctx.r3.s64 = ctx.r11.s64 + -23000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0764"))) PPC_WEAK_FUNC(sub_83CD0764);
PPC_FUNC_IMPL(__imp__sub_83CD0764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0768"))) PPC_WEAK_FUNC(sub_83CD0768);
PPC_FUNC_IMPL(__imp__sub_83CD0768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22992
	ctx.r3.s64 = ctx.r11.s64 + -22992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0774"))) PPC_WEAK_FUNC(sub_83CD0774);
PPC_FUNC_IMPL(__imp__sub_83CD0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0778"))) PPC_WEAK_FUNC(sub_83CD0778);
PPC_FUNC_IMPL(__imp__sub_83CD0778) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-9240
	ctx.r7.s64 = ctx.r8.s64 + -9240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-9240(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9240);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-9240(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9240, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD07A0"))) PPC_WEAK_FUNC(sub_83CD07A0);
PPC_FUNC_IMPL(__imp__sub_83CD07A0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-2436
	ctx.r6.s64 = ctx.r7.s64 + -2436;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2508(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2508);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-9240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -9240);
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
	// std r9,-2436(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2436, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD07E8"))) PPC_WEAK_FUNC(sub_83CD07E8);
PPC_FUNC_IMPL(__imp__sub_83CD07E8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// bl 0x83523120
	ctx.lr = 0x83CD0800;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22984
	ctx.r3.s64 = ctx.r10.s64 + -22984;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD080C;
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

__attribute__((alias("__imp__sub_83CD081C"))) PPC_WEAK_FUNC(sub_83CD081C);
PPC_FUNC_IMPL(__imp__sub_83CD081C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0820"))) PPC_WEAK_FUNC(sub_83CD0820);
PPC_FUNC_IMPL(__imp__sub_83CD0820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22968
	ctx.r3.s64 = ctx.r11.s64 + -22968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD082C"))) PPC_WEAK_FUNC(sub_83CD082C);
PPC_FUNC_IMPL(__imp__sub_83CD082C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0830"))) PPC_WEAK_FUNC(sub_83CD0830);
PPC_FUNC_IMPL(__imp__sub_83CD0830) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-9232
	ctx.r3.s64 = ctx.r11.s64 + -9232;
	// bl 0x8259af80
	ctx.lr = 0x83CD0848;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22952
	ctx.r3.s64 = ctx.r10.s64 + -22952;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0854;
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

__attribute__((alias("__imp__sub_83CD0864"))) PPC_WEAK_FUNC(sub_83CD0864);
PPC_FUNC_IMPL(__imp__sub_83CD0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0868"))) PPC_WEAK_FUNC(sub_83CD0868);
PPC_FUNC_IMPL(__imp__sub_83CD0868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-9252
	ctx.r11.s64 = ctx.r8.s64 + -9252;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-2460(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2460);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22960
	ctx.r3.s64 = ctx.r6.s64 + -22960;
	// stw r10,-9252(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9252, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0898"))) PPC_WEAK_FUNC(sub_83CD0898);
PPC_FUNC_IMPL(__imp__sub_83CD0898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22944
	ctx.r3.s64 = ctx.r11.s64 + -22944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD08A4"))) PPC_WEAK_FUNC(sub_83CD08A4);
PPC_FUNC_IMPL(__imp__sub_83CD08A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD08A8"))) PPC_WEAK_FUNC(sub_83CD08A8);
PPC_FUNC_IMPL(__imp__sub_83CD08A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22936
	ctx.r3.s64 = ctx.r11.s64 + -22936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD08B4"))) PPC_WEAK_FUNC(sub_83CD08B4);
PPC_FUNC_IMPL(__imp__sub_83CD08B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD08B8"))) PPC_WEAK_FUNC(sub_83CD08B8);
PPC_FUNC_IMPL(__imp__sub_83CD08B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD08C4"))) PPC_WEAK_FUNC(sub_83CD08C4);
PPC_FUNC_IMPL(__imp__sub_83CD08C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD08C8"))) PPC_WEAK_FUNC(sub_83CD08C8);
PPC_FUNC_IMPL(__imp__sub_83CD08C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22920
	ctx.r3.s64 = ctx.r11.s64 + -22920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD08D4"))) PPC_WEAK_FUNC(sub_83CD08D4);
PPC_FUNC_IMPL(__imp__sub_83CD08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD08D8"))) PPC_WEAK_FUNC(sub_83CD08D8);
PPC_FUNC_IMPL(__imp__sub_83CD08D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22912
	ctx.r3.s64 = ctx.r11.s64 + -22912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD08E4"))) PPC_WEAK_FUNC(sub_83CD08E4);
PPC_FUNC_IMPL(__imp__sub_83CD08E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD08E8"))) PPC_WEAK_FUNC(sub_83CD08E8);
PPC_FUNC_IMPL(__imp__sub_83CD08E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22904
	ctx.r3.s64 = ctx.r11.s64 + -22904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD08F4"))) PPC_WEAK_FUNC(sub_83CD08F4);
PPC_FUNC_IMPL(__imp__sub_83CD08F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD08F8"))) PPC_WEAK_FUNC(sub_83CD08F8);
PPC_FUNC_IMPL(__imp__sub_83CD08F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0904"))) PPC_WEAK_FUNC(sub_83CD0904);
PPC_FUNC_IMPL(__imp__sub_83CD0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0908"))) PPC_WEAK_FUNC(sub_83CD0908);
PPC_FUNC_IMPL(__imp__sub_83CD0908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22888
	ctx.r3.s64 = ctx.r11.s64 + -22888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0914"))) PPC_WEAK_FUNC(sub_83CD0914);
PPC_FUNC_IMPL(__imp__sub_83CD0914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0918"))) PPC_WEAK_FUNC(sub_83CD0918);
PPC_FUNC_IMPL(__imp__sub_83CD0918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22880
	ctx.r3.s64 = ctx.r11.s64 + -22880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0924"))) PPC_WEAK_FUNC(sub_83CD0924);
PPC_FUNC_IMPL(__imp__sub_83CD0924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0928"))) PPC_WEAK_FUNC(sub_83CD0928);
PPC_FUNC_IMPL(__imp__sub_83CD0928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22872
	ctx.r3.s64 = ctx.r11.s64 + -22872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0934"))) PPC_WEAK_FUNC(sub_83CD0934);
PPC_FUNC_IMPL(__imp__sub_83CD0934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0938"))) PPC_WEAK_FUNC(sub_83CD0938);
PPC_FUNC_IMPL(__imp__sub_83CD0938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22864
	ctx.r3.s64 = ctx.r11.s64 + -22864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0944"))) PPC_WEAK_FUNC(sub_83CD0944);
PPC_FUNC_IMPL(__imp__sub_83CD0944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0948"))) PPC_WEAK_FUNC(sub_83CD0948);
PPC_FUNC_IMPL(__imp__sub_83CD0948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0954"))) PPC_WEAK_FUNC(sub_83CD0954);
PPC_FUNC_IMPL(__imp__sub_83CD0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0958"))) PPC_WEAK_FUNC(sub_83CD0958);
PPC_FUNC_IMPL(__imp__sub_83CD0958) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8868
	ctx.r7.s64 = ctx.r8.s64 + -8868;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8868(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8868);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8868, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD0980"))) PPC_WEAK_FUNC(sub_83CD0980);
PPC_FUNC_IMPL(__imp__sub_83CD0980) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-2308
	ctx.r6.s64 = ctx.r7.s64 + -2308;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-2380(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -2380);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-8868(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8868);
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
	// std r9,-2308(r7)
	PPC_STORE_U64(ctx.r7.u32 + -2308, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD09C8"))) PPC_WEAK_FUNC(sub_83CD09C8);
PPC_FUNC_IMPL(__imp__sub_83CD09C8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8884
	ctx.r3.s64 = ctx.r11.s64 + -8884;
	// bl 0x83523120
	ctx.lr = 0x83CD09E0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22848
	ctx.r3.s64 = ctx.r10.s64 + -22848;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD09EC;
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

__attribute__((alias("__imp__sub_83CD09FC"))) PPC_WEAK_FUNC(sub_83CD09FC);
PPC_FUNC_IMPL(__imp__sub_83CD09FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0A00"))) PPC_WEAK_FUNC(sub_83CD0A00);
PPC_FUNC_IMPL(__imp__sub_83CD0A00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22832
	ctx.r3.s64 = ctx.r11.s64 + -22832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0A0C"))) PPC_WEAK_FUNC(sub_83CD0A0C);
PPC_FUNC_IMPL(__imp__sub_83CD0A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0A10"))) PPC_WEAK_FUNC(sub_83CD0A10);
PPC_FUNC_IMPL(__imp__sub_83CD0A10) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x8259af80
	ctx.lr = 0x83CD0A28;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22816
	ctx.r3.s64 = ctx.r10.s64 + -22816;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0A34;
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

__attribute__((alias("__imp__sub_83CD0A44"))) PPC_WEAK_FUNC(sub_83CD0A44);
PPC_FUNC_IMPL(__imp__sub_83CD0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0A48"))) PPC_WEAK_FUNC(sub_83CD0A48);
PPC_FUNC_IMPL(__imp__sub_83CD0A48) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8880
	ctx.r11.s64 = ctx.r8.s64 + -8880;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-2332(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2332);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22824
	ctx.r3.s64 = ctx.r6.s64 + -22824;
	// stw r10,-8880(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8880, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0A78"))) PPC_WEAK_FUNC(sub_83CD0A78);
PPC_FUNC_IMPL(__imp__sub_83CD0A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22808
	ctx.r3.s64 = ctx.r11.s64 + -22808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0A84"))) PPC_WEAK_FUNC(sub_83CD0A84);
PPC_FUNC_IMPL(__imp__sub_83CD0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0A88"))) PPC_WEAK_FUNC(sub_83CD0A88);
PPC_FUNC_IMPL(__imp__sub_83CD0A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22800
	ctx.r3.s64 = ctx.r11.s64 + -22800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0A94"))) PPC_WEAK_FUNC(sub_83CD0A94);
PPC_FUNC_IMPL(__imp__sub_83CD0A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0A98"))) PPC_WEAK_FUNC(sub_83CD0A98);
PPC_FUNC_IMPL(__imp__sub_83CD0A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22792
	ctx.r3.s64 = ctx.r11.s64 + -22792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0AA4"))) PPC_WEAK_FUNC(sub_83CD0AA4);
PPC_FUNC_IMPL(__imp__sub_83CD0AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0AA8"))) PPC_WEAK_FUNC(sub_83CD0AA8);
PPC_FUNC_IMPL(__imp__sub_83CD0AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0AB4"))) PPC_WEAK_FUNC(sub_83CD0AB4);
PPC_FUNC_IMPL(__imp__sub_83CD0AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0AB8"))) PPC_WEAK_FUNC(sub_83CD0AB8);
PPC_FUNC_IMPL(__imp__sub_83CD0AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22776
	ctx.r3.s64 = ctx.r11.s64 + -22776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0AC4"))) PPC_WEAK_FUNC(sub_83CD0AC4);
PPC_FUNC_IMPL(__imp__sub_83CD0AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0AC8"))) PPC_WEAK_FUNC(sub_83CD0AC8);
PPC_FUNC_IMPL(__imp__sub_83CD0AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22768
	ctx.r3.s64 = ctx.r11.s64 + -22768;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0AD4"))) PPC_WEAK_FUNC(sub_83CD0AD4);
PPC_FUNC_IMPL(__imp__sub_83CD0AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0AD8"))) PPC_WEAK_FUNC(sub_83CD0AD8);
PPC_FUNC_IMPL(__imp__sub_83CD0AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22760
	ctx.r3.s64 = ctx.r11.s64 + -22760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0AE4"))) PPC_WEAK_FUNC(sub_83CD0AE4);
PPC_FUNC_IMPL(__imp__sub_83CD0AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0AE8"))) PPC_WEAK_FUNC(sub_83CD0AE8);
PPC_FUNC_IMPL(__imp__sub_83CD0AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0AF4"))) PPC_WEAK_FUNC(sub_83CD0AF4);
PPC_FUNC_IMPL(__imp__sub_83CD0AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0AF8"))) PPC_WEAK_FUNC(sub_83CD0AF8);
PPC_FUNC_IMPL(__imp__sub_83CD0AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22744
	ctx.r3.s64 = ctx.r11.s64 + -22744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B04"))) PPC_WEAK_FUNC(sub_83CD0B04);
PPC_FUNC_IMPL(__imp__sub_83CD0B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B08"))) PPC_WEAK_FUNC(sub_83CD0B08);
PPC_FUNC_IMPL(__imp__sub_83CD0B08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22736
	ctx.r3.s64 = ctx.r11.s64 + -22736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B14"))) PPC_WEAK_FUNC(sub_83CD0B14);
PPC_FUNC_IMPL(__imp__sub_83CD0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B18"))) PPC_WEAK_FUNC(sub_83CD0B18);
PPC_FUNC_IMPL(__imp__sub_83CD0B18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B24"))) PPC_WEAK_FUNC(sub_83CD0B24);
PPC_FUNC_IMPL(__imp__sub_83CD0B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B28"))) PPC_WEAK_FUNC(sub_83CD0B28);
PPC_FUNC_IMPL(__imp__sub_83CD0B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22720
	ctx.r3.s64 = ctx.r11.s64 + -22720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B34"))) PPC_WEAK_FUNC(sub_83CD0B34);
PPC_FUNC_IMPL(__imp__sub_83CD0B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B38"))) PPC_WEAK_FUNC(sub_83CD0B38);
PPC_FUNC_IMPL(__imp__sub_83CD0B38) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// bl 0x83523120
	ctx.lr = 0x83CD0B50;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22712
	ctx.r3.s64 = ctx.r10.s64 + -22712;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0B5C;
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

__attribute__((alias("__imp__sub_83CD0B6C"))) PPC_WEAK_FUNC(sub_83CD0B6C);
PPC_FUNC_IMPL(__imp__sub_83CD0B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B70"))) PPC_WEAK_FUNC(sub_83CD0B70);
PPC_FUNC_IMPL(__imp__sub_83CD0B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22696
	ctx.r3.s64 = ctx.r11.s64 + -22696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B7C"))) PPC_WEAK_FUNC(sub_83CD0B7C);
PPC_FUNC_IMPL(__imp__sub_83CD0B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B80"))) PPC_WEAK_FUNC(sub_83CD0B80);
PPC_FUNC_IMPL(__imp__sub_83CD0B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22688
	ctx.r3.s64 = ctx.r11.s64 + -22688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B8C"))) PPC_WEAK_FUNC(sub_83CD0B8C);
PPC_FUNC_IMPL(__imp__sub_83CD0B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0B90"))) PPC_WEAK_FUNC(sub_83CD0B90);
PPC_FUNC_IMPL(__imp__sub_83CD0B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22680
	ctx.r3.s64 = ctx.r11.s64 + -22680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0B9C"))) PPC_WEAK_FUNC(sub_83CD0B9C);
PPC_FUNC_IMPL(__imp__sub_83CD0B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0BA0"))) PPC_WEAK_FUNC(sub_83CD0BA0);
PPC_FUNC_IMPL(__imp__sub_83CD0BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22672
	ctx.r3.s64 = ctx.r11.s64 + -22672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0BAC"))) PPC_WEAK_FUNC(sub_83CD0BAC);
PPC_FUNC_IMPL(__imp__sub_83CD0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0BB0"))) PPC_WEAK_FUNC(sub_83CD0BB0);
PPC_FUNC_IMPL(__imp__sub_83CD0BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22664
	ctx.r3.s64 = ctx.r11.s64 + -22664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0BBC"))) PPC_WEAK_FUNC(sub_83CD0BBC);
PPC_FUNC_IMPL(__imp__sub_83CD0BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0BC0"))) PPC_WEAK_FUNC(sub_83CD0BC0);
PPC_FUNC_IMPL(__imp__sub_83CD0BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22656
	ctx.r3.s64 = ctx.r11.s64 + -22656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0BCC"))) PPC_WEAK_FUNC(sub_83CD0BCC);
PPC_FUNC_IMPL(__imp__sub_83CD0BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0BD0"))) PPC_WEAK_FUNC(sub_83CD0BD0);
PPC_FUNC_IMPL(__imp__sub_83CD0BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22648
	ctx.r3.s64 = ctx.r11.s64 + -22648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0BDC"))) PPC_WEAK_FUNC(sub_83CD0BDC);
PPC_FUNC_IMPL(__imp__sub_83CD0BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0BE0"))) PPC_WEAK_FUNC(sub_83CD0BE0);
PPC_FUNC_IMPL(__imp__sub_83CD0BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22640
	ctx.r3.s64 = ctx.r11.s64 + -22640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0BEC"))) PPC_WEAK_FUNC(sub_83CD0BEC);
PPC_FUNC_IMPL(__imp__sub_83CD0BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0BF0"))) PPC_WEAK_FUNC(sub_83CD0BF0);
PPC_FUNC_IMPL(__imp__sub_83CD0BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22632
	ctx.r3.s64 = ctx.r11.s64 + -22632;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0BFC"))) PPC_WEAK_FUNC(sub_83CD0BFC);
PPC_FUNC_IMPL(__imp__sub_83CD0BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C00"))) PPC_WEAK_FUNC(sub_83CD0C00);
PPC_FUNC_IMPL(__imp__sub_83CD0C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22624
	ctx.r3.s64 = ctx.r11.s64 + -22624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0C0C"))) PPC_WEAK_FUNC(sub_83CD0C0C);
PPC_FUNC_IMPL(__imp__sub_83CD0C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C10"))) PPC_WEAK_FUNC(sub_83CD0C10);
PPC_FUNC_IMPL(__imp__sub_83CD0C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0C1C"))) PPC_WEAK_FUNC(sub_83CD0C1C);
PPC_FUNC_IMPL(__imp__sub_83CD0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C20"))) PPC_WEAK_FUNC(sub_83CD0C20);
PPC_FUNC_IMPL(__imp__sub_83CD0C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22608
	ctx.r3.s64 = ctx.r11.s64 + -22608;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0C2C"))) PPC_WEAK_FUNC(sub_83CD0C2C);
PPC_FUNC_IMPL(__imp__sub_83CD0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C30"))) PPC_WEAK_FUNC(sub_83CD0C30);
PPC_FUNC_IMPL(__imp__sub_83CD0C30) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// bl 0x83523120
	ctx.lr = 0x83CD0C48;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22600
	ctx.r3.s64 = ctx.r10.s64 + -22600;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0C54;
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

__attribute__((alias("__imp__sub_83CD0C64"))) PPC_WEAK_FUNC(sub_83CD0C64);
PPC_FUNC_IMPL(__imp__sub_83CD0C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C68"))) PPC_WEAK_FUNC(sub_83CD0C68);
PPC_FUNC_IMPL(__imp__sub_83CD0C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22584
	ctx.r3.s64 = ctx.r11.s64 + -22584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0C74"))) PPC_WEAK_FUNC(sub_83CD0C74);
PPC_FUNC_IMPL(__imp__sub_83CD0C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C78"))) PPC_WEAK_FUNC(sub_83CD0C78);
PPC_FUNC_IMPL(__imp__sub_83CD0C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22576
	ctx.r3.s64 = ctx.r11.s64 + -22576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0C84"))) PPC_WEAK_FUNC(sub_83CD0C84);
PPC_FUNC_IMPL(__imp__sub_83CD0C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C88"))) PPC_WEAK_FUNC(sub_83CD0C88);
PPC_FUNC_IMPL(__imp__sub_83CD0C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22568
	ctx.r3.s64 = ctx.r11.s64 + -22568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0C94"))) PPC_WEAK_FUNC(sub_83CD0C94);
PPC_FUNC_IMPL(__imp__sub_83CD0C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0C98"))) PPC_WEAK_FUNC(sub_83CD0C98);
PPC_FUNC_IMPL(__imp__sub_83CD0C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22560
	ctx.r3.s64 = ctx.r11.s64 + -22560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0CA4"))) PPC_WEAK_FUNC(sub_83CD0CA4);
PPC_FUNC_IMPL(__imp__sub_83CD0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0CA8"))) PPC_WEAK_FUNC(sub_83CD0CA8);
PPC_FUNC_IMPL(__imp__sub_83CD0CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22552
	ctx.r3.s64 = ctx.r11.s64 + -22552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0CB4"))) PPC_WEAK_FUNC(sub_83CD0CB4);
PPC_FUNC_IMPL(__imp__sub_83CD0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0CB8"))) PPC_WEAK_FUNC(sub_83CD0CB8);
PPC_FUNC_IMPL(__imp__sub_83CD0CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0CC4"))) PPC_WEAK_FUNC(sub_83CD0CC4);
PPC_FUNC_IMPL(__imp__sub_83CD0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0CC8"))) PPC_WEAK_FUNC(sub_83CD0CC8);
PPC_FUNC_IMPL(__imp__sub_83CD0CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22536
	ctx.r3.s64 = ctx.r11.s64 + -22536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0CD4"))) PPC_WEAK_FUNC(sub_83CD0CD4);
PPC_FUNC_IMPL(__imp__sub_83CD0CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0CD8"))) PPC_WEAK_FUNC(sub_83CD0CD8);
PPC_FUNC_IMPL(__imp__sub_83CD0CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22528
	ctx.r3.s64 = ctx.r11.s64 + -22528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0CE4"))) PPC_WEAK_FUNC(sub_83CD0CE4);
PPC_FUNC_IMPL(__imp__sub_83CD0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0CE8"))) PPC_WEAK_FUNC(sub_83CD0CE8);
PPC_FUNC_IMPL(__imp__sub_83CD0CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0CF4"))) PPC_WEAK_FUNC(sub_83CD0CF4);
PPC_FUNC_IMPL(__imp__sub_83CD0CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0CF8"))) PPC_WEAK_FUNC(sub_83CD0CF8);
PPC_FUNC_IMPL(__imp__sub_83CD0CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22512
	ctx.r3.s64 = ctx.r11.s64 + -22512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0D04"))) PPC_WEAK_FUNC(sub_83CD0D04);
PPC_FUNC_IMPL(__imp__sub_83CD0D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0D08"))) PPC_WEAK_FUNC(sub_83CD0D08);
PPC_FUNC_IMPL(__imp__sub_83CD0D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22504
	ctx.r3.s64 = ctx.r11.s64 + -22504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0D14"))) PPC_WEAK_FUNC(sub_83CD0D14);
PPC_FUNC_IMPL(__imp__sub_83CD0D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0D18"))) PPC_WEAK_FUNC(sub_83CD0D18);
PPC_FUNC_IMPL(__imp__sub_83CD0D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22496
	ctx.r3.s64 = ctx.r11.s64 + -22496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0D24"))) PPC_WEAK_FUNC(sub_83CD0D24);
PPC_FUNC_IMPL(__imp__sub_83CD0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0D28"))) PPC_WEAK_FUNC(sub_83CD0D28);
PPC_FUNC_IMPL(__imp__sub_83CD0D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8480
	ctx.r7.s64 = ctx.r8.s64 + -8480;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8480(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8480);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8480(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8480, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD0D50"))) PPC_WEAK_FUNC(sub_83CD0D50);
PPC_FUNC_IMPL(__imp__sub_83CD0D50) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-1972
	ctx.r6.s64 = ctx.r7.s64 + -1972;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
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
	// lwz r8,-8480(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8480);
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

__attribute__((alias("__imp__sub_83CD0D98"))) PPC_WEAK_FUNC(sub_83CD0D98);
PPC_FUNC_IMPL(__imp__sub_83CD0D98) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8496
	ctx.r3.s64 = ctx.r11.s64 + -8496;
	// bl 0x83523120
	ctx.lr = 0x83CD0DB0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22488
	ctx.r3.s64 = ctx.r10.s64 + -22488;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0DBC;
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

__attribute__((alias("__imp__sub_83CD0DCC"))) PPC_WEAK_FUNC(sub_83CD0DCC);
PPC_FUNC_IMPL(__imp__sub_83CD0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0DD0"))) PPC_WEAK_FUNC(sub_83CD0DD0);
PPC_FUNC_IMPL(__imp__sub_83CD0DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22472
	ctx.r3.s64 = ctx.r11.s64 + -22472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0DDC"))) PPC_WEAK_FUNC(sub_83CD0DDC);
PPC_FUNC_IMPL(__imp__sub_83CD0DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0DE0"))) PPC_WEAK_FUNC(sub_83CD0DE0);
PPC_FUNC_IMPL(__imp__sub_83CD0DE0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8472
	ctx.r3.s64 = ctx.r11.s64 + -8472;
	// bl 0x8259af80
	ctx.lr = 0x83CD0DF8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22456
	ctx.r3.s64 = ctx.r10.s64 + -22456;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0E04;
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

__attribute__((alias("__imp__sub_83CD0E14"))) PPC_WEAK_FUNC(sub_83CD0E14);
PPC_FUNC_IMPL(__imp__sub_83CD0E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0E18"))) PPC_WEAK_FUNC(sub_83CD0E18);
PPC_FUNC_IMPL(__imp__sub_83CD0E18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8492
	ctx.r11.s64 = ctx.r8.s64 + -8492;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-1996(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1996);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22464
	ctx.r3.s64 = ctx.r6.s64 + -22464;
	// stw r10,-8492(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8492, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0E48"))) PPC_WEAK_FUNC(sub_83CD0E48);
PPC_FUNC_IMPL(__imp__sub_83CD0E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22448
	ctx.r3.s64 = ctx.r11.s64 + -22448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0E54"))) PPC_WEAK_FUNC(sub_83CD0E54);
PPC_FUNC_IMPL(__imp__sub_83CD0E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0E58"))) PPC_WEAK_FUNC(sub_83CD0E58);
PPC_FUNC_IMPL(__imp__sub_83CD0E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22440
	ctx.r3.s64 = ctx.r11.s64 + -22440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0E64"))) PPC_WEAK_FUNC(sub_83CD0E64);
PPC_FUNC_IMPL(__imp__sub_83CD0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0E68"))) PPC_WEAK_FUNC(sub_83CD0E68);
PPC_FUNC_IMPL(__imp__sub_83CD0E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22432
	ctx.r3.s64 = ctx.r11.s64 + -22432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0E74"))) PPC_WEAK_FUNC(sub_83CD0E74);
PPC_FUNC_IMPL(__imp__sub_83CD0E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0E78"))) PPC_WEAK_FUNC(sub_83CD0E78);
PPC_FUNC_IMPL(__imp__sub_83CD0E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22424
	ctx.r3.s64 = ctx.r11.s64 + -22424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0E84"))) PPC_WEAK_FUNC(sub_83CD0E84);
PPC_FUNC_IMPL(__imp__sub_83CD0E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0E88"))) PPC_WEAK_FUNC(sub_83CD0E88);
PPC_FUNC_IMPL(__imp__sub_83CD0E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22416
	ctx.r3.s64 = ctx.r11.s64 + -22416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0E94"))) PPC_WEAK_FUNC(sub_83CD0E94);
PPC_FUNC_IMPL(__imp__sub_83CD0E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0E98"))) PPC_WEAK_FUNC(sub_83CD0E98);
PPC_FUNC_IMPL(__imp__sub_83CD0E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22408
	ctx.r3.s64 = ctx.r11.s64 + -22408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0EA4"))) PPC_WEAK_FUNC(sub_83CD0EA4);
PPC_FUNC_IMPL(__imp__sub_83CD0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0EA8"))) PPC_WEAK_FUNC(sub_83CD0EA8);
PPC_FUNC_IMPL(__imp__sub_83CD0EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22400
	ctx.r3.s64 = ctx.r11.s64 + -22400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0EB4"))) PPC_WEAK_FUNC(sub_83CD0EB4);
PPC_FUNC_IMPL(__imp__sub_83CD0EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0EB8"))) PPC_WEAK_FUNC(sub_83CD0EB8);
PPC_FUNC_IMPL(__imp__sub_83CD0EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22392
	ctx.r3.s64 = ctx.r11.s64 + -22392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0EC4"))) PPC_WEAK_FUNC(sub_83CD0EC4);
PPC_FUNC_IMPL(__imp__sub_83CD0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0EC8"))) PPC_WEAK_FUNC(sub_83CD0EC8);
PPC_FUNC_IMPL(__imp__sub_83CD0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0ED4"))) PPC_WEAK_FUNC(sub_83CD0ED4);
PPC_FUNC_IMPL(__imp__sub_83CD0ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0ED8"))) PPC_WEAK_FUNC(sub_83CD0ED8);
PPC_FUNC_IMPL(__imp__sub_83CD0ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22376
	ctx.r3.s64 = ctx.r11.s64 + -22376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0EE4"))) PPC_WEAK_FUNC(sub_83CD0EE4);
PPC_FUNC_IMPL(__imp__sub_83CD0EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0EE8"))) PPC_WEAK_FUNC(sub_83CD0EE8);
PPC_FUNC_IMPL(__imp__sub_83CD0EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22368
	ctx.r3.s64 = ctx.r11.s64 + -22368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0EF4"))) PPC_WEAK_FUNC(sub_83CD0EF4);
PPC_FUNC_IMPL(__imp__sub_83CD0EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0EF8"))) PPC_WEAK_FUNC(sub_83CD0EF8);
PPC_FUNC_IMPL(__imp__sub_83CD0EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22360
	ctx.r3.s64 = ctx.r11.s64 + -22360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0F04"))) PPC_WEAK_FUNC(sub_83CD0F04);
PPC_FUNC_IMPL(__imp__sub_83CD0F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0F08"))) PPC_WEAK_FUNC(sub_83CD0F08);
PPC_FUNC_IMPL(__imp__sub_83CD0F08) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-8112
	ctx.r7.s64 = ctx.r8.s64 + -8112;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-8112(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8112);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-8112(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8112, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD0F30"))) PPC_WEAK_FUNC(sub_83CD0F30);
PPC_FUNC_IMPL(__imp__sub_83CD0F30) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-1844
	ctx.r6.s64 = ctx.r7.s64 + -1844;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
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
	// lwz r8,-8112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8112);
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

__attribute__((alias("__imp__sub_83CD0F78"))) PPC_WEAK_FUNC(sub_83CD0F78);
PPC_FUNC_IMPL(__imp__sub_83CD0F78) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// bl 0x83523120
	ctx.lr = 0x83CD0F90;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22352
	ctx.r3.s64 = ctx.r10.s64 + -22352;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0F9C;
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

__attribute__((alias("__imp__sub_83CD0FAC"))) PPC_WEAK_FUNC(sub_83CD0FAC);
PPC_FUNC_IMPL(__imp__sub_83CD0FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0FB0"))) PPC_WEAK_FUNC(sub_83CD0FB0);
PPC_FUNC_IMPL(__imp__sub_83CD0FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22336
	ctx.r3.s64 = ctx.r11.s64 + -22336;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD0FBC"))) PPC_WEAK_FUNC(sub_83CD0FBC);
PPC_FUNC_IMPL(__imp__sub_83CD0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0FC0"))) PPC_WEAK_FUNC(sub_83CD0FC0);
PPC_FUNC_IMPL(__imp__sub_83CD0FC0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// bl 0x8259af80
	ctx.lr = 0x83CD0FD8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22320
	ctx.r3.s64 = ctx.r10.s64 + -22320;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD0FE4;
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

__attribute__((alias("__imp__sub_83CD0FF4"))) PPC_WEAK_FUNC(sub_83CD0FF4);
PPC_FUNC_IMPL(__imp__sub_83CD0FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD0FF8"))) PPC_WEAK_FUNC(sub_83CD0FF8);
PPC_FUNC_IMPL(__imp__sub_83CD0FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-8124
	ctx.r11.s64 = ctx.r8.s64 + -8124;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-1868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1868);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22328
	ctx.r3.s64 = ctx.r6.s64 + -22328;
	// stw r10,-8124(r8)
	PPC_STORE_U32(ctx.r8.u32 + -8124, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1028"))) PPC_WEAK_FUNC(sub_83CD1028);
PPC_FUNC_IMPL(__imp__sub_83CD1028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22312
	ctx.r3.s64 = ctx.r11.s64 + -22312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1034"))) PPC_WEAK_FUNC(sub_83CD1034);
PPC_FUNC_IMPL(__imp__sub_83CD1034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1038"))) PPC_WEAK_FUNC(sub_83CD1038);
PPC_FUNC_IMPL(__imp__sub_83CD1038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22304
	ctx.r3.s64 = ctx.r11.s64 + -22304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1044"))) PPC_WEAK_FUNC(sub_83CD1044);
PPC_FUNC_IMPL(__imp__sub_83CD1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1048"))) PPC_WEAK_FUNC(sub_83CD1048);
PPC_FUNC_IMPL(__imp__sub_83CD1048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22296
	ctx.r3.s64 = ctx.r11.s64 + -22296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1054"))) PPC_WEAK_FUNC(sub_83CD1054);
PPC_FUNC_IMPL(__imp__sub_83CD1054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1058"))) PPC_WEAK_FUNC(sub_83CD1058);
PPC_FUNC_IMPL(__imp__sub_83CD1058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22288
	ctx.r3.s64 = ctx.r11.s64 + -22288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1064"))) PPC_WEAK_FUNC(sub_83CD1064);
PPC_FUNC_IMPL(__imp__sub_83CD1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1068"))) PPC_WEAK_FUNC(sub_83CD1068);
PPC_FUNC_IMPL(__imp__sub_83CD1068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22280
	ctx.r3.s64 = ctx.r11.s64 + -22280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1074"))) PPC_WEAK_FUNC(sub_83CD1074);
PPC_FUNC_IMPL(__imp__sub_83CD1074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1078"))) PPC_WEAK_FUNC(sub_83CD1078);
PPC_FUNC_IMPL(__imp__sub_83CD1078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22272
	ctx.r3.s64 = ctx.r11.s64 + -22272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1084"))) PPC_WEAK_FUNC(sub_83CD1084);
PPC_FUNC_IMPL(__imp__sub_83CD1084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1088"))) PPC_WEAK_FUNC(sub_83CD1088);
PPC_FUNC_IMPL(__imp__sub_83CD1088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22264
	ctx.r3.s64 = ctx.r11.s64 + -22264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1094"))) PPC_WEAK_FUNC(sub_83CD1094);
PPC_FUNC_IMPL(__imp__sub_83CD1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1098"))) PPC_WEAK_FUNC(sub_83CD1098);
PPC_FUNC_IMPL(__imp__sub_83CD1098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22256
	ctx.r3.s64 = ctx.r11.s64 + -22256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD10A4"))) PPC_WEAK_FUNC(sub_83CD10A4);
PPC_FUNC_IMPL(__imp__sub_83CD10A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD10A8"))) PPC_WEAK_FUNC(sub_83CD10A8);
PPC_FUNC_IMPL(__imp__sub_83CD10A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD10B4"))) PPC_WEAK_FUNC(sub_83CD10B4);
PPC_FUNC_IMPL(__imp__sub_83CD10B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD10B8"))) PPC_WEAK_FUNC(sub_83CD10B8);
PPC_FUNC_IMPL(__imp__sub_83CD10B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22240
	ctx.r3.s64 = ctx.r11.s64 + -22240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD10C4"))) PPC_WEAK_FUNC(sub_83CD10C4);
PPC_FUNC_IMPL(__imp__sub_83CD10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD10C8"))) PPC_WEAK_FUNC(sub_83CD10C8);
PPC_FUNC_IMPL(__imp__sub_83CD10C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22232
	ctx.r3.s64 = ctx.r11.s64 + -22232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD10D4"))) PPC_WEAK_FUNC(sub_83CD10D4);
PPC_FUNC_IMPL(__imp__sub_83CD10D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD10D8"))) PPC_WEAK_FUNC(sub_83CD10D8);
PPC_FUNC_IMPL(__imp__sub_83CD10D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22224
	ctx.r3.s64 = ctx.r11.s64 + -22224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD10E4"))) PPC_WEAK_FUNC(sub_83CD10E4);
PPC_FUNC_IMPL(__imp__sub_83CD10E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD10E8"))) PPC_WEAK_FUNC(sub_83CD10E8);
PPC_FUNC_IMPL(__imp__sub_83CD10E8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// bl 0x83523120
	ctx.lr = 0x83CD1100;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22216
	ctx.r3.s64 = ctx.r10.s64 + -22216;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD110C;
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

__attribute__((alias("__imp__sub_83CD111C"))) PPC_WEAK_FUNC(sub_83CD111C);
PPC_FUNC_IMPL(__imp__sub_83CD111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1120"))) PPC_WEAK_FUNC(sub_83CD1120);
PPC_FUNC_IMPL(__imp__sub_83CD1120) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,-7744
	ctx.r7.s64 = ctx.r8.s64 + -7744;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-7744(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -7744);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,-7744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7744, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1148"))) PPC_WEAK_FUNC(sub_83CD1148);
PPC_FUNC_IMPL(__imp__sub_83CD1148) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// lis r5,-31769
	ctx.r5.s64 = -2082013184;
	// addi r6,r7,-1716
	ctx.r6.s64 = ctx.r7.s64 + -1716;
	// lis r3,-31743
	ctx.r3.s64 = -2080309248;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-1788(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -1788);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,-7744(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -7744);
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
	// std r9,-1716(r7)
	PPC_STORE_U64(ctx.r7.u32 + -1716, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83CD1190"))) PPC_WEAK_FUNC(sub_83CD1190);
PPC_FUNC_IMPL(__imp__sub_83CD1190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22200
	ctx.r3.s64 = ctx.r11.s64 + -22200;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD119C"))) PPC_WEAK_FUNC(sub_83CD119C);
PPC_FUNC_IMPL(__imp__sub_83CD119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD11A0"))) PPC_WEAK_FUNC(sub_83CD11A0);
PPC_FUNC_IMPL(__imp__sub_83CD11A0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7736
	ctx.r3.s64 = ctx.r11.s64 + -7736;
	// bl 0x8259af80
	ctx.lr = 0x83CD11B8;
	sub_8259AF80(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22184
	ctx.r3.s64 = ctx.r10.s64 + -22184;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD11C4;
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

__attribute__((alias("__imp__sub_83CD11D4"))) PPC_WEAK_FUNC(sub_83CD11D4);
PPC_FUNC_IMPL(__imp__sub_83CD11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD11D8"))) PPC_WEAK_FUNC(sub_83CD11D8);
PPC_FUNC_IMPL(__imp__sub_83CD11D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,-7756
	ctx.r11.s64 = ctx.r8.s64 + -7756;
	// lis r6,-31785
	ctx.r6.s64 = -2083061760;
	// lwz r10,-1740(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1740);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-22192
	ctx.r3.s64 = ctx.r6.s64 + -22192;
	// stw r10,-7756(r8)
	PPC_STORE_U32(ctx.r8.u32 + -7756, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1208"))) PPC_WEAK_FUNC(sub_83CD1208);
PPC_FUNC_IMPL(__imp__sub_83CD1208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1214"))) PPC_WEAK_FUNC(sub_83CD1214);
PPC_FUNC_IMPL(__imp__sub_83CD1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1218"))) PPC_WEAK_FUNC(sub_83CD1218);
PPC_FUNC_IMPL(__imp__sub_83CD1218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1224"))) PPC_WEAK_FUNC(sub_83CD1224);
PPC_FUNC_IMPL(__imp__sub_83CD1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1228"))) PPC_WEAK_FUNC(sub_83CD1228);
PPC_FUNC_IMPL(__imp__sub_83CD1228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22160
	ctx.r3.s64 = ctx.r11.s64 + -22160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1234"))) PPC_WEAK_FUNC(sub_83CD1234);
PPC_FUNC_IMPL(__imp__sub_83CD1234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1238"))) PPC_WEAK_FUNC(sub_83CD1238);
PPC_FUNC_IMPL(__imp__sub_83CD1238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22152
	ctx.r3.s64 = ctx.r11.s64 + -22152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1244"))) PPC_WEAK_FUNC(sub_83CD1244);
PPC_FUNC_IMPL(__imp__sub_83CD1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1248"))) PPC_WEAK_FUNC(sub_83CD1248);
PPC_FUNC_IMPL(__imp__sub_83CD1248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22144
	ctx.r3.s64 = ctx.r11.s64 + -22144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1254"))) PPC_WEAK_FUNC(sub_83CD1254);
PPC_FUNC_IMPL(__imp__sub_83CD1254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1258"))) PPC_WEAK_FUNC(sub_83CD1258);
PPC_FUNC_IMPL(__imp__sub_83CD1258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22136
	ctx.r3.s64 = ctx.r11.s64 + -22136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1264"))) PPC_WEAK_FUNC(sub_83CD1264);
PPC_FUNC_IMPL(__imp__sub_83CD1264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1268"))) PPC_WEAK_FUNC(sub_83CD1268);
PPC_FUNC_IMPL(__imp__sub_83CD1268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22128
	ctx.r3.s64 = ctx.r11.s64 + -22128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1274"))) PPC_WEAK_FUNC(sub_83CD1274);
PPC_FUNC_IMPL(__imp__sub_83CD1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1278"))) PPC_WEAK_FUNC(sub_83CD1278);
PPC_FUNC_IMPL(__imp__sub_83CD1278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1284"))) PPC_WEAK_FUNC(sub_83CD1284);
PPC_FUNC_IMPL(__imp__sub_83CD1284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1288"))) PPC_WEAK_FUNC(sub_83CD1288);
PPC_FUNC_IMPL(__imp__sub_83CD1288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22112
	ctx.r3.s64 = ctx.r11.s64 + -22112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1294"))) PPC_WEAK_FUNC(sub_83CD1294);
PPC_FUNC_IMPL(__imp__sub_83CD1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1298"))) PPC_WEAK_FUNC(sub_83CD1298);
PPC_FUNC_IMPL(__imp__sub_83CD1298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22104
	ctx.r3.s64 = ctx.r11.s64 + -22104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD12A4"))) PPC_WEAK_FUNC(sub_83CD12A4);
PPC_FUNC_IMPL(__imp__sub_83CD12A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD12A8"))) PPC_WEAK_FUNC(sub_83CD12A8);
PPC_FUNC_IMPL(__imp__sub_83CD12A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22096
	ctx.r3.s64 = ctx.r11.s64 + -22096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD12B4"))) PPC_WEAK_FUNC(sub_83CD12B4);
PPC_FUNC_IMPL(__imp__sub_83CD12B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD12B8"))) PPC_WEAK_FUNC(sub_83CD12B8);
PPC_FUNC_IMPL(__imp__sub_83CD12B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD12C4"))) PPC_WEAK_FUNC(sub_83CD12C4);
PPC_FUNC_IMPL(__imp__sub_83CD12C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD12C8"))) PPC_WEAK_FUNC(sub_83CD12C8);
PPC_FUNC_IMPL(__imp__sub_83CD12C8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7387
	ctx.r3.s64 = ctx.r11.s64 + -7387;
	// bl 0x83523120
	ctx.lr = 0x83CD12E0;
	sub_83523120(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22080
	ctx.r3.s64 = ctx.r10.s64 + -22080;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD12EC;
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

__attribute__((alias("__imp__sub_83CD12FC"))) PPC_WEAK_FUNC(sub_83CD12FC);
PPC_FUNC_IMPL(__imp__sub_83CD12FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1300"))) PPC_WEAK_FUNC(sub_83CD1300);
PPC_FUNC_IMPL(__imp__sub_83CD1300) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// bl 0x82596fa8
	ctx.lr = 0x83CD1318;
	sub_82596FA8(ctx, base);
	// lis r10,-31785
	ctx.r10.s64 = -2083061760;
	// addi r3,r10,-22064
	ctx.r3.s64 = ctx.r10.s64 + -22064;
	// bl 0x831cdcc8
	ctx.lr = 0x83CD1324;
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

__attribute__((alias("__imp__sub_83CD1334"))) PPC_WEAK_FUNC(sub_83CD1334);
PPC_FUNC_IMPL(__imp__sub_83CD1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1338"))) PPC_WEAK_FUNC(sub_83CD1338);
PPC_FUNC_IMPL(__imp__sub_83CD1338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22048
	ctx.r3.s64 = ctx.r11.s64 + -22048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1344"))) PPC_WEAK_FUNC(sub_83CD1344);
PPC_FUNC_IMPL(__imp__sub_83CD1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1348"))) PPC_WEAK_FUNC(sub_83CD1348);
PPC_FUNC_IMPL(__imp__sub_83CD1348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1354"))) PPC_WEAK_FUNC(sub_83CD1354);
PPC_FUNC_IMPL(__imp__sub_83CD1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1358"))) PPC_WEAK_FUNC(sub_83CD1358);
PPC_FUNC_IMPL(__imp__sub_83CD1358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22032
	ctx.r3.s64 = ctx.r11.s64 + -22032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1364"))) PPC_WEAK_FUNC(sub_83CD1364);
PPC_FUNC_IMPL(__imp__sub_83CD1364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1368"))) PPC_WEAK_FUNC(sub_83CD1368);
PPC_FUNC_IMPL(__imp__sub_83CD1368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1374"))) PPC_WEAK_FUNC(sub_83CD1374);
PPC_FUNC_IMPL(__imp__sub_83CD1374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1378"))) PPC_WEAK_FUNC(sub_83CD1378);
PPC_FUNC_IMPL(__imp__sub_83CD1378) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1384"))) PPC_WEAK_FUNC(sub_83CD1384);
PPC_FUNC_IMPL(__imp__sub_83CD1384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1388"))) PPC_WEAK_FUNC(sub_83CD1388);
PPC_FUNC_IMPL(__imp__sub_83CD1388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22008
	ctx.r3.s64 = ctx.r11.s64 + -22008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD1394"))) PPC_WEAK_FUNC(sub_83CD1394);
PPC_FUNC_IMPL(__imp__sub_83CD1394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD1398"))) PPC_WEAK_FUNC(sub_83CD1398);
PPC_FUNC_IMPL(__imp__sub_83CD1398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-22000
	ctx.r3.s64 = ctx.r11.s64 + -22000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD13A4"))) PPC_WEAK_FUNC(sub_83CD13A4);
PPC_FUNC_IMPL(__imp__sub_83CD13A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD13A8"))) PPC_WEAK_FUNC(sub_83CD13A8);
PPC_FUNC_IMPL(__imp__sub_83CD13A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21992
	ctx.r3.s64 = ctx.r11.s64 + -21992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD13B4"))) PPC_WEAK_FUNC(sub_83CD13B4);
PPC_FUNC_IMPL(__imp__sub_83CD13B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD13B8"))) PPC_WEAK_FUNC(sub_83CD13B8);
PPC_FUNC_IMPL(__imp__sub_83CD13B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21984
	ctx.r3.s64 = ctx.r11.s64 + -21984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD13C4"))) PPC_WEAK_FUNC(sub_83CD13C4);
PPC_FUNC_IMPL(__imp__sub_83CD13C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD13C8"))) PPC_WEAK_FUNC(sub_83CD13C8);
PPC_FUNC_IMPL(__imp__sub_83CD13C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21976
	ctx.r3.s64 = ctx.r11.s64 + -21976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD13D4"))) PPC_WEAK_FUNC(sub_83CD13D4);
PPC_FUNC_IMPL(__imp__sub_83CD13D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD13D8"))) PPC_WEAK_FUNC(sub_83CD13D8);
PPC_FUNC_IMPL(__imp__sub_83CD13D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21968
	ctx.r3.s64 = ctx.r11.s64 + -21968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD13E4"))) PPC_WEAK_FUNC(sub_83CD13E4);
PPC_FUNC_IMPL(__imp__sub_83CD13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83CD13E8"))) PPC_WEAK_FUNC(sub_83CD13E8);
PPC_FUNC_IMPL(__imp__sub_83CD13E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31785
	ctx.r11.s64 = -2083061760;
	// addi r3,r11,-21960
	ctx.r3.s64 = ctx.r11.s64 + -21960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83CD13F4"))) PPC_WEAK_FUNC(sub_83CD13F4);
PPC_FUNC_IMPL(__imp__sub_83CD13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

