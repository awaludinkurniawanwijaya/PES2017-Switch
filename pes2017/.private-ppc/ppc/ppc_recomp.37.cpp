#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8254B628"))) PPC_WEAK_FUNC(sub_8254B628);
PPC_FUNC_IMPL(__imp__sub_8254B628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B644;
	sub_8253D378(ctx, base);
	// bl 0x831d16d8
	ctx.lr = 0x8254B648;
	sub_831D16D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B650;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B668"))) PPC_WEAK_FUNC(sub_8254B668);
PPC_FUNC_IMPL(__imp__sub_8254B668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B688;
	sub_8253D378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8253d378
	ctx.lr = 0x8254B698;
	sub_8253D378(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x831d17c0
	ctx.lr = 0x8254B6A0;
	sub_831D17C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B6A8;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B6C4"))) PPC_WEAK_FUNC(sub_8254B6C4);
PPC_FUNC_IMPL(__imp__sub_8254B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B6C8"))) PPC_WEAK_FUNC(sub_8254B6C8);
PPC_FUNC_IMPL(__imp__sub_8254B6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B6E4;
	sub_8253D378(ctx, base);
	// bl 0x831d18f0
	ctx.lr = 0x8254B6E8;
	sub_831D18F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B6F0;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B708"))) PPC_WEAK_FUNC(sub_8254B708);
PPC_FUNC_IMPL(__imp__sub_8254B708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B724;
	sub_8253D378(ctx, base);
	// bl 0x831d1ca8
	ctx.lr = 0x8254B728;
	sub_831D1CA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B730;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B748"))) PPC_WEAK_FUNC(sub_8254B748);
PPC_FUNC_IMPL(__imp__sub_8254B748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B768;
	sub_8253D378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8253d378
	ctx.lr = 0x8254B778;
	sub_8253D378(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x831ce4e0
	ctx.lr = 0x8254B780;
	sub_831CE4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B788;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B7A4"))) PPC_WEAK_FUNC(sub_8254B7A4);
PPC_FUNC_IMPL(__imp__sub_8254B7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B7A8"))) PPC_WEAK_FUNC(sub_8254B7A8);
PPC_FUNC_IMPL(__imp__sub_8254B7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B7C8;
	sub_8253D378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d4338
	ctx.lr = 0x8254B7D0;
	sub_831D4338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8253b3c0
	ctx.lr = 0x8254B7E0;
	sub_8253B3C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B7EC;
	sub_8253B3C0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B808"))) PPC_WEAK_FUNC(sub_8254B808);
PPC_FUNC_IMPL(__imp__sub_8254B808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B824;
	sub_8253D378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsqrt f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = sqrt(ctx.f1.f64);
	// bl 0x8253b3c0
	ctx.lr = 0x8254B830;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B848"))) PPC_WEAK_FUNC(sub_8254B848);
PPC_FUNC_IMPL(__imp__sub_8254B848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B868;
	sub_8253D378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8253d378
	ctx.lr = 0x8254B878;
	sub_8253D378(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8254B880;
	sub_831D20A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B888;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B8A4"))) PPC_WEAK_FUNC(sub_8254B8A4);
PPC_FUNC_IMPL(__imp__sub_8254B8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254B8A8"))) PPC_WEAK_FUNC(sub_8254B8A8);
PPC_FUNC_IMPL(__imp__sub_8254B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B8C4;
	sub_8253D378(ctx, base);
	// bl 0x831d1ce8
	ctx.lr = 0x8254B8C8;
	sub_831D1CE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B8D0;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B8E8"))) PPC_WEAK_FUNC(sub_8254B8E8);
PPC_FUNC_IMPL(__imp__sub_8254B8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B904;
	sub_8253D378(ctx, base);
	// bl 0x831d1e78
	ctx.lr = 0x8254B908;
	sub_831D1E78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B910;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B928"))) PPC_WEAK_FUNC(sub_8254B928);
PPC_FUNC_IMPL(__imp__sub_8254B928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B944;
	sub_8253D378(ctx, base);
	// bl 0x831d1af0
	ctx.lr = 0x8254B948;
	sub_831D1AF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B950;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B968"))) PPC_WEAK_FUNC(sub_8254B968);
PPC_FUNC_IMPL(__imp__sub_8254B968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B984;
	sub_8253D378(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,480(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 480);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B998;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B9B0"))) PPC_WEAK_FUNC(sub_8254B9B0);
PPC_FUNC_IMPL(__imp__sub_8254B9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254B9CC;
	sub_8253D378(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,488(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 488);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254B9E0;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254B9F8"))) PPC_WEAK_FUNC(sub_8254B9F8);
PPC_FUNC_IMPL(__imp__sub_8254B9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254BA14;
	sub_8253D378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d4468
	ctx.lr = 0x8254BA1C;
	sub_831D4468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254BA24;
	sub_8253B3C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8253b3e0
	ctx.lr = 0x8254BA30;
	sub_8253B3E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BA48"))) PPC_WEAK_FUNC(sub_8254BA48);
PPC_FUNC_IMPL(__imp__sub_8254BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d458
	ctx.lr = 0x8254BA68;
	sub_8253D458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d378
	ctx.lr = 0x8254BA78;
	sub_8253D378(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831d4580
	ctx.lr = 0x8254BA80;
	sub_831D4580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254BA88;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BAA4"))) PPC_WEAK_FUNC(sub_8254BAA4);
PPC_FUNC_IMPL(__imp__sub_8254BAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BAA8"))) PPC_WEAK_FUNC(sub_8254BAA8);
PPC_FUNC_IMPL(__imp__sub_8254BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254BAB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8254BAC0;
	sub_8253AA58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254BAD0;
	sub_8253D378(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x8254bb04
	if (cr6.lt) goto loc_8254BB04;
loc_8254BAE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254BAEC;
	sub_8253D378(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x8254baf8
	if (!cr6.lt) goto loc_8254BAF8;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8254BAF8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// ble cr6,0x8254bae0
	if (!cr6.gt) goto loc_8254BAE0;
loc_8254BB04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254BB10;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254BB20"))) PPC_WEAK_FUNC(sub_8254BB20);
PPC_FUNC_IMPL(__imp__sub_8254BB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254BB28;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8254BB38;
	sub_8253AA58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254BB48;
	sub_8253D378(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x8254bb7c
	if (cr6.lt) goto loc_8254BB7C;
loc_8254BB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254BB64;
	sub_8253D378(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8254bb70
	if (!cr6.gt) goto loc_8254BB70;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8254BB70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// ble cr6,0x8254bb58
	if (!cr6.gt) goto loc_8254BB58;
loc_8254BB7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254BB88;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254BB98"))) PPC_WEAK_FUNC(sub_8254BB98);
PPC_FUNC_IMPL(__imp__sub_8254BB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254BBA0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x8254BBB0;
	sub_831D4788(ctx, base);
	// lis r10,-32767
	ctx.r10.s64 = -2147418112;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mulhw r10,r3,r9
	ctx.r10.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// lfd f0,496(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 496);
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r7,14
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 14;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r10,15,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f31,f12,f0
	ctx.f31.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bl 0x8253aa58
	ctx.lr = 0x8254BC00;
	sub_8253AA58(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8254bcfc
	if (cr6.lt) goto loc_8254BCFC;
	// beq cr6,0x8254bca8
	if (cr6.eq) goto loc_8254BCA8;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x8254bc34
	if (cr6.lt) goto loc_8254BC34;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r11,r11,10808
	ctx.r11.s64 = ctx.r11.s64 + 10808;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x8253c558
	ctx.lr = 0x8254BC28;
	sub_8253C558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254BC34:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d458
	ctx.lr = 0x8254BC3C;
	sub_8253D458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d458
	ctx.lr = 0x8254BC4C;
	sub_8253D458(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x8254bc70
	if (!cr6.gt) goto loc_8254BC70;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,10808
	ctx.r11.s64 = ctx.r11.s64 + 10808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// bl 0x8253cf78
	ctx.lr = 0x8254BC70;
	sub_8253CF78(ctx, base);
loc_8254BC70:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x8254BC90;
	sub_831D1CA8(ctx, base);
	// extsw r9,r30
	ctx.r9.s64 = ctx.r30.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadd f1,f1,f11
	ctx.f1.f64 = ctx.f1.f64 + ctx.f11.f64;
	// b 0x8254bd00
	goto loc_8254BD00;
loc_8254BCA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d458
	ctx.lr = 0x8254BCB4;
	sub_8253D458(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bge cr6,0x8254bcd4
	if (!cr6.lt) goto loc_8254BCD4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,10808
	ctx.r5.s64 = ctx.r11.s64 + 10808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254BCD4;
	sub_8253CF78(ctx, base);
loc_8254BCD4:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 * ctx.f31.f64;
	// bl 0x831d1ca8
	ctx.lr = 0x8254BCEC;
	sub_831D1CA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,17056(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17056);
	// fadd f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 + ctx.f0.f64;
	// b 0x8254bd00
	goto loc_8254BD00;
loc_8254BCFC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8254BD00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254BD08;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254BD18"))) PPC_WEAK_FUNC(sub_8254BD18);
PPC_FUNC_IMPL(__imp__sub_8254BD18) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d458
	ctx.lr = 0x8254BD2C;
	sub_8253D458(ctx, base);
	// bl 0x831d4758
	ctx.lr = 0x8254BD30;
	sub_831D4758(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BD44"))) PPC_WEAK_FUNC(sub_8254BD44);
PPC_FUNC_IMPL(__imp__sub_8254BD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BD48"))) PPC_WEAK_FUNC(sub_8254BD48);
PPC_FUNC_IMPL(__imp__sub_8254BD48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,11088
	ctx.r31.s64 = ctx.r11.s64 + 11088;
	// addi r5,r10,248
	ctx.r5.s64 = ctx.r10.s64 + 248;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253d878
	ctx.lr = 0x8254BD78;
	sub_8253D878(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,504(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + 504);
	// bl 0x8253b3c0
	ctx.lr = 0x8254BD88;
	sub_8253B3C0(ctx, base);
	// addi r5,r31,-20
	ctx.r5.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254BD98;
	sub_8253BA90(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,3152(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r8.u32 + 3152);
	// bl 0x8253b3c0
	ctx.lr = 0x8254BDA8;
	sub_8253B3C0(ctx, base);
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254BDB8;
	sub_8253BA90(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b780
	ctx.lr = 0x8254BDC8;
	sub_8253B780(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254BDD8;
	sub_8253BA90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BDF4"))) PPC_WEAK_FUNC(sub_8254BDF4);
PPC_FUNC_IMPL(__imp__sub_8254BDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BDF8"))) PPC_WEAK_FUNC(sub_8254BDF8);
PPC_FUNC_IMPL(__imp__sub_8254BDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254BE18;
	sub_8253D280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8253b3e0
	ctx.lr = 0x8254BE24;
	sub_8253B3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BE3C"))) PPC_WEAK_FUNC(sub_8254BE3C);
PPC_FUNC_IMPL(__imp__sub_8254BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BE40"))) PPC_WEAK_FUNC(sub_8254BE40);
PPC_FUNC_IMPL(__imp__sub_8254BE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254BE48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254BE5C;
	sub_8253D280(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253d458
	ctx.lr = 0x8254BE70;
	sub_8253D458(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8254be84
	if (!cr6.lt) goto loc_8254BE84;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8254BE84:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254BEA4;
	sub_8253D4B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8254beb4
	if (!cr6.lt) goto loc_8254BEB4;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8254BEB4:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// bge cr6,0x8254becc
	if (!cr6.lt) goto loc_8254BECC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8254BECC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8254bedc
	if (!cr6.gt) goto loc_8254BEDC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8254BEDC:
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bgt cr6,0x8254bf08
	if (cr6.gt) goto loc_8254BF08;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8253b410
	ctx.lr = 0x8254BEFC;
	sub_8253B410(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254BF08:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19447
	ctx.r4.s64 = ctx.r11.s64 + -19447;
	// bl 0x8253b410
	ctx.lr = 0x8254BF18;
	sub_8253B410(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254BF24"))) PPC_WEAK_FUNC(sub_8254BF24);
PPC_FUNC_IMPL(__imp__sub_8254BF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BF28"))) PPC_WEAK_FUNC(sub_8254BF28);
PPC_FUNC_IMPL(__imp__sub_8254BF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254BF4C;
	sub_8253D280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254BF5C;
	sub_8253CC48(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8254bfb0
	if (cr6.eq) goto loc_8254BFB0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8254BF6C:
	// addi r9,r1,620
	ctx.r9.s64 = ctx.r1.s64 + 620;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// blt cr6,0x8254bf90
	if (cr6.lt) goto loc_8254BF90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253ca18
	ctx.lr = 0x8254BF88;
	sub_8253CA18(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8254BF90:
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254bf6c
	if (!cr6.eq) goto loc_8254BF6C;
loc_8254BFB0:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8253cb18
	ctx.lr = 0x8254BFC0;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254BFDC"))) PPC_WEAK_FUNC(sub_8254BFDC);
PPC_FUNC_IMPL(__imp__sub_8254BFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254BFE0"))) PPC_WEAK_FUNC(sub_8254BFE0);
PPC_FUNC_IMPL(__imp__sub_8254BFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254C004;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254C014;
	sub_8253CC48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254c06c
	if (cr6.eq) goto loc_8254C06C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8254C028:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254c03c
	if (cr6.lt) goto loc_8254C03C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253ca18
	ctx.lr = 0x8254C03C;
	sub_8253CA18(ctx, base);
loc_8254C03C:
	// lbzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x831d34c8
	ctx.lr = 0x8254C044;
	sub_831D34C8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x8254c028
	if (cr6.lt) goto loc_8254C028;
loc_8254C06C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb18
	ctx.lr = 0x8254C074;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C090"))) PPC_WEAK_FUNC(sub_8254C090);
PPC_FUNC_IMPL(__imp__sub_8254C090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254C0B4;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254C0C4;
	sub_8253CC48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254c11c
	if (cr6.eq) goto loc_8254C11C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8254C0D8:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254c0ec
	if (cr6.lt) goto loc_8254C0EC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253ca18
	ctx.lr = 0x8254C0EC;
	sub_8253CA18(ctx, base);
loc_8254C0EC:
	// lbzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x831d47d0
	ctx.lr = 0x8254C0F4;
	sub_831D47D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x8254c0d8
	if (cr6.lt) goto loc_8254C0D8;
loc_8254C11C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb18
	ctx.lr = 0x8254C124;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C140"))) PPC_WEAK_FUNC(sub_8254C140);
PPC_FUNC_IMPL(__imp__sub_8254C140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254C148;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254C15C;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d458
	ctx.lr = 0x8254C16C;
	sub_8253D458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254C17C;
	sub_8253CC48(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8254c1a0
	if (!cr6.gt) goto loc_8254C1A0;
loc_8254C184:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x8253ca88
	ctx.lr = 0x8254C198;
	sub_8253CA88(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x8254c184
	if (cr6.gt) goto loc_8254C184;
loc_8254C1A0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb18
	ctx.lr = 0x8254C1A8;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C1B4"))) PPC_WEAK_FUNC(sub_8254C1B4);
PPC_FUNC_IMPL(__imp__sub_8254C1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C1B8"))) PPC_WEAK_FUNC(sub_8254C1B8);
PPC_FUNC_IMPL(__imp__sub_8254C1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254C1C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254C1D4;
	sub_8253D280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254C1EC;
	sub_8253D4B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8254c200
	if (!cr6.lt) goto loc_8254C200;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8254C200:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254C220;
	sub_8253D4B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8254c230
	if (!cr6.lt) goto loc_8254C230;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8254C230:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// bgt cr6,0x8254c248
	if (cr6.gt) goto loc_8254C248;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8254C248:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8254c258
	if (!cr6.gt) goto loc_8254C258;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8254C258:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// ble cr6,0x8254c26c
	if (!cr6.gt) goto loc_8254C26C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254C26C:
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// addi r31,r10,11092
	ctx.r31.s64 = ctx.r10.s64 + 11092;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8254c294
	if (cr6.gt) goto loc_8254C294;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254C294;
	sub_8253C558(ctx, base);
loc_8254C294:
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253c670
	ctx.lr = 0x8254C2A4;
	sub_8253C670(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8254c2d0
	if (!cr6.gt) goto loc_8254C2D0;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_8254C2B8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x8253b3e0
	ctx.lr = 0x8254C2C4;
	sub_8253B3E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x8254c2b8
	if (cr6.lt) goto loc_8254C2B8;
loc_8254C2D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C2DC"))) PPC_WEAK_FUNC(sub_8254C2DC);
PPC_FUNC_IMPL(__imp__sub_8254C2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C2E0"))) PPC_WEAK_FUNC(sub_8254C2E0);
PPC_FUNC_IMPL(__imp__sub_8254C2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254C2E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8254C2F4;
	sub_8253AA58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254C304;
	sub_8253CC48(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// blt cr6,0x8254c378
	if (cr6.lt) goto loc_8254C378;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r27,r11,11140
	ctx.r27.s64 = ctx.r11.s64 + 11140;
loc_8254C318:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253d458
	ctx.lr = 0x8254C324;
	sub_8253D458(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// beq cr6,0x8254c340
	if (cr6.eq) goto loc_8254C340;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254C340;
	sub_8253CF78(ctx, base);
loc_8254C340:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,604
	ctx.r10.s64 = ctx.r1.s64 + 604;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254c35c
	if (cr6.lt) goto loc_8254C35C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253ca18
	ctx.lr = 0x8254C358;
	sub_8253CA18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8254C35C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x8254c318
	if (!cr6.gt) goto loc_8254C318;
loc_8254C378:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253cb18
	ctx.lr = 0x8254C380;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C38C"))) PPC_WEAK_FUNC(sub_8254C38C);
PPC_FUNC_IMPL(__imp__sub_8254C38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C390"))) PPC_WEAK_FUNC(sub_8254C390);
PPC_FUNC_IMPL(__imp__sub_8254C390) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8253ca88
	ctx.lr = 0x8254C3A4;
	sub_8253CA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C3B8"))) PPC_WEAK_FUNC(sub_8254C3B8);
PPC_FUNC_IMPL(__imp__sub_8254C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x8254C3D8;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253aa70
	ctx.lr = 0x8254C3E4;
	sub_8253AA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8253cc48
	ctx.lr = 0x8254C3F0;
	sub_8253CC48(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15472
	ctx.r4.s64 = ctx.r11.s64 + -15472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bf88
	ctx.lr = 0x8254C404;
	sub_8253BF88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254c41c
	if (cr6.eq) goto loc_8254C41C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11156
	ctx.r4.s64 = ctx.r11.s64 + 11156;
	// bl 0x8253c558
	ctx.lr = 0x8254C41C;
	sub_8253C558(ctx, base);
loc_8254C41C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253cb18
	ctx.lr = 0x8254C424;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C43C"))) PPC_WEAK_FUNC(sub_8254C43C);
PPC_FUNC_IMPL(__imp__sub_8254C43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C440"))) PPC_WEAK_FUNC(sub_8254C440);
PPC_FUNC_IMPL(__imp__sub_8254C440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254C448;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// beq cr6,0x8254c4e0
	if (cr6.eq) goto loc_8254C4E0;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(ctx.r11.s32, 91, xer);
	// beq cr6,0x8254c478
	if (cr6.eq) goto loc_8254C478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254C478:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x8254c488
	if (!cr6.eq) goto loc_8254C488;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8254C488:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r30,r11,11272
	ctx.r30.s64 = ctx.r11.s64 + 11272;
loc_8254C490:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254c4a8
	if (!cr6.eq) goto loc_8254C4A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8253c558
	ctx.lr = 0x8254C4A8;
	sub_8253C558(ctx, base);
loc_8254C4A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x8254c4c8
	if (!cr6.eq) goto loc_8254C4C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254c4c8
	if (cr6.eq) goto loc_8254C4C8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8254C4C8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bne cr6,0x8254c490
	if (!cr6.eq) goto loc_8254C490;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254C4E0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254c500
	if (!cr6.eq) goto loc_8254C500;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x8253c558
	ctx.lr = 0x8254C500;
	sub_8253C558(ctx, base);
loc_8254C500:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C50C"))) PPC_WEAK_FUNC(sub_8254C50C);
PPC_FUNC_IMPL(__imp__sub_8254C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C510"))) PPC_WEAK_FUNC(sub_8254C510);
PPC_FUNC_IMPL(__imp__sub_8254C510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831d34c8
	ctx.lr = 0x8254C534;
	sub_831D34C8(ctx, base);
	// addi r11,r3,-97
	ctx.r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bgt cr6,0x8254c6b0
	if (cr6.gt) goto loc_8254C6B0;
	// lis r12,-32171
	ctx.r12.s64 = -2108358656;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15016
	ctx.r12.s64 = ctx.r12.s64 + -15016;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8254C5C0;
	case 1:
		goto loc_8254C6B0;
	case 2:
		goto loc_8254C5D8;
	case 3:
		goto loc_8254C5EC;
	case 4:
		goto loc_8254C6B0;
	case 5:
		goto loc_8254C6B0;
	case 6:
		goto loc_8254C6B0;
	case 7:
		goto loc_8254C6B0;
	case 8:
		goto loc_8254C6B0;
	case 9:
		goto loc_8254C6B0;
	case 10:
		goto loc_8254C6B0;
	case 11:
		goto loc_8254C600;
	case 12:
		goto loc_8254C6B0;
	case 13:
		goto loc_8254C6B0;
	case 14:
		goto loc_8254C6B0;
	case 15:
		goto loc_8254C614;
	case 16:
		goto loc_8254C6B0;
	case 17:
		goto loc_8254C6B0;
	case 18:
		goto loc_8254C628;
	case 19:
		goto loc_8254C6B0;
	case 20:
		goto loc_8254C63C;
	case 21:
		goto loc_8254C6B0;
	case 22:
		goto loc_8254C650;
	case 23:
		goto loc_8254C668;
	case 24:
		goto loc_8254C6B0;
	case 25:
		goto loc_8254C67C;
	default:
		return;
	}
	// lwz r18,-14912(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14912);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14888(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14888);
	// lwz r18,-14868(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14868);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14848(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14848);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14828(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14828);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14808(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14808);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14788(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14788);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14768(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14768);
	// lwz r18,-14744(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14744);
	// lwz r18,-14672(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14672);
	// lwz r18,-14724(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14724);
loc_8254C5C0:
	// bl 0x831d34e0
	ctx.lr = 0x8254C5C4;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,30,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C5D8:
	// bl 0x831d34e0
	ctx.lr = 0x8254C5DC;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,26,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C5EC:
	// bl 0x831d34e0
	ctx.lr = 0x8254C5F0;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C600:
	// bl 0x831d34e0
	ctx.lr = 0x8254C604;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C614:
	// bl 0x831d34e0
	ctx.lr = 0x8254C618;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C628:
	// bl 0x831d34e0
	ctx.lr = 0x8254C62C;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C63C:
	// bl 0x831d34e0
	ctx.lr = 0x8254C640;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C650:
	// bl 0x831d34e0
	ctx.lr = 0x8254C654;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,29,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C668:
	// bl 0x831d34e0
	ctx.lr = 0x8254C66C;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// b 0x8254c684
	goto loc_8254C684;
loc_8254C67C:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8254C684:
	// bl 0x831d34e0
	ctx.lr = 0x8254C688;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254c6a4
	if (cr6.eq) goto loc_8254C6A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8254c6bc
	goto loc_8254C6BC;
loc_8254C6A4:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8254c6bc
	goto loc_8254C6BC;
loc_8254C6B0:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8254C6BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254C6D4"))) PPC_WEAK_FUNC(sub_8254C6D4);
PPC_FUNC_IMPL(__imp__sub_8254C6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C6D8"))) PPC_WEAK_FUNC(sub_8254C6D8);
PPC_FUNC_IMPL(__imp__sub_8254C6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8254C6E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x8254c704
	if (!cr6.eq) goto loc_8254C704;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8254C704:
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// bge cr6,0x8254c918
	if (!cr6.lt) goto loc_8254C918;
	// addi r27,r29,2
	ctx.r27.s64 = ctx.r29.s64 + 2;
loc_8254C714:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x8254c8c4
	if (!cr6.eq) goto loc_8254C8C4;
	// lbzu r28,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r28.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d34c8
	ctx.lr = 0x8254C730;
	sub_831D34C8(ctx, base);
	// addi r11,r3,-97
	ctx.r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bgt cr6,0x8254c8a4
	if (cr6.gt) goto loc_8254C8A4;
	// lis r12,-32171
	ctx.r12.s64 = -2108358656;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14508
	ctx.r12.s64 = ctx.r12.s64 + -14508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8254C7BC;
	case 1:
		goto loc_8254C8A4;
	case 2:
		goto loc_8254C7D4;
	case 3:
		goto loc_8254C7E8;
	case 4:
		goto loc_8254C8A4;
	case 5:
		goto loc_8254C8A4;
	case 6:
		goto loc_8254C8A4;
	case 7:
		goto loc_8254C8A4;
	case 8:
		goto loc_8254C8A4;
	case 9:
		goto loc_8254C8A4;
	case 10:
		goto loc_8254C8A4;
	case 11:
		goto loc_8254C7FC;
	case 12:
		goto loc_8254C8A4;
	case 13:
		goto loc_8254C8A4;
	case 14:
		goto loc_8254C8A4;
	case 15:
		goto loc_8254C810;
	case 16:
		goto loc_8254C8A4;
	case 17:
		goto loc_8254C8A4;
	case 18:
		goto loc_8254C824;
	case 19:
		goto loc_8254C8A4;
	case 20:
		goto loc_8254C838;
	case 21:
		goto loc_8254C8A4;
	case 22:
		goto loc_8254C84C;
	case 23:
		goto loc_8254C864;
	case 24:
		goto loc_8254C8A4;
	case 25:
		goto loc_8254C878;
	default:
		return;
	}
	// lwz r18,-14404(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14404);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14380(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14380);
	// lwz r18,-14360(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14360);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14340(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14340);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14320(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14320);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14300(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14300);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14280(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14280);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14260(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14260);
	// lwz r18,-14236(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14236);
	// lwz r18,-14172(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14172);
	// lwz r18,-14216(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -14216);
loc_8254C7BC:
	// bl 0x831d34e0
	ctx.lr = 0x8254C7C0;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,30,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C7D4:
	// bl 0x831d34e0
	ctx.lr = 0x8254C7D8;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,26,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C7E8:
	// bl 0x831d34e0
	ctx.lr = 0x8254C7EC;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C7FC:
	// bl 0x831d34e0
	ctx.lr = 0x8254C800;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C810:
	// bl 0x831d34e0
	ctx.lr = 0x8254C814;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C824:
	// bl 0x831d34e0
	ctx.lr = 0x8254C828;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C838:
	// bl 0x831d34e0
	ctx.lr = 0x8254C83C;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C84C:
	// bl 0x831d34e0
	ctx.lr = 0x8254C850;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,29,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C864:
	// bl 0x831d34e0
	ctx.lr = 0x8254C868;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// b 0x8254c880
	goto loc_8254C880;
loc_8254C878:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8254C880:
	// bl 0x831d34e0
	ctx.lr = 0x8254C884;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8254c8b0
	if (!cr6.eq) goto loc_8254C8B0;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8254c8b0
	goto loc_8254C8B0;
loc_8254C8A4:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8254C8B0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8254c908
	if (cr6.eq) goto loc_8254C908;
loc_8254C8B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254C8C4:
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// bne cr6,0x8254c8fc
	if (!cr6.eq) goto loc_8254C8FC;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// bge cr6,0x8254c8fc
	if (!cr6.lt) goto loc_8254C8FC;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// lbz r11,-2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -2);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bgt cr6,0x8254c908
	if (cr6.gt) goto loc_8254C908;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x8254c8b8
	if (!cr6.gt) goto loc_8254C8B8;
	// b 0x8254c908
	goto loc_8254C908;
loc_8254C8FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x8254c8b8
	if (cr6.eq) goto loc_8254C8B8;
loc_8254C908:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x8254c714
	if (cr6.lt) goto loc_8254C714;
loc_8254C918:
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C928"))) PPC_WEAK_FUNC(sub_8254C928);
PPC_FUNC_IMPL(__imp__sub_8254C928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8254C930;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x8254c9c4
	if (!cr6.lt) goto loc_8254C9C4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8254C958:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x8254c998
	if (cr6.eq) goto loc_8254C998;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8254c9a8
	if (cr6.eq) goto loc_8254C9A8;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x8254c988
	if (cr6.eq) goto loc_8254C988;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8254c9a0
	goto loc_8254C9A0;
loc_8254C988:
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254c6d8
	ctx.lr = 0x8254C994;
	sub_8254C6D8(ctx, base);
	// b 0x8254c9a0
	goto loc_8254C9A0;
loc_8254C998:
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// bl 0x8254c510
	ctx.lr = 0x8254C9A0;
	sub_8254C510(ctx, base);
loc_8254C9A0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254c9bc
	if (cr6.eq) goto loc_8254C9BC;
loc_8254C9A8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x8254c958
	if (cr6.lt) goto loc_8254C958;
loc_8254C9BC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x8254c9e8
	if (cr6.lt) goto loc_8254C9E8;
loc_8254C9C4:
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
loc_8254C9C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r26
	ctx.r4.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8254cb58
	ctx.lr = 0x8254C9D8;
	sub_8254CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254c9ec
	if (!cr6.eq) goto loc_8254C9EC;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8254c9c8
	if (!cr0.lt) goto loc_8254C9C8;
loc_8254C9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254C9EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254C9F4"))) PPC_WEAK_FUNC(sub_8254C9F4);
PPC_FUNC_IMPL(__imp__sub_8254C9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254C9F8"))) PPC_WEAK_FUNC(sub_8254C9F8);
PPC_FUNC_IMPL(__imp__sub_8254C9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254CA00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x8254ca30
	if (cr6.lt) goto loc_8254CA30;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,11324
	ctx.r4.s64 = ctx.r11.s64 + 11324;
	// bl 0x8253c558
	ctx.lr = 0x8254CA30;
	sub_8253C558(ctx, base);
loc_8254CA30:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r29,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r29.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bl 0x8254cb58
	ctx.lr = 0x8254CA60;
	sub_8254CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254ca74
	if (!cr6.eq) goto loc_8254CA74;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8254CA74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254CA7C"))) PPC_WEAK_FUNC(sub_8254CA7C);
PPC_FUNC_IMPL(__imp__sub_8254CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254CA80"))) PPC_WEAK_FUNC(sub_8254CA80);
PPC_FUNC_IMPL(__imp__sub_8254CA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addic. r3,r5,-49
	xer.ca = ctx.r5.u32 > 48;
	ctx.r3.s64 = ctx.r5.s64 + -49;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8254cac4
	if (cr0.lt) goto loc_8254CAC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x8254cac4
	if (!cr6.lt) goto loc_8254CAC4;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8254cad4
	if (!cr6.eq) goto loc_8254CAD4;
loc_8254CAC4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,11188
	ctx.r4.s64 = ctx.r11.s64 + 11188;
	// bl 0x8253c558
	ctx.lr = 0x8254CAD4;
	sub_8253C558(ctx, base);
loc_8254CAD4:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// blt cr6,0x8254cb3c
	if (cr6.lt) goto loc_8254CB3C;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// beq cr6,0x8254cb30
	if (cr6.eq) goto loc_8254CB30;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8254CB10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8254cb30
	if (!cr0.eq) goto loc_8254CB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x8254cb10
	if (!cr6.eq) goto loc_8254CB10;
loc_8254CB30:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 + ctx.r30.u64;
	// beq cr6,0x8254cb40
	if (cr6.eq) goto loc_8254CB40;
loc_8254CB3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254CB40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254CB58"))) PPC_WEAK_FUNC(sub_8254CB58);
PPC_FUNC_IMPL(__imp__sub_8254CB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8254CB60;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r25,r11,11304
	ctx.r25.s64 = ctx.r11.s64 + 11304;
loc_8254CB78:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bgt cr6,0x8254cd40
	if (cr6.gt) goto loc_8254CD40;
	// beq cr6,0x8254cbc0
	if (cr6.eq) goto loc_8254CBC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254ce50
	if (cr6.eq) goto loc_8254CE50;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(ctx.r11.u32, 36, xer);
	// bne cr6,0x8254cd50
	if (!cr6.eq) goto loc_8254CD50;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254cd50
	if (!cr6.eq) goto loc_8254CD50;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r29
	ctx.r3.u64 = ctx.r7.u64 & ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CBC0:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,98
	cr6.compare<uint32_t>(ctx.r11.u32, 98, xer);
	// beq cr6,0x8254cc9c
	if (cr6.eq) goto loc_8254CC9C;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, xer);
	// beq cr6,0x8254cc14
	if (cr6.eq) goto loc_8254CC14;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831d34e0
	ctx.lr = 0x8254CBDC;
	sub_831D34E0(ctx, base);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8254cd50
	if (cr6.eq) goto loc_8254CD50;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254ca80
	ctx.lr = 0x8254CC00;
	sub_8254CA80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254cc90
	if (cr6.eq) goto loc_8254CC90;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x8254cb78
	goto loc_8254CB78;
loc_8254CC14:
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// addi r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x8254cc30
	if (cr6.eq) goto loc_8254CC30;
	// addi r4,r25,40
	ctx.r4.s64 = ctx.r25.s64 + 40;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x8253c558
	ctx.lr = 0x8254CC30;
	sub_8253C558(ctx, base);
loc_8254CC30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254c440
	ctx.lr = 0x8254CC3C;
	sub_8254C440(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8254cc54
	if (!cr6.eq) goto loc_8254CC54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8254cc5c
	goto loc_8254CC5C;
loc_8254CC54:
	// lbz r11,-1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_8254CC5C:
	// addi r31,r28,-1
	ctx.r31.s64 = ctx.r28.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8254c6d8
	ctx.lr = 0x8254CC70;
	sub_8254C6D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254cc90
	if (!cr6.eq) goto loc_8254CC90;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8254c6d8
	ctx.lr = 0x8254CC88;
	sub_8254C6D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254cb78
	if (!cr6.eq) goto loc_8254CB78;
loc_8254CC90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CC9C:
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254ccb4
	if (cr6.eq) goto loc_8254CCB4;
	// lbz r11,3(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254ccc0
	if (!cr6.eq) goto loc_8254CCC0;
loc_8254CCB4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x8253c558
	ctx.lr = 0x8254CCC0;
	sub_8253C558(ctx, base);
loc_8254CCC0:
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bne cr6,0x8254cc90
	if (!cr6.eq) goto loc_8254CC90;
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8254cc90
	if (!cr6.lt) goto loc_8254CC90;
loc_8254CCF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x8254cd1c
	if (!cr6.eq) goto loc_8254CD1C;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8254cd28
	if (!cr0.eq) goto loc_8254CD28;
	// addic. r29,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r29.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x8254cc90
	if (cr0.eq) goto loc_8254CC90;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x8254cb78
	goto loc_8254CB78;
loc_8254CD1C:
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bne cr6,0x8254cd28
	if (!cr6.eq) goto loc_8254CD28;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8254CD28:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8254ccf4
	if (cr6.lt) goto loc_8254CCF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CD40:
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// beq cr6,0x8254cf9c
	if (cr6.eq) goto loc_8254CF9C;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// beq cr6,0x8254cf18
	if (cr6.eq) goto loc_8254CF18;
loc_8254CD50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254c440
	ctx.lr = 0x8254CD5C;
	sub_8254C440(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x8254cdc4
	if (!cr6.lt) goto loc_8254CDC4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x8254cdac
	if (cr6.eq) goto loc_8254CDAC;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8254cdbc
	if (cr6.eq) goto loc_8254CDBC;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x8254cd9c
	if (cr6.eq) goto loc_8254CD9C;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8254cdb4
	goto loc_8254CDB4;
loc_8254CD9C:
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8254c6d8
	ctx.lr = 0x8254CDA8;
	sub_8254C6D8(ctx, base);
	// b 0x8254cdb4
	goto loc_8254CDB4;
loc_8254CDAC:
	// lbz r4,1(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// bl 0x8254c510
	ctx.lr = 0x8254CDB4;
	sub_8254C510(ctx, base);
loc_8254CDB4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254cdc4
	if (cr6.eq) goto loc_8254CDC4;
loc_8254CDBC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8254cdc8
	goto loc_8254CDC8;
loc_8254CDC4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8254CDC8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bgt cr6,0x8254ce0c
	if (cr6.gt) goto loc_8254CE0C;
	// beq cr6,0x8254ce78
	if (cr6.eq) goto loc_8254CE78;
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x8254ce5c
	if (cr6.eq) goto loc_8254CE5C;
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(ctx.r11.u32, 43, xer);
	// bne cr6,0x8254ce14
	if (!cr6.eq) goto loc_8254CE14;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8254cc90
	if (cr6.eq) goto loc_8254CC90;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254c928
	ctx.lr = 0x8254CE04;
	sub_8254C928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CE0C:
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, xer);
	// beq cr6,0x8254ce28
	if (cr6.eq) goto loc_8254CE28;
loc_8254CE14:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8254cc90
	if (cr6.eq) goto loc_8254CC90;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8254cb78
	goto loc_8254CB78;
loc_8254CE28:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8254ce48
	if (cr6.eq) goto loc_8254CE48;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254cb58
	ctx.lr = 0x8254CE40;
	sub_8254CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254cfd0
	if (!cr6.eq) goto loc_8254CFD0;
loc_8254CE48:
	// addi r28,r27,1
	ctx.r28.s64 = ctx.r27.s64 + 1;
	// b 0x8254cb78
	goto loc_8254CB78;
loc_8254CE50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CE5C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254c928
	ctx.lr = 0x8254CE70;
	sub_8254C928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CE78:
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x8254cb58
	ctx.lr = 0x8254CE90;
	sub_8254CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254cfd0
	if (!cr6.eq) goto loc_8254CFD0;
loc_8254CE98:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8254cc90
	if (!cr6.lt) goto loc_8254CC90;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x8254cee4
	if (cr6.eq) goto loc_8254CEE4;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8254cef4
	if (cr6.eq) goto loc_8254CEF4;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x8254ced4
	if (cr6.eq) goto loc_8254CED4;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8254ceec
	goto loc_8254CEEC;
loc_8254CED4:
	// addi r5,r27,-1
	ctx.r5.s64 = ctx.r27.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8254c6d8
	ctx.lr = 0x8254CEE0;
	sub_8254C6D8(ctx, base);
	// b 0x8254ceec
	goto loc_8254CEEC;
loc_8254CEE4:
	// lbz r4,1(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// bl 0x8254c510
	ctx.lr = 0x8254CEEC;
	sub_8254C510(ctx, base);
loc_8254CEEC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254cc90
	if (cr6.eq) goto loc_8254CC90;
loc_8254CEF4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8254cb58
	ctx.lr = 0x8254CF08;
	sub_8254CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254ce98
	if (cr6.eq) goto loc_8254CE98;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CF18:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8254cf48
	if (cr0.lt) goto loc_8254CF48;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
loc_8254CF30:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8254cf58
	if (cr6.eq) goto loc_8254CF58;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x8254cf30
	if (!cr0.lt) goto loc_8254CF30;
loc_8254CF48:
	// addi r4,r25,-92
	ctx.r4.s64 = ctx.r25.s64 + -92;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x8253c558
	ctx.lr = 0x8254CF54;
	sub_8253C558(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8254CF58:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r8,r9,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// subf r7,r8,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r8.s64;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// bl 0x8254cb58
	ctx.lr = 0x8254CF84;
	sub_8254CB58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254cfd0
	if (!cr6.eq) goto loc_8254CFD0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CF9C:
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(ctx.r11.u32, 41, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x8254cfc8
	if (!cr6.eq) goto loc_8254CFC8;
	// addi r5,r28,2
	ctx.r5.s64 = ctx.r28.s64 + 2;
	// li r6,-2
	ctx.r6.s64 = -2;
	// bl 0x8254c9f8
	ctx.lr = 0x8254CFC0;
	sub_8254C9F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254CFC8:
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8254c9f8
	ctx.lr = 0x8254CFD0;
	sub_8254C9F8(ctx, base);
loc_8254CFD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254CFD8"))) PPC_WEAK_FUNC(sub_8254CFD8);
PPC_FUNC_IMPL(__imp__sub_8254CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254CFE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8254d030
	if (cr6.lt) goto loc_8254D030;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x8254d018
	if (!cr6.eq) goto loc_8254D018;
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// bl 0x8253b410
	ctx.lr = 0x8254D010;
	sub_8253B410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254D018:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r11,r11,11404
	ctx.r11.s64 = ctx.r11.s64 + 11404;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x8253c558
	ctx.lr = 0x8254D028;
	sub_8253C558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254D030:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x8254d074
	if (!cr6.eq) goto loc_8254D074;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,11404
	ctx.r4.s64 = ctx.r11.s64 + 11404;
	// bl 0x8253c558
	ctx.lr = 0x8254D054;
	sub_8253C558(ctx, base);
loc_8254D054:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8253b410
	ctx.lr = 0x8254D06C;
	sub_8253B410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254D074:
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(ctx.r29.s32, -2, xer);
	// bne cr6,0x8254d054
	if (!cr6.eq) goto loc_8254D054;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D09C;
	sub_8253B3E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D0A4"))) PPC_WEAK_FUNC(sub_8254D0A4);
PPC_FUNC_IMPL(__imp__sub_8254D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D0A8"))) PPC_WEAK_FUNC(sub_8254D0A8);
PPC_FUNC_IMPL(__imp__sub_8254D0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8254D0B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8254d0d8
	if (!cr6.eq) goto loc_8254D0D8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// bne cr6,0x8254d0dc
	if (!cr6.eq) goto loc_8254D0DC;
loc_8254D0D8:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8254D0DC:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r28,r11,11404
	ctx.r28.s64 = ctx.r11.s64 + 11404;
	// addi r5,r28,20
	ctx.r5.s64 = ctx.r28.s64 + 20;
	// bl 0x8253c670
	ctx.lr = 0x8254D0F4;
	sub_8253C670(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x8254d174
	if (!cr6.gt) goto loc_8254D174;
loc_8254D100:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8254d130
	if (cr6.lt) goto loc_8254D130;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x8254d124
	if (!cr6.eq) goto loc_8254D124;
	// subf r5,r26,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r26.s64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x8254d164
	goto loc_8254D164;
loc_8254D124:
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// bl 0x8253c558
	ctx.lr = 0x8254D12C;
	sub_8253C558(ctx, base);
	// b 0x8254d168
	goto loc_8254D168;
loc_8254D130:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x8254d180
	if (!cr6.eq) goto loc_8254D180;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8253c558
	ctx.lr = 0x8254D150;
	sub_8253C558(ctx, base);
loc_8254D150:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_8254D164:
	// bl 0x8253b410
	ctx.lr = 0x8254D168;
	sub_8253B410(ctx, base);
loc_8254D168:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, xer);
	// blt cr6,0x8254d100
	if (cr6.lt) goto loc_8254D100;
loc_8254D174:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8254D180:
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(ctx.r29.s32, -2, xer);
	// bne cr6,0x8254d150
	if (!cr6.eq) goto loc_8254D150;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D1A8;
	sub_8253B3E0(ctx, base);
	// b 0x8254d168
	goto loc_8254D168;
}

__attribute__((alias("__imp__sub_8254D1AC"))) PPC_WEAK_FUNC(sub_8254D1AC);
PPC_FUNC_IMPL(__imp__sub_8254D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D1B0"))) PPC_WEAK_FUNC(sub_8254D1B0);
PPC_FUNC_IMPL(__imp__sub_8254D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8254D1B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254D1D0;
	sub_8253D280(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d280
	ctx.lr = 0x8254D1E4;
	sub_8253D280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254D1FC;
	sub_8253D4B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8254d20c
	if (!cr6.lt) goto loc_8254D20C;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8254D20C:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addic. r31,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x8254d230
	if (!cr0.lt) goto loc_8254D230;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x8254d23c
	goto loc_8254D23C;
loc_8254D230:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// ble cr6,0x8254d23c
	if (!cr6.gt) goto loc_8254D23C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8254D23C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x8254d360
	if (cr6.eq) goto loc_8254D360;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8253b068
	ctx.lr = 0x8254D250;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254d270
	if (!cr6.eq) goto loc_8254D270;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,11444
	ctx.r4.s64 = ctx.r11.s64 + 11444;
	// bl 0x831d3788
	ctx.lr = 0x8254D268;
	sub_831D3788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254d35c
	if (!cr6.eq) goto loc_8254D35C;
loc_8254D270:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// beq cr6,0x8254d328
	if (cr6.eq) goto loc_8254D328;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8254d310
	if (cr6.gt) goto loc_8254D310;
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// subf. r31,r30,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8254d310
	if (cr0.eq) goto loc_8254D310;
loc_8254D2A0:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x831cf170
	ctx.lr = 0x8254D2B4;
	sub_831CF170(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d310
	if (cr6.eq) goto loc_8254D310;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8254d2f8
	if (cr6.eq) goto loc_8254D2F8;
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
loc_8254D2D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8254d2f8
	if (!cr0.eq) goto loc_8254D2F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x8254d2d8
	if (!cr6.eq) goto loc_8254D2D8;
loc_8254D2F8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8254d324
	if (cr6.eq) goto loc_8254D324;
	// subf r11,r8,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r8.s64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8254d2a0
	if (!cr0.eq) goto loc_8254D2A0;
loc_8254D310:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x8254D318;
	sub_8253B3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254D324:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_8254D328:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254d310
	if (cr6.eq) goto loc_8254D310;
	// subf r31,r25,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r25.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D340;
	sub_8253B3E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D350;
	sub_8253B3E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254D35C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8254D360:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x8254d378
	if (!cr6.eq) goto loc_8254D378;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8254d37c
	goto loc_8254D37C;
loc_8254D378:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8254D37C:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8254D390:
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254cb58
	ctx.lr = 0x8254D3A4;
	sub_8254CB58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254d3dc
	if (!cr6.eq) goto loc_8254D3DC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bge cr6,0x8254d310
	if (!cr6.lt) goto loc_8254D310;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x8254d390
	if (cr6.eq) goto loc_8254D390;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x8254D3D0;
	sub_8253B3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254D3DC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x8254d41c
	if (cr6.eq) goto loc_8254D41C;
	// subf r11,r25,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r25.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D3F4;
	sub_8253B3E0(ctx, base);
	// subf r4,r25,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r25.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D400;
	sub_8253B3E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254d0a8
	ctx.lr = 0x8254D410;
	sub_8254D0A8(ctx, base);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254D41C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254d0a8
	ctx.lr = 0x8254D42C;
	sub_8254D0A8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D434"))) PPC_WEAK_FUNC(sub_8254D434);
PPC_FUNC_IMPL(__imp__sub_8254D434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D438"))) PPC_WEAK_FUNC(sub_8254D438);
PPC_FUNC_IMPL(__imp__sub_8254D438) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8254d1b0
	sub_8254D1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D440"))) PPC_WEAK_FUNC(sub_8254D440);
PPC_FUNC_IMPL(__imp__sub_8254D440) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8254d1b0
	sub_8254D1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D448"))) PPC_WEAK_FUNC(sub_8254D448);
PPC_FUNC_IMPL(__imp__sub_8254D448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8254D450;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8254D464;
	sub_8253B0C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-10004
	ctx.r4.s64 = -10004;
	// bl 0x8253b0c0
	ctx.lr = 0x8254D478;
	sub_8253B0C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r4,-10005
	ctx.r4.s64 = -10005;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b008
	ctx.lr = 0x8254D49C;
	sub_8253B008(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r3,r28
	ctx.r31.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8254d4e0
	if (cr6.gt) goto loc_8254D4E0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8254D4B0:
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254cb58
	ctx.lr = 0x8254D4C4;
	sub_8254CB58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254d4ec
	if (!cr6.eq) goto loc_8254D4EC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8254d4b0
	if (!cr6.gt) goto loc_8254D4B0;
loc_8254D4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8254D4EC:
	// subf r4,r28,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x8254d4fc
	if (!cr6.eq) goto loc_8254D4FC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8254D4FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D504;
	sub_8253B3E0(ctx, base);
	// li r4,-10005
	ctx.r4.s64 = -10005;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253abb8
	ctx.lr = 0x8254D510;
	sub_8253ABB8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254d0a8
	ctx.lr = 0x8254D520;
	sub_8254D0A8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D528"))) PPC_WEAK_FUNC(sub_8254D528);
PPC_FUNC_IMPL(__imp__sub_8254D528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254D548;
	sub_8253D280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d280
	ctx.lr = 0x8254D558;
	sub_8253D280(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253aa70
	ctx.lr = 0x8254D564;
	sub_8253AA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D570;
	sub_8253B3E0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-11192
	ctx.r4.s64 = ctx.r11.s64 + -11192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x8254D584;
	sub_8253B5E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254D59C"))) PPC_WEAK_FUNC(sub_8254D59C);
PPC_FUNC_IMPL(__imp__sub_8254D59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D5A0"))) PPC_WEAK_FUNC(sub_8254D5A0);
PPC_FUNC_IMPL(__imp__sub_8254D5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,11456
	ctx.r4.s64 = ctx.r11.s64 + 11456;
	// b 0x8253c558
	sub_8253C558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D5AC"))) PPC_WEAK_FUNC(sub_8254D5AC);
PPC_FUNC_IMPL(__imp__sub_8254D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D5B0"))) PPC_WEAK_FUNC(sub_8254D5B0);
PPC_FUNC_IMPL(__imp__sub_8254D5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8254D5B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8254D5DC;
	sub_8253B0C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254d6d0
	if (cr6.eq) goto loc_8254D6D0;
loc_8254D5F0:
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x8254d630
	if (cr6.eq) goto loc_8254D630;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254d668
	if (cr6.lt) goto loc_8254D668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca18
	ctx.lr = 0x8254D614;
	sub_8253CA18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8254d6c0
	goto loc_8254D6C0;
loc_8254D630:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzx r29,r30,r28
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x831d34e0
	ctx.lr = 0x8254D63C;
	sub_831D34E0(ctx, base);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8254d684
	if (!cr6.eq) goto loc_8254D684;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,524
	ctx.r10.s64 = ctx.r31.s64 + 524;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254d668
	if (cr6.lt) goto loc_8254D668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca18
	ctx.lr = 0x8254D668;
	sub_8253CA18(ctx, base);
loc_8254D668:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8254d6c0
	goto loc_8254D6C0;
loc_8254D684:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bne cr6,0x8254d6a4
	if (!cr6.eq) goto loc_8254D6A4;
	// subf r5,r27,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r27.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca88
	ctx.lr = 0x8254D6A0;
	sub_8253CA88(ctx, base);
	// b 0x8254d6c0
	goto loc_8254D6C0;
loc_8254D6A4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-49
	ctx.r4.s64 = ctx.r11.s64 + -49;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8254cfd8
	ctx.lr = 0x8254D6B8;
	sub_8254CFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cb90
	ctx.lr = 0x8254D6C0;
	sub_8253CB90(ctx, base);
loc_8254D6C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x8254d5f0
	if (cr6.lt) goto loc_8254D5F0;
loc_8254D6D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D6D8"))) PPC_WEAK_FUNC(sub_8254D6D8);
PPC_FUNC_IMPL(__imp__sub_8254D6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254D6E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254D704;
	sub_8253AD28(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8254d790
	if (cr6.gt) goto loc_8254D790;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8254d724
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8254D724;
	// bdzf 4*cr6+eq,0x8254d770
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8254D770;
	// bne cr6,0x8254d740
	if (!cr6.eq) goto loc_8254D740;
loc_8254D724:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254d5b0
	ctx.lr = 0x8254D738;
	sub_8254D5B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254D740:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8254D74C;
	sub_8253ACE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254d0a8
	ctx.lr = 0x8254D75C;
	sub_8254D0A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x8254D76C;
	sub_8253BE10(ctx, base);
	// b 0x8254d790
	goto loc_8254D790;
loc_8254D770:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254cfd8
	ctx.lr = 0x8254D784;
	sub_8254CFD8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b740
	ctx.lr = 0x8254D790;
	sub_8253B740(ctx, base);
loc_8254D790:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x8254D79C;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254d7d0
	if (!cr6.eq) goto loc_8254D7D0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253aa70
	ctx.lr = 0x8254D7B0;
	sub_8253AA70(ctx, base);
	// subf r5,r29,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x8254D7C0;
	sub_8253B410(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8253cb90
	ctx.lr = 0x8254D7C8;
	sub_8253CB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254D7D0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253ae28
	ctx.lr = 0x8254D7D8;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254d80c
	if (!cr6.eq) goto loc_8254D80C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254D7EC;
	sub_8253AD28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad70
	ctx.lr = 0x8254D7F8;
	sub_8253AD70(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11504
	ctx.r4.s64 = ctx.r11.s64 + 11504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254D80C;
	sub_8253C558(ctx, base);
loc_8254D80C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8253cb90
	ctx.lr = 0x8254D814;
	sub_8253CB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D81C"))) PPC_WEAK_FUNC(sub_8254D81C);
PPC_FUNC_IMPL(__imp__sub_8254D81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254D820"))) PPC_WEAK_FUNC(sub_8254D820);
PPC_FUNC_IMPL(__imp__sub_8254D820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8254D828;
	__savegprlr_24(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254D83C;
	sub_8253D280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d280
	ctx.lr = 0x8254D850;
	sub_8253D280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253ad28
	ctx.lr = 0x8254D860;
	sub_8253AD28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254D878;
	sub_8253D4B0(ctx, base);
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,94
	cr6.compare<uint32_t>(ctx.r10.u32, 94, xer);
	// bne cr6,0x8254d898
	if (!cr6.eq) goto loc_8254D898;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8254d89c
	goto loc_8254D89C;
loc_8254D898:
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_8254D89C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x8254d8d4
	if (cr6.eq) goto loc_8254D8D4;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// beq cr6,0x8254d8d4
	if (cr6.eq) goto loc_8254D8D4;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// beq cr6,0x8254d8d4
	if (cr6.eq) goto loc_8254D8D4;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x8254d8d4
	if (cr6.eq) goto loc_8254D8D4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,11540
	ctx.r5.s64 = ctx.r11.s64 + 11540;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254D8D4;
	sub_8253CF78(ctx, base);
loc_8254D8D4:
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254D8E0;
	sub_8253CC48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ble cr6,0x8254d994
	if (!cr6.gt) goto loc_8254D994;
loc_8254D8FC:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254cb58
	ctx.lr = 0x8254D910;
	sub_8254CB58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254d944
	if (cr6.eq) goto loc_8254D944;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x8254d6d8
	ctx.lr = 0x8254D934;
	sub_8254D6D8(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x8254d944
	if (!cr6.gt) goto loc_8254D944;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8254d984
	goto loc_8254D984;
loc_8254D944:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8254d994
	if (!cr6.lt) goto loc_8254D994;
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r10,r1,892
	ctx.r10.s64 = ctx.r1.s64 + 892;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254d96c
	if (cr6.lt) goto loc_8254D96C;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8253ca18
	ctx.lr = 0x8254D968;
	sub_8253CA18(ctx, base);
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
loc_8254D96C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,368(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
loc_8254D984:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x8254d994
	if (!cr6.eq) goto loc_8254D994;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, xer);
	// blt cr6,0x8254d8fc
	if (cr6.lt) goto loc_8254D8FC;
loc_8254D994:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	// bl 0x8253ca88
	ctx.lr = 0x8254D9A8;
	sub_8253CA88(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8253cb18
	ctx.lr = 0x8254D9B0;
	sub_8253CB18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254D9BC;
	sub_8253B3E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254D9C8"))) PPC_WEAK_FUNC(sub_8254D9C8);
PPC_FUNC_IMPL(__imp__sub_8254D9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8254D9D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8253d280
	ctx.lr = 0x8254D9E4;
	sub_8253D280(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,524
	ctx.r29.s64 = ctx.r31.s64 + 524;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x8254da00
	if (cr6.lt) goto loc_8254DA00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca18
	ctx.lr = 0x8254DA00;
	sub_8253CA18(ctx, base);
loc_8254DA00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,34
	ctx.r26.s64 = 34;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254daf8
	if (cr6.eq) goto loc_8254DAF8;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r28,92
	ctx.r28.s64 = 92;
	// addi r27,r10,11576
	ctx.r27.s64 = ctx.r10.s64 + 11576;
loc_8254DA30:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8254da80
	if (cr6.gt) goto loc_8254DA80;
	// beq cr6,0x8254da6c
	if (cr6.eq) goto loc_8254DA6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254da58
	if (cr6.eq) goto loc_8254DA58;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// b 0x8254da8c
	goto loc_8254DA8C;
loc_8254DA58:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca88
	ctx.lr = 0x8254DA68;
	sub_8253CA88(ctx, base);
	// b 0x8254dae8
	goto loc_8254DAE8;
loc_8254DA6C:
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca88
	ctx.lr = 0x8254DA7C;
	sub_8253CA88(ctx, base);
	// b 0x8254dae8
	goto loc_8254DAE8;
loc_8254DA80:
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// beq cr6,0x8254da98
	if (cr6.eq) goto loc_8254DA98;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
loc_8254DA8C:
	// beq cr6,0x8254da98
	if (cr6.eq) goto loc_8254DA98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8254dac0
	goto loc_8254DAC0;
loc_8254DA98:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x8254daac
	if (cr6.lt) goto loc_8254DAAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca18
	ctx.lr = 0x8254DAAC;
	sub_8253CA18(ctx, base);
loc_8254DAAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8254DAC0:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x8254dad0
	if (cr6.lt) goto loc_8254DAD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca18
	ctx.lr = 0x8254DAD0;
	sub_8253CA18(ctx, base);
loc_8254DAD0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8254DAE8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254da30
	if (!cr6.eq) goto loc_8254DA30;
loc_8254DAF8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// blt cr6,0x8254db14
	if (cr6.lt) goto loc_8254DB14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ca18
	ctx.lr = 0x8254DB14;
	sub_8253CA18(ctx, base);
loc_8254DB14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DB30"))) PPC_WEAK_FUNC(sub_8254DB30);
PPC_FUNC_IMPL(__imp__sub_8254DB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254DB38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,11624
	ctx.r30.s64 = ctx.r11.s64 + 11624;
	// beq cr6,0x8254db84
	if (cr6.eq) goto loc_8254DB84;
loc_8254DB60:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r3,r30,-40
	ctx.r3.s64 = ctx.r30.s64 + -40;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x831ceeb0
	ctx.lr = 0x8254DB70;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254db84
	if (cr6.eq) goto loc_8254DB84;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254db60
	if (!cr6.eq) goto loc_8254DB60;
loc_8254DB84:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x8254db9c
	if (cr6.lt) goto loc_8254DB9C;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254DB9C;
	sub_8253C558(ctx, base);
loc_8254DB9C:
	// bl 0x831d34e0
	ctx.lr = 0x8254DBA0;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254dbbc
	if (cr6.eq) goto loc_8254DBBC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8254DBBC:
	// bl 0x831d34e0
	ctx.lr = 0x8254DBC0;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254dbdc
	if (cr6.eq) goto loc_8254DBDC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8254DBDC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bne cr6,0x8254dc28
	if (!cr6.eq) goto loc_8254DC28;
	// bl 0x831d34e0
	ctx.lr = 0x8254DBEC;
	sub_831D34E0(ctx, base);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254dc08
	if (cr6.eq) goto loc_8254DC08;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8254DC08:
	// bl 0x831d34e0
	ctx.lr = 0x8254DC0C;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254dc28
	if (cr6.eq) goto loc_8254DC28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8254DC28:
	// bl 0x831d34e0
	ctx.lr = 0x8254DC2C;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8254dc50
	if (cr6.eq) goto loc_8254DC50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254DC50;
	sub_8253C558(ctx, base);
loc_8254DC50:
	// li r11,37
	ctx.r11.s64 = 37;
	// subf r29,r28,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r28.s64;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d36a8
	ctx.lr = 0x8254DC70;
	sub_831D36A8(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254DC88"))) PPC_WEAK_FUNC(sub_8254DC88);
PPC_FUNC_IMPL(__imp__sub_8254DC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8254DC90;
	__savegprlr_24(ctx, base);
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8254DC9C;
	sub_8253AA58(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x8253d280
	ctx.lr = 0x8254DCB4;
	sub_8253D280(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254DCCC;
	sub_8253CC48(ctx, base);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// bge cr6,0x8254e04c
	if (!cr6.lt) goto loc_8254E04C;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r11,11672
	ctx.r28.s64 = ctx.r11.s64 + 11672;
loc_8254DCE0:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// beq cr6,0x8254dd24
	if (cr6.eq) goto loc_8254DD24;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r1,652
	ctx.r10.s64 = ctx.r1.s64 + 652;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254dd48
	if (cr6.lt) goto loc_8254DD48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253ca18
	ctx.lr = 0x8254DD04;
	sub_8253CA18(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// b 0x8254e044
	goto loc_8254E044;
loc_8254DD24:
	// lbzu r11,1(r27)
	ea = 1 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(ctx.r11.u32, 37, xer);
	// bne cr6,0x8254dd68
	if (!cr6.eq) goto loc_8254DD68;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r1,652
	ctx.r10.s64 = ctx.r1.s64 + 652;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254dd48
	if (cr6.lt) goto loc_8254DD48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253ca18
	ctx.lr = 0x8254DD48;
	sub_8253CA18(ctx, base);
loc_8254DD48:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// b 0x8254e044
	goto loc_8254E044;
loc_8254DD68:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r24
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, xer);
	// ble cr6,0x8254dd84
	if (!cr6.gt) goto loc_8254DD84;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254DD84;
	sub_8253CF78(ctx, base);
loc_8254DD84:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254db30
	ctx.lr = 0x8254DD94;
	sub_8254DB30(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-69
	ctx.r11.s64 = ctx.r11.s64 + -69;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// bgt cr6,0x8254e060
	if (cr6.gt) goto loc_8254E060;
	// lis r12,-32171
	ctx.r12.s64 = -2108358656;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8764
	ctx.r12.s64 = ctx.r12.s64 + -8764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8254DF80;
	case 1:
		goto loc_8254E060;
	case 2:
		goto loc_8254DF80;
	case 3:
		goto loc_8254E060;
	case 4:
		goto loc_8254E060;
	case 5:
		goto loc_8254E060;
	case 6:
		goto loc_8254E060;
	case 7:
		goto loc_8254E060;
	case 8:
		goto loc_8254E060;
	case 9:
		goto loc_8254E060;
	case 10:
		goto loc_8254E060;
	case 11:
		goto loc_8254E060;
	case 12:
		goto loc_8254E060;
	case 13:
		goto loc_8254E060;
	case 14:
		goto loc_8254E060;
	case 15:
		goto loc_8254E060;
	case 16:
		goto loc_8254E060;
	case 17:
		goto loc_8254E060;
	case 18:
		goto loc_8254E060;
	case 19:
		goto loc_8254DF18;
	case 20:
		goto loc_8254E060;
	case 21:
		goto loc_8254E060;
	case 22:
		goto loc_8254E060;
	case 23:
		goto loc_8254E060;
	case 24:
		goto loc_8254E060;
	case 25:
		goto loc_8254E060;
	case 26:
		goto loc_8254E060;
	case 27:
		goto loc_8254E060;
	case 28:
		goto loc_8254E060;
	case 29:
		goto loc_8254E060;
	case 30:
		goto loc_8254DE94;
	case 31:
		goto loc_8254DEB0;
	case 32:
		goto loc_8254DF80;
	case 33:
		goto loc_8254DF80;
	case 34:
		goto loc_8254DF80;
	case 35:
		goto loc_8254E060;
	case 36:
		goto loc_8254DEB0;
	case 37:
		goto loc_8254E060;
	case 38:
		goto loc_8254E060;
	case 39:
		goto loc_8254E060;
	case 40:
		goto loc_8254E060;
	case 41:
		goto loc_8254E060;
	case 42:
		goto loc_8254DF18;
	case 43:
		goto loc_8254E060;
	case 44:
		goto loc_8254DFA4;
	case 45:
		goto loc_8254E060;
	case 46:
		goto loc_8254DFB8;
	case 47:
		goto loc_8254E060;
	case 48:
		goto loc_8254DF18;
	case 49:
		goto loc_8254E060;
	case 50:
		goto loc_8254E060;
	case 51:
		goto loc_8254DF18;
	default:
		return;
	}
	// lwz r18,-8320(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8320);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8320(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8320);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8424(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8424);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8556(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8556);
	// lwz r18,-8528(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8528);
	// lwz r18,-8320(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8320);
	// lwz r18,-8320(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8320);
	// lwz r18,-8320(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8320);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8528(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8528);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8424(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8424);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8284(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8284);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8264(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8264);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8424(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8424);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8096(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8096);
	// lwz r18,-8424(r20)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8424);
loc_8254DE94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254DEA0;
	sub_8253D378(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8254e008
	goto loc_8254E008;
loc_8254DEB0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8254DEB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8254deb8
	if (!cr6.eq) goto loc_8254DEB8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sth r8,-1(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1, ctx.r8.u16);
	// stbx r26,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r26.u8);
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// bl 0x8253d378
	ctx.lr = 0x8254DF08;
	sub_8253D378(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8254e008
	goto loc_8254E008;
loc_8254DF18:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8254DF20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8254df20
	if (!cr6.eq) goto loc_8254DF20;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r5,-1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// sth r8,-1(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1, ctx.r8.u16);
	// stbx r26,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r26.u8);
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// bl 0x8253d378
	ctx.lr = 0x8254DF70;
	sub_8253D378(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8254e008
	goto loc_8254E008;
loc_8254DF80:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254DF8C;
	sub_8253D378(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x831d0a20
	ctx.lr = 0x8254DFA0;
	sub_831D0A20(ctx, base);
	// b 0x8254e014
	goto loc_8254E014;
loc_8254DFA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254d9c8
	ctx.lr = 0x8254DFB4;
	sub_8254D9C8(ctx, base);
	// b 0x8254e044
	goto loc_8254E044;
loc_8254DFB8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254DFC8;
	sub_8253D280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ceeb0
	ctx.lr = 0x8254DFD8;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254e004
	if (!cr6.eq) goto loc_8254E004;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// blt cr6,0x8254e004
	if (cr6.lt) goto loc_8254E004;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8254DFF8;
	sub_8253ACE0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253cb90
	ctx.lr = 0x8254E000;
	sub_8253CB90(ctx, base);
	// b 0x8254e044
	goto loc_8254E044;
loc_8254E004:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8254E008:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x831d0a20
	ctx.lr = 0x8254E014;
	sub_831D0A20(ctx, base);
loc_8254E014:
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8254E01C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8254e01c
	if (!cr6.eq) goto loc_8254E01C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8253ca88
	ctx.lr = 0x8254E044;
	sub_8253CA88(ctx, base);
loc_8254E044:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x8254dce0
	if (cr6.lt) goto loc_8254DCE0;
loc_8254E04C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253cb18
	ctx.lr = 0x8254E054;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254E060:
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x8253c558
	ctx.lr = 0x8254E074;
	sub_8253C558(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E07C"))) PPC_WEAK_FUNC(sub_8254E07C);
PPC_FUNC_IMPL(__imp__sub_8254E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E080"))) PPC_WEAK_FUNC(sub_8254E080);
PPC_FUNC_IMPL(__imp__sub_8254E080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,11832
	ctx.r31.s64 = ctx.r11.s64 + 11832;
	// addi r5,r10,512
	ctx.r5.s64 = ctx.r10.s64 + 512;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253d878
	ctx.lr = 0x8254E0B0;
	sub_8253D878(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b780
	ctx.lr = 0x8254E0C0;
	sub_8253B780(ctx, base);
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254E0D0;
	sub_8253BA90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x8254E0E0;
	sub_8253B8B8(ctx, base);
	// lis r9,-31766
	ctx.r9.s64 = -2081816576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-19446
	ctx.r4.s64 = ctx.r9.s64 + -19446;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8253b410
	ctx.lr = 0x8254E0F4;
	sub_8253B410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ace0
	ctx.lr = 0x8254E100;
	sub_8253ACE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253bc48
	ctx.lr = 0x8254E10C;
	sub_8253BC48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253aa70
	ctx.lr = 0x8254E118;
	sub_8253AA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ace0
	ctx.lr = 0x8254E124;
	sub_8253ACE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254E134;
	sub_8253BA90(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E140;
	sub_8253AA70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E15C"))) PPC_WEAK_FUNC(sub_8254E15C);
PPC_FUNC_IMPL(__imp__sub_8254E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E160"))) PPC_WEAK_FUNC(sub_8254E160);
PPC_FUNC_IMPL(__imp__sub_8254E160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254E168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831d3050
	ctx.lr = 0x8254E17C;
	sub_831D3050(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254e1a0
	if (cr6.eq) goto loc_8254E1A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x8254E194;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254E1A0:
	// bl 0x8253b3a0
	ctx.lr = 0x8254E1A4;
	sub_8253B3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254E1AC;
	sub_831D2F30(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,11864
	ctx.r4.s64 = ctx.r11.s64 + 11864;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254E1C4;
	sub_8253B570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254E1D0;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E1DC"))) PPC_WEAK_FUNC(sub_8254E1DC);
PPC_FUNC_IMPL(__imp__sub_8254E1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E1E0"))) PPC_WEAK_FUNC(sub_8254E1E0);
PPC_FUNC_IMPL(__imp__sub_8254E1E0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254E1F4;
	sub_8253B3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E208"))) PPC_WEAK_FUNC(sub_8254E208);
PPC_FUNC_IMPL(__imp__sub_8254E208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254E22C;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831d5160
	ctx.lr = 0x8254E234;
	sub_831D5160(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8254e160
	ctx.lr = 0x8254E248;
	sub_8254E160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E260"))) PPC_WEAK_FUNC(sub_8254E260);
PPC_FUNC_IMPL(__imp__sub_8254E260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254E284;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d280
	ctx.lr = 0x8254E298;
	sub_8253D280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d51b0
	ctx.lr = 0x8254E2A4;
	sub_831D51B0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8254e160
	ctx.lr = 0x8254E2B8;
	sub_8254E160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E2D0"))) PPC_WEAK_FUNC(sub_8254E2D0);
PPC_FUNC_IMPL(__imp__sub_8254E2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d5670
	ctx.lr = 0x8254E2EC;
	sub_831D5670(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254e318
	if (!cr6.eq) goto loc_8254E318;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,11872
	ctx.r4.s64 = ctx.r11.s64 + 11872;
	// bl 0x8253c558
	ctx.lr = 0x8254E304;
	sub_8253C558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8254E318:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8253b478
	ctx.lr = 0x8254E320;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E338"))) PPC_WEAK_FUNC(sub_8254E338);
PPC_FUNC_IMPL(__imp__sub_8254E338) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b478
	ctx.lr = 0x8254E34C;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E360"))) PPC_WEAK_FUNC(sub_8254E360);
PPC_FUNC_IMPL(__imp__sub_8254E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d59f8
	ctx.lr = 0x8254E378;
	sub_831D59F8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,792(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 792);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254E39C;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E3B4"))) PPC_WEAK_FUNC(sub_8254E3B4);
PPC_FUNC_IMPL(__imp__sub_8254E3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E3B8"))) PPC_WEAK_FUNC(sub_8254E3B8);
PPC_FUNC_IMPL(__imp__sub_8254E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254E3C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,12008
	ctx.r30.s64 = ctx.r11.s64 + 12008;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r30,-60
	ctx.r5.s64 = ctx.r30.s64 + -60;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d2c0
	ctx.lr = 0x8254E3E0;
	sub_8253D2C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254E3F0;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8254e408
	if (cr6.gt) goto loc_8254E408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d2828
	ctx.lr = 0x8254E400;
	sub_831D2828(ctx, base);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// b 0x8254e424
	goto loc_8254E424;
loc_8254E408:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d378
	ctx.lr = 0x8254E414;
	sub_8253D378(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_8254E424:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bne cr6,0x8254e440
	if (!cr6.eq) goto loc_8254E440;
	// bl 0x831d4ab8
	ctx.lr = 0x8254E438;
	sub_831D4AB8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x8254e444
	goto loc_8254E444;
loc_8254E440:
	// bl 0x831d4e70
	ctx.lr = 0x8254E444;
	sub_831D4E70(ctx, base);
loc_8254E444:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254e464
	if (!cr6.eq) goto loc_8254E464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x8254E458;
	sub_8253B3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254E464:
	// addi r10,r30,-56
	ctx.r10.s64 = ctx.r30.s64 + -56;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8254E46C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8254e490
	if (cr6.eq) goto loc_8254E490;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8254e46c
	if (cr6.eq) goto loc_8254E46C;
loc_8254E490:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254e5c8
	if (!cr6.eq) goto loc_8254E5C8;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x8254E4A8;
	sub_8253B8B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8253b3e0
	ctx.lr = 0x8254E4B4;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E4C4;
	sub_8253BA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8253b3e0
	ctx.lr = 0x8254E4D0;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E4E0;
	sub_8253BA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8253b3e0
	ctx.lr = 0x8254E4EC;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E4FC;
	sub_8253BA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8253b3e0
	ctx.lr = 0x8254E508;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-36
	ctx.r5.s64 = ctx.r30.s64 + -36;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E518;
	sub_8253BA90(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254E528;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E538;
	sub_8253BA90(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1900
	ctx.r4.s64 = ctx.r11.s64 + 1900;
	// bl 0x8253b3e0
	ctx.lr = 0x8254E548;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E558;
	sub_8253BA90(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254E568;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E578;
	sub_8253BA90(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8253b3e0
	ctx.lr = 0x8254E588;
	sub_8253B3E0(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E598;
	sub_8253BA90(ctx, base);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8254e680
	if (cr6.lt) goto loc_8254E680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x8254E5AC;
	sub_8253B6C0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254E5BC;
	sub_8253BA90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254E5C8:
	// li r11,37
	ctx.r11.s64 = 37;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x8253cc48
	ctx.lr = 0x8254E5E0;
	sub_8253CC48(ctx, base);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8254e678
	if (cr6.eq) goto loc_8254E678;
loc_8254E5F0:
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(ctx.r11.s32, 37, xer);
	// bne cr6,0x8254e638
	if (!cr6.eq) goto loc_8254E638;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254e638
	if (cr6.eq) goto loc_8254E638;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x831d68d0
	ctx.lr = 0x8254E624;
	sub_831D68D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253ca88
	ctx.lr = 0x8254E634;
	sub_8253CA88(ctx, base);
	// b 0x8254e668
	goto loc_8254E668;
loc_8254E638:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8254e650
	if (cr6.lt) goto loc_8254E650;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253ca18
	ctx.lr = 0x8254E650;
	sub_8253CA18(ctx, base);
loc_8254E650:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_8254E668:
	// lbzu r11,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8254e5f0
	if (!cr6.eq) goto loc_8254E5F0;
loc_8254E678:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb18
	ctx.lr = 0x8254E680;
	sub_8253CB18(ctx, base);
loc_8254E680:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E68C"))) PPC_WEAK_FUNC(sub_8254E68C);
PPC_FUNC_IMPL(__imp__sub_8254E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254E690"))) PPC_WEAK_FUNC(sub_8254E690);
PPC_FUNC_IMPL(__imp__sub_8254E690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254E698;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254E6A8;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8254e6bc
	if (cr6.gt) goto loc_8254E6BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d2828
	ctx.lr = 0x8254E6B8;
	sub_831D2828(ctx, base);
	// b 0x8254e928
	goto loc_8254E928;
loc_8254E6BC:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x8254E6CC;
	sub_8253D1E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E6D8;
	sub_8253AA70(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r30,r11,11912
	ctx.r30.s64 = ctx.r11.s64 + 11912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,104
	ctx.r5.s64 = ctx.r30.s64 + 104;
	// bl 0x8253b780
	ctx.lr = 0x8254E6F0;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8254E6FC;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254e718
	if (cr6.eq) goto loc_8254E718;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b008
	ctx.lr = 0x8254E710;
	sub_8253B008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8254e71c
	goto loc_8254E71C;
loc_8254E718:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254E71C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E728;
	sub_8253AA70(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r5,r30,108
	ctx.r5.s64 = ctx.r30.s64 + 108;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254E73C;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8254E748;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254e764
	if (cr6.eq) goto loc_8254E764;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b008
	ctx.lr = 0x8254E75C;
	sub_8253B008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8254e768
	goto loc_8254E768;
loc_8254E764:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8254E768:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E774;
	sub_8253AA70(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r5,r30,112
	ctx.r5.s64 = ctx.r30.s64 + 112;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254E788;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8254E794;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254e7b0
	if (cr6.eq) goto loc_8254E7B0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b008
	ctx.lr = 0x8254E7A8;
	sub_8253B008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8254e7b4
	goto loc_8254E7B4;
loc_8254E7B0:
	// li r29,12
	ctx.r29.s64 = 12;
loc_8254E7B4:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E7C0;
	sub_8253AA70(ctx, base);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r5,r30,120
	ctx.r5.s64 = ctx.r30.s64 + 120;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254E7D4;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8254E7E0;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254e80c
	if (cr6.eq) goto loc_8254E80C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b008
	ctx.lr = 0x8254E7F4;
	sub_8253B008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E804;
	sub_8253AA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8254e818
	goto loc_8254E818;
loc_8254E80C:
	// addi r5,r30,120
	ctx.r5.s64 = ctx.r30.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254E818;
	sub_8253C558(ctx, base);
loc_8254E818:
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r30,124
	ctx.r5.s64 = ctx.r30.s64 + 124;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254E82C;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8254E838;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254e864
	if (cr6.eq) goto loc_8254E864;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b008
	ctx.lr = 0x8254E84C;
	sub_8253B008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E85C;
	sub_8253AA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8254e870
	goto loc_8254E870;
loc_8254E864:
	// addi r5,r30,124
	ctx.r5.s64 = ctx.r30.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254E870;
	sub_8253C558(ctx, base);
loc_8254E870:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r5,r30,132
	ctx.r5.s64 = ctx.r30.s64 + 132;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254E888;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8254E894;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254e8c0
	if (cr6.eq) goto loc_8254E8C0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b008
	ctx.lr = 0x8254E8A8;
	sub_8253B008(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E8B8;
	sub_8253AA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8254e8cc
	goto loc_8254E8CC;
loc_8254E8C0:
	// addi r5,r30,132
	ctx.r5.s64 = ctx.r30.s64 + 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254E8CC;
	sub_8253C558(ctx, base);
loc_8254E8CC:
	// addi r11,r3,-1900
	ctx.r11.s64 = ctx.r3.s64 + -1900;
	// addi r5,r30,140
	ctx.r5.s64 = ctx.r30.s64 + 140;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254E8E4;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254E8F0;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8254e900
	if (!cr6.eq) goto loc_8254E900;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x8254e910
	goto loc_8254E910;
loc_8254E900:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x8254E90C;
	sub_8253B068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8254E910:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254E91C;
	sub_8253AA70(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d5158
	ctx.lr = 0x8254E928;
	sub_831D5158(ctx, base);
loc_8254E928:
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254e948
	if (!cr6.eq) goto loc_8254E948;
	// bl 0x8253b3a0
	ctx.lr = 0x8254E93C;
	sub_8253B3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254E948:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x8254E954;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254E960"))) PPC_WEAK_FUNC(sub_8254E960);
PPC_FUNC_IMPL(__imp__sub_8254E960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f1,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// bl 0x8253d3f8
	ctx.lr = 0x8254E988;
	sub_8253D3F8(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8253d378
	ctx.lr = 0x8254E9A0;
	sub_8253D378(ctx, base);
	// fctidz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x831d47e8
	ctx.lr = 0x8254E9B4;
	sub_831D47E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x8254E9BC;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254E9D8"))) PPC_WEAK_FUNC(sub_8254E9D8);
PPC_FUNC_IMPL(__imp__sub_8254E9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254E9E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253d2c0
	ctx.lr = 0x8254E9F8;
	sub_8253D2C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r31,r11,640
	ctx.r31.s64 = ctx.r11.s64 + 640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r5,r10,12108
	ctx.r5.s64 = ctx.r10.s64 + 12108;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d798
	ctx.lr = 0x8254EA1C;
	sub_8253D798(ctx, base);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x831d68e0
	ctx.lr = 0x8254EA2C;
	sub_831D68E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b478
	ctx.lr = 0x8254EA38;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254EA44"))) PPC_WEAK_FUNC(sub_8254EA44);
PPC_FUNC_IMPL(__imp__sub_8254EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EA48"))) PPC_WEAK_FUNC(sub_8254EA48);
PPC_FUNC_IMPL(__imp__sub_8254EA48) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d4b0
	ctx.lr = 0x8254EA60;
	sub_8253D4B0(ctx, base);
	// bl 0x831ce010
	ctx.lr = 0x8254EA64;
	sub_831CE010(ctx, base);
}

__attribute__((alias("__imp__sub_8254EA64"))) PPC_WEAK_FUNC(sub_8254EA64);
PPC_FUNC_IMPL(__imp__sub_8254EA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EA68"))) PPC_WEAK_FUNC(sub_8254EA68);
PPC_FUNC_IMPL(__imp__sub_8254EA68) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r5,r11,696
	ctx.r5.s64 = ctx.r11.s64 + 696;
	// addi r4,r10,12208
	ctx.r4.s64 = ctx.r10.s64 + 12208;
	// bl 0x8253d878
	ctx.lr = 0x8254EA88;
	sub_8253D878(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EA9C"))) PPC_WEAK_FUNC(sub_8254EA9C);
PPC_FUNC_IMPL(__imp__sub_8254EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EAA0"))) PPC_WEAK_FUNC(sub_8254EAA0);
PPC_FUNC_IMPL(__imp__sub_8254EAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254EAA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831d3050
	ctx.lr = 0x8254EABC;
	sub_831D3050(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831d2f30
	ctx.lr = 0x8254EAC4;
	sub_831D2F30(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12240
	ctx.r4.s64 = ctx.r11.s64 + 12240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254EADC;
	sub_8253B570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b0c0
	ctx.lr = 0x8254EAEC;
	sub_8253B0C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254EAFC;
	sub_8253CF78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254EB04"))) PPC_WEAK_FUNC(sub_8254EB04);
PPC_FUNC_IMPL(__imp__sub_8254EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EB08"))) PPC_WEAK_FUNC(sub_8254EB08);
PPC_FUNC_IMPL(__imp__sub_8254EB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254EB10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x8254EB20;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b268
	ctx.lr = 0x8254EB2C;
	sub_8253B268(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,12268
	ctx.r30.s64 = ctx.r11.s64 + 12268;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254EB48;
	sub_8253B780(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8254ebbc
	if (cr6.eq) goto loc_8254EBBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b920
	ctx.lr = 0x8254EB5C;
	sub_8253B920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254ebbc
	if (cr6.eq) goto loc_8254EBBC;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aec8
	ctx.lr = 0x8254EB74;
	sub_8253AEC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254ebbc
	if (cr6.eq) goto loc_8254EBBC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254eba4
	if (!cr6.eq) goto loc_8254EBA4;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// li r5,11
	ctx.r5.s64 = 11;
	// bl 0x8253b410
	ctx.lr = 0x8254EB98;
	sub_8253B410(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254EBA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x8253b410
	ctx.lr = 0x8254EBB0;
	sub_8253B410(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254EBBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x8254EBC4;
	sub_8253B3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254EBD0"))) PPC_WEAK_FUNC(sub_8254EBD0);
PPC_FUNC_IMPL(__imp__sub_8254EBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253c280
	ctx.lr = 0x8254EBF0;
	sub_8253C280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,12316
	ctx.r5.s64 = ctx.r10.s64 + 12316;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x8253b780
	ctx.lr = 0x8254EC10;
	sub_8253B780(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x8254EC1C;
	sub_8253BC48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EC38"))) PPC_WEAK_FUNC(sub_8254EC38);
PPC_FUNC_IMPL(__imp__sub_8254EC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x8254EC50;
	sub_8253B3A0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r11,12324
	ctx.r4.s64 = ctx.r11.s64 + 12324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x8254EC64;
	sub_8253B410(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EC7C"))) PPC_WEAK_FUNC(sub_8254EC7C);
PPC_FUNC_IMPL(__imp__sub_8254EC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254EC80"))) PPC_WEAK_FUNC(sub_8254EC80);
PPC_FUNC_IMPL(__imp__sub_8254EC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254EC88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,12236
	ctx.r31.s64 = ctx.r11.s64 + 12236;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r31,116
	ctx.r5.s64 = ctx.r31.s64 + 116;
	// bl 0x8253d120
	ctx.lr = 0x8254ECA4;
	sub_8253D120(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831d3050
	ctx.lr = 0x8254ECB0;
	sub_831D3050(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8253b3a0
	ctx.lr = 0x8254ECC0;
	sub_8253B3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254ECC8;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254ECD8;
	sub_8253B570(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254ECE4;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254ECF0"))) PPC_WEAK_FUNC(sub_8254ECF0);
PPC_FUNC_IMPL(__imp__sub_8254ECF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254ECF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12236
	ctx.r30.s64 = ctx.r11.s64 + 12236;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,124
	ctx.r5.s64 = ctx.r30.s64 + 124;
	// bl 0x8253d120
	ctx.lr = 0x8254ED14;
	sub_8253D120(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8253f278
	ctx.lr = 0x8254ED20;
	sub_8253F278(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x831d3050
	ctx.lr = 0x8254ED34;
	sub_831D3050(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254ed58
	if (cr6.eq) goto loc_8254ED58;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x8254ED4C;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254ED58:
	// bl 0x8253b3a0
	ctx.lr = 0x8254ED5C;
	sub_8253B3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254ED64;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254ED74;
	sub_8253B570(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254ED80;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254ED8C"))) PPC_WEAK_FUNC(sub_8254ED8C);
PPC_FUNC_IMPL(__imp__sub_8254ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254ED90"))) PPC_WEAK_FUNC(sub_8254ED90);
PPC_FUNC_IMPL(__imp__sub_8254ED90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b9b0
	ctx.lr = 0x8254EDAC;
	sub_8253B9B0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,12368
	ctx.r5.s64 = ctx.r11.s64 + 12368;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b780
	ctx.lr = 0x8254EDC0;
	sub_8253B780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b210
	ctx.lr = 0x8254EDCC;
	sub_8253B210(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254EDDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EDF0"))) PPC_WEAK_FUNC(sub_8254EDF0);
PPC_FUNC_IMPL(__imp__sub_8254EDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254EE10;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8254ee28
	if (!cr6.eq) goto loc_8254EE28;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x8254EE28;
	sub_8253B860(ctx, base);
loc_8254EE28:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12368
	ctx.r30.s64 = ctx.r11.s64 + 12368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// bl 0x8253d120
	ctx.lr = 0x8254EE40;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254ee58
	if (!cr6.eq) goto loc_8254EE58;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254EE58;
	sub_8253C558(ctx, base);
loc_8254EE58:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b9b0
	ctx.lr = 0x8254EE64;
	sub_8253B9B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x8254EE74;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b210
	ctx.lr = 0x8254EE80;
	sub_8253B210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254EE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EEA8"))) PPC_WEAK_FUNC(sub_8254EEA8);
PPC_FUNC_IMPL(__imp__sub_8254EEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,12376
	ctx.r5.s64 = ctx.r11.s64 + 12376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d120
	ctx.lr = 0x8254EECC;
	sub_8253D120(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8254eee0
	if (cr6.eq) goto loc_8254EEE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254ed90
	ctx.lr = 0x8254EEE0;
	sub_8254ED90(ctx, base);
loc_8254EEE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EEF8"))) PPC_WEAK_FUNC(sub_8254EEF8);
PPC_FUNC_IMPL(__imp__sub_8254EEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12408
	ctx.r30.s64 = ctx.r11.s64 + 12408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// bl 0x8253d120
	ctx.lr = 0x8254EF24;
	sub_8253D120(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8254ef44
	if (!cr6.eq) goto loc_8254EF44;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x8253b410
	ctx.lr = 0x8254EF40;
	sub_8253B410(ctx, base);
	// b 0x8254ef4c
	goto loc_8254EF4C;
loc_8254EF44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254EF4C;
	sub_8253B570(ctx, base);
loc_8254EF4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254EF68"))) PPC_WEAK_FUNC(sub_8254EF68);
PPC_FUNC_IMPL(__imp__sub_8254EF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254EF70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254EF84;
	sub_8253D280(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,12236
	ctx.r30.s64 = ctx.r11.s64 + 12236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,184
	ctx.r5.s64 = ctx.r30.s64 + 184;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d2c0
	ctx.lr = 0x8254EFA4;
	sub_8253D2C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8253c280
	ctx.lr = 0x8254EFB4;
	sub_8253C280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x8253b780
	ctx.lr = 0x8254EFD0;
	sub_8253B780(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x8254EFDC;
	sub_8253BC48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253f228
	ctx.lr = 0x8254EFE8;
	sub_8253F228(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f070
	if (!cr6.eq) goto loc_8254F070;
	// bl 0x831d3050
	ctx.lr = 0x8254EFF8;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8253b3a0
	ctx.lr = 0x8254F008;
	sub_8253B3A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8254f044
	if (cr6.eq) goto loc_8254F044;
	// bl 0x831d2f30
	ctx.lr = 0x8254F018;
	sub_831D2F30(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F02C;
	sub_8253B570(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254F038;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254F044:
	// bl 0x831d2f30
	ctx.lr = 0x8254F048;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F058;
	sub_8253B570(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254F064;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254F070:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F07C"))) PPC_WEAK_FUNC(sub_8254F07C);
PPC_FUNC_IMPL(__imp__sub_8254F07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F080"))) PPC_WEAK_FUNC(sub_8254F080);
PPC_FUNC_IMPL(__imp__sub_8254F080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254F088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254F09C;
	sub_8253D280(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,12236
	ctx.r30.s64 = ctx.r11.s64 + 12236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,188
	ctx.r5.s64 = ctx.r30.s64 + 188;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d2c0
	ctx.lr = 0x8254F0BC;
	sub_8253D2C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8253c280
	ctx.lr = 0x8254F0C8;
	sub_8253C280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// bl 0x8253b780
	ctx.lr = 0x8254F0E4;
	sub_8253B780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253bc48
	ctx.lr = 0x8254F0F0;
	sub_8253BC48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// bl 0x8253c558
	ctx.lr = 0x8254F0FC;
	sub_8253C558(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// bl 0x831d3050
	ctx.lr = 0x8254F104;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8253b3a0
	ctx.lr = 0x8254F114;
	sub_8253B3A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8254f13c
	if (cr6.eq) goto loc_8254F13C;
	// bl 0x831d2f30
	ctx.lr = 0x8254F124;
	sub_831D2F30(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F138;
	sub_8253B570(ctx, base);
	// b 0x8254f150
	goto loc_8254F150;
loc_8254F13C:
	// bl 0x831d2f30
	ctx.lr = 0x8254F140;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F150;
	sub_8253B570(ctx, base);
loc_8254F150:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254F15C;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F168"))) PPC_WEAK_FUNC(sub_8254F168);
PPC_FUNC_IMPL(__imp__sub_8254F168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254F170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253c280
	ctx.lr = 0x8254F180;
	sub_8253C280(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,12236
	ctx.r30.s64 = ctx.r11.s64 + 12236;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// bl 0x8253b780
	ctx.lr = 0x8254F1A4;
	sub_8253B780(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x8254F1B0;
	sub_8253BC48(ctx, base);
	// bl 0x831d59c0
	ctx.lr = 0x8254F1B4;
	sub_831D59C0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f204
	if (!cr6.eq) goto loc_8254F204;
	// bl 0x831d3050
	ctx.lr = 0x8254F1C4;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8253b3a0
	ctx.lr = 0x8254F1D4;
	sub_8253B3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254F1DC;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F1EC;
	sub_8253B570(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254F1F8;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254F204:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F210"))) PPC_WEAK_FUNC(sub_8254F210);
PPC_FUNC_IMPL(__imp__sub_8254F210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254F218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254F230;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8254f2d4
	if (!cr6.gt) goto loc_8254F2D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8254F248;
	sub_8253B0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254f28c
	if (cr6.eq) goto loc_8254F28C;
	// bl 0x8254ebd0
	ctx.lr = 0x8254F25C;
	sub_8254EBD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253f228
	ctx.lr = 0x8254F26C;
	sub_8253F228(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f2c4
	if (!cr6.eq) goto loc_8254F2C4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254eaa0
	ctx.lr = 0x8254F288;
	sub_8254EAA0(ctx, base);
	// b 0x8254f2c4
	goto loc_8254F2C4;
loc_8254F28C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12284
	ctx.r30.s64 = ctx.r11.s64 + 12284;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x8253d120
	ctx.lr = 0x8254F2A0;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254f2b8
	if (!cr6.eq) goto loc_8254F2B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254F2B8;
	sub_8253C558(ctx, base);
loc_8254F2B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8254F2C4;
	sub_8253ACE0(ctx, base);
loc_8254F2C4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x8254F2D4;
	sub_8253BBB8(ctx, base);
loc_8254F2D4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x8254F2E4;
	sub_8253B860(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F2F0"))) PPC_WEAK_FUNC(sub_8254F2F0);
PPC_FUNC_IMPL(__imp__sub_8254F2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,12480
	ctx.r5.s64 = ctx.r11.s64 + 12480;
	// b 0x8254f210
	sub_8254F210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F300"))) PPC_WEAK_FUNC(sub_8254F300);
PPC_FUNC_IMPL(__imp__sub_8254F300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,12484
	ctx.r5.s64 = ctx.r11.s64 + 12484;
	// b 0x8254f210
	sub_8254F210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F310"))) PPC_WEAK_FUNC(sub_8254F310);
PPC_FUNC_IMPL(__imp__sub_8254F310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254F318;
	__savegprlr_29(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254F32C;
	sub_8253CC48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253ca18
	ctx.lr = 0x8254F334;
	sub_8253CA18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d6b50
	ctx.lr = 0x8254F344;
	sub_831D6B50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254f3b0
	if (cr6.eq) goto loc_8254F3B0;
loc_8254F34C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8254F350:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8254f350
	if (!cr6.eq) goto loc_8254F350;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8254f384
	if (cr6.eq) goto loc_8254F384;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// beq cr6,0x8254f3d4
	if (cr6.eq) goto loc_8254F3D4;
loc_8254F384:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8253ca18
	ctx.lr = 0x8254F398;
	sub_8253CA18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d6b50
	ctx.lr = 0x8254F3A8;
	sub_831D6B50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f34c
	if (!cr6.eq) goto loc_8254F34C;
loc_8254F3B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253cb18
	ctx.lr = 0x8254F3B8;
	sub_8253CB18(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b168
	ctx.lr = 0x8254F3C4;
	sub_8253B168(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8254F3D4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8253cb18
	ctx.lr = 0x8254F3EC;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F3F8"))) PPC_WEAK_FUNC(sub_8254F3F8);
PPC_FUNC_IMPL(__imp__sub_8254F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254F400;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8253cc48
	ctx.lr = 0x8254F418;
	sub_8253CC48(ctx, base);
	// li r30,512
	ctx.r30.s64 = 512;
loc_8254F41C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253ca18
	ctx.lr = 0x8254F424;
	sub_8253CA18(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x8254f430
	if (!cr6.gt) goto loc_8254F430;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8254F430:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253f2a0
	ctx.lr = 0x8254F440;
	sub_8253F2A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x8254f45c
	if (cr0.eq) goto loc_8254F45C;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x8254f41c
	if (cr6.eq) goto loc_8254F41C;
loc_8254F45C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253cb18
	ctx.lr = 0x8254F464;
	sub_8253CB18(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8254f484
	if (cr6.eq) goto loc_8254F484;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253b168
	ctx.lr = 0x8254F478;
	sub_8253B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8254f488
	if (cr6.eq) goto loc_8254F488;
loc_8254F484:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8254F488:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F490"))) PPC_WEAK_FUNC(sub_8254F490);
PPC_FUNC_IMPL(__imp__sub_8254F490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8254F498;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8254F4AC;
	sub_8253AA58(ctx, base);
	// addi r27,r3,-1
	ctx.r27.s64 = ctx.r3.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d6ec0
	ctx.lr = 0x8254F4B8;
	sub_831D6EC0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r26,r11,12236
	ctx.r26.s64 = ctx.r11.s64 + 12236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254f530
	if (!cr6.eq) goto loc_8254F530;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8254f310
	ctx.lr = 0x8254F4D4;
	sub_8254F310(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r24,1
	ctx.r28.s64 = ctx.r24.s64 + 1;
loc_8254F4DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2e90
	ctx.lr = 0x8254F4E4;
	sub_831D2E90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254f698
	if (cr6.eq) goto loc_8254F698;
	// bl 0x831d3050
	ctx.lr = 0x8254F4F0;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8253b3a0
	ctx.lr = 0x8254F500;
	sub_8253B3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254F508;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F518;
	sub_8253B570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254F524;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254F530:
	// addi r5,r26,260
	ctx.r5.s64 = ctx.r26.s64 + 260;
	// addi r4,r27,20
	ctx.r4.s64 = ctx.r27.s64 + 20;
	// bl 0x8253c670
	ctx.lr = 0x8254F53C;
	sub_8253C670(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_8254F548:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8254f4dc
	if (cr6.eq) goto loc_8254F4DC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8254F560;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254f5c8
	if (!cr6.eq) goto loc_8254F5C8;
	// bl 0x8253b008
	ctx.lr = 0x8254F574;
	sub_8253B008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8254f5b4
	if (!cr6.eq) goto loc_8254F5B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cf228
	ctx.lr = 0x8254F588;
	sub_831CF228(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831cf7a0
	ctx.lr = 0x8254F594;
	sub_831CF7A0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x8254F5A4;
	sub_8253B410(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8254f670
	goto loc_8254F670;
loc_8254F5B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f3f8
	ctx.lr = 0x8254F5C0;
	sub_8254F3F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8254f670
	goto loc_8254F670;
loc_8254F5C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8253b0c0
	ctx.lr = 0x8254F5D0;
	sub_8253B0C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8254f5e8
	if (cr6.eq) goto loc_8254F5E8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// beq cr6,0x8254f5f8
	if (cr6.eq) goto loc_8254F5F8;
loc_8254F5E8:
	// addi r5,r26,280
	ctx.r5.s64 = ctx.r26.s64 + 280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254F5F8;
	sub_8253CF78(ctx, base);
loc_8254F5F8:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x8254f65c
	if (cr6.eq) goto loc_8254F65C;
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(ctx.r11.u32, 108, xer);
	// beq cr6,0x8254f648
	if (cr6.eq) goto loc_8254F648;
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(ctx.r11.u32, 110, xer);
	// bne cr6,0x8254f680
	if (!cr6.eq) goto loc_8254F680;
	// addi r4,r26,256
	ctx.r4.s64 = ctx.r26.s64 + 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d6ae8
	ctx.lr = 0x8254F624;
	sub_831D6AE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254f63c
	if (!cr6.eq) goto loc_8254F63C;
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8253b3c0
	ctx.lr = 0x8254F638;
	sub_8253B3C0(ctx, base);
	// b 0x8254f66c
	goto loc_8254F66C;
loc_8254F63C:
	// bl 0x8253b3a0
	ctx.lr = 0x8254F640;
	sub_8253B3A0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8254f670
	goto loc_8254F670;
loc_8254F648:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f310
	ctx.lr = 0x8254F654;
	sub_8254F310(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8254f670
	goto loc_8254F670;
loc_8254F65C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f3f8
	ctx.lr = 0x8254F66C;
	sub_8254F3F8(ctx, base);
loc_8254F66C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8254F670:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8254f548
	if (!cr6.eq) goto loc_8254F548;
	// b 0x8254f4dc
	goto loc_8254F4DC;
loc_8254F680:
	// addi r5,r26,296
	ctx.r5.s64 = ctx.r26.s64 + 296;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x8254F690;
	sub_8253CF78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8254F698:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x8254f6b4
	if (!cr6.eq) goto loc_8254F6B4;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254F6AC;
	sub_8253AA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x8254F6B4;
	sub_8253B3A0(ctx, base);
loc_8254F6B4:
	// subf r3,r24,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r24.s64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F6C0"))) PPC_WEAK_FUNC(sub_8254F6C0);
PPC_FUNC_IMPL(__imp__sub_8254F6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b860
	ctx.lr = 0x8254F6E4;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b268
	ctx.lr = 0x8254F6F0;
	sub_8253B268(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8254f714
	if (!cr6.eq) goto loc_8254F714;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,12452
	ctx.r4.s64 = ctx.r10.s64 + 12452;
	// lwz r5,800(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// bl 0x8253c558
	ctx.lr = 0x8254F714;
	sub_8253C558(ctx, base);
loc_8254F714:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f490
	ctx.lr = 0x8254F724;
	sub_8254F490(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254F73C"))) PPC_WEAK_FUNC(sub_8254F73C);
PPC_FUNC_IMPL(__imp__sub_8254F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254F740"))) PPC_WEAK_FUNC(sub_8254F740);
PPC_FUNC_IMPL(__imp__sub_8254F740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254F748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12284
	ctx.r30.s64 = ctx.r11.s64 + 12284;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x8253d120
	ctx.lr = 0x8254F764;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254f780
	if (!cr6.eq) goto loc_8254F780;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254F780;
	sub_8253C558(ctx, base);
loc_8254F780:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f490
	ctx.lr = 0x8254F790;
	sub_8254F490(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F798"))) PPC_WEAK_FUNC(sub_8254F798);
PPC_FUNC_IMPL(__imp__sub_8254F798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254F7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b268
	ctx.lr = 0x8254F7B0;
	sub_8253B268(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r29,r11,12572
	ctx.r29.s64 = ctx.r11.s64 + 12572;
	// bne cr6,0x8254f7d0
	if (!cr6.eq) goto loc_8254F7D0;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254F7D0;
	sub_8253C558(ctx, base);
loc_8254F7D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f310
	ctx.lr = 0x8254F7DC;
	sub_8254F310(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2e90
	ctx.lr = 0x8254F7E8;
	sub_831D2E90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254f814
	if (cr6.eq) goto loc_8254F814;
	// bl 0x831d3050
	ctx.lr = 0x8254F7F4;
	sub_831D3050(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831d2f30
	ctx.lr = 0x8254F7FC;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254F80C;
	sub_8253C558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254F814:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x8254f828
	if (cr6.eq) goto loc_8254F828;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254F828:
	// li r4,-10004
	ctx.r4.s64 = -10004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x8254F834;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254f85c
	if (cr6.eq) goto loc_8254F85C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8254F848;
	sub_8253AA70(ctx, base);
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8254F854;
	sub_8253ACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254ed90
	ctx.lr = 0x8254F85C;
	sub_8254ED90(ctx, base);
loc_8254F85C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F868"))) PPC_WEAK_FUNC(sub_8254F868);
PPC_FUNC_IMPL(__imp__sub_8254F868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8254F870;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8254F884;
	sub_8253AA58(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addic. r28,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r28.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r26,r11,12236
	ctx.r26.s64 = ctx.r11.s64 + 12236;
	// beq 0x8254f8f0
	if (cr0.eq) goto loc_8254F8F0;
loc_8254F898:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// bl 0x8253ad28
	ctx.lr = 0x8254F8A8;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8254f918
	if (!cr6.eq) goto loc_8254F918;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8254f8e0
	if (cr6.eq) goto loc_8254F8E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253afb0
	ctx.lr = 0x8254F8C4;
	sub_8253AFB0(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r26,340
	ctx.r4.s64 = ctx.r26.s64 + 340;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831d3290
	ctx.lr = 0x8254F8D8;
	sub_831D3290(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8254f94c
	if (cr6.gt) goto loc_8254F94C;
loc_8254F8E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254F8E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x8254f898
	if (!cr6.eq) goto loc_8254F898;
loc_8254F8F0:
	// bl 0x831d3050
	ctx.lr = 0x8254F8F4;
	sub_831D3050(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8254f954
	if (cr6.eq) goto loc_8254F954;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x8254F90C;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8254F918:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d280
	ctx.lr = 0x8254F928;
	sub_8253D280(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x8254f8e0
	if (cr6.eq) goto loc_8254F8E0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253f2c8
	ctx.lr = 0x8254F940;
	sub_8253F2C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x8254f8e0
	if (!cr6.eq) goto loc_8254F8E0;
loc_8254F94C:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8254f8e4
	goto loc_8254F8E4;
loc_8254F954:
	// bl 0x8253b3a0
	ctx.lr = 0x8254F958;
	sub_8253B3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254F960;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254F970;
	sub_8253B570(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254F97C;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254F988"))) PPC_WEAK_FUNC(sub_8254F988);
PPC_FUNC_IMPL(__imp__sub_8254F988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b860
	ctx.lr = 0x8254F9AC;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b268
	ctx.lr = 0x8254F9B8;
	sub_8253B268(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8254f9e0
	if (!cr6.eq) goto loc_8254F9E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,800
	ctx.r9.s64 = ctx.r11.s64 + 800;
	// addi r4,r10,12452
	ctx.r4.s64 = ctx.r10.s64 + 12452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8253c558
	ctx.lr = 0x8254F9E0;
	sub_8253C558(ctx, base);
loc_8254F9E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f868
	ctx.lr = 0x8254F9F0;
	sub_8254F868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8254FA08"))) PPC_WEAK_FUNC(sub_8254FA08);
PPC_FUNC_IMPL(__imp__sub_8254FA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8254FA10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12284
	ctx.r30.s64 = ctx.r11.s64 + 12284;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x8253d120
	ctx.lr = 0x8254FA2C;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254fa48
	if (!cr6.eq) goto loc_8254FA48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254FA48;
	sub_8253C558(ctx, base);
loc_8254FA48:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254f868
	ctx.lr = 0x8254FA58;
	sub_8254F868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FA60"))) PPC_WEAK_FUNC(sub_8254FA60);
PPC_FUNC_IMPL(__imp__sub_8254FA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254FA68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12236
	ctx.r30.s64 = ctx.r11.s64 + 12236;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// bl 0x8253d120
	ctx.lr = 0x8254FA84;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254faa0
	if (!cr6.eq) goto loc_8254FAA0;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254FAA0;
	sub_8253C558(ctx, base);
loc_8254FAA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r30,360
	ctx.r5.s64 = ctx.r30.s64 + 360;
	// addi r29,r11,808
	ctx.r29.s64 = ctx.r11.s64 + 808;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r29,12
	ctx.r6.s64 = ctx.r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d798
	ctx.lr = 0x8254FAC0;
	sub_8253D798(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254FAD4;
	sub_8253D4B0(ctx, base);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x8253f2f0
	ctx.lr = 0x8254FAE8;
	sub_8253F2F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8254fb34
	if (cr6.eq) goto loc_8254FB34;
	// bl 0x831d3050
	ctx.lr = 0x8254FAF4;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8253b3a0
	ctx.lr = 0x8254FB04;
	sub_8253B3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254FB0C;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254FB1C;
	sub_8253B570(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254FB28;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254FB34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8253f318
	ctx.lr = 0x8254FB3C;
	sub_8253F318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254FB48;
	sub_8253B3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FB54"))) PPC_WEAK_FUNC(sub_8254FB54);
PPC_FUNC_IMPL(__imp__sub_8254FB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FB58"))) PPC_WEAK_FUNC(sub_8254FB58);
PPC_FUNC_IMPL(__imp__sub_8254FB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254FB60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r11,12236
	ctx.r29.s64 = ctx.r11.s64 + 12236;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r29,40
	ctx.r5.s64 = ctx.r29.s64 + 40;
	// bl 0x8253d120
	ctx.lr = 0x8254FB7C;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254fb98
	if (!cr6.eq) goto loc_8254FB98;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254FB98;
	sub_8253C558(ctx, base);
loc_8254FB98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,836
	ctx.r30.s64 = ctx.r11.s64 + 836;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d798
	ctx.lr = 0x8254FBB8;
	sub_8253D798(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x8254FBCC;
	sub_8253D4B0(ctx, base);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x831cff10
	ctx.lr = 0x8254FBE4;
	sub_831CFF10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831d3050
	ctx.lr = 0x8254FBEC;
	sub_831D3050(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8254fc10
	if (!cr6.eq) goto loc_8254FC10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x8254FC04;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8254FC10:
	// bl 0x8253b3a0
	ctx.lr = 0x8254FC14;
	sub_8253B3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254FC1C;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254FC2C;
	sub_8253B570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254FC38;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FC44"))) PPC_WEAK_FUNC(sub_8254FC44);
PPC_FUNC_IMPL(__imp__sub_8254FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FC48"))) PPC_WEAK_FUNC(sub_8254FC48);
PPC_FUNC_IMPL(__imp__sub_8254FC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254FC50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b860
	ctx.lr = 0x8254FC64;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b268
	ctx.lr = 0x8254FC70;
	sub_8253B268(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r29,r11,12236
	ctx.r29.s64 = ctx.r11.s64 + 12236;
	// bne cr6,0x8254fc9c
	if (!cr6.eq) goto loc_8254FC9C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r29,216
	ctx.r4.s64 = ctx.r29.s64 + 216;
	// addi r10,r11,800
	ctx.r10.s64 = ctx.r11.s64 + 800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8253c558
	ctx.lr = 0x8254FC9C;
	sub_8253C558(ctx, base);
loc_8254FC9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cfe08
	ctx.lr = 0x8254FCA4;
	sub_831CFE08(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x831d3050
	ctx.lr = 0x8254FCB0;
	sub_831D3050(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254fcd4
	if (cr6.eq) goto loc_8254FCD4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x8254FCC8;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254FCD4:
	// bl 0x8253b3a0
	ctx.lr = 0x8254FCD8;
	sub_8253B3A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254FCE0;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254FCF0;
	sub_8253B570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254FCFC;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FD08"))) PPC_WEAK_FUNC(sub_8254FD08);
PPC_FUNC_IMPL(__imp__sub_8254FD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254FD10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12236
	ctx.r30.s64 = ctx.r11.s64 + 12236;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// bl 0x8253d120
	ctx.lr = 0x8254FD2C;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8254fd48
	if (!cr6.eq) goto loc_8254FD48;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8254FD48;
	sub_8253C558(ctx, base);
loc_8254FD48:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x831cfe08
	ctx.lr = 0x8254FD50;
	sub_831CFE08(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x831d3050
	ctx.lr = 0x8254FD5C;
	sub_831D3050(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8254fd80
	if (cr6.eq) goto loc_8254FD80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x8254FD74;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8254FD80:
	// bl 0x8253b3a0
	ctx.lr = 0x8254FD84;
	sub_8253B3A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d2f30
	ctx.lr = 0x8254FD8C;
	sub_831D2F30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8254FD9C;
	sub_8253B570(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8254FDA8;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FDB4"))) PPC_WEAK_FUNC(sub_8254FDB4);
PPC_FUNC_IMPL(__imp__sub_8254FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8254FDB8"))) PPC_WEAK_FUNC(sub_8254FDB8);
PPC_FUNC_IMPL(__imp__sub_8254FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8254FDC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8253c280
	ctx.lr = 0x8254FDDC;
	sub_8253C280(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r10,12316
	ctx.r5.s64 = ctx.r10.s64 + 12316;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x8253b780
	ctx.lr = 0x8254FDFC;
	sub_8253B780(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x8254FE08;
	sub_8253BC48(ctx, base);
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8254fe30
	if (!cr6.gt) goto loc_8254FE30;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8254FE20;
	sub_8253ACE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x8254FE30;
	sub_8253BBB8(ctx, base);
loc_8254FE30:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8254FE3C;
	sub_8253ACE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bd40
	ctx.lr = 0x8254FE48;
	sub_8253BD40(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8254FE58;
	sub_8253BA90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8254FE60"))) PPC_WEAK_FUNC(sub_8254FE60);
PPC_FUNC_IMPL(__imp__sub_8254FE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8254FE68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,12316
	ctx.r31.s64 = ctx.r11.s64 + 12316;
	// addi r4,r31,468
	ctx.r4.s64 = ctx.r31.s64 + 468;
	// bl 0x8253c5d8
	ctx.lr = 0x8254FE80;
	sub_8253C5D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253ace0
	ctx.lr = 0x8254FE8C;
	sub_8253ACE0(ctx, base);
	// addi r5,r31,476
	ctx.r5.s64 = ctx.r31.s64 + 476;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254FE9C;
	sub_8253BA90(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r10,960
	ctx.r30.s64 = ctx.r10.s64 + 960;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8253d878
	ctx.lr = 0x8254FEB4;
	sub_8253D878(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x8254FEC4;
	sub_8253B8B8(ctx, base);
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-4880
	ctx.r4.s64 = ctx.r9.s64 + -4880;
	// bl 0x8253b5e8
	ctx.lr = 0x8254FED8;
	sub_8253B5E8(ctx, base);
	// addi r5,r31,484
	ctx.r5.s64 = ctx.r31.s64 + 484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254FEE8;
	sub_8253BA90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// bl 0x8253abb8
	ctx.lr = 0x8254FEF4;
	sub_8253ABB8(ctx, base);
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// bl 0x8253d878
	ctx.lr = 0x8254FF04;
	sub_8253D878(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x8254FF14;
	sub_8253B8B8(ctx, base);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-5064
	ctx.r4.s64 = ctx.r8.s64 + -5064;
	// bl 0x8253b5e8
	ctx.lr = 0x8254FF28;
	sub_8253B5E8(ctx, base);
	// addi r5,r31,484
	ctx.r5.s64 = ctx.r31.s64 + 484;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8254FF38;
	sub_8253BA90(ctx, base);
	// bl 0x831cf870
	ctx.lr = 0x8254FF3C;
	sub_831CF870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r31,496
	ctx.r6.s64 = ctx.r31.s64 + 496;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8254fdb8
	ctx.lr = 0x8254FF50;
	sub_8254FDB8(ctx, base);
	// bl 0x831cf870
	ctx.lr = 0x8254FF54;
	sub_831CF870(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r6,r31,504
	ctx.r6.s64 = ctx.r31.s64 + 504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8254fdb8
	ctx.lr = 0x8254FF68;
	sub_8254FDB8(ctx, base);
	// bl 0x831cf870
	ctx.lr = 0x8254FF6C;
	sub_831CF870(ctx, base);
	// addi r30,r3,64
	ctx.r30.s64 = ctx.r3.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8253c280
	ctx.lr = 0x8254FF7C;
	sub_8253C280(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// bl 0x8253b780
	ctx.lr = 0x8254FF98;
	sub_8253B780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253bc48
	ctx.lr = 0x8254FFA4;
	sub_8253BC48(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ace0
	ctx.lr = 0x8254FFB4;
	sub_8253ACE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253bd40
	ctx.lr = 0x8254FFC0;
	sub_8253BD40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,512
	ctx.r5.s64 = ctx.r31.s64 + 512;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x8253ba90
	ctx.lr = 0x8254FFD0;
	sub_8253BA90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253aa70
	ctx.lr = 0x8254FFDC;
	sub_8253AA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,520
	ctx.r5.s64 = ctx.r31.s64 + 520;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b780
	ctx.lr = 0x8254FFEC;
	sub_8253B780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x8254FFFC;
	sub_8253B8B8(ctx, base);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-4992
	ctx.r4.s64 = ctx.r6.s64 + -4992;
	// bl 0x8253b5e8
	ctx.lr = 0x82550010;
	sub_8253B5E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,484
	ctx.r5.s64 = ctx.r31.s64 + 484;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x82550020;
	sub_8253BA90(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253bd40
	ctx.lr = 0x8255002C;
	sub_8253BD40(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550038;
	sub_8253AA70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550044"))) PPC_WEAK_FUNC(sub_82550044);
PPC_FUNC_IMPL(__imp__sub_82550044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550048"))) PPC_WEAK_FUNC(sub_82550048);
PPC_FUNC_IMPL(__imp__sub_82550048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,12284
	ctx.r30.s64 = ctx.r11.s64 + 12284;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// bl 0x8253d120
	ctx.lr = 0x82550074;
	sub_8253D120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8255008c
	if (!cr6.eq) goto loc_8255008C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8255008C;
	sub_8253C558(ctx, base);
loc_8255008C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550098;
	sub_8253ACE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x825500A4;
	sub_8253B6C0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-2152
	ctx.r4.s64 = ctx.r11.s64 + -2152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x825500B8;
	sub_8253B5E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825500D4"))) PPC_WEAK_FUNC(sub_825500D4);
PPC_FUNC_IMPL(__imp__sub_825500D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825500D8"))) PPC_WEAK_FUNC(sub_825500D8);
PPC_FUNC_IMPL(__imp__sub_825500D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825500E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825500F0;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x82550118
	if (cr6.gt) goto loc_82550118;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// bl 0x8253b860
	ctx.lr = 0x82550108;
	sub_8253B860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550048
	ctx.lr = 0x82550110;
	sub_82550048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82550118:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d280
	ctx.lr = 0x82550124;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254ebd0
	ctx.lr = 0x82550130;
	sub_8254EBD0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,12488
	ctx.r4.s64 = ctx.r11.s64 + 12488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253f228
	ctx.lr = 0x82550144;
	sub_8253F228(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82550160
	if (!cr6.eq) goto loc_82550160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254eaa0
	ctx.lr = 0x82550160;
	sub_8254EAA0(ctx, base);
loc_82550160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82550168;
	sub_8253AA58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550174;
	sub_8253ACE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x82550180;
	sub_8253B6C0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-2152
	ctx.r4.s64 = ctx.r11.s64 + -2152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x82550194;
	sub_8253B5E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825501A0"))) PPC_WEAK_FUNC(sub_825501A0);
PPC_FUNC_IMPL(__imp__sub_825501A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825501A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x825501BC;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x825501C8;
	sub_8253B168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x825501DC;
	sub_8253D1E8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// blt cr6,0x8255024c
	if (cr6.lt) goto loc_8255024C;
loc_825501E8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825501F4;
	sub_8253ACE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x82550200;
	sub_8253B3E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550210;
	sub_8253B860(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82550220;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8255022C;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82550258
	if (!cr6.eq) goto loc_82550258;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550240;
	sub_8253AA70(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// ble cr6,0x825501e8
	if (!cr6.gt) goto loc_825501E8;
loc_8255024C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82550258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550264"))) PPC_WEAK_FUNC(sub_82550264);
PPC_FUNC_IMPL(__imp__sub_82550264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550268"))) PPC_WEAK_FUNC(sub_82550268);
PPC_FUNC_IMPL(__imp__sub_82550268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82550288;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d1e8
	ctx.lr = 0x82550298;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x825502A0;
	sub_8253B3A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c140
	ctx.lr = 0x825502AC;
	sub_8253C140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255031c
	if (cr6.eq) goto loc_8255031C;
loc_825502B4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825502C0;
	sub_8253ACE0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825502CC;
	sub_8253ACE0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825502D8;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x825502E8;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825502F4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82550334
	if (!cr6.eq) goto loc_82550334;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550308;
	sub_8253AA70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c140
	ctx.lr = 0x82550314;
	sub_8253C140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825502b4
	if (!cr6.eq) goto loc_825502B4;
loc_8255031C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82550334:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255034C"))) PPC_WEAK_FUNC(sub_8255034C);
PPC_FUNC_IMPL(__imp__sub_8255034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550350"))) PPC_WEAK_FUNC(sub_82550350);
PPC_FUNC_IMPL(__imp__sub_82550350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f31,9000(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// bl 0x8253d1e8
	ctx.lr = 0x8255037C;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82550384;
	sub_8253B3A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c140
	ctx.lr = 0x82550390;
	sub_8253C140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825503e4
	if (cr6.eq) goto loc_825503E4;
loc_82550398:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x825503A4;
	sub_8253AA70(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825503B0;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825503d0
	if (!cr6.eq) goto loc_825503D0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253afb0
	ctx.lr = 0x825503C4;
	sub_8253AFB0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x825503d0
	if (!cr6.gt) goto loc_825503D0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_825503D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c140
	ctx.lr = 0x825503DC;
	sub_8253C140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82550398
	if (!cr6.eq) goto loc_82550398;
loc_825503E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x825503F0;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255040C"))) PPC_WEAK_FUNC(sub_8255040C);
PPC_FUNC_IMPL(__imp__sub_8255040C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550410"))) PPC_WEAK_FUNC(sub_82550410);
PPC_FUNC_IMPL(__imp__sub_82550410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82550430;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x8255043C;
	sub_8253B168(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x82550448;
	sub_8253B3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550460"))) PPC_WEAK_FUNC(sub_82550460);
PPC_FUNC_IMPL(__imp__sub_82550460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82550480;
	sub_8253D1E8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,12844
	ctx.r4.s64 = ctx.r11.s64 + 12844;
	// bl 0x8253c558
	ctx.lr = 0x82550490;
	sub_8253C558(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x8255049C;
	sub_8253ACE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825504B4"))) PPC_WEAK_FUNC(sub_825504B4);
PPC_FUNC_IMPL(__imp__sub_825504B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825504B8"))) PPC_WEAK_FUNC(sub_825504B8);
PPC_FUNC_IMPL(__imp__sub_825504B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825504C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x825504D4;
	sub_8253D1E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x825504E0;
	sub_8253B168(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253aa58
	ctx.lr = 0x825504EC;
	sub_8253AA58(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82550568
	if (cr6.eq) goto loc_82550568;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82550514
	if (cr6.eq) goto loc_82550514;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,12864
	ctx.r4.s64 = ctx.r11.s64 + 12864;
	// bl 0x8253c558
	ctx.lr = 0x8255050C;
	sub_8253C558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82550514:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d458
	ctx.lr = 0x8255051C;
	sub_8253D458(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bge cr6,0x82550530
	if (!cr6.lt) goto loc_82550530;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r3
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r3.s32, xer);
loc_82550530:
	// ble cr6,0x8255056c
	if (!cr6.gt) goto loc_8255056C;
loc_82550534:
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550548;
	sub_8253B860(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550558;
	sub_8253BBB8(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bgt cr6,0x82550534
	if (cr6.gt) goto loc_82550534;
	// b 0x8255056c
	goto loc_8255056C;
loc_82550568:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8255056C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x8255057C;
	sub_8253BBB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550588"))) PPC_WEAK_FUNC(sub_82550588);
PPC_FUNC_IMPL(__imp__sub_82550588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82550590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x825505A4;
	sub_8253D1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x825505B0;
	sub_8253B168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x825505C4;
	sub_8253D4B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82550644
	if (cr6.lt) goto loc_82550644;
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, xer);
	// bgt cr6,0x82550644
	if (cr6.gt) goto loc_82550644;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b860
	ctx.lr = 0x825505E8;
	sub_8253B860(ctx, base);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bge cr6,0x82550620
	if (!cr6.lt) goto loc_82550620;
loc_825505F0:
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550604;
	sub_8253B860(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550614;
	sub_8253BBB8(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x825505f0
	if (cr6.lt) goto loc_825505F0;
loc_82550620:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82550628;
	sub_8253B3A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550638;
	sub_8253BBB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82550644:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550650"))) PPC_WEAK_FUNC(sub_82550650);
PPC_FUNC_IMPL(__imp__sub_82550650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82550658;
	__savegprlr_27(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-19445
	ctx.r5.s64 = ctx.r11.s64 + -19445;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d2c0
	ctx.lr = 0x82550674;
	sub_8253D2C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d1e8
	ctx.lr = 0x82550688;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253d4b0
	ctx.lr = 0x82550698;
	sub_8253D4B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825506A8;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x825506c0
	if (cr6.gt) goto loc_825506C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x825506BC;
	sub_8253B168(ctx, base);
	// b 0x825506c8
	goto loc_825506C8;
loc_825506C0:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8253d458
	ctx.lr = 0x825506C8;
	sub_8253D458(ctx, base);
loc_825506C8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cc48
	ctx.lr = 0x825506D8;
	sub_8253CC48(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// addi r28,r11,12904
	ctx.r28.s64 = ctx.r11.s64 + 12904;
	// bge cr6,0x82550760
	if (!cr6.lt) goto loc_82550760;
loc_825506E8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x825506F8;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x82550704;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82550738
	if (!cr6.eq) goto loc_82550738;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550718;
	sub_8253AD28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad70
	ctx.lr = 0x82550724;
	sub_8253AD70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x82550738;
	sub_8253C558(ctx, base);
loc_82550738:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb90
	ctx.lr = 0x82550740;
	sub_8253CB90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8253ca88
	ctx.lr = 0x82550750;
	sub_8253CA88(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x825506e8
	if (cr6.lt) goto loc_825506E8;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
loc_82550760:
	// bne cr6,0x825507bc
	if (!cr6.eq) goto loc_825507BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550774;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x82550780;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825507b4
	if (!cr6.eq) goto loc_825507B4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550794;
	sub_8253AD28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad70
	ctx.lr = 0x825507A0;
	sub_8253AD70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x825507B4;
	sub_8253C558(ctx, base);
loc_825507B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb90
	ctx.lr = 0x825507BC;
	sub_8253CB90(ctx, base);
loc_825507BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253cb18
	ctx.lr = 0x825507C4;
	sub_8253CB18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825507D0"))) PPC_WEAK_FUNC(sub_825507D0);
PPC_FUNC_IMPL(__imp__sub_825507D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825507D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x82550ce4
	if (!cr6.lt) goto loc_82550CE4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r24,r11,12996
	ctx.r24.s64 = ctx.r11.s64 + 12996;
loc_825507F8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550808;
	sub_8253B860(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550818;
	sub_8253B860(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550824;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550884
	if (cr6.eq) goto loc_82550884;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ace0
	ctx.lr = 0x82550838;
	sub_8253ACE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550844;
	sub_8253ACE0(ctx, base);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550850;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82550860;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x8255086C;
	sub_8253B068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8255087C;
	sub_8253AA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82550890
	goto loc_82550890;
loc_82550884:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253af38
	ctx.lr = 0x82550890;
	sub_8253AF38(ctx, base);
loc_82550890:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825508bc
	if (cr6.eq) goto loc_825508BC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253bbb8
	ctx.lr = 0x825508A8;
	sub_8253BBB8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x825508B8;
	sub_8253BBB8(ctx, base);
	// b 0x825508c4
	goto loc_825508C4;
loc_825508BC:
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x8253aa70
	ctx.lr = 0x825508C4;
	sub_8253AA70(ctx, base);
loc_825508C4:
	// subf r28,r25,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r25.s64;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x82550ce4
	if (cr6.eq) goto loc_82550CE4;
	// add r11,r25,r26
	ctx.r11.u64 = ctx.r25.u64 + ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8253b860
	ctx.lr = 0x825508EC;
	sub_8253B860(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x825508FC;
	sub_8253B860(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550908;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550968
	if (cr6.eq) goto loc_82550968;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ace0
	ctx.lr = 0x8255091C;
	sub_8253ACE0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550928;
	sub_8253ACE0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550934;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82550944;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82550950;
	sub_8253B068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550960;
	sub_8253AA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82550974
	goto loc_82550974;
loc_82550968:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253af38
	ctx.lr = 0x82550974;
	sub_8253AF38(ctx, base);
loc_82550974:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825509a0
	if (cr6.eq) goto loc_825509A0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253bbb8
	ctx.lr = 0x8255098C;
	sub_8253BBB8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x8255099C;
	sub_8253BBB8(ctx, base);
	// b 0x82550a64
	goto loc_82550A64;
loc_825509A0:
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253aa70
	ctx.lr = 0x825509A8;
	sub_8253AA70(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x825509B8;
	sub_8253B860(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825509C4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550a24
	if (cr6.eq) goto loc_82550A24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ace0
	ctx.lr = 0x825509D8;
	sub_8253ACE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825509E4;
	sub_8253ACE0(ctx, base);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825509F0;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82550A00;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82550A0C;
	sub_8253B068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550A1C;
	sub_8253AA70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82550a30
	goto loc_82550A30;
loc_82550A24:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253af38
	ctx.lr = 0x82550A30;
	sub_8253AF38(ctx, base);
loc_82550A30:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550a5c
	if (cr6.eq) goto loc_82550A5C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253bbb8
	ctx.lr = 0x82550A48;
	sub_8253BBB8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550A58;
	sub_8253BBB8(ctx, base);
	// b 0x82550a64
	goto loc_82550A64;
loc_82550A5C:
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x8253aa70
	ctx.lr = 0x82550A64;
	sub_8253AA70(ctx, base);
loc_82550A64:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// beq cr6,0x82550ce4
	if (cr6.eq) goto loc_82550CE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550A7C;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550A88;
	sub_8253ACE0(ctx, base);
	// addi r27,r26,-1
	ctx.r27.s64 = ctx.r26.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550A9C;
	sub_8253B860(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550AAC;
	sub_8253BBB8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550ABC;
	sub_8253BBB8(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82550AC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550AD8;
	sub_8253B860(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550AE4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550b44
	if (cr6.eq) goto loc_82550B44;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ace0
	ctx.lr = 0x82550AF8;
	sub_8253ACE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550B04;
	sub_8253ACE0(ctx, base);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550B10;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82550B20;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82550B2C;
	sub_8253B068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550B3C;
	sub_8253AA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82550b50
	goto loc_82550B50;
loc_82550B44:
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253af38
	ctx.lr = 0x82550B50;
	sub_8253AF38(ctx, base);
loc_82550B50:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550b7c
	if (cr6.eq) goto loc_82550B7C;
	// cmpw cr6,r29,r26
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, xer);
	// ble cr6,0x82550b6c
	if (!cr6.gt) goto loc_82550B6C;
	// addi r4,r24,-36
	ctx.r4.s64 = ctx.r24.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82550B6C;
	sub_8253C558(ctx, base);
loc_82550B6C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550B78;
	sub_8253AA70(ctx, base);
	// b 0x82550ac4
	goto loc_82550AC4;
loc_82550B7C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550B90;
	sub_8253B860(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550B9C;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550bfc
	if (cr6.eq) goto loc_82550BFC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ace0
	ctx.lr = 0x82550BB0;
	sub_8253ACE0(ctx, base);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550BBC;
	sub_8253ACE0(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550BC8;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82550BD8;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82550BE4;
	sub_8253B068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550BF4;
	sub_8253AA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82550c08
	goto loc_82550C08;
loc_82550BFC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x8253af38
	ctx.lr = 0x82550C08;
	sub_8253AF38(ctx, base);
loc_82550C08:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82550c34
	if (cr6.eq) goto loc_82550C34;
	// cmpw cr6,r28,r25
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, xer);
	// bge cr6,0x82550c24
	if (!cr6.lt) goto loc_82550C24;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82550C24;
	sub_8253C558(ctx, base);
loc_82550C24:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550C30;
	sub_8253AA70(ctx, base);
	// b 0x82550b7c
	goto loc_82550B7C;
loc_82550C34:
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82550c60
	if (cr6.lt) goto loc_82550C60;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253bbb8
	ctx.lr = 0x82550C4C;
	sub_8253BBB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550C5C;
	sub_8253BBB8(ctx, base);
	// b 0x82550ac4
	goto loc_82550AC4;
loc_82550C60:
	// li r4,-4
	ctx.r4.s64 = -4;
	// bl 0x8253aa70
	ctx.lr = 0x82550C68;
	sub_8253AA70(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550C78;
	sub_8253B860(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x82550C88;
	sub_8253B860(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550C98;
	sub_8253BBB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82550CA8;
	sub_8253BBB8(ctx, base);
	// subf r11,r29,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r29.s64;
	// subf r10,r25,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x82550cc8
	if (!cr6.lt) goto loc_82550CC8;
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r25,r5,2
	ctx.r25.s64 = ctx.r5.s64 + 2;
	// b 0x82550cd4
	goto loc_82550CD4;
loc_82550CC8:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r26,r4,-2
	ctx.r26.s64 = ctx.r4.s64 + -2;
loc_82550CD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825507d0
	ctx.lr = 0x82550CDC;
	sub_825507D0(ctx, base);
	// cmpw cr6,r25,r26
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, xer);
	// blt cr6,0x825507f8
	if (cr6.lt) goto loc_825507F8;
loc_82550CE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550CEC"))) PPC_WEAK_FUNC(sub_82550CEC);
PPC_FUNC_IMPL(__imp__sub_82550CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550CF0"))) PPC_WEAK_FUNC(sub_82550CF0);
PPC_FUNC_IMPL(__imp__sub_82550CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82550D14;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x82550D20;
	sub_8253B168(ctx, base);
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-19444
	ctx.r5.s64 = ctx.r11.s64 + -19444;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x8253c670
	ctx.lr = 0x82550D38;
	sub_8253C670(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550D44;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82550d5c
	if (!cr6.gt) goto loc_82550D5C;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82550D5C;
	sub_8253D1E8(ctx, base);
loc_82550D5C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82550D68;
	sub_8253AA70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825507d0
	ctx.lr = 0x82550D78;
	sub_825507D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550D94"))) PPC_WEAK_FUNC(sub_82550D94);
PPC_FUNC_IMPL(__imp__sub_82550D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550D98"))) PPC_WEAK_FUNC(sub_82550D98);
PPC_FUNC_IMPL(__imp__sub_82550D98) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r5,r11,1040
	ctx.r5.s64 = ctx.r11.s64 + 1040;
	// addi r4,r10,13108
	ctx.r4.s64 = ctx.r10.s64 + 13108;
	// bl 0x8253d878
	ctx.lr = 0x82550DB8;
	sub_8253D878(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550DCC"))) PPC_WEAK_FUNC(sub_82550DCC);
PPC_FUNC_IMPL(__imp__sub_82550DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550DD0"))) PPC_WEAK_FUNC(sub_82550DD0);
PPC_FUNC_IMPL(__imp__sub_82550DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82550DD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,13280
	ctx.r30.s64 = ctx.r11.s64 + 13280;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b570
	ctx.lr = 0x82550DFC;
	sub_8253B570(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x8253b740
	ctx.lr = 0x82550E08;
	sub_8253B740(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82550E14;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82550e30
	if (cr6.eq) goto loc_82550E30;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b268
	ctx.lr = 0x82550E28;
	sub_8253B268(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82550E30:
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253aa70
	ctx.lr = 0x82550E38;
	sub_8253AA70(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c280
	ctx.lr = 0x82550E44;
	sub_8253C280(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8253b780
	ctx.lr = 0x82550E60;
	sub_8253B780(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x82550E6C;
	sub_8253BC48(ctx, base);
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x82550E80;
	sub_8253B570(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82550E8C;
	sub_8253ACE0(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba40
	ctx.lr = 0x82550E98;
	sub_8253BA40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82550EA4"))) PPC_WEAK_FUNC(sub_82550EA4);
PPC_FUNC_IMPL(__imp__sub_82550EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550EA8"))) PPC_WEAK_FUNC(sub_82550EA8);
PPC_FUNC_IMPL(__imp__sub_82550EA8) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,13288
	ctx.r5.s64 = ctx.r11.s64 + 13288;
	// bl 0x8253d120
	ctx.lr = 0x82550EC4;
	sub_8253D120(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550EE4"))) PPC_WEAK_FUNC(sub_82550EE4);
PPC_FUNC_IMPL(__imp__sub_82550EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82550EE8"))) PPC_WEAK_FUNC(sub_82550EE8);
PPC_FUNC_IMPL(__imp__sub_82550EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82550dd0
	ctx.lr = 0x82550F04;
	sub_82550DD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82550f38
	if (!cr6.eq) goto loc_82550F38;
	// addi r4,r11,13116
	ctx.r4.s64 = ctx.r11.s64 + 13116;
	// bl 0x8253b410
	ctx.lr = 0x82550F28;
	sub_8253B410(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82550f48
	goto loc_82550F48;
loc_82550F38:
	// addi r11,r11,13116
	ctx.r11.s64 = ctx.r11.s64 + 13116;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// bl 0x8253b410
	ctx.lr = 0x82550F44;
	sub_8253B410(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_82550F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82550F60"))) PPC_WEAK_FUNC(sub_82550F60);
PPC_FUNC_IMPL(__imp__sub_82550F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x82550F84;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d280
	ctx.lr = 0x82550F98;
	sub_8253D280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550ee8
	ctx.lr = 0x82550FA4;
	sub_82550EE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82550fb8
	if (!cr6.eq) goto loc_82550FB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82550ff4
	goto loc_82550FF4;
loc_82550FB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82550FC0;
	sub_8253B3A0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x82550FCC;
	sub_8253AB48(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// bne cr6,0x82550fe4
	if (!cr6.eq) goto loc_82550FE4;
	// addi r11,r11,13308
	ctx.r11.s64 = ctx.r11.s64 + 13308;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// b 0x82550fe8
	goto loc_82550FE8;
loc_82550FE4:
	// addi r4,r11,13308
	ctx.r4.s64 = ctx.r11.s64 + 13308;
loc_82550FE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82550FF0;
	sub_8253B478(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
loc_82550FF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255100C"))) PPC_WEAK_FUNC(sub_8255100C);
PPC_FUNC_IMPL(__imp__sub_8255100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551010"))) PPC_WEAK_FUNC(sub_82551010);
PPC_FUNC_IMPL(__imp__sub_82551010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82551018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r28,r11,13316
	ctx.r28.s64 = ctx.r11.s64 + 13316;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r28,12
	ctx.r6.s64 = ctx.r28.s64 + 12;
	// addi r5,r28,16
	ctx.r5.s64 = ctx.r28.s64 + 16;
	// bl 0x8253d688
	ctx.lr = 0x82551038;
	sub_8253D688(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// bl 0x8253b780
	ctx.lr = 0x8255104C;
	sub_8253B780(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8255105C;
	sub_8253B0C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82551078
	if (!cr6.eq) goto loc_82551078;
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253c558
	ctx.lr = 0x82551078;
	sub_8253C558(ctx, base);
loc_82551078:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19443
	ctx.r4.s64 = ctx.r11.s64 + -19443;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b410
	ctx.lr = 0x8255108C;
	sub_8253B410(ctx, base);
loc_8255108C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bne cr6,0x825510b4
	if (!cr6.eq) goto loc_825510B4;
loc_825510A4:
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x825510a4
	if (cr6.eq) goto loc_825510A4;
loc_825510B4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825511a0
	if (cr6.eq) goto loc_825511A0;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x831ceeb0
	ctx.lr = 0x825510D0;
	sub_831CEEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82551100
	if (!cr6.eq) goto loc_82551100;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825510E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825510e0
	if (!cr6.eq) goto loc_825510E0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82551100:
	// subf r5,r31,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b410
	ctx.lr = 0x82551110;
	sub_8253B410(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825511a0
	if (cr6.eq) goto loc_825511A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x8255112C;
	sub_8253B0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r28,52
	ctx.r5.s64 = ctx.r28.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8253d688
	ctx.lr = 0x82551140;
	sub_8253D688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253aae8
	ctx.lr = 0x82551150;
	sub_8253AAE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253f228
	ctx.lr = 0x8255115C;
	sub_8253F228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82551190
	if (!cr6.eq) goto loc_82551190;
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b570
	ctx.lr = 0x82551174;
	sub_8253B570(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253aae8
	ctx.lr = 0x82551180;
	sub_8253AAE8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253c1a0
	ctx.lr = 0x8255118C;
	sub_8253C1A0(ctx, base);
	// b 0x8255108c
	goto loc_8255108C;
loc_82551190:
	// bl 0x8253f278
	ctx.lr = 0x82551194;
	sub_8253F278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825511A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825511AC"))) PPC_WEAK_FUNC(sub_825511AC);
PPC_FUNC_IMPL(__imp__sub_825511AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825511B0"))) PPC_WEAK_FUNC(sub_825511B0);
PPC_FUNC_IMPL(__imp__sub_825511B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825511B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x825511D0;
	sub_8253B0C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b0c0
	ctx.lr = 0x825511E4;
	sub_8253B0C0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,13388
	ctx.r4.s64 = ctx.r11.s64 + 13388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8253c558
	ctx.lr = 0x82551200;
	sub_8253C558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551208"))) PPC_WEAK_FUNC(sub_82551208);
PPC_FUNC_IMPL(__imp__sub_82551208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8255122C;
	sub_8253D280(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,13436
	ctx.r5.s64 = ctx.r11.s64 + 13436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82551010
	ctx.lr = 0x82551240;
	sub_82551010(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255126c
	if (cr6.eq) goto loc_8255126C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cd60
	ctx.lr = 0x82551258;
	sub_8253CD60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255126c
	if (cr6.eq) goto loc_8255126C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825511b0
	ctx.lr = 0x8255126C;
	sub_825511B0(ctx, base);
loc_8255126C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551288"))) PPC_WEAK_FUNC(sub_82551288);
PPC_FUNC_IMPL(__imp__sub_82551288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82551290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13456
	ctx.r31.s64 = ctx.r11.s64 + 13456;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x831ceeb0
	ctx.lr = 0x825512B4;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825512c0
	if (cr6.eq) goto loc_825512C0;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
loc_825512C0:
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253d688
	ctx.lr = 0x825512D4;
	sub_8253D688(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b570
	ctx.lr = 0x825512E4;
	sub_8253B570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253aae8
	ctx.lr = 0x825512F4;
	sub_8253AAE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551300"))) PPC_WEAK_FUNC(sub_82551300);
PPC_FUNC_IMPL(__imp__sub_82551300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82551308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8255131C;
	sub_8253D280(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,13468
	ctx.r5.s64 = ctx.r11.s64 + 13468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82551010
	ctx.lr = 0x82551334;
	sub_82551010(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255136c
	if (cr6.eq) goto loc_8255136C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82551288
	ctx.lr = 0x8255134C;
	sub_82551288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550ee8
	ctx.lr = 0x82551358;
	sub_82550EE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255136c
	if (cr6.eq) goto loc_8255136C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825511b0
	ctx.lr = 0x8255136C;
	sub_825511B0(ctx, base);
loc_8255136C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551378"))) PPC_WEAK_FUNC(sub_82551378);
PPC_FUNC_IMPL(__imp__sub_82551378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82551380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x82551394;
	sub_8253D280(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x825513A0;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825513b0
	if (!cr6.eq) goto loc_825513B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825513B0:
	// subf r5,r30,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x825513C0;
	sub_8253B410(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x825513D0;
	sub_8253B0C0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r28,r11,13484
	ctx.r28.s64 = ctx.r11.s64 + 13484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// bl 0x82551010
	ctx.lr = 0x825513E8;
	sub_82551010(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8255143c
	if (cr6.eq) goto loc_8255143C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82551288
	ctx.lr = 0x82551400;
	sub_82551288(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550ee8
	ctx.lr = 0x8255140C;
	sub_82550EE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8255143c
	if (cr6.eq) goto loc_8255143C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82551428
	if (cr6.eq) goto loc_82551428;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825511b0
	ctx.lr = 0x82551428;
	sub_825511B0(ctx, base);
loc_82551428:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x8255143C;
	sub_8253B570(ctx, base);
loc_8255143C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551448"))) PPC_WEAK_FUNC(sub_82551448);
PPC_FUNC_IMPL(__imp__sub_82551448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82551450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x82551464;
	sub_8253D280(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,13560
	ctx.r30.s64 = ctx.r11.s64 + 13560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// bl 0x8253b780
	ctx.lr = 0x82551480;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8255148C;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x825514a0
	if (cr6.eq) goto loc_825514A0;
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x825514A0;
	sub_8253C558(ctx, base);
loc_825514A0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x825514B0;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825514BC;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825514d4
	if (!cr6.eq) goto loc_825514D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b570
	ctx.lr = 0x825514D4;
	sub_8253B570(ctx, base);
loc_825514D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825514E0"))) PPC_WEAK_FUNC(sub_825514E0);
PPC_FUNC_IMPL(__imp__sub_825514E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825514E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x825514FC;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253aa70
	ctx.lr = 0x8255150C;
	sub_8253AA70(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,13692
	ctx.r29.s64 = ctx.r11.s64 + 13692;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// bl 0x8253b780
	ctx.lr = 0x82551524;
	sub_8253B780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253b780
	ctx.lr = 0x82551534;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82551540;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82551580
	if (cr6.eq) goto loc_82551580;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b268
	ctx.lr = 0x82551554;
	sub_8253B268(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,1120
	ctx.r10.s64 = ctx.r11.s64 + 1120;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bne cr6,0x82551720
	if (!cr6.eq) goto loc_82551720;
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82551574;
	sub_8253C558(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82551580:
	// addi r5,r29,-44
	ctx.r5.s64 = ctx.r29.s64 + -44;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// bl 0x8253b780
	ctx.lr = 0x8255158C;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82551598;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x825515ac
	if (cr6.eq) goto loc_825515AC;
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x825515AC;
	sub_8253C558(ctx, base);
loc_825515AC:
	// lis r11,-31766
	ctx.r11.s64 = -2081816576;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-19442
	ctx.r4.s64 = ctx.r11.s64 + -19442;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x825515C0;
	sub_8253B410(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_825515C4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b860
	ctx.lr = 0x825515D4;
	sub_8253B860(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825515E0;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255160c
	if (!cr6.eq) goto loc_8255160C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x825515F8;
	sub_8253B0C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x8255160C;
	sub_8253C558(ctx, base);
loc_8255160C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82551618;
	sub_8253B478(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82551628;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82551634;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82551674
	if (cr6.eq) goto loc_82551674;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253ae28
	ctx.lr = 0x82551648;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82551664
	if (cr6.eq) goto loc_82551664;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253c1a0
	ctx.lr = 0x8255165C;
	sub_8253C1A0(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x825515c4
	goto loc_825515C4;
loc_82551664:
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253aa70
	ctx.lr = 0x8255166C;
	sub_8253AA70(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x825515c4
	goto loc_825515C4;
loc_82551674:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,1120
	ctx.r29.s64 = ctx.r11.s64 + 1120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8253b6e8
	ctx.lr = 0x82551684;
	sub_8253B6E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551694;
	sub_8253BA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x825516A0;
	sub_8253B478(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x825516B0;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825516BC;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825516d4
	if (cr6.eq) goto loc_825516D4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x825516D4;
	sub_8253BA90(ctx, base);
loc_825516D4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x825516E4;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b268
	ctx.lr = 0x825516F0;
	sub_8253B268(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bne cr6,0x82551720
	if (!cr6.eq) goto loc_82551720;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x82551704;
	sub_8253B6C0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551710;
	sub_8253ACE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551720;
	sub_8253BA90(ctx, base);
loc_82551720:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255172C"))) PPC_WEAK_FUNC(sub_8255172C);
PPC_FUNC_IMPL(__imp__sub_8255172C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551730"))) PPC_WEAK_FUNC(sub_82551730);
PPC_FUNC_IMPL(__imp__sub_82551730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82551738;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x8255174C;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82551758;
	sub_8253AA58(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// addi r29,r11,13724
	ctx.r29.s64 = ctx.r11.s64 + 13724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r29,64
	ctx.r5.s64 = ctx.r29.s64 + 64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x8253b780
	ctx.lr = 0x82551774;
	sub_8253B780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8253b780
	ctx.lr = 0x82551784;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82551790;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x825517f0
	if (cr6.eq) goto loc_825517F0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x825517A4;
	sub_8253AA70(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c7d8
	ctx.lr = 0x825517B8;
	sub_8253C7D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825517d8
	if (cr6.eq) goto loc_825517D8;
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x825517D0;
	sub_8253C558(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825517D8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253ace0
	ctx.lr = 0x825517E0;
	sub_8253ACE0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x825517F0;
	sub_8253BA90(ctx, base);
loc_825517F0:
	// addi r5,r29,104
	ctx.r5.s64 = ctx.r29.s64 + 104;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b780
	ctx.lr = 0x82551800;
	sub_8253B780(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8255180C;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82551824
	if (cr6.eq) goto loc_82551824;
	// bl 0x8253aa70
	ctx.lr = 0x82551820;
	sub_8253AA70(ctx, base);
	// b 0x8255189c
	goto loc_8255189C;
loc_82551824:
	// bl 0x8253aa70
	ctx.lr = 0x82551828;
	sub_8253AA70(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551834;
	sub_8253ACE0(ctx, base);
	// addi r5,r29,40
	ctx.r5.s64 = ctx.r29.s64 + 40;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551844;
	sub_8253BA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82551850;
	sub_8253B478(ctx, base);
	// addi r5,r29,44
	ctx.r5.s64 = ctx.r29.s64 + 44;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551860;
	sub_8253BA90(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceef0
	ctx.lr = 0x8255186C;
	sub_831CEEF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8255187c
	if (cr6.eq) goto loc_8255187C;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
loc_8255187C:
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x8255188C;
	sub_8253B410(ctx, base);
	// addi r5,r29,52
	ctx.r5.s64 = ctx.r29.s64 + 52;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x8255189C;
	sub_8253BA90(ctx, base);
loc_8255189C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825518A8;
	sub_8253ACE0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f918
	ctx.lr = 0x825518B8;
	sub_8253F918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825518ec
	if (cr6.eq) goto loc_825518EC;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82540950
	ctx.lr = 0x825518D0;
	sub_82540950(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825518ec
	if (cr6.eq) goto loc_825518EC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad98
	ctx.lr = 0x825518E4;
	sub_8253AD98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825518f8
	if (cr6.eq) goto loc_825518F8;
loc_825518EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x825518F8;
	sub_8253C558(ctx, base);
loc_825518F8:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551904;
	sub_8253ACE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bd40
	ctx.lr = 0x82551910;
	sub_8253BD40(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x8255191C;
	sub_8253AA70(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82551960
	if (cr6.lt) goto loc_82551960;
loc_8255192C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551938;
	sub_8253ACE0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551944;
	sub_8253ACE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x82551954;
	sub_8253BE10(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// ble cr6,0x8255192c
	if (!cr6.gt) goto loc_8255192C;
loc_82551960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255196C"))) PPC_WEAK_FUNC(sub_8255196C);
PPC_FUNC_IMPL(__imp__sub_8255196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551970"))) PPC_WEAK_FUNC(sub_82551970);
PPC_FUNC_IMPL(__imp__sub_82551970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82551990;
	sub_8253D1E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b920
	ctx.lr = 0x8255199C;
	sub_8253B920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825519cc
	if (!cr6.eq) goto loc_825519CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b8b8
	ctx.lr = 0x825519B4;
	sub_8253B8B8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825519C0;
	sub_8253ACE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x825519CC;
	sub_8253BC48(ctx, base);
loc_825519CC:
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825519D8;
	sub_8253ACE0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r5,r11,13836
	ctx.r5.s64 = ctx.r11.s64 + 13836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x825519EC;
	sub_8253BA90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551A04"))) PPC_WEAK_FUNC(sub_82551A04);
PPC_FUNC_IMPL(__imp__sub_82551A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551A08"))) PPC_WEAK_FUNC(sub_82551A08);
PPC_FUNC_IMPL(__imp__sub_82551A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82551A10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,14092
	ctx.r30.s64 = ctx.r11.s64 + 14092;
	// addi r4,r30,-204
	ctx.r4.s64 = ctx.r30.s64 + -204;
	// bl 0x8253c5d8
	ctx.lr = 0x82551A28;
	sub_8253C5D8(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,3752
	ctx.r4.s64 = ctx.r11.s64 + 3752;
	// bl 0x8253b5e8
	ctx.lr = 0x82551A3C;
	sub_8253B5E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x82551A4C;
	sub_8253BA90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,1148
	ctx.r28.s64 = ctx.r11.s64 + 1148;
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// bl 0x8253d878
	ctx.lr = 0x82551A64;
	sub_8253D878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253ace0
	ctx.lr = 0x82551A70;
	sub_8253ACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// bl 0x8253abb8
	ctx.lr = 0x82551A7C;
	sub_8253ABB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b8b8
	ctx.lr = 0x82551A8C;
	sub_8253B8B8(ctx, base);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82551ad0
	if (cr6.eq) goto loc_82551AD0;
loc_82551A9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x82551AA8;
	sub_8253B5E8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bbb8
	ctx.lr = 0x82551ABC;
	sub_8253BBB8(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,24
	ctx.r10.s64 = ctx.r28.s64 + 24;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82551a9c
	if (!cr6.eq) goto loc_82551A9C;
loc_82551AD0:
	// addi r5,r30,-176
	ctx.r5.s64 = ctx.r30.s64 + -176;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551AE0;
	sub_8253BA90(ctx, base);
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82551AEC;
	sub_8253B478(ctx, base);
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551AFC;
	sub_8253BA90(ctx, base);
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82551B08;
	sub_8253B478(ctx, base);
	// addi r5,r30,-44
	ctx.r5.s64 = ctx.r30.s64 + -44;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551B18;
	sub_8253BA90(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x82551B28;
	sub_8253B410(ctx, base);
	// addi r5,r30,-24
	ctx.r5.s64 = ctx.r30.s64 + -24;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551B38;
	sub_8253BA90(ctx, base);
	// addi r5,r30,-16
	ctx.r5.s64 = ctx.r30.s64 + -16;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c7d8
	ctx.lr = 0x82551B4C;
	sub_8253C7D8(ctx, base);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551B5C;
	sub_8253BA90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b8b8
	ctx.lr = 0x82551B6C;
	sub_8253B8B8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ba90
	ctx.lr = 0x82551B7C;
	sub_8253BA90(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551B88;
	sub_8253ACE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d878
	ctx.lr = 0x82551B98;
	sub_8253D878(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82551BA4;
	sub_8253AA70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551BB0"))) PPC_WEAK_FUNC(sub_82551BB0);
PPC_FUNC_IMPL(__imp__sub_82551BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82551BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x82551BCC;
	sub_8253D4B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82551c18
	if (!cr6.eq) goto loc_82551C18;
	// bl 0x8253d228
	ctx.lr = 0x82551BE4;
	sub_8253D228(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253ade0
	ctx.lr = 0x82551BF0;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82551cd8
	if (cr6.eq) goto loc_82551CD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253afb0
	ctx.lr = 0x82551C04;
	sub_8253AFB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b3c0
	ctx.lr = 0x82551C0C;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82551C18:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8253d280
	ctx.lr = 0x82551C20;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82551c34
	if (cr6.lt) goto loc_82551C34;
	// cmpwi cr6,r31,36
	cr6.compare<int32_t>(ctx.r31.s32, 36, xer);
	// ble cr6,0x82551c48
	if (!cr6.gt) goto loc_82551C48;
loc_82551C34:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,14100
	ctx.r5.s64 = ctx.r11.s64 + 14100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82551C48;
	sub_8253CF78(ctx, base);
loc_82551C48:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d0fd8
	ctx.lr = 0x82551C58;
	sub_831D0FD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82551cd8
	if (cr6.eq) goto loc_82551CD8;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x831d34e0
	ctx.lr = 0x82551C70;
	sub_831D34E0(ctx, base);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82551ca8
	if (cr6.eq) goto loc_82551CA8;
loc_82551C84:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzu r31,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831d34e0
	ctx.lr = 0x82551C94;
	sub_831D34E0(ctx, base);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82551c84
	if (!cr6.eq) goto loc_82551C84;
loc_82551CA8:
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82551cd8
	if (!cr6.eq) goto loc_82551CD8;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x82551CCC;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82551CD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82551CE0;
	sub_8253B3A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551CEC"))) PPC_WEAK_FUNC(sub_82551CEC);
PPC_FUNC_IMPL(__imp__sub_82551CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551CF0"))) PPC_WEAK_FUNC(sub_82551CF0);
PPC_FUNC_IMPL(__imp__sub_82551CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d4b0
	ctx.lr = 0x82551D14;
	sub_8253D4B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253aa70
	ctx.lr = 0x82551D24;
	sub_8253AA70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x82551D30;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82551d64
	if (cr6.eq) goto loc_82551D64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x82551d64
	if (!cr6.gt) goto loc_82551D64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c4c8
	ctx.lr = 0x82551D4C;
	sub_8253C4C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82551D58;
	sub_8253ACE0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c1a0
	ctx.lr = 0x82551D64;
	sub_8253C1A0(ctx, base);
loc_82551D64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c118
	ctx.lr = 0x82551D6C;
	sub_8253C118(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551D84"))) PPC_WEAK_FUNC(sub_82551D84);
PPC_FUNC_IMPL(__imp__sub_82551D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551D88"))) PPC_WEAK_FUNC(sub_82551D88);
PPC_FUNC_IMPL(__imp__sub_82551D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x82551DA4;
	sub_8253D228(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b920
	ctx.lr = 0x82551DB0;
	sub_8253B920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82551dc4
	if (!cr6.eq) goto loc_82551DC4;
	// bl 0x8253b3a0
	ctx.lr = 0x82551DC0;
	sub_8253B3A0(ctx, base);
	// b 0x82551dd4
	goto loc_82551DD4;
loc_82551DC4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,14120
	ctx.r5.s64 = ctx.r11.s64 + 14120;
	// bl 0x8253c6c8
	ctx.lr = 0x82551DD4;
	sub_8253C6C8(ctx, base);
loc_82551DD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551DEC"))) PPC_WEAK_FUNC(sub_82551DEC);
PPC_FUNC_IMPL(__imp__sub_82551DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551DF0"))) PPC_WEAK_FUNC(sub_82551DF0);
PPC_FUNC_IMPL(__imp__sub_82551DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82551DF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82551E08;
	sub_8253AD28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82551E1C;
	sub_8253D1E8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r11,14168
	ctx.r29.s64 = ctx.r11.s64 + 14168;
	// beq cr6,0x82551e44
	if (cr6.eq) goto loc_82551E44;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x82551e44
	if (cr6.eq) goto loc_82551E44;
	// addi r5,r29,-36
	ctx.r5.s64 = ctx.r29.s64 + -36;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82551E44;
	sub_8253CF78(ctx, base);
loc_82551E44:
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c6c8
	ctx.lr = 0x82551E54;
	sub_8253C6C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82551e68
	if (cr6.eq) goto loc_82551E68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82551E68;
	sub_8253C558(ctx, base);
loc_82551E68:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82551E74;
	sub_8253AA70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x82551E80;
	sub_8253BC48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E8C"))) PPC_WEAK_FUNC(sub_82551E8C);
PPC_FUNC_IMPL(__imp__sub_82551E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82551E90"))) PPC_WEAK_FUNC(sub_82551E90);
PPC_FUNC_IMPL(__imp__sub_82551E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82551E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82551EAC;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82551ec8
	if (!cr6.eq) goto loc_82551EC8;
	// bl 0x8253ace0
	ctx.lr = 0x82551EC0;
	sub_8253ACE0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82551EC8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82551edc
	if (cr6.eq) goto loc_82551EDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8253d4b0
	ctx.lr = 0x82551ED8;
	sub_8253D4B0(ctx, base);
	// b 0x82551ee0
	goto loc_82551EE0;
loc_82551EDC:
	// bl 0x8253d458
	ctx.lr = 0x82551EE0;
	sub_8253D458(ctx, base);
loc_82551EE0:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r30,r11,14252
	ctx.r30.s64 = ctx.r11.s64 + 14252;
	// bge cr6,0x82551f04
	if (!cr6.lt) goto loc_82551F04;
	// addi r5,r30,-48
	ctx.r5.s64 = ctx.r30.s64 + -48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82551F04;
	sub_8253CF78(ctx, base);
loc_82551F04:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f918
	ctx.lr = 0x82551F14;
	sub_8253F918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82551f2c
	if (!cr6.eq) goto loc_82551F2C;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82551F2C;
	sub_8253CF78(ctx, base);
loc_82551F2C:
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82540950
	ctx.lr = 0x82551F3C;
	sub_82540950(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82551F48;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82551f60
	if (!cr6.eq) goto loc_82551F60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82551F60;
	sub_8253C558(ctx, base);
loc_82551F60:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551F68"))) PPC_WEAK_FUNC(sub_82551F68);
PPC_FUNC_IMPL(__imp__sub_82551F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82551e90
	ctx.lr = 0x82551F84;
	sub_82551E90(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad98
	ctx.lr = 0x82551F90;
	sub_8253AD98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82551fa8
	if (cr6.eq) goto loc_82551FA8;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x8253ace0
	ctx.lr = 0x82551FA4;
	sub_8253ACE0(ctx, base);
	// b 0x82551fb0
	goto loc_82551FB0;
loc_82551FA8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253b9b0
	ctx.lr = 0x82551FB0;
	sub_8253B9B0(ctx, base);
loc_82551FB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551FC8"))) PPC_WEAK_FUNC(sub_82551FC8);
PPC_FUNC_IMPL(__imp__sub_82551FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82551FE8;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82551e90
	ctx.lr = 0x82551FF4;
	sub_82551E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253ace0
	ctx.lr = 0x82552000;
	sub_8253ACE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ade0
	ctx.lr = 0x8255200C;
	sub_8253ADE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82552068
	if (cr6.eq) goto loc_82552068;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253afb0
	ctx.lr = 0x82552020;
	sub_8253AFB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82552068
	if (!cr6.eq) goto loc_82552068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b708
	ctx.lr = 0x82552038;
	sub_8253B708(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x82552044;
	sub_8253AB48(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bd40
	ctx.lr = 0x82552050;
	sub_8253BD40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82552068:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad98
	ctx.lr = 0x82552074;
	sub_8253AD98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82552090
	if (!cr6.eq) goto loc_82552090;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bd40
	ctx.lr = 0x82552088;
	sub_8253BD40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825520a0
	if (!cr6.eq) goto loc_825520A0;
loc_82552090:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14304
	ctx.r4.s64 = ctx.r11.s64 + 14304;
	// bl 0x8253c558
	ctx.lr = 0x825520A0;
	sub_8253C558(ctx, base);
loc_825520A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825520B8"))) PPC_WEAK_FUNC(sub_825520B8);
PPC_FUNC_IMPL(__imp__sub_825520B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x825520D4;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d228
	ctx.lr = 0x825520E0;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253aec8
	ctx.lr = 0x825520F0;
	sub_8253AEC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x825520FC;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552114"))) PPC_WEAK_FUNC(sub_82552114);
PPC_FUNC_IMPL(__imp__sub_82552114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552118"))) PPC_WEAK_FUNC(sub_82552118);
PPC_FUNC_IMPL(__imp__sub_82552118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82552138;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d228
	ctx.lr = 0x82552144;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253aa70
	ctx.lr = 0x82552150;
	sub_8253AA70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b810
	ctx.lr = 0x8255215C;
	sub_8253B810(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552174"))) PPC_WEAK_FUNC(sub_82552174);
PPC_FUNC_IMPL(__imp__sub_82552174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552178"))) PPC_WEAK_FUNC(sub_82552178);
PPC_FUNC_IMPL(__imp__sub_82552178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82552198;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d228
	ctx.lr = 0x825521A4;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253d228
	ctx.lr = 0x825521B0;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253aa70
	ctx.lr = 0x825521BC;
	sub_8253AA70(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bb28
	ctx.lr = 0x825521C8;
	sub_8253BB28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825521E0"))) PPC_WEAK_FUNC(sub_825521E0);
PPC_FUNC_IMPL(__imp__sub_825521E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253bfc8
	ctx.lr = 0x82552200;
	sub_8253BFC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x8255220C;
	sub_8253B3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552224"))) PPC_WEAK_FUNC(sub_82552224);
PPC_FUNC_IMPL(__imp__sub_82552224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552228"))) PPC_WEAK_FUNC(sub_82552228);
PPC_FUNC_IMPL(__imp__sub_82552228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82552230;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r30,r11,1192
	ctx.r30.s64 = ctx.r11.s64 + 1192;
	// addi r5,r10,14420
	ctx.r5.s64 = ctx.r10.s64 + 14420;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d798
	ctx.lr = 0x82552254;
	sub_8253D798(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d4b0
	ctx.lr = 0x82552268;
	sub_8253D4B0(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x8253bfc8
	ctx.lr = 0x82552280;
	sub_8253BFC8(ctx, base);
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x825522d0
	if (cr6.eq) goto loc_825522D0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x825522bc
	if (cr6.eq) goto loc_825522BC;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x8253b3c0
	ctx.lr = 0x825522B0;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825522BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x825522C4;
	sub_8253B6C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825522D0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8253bfc8
	ctx.lr = 0x825522DC;
	sub_8253BFC8(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,1528(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 1528);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadd f1,f12,f0,f11
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64;
	// bl 0x8253b3c0
	ctx.lr = 0x82552310;
	sub_8253B3C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255231C"))) PPC_WEAK_FUNC(sub_8255231C);
PPC_FUNC_IMPL(__imp__sub_8255231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552320"))) PPC_WEAK_FUNC(sub_82552320);
PPC_FUNC_IMPL(__imp__sub_82552320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x8255233C;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ad28
	ctx.lr = 0x82552348;
	sub_8253AD28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad70
	ctx.lr = 0x82552354;
	sub_8253AD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82552360;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552378"))) PPC_WEAK_FUNC(sub_82552378);
PPC_FUNC_IMPL(__imp__sub_82552378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x82552398;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253ace0
	ctx.lr = 0x825523A4;
	sub_8253ACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ace0
	ctx.lr = 0x825523B0;
	sub_8253ACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x825523B8;
	sub_8253B3A0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825523D0"))) PPC_WEAK_FUNC(sub_825523D0);
PPC_FUNC_IMPL(__imp__sub_825523D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x825523F0;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x8253ace0
	ctx.lr = 0x825523FC;
	sub_8253ACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ace0
	ctx.lr = 0x82552408;
	sub_8253ACE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x82552414;
	sub_8253B3E0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255242C"))) PPC_WEAK_FUNC(sub_8255242C);
PPC_FUNC_IMPL(__imp__sub_8255242C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552430"))) PPC_WEAK_FUNC(sub_82552430);
PPC_FUNC_IMPL(__imp__sub_82552430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d280
	ctx.lr = 0x82552454;
	sub_8253D280(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d2c0
	ctx.lr = 0x8255246C;
	sub_8253D2C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf40
	ctx.lr = 0x82552480;
	sub_8253CF40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82552490
	if (!cr6.eq) goto loc_82552490;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825524a8
	goto loc_825524A8;
loc_82552490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82552498;
	sub_8253B3A0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x825524A4;
	sub_8253AB48(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_825524A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825524C0"))) PPC_WEAK_FUNC(sub_825524C0);
PPC_FUNC_IMPL(__imp__sub_825524C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d2c0
	ctx.lr = 0x825524E4;
	sub_8253D2C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cd60
	ctx.lr = 0x825524F0;
	sub_8253CD60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82552510
	if (!cr6.eq) goto loc_82552510;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82552510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82552518;
	sub_8253B3A0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x82552524;
	sub_8253AB48(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255253C"))) PPC_WEAK_FUNC(sub_8255253C);
PPC_FUNC_IMPL(__imp__sub_8255253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552540"))) PPC_WEAK_FUNC(sub_82552540);
PPC_FUNC_IMPL(__imp__sub_82552540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82552548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r11,14456
	ctx.r30.s64 = ctx.r11.s64 + 14456;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253c670
	ctx.lr = 0x82552568;
	sub_8253C670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ace0
	ctx.lr = 0x82552574;
	sub_8253ACE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253be10
	ctx.lr = 0x82552584;
	sub_8253BE10(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82552590;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825525a8
	if (!cr6.eq) goto loc_825525A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825525A8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x825525B4;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x825525e0
	if (cr6.eq) goto loc_825525E0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253abb8
	ctx.lr = 0x825525C8;
	sub_8253ABB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x825525D8;
	sub_8253B0C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825525E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253c558
	ctx.lr = 0x825525E8;
	sub_8253C558(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825525F4"))) PPC_WEAK_FUNC(sub_825525F4);
PPC_FUNC_IMPL(__imp__sub_825525F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825525F8"))) PPC_WEAK_FUNC(sub_825525F8);
PPC_FUNC_IMPL(__imp__sub_825525F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,14496
	ctx.r5.s64 = ctx.r11.s64 + 14496;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d2c0
	ctx.lr = 0x82552624;
	sub_8253D2C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253d1e8
	ctx.lr = 0x82552638;
	sub_8253D1E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253aa70
	ctx.lr = 0x82552644;
	sub_8253AA70(ctx, base);
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,9536
	ctx.r4.s64 = ctx.r10.s64 + 9536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bf20
	ctx.lr = 0x8255265C;
	sub_8253BF20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8255266c
	if (!cr6.eq) goto loc_8255266C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82552684
	goto loc_82552684;
loc_8255266C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82552674;
	sub_8253B3A0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x82552680;
	sub_8253AB48(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_82552684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255269C"))) PPC_WEAK_FUNC(sub_8255269C);
PPC_FUNC_IMPL(__imp__sub_8255269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825526A0"))) PPC_WEAK_FUNC(sub_825526A0);
PPC_FUNC_IMPL(__imp__sub_825526A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825526A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d2c0
	ctx.lr = 0x825526C0;
	sub_8253D2C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x825526CC;
	sub_8253AA58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cd60
	ctx.lr = 0x825526DC;
	sub_8253CD60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825526ec
	if (cr6.eq) goto loc_825526EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c118
	ctx.lr = 0x825526EC;
	sub_8253C118(ctx, base);
loc_825526EC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253be10
	ctx.lr = 0x825526FC;
	sub_8253BE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552704;
	sub_8253AA58(ctx, base);
	// subf r3,r30,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552710"))) PPC_WEAK_FUNC(sub_82552710);
PPC_FUNC_IMPL(__imp__sub_82552710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x82552730;
	sub_8253D228(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x8255273C;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82552774
	if (!cr6.eq) goto loc_82552774;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,14524
	ctx.r30.s64 = ctx.r11.s64 + 14524;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// bl 0x8253d2c0
	ctx.lr = 0x82552760;
	sub_8253D2C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82552770;
	sub_8253C558(ctx, base);
	// b 0x82552778
	goto loc_82552778;
loc_82552774:
	// bl 0x8253aa58
	ctx.lr = 0x82552778;
	sub_8253AA58(ctx, base);
loc_82552778:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552790"))) PPC_WEAK_FUNC(sub_82552790);
PPC_FUNC_IMPL(__imp__sub_82552790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82552798;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253d1e8
	ctx.lr = 0x825527AC;
	sub_8253D1E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253d4b0
	ctx.lr = 0x825527BC;
	sub_8253D4B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825527CC;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bgt cr6,0x825527e4
	if (cr6.gt) goto loc_825527E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b168
	ctx.lr = 0x825527E0;
	sub_8253B168(ctx, base);
	// b 0x825527ec
	goto loc_825527EC;
loc_825527E4:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8253d458
	ctx.lr = 0x825527EC;
	sub_8253D458(ctx, base);
loc_825527EC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// ble cr6,0x82552804
	if (!cr6.gt) goto loc_82552804;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82552804:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addic. r28,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r28.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble 0x82552864
	if (!cr0.gt) goto loc_82552864;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253a8e0
	ctx.lr = 0x8255281C;
	sub_8253A8E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82552864
	if (cr6.eq) goto loc_82552864;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b860
	ctx.lr = 0x82552834;
	sub_8253B860(ctx, base);
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// bge cr6,0x82552858
	if (!cr6.lt) goto loc_82552858;
loc_8255283C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253b860
	ctx.lr = 0x82552850;
	sub_8253B860(ctx, base);
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x8255283c
	if (cr6.lt) goto loc_8255283C;
loc_82552858:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82552864:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,14528
	ctx.r4.s64 = ctx.r11.s64 + 14528;
	// bl 0x8253c558
	ctx.lr = 0x82552874;
	sub_8253C558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255287C"))) PPC_WEAK_FUNC(sub_8255287C);
PPC_FUNC_IMPL(__imp__sub_8255287C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552880"))) PPC_WEAK_FUNC(sub_82552880);
PPC_FUNC_IMPL(__imp__sub_82552880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82552888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552894;
	sub_8253AA58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253ad28
	ctx.lr = 0x825528A4;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x825528e0
	if (!cr6.eq) goto loc_825528E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x825528BC;
	sub_8253B0C0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bne cr6,0x825528e0
	if (!cr6.eq) goto loc_825528E0;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253b3e0
	ctx.lr = 0x825528D4;
	sub_8253B3E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825528E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253d458
	ctx.lr = 0x825528EC;
	sub_8253D458(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82552900
	if (!cr6.lt) goto loc_82552900;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// b 0x8255290c
	goto loc_8255290C;
loc_82552900:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// ble cr6,0x8255290c
	if (!cr6.gt) goto loc_8255290C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8255290C:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bge cr6,0x82552928
	if (!cr6.lt) goto loc_82552928;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,14556
	ctx.r5.s64 = ctx.r11.s64 + 14556;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82552928;
	sub_8253CF78(ctx, base);
loc_82552928:
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552934"))) PPC_WEAK_FUNC(sub_82552934);
PPC_FUNC_IMPL(__imp__sub_82552934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552938"))) PPC_WEAK_FUNC(sub_82552938);
PPC_FUNC_IMPL(__imp__sub_82552938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x82552954;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x8255295C;
	sub_8253AA58(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8253be88
	ctx.lr = 0x82552970;
	sub_8253BE88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8253b6c0
	ctx.lr = 0x82552984;
	sub_8253B6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ab48
	ctx.lr = 0x82552990;
	sub_8253AB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552998;
	sub_8253AA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825529AC"))) PPC_WEAK_FUNC(sub_825529AC);
PPC_FUNC_IMPL(__imp__sub_825529AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825529B0"))) PPC_WEAK_FUNC(sub_825529B0);
PPC_FUNC_IMPL(__imp__sub_825529B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x825529CC;
	sub_8253D228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8253aa70
	ctx.lr = 0x825529D8;
	sub_8253AA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253ab48
	ctx.lr = 0x825529E4;
	sub_8253AB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253be88
	ctx.lr = 0x825529F8;
	sub_8253BE88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x8253b6c0
	ctx.lr = 0x82552A0C;
	sub_8253B6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253abb8
	ctx.lr = 0x82552A18;
	sub_8253ABB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552A20;
	sub_8253AA58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552A34"))) PPC_WEAK_FUNC(sub_82552A34);
PPC_FUNC_IMPL(__imp__sub_82552A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552A38"))) PPC_WEAK_FUNC(sub_82552A38);
PPC_FUNC_IMPL(__imp__sub_82552A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82552A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253d228
	ctx.lr = 0x82552A50;
	sub_8253D228(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,14608
	ctx.r30.s64 = ctx.r11.s64 + 14608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// bl 0x8253c758
	ctx.lr = 0x82552A68;
	sub_8253C758(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82552b64
	if (!cr6.eq) goto loc_82552B64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82552A7C;
	sub_8253AD28(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x82552b28
	if (cr6.gt) goto loc_82552B28;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82552b0c
	if (cr6.eq) goto loc_82552B0C;
	// bdz 0x82552adc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82552ADC;
	// bdz 0x82552b28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82552B28;
	// bdnz 0x82552ac4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82552AC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b0c0
	ctx.lr = 0x82552AAC;
	sub_8253B0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82552AB8;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82552AC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82552AD0;
	sub_8253ACE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82552ADC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82552AE8;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// bne cr6,0x82552af8
	if (!cr6.eq) goto loc_82552AF8;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
loc_82552AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b478
	ctx.lr = 0x82552B00;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82552B0C:
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b410
	ctx.lr = 0x82552B1C;
	sub_8253B410(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82552B28:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b318
	ctx.lr = 0x82552B34;
	sub_8253B318(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82552B44;
	sub_8253AD28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad70
	ctx.lr = 0x82552B50;
	sub_8253AD70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8253b570
	ctx.lr = 0x82552B64;
	sub_8253B570(ctx, base);
loc_82552B64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552B70"))) PPC_WEAK_FUNC(sub_82552B70);
PPC_FUNC_IMPL(__imp__sub_82552B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82552B90;
	sub_8253AA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253c280
	ctx.lr = 0x82552B9C;
	sub_8253C280(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82552BA8;
	sub_8253B068(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82552c68
	if (cr6.eq) goto loc_82552C68;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x82552BBC;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82552bfc
	if (!cr6.eq) goto loc_82552BFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x82552BD4;
	sub_8253B8B8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x82552BE0;
	sub_8253ACE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b6c0
	ctx.lr = 0x82552BEC;
	sub_8253B6C0(ctx, base);
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bb28
	ctx.lr = 0x82552BF8;
	sub_8253BB28(ctx, base);
	// b 0x82552c5c
	goto loc_82552C5C;
loc_82552BFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b920
	ctx.lr = 0x82552C04;
	sub_8253B920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82552c3c
	if (cr6.eq) goto loc_82552C3C;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b810
	ctx.lr = 0x82552C18;
	sub_8253B810(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b068
	ctx.lr = 0x82552C24;
	sub_8253B068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa70
	ctx.lr = 0x82552C34;
	sub_8253AA70(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82552c50
	if (!cr6.eq) goto loc_82552C50;
loc_82552C3C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,14616
	ctx.r5.s64 = ctx.r11.s64 + 14616;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82552C50;
	sub_8253CF78(ctx, base);
loc_82552C50:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b920
	ctx.lr = 0x82552C5C;
	sub_8253B920(ctx, base);
loc_82552C5C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253bc48
	ctx.lr = 0x82552C68;
	sub_8253BC48(ctx, base);
loc_82552C68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552C84"))) PPC_WEAK_FUNC(sub_82552C84);
PPC_FUNC_IMPL(__imp__sub_82552C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552C88"))) PPC_WEAK_FUNC(sub_82552C88);
PPC_FUNC_IMPL(__imp__sub_82552C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x82552cbc
	if (!cr6.eq) goto loc_82552CBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82552CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47e00
	ctx.lr = 0x82552CC4;
	sub_82A47E00(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82552d00
	if (cr6.lt) goto loc_82552D00;
	// beq cr6,0x82552ce8
	if (cr6.eq) goto loc_82552CE8;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82552CE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82552D00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f918
	ctx.lr = 0x82552D10;
	sub_8253F918(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82552d30
	if (!cr6.gt) goto loc_82552D30;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82552D30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552D38;
	sub_8253AA58(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552D5C"))) PPC_WEAK_FUNC(sub_82552D5C);
PPC_FUNC_IMPL(__imp__sub_82552D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552D60"))) PPC_WEAK_FUNC(sub_82552D60);
PPC_FUNC_IMPL(__imp__sub_82552D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b2d0
	ctx.lr = 0x82552D80;
	sub_8253B2D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82552da0
	if (!cr6.eq) goto loc_82552DA0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,14916
	ctx.r5.s64 = ctx.r11.s64 + 14916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82552DA0;
	sub_8253CF78(ctx, base);
loc_82552DA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82552c88
	ctx.lr = 0x82552DAC;
	sub_82552C88(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1456
	ctx.r9.s64 = ctx.r11.s64 + 1456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8253b478
	ctx.lr = 0x82552DC4;
	sub_8253B478(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552DE0"))) PPC_WEAK_FUNC(sub_82552DE0);
PPC_FUNC_IMPL(__imp__sub_82552DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82552DE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82552c88
	ctx.lr = 0x82552DFC;
	sub_82552C88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253a8e0
	ctx.lr = 0x82552E0C;
	sub_8253A8E0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r27,r11,14996
	ctx.r27.s64 = ctx.r11.s64 + 14996;
	// bne cr6,0x82552e28
	if (!cr6.eq) goto loc_82552E28;
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82552E28;
	sub_8253C558(ctx, base);
loc_82552E28:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82552e58
	if (cr6.eq) goto loc_82552E58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1456
	ctx.r9.s64 = ctx.r11.s64 + 1456;
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8253b570
	ctx.lr = 0x82552E4C;
	sub_8253B570(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82552E58:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253a978
	ctx.lr = 0x82552E64;
	sub_8253A978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253a9d0
	ctx.lr = 0x82552E70;
	sub_8253A9D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825480c0
	ctx.lr = 0x82552E7C;
	sub_825480C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82552ea8
	if (cr6.eq) goto loc_82552EA8;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82552ea8
	if (cr6.eq) goto loc_82552EA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253a978
	ctx.lr = 0x82552E9C;
	sub_8253A978(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82552EA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552EB0;
	sub_8253AA58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// bl 0x8253a8e0
	ctx.lr = 0x82552EC0;
	sub_8253A8E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82552ed4
	if (!cr6.eq) goto loc_82552ED4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c558
	ctx.lr = 0x82552ED4;
	sub_8253C558(ctx, base);
loc_82552ED4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253a978
	ctx.lr = 0x82552EE4;
	sub_8253A978(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552EF0"))) PPC_WEAK_FUNC(sub_82552EF0);
PPC_FUNC_IMPL(__imp__sub_82552EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b2d0
	ctx.lr = 0x82552F10;
	sub_8253B2D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82552f30
	if (!cr6.eq) goto loc_82552F30;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,15024
	ctx.r5.s64 = ctx.r11.s64 + 15024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x82552F30;
	sub_8253CF78(ctx, base);
loc_82552F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552F38;
	sub_8253AA58(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82552de0
	ctx.lr = 0x82552F48;
	sub_82552DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82552f74
	if (!cr6.lt) goto loc_82552F74;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b6c0
	ctx.lr = 0x82552F60;
	sub_8253B6C0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x82552F6C;
	sub_8253AB48(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82552f8c
	goto loc_82552F8C;
loc_82552F74:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253b6c0
	ctx.lr = 0x82552F7C;
	sub_8253B6C0(ctx, base);
	// subfic r4,r30,-1
	xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x82552F88;
	sub_8253AB48(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
loc_82552F8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552FA4"))) PPC_WEAK_FUNC(sub_82552FA4);
PPC_FUNC_IMPL(__imp__sub_82552FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82552FA8"))) PPC_WEAK_FUNC(sub_82552FA8);
PPC_FUNC_IMPL(__imp__sub_82552FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b2d0
	ctx.lr = 0x82552FC8;
	sub_8253B2D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82552FD4;
	sub_8253AA58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82552de0
	ctx.lr = 0x82552FE4;
	sub_82552DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82553030
	if (!cr6.lt) goto loc_82553030;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ae28
	ctx.lr = 0x82552FFC;
	sub_8253AE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82553028
	if (cr6.eq) goto loc_82553028;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c4c8
	ctx.lr = 0x82553010;
	sub_8253C4C8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ab48
	ctx.lr = 0x8255301C;
	sub_8253AB48(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c1a0
	ctx.lr = 0x82553028;
	sub_8253C1A0(ctx, base);
loc_82553028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253c118
	ctx.lr = 0x82553030;
	sub_8253C118(ctx, base);
loc_82553030:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255304C"))) PPC_WEAK_FUNC(sub_8255304C);
PPC_FUNC_IMPL(__imp__sub_8255304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553050"))) PPC_WEAK_FUNC(sub_82553050);
PPC_FUNC_IMPL(__imp__sub_82553050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253a9f0
	ctx.lr = 0x8255306C;
	sub_8253A9F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad28
	ctx.lr = 0x8255307C;
	sub_8253AD28(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82553098
	if (!cr6.eq) goto loc_82553098;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ad98
	ctx.lr = 0x82553090;
	sub_8253AD98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825530ac
	if (cr6.eq) goto loc_825530AC;
loc_82553098:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,15044
	ctx.r5.s64 = ctx.r11.s64 + 15044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cf78
	ctx.lr = 0x825530AC;
	sub_8253CF78(ctx, base);
loc_825530AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825530B8;
	sub_8253ACE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253a978
	ctx.lr = 0x825530C8;
	sub_8253A978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825530E4"))) PPC_WEAK_FUNC(sub_825530E4);
PPC_FUNC_IMPL(__imp__sub_825530E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825530E8"))) PPC_WEAK_FUNC(sub_825530E8);
PPC_FUNC_IMPL(__imp__sub_825530E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82553050
	ctx.lr = 0x82553100;
	sub_82553050(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,12200
	ctx.r4.s64 = ctx.r11.s64 + 12200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b5e8
	ctx.lr = 0x82553114;
	sub_8253B5E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255312C"))) PPC_WEAK_FUNC(sub_8255312C);
PPC_FUNC_IMPL(__imp__sub_8255312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553130"))) PPC_WEAK_FUNC(sub_82553130);
PPC_FUNC_IMPL(__imp__sub_82553130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253aa58
	ctx.lr = 0x82553148;
	sub_8253AA58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547968
	ctx.lr = 0x82553154;
	sub_82547968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553168"))) PPC_WEAK_FUNC(sub_82553168);
PPC_FUNC_IMPL(__imp__sub_82553168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253b708
	ctx.lr = 0x82553180;
	sub_8253B708(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82553190
	if (cr6.eq) goto loc_82553190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b3a0
	ctx.lr = 0x82553190;
	sub_8253B3A0(ctx, base);
loc_82553190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825531A8"))) PPC_WEAK_FUNC(sub_825531A8);
PPC_FUNC_IMPL(__imp__sub_825531A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8253ace0
	ctx.lr = 0x825531C8;
	sub_8253ACE0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,15172
	ctx.r31.s64 = ctx.r11.s64 + 15172;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r31,-56
	ctx.r5.s64 = ctx.r31.s64 + -56;
	// bl 0x8253ba90
	ctx.lr = 0x825531E0;
	sub_8253BA90(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r10,1256
	ctx.r5.s64 = ctx.r10.s64 + 1256;
	// bl 0x8253d878
	ctx.lr = 0x825531F4;
	sub_8253D878(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x8253b410
	ctx.lr = 0x82553204;
	sub_8253B410(ctx, base);
	// addi r5,r31,-40
	ctx.r5.s64 = ctx.r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x8253ba90
	ctx.lr = 0x82553214;
	sub_8253BA90(ctx, base);
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-28856
	ctx.r4.s64 = ctx.r9.s64 + -28856;
	// bl 0x8253b5e8
	ctx.lr = 0x82553228;
	sub_8253B5E8(ctx, base);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r8,9168
	ctx.r4.s64 = ctx.r8.s64 + 9168;
	// bl 0x8253b5e8
	ctx.lr = 0x8255323C;
	sub_8253B5E8(ctx, base);
	// addi r5,r31,-28
	ctx.r5.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x8255324C;
	sub_8253BA90(ctx, base);
	// lis r7,-32173
	ctx.r7.s64 = -2108489728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r7,-28976
	ctx.r4.s64 = ctx.r7.s64 + -28976;
	// bl 0x8253b5e8
	ctx.lr = 0x82553260;
	sub_8253B5E8(ctx, base);
	// lis r6,-32171
	ctx.r6.s64 = -2108358656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,9080
	ctx.r4.s64 = ctx.r6.s64 + 9080;
	// bl 0x8253b5e8
	ctx.lr = 0x82553274;
	sub_8253B5E8(ctx, base);
	// addi r5,r31,-20
	ctx.r5.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x82553284;
	sub_8253BA90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253b8b8
	ctx.lr = 0x82553294;
	sub_8253B8B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8253ace0
	ctx.lr = 0x825532A0;
	sub_8253ACE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253bc48
	ctx.lr = 0x825532AC;
	sub_8253BC48(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x8253b410
	ctx.lr = 0x825532BC;
	sub_8253B410(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x8253ba90
	ctx.lr = 0x825532CC;
	sub_8253BA90(ctx, base);
	// lis r4,-32171
	ctx.r4.s64 = -2108358656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,11120
	ctx.r4.s64 = ctx.r4.s64 + 11120;
	// bl 0x8253b5e8
	ctx.lr = 0x825532E0;
	sub_8253B5E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253ba90
	ctx.lr = 0x825532F0;
	sub_8253BA90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553308"))) PPC_WEAK_FUNC(sub_82553308);
PPC_FUNC_IMPL(__imp__sub_82553308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825531a8
	ctx.lr = 0x82553320;
	sub_825531A8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r5,r11,1472
	ctx.r5.s64 = ctx.r11.s64 + 1472;
	// addi r4,r10,15184
	ctx.r4.s64 = ctx.r10.s64 + 15184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d878
	ctx.lr = 0x82553338;
	sub_8253D878(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553350"))) PPC_WEAK_FUNC(sub_82553350);
PPC_FUNC_IMPL(__imp__sub_82553350) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r4,r11,15196
	ctx.r4.s64 = ctx.r11.s64 + 15196;
	// bl 0x82540668
	ctx.lr = 0x82553368;
	sub_82540668(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255337C"))) PPC_WEAK_FUNC(sub_8255337C);
PPC_FUNC_IMPL(__imp__sub_8255337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553380"))) PPC_WEAK_FUNC(sub_82553380);
PPC_FUNC_IMPL(__imp__sub_82553380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82553388;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825533AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825533cc
	if (!cr6.eq) goto loc_825533CC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825533cc
	if (cr6.eq) goto loc_825533CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82547b68
	ctx.lr = 0x825533CC;
	sub_82547B68(ctx, base);
loc_825533CC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825533E8"))) PPC_WEAK_FUNC(sub_825533E8);
PPC_FUNC_IMPL(__imp__sub_825533E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825533F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82553430
	if (cr6.lt) goto loc_82553430;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82553440
	if (cr6.lt) goto loc_82553440;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82540668
	ctx.lr = 0x8255342C;
	sub_82540668(ctx, base);
	// b 0x82553440
	goto loc_82553440;
loc_82553430:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// bge cr6,0x82553440
	if (!cr6.lt) goto loc_82553440;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82553440:
	// li r11,-3
	ctx.r11.s64 = -3;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// divwu r9,r11,r28
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r28.u32);
	// twllei r28,0
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x825534c4
	if (cr6.gt) goto loc_825534C4;
	// lwz r31,16(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mullw r29,r30,r28
	ctx.r29.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r28.s32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r28,r11,r28
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82553484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825534a4
	if (!cr6.eq) goto loc_825534A4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x825534a4
	if (cr6.eq) goto loc_825534A4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82547b68
	ctx.lr = 0x825534A4;
	sub_82547B68(ctx, base);
loc_825534A4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825534C4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,15196
	ctx.r4.s64 = ctx.r11.s64 + 15196;
	// bl 0x82540668
	ctx.lr = 0x825534D4;
	sub_82540668(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825534E4"))) PPC_WEAK_FUNC(sub_825534E4);
PPC_FUNC_IMPL(__imp__sub_825534E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825534E8"))) PPC_WEAK_FUNC(sub_825534E8);
PPC_FUNC_IMPL(__imp__sub_825534E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825534F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,60(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x8255356c
	if (!cr6.gt) goto loc_8255356C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82553534
	if (cr6.lt) goto loc_82553534;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// bl 0x825536a0
	ctx.lr = 0x82553534;
	sub_825536A0(ctx, base);
loc_82553534:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,-3
	ctx.r11.s64 = -3;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r29,r5,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82553560
	if (cr6.gt) goto loc_82553560;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82553380
	ctx.lr = 0x8255355C;
	sub_82553380(ctx, base);
	// b 0x82553564
	goto loc_82553564;
loc_82553560:
	// bl 0x82553350
	ctx.lr = 0x82553564;
	sub_82553350(ctx, base);
loc_82553564:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8255356C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255358C"))) PPC_WEAK_FUNC(sub_8255358C);
PPC_FUNC_IMPL(__imp__sub_8255358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553590"))) PPC_WEAK_FUNC(sub_82553590);
PPC_FUNC_IMPL(__imp__sub_82553590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82553598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1536
	ctx.r29.s64 = ctx.r11.s64 + 1536;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_825535B0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825535B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825535b8
	if (!cr6.eq) goto loc_825535B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825414d0
	ctx.lr = 0x825535DC;
	sub_825414D0(ctx, base);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r29,84
	ctx.r9.s64 = ctx.r29.s64 + 84;
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// stb r7,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r7.u8);
	// blt cr6,0x825535b0
	if (cr6.lt) goto loc_825535B0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553610"))) PPC_WEAK_FUNC(sub_82553610);
PPC_FUNC_IMPL(__imp__sub_82553610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// bge cr6,0x82553674
	if (!cr6.lt) goto loc_82553674;
	// bl 0x831d34e0
	ctx.lr = 0x82553638;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82553668
	if (cr6.eq) goto loc_82553668;
	// addi r11,r11,15476
	ctx.r11.s64 = ctx.r11.s64 + 15476;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x82541118
	ctx.lr = 0x82553664;
	sub_82541118(ctx, base);
	// b 0x82553688
	goto loc_82553688;
loc_82553668:
	// addi r4,r11,15476
	ctx.r4.s64 = ctx.r11.s64 + 15476;
	// bl 0x82541118
	ctx.lr = 0x82553670;
	sub_82541118(ctx, base);
	// b 0x82553688
	goto loc_82553688;
loc_82553674:
	// addi r11,r31,-257
	ctx.r11.s64 = ctx.r31.s64 + -257;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1536
	ctx.r8.s64 = ctx.r10.s64 + 1536;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
loc_82553688:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825536A0"))) PPC_WEAK_FUNC(sub_825536A0);
PPC_FUNC_IMPL(__imp__sub_825536A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825536A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82541168
	ctx.lr = 0x825536CC;
	sub_82541168(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r11,15492
	ctx.r29.s64 = ctx.r11.s64 + 15492;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x82541118
	ctx.lr = 0x825536EC;
	sub_82541118(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82553740
	if (cr6.eq) goto loc_82553740;
	// cmpwi cr6,r30,284
	cr6.compare<int32_t>(ctx.r30.s32, 284, xer);
	// blt cr6,0x82553720
	if (cr6.lt) goto loc_82553720;
	// cmpwi cr6,r30,286
	cr6.compare<int32_t>(ctx.r30.s32, 286, xer);
	// bgt cr6,0x82553720
	if (cr6.gt) goto loc_82553720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825534e8
	ctx.lr = 0x82553714;
	sub_825534E8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82553730
	goto loc_82553730;
loc_82553720:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82553610
	ctx.lr = 0x8255372C;
	sub_82553610(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82553730:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82541118
	ctx.lr = 0x82553740;
	sub_82541118(ctx, base);
loc_82553740:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82547b68
	ctx.lr = 0x8255374C;
	sub_82547B68(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553754"))) PPC_WEAK_FUNC(sub_82553754);
PPC_FUNC_IMPL(__imp__sub_82553754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82553758"))) PPC_WEAK_FUNC(sub_82553758);
PPC_FUNC_IMPL(__imp__sub_82553758) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x825536a0
	sub_825536A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553760"))) PPC_WEAK_FUNC(sub_82553760);
PPC_FUNC_IMPL(__imp__sub_82553760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825414d0
	ctx.lr = 0x82553784;
	sub_825414D0(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82549618
	ctx.lr = 0x8255379C;
	sub_82549618(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825537d0
	if (!cr6.eq) goto loc_825537D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x825537d0
	if (cr6.lt) goto loc_825537D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825432a0
	ctx.lr = 0x825537D0;
	sub_825432A0(ctx, base);
loc_825537D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825537EC"))) PPC_WEAK_FUNC(sub_825537EC);
PPC_FUNC_IMPL(__imp__sub_825537EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825537F0"))) PPC_WEAK_FUNC(sub_825537F0);
PPC_FUNC_IMPL(__imp__sub_825537F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8255383c
	if (cr6.eq) goto loc_8255383C;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82553844
	goto loc_82553844;
loc_8255383C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553844;
	sub_82549BD8(ctx, base);
loc_82553844:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x82553858
	if (cr6.eq) goto loc_82553858;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x8255389c
	if (!cr6.eq) goto loc_8255389C;
loc_82553858:
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x8255389c
	if (cr6.eq) goto loc_8255389C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82553890
	if (cr6.eq) goto loc_82553890;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x82553898
	goto loc_82553898;
loc_82553890:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x82553898;
	sub_82549BD8(ctx, base);
loc_82553898:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8255389C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,65533
	ctx.r9.u64 = ctx.r10.u64 | 65533;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x825538cc
	if (cr6.lt) goto loc_825538CC;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15508
	ctx.r4.s64 = ctx.r11.s64 + 15508;
	// bl 0x825536a0
	ctx.lr = 0x825538CC;
	sub_825536A0(ctx, base);
loc_825538CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825538E4"))) PPC_WEAK_FUNC(sub_825538E4);
PPC_FUNC_IMPL(__imp__sub_825538E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825538E8"))) PPC_WEAK_FUNC(sub_825538E8);
PPC_FUNC_IMPL(__imp__sub_825538E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r3,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r3.u32);
	// li r9,287
	ctx.r9.s64 = 287;
	// stw r5,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,68(r4)
	PPC_STORE_U8(ctx.r4.u32 + 68, ctx.r10.u8);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r8,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r8.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r7,60(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82553380
	ctx.lr = 0x82553940;
	sub_82553380(ctx, base);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82553998
	if (cr6.eq) goto loc_82553998;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82553998:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82549bd8
	ctx.lr = 0x825539A0;
	sub_82549BD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

