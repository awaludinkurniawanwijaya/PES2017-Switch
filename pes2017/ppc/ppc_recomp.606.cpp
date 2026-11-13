#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BA9634"))) PPC_WEAK_FUNC(sub_83BA9634);
PPC_FUNC_IMPL(__imp__sub_83BA9634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9638"))) PPC_WEAK_FUNC(sub_83BA9638);
PPC_FUNC_IMPL(__imp__sub_83BA9638) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25612
	ctx.r11.s64 = ctx.r8.s64 + 25612;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,30504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30504);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31888
	ctx.r3.s64 = ctx.r6.s64 + -31888;
	// stw r10,25612(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25612, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9668"))) PPC_WEAK_FUNC(sub_83BA9668);
PPC_FUNC_IMPL(__imp__sub_83BA9668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31872
	ctx.r3.s64 = ctx.r11.s64 + -31872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9674"))) PPC_WEAK_FUNC(sub_83BA9674);
PPC_FUNC_IMPL(__imp__sub_83BA9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9678"))) PPC_WEAK_FUNC(sub_83BA9678);
PPC_FUNC_IMPL(__imp__sub_83BA9678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31864
	ctx.r3.s64 = ctx.r11.s64 + -31864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9684"))) PPC_WEAK_FUNC(sub_83BA9684);
PPC_FUNC_IMPL(__imp__sub_83BA9684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9688"))) PPC_WEAK_FUNC(sub_83BA9688);
PPC_FUNC_IMPL(__imp__sub_83BA9688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31856
	ctx.r3.s64 = ctx.r11.s64 + -31856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9694"))) PPC_WEAK_FUNC(sub_83BA9694);
PPC_FUNC_IMPL(__imp__sub_83BA9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9698"))) PPC_WEAK_FUNC(sub_83BA9698);
PPC_FUNC_IMPL(__imp__sub_83BA9698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31848
	ctx.r3.s64 = ctx.r11.s64 + -31848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA96A4"))) PPC_WEAK_FUNC(sub_83BA96A4);
PPC_FUNC_IMPL(__imp__sub_83BA96A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA96A8"))) PPC_WEAK_FUNC(sub_83BA96A8);
PPC_FUNC_IMPL(__imp__sub_83BA96A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31840
	ctx.r3.s64 = ctx.r11.s64 + -31840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA96B4"))) PPC_WEAK_FUNC(sub_83BA96B4);
PPC_FUNC_IMPL(__imp__sub_83BA96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA96B8"))) PPC_WEAK_FUNC(sub_83BA96B8);
PPC_FUNC_IMPL(__imp__sub_83BA96B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31832
	ctx.r3.s64 = ctx.r11.s64 + -31832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA96C4"))) PPC_WEAK_FUNC(sub_83BA96C4);
PPC_FUNC_IMPL(__imp__sub_83BA96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA96C8"))) PPC_WEAK_FUNC(sub_83BA96C8);
PPC_FUNC_IMPL(__imp__sub_83BA96C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31824
	ctx.r3.s64 = ctx.r11.s64 + -31824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA96D4"))) PPC_WEAK_FUNC(sub_83BA96D4);
PPC_FUNC_IMPL(__imp__sub_83BA96D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA96D8"))) PPC_WEAK_FUNC(sub_83BA96D8);
PPC_FUNC_IMPL(__imp__sub_83BA96D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31816
	ctx.r3.s64 = ctx.r11.s64 + -31816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA96E4"))) PPC_WEAK_FUNC(sub_83BA96E4);
PPC_FUNC_IMPL(__imp__sub_83BA96E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA96E8"))) PPC_WEAK_FUNC(sub_83BA96E8);
PPC_FUNC_IMPL(__imp__sub_83BA96E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31808
	ctx.r3.s64 = ctx.r11.s64 + -31808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA96F4"))) PPC_WEAK_FUNC(sub_83BA96F4);
PPC_FUNC_IMPL(__imp__sub_83BA96F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA96F8"))) PPC_WEAK_FUNC(sub_83BA96F8);
PPC_FUNC_IMPL(__imp__sub_83BA96F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31800
	ctx.r3.s64 = ctx.r11.s64 + -31800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9704"))) PPC_WEAK_FUNC(sub_83BA9704);
PPC_FUNC_IMPL(__imp__sub_83BA9704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9708"))) PPC_WEAK_FUNC(sub_83BA9708);
PPC_FUNC_IMPL(__imp__sub_83BA9708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31792
	ctx.r3.s64 = ctx.r11.s64 + -31792;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9714"))) PPC_WEAK_FUNC(sub_83BA9714);
PPC_FUNC_IMPL(__imp__sub_83BA9714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9718"))) PPC_WEAK_FUNC(sub_83BA9718);
PPC_FUNC_IMPL(__imp__sub_83BA9718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31784
	ctx.r3.s64 = ctx.r11.s64 + -31784;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9724"))) PPC_WEAK_FUNC(sub_83BA9724);
PPC_FUNC_IMPL(__imp__sub_83BA9724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9728"))) PPC_WEAK_FUNC(sub_83BA9728);
PPC_FUNC_IMPL(__imp__sub_83BA9728) {
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
	// addi r3,r11,25976
	ctx.r3.s64 = ctx.r11.s64 + 25976;
	// bl 0x83523120
	ctx.lr = 0x83BA9740;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31776
	ctx.r3.s64 = ctx.r10.s64 + -31776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA974C;
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

__attribute__((alias("__imp__sub_83BA975C"))) PPC_WEAK_FUNC(sub_83BA975C);
PPC_FUNC_IMPL(__imp__sub_83BA975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9760"))) PPC_WEAK_FUNC(sub_83BA9760);
PPC_FUNC_IMPL(__imp__sub_83BA9760) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,25992
	ctx.r7.s64 = ctx.r8.s64 + 25992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,25992(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25992);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,25992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25992, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9788"))) PPC_WEAK_FUNC(sub_83BA9788);
PPC_FUNC_IMPL(__imp__sub_83BA9788) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,30664
	ctx.r6.s64 = ctx.r7.s64 + 30664;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30592(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30592);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,25992(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 25992);
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
	// std r9,30664(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30664, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA97D0"))) PPC_WEAK_FUNC(sub_83BA97D0);
PPC_FUNC_IMPL(__imp__sub_83BA97D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31760
	ctx.r3.s64 = ctx.r11.s64 + -31760;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA97DC"))) PPC_WEAK_FUNC(sub_83BA97DC);
PPC_FUNC_IMPL(__imp__sub_83BA97DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA97E0"))) PPC_WEAK_FUNC(sub_83BA97E0);
PPC_FUNC_IMPL(__imp__sub_83BA97E0) {
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
	// addi r3,r11,26000
	ctx.r3.s64 = ctx.r11.s64 + 26000;
	// bl 0x8259af80
	ctx.lr = 0x83BA97F8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31744
	ctx.r3.s64 = ctx.r10.s64 + -31744;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9804;
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

__attribute__((alias("__imp__sub_83BA9814"))) PPC_WEAK_FUNC(sub_83BA9814);
PPC_FUNC_IMPL(__imp__sub_83BA9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9818"))) PPC_WEAK_FUNC(sub_83BA9818);
PPC_FUNC_IMPL(__imp__sub_83BA9818) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,25980
	ctx.r11.s64 = ctx.r8.s64 + 25980;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,30640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30640);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31752
	ctx.r3.s64 = ctx.r6.s64 + -31752;
	// stw r10,25980(r8)
	PPC_STORE_U32(ctx.r8.u32 + 25980, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9848"))) PPC_WEAK_FUNC(sub_83BA9848);
PPC_FUNC_IMPL(__imp__sub_83BA9848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31736
	ctx.r3.s64 = ctx.r11.s64 + -31736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9854"))) PPC_WEAK_FUNC(sub_83BA9854);
PPC_FUNC_IMPL(__imp__sub_83BA9854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9858"))) PPC_WEAK_FUNC(sub_83BA9858);
PPC_FUNC_IMPL(__imp__sub_83BA9858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31728
	ctx.r3.s64 = ctx.r11.s64 + -31728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9864"))) PPC_WEAK_FUNC(sub_83BA9864);
PPC_FUNC_IMPL(__imp__sub_83BA9864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9868"))) PPC_WEAK_FUNC(sub_83BA9868);
PPC_FUNC_IMPL(__imp__sub_83BA9868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31720
	ctx.r3.s64 = ctx.r11.s64 + -31720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9874"))) PPC_WEAK_FUNC(sub_83BA9874);
PPC_FUNC_IMPL(__imp__sub_83BA9874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9878"))) PPC_WEAK_FUNC(sub_83BA9878);
PPC_FUNC_IMPL(__imp__sub_83BA9878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31712
	ctx.r3.s64 = ctx.r11.s64 + -31712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9884"))) PPC_WEAK_FUNC(sub_83BA9884);
PPC_FUNC_IMPL(__imp__sub_83BA9884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9888"))) PPC_WEAK_FUNC(sub_83BA9888);
PPC_FUNC_IMPL(__imp__sub_83BA9888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9894"))) PPC_WEAK_FUNC(sub_83BA9894);
PPC_FUNC_IMPL(__imp__sub_83BA9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9898"))) PPC_WEAK_FUNC(sub_83BA9898);
PPC_FUNC_IMPL(__imp__sub_83BA9898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31696
	ctx.r3.s64 = ctx.r11.s64 + -31696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA98A4"))) PPC_WEAK_FUNC(sub_83BA98A4);
PPC_FUNC_IMPL(__imp__sub_83BA98A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA98A8"))) PPC_WEAK_FUNC(sub_83BA98A8);
PPC_FUNC_IMPL(__imp__sub_83BA98A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31688
	ctx.r3.s64 = ctx.r11.s64 + -31688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA98B4"))) PPC_WEAK_FUNC(sub_83BA98B4);
PPC_FUNC_IMPL(__imp__sub_83BA98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA98B8"))) PPC_WEAK_FUNC(sub_83BA98B8);
PPC_FUNC_IMPL(__imp__sub_83BA98B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31680
	ctx.r3.s64 = ctx.r11.s64 + -31680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA98C4"))) PPC_WEAK_FUNC(sub_83BA98C4);
PPC_FUNC_IMPL(__imp__sub_83BA98C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA98C8"))) PPC_WEAK_FUNC(sub_83BA98C8);
PPC_FUNC_IMPL(__imp__sub_83BA98C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31672
	ctx.r3.s64 = ctx.r11.s64 + -31672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA98D4"))) PPC_WEAK_FUNC(sub_83BA98D4);
PPC_FUNC_IMPL(__imp__sub_83BA98D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA98D8"))) PPC_WEAK_FUNC(sub_83BA98D8);
PPC_FUNC_IMPL(__imp__sub_83BA98D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31664
	ctx.r3.s64 = ctx.r11.s64 + -31664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA98E4"))) PPC_WEAK_FUNC(sub_83BA98E4);
PPC_FUNC_IMPL(__imp__sub_83BA98E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA98E8"))) PPC_WEAK_FUNC(sub_83BA98E8);
PPC_FUNC_IMPL(__imp__sub_83BA98E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31656
	ctx.r3.s64 = ctx.r11.s64 + -31656;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA98F4"))) PPC_WEAK_FUNC(sub_83BA98F4);
PPC_FUNC_IMPL(__imp__sub_83BA98F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA98F8"))) PPC_WEAK_FUNC(sub_83BA98F8);
PPC_FUNC_IMPL(__imp__sub_83BA98F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31648
	ctx.r3.s64 = ctx.r11.s64 + -31648;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9904"))) PPC_WEAK_FUNC(sub_83BA9904);
PPC_FUNC_IMPL(__imp__sub_83BA9904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9908"))) PPC_WEAK_FUNC(sub_83BA9908);
PPC_FUNC_IMPL(__imp__sub_83BA9908) {
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
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// bl 0x83523120
	ctx.lr = 0x83BA9920;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31640
	ctx.r3.s64 = ctx.r10.s64 + -31640;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA992C;
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

__attribute__((alias("__imp__sub_83BA993C"))) PPC_WEAK_FUNC(sub_83BA993C);
PPC_FUNC_IMPL(__imp__sub_83BA993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9940"))) PPC_WEAK_FUNC(sub_83BA9940);
PPC_FUNC_IMPL(__imp__sub_83BA9940) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26360
	ctx.r7.s64 = ctx.r8.s64 + 26360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26360(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26360);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26360(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26360, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9968"))) PPC_WEAK_FUNC(sub_83BA9968);
PPC_FUNC_IMPL(__imp__sub_83BA9968) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,30816
	ctx.r6.s64 = ctx.r7.s64 + 30816;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30744(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30744);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26360);
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
	// std r9,30816(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30816, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA99B0"))) PPC_WEAK_FUNC(sub_83BA99B0);
PPC_FUNC_IMPL(__imp__sub_83BA99B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31624
	ctx.r3.s64 = ctx.r11.s64 + -31624;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA99BC"))) PPC_WEAK_FUNC(sub_83BA99BC);
PPC_FUNC_IMPL(__imp__sub_83BA99BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA99C0"))) PPC_WEAK_FUNC(sub_83BA99C0);
PPC_FUNC_IMPL(__imp__sub_83BA99C0) {
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
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// bl 0x8259af80
	ctx.lr = 0x83BA99D8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31608
	ctx.r3.s64 = ctx.r10.s64 + -31608;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA99E4;
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

__attribute__((alias("__imp__sub_83BA99F4"))) PPC_WEAK_FUNC(sub_83BA99F4);
PPC_FUNC_IMPL(__imp__sub_83BA99F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA99F8"))) PPC_WEAK_FUNC(sub_83BA99F8);
PPC_FUNC_IMPL(__imp__sub_83BA99F8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26348
	ctx.r11.s64 = ctx.r8.s64 + 26348;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,30792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30792);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31616
	ctx.r3.s64 = ctx.r6.s64 + -31616;
	// stw r10,26348(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26348, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A28"))) PPC_WEAK_FUNC(sub_83BA9A28);
PPC_FUNC_IMPL(__imp__sub_83BA9A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31600
	ctx.r3.s64 = ctx.r11.s64 + -31600;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A34"))) PPC_WEAK_FUNC(sub_83BA9A34);
PPC_FUNC_IMPL(__imp__sub_83BA9A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A38"))) PPC_WEAK_FUNC(sub_83BA9A38);
PPC_FUNC_IMPL(__imp__sub_83BA9A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31592
	ctx.r3.s64 = ctx.r11.s64 + -31592;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A44"))) PPC_WEAK_FUNC(sub_83BA9A44);
PPC_FUNC_IMPL(__imp__sub_83BA9A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A48"))) PPC_WEAK_FUNC(sub_83BA9A48);
PPC_FUNC_IMPL(__imp__sub_83BA9A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31584
	ctx.r3.s64 = ctx.r11.s64 + -31584;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A54"))) PPC_WEAK_FUNC(sub_83BA9A54);
PPC_FUNC_IMPL(__imp__sub_83BA9A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A58"))) PPC_WEAK_FUNC(sub_83BA9A58);
PPC_FUNC_IMPL(__imp__sub_83BA9A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31576
	ctx.r3.s64 = ctx.r11.s64 + -31576;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A64"))) PPC_WEAK_FUNC(sub_83BA9A64);
PPC_FUNC_IMPL(__imp__sub_83BA9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A68"))) PPC_WEAK_FUNC(sub_83BA9A68);
PPC_FUNC_IMPL(__imp__sub_83BA9A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31568
	ctx.r3.s64 = ctx.r11.s64 + -31568;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A74"))) PPC_WEAK_FUNC(sub_83BA9A74);
PPC_FUNC_IMPL(__imp__sub_83BA9A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A78"))) PPC_WEAK_FUNC(sub_83BA9A78);
PPC_FUNC_IMPL(__imp__sub_83BA9A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31560
	ctx.r3.s64 = ctx.r11.s64 + -31560;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A84"))) PPC_WEAK_FUNC(sub_83BA9A84);
PPC_FUNC_IMPL(__imp__sub_83BA9A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A88"))) PPC_WEAK_FUNC(sub_83BA9A88);
PPC_FUNC_IMPL(__imp__sub_83BA9A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31552
	ctx.r3.s64 = ctx.r11.s64 + -31552;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9A94"))) PPC_WEAK_FUNC(sub_83BA9A94);
PPC_FUNC_IMPL(__imp__sub_83BA9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9A98"))) PPC_WEAK_FUNC(sub_83BA9A98);
PPC_FUNC_IMPL(__imp__sub_83BA9A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31544
	ctx.r3.s64 = ctx.r11.s64 + -31544;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9AA4"))) PPC_WEAK_FUNC(sub_83BA9AA4);
PPC_FUNC_IMPL(__imp__sub_83BA9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9AA8"))) PPC_WEAK_FUNC(sub_83BA9AA8);
PPC_FUNC_IMPL(__imp__sub_83BA9AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31536
	ctx.r3.s64 = ctx.r11.s64 + -31536;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9AB4"))) PPC_WEAK_FUNC(sub_83BA9AB4);
PPC_FUNC_IMPL(__imp__sub_83BA9AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9AB8"))) PPC_WEAK_FUNC(sub_83BA9AB8);
PPC_FUNC_IMPL(__imp__sub_83BA9AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31528
	ctx.r3.s64 = ctx.r11.s64 + -31528;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9AC4"))) PPC_WEAK_FUNC(sub_83BA9AC4);
PPC_FUNC_IMPL(__imp__sub_83BA9AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9AC8"))) PPC_WEAK_FUNC(sub_83BA9AC8);
PPC_FUNC_IMPL(__imp__sub_83BA9AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31520
	ctx.r3.s64 = ctx.r11.s64 + -31520;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9AD4"))) PPC_WEAK_FUNC(sub_83BA9AD4);
PPC_FUNC_IMPL(__imp__sub_83BA9AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9AD8"))) PPC_WEAK_FUNC(sub_83BA9AD8);
PPC_FUNC_IMPL(__imp__sub_83BA9AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9AE4"))) PPC_WEAK_FUNC(sub_83BA9AE4);
PPC_FUNC_IMPL(__imp__sub_83BA9AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9AE8"))) PPC_WEAK_FUNC(sub_83BA9AE8);
PPC_FUNC_IMPL(__imp__sub_83BA9AE8) {
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
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// bl 0x83523120
	ctx.lr = 0x83BA9B00;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31504
	ctx.r3.s64 = ctx.r10.s64 + -31504;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9B0C;
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

__attribute__((alias("__imp__sub_83BA9B1C"))) PPC_WEAK_FUNC(sub_83BA9B1C);
PPC_FUNC_IMPL(__imp__sub_83BA9B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9B20"))) PPC_WEAK_FUNC(sub_83BA9B20);
PPC_FUNC_IMPL(__imp__sub_83BA9B20) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26728
	ctx.r7.s64 = ctx.r8.s64 + 26728;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26728(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26728);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26728(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26728, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9B48"))) PPC_WEAK_FUNC(sub_83BA9B48);
PPC_FUNC_IMPL(__imp__sub_83BA9B48) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,30976
	ctx.r6.s64 = ctx.r7.s64 + 30976;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,30904(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30904);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26728(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26728);
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
	// std r9,30976(r7)
	PPC_STORE_U64(ctx.r7.u32 + 30976, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9B90"))) PPC_WEAK_FUNC(sub_83BA9B90);
PPC_FUNC_IMPL(__imp__sub_83BA9B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31488
	ctx.r3.s64 = ctx.r11.s64 + -31488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9B9C"))) PPC_WEAK_FUNC(sub_83BA9B9C);
PPC_FUNC_IMPL(__imp__sub_83BA9B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9BA0"))) PPC_WEAK_FUNC(sub_83BA9BA0);
PPC_FUNC_IMPL(__imp__sub_83BA9BA0) {
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
	// addi r3,r11,26736
	ctx.r3.s64 = ctx.r11.s64 + 26736;
	// bl 0x8259af80
	ctx.lr = 0x83BA9BB8;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31472
	ctx.r3.s64 = ctx.r10.s64 + -31472;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9BC4;
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

__attribute__((alias("__imp__sub_83BA9BD4"))) PPC_WEAK_FUNC(sub_83BA9BD4);
PPC_FUNC_IMPL(__imp__sub_83BA9BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9BD8"))) PPC_WEAK_FUNC(sub_83BA9BD8);
PPC_FUNC_IMPL(__imp__sub_83BA9BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26716
	ctx.r11.s64 = ctx.r8.s64 + 26716;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,30952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30952);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31480
	ctx.r3.s64 = ctx.r6.s64 + -31480;
	// stw r10,26716(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26716, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C08"))) PPC_WEAK_FUNC(sub_83BA9C08);
PPC_FUNC_IMPL(__imp__sub_83BA9C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31464
	ctx.r3.s64 = ctx.r11.s64 + -31464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C14"))) PPC_WEAK_FUNC(sub_83BA9C14);
PPC_FUNC_IMPL(__imp__sub_83BA9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C18"))) PPC_WEAK_FUNC(sub_83BA9C18);
PPC_FUNC_IMPL(__imp__sub_83BA9C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31456
	ctx.r3.s64 = ctx.r11.s64 + -31456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C24"))) PPC_WEAK_FUNC(sub_83BA9C24);
PPC_FUNC_IMPL(__imp__sub_83BA9C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C28"))) PPC_WEAK_FUNC(sub_83BA9C28);
PPC_FUNC_IMPL(__imp__sub_83BA9C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31448
	ctx.r3.s64 = ctx.r11.s64 + -31448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C34"))) PPC_WEAK_FUNC(sub_83BA9C34);
PPC_FUNC_IMPL(__imp__sub_83BA9C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C38"))) PPC_WEAK_FUNC(sub_83BA9C38);
PPC_FUNC_IMPL(__imp__sub_83BA9C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31440
	ctx.r3.s64 = ctx.r11.s64 + -31440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C44"))) PPC_WEAK_FUNC(sub_83BA9C44);
PPC_FUNC_IMPL(__imp__sub_83BA9C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C48"))) PPC_WEAK_FUNC(sub_83BA9C48);
PPC_FUNC_IMPL(__imp__sub_83BA9C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31432
	ctx.r3.s64 = ctx.r11.s64 + -31432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C54"))) PPC_WEAK_FUNC(sub_83BA9C54);
PPC_FUNC_IMPL(__imp__sub_83BA9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C58"))) PPC_WEAK_FUNC(sub_83BA9C58);
PPC_FUNC_IMPL(__imp__sub_83BA9C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31424
	ctx.r3.s64 = ctx.r11.s64 + -31424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C64"))) PPC_WEAK_FUNC(sub_83BA9C64);
PPC_FUNC_IMPL(__imp__sub_83BA9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C68"))) PPC_WEAK_FUNC(sub_83BA9C68);
PPC_FUNC_IMPL(__imp__sub_83BA9C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31416
	ctx.r3.s64 = ctx.r11.s64 + -31416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C74"))) PPC_WEAK_FUNC(sub_83BA9C74);
PPC_FUNC_IMPL(__imp__sub_83BA9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C78"))) PPC_WEAK_FUNC(sub_83BA9C78);
PPC_FUNC_IMPL(__imp__sub_83BA9C78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31408
	ctx.r3.s64 = ctx.r11.s64 + -31408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C84"))) PPC_WEAK_FUNC(sub_83BA9C84);
PPC_FUNC_IMPL(__imp__sub_83BA9C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C88"))) PPC_WEAK_FUNC(sub_83BA9C88);
PPC_FUNC_IMPL(__imp__sub_83BA9C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31400
	ctx.r3.s64 = ctx.r11.s64 + -31400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9C94"))) PPC_WEAK_FUNC(sub_83BA9C94);
PPC_FUNC_IMPL(__imp__sub_83BA9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9C98"))) PPC_WEAK_FUNC(sub_83BA9C98);
PPC_FUNC_IMPL(__imp__sub_83BA9C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31392
	ctx.r3.s64 = ctx.r11.s64 + -31392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9CA4"))) PPC_WEAK_FUNC(sub_83BA9CA4);
PPC_FUNC_IMPL(__imp__sub_83BA9CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9CA8"))) PPC_WEAK_FUNC(sub_83BA9CA8);
PPC_FUNC_IMPL(__imp__sub_83BA9CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31384
	ctx.r3.s64 = ctx.r11.s64 + -31384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9CB4"))) PPC_WEAK_FUNC(sub_83BA9CB4);
PPC_FUNC_IMPL(__imp__sub_83BA9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9CB8"))) PPC_WEAK_FUNC(sub_83BA9CB8);
PPC_FUNC_IMPL(__imp__sub_83BA9CB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31376
	ctx.r3.s64 = ctx.r11.s64 + -31376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9CC4"))) PPC_WEAK_FUNC(sub_83BA9CC4);
PPC_FUNC_IMPL(__imp__sub_83BA9CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9CC8"))) PPC_WEAK_FUNC(sub_83BA9CC8);
PPC_FUNC_IMPL(__imp__sub_83BA9CC8) {
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
	// addi r3,r11,27080
	ctx.r3.s64 = ctx.r11.s64 + 27080;
	// bl 0x83523120
	ctx.lr = 0x83BA9CE0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31368
	ctx.r3.s64 = ctx.r10.s64 + -31368;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9CEC;
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

__attribute__((alias("__imp__sub_83BA9CFC"))) PPC_WEAK_FUNC(sub_83BA9CFC);
PPC_FUNC_IMPL(__imp__sub_83BA9CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9D00"))) PPC_WEAK_FUNC(sub_83BA9D00);
PPC_FUNC_IMPL(__imp__sub_83BA9D00) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27096
	ctx.r7.s64 = ctx.r8.s64 + 27096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27096(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27096);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27096, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9D28"))) PPC_WEAK_FUNC(sub_83BA9D28);
PPC_FUNC_IMPL(__imp__sub_83BA9D28) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,31112
	ctx.r6.s64 = ctx.r7.s64 + 31112;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31040(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31040);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27096(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27096);
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
	// std r9,31112(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31112, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9D70"))) PPC_WEAK_FUNC(sub_83BA9D70);
PPC_FUNC_IMPL(__imp__sub_83BA9D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31352
	ctx.r3.s64 = ctx.r11.s64 + -31352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9D7C"))) PPC_WEAK_FUNC(sub_83BA9D7C);
PPC_FUNC_IMPL(__imp__sub_83BA9D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9D80"))) PPC_WEAK_FUNC(sub_83BA9D80);
PPC_FUNC_IMPL(__imp__sub_83BA9D80) {
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
	// addi r3,r11,27104
	ctx.r3.s64 = ctx.r11.s64 + 27104;
	// bl 0x8259af80
	ctx.lr = 0x83BA9D98;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31336
	ctx.r3.s64 = ctx.r10.s64 + -31336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9DA4;
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

__attribute__((alias("__imp__sub_83BA9DB4"))) PPC_WEAK_FUNC(sub_83BA9DB4);
PPC_FUNC_IMPL(__imp__sub_83BA9DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9DB8"))) PPC_WEAK_FUNC(sub_83BA9DB8);
PPC_FUNC_IMPL(__imp__sub_83BA9DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27084
	ctx.r11.s64 = ctx.r8.s64 + 27084;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31088(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31088);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31344
	ctx.r3.s64 = ctx.r6.s64 + -31344;
	// stw r10,27084(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27084, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9DE8"))) PPC_WEAK_FUNC(sub_83BA9DE8);
PPC_FUNC_IMPL(__imp__sub_83BA9DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31328
	ctx.r3.s64 = ctx.r11.s64 + -31328;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9DF4"))) PPC_WEAK_FUNC(sub_83BA9DF4);
PPC_FUNC_IMPL(__imp__sub_83BA9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9DF8"))) PPC_WEAK_FUNC(sub_83BA9DF8);
PPC_FUNC_IMPL(__imp__sub_83BA9DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31320
	ctx.r3.s64 = ctx.r11.s64 + -31320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E04"))) PPC_WEAK_FUNC(sub_83BA9E04);
PPC_FUNC_IMPL(__imp__sub_83BA9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E08"))) PPC_WEAK_FUNC(sub_83BA9E08);
PPC_FUNC_IMPL(__imp__sub_83BA9E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31312
	ctx.r3.s64 = ctx.r11.s64 + -31312;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E14"))) PPC_WEAK_FUNC(sub_83BA9E14);
PPC_FUNC_IMPL(__imp__sub_83BA9E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E18"))) PPC_WEAK_FUNC(sub_83BA9E18);
PPC_FUNC_IMPL(__imp__sub_83BA9E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31304
	ctx.r3.s64 = ctx.r11.s64 + -31304;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E24"))) PPC_WEAK_FUNC(sub_83BA9E24);
PPC_FUNC_IMPL(__imp__sub_83BA9E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E28"))) PPC_WEAK_FUNC(sub_83BA9E28);
PPC_FUNC_IMPL(__imp__sub_83BA9E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31296
	ctx.r3.s64 = ctx.r11.s64 + -31296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E34"))) PPC_WEAK_FUNC(sub_83BA9E34);
PPC_FUNC_IMPL(__imp__sub_83BA9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E38"))) PPC_WEAK_FUNC(sub_83BA9E38);
PPC_FUNC_IMPL(__imp__sub_83BA9E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31288
	ctx.r3.s64 = ctx.r11.s64 + -31288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E44"))) PPC_WEAK_FUNC(sub_83BA9E44);
PPC_FUNC_IMPL(__imp__sub_83BA9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E48"))) PPC_WEAK_FUNC(sub_83BA9E48);
PPC_FUNC_IMPL(__imp__sub_83BA9E48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31280
	ctx.r3.s64 = ctx.r11.s64 + -31280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E54"))) PPC_WEAK_FUNC(sub_83BA9E54);
PPC_FUNC_IMPL(__imp__sub_83BA9E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E58"))) PPC_WEAK_FUNC(sub_83BA9E58);
PPC_FUNC_IMPL(__imp__sub_83BA9E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31272
	ctx.r3.s64 = ctx.r11.s64 + -31272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E64"))) PPC_WEAK_FUNC(sub_83BA9E64);
PPC_FUNC_IMPL(__imp__sub_83BA9E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E68"))) PPC_WEAK_FUNC(sub_83BA9E68);
PPC_FUNC_IMPL(__imp__sub_83BA9E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31264
	ctx.r3.s64 = ctx.r11.s64 + -31264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E74"))) PPC_WEAK_FUNC(sub_83BA9E74);
PPC_FUNC_IMPL(__imp__sub_83BA9E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E78"))) PPC_WEAK_FUNC(sub_83BA9E78);
PPC_FUNC_IMPL(__imp__sub_83BA9E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31256
	ctx.r3.s64 = ctx.r11.s64 + -31256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E84"))) PPC_WEAK_FUNC(sub_83BA9E84);
PPC_FUNC_IMPL(__imp__sub_83BA9E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E88"))) PPC_WEAK_FUNC(sub_83BA9E88);
PPC_FUNC_IMPL(__imp__sub_83BA9E88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31248
	ctx.r3.s64 = ctx.r11.s64 + -31248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9E94"))) PPC_WEAK_FUNC(sub_83BA9E94);
PPC_FUNC_IMPL(__imp__sub_83BA9E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9E98"))) PPC_WEAK_FUNC(sub_83BA9E98);
PPC_FUNC_IMPL(__imp__sub_83BA9E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31240
	ctx.r3.s64 = ctx.r11.s64 + -31240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9EA4"))) PPC_WEAK_FUNC(sub_83BA9EA4);
PPC_FUNC_IMPL(__imp__sub_83BA9EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9EA8"))) PPC_WEAK_FUNC(sub_83BA9EA8);
PPC_FUNC_IMPL(__imp__sub_83BA9EA8) {
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
	// addi r3,r11,27448
	ctx.r3.s64 = ctx.r11.s64 + 27448;
	// bl 0x83523120
	ctx.lr = 0x83BA9EC0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31232
	ctx.r3.s64 = ctx.r10.s64 + -31232;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9ECC;
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

__attribute__((alias("__imp__sub_83BA9EDC"))) PPC_WEAK_FUNC(sub_83BA9EDC);
PPC_FUNC_IMPL(__imp__sub_83BA9EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9EE0"))) PPC_WEAK_FUNC(sub_83BA9EE0);
PPC_FUNC_IMPL(__imp__sub_83BA9EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27464
	ctx.r7.s64 = ctx.r8.s64 + 27464;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27464(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27464);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27464(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27464, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9F08"))) PPC_WEAK_FUNC(sub_83BA9F08);
PPC_FUNC_IMPL(__imp__sub_83BA9F08) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,31320
	ctx.r6.s64 = ctx.r7.s64 + 31320;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31248(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31248);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27464(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27464);
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
	// std r9,31320(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31320, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BA9F50"))) PPC_WEAK_FUNC(sub_83BA9F50);
PPC_FUNC_IMPL(__imp__sub_83BA9F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31216
	ctx.r3.s64 = ctx.r11.s64 + -31216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9F5C"))) PPC_WEAK_FUNC(sub_83BA9F5C);
PPC_FUNC_IMPL(__imp__sub_83BA9F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9F60"))) PPC_WEAK_FUNC(sub_83BA9F60);
PPC_FUNC_IMPL(__imp__sub_83BA9F60) {
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
	// addi r3,r11,27472
	ctx.r3.s64 = ctx.r11.s64 + 27472;
	// bl 0x8259af80
	ctx.lr = 0x83BA9F78;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31200
	ctx.r3.s64 = ctx.r10.s64 + -31200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BA9F84;
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

__attribute__((alias("__imp__sub_83BA9F94"))) PPC_WEAK_FUNC(sub_83BA9F94);
PPC_FUNC_IMPL(__imp__sub_83BA9F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9F98"))) PPC_WEAK_FUNC(sub_83BA9F98);
PPC_FUNC_IMPL(__imp__sub_83BA9F98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27452
	ctx.r11.s64 = ctx.r8.s64 + 27452;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31296(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31296);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31208
	ctx.r3.s64 = ctx.r6.s64 + -31208;
	// stw r10,27452(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27452, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9FC8"))) PPC_WEAK_FUNC(sub_83BA9FC8);
PPC_FUNC_IMPL(__imp__sub_83BA9FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31192
	ctx.r3.s64 = ctx.r11.s64 + -31192;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9FD4"))) PPC_WEAK_FUNC(sub_83BA9FD4);
PPC_FUNC_IMPL(__imp__sub_83BA9FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9FD8"))) PPC_WEAK_FUNC(sub_83BA9FD8);
PPC_FUNC_IMPL(__imp__sub_83BA9FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31184
	ctx.r3.s64 = ctx.r11.s64 + -31184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9FE4"))) PPC_WEAK_FUNC(sub_83BA9FE4);
PPC_FUNC_IMPL(__imp__sub_83BA9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9FE8"))) PPC_WEAK_FUNC(sub_83BA9FE8);
PPC_FUNC_IMPL(__imp__sub_83BA9FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31176
	ctx.r3.s64 = ctx.r11.s64 + -31176;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BA9FF4"))) PPC_WEAK_FUNC(sub_83BA9FF4);
PPC_FUNC_IMPL(__imp__sub_83BA9FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BA9FF8"))) PPC_WEAK_FUNC(sub_83BA9FF8);
PPC_FUNC_IMPL(__imp__sub_83BA9FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31168
	ctx.r3.s64 = ctx.r11.s64 + -31168;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA004"))) PPC_WEAK_FUNC(sub_83BAA004);
PPC_FUNC_IMPL(__imp__sub_83BAA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA008"))) PPC_WEAK_FUNC(sub_83BAA008);
PPC_FUNC_IMPL(__imp__sub_83BAA008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31160
	ctx.r3.s64 = ctx.r11.s64 + -31160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA014"))) PPC_WEAK_FUNC(sub_83BAA014);
PPC_FUNC_IMPL(__imp__sub_83BAA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA018"))) PPC_WEAK_FUNC(sub_83BAA018);
PPC_FUNC_IMPL(__imp__sub_83BAA018) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA024"))) PPC_WEAK_FUNC(sub_83BAA024);
PPC_FUNC_IMPL(__imp__sub_83BAA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA028"))) PPC_WEAK_FUNC(sub_83BAA028);
PPC_FUNC_IMPL(__imp__sub_83BAA028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31144
	ctx.r3.s64 = ctx.r11.s64 + -31144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA034"))) PPC_WEAK_FUNC(sub_83BAA034);
PPC_FUNC_IMPL(__imp__sub_83BAA034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA038"))) PPC_WEAK_FUNC(sub_83BAA038);
PPC_FUNC_IMPL(__imp__sub_83BAA038) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31136
	ctx.r3.s64 = ctx.r11.s64 + -31136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA044"))) PPC_WEAK_FUNC(sub_83BAA044);
PPC_FUNC_IMPL(__imp__sub_83BAA044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA048"))) PPC_WEAK_FUNC(sub_83BAA048);
PPC_FUNC_IMPL(__imp__sub_83BAA048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31128
	ctx.r3.s64 = ctx.r11.s64 + -31128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA054"))) PPC_WEAK_FUNC(sub_83BAA054);
PPC_FUNC_IMPL(__imp__sub_83BAA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA058"))) PPC_WEAK_FUNC(sub_83BAA058);
PPC_FUNC_IMPL(__imp__sub_83BAA058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31120
	ctx.r3.s64 = ctx.r11.s64 + -31120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA064"))) PPC_WEAK_FUNC(sub_83BAA064);
PPC_FUNC_IMPL(__imp__sub_83BAA064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA068"))) PPC_WEAK_FUNC(sub_83BAA068);
PPC_FUNC_IMPL(__imp__sub_83BAA068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31112
	ctx.r3.s64 = ctx.r11.s64 + -31112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA074"))) PPC_WEAK_FUNC(sub_83BAA074);
PPC_FUNC_IMPL(__imp__sub_83BAA074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA078"))) PPC_WEAK_FUNC(sub_83BAA078);
PPC_FUNC_IMPL(__imp__sub_83BAA078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31104
	ctx.r3.s64 = ctx.r11.s64 + -31104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA084"))) PPC_WEAK_FUNC(sub_83BAA084);
PPC_FUNC_IMPL(__imp__sub_83BAA084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA088"))) PPC_WEAK_FUNC(sub_83BAA088);
PPC_FUNC_IMPL(__imp__sub_83BAA088) {
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
	// addi r3,r11,27912
	ctx.r3.s64 = ctx.r11.s64 + 27912;
	// bl 0x83523120
	ctx.lr = 0x83BAA0A0;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31096
	ctx.r3.s64 = ctx.r10.s64 + -31096;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA0AC;
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

__attribute__((alias("__imp__sub_83BAA0BC"))) PPC_WEAK_FUNC(sub_83BAA0BC);
PPC_FUNC_IMPL(__imp__sub_83BAA0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA0C0"))) PPC_WEAK_FUNC(sub_83BAA0C0);
PPC_FUNC_IMPL(__imp__sub_83BAA0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27928
	ctx.r7.s64 = ctx.r8.s64 + 27928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27928(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27928);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27928(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27928, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA0E8"))) PPC_WEAK_FUNC(sub_83BAA0E8);
PPC_FUNC_IMPL(__imp__sub_83BAA0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,31460
	ctx.r6.s64 = ctx.r7.s64 + 31460;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31388(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31388);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27928);
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
	// std r9,31460(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31460, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA130"))) PPC_WEAK_FUNC(sub_83BAA130);
PPC_FUNC_IMPL(__imp__sub_83BAA130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31080
	ctx.r3.s64 = ctx.r11.s64 + -31080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA13C"))) PPC_WEAK_FUNC(sub_83BAA13C);
PPC_FUNC_IMPL(__imp__sub_83BAA13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA140"))) PPC_WEAK_FUNC(sub_83BAA140);
PPC_FUNC_IMPL(__imp__sub_83BAA140) {
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
	// addi r3,r11,27936
	ctx.r3.s64 = ctx.r11.s64 + 27936;
	// bl 0x8259af80
	ctx.lr = 0x83BAA158;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-31048
	ctx.r3.s64 = ctx.r10.s64 + -31048;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA164;
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

__attribute__((alias("__imp__sub_83BAA174"))) PPC_WEAK_FUNC(sub_83BAA174);
PPC_FUNC_IMPL(__imp__sub_83BAA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA178"))) PPC_WEAK_FUNC(sub_83BAA178);
PPC_FUNC_IMPL(__imp__sub_83BAA178) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27916
	ctx.r11.s64 = ctx.r8.s64 + 27916;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31436(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31436);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-31072
	ctx.r3.s64 = ctx.r6.s64 + -31072;
	// stw r10,27916(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27916, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA1A8"))) PPC_WEAK_FUNC(sub_83BAA1A8);
PPC_FUNC_IMPL(__imp__sub_83BAA1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31040
	ctx.r3.s64 = ctx.r11.s64 + -31040;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA1B4"))) PPC_WEAK_FUNC(sub_83BAA1B4);
PPC_FUNC_IMPL(__imp__sub_83BAA1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA1B8"))) PPC_WEAK_FUNC(sub_83BAA1B8);
PPC_FUNC_IMPL(__imp__sub_83BAA1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31032
	ctx.r3.s64 = ctx.r11.s64 + -31032;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA1C4"))) PPC_WEAK_FUNC(sub_83BAA1C4);
PPC_FUNC_IMPL(__imp__sub_83BAA1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA1C8"))) PPC_WEAK_FUNC(sub_83BAA1C8);
PPC_FUNC_IMPL(__imp__sub_83BAA1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31024
	ctx.r3.s64 = ctx.r11.s64 + -31024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA1D4"))) PPC_WEAK_FUNC(sub_83BAA1D4);
PPC_FUNC_IMPL(__imp__sub_83BAA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA1D8"))) PPC_WEAK_FUNC(sub_83BAA1D8);
PPC_FUNC_IMPL(__imp__sub_83BAA1D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31016
	ctx.r3.s64 = ctx.r11.s64 + -31016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA1E4"))) PPC_WEAK_FUNC(sub_83BAA1E4);
PPC_FUNC_IMPL(__imp__sub_83BAA1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA1E8"))) PPC_WEAK_FUNC(sub_83BAA1E8);
PPC_FUNC_IMPL(__imp__sub_83BAA1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31008
	ctx.r3.s64 = ctx.r11.s64 + -31008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA1F4"))) PPC_WEAK_FUNC(sub_83BAA1F4);
PPC_FUNC_IMPL(__imp__sub_83BAA1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA1F8"))) PPC_WEAK_FUNC(sub_83BAA1F8);
PPC_FUNC_IMPL(__imp__sub_83BAA1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-31000
	ctx.r3.s64 = ctx.r11.s64 + -31000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA204"))) PPC_WEAK_FUNC(sub_83BAA204);
PPC_FUNC_IMPL(__imp__sub_83BAA204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA208"))) PPC_WEAK_FUNC(sub_83BAA208);
PPC_FUNC_IMPL(__imp__sub_83BAA208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30992
	ctx.r3.s64 = ctx.r11.s64 + -30992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA214"))) PPC_WEAK_FUNC(sub_83BAA214);
PPC_FUNC_IMPL(__imp__sub_83BAA214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA218"))) PPC_WEAK_FUNC(sub_83BAA218);
PPC_FUNC_IMPL(__imp__sub_83BAA218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30984
	ctx.r3.s64 = ctx.r11.s64 + -30984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA224"))) PPC_WEAK_FUNC(sub_83BAA224);
PPC_FUNC_IMPL(__imp__sub_83BAA224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA228"))) PPC_WEAK_FUNC(sub_83BAA228);
PPC_FUNC_IMPL(__imp__sub_83BAA228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30976
	ctx.r3.s64 = ctx.r11.s64 + -30976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA234"))) PPC_WEAK_FUNC(sub_83BAA234);
PPC_FUNC_IMPL(__imp__sub_83BAA234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA238"))) PPC_WEAK_FUNC(sub_83BAA238);
PPC_FUNC_IMPL(__imp__sub_83BAA238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30968
	ctx.r3.s64 = ctx.r11.s64 + -30968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA244"))) PPC_WEAK_FUNC(sub_83BAA244);
PPC_FUNC_IMPL(__imp__sub_83BAA244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA248"))) PPC_WEAK_FUNC(sub_83BAA248);
PPC_FUNC_IMPL(__imp__sub_83BAA248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30960
	ctx.r3.s64 = ctx.r11.s64 + -30960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA254"))) PPC_WEAK_FUNC(sub_83BAA254);
PPC_FUNC_IMPL(__imp__sub_83BAA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA258"))) PPC_WEAK_FUNC(sub_83BAA258);
PPC_FUNC_IMPL(__imp__sub_83BAA258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30952
	ctx.r3.s64 = ctx.r11.s64 + -30952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA264"))) PPC_WEAK_FUNC(sub_83BAA264);
PPC_FUNC_IMPL(__imp__sub_83BAA264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA268"))) PPC_WEAK_FUNC(sub_83BAA268);
PPC_FUNC_IMPL(__imp__sub_83BAA268) {
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
	// addi r3,r11,28280
	ctx.r3.s64 = ctx.r11.s64 + 28280;
	// bl 0x83523120
	ctx.lr = 0x83BAA280;
	sub_83523120(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA28C;
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

__attribute__((alias("__imp__sub_83BAA29C"))) PPC_WEAK_FUNC(sub_83BAA29C);
PPC_FUNC_IMPL(__imp__sub_83BAA29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA2A0"))) PPC_WEAK_FUNC(sub_83BAA2A0);
PPC_FUNC_IMPL(__imp__sub_83BAA2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28296
	ctx.r7.s64 = ctx.r8.s64 + 28296;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28296(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28296);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28296, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA2C8"))) PPC_WEAK_FUNC(sub_83BAA2C8);
PPC_FUNC_IMPL(__imp__sub_83BAA2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31778
	ctx.r7.s64 = -2082603008;
	// lis r5,-31778
	ctx.r5.s64 = -2082603008;
	// addi r6,r7,31600
	ctx.r6.s64 = ctx.r7.s64 + 31600;
	// lis r3,-31763
	ctx.r3.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,31528(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 31528);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28296);
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
	// std r9,31600(r7)
	PPC_STORE_U64(ctx.r7.u32 + 31600, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BAA310"))) PPC_WEAK_FUNC(sub_83BAA310);
PPC_FUNC_IMPL(__imp__sub_83BAA310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30928
	ctx.r3.s64 = ctx.r11.s64 + -30928;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA31C"))) PPC_WEAK_FUNC(sub_83BAA31C);
PPC_FUNC_IMPL(__imp__sub_83BAA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA320"))) PPC_WEAK_FUNC(sub_83BAA320);
PPC_FUNC_IMPL(__imp__sub_83BAA320) {
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
	// addi r3,r11,28304
	ctx.r3.s64 = ctx.r11.s64 + 28304;
	// bl 0x8259af80
	ctx.lr = 0x83BAA338;
	sub_8259AF80(ctx, base);
	// lis r10,-31791
	ctx.r10.s64 = -2083454976;
	// addi r3,r10,-30912
	ctx.r3.s64 = ctx.r10.s64 + -30912;
	// bl 0x831cdcc8
	ctx.lr = 0x83BAA344;
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

__attribute__((alias("__imp__sub_83BAA354"))) PPC_WEAK_FUNC(sub_83BAA354);
PPC_FUNC_IMPL(__imp__sub_83BAA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA358"))) PPC_WEAK_FUNC(sub_83BAA358);
PPC_FUNC_IMPL(__imp__sub_83BAA358) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31778
	ctx.r10.s64 = -2082603008;
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28284
	ctx.r11.s64 = ctx.r8.s64 + 28284;
	// lis r6,-31791
	ctx.r6.s64 = -2083454976;
	// lwz r10,31576(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31576);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-30920
	ctx.r3.s64 = ctx.r6.s64 + -30920;
	// stw r10,28284(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28284, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA388"))) PPC_WEAK_FUNC(sub_83BAA388);
PPC_FUNC_IMPL(__imp__sub_83BAA388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30904
	ctx.r3.s64 = ctx.r11.s64 + -30904;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA394"))) PPC_WEAK_FUNC(sub_83BAA394);
PPC_FUNC_IMPL(__imp__sub_83BAA394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA398"))) PPC_WEAK_FUNC(sub_83BAA398);
PPC_FUNC_IMPL(__imp__sub_83BAA398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30896
	ctx.r3.s64 = ctx.r11.s64 + -30896;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA3A4"))) PPC_WEAK_FUNC(sub_83BAA3A4);
PPC_FUNC_IMPL(__imp__sub_83BAA3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA3A8"))) PPC_WEAK_FUNC(sub_83BAA3A8);
PPC_FUNC_IMPL(__imp__sub_83BAA3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA3B4"))) PPC_WEAK_FUNC(sub_83BAA3B4);
PPC_FUNC_IMPL(__imp__sub_83BAA3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA3B8"))) PPC_WEAK_FUNC(sub_83BAA3B8);
PPC_FUNC_IMPL(__imp__sub_83BAA3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA3C4"))) PPC_WEAK_FUNC(sub_83BAA3C4);
PPC_FUNC_IMPL(__imp__sub_83BAA3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA3C8"))) PPC_WEAK_FUNC(sub_83BAA3C8);
PPC_FUNC_IMPL(__imp__sub_83BAA3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA3D4"))) PPC_WEAK_FUNC(sub_83BAA3D4);
PPC_FUNC_IMPL(__imp__sub_83BAA3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA3D8"))) PPC_WEAK_FUNC(sub_83BAA3D8);
PPC_FUNC_IMPL(__imp__sub_83BAA3D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30864
	ctx.r3.s64 = ctx.r11.s64 + -30864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA3E4"))) PPC_WEAK_FUNC(sub_83BAA3E4);
PPC_FUNC_IMPL(__imp__sub_83BAA3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA3E8"))) PPC_WEAK_FUNC(sub_83BAA3E8);
PPC_FUNC_IMPL(__imp__sub_83BAA3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30856
	ctx.r3.s64 = ctx.r11.s64 + -30856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA3F4"))) PPC_WEAK_FUNC(sub_83BAA3F4);
PPC_FUNC_IMPL(__imp__sub_83BAA3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA3F8"))) PPC_WEAK_FUNC(sub_83BAA3F8);
PPC_FUNC_IMPL(__imp__sub_83BAA3F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30848
	ctx.r3.s64 = ctx.r11.s64 + -30848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA404"))) PPC_WEAK_FUNC(sub_83BAA404);
PPC_FUNC_IMPL(__imp__sub_83BAA404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA408"))) PPC_WEAK_FUNC(sub_83BAA408);
PPC_FUNC_IMPL(__imp__sub_83BAA408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30840
	ctx.r3.s64 = ctx.r11.s64 + -30840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA414"))) PPC_WEAK_FUNC(sub_83BAA414);
PPC_FUNC_IMPL(__imp__sub_83BAA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA418"))) PPC_WEAK_FUNC(sub_83BAA418);
PPC_FUNC_IMPL(__imp__sub_83BAA418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30832
	ctx.r3.s64 = ctx.r11.s64 + -30832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA424"))) PPC_WEAK_FUNC(sub_83BAA424);
PPC_FUNC_IMPL(__imp__sub_83BAA424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA428"))) PPC_WEAK_FUNC(sub_83BAA428);
PPC_FUNC_IMPL(__imp__sub_83BAA428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30824
	ctx.r3.s64 = ctx.r11.s64 + -30824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BAA434"))) PPC_WEAK_FUNC(sub_83BAA434);
PPC_FUNC_IMPL(__imp__sub_83BAA434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BAA438"))) PPC_WEAK_FUNC(sub_83BAA438);
PPC_FUNC_IMPL(__imp__sub_83BAA438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31791
	ctx.r11.s64 = -2083454976;
	// addi r3,r11,-30816
	ctx.r3.s64 = ctx.r11.s64 + -30816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

