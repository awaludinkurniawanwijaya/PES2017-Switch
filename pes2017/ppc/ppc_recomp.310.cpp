#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8325C7CC"))) PPC_WEAK_FUNC(sub_8325C7CC);
PPC_FUNC_IMPL(__imp__sub_8325C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C7D0"))) PPC_WEAK_FUNC(sub_8325C7D0);
PPC_FUNC_IMPL(__imp__sub_8325C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x83296ba8
	ctx.lr = 0x8325C804;
	sub_83296BA8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C820;
	sub_8325BDC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f29,12(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bl 0x83296be0
	ctx.lr = 0x8325C840;
	sub_83296BE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C864"))) PPC_WEAK_FUNC(sub_8325C864);
PPC_FUNC_IMPL(__imp__sub_8325C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C868"))) PPC_WEAK_FUNC(sub_8325C868);
PPC_FUNC_IMPL(__imp__sub_8325C868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C89C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,96(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C8B0;
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

__attribute__((alias("__imp__sub_8325C8C8"))) PPC_WEAK_FUNC(sub_8325C8C8);
PPC_FUNC_IMPL(__imp__sub_8325C8C8) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C8F4;
	sub_8325BDC8(ctx, base);
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
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

__attribute__((alias("__imp__sub_8325C90C"))) PPC_WEAK_FUNC(sub_8325C90C);
PPC_FUNC_IMPL(__imp__sub_8325C90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325C910"))) PPC_WEAK_FUNC(sub_8325C910);
PPC_FUNC_IMPL(__imp__sub_8325C910) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8325C92C;
	sub_83296BA8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r5,r3,6
	ctx.r5.s64 = ctx.r3.s64 + 6;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8325bdc8
	ctx.lr = 0x8325C948;
	sub_8325BDC8(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x83296be0
	ctx.lr = 0x8325C958;
	sub_83296BE0(ctx, base);
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

__attribute__((alias("__imp__sub_8325C970"))) PPC_WEAK_FUNC(sub_8325C970);
PPC_FUNC_IMPL(__imp__sub_8325C970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325C9A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,108(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325C9B8;
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

__attribute__((alias("__imp__sub_8325C9D0"))) PPC_WEAK_FUNC(sub_8325C9D0);
PPC_FUNC_IMPL(__imp__sub_8325C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325CA04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325CA18;
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

__attribute__((alias("__imp__sub_8325CA30"))) PPC_WEAK_FUNC(sub_8325CA30);
PPC_FUNC_IMPL(__imp__sub_8325CA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325CA64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,116(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325CA78;
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

__attribute__((alias("__imp__sub_8325CA90"))) PPC_WEAK_FUNC(sub_8325CA90);
PPC_FUNC_IMPL(__imp__sub_8325CA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325CAC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325CAD8;
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

__attribute__((alias("__imp__sub_8325CAF0"))) PPC_WEAK_FUNC(sub_8325CAF0);
PPC_FUNC_IMPL(__imp__sub_8325CAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325CAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325CB20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,124(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325CB38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325CB40"))) PPC_WEAK_FUNC(sub_8325CB40);
PPC_FUNC_IMPL(__imp__sub_8325CB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8325CB48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325CB74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,128(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325CB90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325CB98"))) PPC_WEAK_FUNC(sub_8325CB98);
PPC_FUNC_IMPL(__imp__sub_8325CB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325CBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,27200
	ctx.r10.s64 = ctx.r11.s64 + 27200;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,27200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27200);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8325CBC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,132(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8325CBE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325CBE8"))) PPC_WEAK_FUNC(sub_8325CBE8);
PPC_FUNC_IMPL(__imp__sub_8325CBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325CBF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8325CC0C:
	// dcbt r11,r31
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8325cc0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325CC0C;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8325CC28:
	// dcbt r11,r9
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8325cc28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325CC28;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325cf74
	if (cr6.eq) goto loc_8325CF74;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// addi r28,r10,24688
	ctx.r28.s64 = ctx.r10.s64 + 24688;
loc_8325CC50:
	// dcbt r0,r11
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bgt cr6,0x8325cf54
	if (cr6.gt) goto loc_8325CF54;
	// lis r12,-31962
	ctx.r12.s64 = -2094661632;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13188
	ctx.r12.s64 = ctx.r12.s64 + -13188;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8325CD0C;
	case 1:
		goto loc_8325CD20;
	case 2:
		goto loc_8325CD3C;
	case 3:
		goto loc_8325CD68;
	case 4:
		goto loc_8325CD80;
	case 5:
		goto loc_8325CDA0;
	case 6:
		goto loc_8325CDA8;
	case 7:
		goto loc_8325CDCC;
	case 8:
		goto loc_8325CDF0;
	case 9:
		goto loc_8325CE08;
	case 10:
		goto loc_8325CE20;
	case 11:
		goto loc_8325CF54;
	case 12:
		goto loc_8325CF54;
	case 13:
		goto loc_8325CE38;
	case 14:
		goto loc_8325CF54;
	case 15:
		goto loc_8325CF54;
	case 16:
		goto loc_8325CF54;
	case 17:
		goto loc_8325CF54;
	case 18:
		goto loc_8325CE50;
	case 19:
		goto loc_8325CE68;
	case 20:
		goto loc_8325CE80;
	case 21:
		goto loc_8325CE94;
	case 22:
		goto loc_8325CEB0;
	case 23:
		goto loc_8325CECC;
	case 24:
		goto loc_8325CF54;
	case 25:
		goto loc_8325CEF0;
	case 26:
		goto loc_8325CF08;
	case 27:
		goto loc_8325CF54;
	case 28:
		goto loc_8325CF54;
	case 29:
		goto loc_8325CF54;
	case 30:
		goto loc_8325CF54;
	case 31:
		goto loc_8325CF54;
	case 32:
		goto loc_8325CF54;
	case 33:
		goto loc_8325CF54;
	case 34:
		goto loc_8325CF20;
	case 35:
		goto loc_8325CF38;
	default:
		return;
	}
	// lwz r25,-13044(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13044);
	// lwz r25,-13024(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -13024);
	// lwz r25,-12996(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12996);
	// lwz r25,-12952(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12952);
	// lwz r25,-12928(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12928);
	// lwz r25,-12896(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12896);
	// lwz r25,-12888(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12888);
	// lwz r25,-12852(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12852);
	// lwz r25,-12816(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12816);
	// lwz r25,-12792(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12792);
	// lwz r25,-12768(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12768);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12744(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12744);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12720(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12720);
	// lwz r25,-12696(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12696);
	// lwz r25,-12672(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12672);
	// lwz r25,-12652(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12652);
	// lwz r25,-12624(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12624);
	// lwz r25,-12596(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12596);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12560(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12560);
	// lwz r25,-12536(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12536);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12460(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12460);
	// lwz r25,-12512(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12512);
	// lwz r25,-12488(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12488);
loc_8325CD0C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CD1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CD20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CD30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r27.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CD3C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CD64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CD68:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CD7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CD80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CD9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CDA0:
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// b 0x8325cf3c
	goto loc_8325CF3C;
loc_8325CDA8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CDC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CDCC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CDEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CDF0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE38:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE50:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE68:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE80:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CE90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CE94:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CEAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CEB0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CEC8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CECC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CEEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CEF0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CF04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CF08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CF1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CF20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CF34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8325cf54
	goto loc_8325CF54;
loc_8325CF38:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8325CF3C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8325CF54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8325CF54:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// blt cr6,0x8325cc50
	if (cr6.lt) goto loc_8325CC50;
loc_8325CF74:
	// sth r27,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325CF80"))) PPC_WEAK_FUNC(sub_8325CF80);
PPC_FUNC_IMPL(__imp__sub_8325CF80) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r31,r11,27200
	ctx.r31.s64 = ctx.r11.s64 + 27200;
	// addi r11,r10,-13336
	ctx.r11.s64 = ctx.r10.s64 + -13336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83293ec8
	ctx.lr = 0x8325CFB8;
	sub_83293EC8(ctx, base);
	// li r3,8480
	ctx.r3.s64 = 8480;
	// bl 0x83209aa8
	ctx.lr = 0x8325CFC0;
	sub_83209AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325cfd0
	if (!cr6.eq) goto loc_8325CFD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8325d010
	goto loc_8325D010;
loc_8325CFD0:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// li r9,512
	ctx.r9.s64 = 512;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// subfic r6,r11,-16
	xer.ca = ctx.r11.u32 <= 4294967280;
	ctx.r6.s64 = -16 - ctx.r11.s64;
	// sthx r9,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u16);
	// rlwinm r9,r6,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x7;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8325D010:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8325d030
	if (!cr6.eq) goto loc_8325D030;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16516
	ctx.r4.s64 = ctx.r11.s64 + 16516;
	// addi r3,r10,16500
	ctx.r3.s64 = ctx.r10.s64 + 16500;
	// bl 0x83208568
	ctx.lr = 0x8325D030;
	sub_83208568(ctx, base);
loc_8325D030:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,140
	ctx.r5.s64 = 140;
	// addi r4,r11,16360
	ctx.r4.s64 = ctx.r11.s64 + 16360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8325D044;
	sub_83293EC8(ctx, base);
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

__attribute__((alias("__imp__sub_8325D05C"))) PPC_WEAK_FUNC(sub_8325D05C);
PPC_FUNC_IMPL(__imp__sub_8325D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D060"))) PPC_WEAK_FUNC(sub_8325D060);
PPC_FUNC_IMPL(__imp__sub_8325D060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8325d078
	if (!cr6.lt) goto loc_8325D078;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325D078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D08C"))) PPC_WEAK_FUNC(sub_8325D08C);
PPC_FUNC_IMPL(__imp__sub_8325D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D090"))) PPC_WEAK_FUNC(sub_8325D090);
PPC_FUNC_IMPL(__imp__sub_8325D090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,7944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11112);
	ctx.f0.f64 = double(temp.f32);
loc_8325D0A0:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325d0b0
	if (cr6.gt) goto loc_8325D0B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325D0B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325d0c4
	if (cr6.eq) goto loc_8325D0C4;
	// fsubs f1,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// b 0x8325d0a0
	goto loc_8325D0A0;
loc_8325D0C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,8776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8776);
	ctx.f0.f64 = double(temp.f32);
loc_8325D0CC:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8325d0dc
	if (cr6.lt) goto loc_8325D0DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325D0DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// fadds f1,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// b 0x8325d0cc
	goto loc_8325D0CC;
}

__attribute__((alias("__imp__sub_8325D0F0"))) PPC_WEAK_FUNC(sub_8325D0F0);
PPC_FUNC_IMPL(__imp__sub_8325D0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D0F4"))) PPC_WEAK_FUNC(sub_8325D0F4);
PPC_FUNC_IMPL(__imp__sub_8325D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D0F8"))) PPC_WEAK_FUNC(sub_8325D0F8);
PPC_FUNC_IMPL(__imp__sub_8325D0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8325d130
	if (!cr6.eq) goto loc_8325D130;
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
loc_8325D130:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x8325D140;
	sub_8322CD48(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D160"))) PPC_WEAK_FUNC(sub_8325D160);
PPC_FUNC_IMPL(__imp__sub_8325D160) {
	PPC_FUNC_PROLOGUE();
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325D16C"))) PPC_WEAK_FUNC(sub_8325D16C);
PPC_FUNC_IMPL(__imp__sub_8325D16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D170"))) PPC_WEAK_FUNC(sub_8325D170);
PPC_FUNC_IMPL(__imp__sub_8325D170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325D178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325d1d8
	if (!cr6.gt) goto loc_8325D1D8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8325D198:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325d1b4
	if (cr6.eq) goto loc_8325D1B4;
	// bl 0x83209d68
	ctx.lr = 0x8325D1B0;
	sub_83209D68(ctx, base);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_8325D1B4:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8325D1C4;
	sub_83294018(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325d198
	if (cr6.lt) goto loc_8325D198;
loc_8325D1D8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83209d68
	ctx.lr = 0x8325D1E0;
	sub_83209D68(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325D1F0"))) PPC_WEAK_FUNC(sub_8325D1F0);
PPC_FUNC_IMPL(__imp__sub_8325D1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8325D1F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325d2d8
	if (!cr6.gt) goto loc_8325D2D8;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209aa8
	ctx.lr = 0x8325D228;
	sub_83209AA8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325d2d8
	if (!cr6.gt) goto loc_8325D2D8;
loc_8325D23C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8325D25C;
	sub_83294018(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// ble cr6,0x8325d2c4
	if (!cr6.gt) goto loc_8325D2C4;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x8325d29c
	if (!cr6.eq) goto loc_8325D29C;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x8325d2a8
	goto loc_8325D2A8;
loc_8325D29C:
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bne cr6,0x8325d2e0
	if (!cr6.eq) goto loc_8325D2E0;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8325D2A8:
	// mullw r25,r11,r10
	ctx.r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8325D2B4;
	sub_83209AA8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83293ec8
	ctx.lr = 0x8325D2C4;
	sub_83293EC8(ctx, base);
loc_8325D2C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325d23c
	if (cr6.lt) goto loc_8325D23C;
loc_8325D2D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8325D2E0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16580
	ctx.r4.s64 = ctx.r11.s64 + 16580;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x83208568
	ctx.lr = 0x8325D2F4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8325D2F4"))) PPC_WEAK_FUNC(sub_8325D2F4);
PPC_FUNC_IMPL(__imp__sub_8325D2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D2F8"))) PPC_WEAK_FUNC(sub_8325D2F8);
PPC_FUNC_IMPL(__imp__sub_8325D2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8325D300;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325d388
	if (!cr6.gt) goto loc_8325D388;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8325D328:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, xer);
	// blt cr6,0x8325d368
	if (cr6.lt) goto loc_8325D368;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325d354
	if (cr6.eq) goto loc_8325D354;
	// bl 0x83209d68
	ctx.lr = 0x8325D350;
	sub_83209D68(ctx, base);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
loc_8325D354:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8325D364;
	sub_83294018(ctx, base);
	// b 0x8325d36c
	goto loc_8325D36C;
loc_8325D368:
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
loc_8325D36C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325d328
	if (cr6.lt) goto loc_8325D328;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bge cr6,0x8325d3a0
	if (!cr6.lt) goto loc_8325D3A0;
loc_8325D388:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83209d68
	ctx.lr = 0x8325D390;
	sub_83209D68(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8325D3A0:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325D3B0"))) PPC_WEAK_FUNC(sub_8325D3B0);
PPC_FUNC_IMPL(__imp__sub_8325D3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325D3C4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8325d3e4
	if (cr6.lt) goto loc_8325D3E4;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// bne cr6,0x8325d3e8
	if (!cr6.eq) goto loc_8325D3E8;
loc_8325D3E4:
	// sth r4,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r4.u16);
loc_8325D3E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325d3c4
	if (cr6.lt) goto loc_8325D3C4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D400"))) PPC_WEAK_FUNC(sub_8325D400);
PPC_FUNC_IMPL(__imp__sub_8325D400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D444"))) PPC_WEAK_FUNC(sub_8325D444);
PPC_FUNC_IMPL(__imp__sub_8325D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D448"))) PPC_WEAK_FUNC(sub_8325D448);
PPC_FUNC_IMPL(__imp__sub_8325D448) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325d4a0
	if (cr6.eq) goto loc_8325D4A0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8325D470;
	sub_83294018(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lfs f0,21708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
loc_8325D4A0:
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

__attribute__((alias("__imp__sub_8325D4B4"))) PPC_WEAK_FUNC(sub_8325D4B4);
PPC_FUNC_IMPL(__imp__sub_8325D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D4B8"))) PPC_WEAK_FUNC(sub_8325D4B8);
PPC_FUNC_IMPL(__imp__sub_8325D4B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325d504
	if (cr6.eq) goto loc_8325D504;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325d4e4
	if (cr6.eq) goto loc_8325D4E4;
	// bl 0x83209d68
	ctx.lr = 0x8325D4E4;
	sub_83209D68(ctx, base);
loc_8325D4E4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325d4fc
	if (cr6.eq) goto loc_8325D4FC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8320ce70
	ctx.lr = 0x8325D4FC;
	sub_8320CE70(ctx, base);
loc_8325D4FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d448
	ctx.lr = 0x8325D504;
	sub_8325D448(ctx, base);
loc_8325D504:
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

__attribute__((alias("__imp__sub_8325D518"))) PPC_WEAK_FUNC(sub_8325D518);
PPC_FUNC_IMPL(__imp__sub_8325D518) {
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
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325d55c
	if (cr6.eq) goto loc_8325D55C;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x8320ce70
	ctx.lr = 0x8325D54C;
	sub_8320CE70(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
loc_8325D55C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8325D580"))) PPC_WEAK_FUNC(sub_8325D580);
PPC_FUNC_IMPL(__imp__sub_8325D580) {
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
	// li r9,7
	ctx.r9.s64 = 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325D5AC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8325d5ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325D5AC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325d5ec
	if (cr6.eq) goto loc_8325D5EC;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83209aa8
	ctx.lr = 0x8325D5CC;
	sub_83209AA8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
loc_8325D5EC:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325d60c
	if (cr6.eq) goto loc_8325D60C;
	// bl 0x8320ce58
	ctx.lr = 0x8325D600;
	sub_8320CE58(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8320cf00
	ctx.lr = 0x8325D60C;
	sub_8320CF00(ctx, base);
loc_8325D60C:
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

__attribute__((alias("__imp__sub_8325D624"))) PPC_WEAK_FUNC(sub_8325D624);
PPC_FUNC_IMPL(__imp__sub_8325D624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D628"))) PPC_WEAK_FUNC(sub_8325D628);
PPC_FUNC_IMPL(__imp__sub_8325D628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D64C"))) PPC_WEAK_FUNC(sub_8325D64C);
PPC_FUNC_IMPL(__imp__sub_8325D64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D650"))) PPC_WEAK_FUNC(sub_8325D650);
PPC_FUNC_IMPL(__imp__sub_8325D650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325D664"))) PPC_WEAK_FUNC(sub_8325D664);
PPC_FUNC_IMPL(__imp__sub_8325D664) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D668"))) PPC_WEAK_FUNC(sub_8325D668);
PPC_FUNC_IMPL(__imp__sub_8325D668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325d6f0
	if (cr6.eq) goto loc_8325D6F0;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325d6d8
	if (!cr6.gt) goto loc_8325D6D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8325D6A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8325d6c0
	if (cr0.eq) goto loc_8325D6C0;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8325D6C0:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x8325d6a4
	if (cr6.lt) goto loc_8325D6A4;
loc_8325D6D8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83209d68
	ctx.lr = 0x8325D6E0;
	sub_83209D68(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8325D6F0;
	sub_83294018(ctx, base);
loc_8325D6F0:
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

__attribute__((alias("__imp__sub_8325D704"))) PPC_WEAK_FUNC(sub_8325D704);
PPC_FUNC_IMPL(__imp__sub_8325D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D708"))) PPC_WEAK_FUNC(sub_8325D708);
PPC_FUNC_IMPL(__imp__sub_8325D708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325D734:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8325d734
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325D734;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325d7d8
	if (!cr6.gt) goto loc_8325D7D8;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209aa8
	ctx.lr = 0x8325D758;
	sub_83209AA8(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325d7d8
	if (!cr6.gt) goto loc_8325D7D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8325D77C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq 0x8325d7a0
	if (cr0.eq) goto loc_8325D7A0;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8325D7A0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325d77c
	if (cr6.lt) goto loc_8325D77C;
loc_8325D7D8:
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

__attribute__((alias("__imp__sub_8325D7F0"))) PPC_WEAK_FUNC(sub_8325D7F0);
PPC_FUNC_IMPL(__imp__sub_8325D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce778
	ctx.lr = 0x8325D804;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8325d830
	if (!cr6.eq) goto loc_8325D830;
	// lfs f31,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8325d844
	goto loc_8325D844;
loc_8325D830:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f31,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
loc_8325D844:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x8325D854;
	sub_83209DF8(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// add. r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8325d88c
	if (cr0.eq) goto loc_8325D88C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8325D88C:
	// fadds f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// fadds f12,f30,f28
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r10,5696
	ctx.r9.s64 = ctx.r10.s64 + 5696;
	// lfs f0,148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f28,12(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x8325D8CC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D8DC"))) PPC_WEAK_FUNC(sub_8325D8DC);
PPC_FUNC_IMPL(__imp__sub_8325D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D8E0"))) PPC_WEAK_FUNC(sub_8325D8E0);
PPC_FUNC_IMPL(__imp__sub_8325D8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce778
	ctx.lr = 0x8325D8F4;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x8325D924;
	sub_83209DF8(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r8,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r8.u16);
	// add. r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8325d95c
	if (cr0.eq) goto loc_8325D95C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8325D95C:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f29,8(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f28,12(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831ce7c4
	ctx.lr = 0x8325D97C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D98C"))) PPC_WEAK_FUNC(sub_8325D98C);
PPC_FUNC_IMPL(__imp__sub_8325D98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325D990"))) PPC_WEAK_FUNC(sub_8325D990);
PPC_FUNC_IMPL(__imp__sub_8325D990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325D9A4"))) PPC_WEAK_FUNC(sub_8325D9A4);
PPC_FUNC_IMPL(__imp__sub_8325D9A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D9A8"))) PPC_WEAK_FUNC(sub_8325D9A8);
PPC_FUNC_IMPL(__imp__sub_8325D9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325D9B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325da14
	if (cr6.eq) goto loc_8325DA14;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325d9fc
	if (!cr6.gt) goto loc_8325D9FC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8325D9D8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8325d668
	ctx.lr = 0x8325D9E4;
	sub_8325D668(ctx, base);
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325d9d8
	if (cr6.lt) goto loc_8325D9D8;
loc_8325D9FC:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x83209d68
	ctx.lr = 0x8325DA04;
	sub_83209D68(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DA14;
	sub_83294018(ctx, base);
loc_8325DA14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325DA1C"))) PPC_WEAK_FUNC(sub_8325DA1C);
PPC_FUNC_IMPL(__imp__sub_8325DA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325DA20"))) PPC_WEAK_FUNC(sub_8325DA20);
PPC_FUNC_IMPL(__imp__sub_8325DA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8325DA28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325dad0
	if (!cr6.gt) goto loc_8325DAD0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8325DA6C;
	sub_83209AA8(ctx, base);
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325dad0
	if (!cr6.gt) goto loc_8325DAD0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8325DA88:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add. r29,r31,r10
	ctx.r29.u64 = ctx.r31.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// beq 0x8325daac
	if (cr0.eq) goto loc_8325DAAC;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DAAC;
	sub_83294018(ctx, base);
loc_8325DAAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325d708
	ctx.lr = 0x8325DAB8;
	sub_8325D708(ctx, base);
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325da88
	if (cr6.lt) goto loc_8325DA88;
loc_8325DAD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325DAD8"))) PPC_WEAK_FUNC(sub_8325DAD8);
PPC_FUNC_IMPL(__imp__sub_8325DAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8325DB14;
	sub_83209DF8(ctx, base);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r30,-4
	ctx.r8.s64 = ctx.r30.s64 + -4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8325DB40:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8325db40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325DB40;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_8325DB80"))) PPC_WEAK_FUNC(sub_8325DB80);
PPC_FUNC_IMPL(__imp__sub_8325DB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325dbe0
	if (cr6.eq) goto loc_8325DBE0;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r5,r5,25
	ctx.r5.u64 = ctx.r5.u32 & 0x7F;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// blt cr6,0x8325dbd8
	if (cr6.lt) goto loc_8325DBD8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16632
	ctx.r4.s64 = ctx.r11.s64 + 16632;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x832085e8
	ctx.lr = 0x8325DBC4;
	sub_832085E8(ctx, base);
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
loc_8325DBD8:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8325dc1c
	goto loc_8325DC1C;
loc_8325DBE0:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// blt cr6,0x8325dc18
	if (cr6.lt) goto loc_8325DC18;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16604
	ctx.r4.s64 = ctx.r11.s64 + 16604;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x832085e8
	ctx.lr = 0x8325DC04;
	sub_832085E8(ctx, base);
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
loc_8325DC18:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_8325DC1C:
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DC34"))) PPC_WEAK_FUNC(sub_8325DC34);
PPC_FUNC_IMPL(__imp__sub_8325DC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325DC38"))) PPC_WEAK_FUNC(sub_8325DC38);
PPC_FUNC_IMPL(__imp__sub_8325DC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8325DC40;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325dc60
	if (cr6.eq) goto loc_8325DC60;
	// bl 0x8323adc8
	ctx.lr = 0x8325DC5C;
	sub_8323ADC8(ctx, base);
	// b 0x8325ddf0
	goto loc_8325DDF0;
loc_8325DC60:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,0
	ctx.r29.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lfs f31,21708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325dd04
	if (!cr6.gt) goto loc_8325DD04;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8325DC88:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add. r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8325dcec
	if (cr0.eq) goto loc_8325DCEC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325dca4
	if (cr6.eq) goto loc_8325DCA4;
	// bl 0x83209d68
	ctx.lr = 0x8325DCA4;
	sub_83209D68(ctx, base);
loc_8325DCA4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325dcbc
	if (cr6.eq) goto loc_8325DCBC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8320ce70
	ctx.lr = 0x8325DCBC;
	sub_8320CE70(ctx, base);
loc_8325DCBC:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DCCC;
	sub_83294018(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// stb r29,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r29.u8);
loc_8325DCEC:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325dc88
	if (cr6.lt) goto loc_8325DC88;
loc_8325DD04:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x83209d68
	ctx.lr = 0x8325DD0C;
	sub_83209D68(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325dda0
	if (!cr6.gt) goto loc_8325DDA0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8325DD24:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add. r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8325dd88
	if (cr0.eq) goto loc_8325DD88;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325dd40
	if (cr6.eq) goto loc_8325DD40;
	// bl 0x83209d68
	ctx.lr = 0x8325DD40;
	sub_83209D68(ctx, base);
loc_8325DD40:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325dd58
	if (cr6.eq) goto loc_8325DD58;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8320ce70
	ctx.lr = 0x8325DD58;
	sub_8320CE70(ctx, base);
loc_8325DD58:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DD68;
	sub_83294018(ctx, base);
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stb r29,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r29.u8);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// stb r29,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r29.u8);
loc_8325DD88:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325dd24
	if (cr6.lt) goto loc_8325DD24;
loc_8325DDA0:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x83209d68
	ctx.lr = 0x8325DDA8;
	sub_83209D68(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325dde0
	if (!cr6.gt) goto loc_8325DDE0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8325DDBC:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8325d9a8
	ctx.lr = 0x8325DDC8;
	sub_8325D9A8(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325ddbc
	if (cr6.lt) goto loc_8325DDBC;
loc_8325DDE0:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x83209d68
	ctx.lr = 0x8325DDE8;
	sub_83209D68(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8325d170
	ctx.lr = 0x8325DDF0;
	sub_8325D170(ctx, base);
loc_8325DDF0:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x83209d68
	ctx.lr = 0x8325DDF8;
	sub_83209D68(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DE08;
	sub_83294018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325DE14"))) PPC_WEAK_FUNC(sub_8325DE14);
PPC_FUNC_IMPL(__imp__sub_8325DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325DE18"))) PPC_WEAK_FUNC(sub_8325DE18);
PPC_FUNC_IMPL(__imp__sub_8325DE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8325DE20;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lfs f31,21708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325dee4
	if (!cr6.gt) goto loc_8325DEE4;
	// mulli r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 * 28;
	// bl 0x83209aa8
	ctx.lr = 0x8325DE60;
	sub_83209AA8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325dee4
	if (!cr6.gt) goto loc_8325DEE4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8325DE7C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// add. r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r27,r10,r29
	ctx.r27.u64 = ctx.r10.u64 + ctx.r29.u64;
	// beq 0x8325dec0
	if (cr0.eq) goto loc_8325DEC0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DEA0;
	sub_83294018(ctx, base);
	// stfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stb r28,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// stb r28,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r28.u8);
	// stb r28,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r28.u8);
loc_8325DEC0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d580
	ctx.lr = 0x8325DECC;
	sub_8325D580(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325de7c
	if (cr6.lt) goto loc_8325DE7C;
loc_8325DEE4:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lhz r10,2(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// ble cr6,0x8325df88
	if (!cr6.gt) goto loc_8325DF88;
	// mulli r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 * 28;
	// bl 0x83209aa8
	ctx.lr = 0x8325DF04;
	sub_83209AA8(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325df88
	if (!cr6.gt) goto loc_8325DF88;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8325DF20:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// add. r30,r10,r29
	ctx.r30.u64 = ctx.r10.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq 0x8325df64
	if (cr0.eq) goto loc_8325DF64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DF44;
	sub_83294018(ctx, base);
	// stfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stb r28,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// stb r28,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r28.u8);
	// stb r28,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r28.u8);
loc_8325DF64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d580
	ctx.lr = 0x8325DF70;
	sub_8325D580(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325df20
	if (cr6.lt) goto loc_8325DF20;
loc_8325DF88:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325e020
	if (!cr6.gt) goto loc_8325E020;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x8325DFBC;
	sub_83209AA8(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325e020
	if (!cr6.gt) goto loc_8325E020;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8325DFD8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// add. r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// beq 0x8325dffc
	if (cr0.eq) goto loc_8325DFFC;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x8325DFFC;
	sub_83294018(ctx, base);
loc_8325DFFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325da20
	ctx.lr = 0x8325E008;
	sub_8325DA20(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325dfd8
	if (cr6.lt) goto loc_8325DFD8;
loc_8325E020:
	// addi r4,r25,12
	ctx.r4.s64 = ctx.r25.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x8325d1f0
	ctx.lr = 0x8325E02C;
	sub_8325D1F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325E038"))) PPC_WEAK_FUNC(sub_8325E038);
PPC_FUNC_IMPL(__imp__sub_8325E038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8325E040;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8325E074;
	sub_83209DF8(ctx, base);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8325e0dc
	if (!cr6.gt) goto loc_8325E0DC;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
loc_8325E0A0:
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325e0b8
	if (!cr6.gt) goto loc_8325E0B8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8325E0B8:
	// lhz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325e0cc
	if (!cr6.gt) goto loc_8325E0CC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8325E0CC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8325e0a0
	if (cr6.lt) goto loc_8325E0A0;
loc_8325E0DC:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325e194
	if (!cr6.gt) goto loc_8325E194;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8325E0F4:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r29,r8
	ctx.r3.u64 = ctx.r29.u64 + ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_8325E12C:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8325e12c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325E12C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325e154
	if (!cr6.gt) goto loc_8325E154;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x8325e154
	if (!cr6.gt) goto loc_8325E154;
	// sth r26,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r26.u16);
loc_8325E154:
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325e170
	if (!cr6.gt) goto loc_8325E170;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x8325e170
	if (!cr6.gt) goto loc_8325E170;
	// sth r27,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r27.u16);
loc_8325E170:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x8325E17C;
	sub_83294018(ctx, base);
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325e0f4
	if (cr6.lt) goto loc_8325E0F4;
loc_8325E194:
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// bl 0x8325d9a8
	ctx.lr = 0x8325E1A8;
	sub_8325D9A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325E1B0"))) PPC_WEAK_FUNC(sub_8325E1B0);
PPC_FUNC_IMPL(__imp__sub_8325E1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325E1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r27,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r3.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8325e2b4
	if (!cr6.eq) goto loc_8325E2B4;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8325E200;
	sub_83209DF8(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// ble cr6,0x8325e254
	if (!cr6.gt) goto loc_8325E254;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8325E228:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// bne 0x8325e228
	if (!cr0.eq) goto loc_8325E228;
loc_8325E254:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lhzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sthx r9,r27,r11
	PPC_STORE_U16(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addic. r28,r8,12
	xer.ca = ctx.r8.u32 > 4294967283;
	ctx.r28.s64 = ctx.r8.s64 + 12;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8325e288
	if (cr0.eq) goto loc_8325E288;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83294018
	ctx.lr = 0x8325E288;
	sub_83294018(ctx, base);
loc_8325E288:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, xer);
	// ble cr6,0x8325e2b4
	if (!cr6.gt) goto loc_8325E2B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_8325E2B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325E2C8"))) PPC_WEAK_FUNC(sub_8325E2C8);
PPC_FUNC_IMPL(__imp__sub_8325E2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8325e308
	if (!cr6.gt) goto loc_8325E308;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325E2E4:
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8325e2e4
	if (cr6.lt) goto loc_8325E2E4;
loc_8325E308:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325E310"))) PPC_WEAK_FUNC(sub_8325E310);
PPC_FUNC_IMPL(__imp__sub_8325E310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325E318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8325e364
	if (!cr6.gt) goto loc_8325E364;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8325E340:
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x8325e370
	if (cr6.eq) goto loc_8325E370;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8325e340
	if (cr6.lt) goto loc_8325E340;
loc_8325E364:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8325E370:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r3,r27
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r27.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8325e460
	if (!cr6.eq) goto loc_8325E460;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8325E3AC;
	sub_83209DF8(ctx, base);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// ble cr6,0x8325e400
	if (!cr6.gt) goto loc_8325E400;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8325E3D4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// bne 0x8325e3d4
	if (!cr0.eq) goto loc_8325E3D4;
loc_8325E400:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lhzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sthx r9,r11,r27
	PPC_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r28,r8,12
	xer.ca = ctx.r8.u32 > 4294967283;
	ctx.r28.s64 = ctx.r8.s64 + 12;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8325e434
	if (cr0.eq) goto loc_8325E434;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83294018
	ctx.lr = 0x8325E434;
	sub_83294018(ctx, base);
loc_8325E434:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, xer);
	// ble cr6,0x8325e460
	if (!cr6.gt) goto loc_8325E460;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
loc_8325E460:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325E474"))) PPC_WEAK_FUNC(sub_8325E474);
PPC_FUNC_IMPL(__imp__sub_8325E474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325E478"))) PPC_WEAK_FUNC(sub_8325E478);
PPC_FUNC_IMPL(__imp__sub_8325E478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce768
	ctx.lr = 0x8325E490;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f24,f6
	ctx.f24.f64 = ctx.f6.f64;
	// fmr f1,f5
	ctx.f1.f64 = ctx.f5.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E4BC;
	sub_831D1930(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E4C8;
	sub_831D1930(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E4D4;
	sub_831D1A10(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E4E0;
	sub_831D1A10(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f12,25236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25236);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmsubs f0,f27,f28,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 - ctx.f0.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f0,f0,f11
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x8325e50c
	if (cr6.lt) goto loc_8325E50C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325E50C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325e548
	if (cr6.eq) goto loc_8325E548;
	// fadds f13,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// fadds f12,f30,f25
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8325e56c
	goto loc_8325E56C;
loc_8325E548:
	// fsubs f12,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f25.f64));
	// fsubs f11,f31,f26
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmsubs f9,f11,f13,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f10.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fmadds f7,f8,f29,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f31.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f6,f8,f27,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f30.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8325E56C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7b4
	ctx.lr = 0x8325E578;
	__restfpr_24(ctx, base);
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

__attribute__((alias("__imp__sub_8325E58C"))) PPC_WEAK_FUNC(sub_8325E58C);
PPC_FUNC_IMPL(__imp__sub_8325E58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325E590"))) PPC_WEAK_FUNC(sub_8325E590);
PPC_FUNC_IMPL(__imp__sub_8325E590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8325E598;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce744
	ctx.lr = 0x8325E5A0;
	__savefpr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// fmr f23,f2
	ctx.f23.f64 = ctx.f2.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// fmr f22,f3
	ctx.f22.f64 = ctx.f3.f64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// fmr f31,f4
	ctx.f31.f64 = ctx.f4.f64;
	// fmr f19,f5
	ctx.f19.f64 = ctx.f5.f64;
	// fmr f18,f6
	ctx.f18.f64 = ctx.f6.f64;
	// bne cr6,0x8325e618
	if (!cr6.eq) goto loc_8325E618;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E5D4;
	sub_831D1A10(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E5DC;
	sub_831D1930(ctx, base);
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E5E4;
	sub_831D1A10(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E5F0;
	sub_831D1930(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fnmsubs f1,f31,f22,f24
	ctx.f1.f64 = double(float(-(ctx.f31.f64 * ctx.f22.f64 - ctx.f24.f64)));
	// fmadds f2,f0,f22,f23
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f23.f64));
loc_8325E600:
	// bl 0x8325d7f0
	ctx.lr = 0x8325E604;
	sub_8325D7F0(ctx, base);
loc_8325E604:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce790
	ctx.lr = 0x8325E614;
	__restfpr_15(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8325E618:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x8325e6c8
	if (!cr6.eq) goto loc_8325E6C8;
	// fsubs f1,f19,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f31.f64));
	// bl 0x8325d090
	ctx.lr = 0x8325E628;
	sub_8325D090(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f30,f1,f0,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E640;
	sub_831D1A10(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E64C;
	sub_831D1930(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E658;
	sub_831D1A10(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E664;
	sub_831D1930(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E670;
	sub_831D1A10(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x831d1930
	ctx.lr = 0x8325E67C;
	sub_831D1930(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// fadds f0,f28,f29
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fadds f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// fadds f11,f27,f29
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// fadds f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fnmsubs f10,f0,f22,f24
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f22.f64 - ctx.f24.f64)));
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmadds f9,f13,f22,f23
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 + ctx.f23.f64));
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fnmsubs f1,f11,f22,f24
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f22.f64 - ctx.f24.f64)));
	// fmadds f2,f8,f22,f23
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f22.f64 + ctx.f23.f64));
	// b 0x8325e600
	goto loc_8325E600;
loc_8325E6C8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f20,11112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11112);
	ctx.f20.f64 = double(temp.f32);
	// addi r29,r11,5696
	ctx.r29.s64 = ctx.r11.s64 + 5696;
	// lfs f17,16564(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16564);
	ctx.f17.f64 = double(temp.f32);
	// lfs f21,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f21.f64 = double(temp.f32);
loc_8325E6E8:
	// fsubs f1,f19,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f31.f64));
	// bl 0x8325d090
	ctx.lr = 0x8325E6F0;
	sub_8325D090(ctx, base);
	// fcmpu cr6,f1,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f21.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x8325e700
	if (!cr6.lt) goto loc_8325E700;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325E700:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325e714
	if (cr6.eq) goto loc_8325E714;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x8325e718
	goto loc_8325E718;
loc_8325E714:
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8325E718:
	// fcmpu cr6,f0,f17
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f17.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8325e728
	if (cr6.lt) goto loc_8325E728;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325E728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325e604
	if (!cr6.eq) goto loc_8325E604;
	// fmuls f0,f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f21
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x8325e748
	if (cr6.gt) goto loc_8325E748;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325E748:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8325e778
	if (cr6.eq) goto loc_8325E778;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x8325e778
	if (!cr6.eq) goto loc_8325E778;
	// lfs f0,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8325e774
	if (!cr6.lt) goto loc_8325E774;
	// lfs f0,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8325e778
	if (cr6.gt) goto loc_8325E778;
loc_8325E774:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8325E778:
	// lfs f0,148(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f26,f1,f31
	ctx.f26.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fmadds f25,f0,f1,f31
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f31.f64));
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325E790;
	sub_831D1A10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fnmsubs f28,f0,f22,f24
	ctx.f28.f64 = double(float(-(ctx.f0.f64 * ctx.f22.f64 - ctx.f24.f64)));
	// bl 0x831d1930
	ctx.lr = 0x8325E7A0;
	sub_831D1930(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmadds f27,f13,f22,f23
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f22.f64 + ctx.f23.f64));
	// bl 0x831d1a10
	ctx.lr = 0x8325E7B4;
	sub_831D1A10(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fnmsubs f30,f12,f22,f24
	ctx.f30.f64 = double(float(-(ctx.f12.f64 * ctx.f22.f64 - ctx.f24.f64)));
	// bl 0x831d1930
	ctx.lr = 0x8325E7C4;
	sub_831D1930(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// fmadds f29,f11,f22,f23
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f22.f64 + ctx.f23.f64));
	// bne cr6,0x8325e928
	if (!cr6.eq) goto loc_8325E928;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8325e968
	if (cr6.eq) goto loc_8325E968;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325e930
	if (!cr6.gt) goto loc_8325E930;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmr f6,f26
	ctx.f6.f64 = ctx.f26.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8325e478
	ctx.lr = 0x8325E810;
	sub_8325E478(ctx, base);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f24
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f24.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f23
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f23.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f21
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bgt cr6,0x8325e838
	if (cr6.gt) goto loc_8325E838;
	// fmr f11,f21
	ctx.f11.f64 = ctx.f21.f64;
	// b 0x8325e83c
	goto loc_8325E83C;
loc_8325E838:
	// fsqrts f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f0.f64)));
loc_8325E83C:
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x8325d060
	ctx.lr = 0x8325E844;
	sub_8325D060(ctx, base);
	// fmuls f0,f1,f18
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f18.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x8325e858
	if (cr6.lt) goto loc_8325E858;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325E858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325e88c
	if (cr6.eq) goto loc_8325E88C;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// b 0x8325e6e8
	goto loc_8325E6E8;
loc_8325E88C:
	// fcmpu cr6,f11,f21
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f21.f64);
	// beq cr6,0x8325e898
	if (cr6.eq) goto loc_8325E898;
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
loc_8325E898:
	// fmadds f16,f0,f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f24.f64));
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmadds f15,f0,f12,f23
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f23.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fsubs f6,f25,f20
	ctx.f6.f64 = double(float(ctx.f25.f64 - ctx.f20.f64));
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// fmr f4,f15
	ctx.f4.f64 = ctx.f15.f64;
	// bl 0x8325e478
	ctx.lr = 0x8325E8C4;
	sub_8325E478(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// fmr f6,f26
	ctx.f6.f64 = ctx.f26.f64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmr f2,f15
	ctx.f2.f64 = ctx.f15.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// bl 0x8325e478
	ctx.lr = 0x8325E910;
	sub_8325E478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8325d7f0
	ctx.lr = 0x8325E920;
	sub_8325D7F0(ctx, base);
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// b 0x8325e6e8
	goto loc_8325E6E8;
loc_8325E928:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x8325e968
	if (cr6.eq) goto loc_8325E968;
loc_8325E930:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8325e968
	if (cr6.eq) goto loc_8325E968;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// fmr f6,f26
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f26.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8325e478
	ctx.lr = 0x8325E95C;
	sub_8325E478(ctx, base);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8325e984
	goto loc_8325E984;
loc_8325E968:
	// fadds f13,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// lfs f0,148(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f29,f27
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8325E984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x8325d8e0
	ctx.lr = 0x8325E994;
	sub_8325D8E0(ctx, base);
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// b 0x8325e6e8
	goto loc_8325E6E8;
}

__attribute__((alias("__imp__sub_8325E99C"))) PPC_WEAK_FUNC(sub_8325E99C);
PPC_FUNC_IMPL(__imp__sub_8325E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325E9A0"))) PPC_WEAK_FUNC(sub_8325E9A0);
PPC_FUNC_IMPL(__imp__sub_8325E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8325E9A8;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce740
	ctx.lr = 0x8325E9B0;
	__savefpr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f1.f64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// fmr f16,f2
	ctx.f16.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x83294018
	ctx.lr = 0x8325E9E4;
	sub_83294018(ctx, base);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r31,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83294018
	ctx.lr = 0x8325E9FC;
	sub_83294018(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r31.u16);
	// lfs f15,25236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25236);
	ctx.f15.f64 = double(temp.f32);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f23,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f12,f13,f23
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f23.f64));
	// lfs f22,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f11,f0,f22
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f22.f64));
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f15
	cr6.compare(ctx.f9.f64, ctx.f15.f64);
	// blt cr6,0x8325ea50
	if (cr6.lt) goto loc_8325EA50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325EA50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325ea60
	if (cr6.eq) goto loc_8325EA60;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8325EA60:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfs f17,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f17.f64 = double(temp.f32);
	// addi r28,r11,16548
	ctx.r28.s64 = ctx.r11.s64 + 16548;
	// fmr f18,f17
	ctx.f18.f64 = ctx.f17.f64;
	// fmr f14,f17
	ctx.f14.f64 = ctx.f17.f64;
	// ble cr6,0x8325ed34
	if (!cr6.gt) goto loc_8325ED34;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8325EA90:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f1,f0,f23
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f22
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f22.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f9,f2,f2,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f15
	cr6.compare(ctx.f9.f64, ctx.f15.f64);
	// blt cr6,0x8325ead0
	if (cr6.lt) goto loc_8325EAD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325EAD0:
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// beq cr6,0x8325eb0c
	if (cr6.eq) goto loc_8325EB0C;
	// fcmpu cr6,f13,f15
	cr6.compare(ctx.f13.f64, ctx.f15.f64);
	// blt cr6,0x8325eaf4
	if (cr6.lt) goto loc_8325EAF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325EAF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325ed1c
	if (!cr6.eq) goto loc_8325ED1C;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// b 0x8325eb2c
	goto loc_8325EB2C;
loc_8325EB0C:
	// fcmpu cr6,f13,f15
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f15.f64);
	// blt cr6,0x8325eb18
	if (cr6.lt) goto loc_8325EB18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325EB18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325eb2c
	if (cr6.eq) goto loc_8325EB2C;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
loc_8325EB2C:
	// fcmpu cr6,f2,f17
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f17.f64);
	// bne cr6,0x8325eb44
	if (!cr6.eq) goto loc_8325EB44;
	// fcmpu cr6,f1,f17
	cr6.compare(ctx.f1.f64, ctx.f17.f64);
	// bne cr6,0x8325eb44
	if (!cr6.eq) goto loc_8325EB44;
	// fmr f31,f17
	ctx.f31.f64 = ctx.f17.f64;
	// b 0x8325eb4c
	goto loc_8325EB4C;
loc_8325EB44:
	// bl 0x831d17c0
	ctx.lr = 0x8325EB48;
	sub_831D17C0(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
loc_8325EB4C:
	// fcmpu cr6,f29,f17
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f17.f64);
	// bne cr6,0x8325eb64
	if (!cr6.eq) goto loc_8325EB64;
	// fcmpu cr6,f30,f17
	cr6.compare(ctx.f30.f64, ctx.f17.f64);
	// bne cr6,0x8325eb64
	if (!cr6.eq) goto loc_8325EB64;
	// fmr f24,f17
	ctx.f24.f64 = ctx.f17.f64;
	// b 0x8325eb74
	goto loc_8325EB74;
loc_8325EB64:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x831d17c0
	ctx.lr = 0x8325EB70;
	sub_831D17C0(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64));
loc_8325EB74:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8325EB80;
	sub_831D1A10(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f28,f0,f19
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// bl 0x831d1930
	ctx.lr = 0x8325EB90;
	sub_831D1930(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmr f30,f24
	ctx.f30.f64 = ctx.f24.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// fmuls f27,f13,f19
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f19.f64));
	// bl 0x831d1a10
	ctx.lr = 0x8325EBA4;
	sub_831D1A10(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// fmuls f26,f12,f19
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f19.f64));
	// bl 0x831d1930
	ctx.lr = 0x8325EBB4;
	sub_831D1930(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f21,f10,f26
	ctx.f21.f64 = double(float(ctx.f10.f64 - ctx.f26.f64));
	// fsubs f30,f23,f28
	ctx.f30.f64 = double(float(ctx.f23.f64 - ctx.f28.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fadds f29,f27,f22
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f22.f64));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmr f6,f24
	ctx.f6.f64 = ctx.f24.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmuls f25,f11,f19
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f19.f64));
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fadds f20,f25,f9
	ctx.f20.f64 = double(float(ctx.f25.f64 + ctx.f9.f64));
	// fmr f4,f20
	ctx.f4.f64 = ctx.f20.f64;
	// bl 0x8325e478
	ctx.lr = 0x8325EBF8;
	sub_8325E478(ctx, base);
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325ec18
	if (!cr6.eq) goto loc_8325EC18;
	// stfs f30,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f14,f31
	ctx.f14.f64 = ctx.f31.f64;
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x8325ec44
	goto loc_8325EC44;
loc_8325EC18:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// fmr f6,f16
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f16.f64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f4,f18
	ctx.f4.f64 = ctx.f18.f64;
	// fmr f3,f19
	ctx.f3.f64 = ctx.f19.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8325e590
	ctx.lr = 0x8325EC44;
	sub_8325E590(ctx, base);
loc_8325EC44:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325ec68
	if (cr6.eq) goto loc_8325EC68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f20
	ctx.f4.f64 = ctx.f20.f64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// bl 0x8325d8e0
	ctx.lr = 0x8325EC68;
	sub_8325D8E0(ctx, base);
loc_8325EC68:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f28,f23
	ctx.f30.f64 = double(float(ctx.f28.f64 + ctx.f23.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f22,f27
	ctx.f29.f64 = double(float(ctx.f22.f64 - ctx.f27.f64));
	// fadds f28,f0,f26
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fsubs f27,f13,f25
	ctx.f27.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmr f6,f24
	ctx.f6.f64 = ctx.f24.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// bl 0x8325e478
	ctx.lr = 0x8325ECA4;
	sub_8325E478(ctx, base);
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325ecc0
	if (!cr6.eq) goto loc_8325ECC0;
	// stfs f30,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// b 0x8325ecec
	goto loc_8325ECEC;
loc_8325ECC0:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// fmr f6,f16
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f16.f64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f4,f18
	ctx.f4.f64 = ctx.f18.f64;
	// fneg f3,f19
	ctx.f3.u64 = ctx.f19.u64 ^ 0x8000000000000000;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8325e590
	ctx.lr = 0x8325ECEC;
	sub_8325E590(ctx, base);
loc_8325ECEC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325ed10
	if (cr6.eq) goto loc_8325ED10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x8325d8e0
	ctx.lr = 0x8325ED10;
	sub_8325D8E0(ctx, base);
loc_8325ED10:
	// lfs f23,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmr f18,f24
	ctx.f18.f64 = ctx.f24.f64;
	// lfs f22,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f22.f64 = double(temp.f32);
loc_8325ED1C:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325ea90
	if (cr6.lt) goto loc_8325EA90;
loc_8325ED34:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325ee8c
	if (!cr6.eq) goto loc_8325EE8C;
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfs f30,16564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16564);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,11112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11112);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x8325ede8
	if (!cr6.gt) goto loc_8325EDE8;
	// fadds f0,f18,f31
	ctx.f0.f64 = double(float(ctx.f18.f64 + ctx.f31.f64));
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f6,f17
	ctx.f6.f64 = ctx.f17.f64;
	// fmr f4,f18
	ctx.f4.f64 = ctx.f18.f64;
	// fmr f3,f19
	ctx.f3.f64 = ctx.f19.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// lhzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// fsubs f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// bl 0x8325e590
	ctx.lr = 0x8325ED8C;
	sub_8325E590(ctx, base);
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addic. r31,r9,-2
	xer.ca = ctx.r9.u32 > 1;
	ctx.r31.s64 = ctx.r9.s64 + -2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x8325edcc
	if (cr0.lt) goto loc_8325EDCC;
	// rlwinm r30,r31,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
loc_8325EDA0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8325d8e0
	ctx.lr = 0x8325EDC0;
	sub_8325D8E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// bge 0x8325eda0
	if (!cr0.lt) goto loc_8325EDA0;
loc_8325EDCC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f4,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8325d8e0
	ctx.lr = 0x8325EDE8;
	sub_8325D8E0(ctx, base);
loc_8325EDE8:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325ee70
	if (!cr6.gt) goto loc_8325EE70;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f2,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f1,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f6,f17
	ctx.f6.f64 = ctx.f17.f64;
	// fadds f4,f14,f31
	ctx.f4.f64 = double(float(ctx.f14.f64 + ctx.f31.f64));
	// fmr f3,f19
	ctx.f3.f64 = ctx.f19.f64;
	// lfs f0,7944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7944);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f14,f0
	ctx.f0.f64 = double(float(ctx.f14.f64 + ctx.f0.f64));
	// lhzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// fsubs f5,f0,f30
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// bl 0x8325e590
	ctx.lr = 0x8325EE2C;
	sub_8325E590(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lhz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r8,r23,-4
	ctx.r8.s64 = ctx.r23.s64 + -4;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f12,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8325EE64:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8325ee64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325EE64;
loc_8325EE70:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8325d668
	ctx.lr = 0x8325EE78;
	sub_8325D668(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce78c
	ctx.lr = 0x8325EE88;
	__restfpr_14(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8325EE8C:
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325eeec
	if (!cr6.gt) goto loc_8325EEEC;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// fmr f6,f16
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f16.f64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f5,f14
	ctx.f5.f64 = ctx.f14.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f4,f18
	ctx.f4.f64 = ctx.f18.f64;
	// fmr f3,f19
	ctx.f3.f64 = ctx.f19.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8325e590
	ctx.lr = 0x8325EEC8;
	sub_8325E590(ctx, base);
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8325EEEC:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325EEFC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8325eefc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325EEFC;
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325ef68
	if (!cr6.gt) goto loc_8325EF68;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// fmr f6,f16
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f16.f64;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f5,f14
	ctx.f5.f64 = ctx.f14.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f4,f18
	ctx.f4.f64 = ctx.f18.f64;
	// fneg f3,f19
	ctx.f3.u64 = ctx.f19.u64 ^ 0x8000000000000000;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8325e590
	ctx.lr = 0x8325EF44;
	sub_8325E590(ctx, base);
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_8325EF68:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8325EF78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8325ef78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8325EF78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x831ce78c
	ctx.lr = 0x8325EF94;
	__restfpr_14(ctx, base);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325EF98"))) PPC_WEAK_FUNC(sub_8325EF98);
PPC_FUNC_IMPL(__imp__sub_8325EF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8325EFA0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325f208
	if (cr6.eq) goto loc_8325F208;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r5,12
	ctx.r5.s64 = 12;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83294018
	ctx.lr = 0x8325EFE4;
	sub_83294018(ctx, base);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lhz r7,6(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// lhz r6,2(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// subfe r24,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r24.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// ble cr6,0x8325f1b4
	if (!cr6.gt) goto loc_8325F1B4;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// addi r25,r11,5696
	ctx.r25.s64 = ctx.r11.s64 + 5696;
	// lfs f30,25236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25236);
	ctx.f30.f64 = double(temp.f32);
loc_8325F034:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f19c
	if (!cr6.gt) goto loc_8325F19C;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f19c
	if (!cr6.gt) goto loc_8325F19C;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325f0c0
	if (cr6.eq) goto loc_8325F0C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325f0c0
	if (cr6.eq) goto loc_8325F0C0;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f0a8
	if (!cr6.gt) goto loc_8325F0A8;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8325e310
	ctx.lr = 0x8325F098;
	sub_8325E310(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325f0a8
	if (cr6.eq) goto loc_8325F0A8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8325e038
	ctx.lr = 0x8325F0A8;
	sub_8325E038(ctx, base);
loc_8325F0A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8325d9a8
	ctx.lr = 0x8325F0B0;
	sub_8325D9A8(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
loc_8325F0C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325f0d4
	if (cr6.eq) goto loc_8325F0D4;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_8325F0D4:
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// lfs f0,148(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,-20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8325f104
	if (cr6.lt) goto loc_8325F104;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8325F104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325f19c
	if (!cr6.eq) goto loc_8325F19C;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83294018
	ctx.lr = 0x8325F120;
	sub_83294018(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83294018
	ctx.lr = 0x8325F130;
	sub_83294018(ctx, base);
	// lhz r7,10(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// rlwinm r11,r23,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 7) & 0xFFFFFF80;
	// lfs f2,-16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f2.f64 = double(temp.f32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lbz r9,-23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -23);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// lbz r8,-24(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// or r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 | ctx.r6.u64;
	// bl 0x8325e9a0
	ctx.lr = 0x8325F164;
	sub_8325E9A0(ctx, base);
	// lhz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8325f180
	if (!cr6.gt) goto loc_8325F180;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8325dad8
	ctx.lr = 0x8325F180;
	sub_8325DAD8(ctx, base);
loc_8325F180:
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f19c
	if (!cr6.gt) goto loc_8325F19C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8325dad8
	ctx.lr = 0x8325F19C;
	sub_8325DAD8(ctx, base);
loc_8325F19C:
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325f034
	if (cr6.lt) goto loc_8325F034;
loc_8325F1B4:
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f200
	if (!cr6.gt) goto loc_8325F200;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8325e1b0
	ctx.lr = 0x8325F1D0;
	sub_8325E1B0(ctx, base);
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x8325d9a8
	ctx.lr = 0x8325F1E0;
	sub_8325D9A8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// sth r21,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r21.u16);
loc_8325F200:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8325d9a8
	ctx.lr = 0x8325F208;
	sub_8325D9A8(ctx, base);
loc_8325F208:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325F218"))) PPC_WEAK_FUNC(sub_8325F218);
PPC_FUNC_IMPL(__imp__sub_8325F218) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325f394
	if (!cr6.eq) goto loc_8325F394;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5696
	ctx.r10.s64 = ctx.r10.s64 + 5696;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// lfs f11,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// beq cr6,0x8325f278
	if (cr6.eq) goto loc_8325F278;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r10,16684
	ctx.r4.s64 = ctx.r10.s64 + 16684;
	// addi r3,r9,16568
	ctx.r3.s64 = ctx.r9.s64 + 16568;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83208568
	ctx.lr = 0x8325F278;
	sub_83208568(ctx, base);
loc_8325F278:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325f298
	if (!cr6.eq) goto loc_8325F298;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16660
	ctx.r4.s64 = ctx.r11.s64 + 16660;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x83208568
	ctx.lr = 0x8325F298;
	sub_83208568(ctx, base);
loc_8325F298:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325f324
	if (cr6.eq) goto loc_8325F324;
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lhz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lhz r11,34(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// extsw r31,r8
	ctx.r31.s64 = ctx.r8.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// fcfid f1,f5
	ctx.f1.f64 = double(ctx.f5.s64);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f12,f3
	ctx.f12.f64 = double(float(ctx.f3.f64));
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
loc_8325F324:
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f9,148(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325f33c
	if (cr6.eq) goto loc_8325F33C;
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
loc_8325F33C:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325f350
	if (cr6.eq) goto loc_8325F350;
	// fmadds f0,f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_8325F350:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325f38c
	if (!cr6.gt) goto loc_8325F38C;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_8325F364:
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f12,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f7,f9,f13,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsu f7,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8325f364
	if (cr6.lt) goto loc_8325F364;
loc_8325F38C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
loc_8325F394:
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

__attribute__((alias("__imp__sub_8325F3A8"))) PPC_WEAK_FUNC(sub_8325F3A8);
PPC_FUNC_IMPL(__imp__sub_8325F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8325F3B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8325f470
	if (cr6.eq) goto loc_8325F470;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325f470
	if (!cr6.gt) goto loc_8325F470;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8325F3D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8325f45c
	if (cr6.eq) goto loc_8325F45C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8325db80
	ctx.lr = 0x8325F3FC;
	sub_8325DB80(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8325f45c
	if (cr6.lt) goto loc_8325F45C;
	// beq cr6,0x8325f424
	if (cr6.eq) goto loc_8325F424;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x8325f478
	if (!cr6.lt) goto loc_8325F478;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8325f454
	goto loc_8325F454;
loc_8325F424:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8325f440
	if (cr6.lt) goto loc_8325F440;
	// bne cr6,0x8325f48c
	if (!cr6.eq) goto loc_8325F48C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8325f454
	goto loc_8325F454;
loc_8325F440:
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8325F454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325f218
	ctx.lr = 0x8325F45C;
	sub_8325F218(ctx, base);
loc_8325F45C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325f3d8
	if (cr6.lt) goto loc_8325F3D8;
loc_8325F470:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8325F478:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16720
	ctx.r4.s64 = ctx.r11.s64 + 16720;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x83208568
	ctx.lr = 0x8325F48C;
	sub_83208568(ctx, base);
loc_8325F48C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16720
	ctx.r4.s64 = ctx.r11.s64 + 16720;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83208568
	ctx.lr = 0x8325F4A4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8325F4A4"))) PPC_WEAK_FUNC(sub_8325F4A4);
PPC_FUNC_IMPL(__imp__sub_8325F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325F4A8"))) PPC_WEAK_FUNC(sub_8325F4A8);
PPC_FUNC_IMPL(__imp__sub_8325F4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8325F4B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x83293840
	ctx.lr = 0x8325F4C8;
	sub_83293840(ctx, base);
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// li r26,0
	ctx.r26.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f5cc
	if (!cr6.gt) goto loc_8325F5CC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8325F4E0:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325f4fc
	if (cr6.eq) goto loc_8325F4FC;
	// bl 0x83292020
	ctx.lr = 0x8325F4FC;
	sub_83292020(ctx, base);
loc_8325F4FC:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// bl 0x832920f0
	ctx.lr = 0x8325F520;
	sub_832920F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8325f568
	if (cr6.eq) goto loc_8325F568;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// beq cr6,0x8325f560
	if (cr6.eq) goto loc_8325F560;
	// bl 0x832924d0
	ctx.lr = 0x8325F55C;
	sub_832924D0(ctx, base);
	// b 0x8325f5b4
	goto loc_8325F5B4;
loc_8325F560:
	// bl 0x83292410
	ctx.lr = 0x8325F564;
	sub_83292410(ctx, base);
	// b 0x8325f5b4
	goto loc_8325F5B4;
loc_8325F568:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8325f5b4
	if (!cr6.gt) goto loc_8325F5B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8325F580:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83292398
	ctx.lr = 0x8325F59C;
	sub_83292398(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325f580
	if (cr6.lt) goto loc_8325F580;
loc_8325F5B4:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325f4e0
	if (cr6.lt) goto loc_8325F4E0;
loc_8325F5CC:
	// addi r31,r24,12
	ctx.r31.s64 = ctx.r24.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832936d8
	ctx.lr = 0x8325F5DC;
	sub_832936D8(ctx, base);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x8325f624
	if (!cr6.gt) goto loc_8325F624;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325f624
	if (!cr6.gt) goto loc_8325F624;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325F5F8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8325f610
	if (!cr6.eq) goto loc_8325F610;
	// sth r23,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r23.u16);
loc_8325F610:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325f5f8
	if (cr6.lt) goto loc_8325F5F8;
loc_8325F624:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8325f3a8
	ctx.lr = 0x8325F630;
	sub_8325F3A8(ctx, base);
	// bl 0x832938a8
	ctx.lr = 0x8325F634;
	sub_832938A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325F63C"))) PPC_WEAK_FUNC(sub_8325F63C);
PPC_FUNC_IMPL(__imp__sub_8325F63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325F640"))) PPC_WEAK_FUNC(sub_8325F640);
PPC_FUNC_IMPL(__imp__sub_8325F640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8325F648;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325f7fc
	if (!cr6.gt) goto loc_8325F7FC;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r28,r8,5696
	ctx.r28.s64 = ctx.r8.s64 + 5696;
	// addi r31,r9,24880
	ctx.r31.s64 = ctx.r9.s64 + 24880;
	// addi r27,r10,16568
	ctx.r27.s64 = ctx.r10.s64 + 16568;
	// addi r26,r11,16812
	ctx.r26.s64 = ctx.r11.s64 + 16812;
loc_8325F68C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r29,r25,r11
	ctx.r29.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325f7e8
	if (!cr6.gt) goto loc_8325F7E8;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r3,r21,12
	ctx.r3.s64 = ctx.r21.s64 + 12;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x8325db80
	ctx.lr = 0x8325F6B0;
	sub_8325DB80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325f7d0
	if (cr6.eq) goto loc_8325F7D0;
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgt cr6,0x8325f804
	if (cr6.gt) goto loc_8325F804;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8325f6e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325F6E8;
	// bdzf 4*cr6+eq,0x8325f6e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8325F6E8;
	// bne cr6,0x8325f72c
	if (!cr6.eq) goto loc_8325F72C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x8325f74c
	goto loc_8325F74C;
loc_8325F6E8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325f70c
	if (!cr6.eq) goto loc_8325F70C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832085e8
	ctx.lr = 0x8325F700;
	sub_832085E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// b 0x8325f74c
	goto loc_8325F74C;
loc_8325F70C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// stb r8,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r8.u8);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// b 0x8325f748
	goto loc_8325F748;
loc_8325F72C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
loc_8325F748:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8325F74C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x8325f780
	if (!cr6.eq) goto loc_8325F780;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x8325f7d0
	if (cr6.eq) goto loc_8325F7D0;
	// lfs f0,132(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x8325f7cc
	goto loc_8325F7CC;
loc_8325F780:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8325f7d0
	if (cr6.eq) goto loc_8325F7D0;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r7,16
	ctx.r7.s64 = 16;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lvx128 v63,r28,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v61,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8325F7CC:
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_8325F7D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r6,9(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// lbz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x832077f8
	ctx.lr = 0x8325F7E8;
	sub_832077F8(ctx, base);
loc_8325F7E8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325f68c
	if (cr6.lt) goto loc_8325F68C;
loc_8325F7FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8325F804:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,16768
	ctx.r4.s64 = ctx.r11.s64 + 16768;
	// bl 0x83208568
	ctx.lr = 0x8325F814;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8325F814"))) PPC_WEAK_FUNC(sub_8325F814);
PPC_FUNC_IMPL(__imp__sub_8325F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325F818"))) PPC_WEAK_FUNC(sub_8325F818);
PPC_FUNC_IMPL(__imp__sub_8325F818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325F820;
	__savegprlr_29(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8325f8f0
	if (!cr6.gt) goto loc_8325F8F0;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
loc_8325F848:
	// lbz r11,7(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r7,36(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// lbz r30,9(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzu r10,10(r9)
	ea = 10 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwzu r11,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rotlwi r29,r10,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r29,r7
	ctx.r8.u64 = ctx.r29.u64 + ctx.r7.u64;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r30,r30,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 + ctx.r7.u64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,44(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,56(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,60(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,72(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,76(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,88(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,92(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// blt cr6,0x8325f848
	if (cr6.lt) goto loc_8325F848;
loc_8325F8F0:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325F904"))) PPC_WEAK_FUNC(sub_8325F904);
PPC_FUNC_IMPL(__imp__sub_8325F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325F908"))) PPC_WEAK_FUNC(sub_8325F908);
PPC_FUNC_IMPL(__imp__sub_8325F908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// beq cr6,0x8325f94c
	if (cr6.eq) goto loc_8325F94C;
	// bl 0x8325f818
	ctx.lr = 0x8325F94C;
	sub_8325F818(ctx, base);
loc_8325F94C:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325fac4
	if (!cr6.gt) goto loc_8325FAC4;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8325F964:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8325fab0
	if (!cr6.gt) goto loc_8325FAB0;
	// lbz r5,9(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x8325f99c
	if (cr6.eq) goto loc_8325F99C;
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bne cr6,0x8325faec
	if (!cr6.eq) goto loc_8325FAEC;
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8325f9a4
	goto loc_8325F9A4;
loc_8325F99C:
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
loc_8325F9A4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fab0
	if (cr6.eq) goto loc_8325FAB0;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8325f9ec
	if (!cr6.eq) goto loc_8325F9EC;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
loc_8325F9EC:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x8325fab0
	if (!cr6.lt) goto loc_8325FAB0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_8325F9FC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8325fa14
	if (cr6.lt) goto loc_8325FA14;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325FA14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325fa24
	if (cr6.eq) goto loc_8325FA24;
	// stfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
loc_8325FA24:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325fa3c
	if (cr6.gt) goto loc_8325FA3C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325FA3C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325fa4c
	if (cr6.eq) goto loc_8325FA4C;
	// stfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
loc_8325FA4C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8325fa64
	if (cr6.lt) goto loc_8325FA64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325FA64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325fa74
	if (cr6.eq) goto loc_8325FA74;
	// stfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
loc_8325FA74:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325fa8c
	if (cr6.gt) goto loc_8325FA8C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8325FA8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8325fa9c
	if (cr6.eq) goto loc_8325FA9C;
	// stfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
loc_8325FA9C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x8325f9fc
	if (cr6.lt) goto loc_8325F9FC;
loc_8325FAB0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8325f964
	if (cr6.lt) goto loc_8325F964;
loc_8325FAC4:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
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
loc_8325FAEC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16844
	ctx.r4.s64 = ctx.r11.s64 + 16844;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x83208568
	ctx.lr = 0x8325FB00;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8325FB00"))) PPC_WEAK_FUNC(sub_8325FB00);
PPC_FUNC_IMPL(__imp__sub_8325FB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f12,f2
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x8325fb2c
	if (cr6.lt) goto loc_8325FB2C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FB2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8325fb7c
	if (cr6.eq) goto loc_8325FB7C;
	// fcmpu cr6,f13,f3
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// blt cr6,0x8325fb48
	if (cr6.lt) goto loc_8325FB48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FB48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fbcc
	if (cr6.eq) goto loc_8325FBCC;
	// fcmpu cr6,f13,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8325fb64
	if (cr6.lt) goto loc_8325FB64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FB64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fbcc
	if (cr6.eq) goto loc_8325FBCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8325FB7C:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x8325fb88
	if (cr6.gt) goto loc_8325FB88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FB88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fbcc
	if (cr6.eq) goto loc_8325FBCC;
	// fcmpu cr6,f13,f3
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325fba4
	if (cr6.gt) goto loc_8325FBA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FBA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fbcc
	if (cr6.eq) goto loc_8325FBCC;
	// fcmpu cr6,f13,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325fbc0
	if (cr6.gt) goto loc_8325FBC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FBC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
loc_8325FBCC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8325fbdc
	if (cr6.lt) goto loc_8325FBDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FBDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8325fc2c
	if (cr6.eq) goto loc_8325FC2C;
	// fcmpu cr6,f12,f4
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f4.f64);
	// blt cr6,0x8325fbf8
	if (cr6.lt) goto loc_8325FBF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FBF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fc7c
	if (cr6.eq) goto loc_8325FC7C;
	// fcmpu cr6,f12,f6
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8325fc14
	if (cr6.lt) goto loc_8325FC14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FC14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fc7c
	if (cr6.eq) goto loc_8325FC7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8325FC2C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8325fc38
	if (cr6.gt) goto loc_8325FC38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FC38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fc7c
	if (cr6.eq) goto loc_8325FC7C;
	// fcmpu cr6,f12,f4
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f4.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325fc54
	if (cr6.gt) goto loc_8325FC54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FC54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fc7c
	if (cr6.eq) goto loc_8325FC7C;
	// fcmpu cr6,f12,f6
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325fc70
	if (cr6.gt) goto loc_8325FC70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FC70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
loc_8325FC7C:
	// fsubs f10,f4,f2
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fsubs f9,f3,f1
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f11,f6,f2
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmsubs f13,f11,f9,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8325fca4
	if (cr6.lt) goto loc_8325FCA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FCA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fcbc
	if (cr6.eq) goto loc_8325FCBC;
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_8325FCBC:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f7,25236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25236);
	ctx.f7.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f7
	cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// blt cr6,0x8325fcd4
	if (cr6.lt) goto loc_8325FCD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FCD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
	// fmuls f11,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fnmsubs f11,f12,f31,f11
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f11.f64)));
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x8325fcf8
	if (cr6.lt) goto loc_8325FCF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FCF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325fd14
	if (cr6.gt) goto loc_8325FD14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FD14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
	// fmuls f12,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmsubs f12,f9,f31,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8325fd38
	if (cr6.lt) goto loc_8325FD38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FD38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8325fd54
	if (cr6.gt) goto loc_8325FD54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FD54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fd84
	if (!cr6.eq) goto loc_8325FD84;
	// fadds f0,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8325fd74
	if (cr6.gt) goto loc_8325FD74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325FD74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325fd88
	if (cr6.eq) goto loc_8325FD88;
loc_8325FD84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8325FD88:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325FD90"))) PPC_WEAK_FUNC(sub_8325FD90);
PPC_FUNC_IMPL(__imp__sub_8325FD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8325FD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8325fe7c
	if (!cr6.gt) goto loc_8325FE7C;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r28,3
	ctx.r28.s64 = 3;
loc_8325FDC0:
	// lbz r5,9(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x8325fde4
	if (cr6.eq) goto loc_8325FDE4;
	// cmplwi cr6,r5,9
	cr6.compare<uint32_t>(ctx.r5.u32, 9, xer);
	// bne cr6,0x8325fe84
	if (!cr6.eq) goto loc_8325FE84;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x8325fdec
	goto loc_8325FDEC;
loc_8325FDE4:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r31,1
	ctx.r31.s64 = 1;
loc_8325FDEC:
	// lbz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// bne cr6,0x8325fe98
	if (!cr6.eq) goto loc_8325FE98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// divw. r6,r11,r28
	ctx.r6.s32 = PPCDivide(ctx.r11.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x8325fe60
	if (!cr0.gt) goto loc_8325FE60;
	// rlwinm r8,r31,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_8325FE18:
	// lfs f6,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8325fb00
	ctx.lr = 0x8325FE34;
	sub_8325FB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fe60
	if (!cr6.eq) goto loc_8325FE60;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bgt 0x8325fe18
	if (cr0.gt) goto loc_8325FE18;
loc_8325FE60:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325fe7c
	if (!cr6.eq) goto loc_8325FE7C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// blt cr6,0x8325fdc0
	if (cr6.lt) goto loc_8325FDC0;
loc_8325FE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8325FE84:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16920
	ctx.r4.s64 = ctx.r11.s64 + 16920;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x83208568
	ctx.lr = 0x8325FE98;
	sub_83208568(ctx, base);
loc_8325FE98:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,16880
	ctx.r4.s64 = ctx.r11.s64 + 16880;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// bl 0x83208568
	ctx.lr = 0x8325FEAC;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8325FEAC"))) PPC_WEAK_FUNC(sub_8325FEAC);
PPC_FUNC_IMPL(__imp__sub_8325FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325FEB0"))) PPC_WEAK_FUNC(sub_8325FEB0);
PPC_FUNC_IMPL(__imp__sub_8325FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// lfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lhz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 32);
	// lfs f13,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f4,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lhz r7,34(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 34);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,20(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lhz r5,30(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 30);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,40(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f2,44(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f10,68(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,72(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f8,76(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f5,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,84(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f4,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,88(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,92(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325FFEC"))) PPC_WEAK_FUNC(sub_8325FFEC);
PPC_FUNC_IMPL(__imp__sub_8325FFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8325FFF0"))) PPC_WEAK_FUNC(sub_8325FFF0);
PPC_FUNC_IMPL(__imp__sub_8325FFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8325FFF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8323ae20
	ctx.lr = 0x83260008;
	sub_8323AE20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83260024
	if (cr6.eq) goto loc_83260024;
	// lhz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 140, ctx.r11.u16);
	// b 0x832600b8
	goto loc_832600B8;
loc_83260024:
	// bl 0x8323aca0
	ctx.lr = 0x83260028;
	sub_8323ACA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8323afa0
	ctx.lr = 0x83260030;
	sub_8323AFA0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83260060
	if (cr6.eq) goto loc_83260060;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// b 0x83260084
	goto loc_83260084;
loc_83260060:
	// lhz r11,98(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 98);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
	// sth r9,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r9.u16);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r8.u16);
loc_83260084:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r11.u16);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stb r9,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r9.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r8,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r8.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325feb0
	ctx.lr = 0x832600B4;
	sub_8325FEB0(ctx, base);
	// stw r31,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r31.u32);
loc_832600B8:
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8325dc38
	ctx.lr = 0x832600C0;
	sub_8325DC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832600E8"))) PPC_WEAK_FUNC(sub_832600E8);
PPC_FUNC_IMPL(__imp__sub_832600E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8322e720
	ctx.lr = 0x83260100;
	sub_8322E720(ctx, base);
	// lhz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lhz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r4,r6,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r5,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f8,76(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,68(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// bl 0x8325fff0
	ctx.lr = 0x83260178;
	sub_8325FFF0(ctx, base);
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

__attribute__((alias("__imp__sub_8326018C"))) PPC_WEAK_FUNC(sub_8326018C);
PPC_FUNC_IMPL(__imp__sub_8326018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260190"))) PPC_WEAK_FUNC(sub_83260190);
PPC_FUNC_IMPL(__imp__sub_83260190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832601dc
	if (cr6.eq) goto loc_832601DC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x832601CC;
	sub_8322CD48(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_832601DC:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f9,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,72(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfs f7,76(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f10,68(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f9,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,44(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,76(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f31,f10
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fmuls f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// stfs f7,12(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmuls f10,f31,f6
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// stfs f8,24(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// fmuls f9,f31,f5
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f5.f64));
	// stfs f10,28(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// fmuls f8,f31,f4
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// stfs f9,40(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 40, temp.u32);
	// fmuls f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f3.f64));
	// stfs f8,44(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 44, temp.u32);
	// fmuls f6,f31,f2
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// stfs f7,56(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmuls f5,f31,f1
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// stfs f6,60(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// fmuls f4,f31,f0
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f5,72(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
	// fmuls f3,f31,f13
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// stfs f4,76(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 76, temp.u32);
	// fmuls f2,f31,f12
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// stfs f3,88(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 88, temp.u32);
	// stfs f2,92(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 92, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832602B8"))) PPC_WEAK_FUNC(sub_832602B8);
PPC_FUNC_IMPL(__imp__sub_832602B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83260340
	if (cr6.eq) goto loc_83260340;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83260340
	if (cr6.eq) goto loc_83260340;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83260340
	if (!cr6.eq) goto loc_83260340;
	// lbz r11,9(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83260340:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83260348"))) PPC_WEAK_FUNC(sub_83260348);
PPC_FUNC_IMPL(__imp__sub_83260348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83260350;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83260438
	if (cr6.eq) goto loc_83260438;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x83260384;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83260438
	if (!cr6.eq) goto loc_83260438;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83260438
	if (cr6.eq) goto loc_83260438;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832602b8
	ctx.lr = 0x832603A0;
	sub_832602B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83260438
	if (cr6.eq) goto loc_83260438;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r29,28(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x832615a0
	ctx.lr = 0x832603B8;
	sub_832615A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lhz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// lhz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,76(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8325feb0
	ctx.lr = 0x83260430;
	sub_8325FEB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83260438:
	// bl 0x8320ce58
	ctx.lr = 0x8326043C;
	sub_8320CE58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832615a0
	ctx.lr = 0x83260448;
	sub_832615A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832600e8
	ctx.lr = 0x83260454;
	sub_832600E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce70
	ctx.lr = 0x8326045C;
	sub_8320CE70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260464"))) PPC_WEAK_FUNC(sub_83260464);
PPC_FUNC_IMPL(__imp__sub_83260464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260468"))) PPC_WEAK_FUNC(sub_83260468);
PPC_FUNC_IMPL(__imp__sub_83260468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83260470;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83260490
	if (!cr6.eq) goto loc_83260490;
	// bl 0x8322e7d0
	ctx.lr = 0x83260488;
	sub_8322E7D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83260490:
	// bl 0x8325d0f8
	ctx.lr = 0x83260494;
	sub_8325D0F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8326053c
	if (cr6.eq) goto loc_8326053C;
	// bl 0x832602b8
	ctx.lr = 0x832604A4;
	sub_832602B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8326053c
	if (cr6.eq) goto loc_8326053C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83261730
	ctx.lr = 0x832604BC;
	sub_83261730(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lhz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// lhz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lhz r11,34(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// lhz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8325feb0
	ctx.lr = 0x83260534;
	sub_8325FEB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8326053C:
	// bl 0x8320ce58
	ctx.lr = 0x83260540;
	sub_8320CE58(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83261730
	ctx.lr = 0x8326054C;
	sub_83261730(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832600e8
	ctx.lr = 0x83260558;
	sub_832600E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce70
	ctx.lr = 0x83260560;
	sub_8320CE70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260568"))) PPC_WEAK_FUNC(sub_83260568);
PPC_FUNC_IMPL(__imp__sub_83260568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83260570;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83260594
	if (!cr6.eq) goto loc_83260594;
	// bl 0x83260468
	ctx.lr = 0x8326058C;
	sub_83260468(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83260594:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832605a8
	if (!cr6.eq) goto loc_832605A8;
	// bl 0x8322e7d0
	ctx.lr = 0x832605A0;
	sub_8322E7D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832605A8:
	// bl 0x8325d0f8
	ctx.lr = 0x832605AC;
	sub_8325D0F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832605f8
	if (cr6.eq) goto loc_832605F8;
	// bl 0x832602b8
	ctx.lr = 0x832605BC;
	sub_832602B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832605f8
	if (cr6.eq) goto loc_832605F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83261730
	ctx.lr = 0x832605D4;
	sub_83261730(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8325feb0
	ctx.lr = 0x832605F0;
	sub_8325FEB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832605F8:
	// bl 0x8320ce58
	ctx.lr = 0x832605FC;
	sub_8320CE58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83261730
	ctx.lr = 0x83260608;
	sub_83261730(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322e720
	ctx.lr = 0x83260610;
	sub_8322E720(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v62,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stvx128 v62,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8325fff0
	ctx.lr = 0x83260624;
	sub_8325FFF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ce70
	ctx.lr = 0x8326062C;
	sub_8320CE70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260634"))) PPC_WEAK_FUNC(sub_83260634);
PPC_FUNC_IMPL(__imp__sub_83260634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260638"))) PPC_WEAK_FUNC(sub_83260638);
PPC_FUNC_IMPL(__imp__sub_83260638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// ble cr6,0x832607c0
	if (!cr6.gt) goto loc_832607C0;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83260770
	if (cr6.lt) goto loc_83260770;
	// addi r10,r8,-3
	ctx.r10.s64 = ctx.r8.s64 + -3;
loc_83260680:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x83260690
	if (!cr6.lt) goto loc_83260690;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_83260690:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8326069c
	if (!cr6.gt) goto loc_8326069C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8326069C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x832606ac
	if (!cr6.lt) goto loc_832606AC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_832606AC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x832606b8
	if (!cr6.gt) goto loc_832606B8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_832606B8:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x832606c8
	if (!cr6.lt) goto loc_832606C8;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_832606C8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x832606d4
	if (!cr6.gt) goto loc_832606D4;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_832606D4:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x832606e4
	if (!cr6.lt) goto loc_832606E4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_832606E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x832606f0
	if (!cr6.gt) goto loc_832606F0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_832606F0:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x83260700
	if (!cr6.lt) goto loc_83260700;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_83260700:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8326070c
	if (!cr6.gt) goto loc_8326070C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8326070C:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8326071c
	if (!cr6.lt) goto loc_8326071C;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_8326071C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83260728
	if (!cr6.gt) goto loc_83260728;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_83260728:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x83260738
	if (!cr6.lt) goto loc_83260738;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_83260738:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x83260744
	if (!cr6.gt) goto loc_83260744;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_83260744:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x83260754
	if (!cr6.lt) goto loc_83260754;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_83260754:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83260760
	if (!cr6.gt) goto loc_83260760;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_83260760:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x83260680
	if (cr6.lt) goto loc_83260680;
loc_83260770:
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x832607c0
	if (!cr6.lt) goto loc_832607C0;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83260780:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x83260790
	if (!cr6.lt) goto loc_83260790;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_83260790:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8326079c
	if (!cr6.gt) goto loc_8326079C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8326079C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x832607ac
	if (!cr6.lt) goto loc_832607AC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_832607AC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x832607b8
	if (!cr6.gt) goto loc_832607B8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_832607B8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83260780
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83260780;
loc_832607C0:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// stfs f10,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832607E4"))) PPC_WEAK_FUNC(sub_832607E4);
PPC_FUNC_IMPL(__imp__sub_832607E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832607E8"))) PPC_WEAK_FUNC(sub_832607E8);
PPC_FUNC_IMPL(__imp__sub_832607E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832607F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83260834
	if (!cr6.eq) goto loc_83260834;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x83209aa8
	ctx.lr = 0x83260820;
	sub_83209AA8(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lhz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r5,r10,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// bl 0x83294018
	ctx.lr = 0x83260834;
	sub_83294018(ctx, base);
loc_83260834:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lbz r9,1(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r10,r9,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r10,r8,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lbz r7,3(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lfsu f8,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// rotlwi r10,r7,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lhz r6,2(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// ori r5,r6,6
	ctx.r5.u64 = ctx.r6.u64 | 6;
	// sth r5,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r5.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832608CC"))) PPC_WEAK_FUNC(sub_832608CC);
PPC_FUNC_IMPL(__imp__sub_832608CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832608D0"))) PPC_WEAK_FUNC(sub_832608D0);
PPC_FUNC_IMPL(__imp__sub_832608D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832608f0
	if (!cr6.eq) goto loc_832608F0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x83260914
	goto loc_83260914;
loc_832608F0:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_83260914:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lfs f12,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// beq cr6,0x83260944
	if (cr6.eq) goto loc_83260944;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
loc_83260944:
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lhz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r6,14(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lhz r4,10(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,64(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f5,68(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,80(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,84(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83260A14"))) PPC_WEAK_FUNC(sub_83260A14);
PPC_FUNC_IMPL(__imp__sub_83260A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260A18"))) PPC_WEAK_FUNC(sub_83260A18);
PPC_FUNC_IMPL(__imp__sub_83260A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83260A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lhz r9,6(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lhz r6,88(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f13,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x83214700
	ctx.lr = 0x83260AC0;
	sub_83214700(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83210238
	ctx.lr = 0x83260AD0;
	sub_83210238(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832607e8
	ctx.lr = 0x83260AE4;
	sub_832607E8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260AEC"))) PPC_WEAK_FUNC(sub_83260AEC);
PPC_FUNC_IMPL(__imp__sub_83260AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260AF0"))) PPC_WEAK_FUNC(sub_83260AF0);
PPC_FUNC_IMPL(__imp__sub_83260AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83260AF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x8322e720
	ctx.lr = 0x83260B10;
	sub_8322E720(ctx, base);
	// lwz r26,52(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83260b34
	if (!cr6.eq) goto loc_83260B34;
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,8(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
loc_83260B34:
	// lhz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83260b54
	if (cr6.lt) goto loc_83260B54;
loc_83260B48:
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83260B54:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r25,r10,6
	ctx.r25.s64 = ctx.r10.s64 + 6;
	// lhz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x83260b48
	if (!cr6.eq) goto loc_83260B48;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,81(r24)
	PPC_STORE_U8(ctx.r24.u32 + 81, ctx.r11.u8);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r20,r9
	ctx.r20.s64 = ctx.r9.s16;
	// mulli r29,r20,28
	ctx.r29.s64 = ctx.r20.s64 * 28;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// bl 0x83209df8
	ctx.lr = 0x83260B98;
	sub_83209DF8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325d448
	ctx.lr = 0x83260BAC;
	sub_8325D448(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r6.u16);
	// stbx r8,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r8.u8);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r4,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x83260BDC;
	sub_83209DF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x83260BFC;
	sub_83294018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// sth r20,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r20.u16);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stb r6,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r6.u8);
	// stb r5,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r5.u8);
	// bl 0x83209aa8
	ctx.lr = 0x83260C2C;
	sub_83209AA8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832608d0
	ctx.lr = 0x83260C38;
	sub_832608D0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83260a18
	ctx.lr = 0x83260C54;
	sub_83260A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260C60"))) PPC_WEAK_FUNC(sub_83260C60);
PPC_FUNC_IMPL(__imp__sub_83260C60) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8322e720
	ctx.lr = 0x83260C80;
	sub_8322E720(ctx, base);
	// lbz r11,81(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 81);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,52(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r7,r11,-154
	ctx.r7.s64 = ctx.r11.s64 + -154;
	// bl 0x83260a18
	ctx.lr = 0x83260CB0;
	sub_83260A18(ctx, base);
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

__attribute__((alias("__imp__sub_83260CC8"))) PPC_WEAK_FUNC(sub_83260CC8);
PPC_FUNC_IMPL(__imp__sub_83260CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
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
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83260cf4
	if (cr6.eq) goto loc_83260CF4;
	// bl 0x83260638
	ctx.lr = 0x83260CF4;
	sub_83260638(ctx, base);
loc_83260CF4:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x83206dc8
	ctx.lr = 0x83260CFC;
	sub_83206DC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83260d4c
	if (cr6.eq) goto loc_83260D4C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x83260d40
	if (cr6.eq) goto loc_83260D40;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,5696
	ctx.r8.s64 = ctx.r9.s64 + 5696;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lfs f0,132(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_83260D40:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83207d28
	ctx.lr = 0x83260D48;
	sub_83207D28(ctx, base);
	// b 0x83260dbc
	goto loc_83260DBC;
loc_83260D4C:
	// addic. r11,r31,12
	xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83260dbc
	if (cr0.eq) goto loc_83260DBC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83260d8c
	if (!cr6.gt) goto loc_83260D8C;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83260d7c
	if (cr6.eq) goto loc_83260D7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325f818
	ctx.lr = 0x83260D7C;
	sub_8325F818(ctx, base);
loc_83260D7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325f640
	ctx.lr = 0x83260D88;
	sub_8325F640(ctx, base);
	// b 0x83260dbc
	goto loc_83260DBC;
loc_83260D8C:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83260dbc
	if (!cr6.gt) goto loc_83260DBC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,16964
	ctx.r4.s64 = ctx.r10.s64 + 16964;
	// addi r3,r9,16568
	ctx.r3.s64 = ctx.r9.s64 + 16568;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x83208330
	ctx.lr = 0x83260DBC;
	sub_83208330(ctx, base);
loc_83260DBC:
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

__attribute__((alias("__imp__sub_83260DD4"))) PPC_WEAK_FUNC(sub_83260DD4);
PPC_FUNC_IMPL(__imp__sub_83260DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260DD8"))) PPC_WEAK_FUNC(sub_83260DD8);
PPC_FUNC_IMPL(__imp__sub_83260DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83260DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83260f68
	if (cr6.eq) goto loc_83260F68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832073f0
	ctx.lr = 0x83260E00;
	sub_832073F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fec10
	ctx.lr = 0x83260E10;
	sub_831FEC10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83260f68
	if (cr6.eq) goto loc_83260F68;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83260e34
	if (cr6.eq) goto loc_83260E34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83260638
	ctx.lr = 0x83260E34;
	sub_83260638(ctx, base);
loc_83260E34:
	// li r11,64
	ctx.r11.s64 = 64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83260e5c
	if (cr6.gt) goto loc_83260E5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83260E5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83260f68
	if (cr6.eq) goto loc_83260F68;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83260e7c
	if (cr6.lt) goto loc_83260E7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83260E7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83260f68
	if (cr6.eq) goto loc_83260F68;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83260ea0
	if (cr6.gt) goto loc_83260EA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83260EA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83260f68
	if (cr6.eq) goto loc_83260F68;
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83260ec0
	if (cr6.lt) goto loc_83260EC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83260EC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83260f68
	if (cr6.eq) goto loc_83260F68;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83260eec
	if (cr6.eq) goto loc_83260EEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83206f18
	ctx.lr = 0x83260EE0;
	sub_83206F18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83260EEC:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83260f30
	if (!cr6.gt) goto loc_83260F30;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83260f18
	if (cr6.eq) goto loc_83260F18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325f818
	ctx.lr = 0x83260F18;
	sub_8325F818(ctx, base);
loc_83260F18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325fd90
	ctx.lr = 0x83260F24;
	sub_8325FD90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83260F30:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83260f5c
	if (!cr6.gt) goto loc_83260F5C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,17000
	ctx.r4.s64 = ctx.r10.s64 + 17000;
	// addi r3,r9,16568
	ctx.r3.s64 = ctx.r9.s64 + 16568;
	// bl 0x83208330
	ctx.lr = 0x83260F5C;
	sub_83208330(ctx, base);
loc_83260F5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83260F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260F74"))) PPC_WEAK_FUNC(sub_83260F74);
PPC_FUNC_IMPL(__imp__sub_83260F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260F78"))) PPC_WEAK_FUNC(sub_83260F78);
PPC_FUNC_IMPL(__imp__sub_83260F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,17280
	ctx.r3.s64 = ctx.r11.s64 + 17280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83260F84"))) PPC_WEAK_FUNC(sub_83260F84);
PPC_FUNC_IMPL(__imp__sub_83260F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260F88"))) PPC_WEAK_FUNC(sub_83260F88);
PPC_FUNC_IMPL(__imp__sub_83260F88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18296
	ctx.r5.s64 = ctx.r11.s64 + 18296;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260FA4"))) PPC_WEAK_FUNC(sub_83260FA4);
PPC_FUNC_IMPL(__imp__sub_83260FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260FA8"))) PPC_WEAK_FUNC(sub_83260FA8);
PPC_FUNC_IMPL(__imp__sub_83260FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18308
	ctx.r5.s64 = ctx.r11.s64 + 18308;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260FC4"))) PPC_WEAK_FUNC(sub_83260FC4);
PPC_FUNC_IMPL(__imp__sub_83260FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260FC8"))) PPC_WEAK_FUNC(sub_83260FC8);
PPC_FUNC_IMPL(__imp__sub_83260FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18324
	ctx.r5.s64 = ctx.r11.s64 + 18324;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83260FE4"))) PPC_WEAK_FUNC(sub_83260FE4);
PPC_FUNC_IMPL(__imp__sub_83260FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83260FE8"))) PPC_WEAK_FUNC(sub_83260FE8);
PPC_FUNC_IMPL(__imp__sub_83260FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18336
	ctx.r5.s64 = ctx.r11.s64 + 18336;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261004"))) PPC_WEAK_FUNC(sub_83261004);
PPC_FUNC_IMPL(__imp__sub_83261004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261008"))) PPC_WEAK_FUNC(sub_83261008);
PPC_FUNC_IMPL(__imp__sub_83261008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18352
	ctx.r5.s64 = ctx.r11.s64 + 18352;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261024"))) PPC_WEAK_FUNC(sub_83261024);
PPC_FUNC_IMPL(__imp__sub_83261024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261028"))) PPC_WEAK_FUNC(sub_83261028);
PPC_FUNC_IMPL(__imp__sub_83261028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18368
	ctx.r5.s64 = ctx.r11.s64 + 18368;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261044"))) PPC_WEAK_FUNC(sub_83261044);
PPC_FUNC_IMPL(__imp__sub_83261044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261048"))) PPC_WEAK_FUNC(sub_83261048);
PPC_FUNC_IMPL(__imp__sub_83261048) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18384
	ctx.r5.s64 = ctx.r11.s64 + 18384;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261064"))) PPC_WEAK_FUNC(sub_83261064);
PPC_FUNC_IMPL(__imp__sub_83261064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261068"))) PPC_WEAK_FUNC(sub_83261068);
PPC_FUNC_IMPL(__imp__sub_83261068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18396
	ctx.r5.s64 = ctx.r11.s64 + 18396;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261084"))) PPC_WEAK_FUNC(sub_83261084);
PPC_FUNC_IMPL(__imp__sub_83261084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261088"))) PPC_WEAK_FUNC(sub_83261088);
PPC_FUNC_IMPL(__imp__sub_83261088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18408
	ctx.r5.s64 = ctx.r11.s64 + 18408;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832610A4"))) PPC_WEAK_FUNC(sub_832610A4);
PPC_FUNC_IMPL(__imp__sub_832610A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832610A8"))) PPC_WEAK_FUNC(sub_832610A8);
PPC_FUNC_IMPL(__imp__sub_832610A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18424
	ctx.r5.s64 = ctx.r11.s64 + 18424;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832610C4"))) PPC_WEAK_FUNC(sub_832610C4);
PPC_FUNC_IMPL(__imp__sub_832610C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832610C8"))) PPC_WEAK_FUNC(sub_832610C8);
PPC_FUNC_IMPL(__imp__sub_832610C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18436
	ctx.r5.s64 = ctx.r11.s64 + 18436;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832610E4"))) PPC_WEAK_FUNC(sub_832610E4);
PPC_FUNC_IMPL(__imp__sub_832610E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832610E8"))) PPC_WEAK_FUNC(sub_832610E8);
PPC_FUNC_IMPL(__imp__sub_832610E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18452
	ctx.r5.s64 = ctx.r11.s64 + 18452;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261104"))) PPC_WEAK_FUNC(sub_83261104);
PPC_FUNC_IMPL(__imp__sub_83261104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261108"))) PPC_WEAK_FUNC(sub_83261108);
PPC_FUNC_IMPL(__imp__sub_83261108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,26556
	ctx.r5.s64 = ctx.r11.s64 + 26556;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261124"))) PPC_WEAK_FUNC(sub_83261124);
PPC_FUNC_IMPL(__imp__sub_83261124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261128"))) PPC_WEAK_FUNC(sub_83261128);
PPC_FUNC_IMPL(__imp__sub_83261128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,26580
	ctx.r5.s64 = ctx.r11.s64 + 26580;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261144"))) PPC_WEAK_FUNC(sub_83261144);
PPC_FUNC_IMPL(__imp__sub_83261144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261148"))) PPC_WEAK_FUNC(sub_83261148);
PPC_FUNC_IMPL(__imp__sub_83261148) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18480
	ctx.r5.s64 = ctx.r11.s64 + 18480;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x83261170;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261184"))) PPC_WEAK_FUNC(sub_83261184);
PPC_FUNC_IMPL(__imp__sub_83261184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261188"))) PPC_WEAK_FUNC(sub_83261188);
PPC_FUNC_IMPL(__imp__sub_83261188) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18496
	ctx.r5.s64 = ctx.r11.s64 + 18496;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x832611B0;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_832611C4"))) PPC_WEAK_FUNC(sub_832611C4);
PPC_FUNC_IMPL(__imp__sub_832611C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832611C8"))) PPC_WEAK_FUNC(sub_832611C8);
PPC_FUNC_IMPL(__imp__sub_832611C8) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18512
	ctx.r5.s64 = ctx.r11.s64 + 18512;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x832611F0;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261204"))) PPC_WEAK_FUNC(sub_83261204);
PPC_FUNC_IMPL(__imp__sub_83261204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261208"))) PPC_WEAK_FUNC(sub_83261208);
PPC_FUNC_IMPL(__imp__sub_83261208) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18528
	ctx.r5.s64 = ctx.r11.s64 + 18528;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x83261230;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261244"))) PPC_WEAK_FUNC(sub_83261244);
PPC_FUNC_IMPL(__imp__sub_83261244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261248"))) PPC_WEAK_FUNC(sub_83261248);
PPC_FUNC_IMPL(__imp__sub_83261248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18544
	ctx.r5.s64 = ctx.r11.s64 + 18544;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261264"))) PPC_WEAK_FUNC(sub_83261264);
PPC_FUNC_IMPL(__imp__sub_83261264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261268"))) PPC_WEAK_FUNC(sub_83261268);
PPC_FUNC_IMPL(__imp__sub_83261268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18556
	ctx.r5.s64 = ctx.r11.s64 + 18556;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261284"))) PPC_WEAK_FUNC(sub_83261284);
PPC_FUNC_IMPL(__imp__sub_83261284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261288"))) PPC_WEAK_FUNC(sub_83261288);
PPC_FUNC_IMPL(__imp__sub_83261288) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18568
	ctx.r5.s64 = ctx.r11.s64 + 18568;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832612A4"))) PPC_WEAK_FUNC(sub_832612A4);
PPC_FUNC_IMPL(__imp__sub_832612A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832612A8"))) PPC_WEAK_FUNC(sub_832612A8);
PPC_FUNC_IMPL(__imp__sub_832612A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18584
	ctx.r5.s64 = ctx.r11.s64 + 18584;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832612C4"))) PPC_WEAK_FUNC(sub_832612C4);
PPC_FUNC_IMPL(__imp__sub_832612C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832612C8"))) PPC_WEAK_FUNC(sub_832612C8);
PPC_FUNC_IMPL(__imp__sub_832612C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18600
	ctx.r5.s64 = ctx.r11.s64 + 18600;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832612E4"))) PPC_WEAK_FUNC(sub_832612E4);
PPC_FUNC_IMPL(__imp__sub_832612E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832612E8"))) PPC_WEAK_FUNC(sub_832612E8);
PPC_FUNC_IMPL(__imp__sub_832612E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18612
	ctx.r5.s64 = ctx.r11.s64 + 18612;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261304"))) PPC_WEAK_FUNC(sub_83261304);
PPC_FUNC_IMPL(__imp__sub_83261304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261308"))) PPC_WEAK_FUNC(sub_83261308);
PPC_FUNC_IMPL(__imp__sub_83261308) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18624
	ctx.r5.s64 = ctx.r11.s64 + 18624;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x83261330;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261344"))) PPC_WEAK_FUNC(sub_83261344);
PPC_FUNC_IMPL(__imp__sub_83261344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261348"))) PPC_WEAK_FUNC(sub_83261348);
PPC_FUNC_IMPL(__imp__sub_83261348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18644
	ctx.r5.s64 = ctx.r11.s64 + 18644;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261364"))) PPC_WEAK_FUNC(sub_83261364);
PPC_FUNC_IMPL(__imp__sub_83261364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261368"))) PPC_WEAK_FUNC(sub_83261368);
PPC_FUNC_IMPL(__imp__sub_83261368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18656
	ctx.r5.s64 = ctx.r11.s64 + 18656;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261384"))) PPC_WEAK_FUNC(sub_83261384);
PPC_FUNC_IMPL(__imp__sub_83261384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261388"))) PPC_WEAK_FUNC(sub_83261388);
PPC_FUNC_IMPL(__imp__sub_83261388) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18672
	ctx.r5.s64 = ctx.r11.s64 + 18672;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832613A4"))) PPC_WEAK_FUNC(sub_832613A4);
PPC_FUNC_IMPL(__imp__sub_832613A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832613A8"))) PPC_WEAK_FUNC(sub_832613A8);
PPC_FUNC_IMPL(__imp__sub_832613A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18688
	ctx.r5.s64 = ctx.r11.s64 + 18688;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832613C4"))) PPC_WEAK_FUNC(sub_832613C4);
PPC_FUNC_IMPL(__imp__sub_832613C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832613C8"))) PPC_WEAK_FUNC(sub_832613C8);
PPC_FUNC_IMPL(__imp__sub_832613C8) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18704
	ctx.r5.s64 = ctx.r11.s64 + 18704;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x832613F0;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261404"))) PPC_WEAK_FUNC(sub_83261404);
PPC_FUNC_IMPL(__imp__sub_83261404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261408"))) PPC_WEAK_FUNC(sub_83261408);
PPC_FUNC_IMPL(__imp__sub_83261408) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18720
	ctx.r5.s64 = ctx.r11.s64 + 18720;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x83261430;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261444"))) PPC_WEAK_FUNC(sub_83261444);
PPC_FUNC_IMPL(__imp__sub_83261444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261448"))) PPC_WEAK_FUNC(sub_83261448);
PPC_FUNC_IMPL(__imp__sub_83261448) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18732
	ctx.r5.s64 = ctx.r11.s64 + 18732;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x83261470;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261484"))) PPC_WEAK_FUNC(sub_83261484);
PPC_FUNC_IMPL(__imp__sub_83261484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261488"))) PPC_WEAK_FUNC(sub_83261488);
PPC_FUNC_IMPL(__imp__sub_83261488) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18748
	ctx.r5.s64 = ctx.r11.s64 + 18748;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x832614B0;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_832614C4"))) PPC_WEAK_FUNC(sub_832614C4);
PPC_FUNC_IMPL(__imp__sub_832614C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832614C8"))) PPC_WEAK_FUNC(sub_832614C8);
PPC_FUNC_IMPL(__imp__sub_832614C8) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,18768
	ctx.r5.s64 = ctx.r11.s64 + 18768;
	// addi r4,r10,18256
	ctx.r4.s64 = ctx.r10.s64 + 18256;
	// addi r3,r9,18244
	ctx.r3.s64 = ctx.r9.s64 + 18244;
	// bl 0x832085e8
	ctx.lr = 0x832614F0;
	sub_832085E8(ctx, base);
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

__attribute__((alias("__imp__sub_83261504"))) PPC_WEAK_FUNC(sub_83261504);
PPC_FUNC_IMPL(__imp__sub_83261504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261508"))) PPC_WEAK_FUNC(sub_83261508);
PPC_FUNC_IMPL(__imp__sub_83261508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83261510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,18104
	ctx.r30.s64 = ctx.r11.s64 + 18104;
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x83261530;
	sub_831CE980(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r10,9032
	ctx.r9.s64 = ctx.r10.s64 + 9032;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83261540:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8326155c
	if (cr6.eq) goto loc_8326155C;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83261560
	if (!cr6.eq) goto loc_83261560;
loc_8326155C:
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_83261560:
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// beq cr6,0x83261580
	if (cr6.eq) goto loc_83261580;
	// lhz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83261584
	if (!cr6.eq) goto loc_83261584;
loc_83261580:
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_83261584:
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x83261540
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83261540;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832615A0"))) PPC_WEAK_FUNC(sub_832615A0);
PPC_FUNC_IMPL(__imp__sub_832615A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// sth r6,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r6.u16);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r8,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r8.u16);
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fctidz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r5,-10(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r5,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r5.u16);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r8,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r8.u16);
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r5,-10(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r5,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r5.u16);
	// bne cr6,0x832616b8
	if (!cr6.eq) goto loc_832616B8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// b 0x832616dc
	goto loc_832616DC;
loc_832616B8:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
loc_832616DC:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x8326170c
	if (!cr6.eq) goto loc_8326170C;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_8326170C:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83261730"))) PPC_WEAK_FUNC(sub_83261730);
PPC_FUNC_IMPL(__imp__sub_83261730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lhz r7,6(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lhz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r6,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r6.u16);
	// lhz r5,10(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// sth r5,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r5.u16);
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// sth r9,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r9.u16);
	// bne cr6,0x83261790
	if (!cr6.eq) goto loc_83261790;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// lfs f13,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// b 0x832617b4
	goto loc_832617B4;
loc_83261790:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r11,5696
	ctx.r11.s64 = ctx.r11.s64 + 5696;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_832617B4:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,-24912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x832617e4
	if (!cr6.eq) goto loc_832617E4;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_832617E4:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83261808"))) PPC_WEAK_FUNC(sub_83261808);
PPC_FUNC_IMPL(__imp__sub_83261808) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83261858
	if (cr6.eq) goto loc_83261858;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x83261844;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83261858
	if (!cr6.eq) goto loc_83261858;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83261870
	if (!cr6.eq) goto loc_83261870;
loc_83261858:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_83261870:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83260dd8
	ctx.lr = 0x83261878;
	sub_83260DD8(ctx, base);
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

__attribute__((alias("__imp__sub_8326188C"))) PPC_WEAK_FUNC(sub_8326188C);
PPC_FUNC_IMPL(__imp__sub_8326188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261890"))) PPC_WEAK_FUNC(sub_83261890);
PPC_FUNC_IMPL(__imp__sub_83261890) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x832618c8
	if (!cr6.gt) goto loc_832618C8;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x83261920
	goto loc_83261920;
loc_832618C8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x832618e0
	if (cr6.eq) goto loc_832618E0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832618e0
	if (cr6.eq) goto loc_832618E0;
	// bl 0x8320ce70
	ctx.lr = 0x832618E0;
	sub_8320CE70(ctx, base);
loc_832618E0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83261908
	if (!cr6.eq) goto loc_83261908;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83261908
	if (cr6.eq) goto loc_83261908;
	// bl 0x83209d68
	ctx.lr = 0x83261904;
	sub_83209D68(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83261908:
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83261920:
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

__attribute__((alias("__imp__sub_83261938"))) PPC_WEAK_FUNC(sub_83261938);
PPC_FUNC_IMPL(__imp__sub_83261938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83261940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8320d1e0
	ctx.lr = 0x8326194C;
	sub_8320D1E0(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83261960
	if (cr6.lt) goto loc_83261960;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83261968
	if (!cr6.gt) goto loc_83261968;
loc_83261960:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320e738
	ctx.lr = 0x83261968;
	sub_8320E738(ctx, base);
loc_83261968:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83261a38
	if (cr6.lt) goto loc_83261A38;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x8326197C;
	sub_83209AA8(ctx, base);
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832619ac
	if (cr6.eq) goto loc_832619AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832619AC;
	sub_83222030(ctx, base);
loc_832619AC:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,140
	ctx.r10.s64 = 140;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// bl 0x8320ce58
	ctx.lr = 0x832619D0;
	sub_8320CE58(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lhz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subf r3,r6,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r6.s64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83261A00;
	sub_83222578(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r11.u16);
	// bl 0x83222578
	ctx.lr = 0x83261A10;
	sub_83222578(ctx, base);
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r10,1,16,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFE;
	// sth r9,8(r28)
	PPC_STORE_U16(ctx.r28.u32 + 8, ctx.r9.u16);
	// rlwinm r7,r9,1,16,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFE;
	// sth r11,28(r28)
	PPC_STORE_U16(ctx.r28.u32 + 28, ctx.r11.u16);
	// sth r8,30(r28)
	PPC_STORE_U16(ctx.r28.u32 + 30, ctx.r8.u16);
	// sth r11,32(r28)
	PPC_STORE_U16(ctx.r28.u32 + 32, ctx.r11.u16);
	// sth r7,34(r28)
	PPC_STORE_U16(ctx.r28.u32 + 34, ctx.r7.u16);
loc_83261A38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261A40"))) PPC_WEAK_FUNC(sub_83261A40);
PPC_FUNC_IMPL(__imp__sub_83261A40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x83261A60;
	sub_83209AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x83209c20
	ctx.lr = 0x83261A84;
	sub_83209C20(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83261AA4"))) PPC_WEAK_FUNC(sub_83261AA4);
PPC_FUNC_IMPL(__imp__sub_83261AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261AA8"))) PPC_WEAK_FUNC(sub_83261AA8);
PPC_FUNC_IMPL(__imp__sub_83261AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83261AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r9,r11,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83261b3c
	if (!cr6.eq) goto loc_83261B3C;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x83296d08
	ctx.lr = 0x83261AE0;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83261af4
	if (!cr6.eq) goto loc_83261AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83261AF4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255c58
	ctx.lr = 0x83261B08;
	sub_83255C58(ctx, base);
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83296d08
	ctx.lr = 0x83261B14;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83261b38
	if (cr6.eq) goto loc_83261B38;
	// li r31,45
	ctx.r31.s64 = 45;
loc_83261B20:
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// li r4,95
	ctx.r4.s64 = 95;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x83296d08
	ctx.lr = 0x83261B30;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83261b20
	if (!cr6.eq) goto loc_83261B20;
loc_83261B38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83261B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261B44"))) PPC_WEAK_FUNC(sub_83261B44);
PPC_FUNC_IMPL(__imp__sub_83261B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261B48"))) PPC_WEAK_FUNC(sub_83261B48);
PPC_FUNC_IMPL(__imp__sub_83261B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83261B50;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x83261bc0
	if (!cr6.gt) goto loc_83261BC0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259198
	ctx.lr = 0x83261B80;
	sub_83259198(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83261bc0
	if (cr6.eq) goto loc_83261BC0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83261ba8
	if (cr6.eq) goto loc_83261BA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8320cf00
	ctx.lr = 0x83261B9C;
	sub_8320CF00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83261BA8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83261bc0
	if (cr6.eq) goto loc_83261BC0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83261BC0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83261c34
	if (cr6.eq) goto loc_83261C34;
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83261bf0
	if (cr6.eq) goto loc_83261BF0;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83261aa8
	ctx.lr = 0x83261BEC;
	sub_83261AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83261BF0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206de0
	ctx.lr = 0x83261C00;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83261c18
	if (!cr6.eq) goto loc_83261C18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83261730
	ctx.lr = 0x83261C14;
	sub_83261730(ctx, base);
	// b 0x83261c34
	goto loc_83261C34;
loc_83261C18:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,18804
	ctx.r4.s64 = ctx.r11.s64 + 18804;
	// addi r3,r10,18792
	ctx.r3.s64 = ctx.r10.s64 + 18792;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83261C30;
	sub_832085E8(ctx, base);
	// li r26,-4
	ctx.r26.s64 = -4;
loc_83261C34:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83261c80
	if (cr6.eq) goto loc_83261C80;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r6,r11,18784
	ctx.r6.s64 = ctx.r11.s64 + 18784;
	// addi r5,r10,-28864
	ctx.r5.s64 = ctx.r10.s64 + -28864;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83297a40
	ctx.lr = 0x83261C60;
	sub_83297A40(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206de0
	ctx.lr = 0x83261C70;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83261c80
	if (!cr6.eq) goto loc_83261C80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_83261C80:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261C8C"))) PPC_WEAK_FUNC(sub_83261C8C);
PPC_FUNC_IMPL(__imp__sub_83261C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261C90"))) PPC_WEAK_FUNC(sub_83261C90);
PPC_FUNC_IMPL(__imp__sub_83261C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83261ce4
	if (cr6.eq) goto loc_83261CE4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lhz r11,66(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 66);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83261ce8
	if (!cr6.eq) goto loc_83261CE8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832277f8
	ctx.lr = 0x83261CC8;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83261ce8
	if (!cr6.eq) goto loc_83261CE8;
	// bl 0x83227908
	ctx.lr = 0x83261CD4;
	sub_83227908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83261CE4:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_83261CE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83261CF8"))) PPC_WEAK_FUNC(sub_83261CF8);
PPC_FUNC_IMPL(__imp__sub_83261CF8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83261d54
	if (cr6.eq) goto loc_83261D54;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83261d44
	if (!cr6.eq) goto loc_83261D44;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83261d44
	if (cr6.eq) goto loc_83261D44;
	// bl 0x83209d68
	ctx.lr = 0x83261D3C;
	sub_83209D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83261D44:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_83261D54:
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

__attribute__((alias("__imp__sub_83261D6C"))) PPC_WEAK_FUNC(sub_83261D6C);
PPC_FUNC_IMPL(__imp__sub_83261D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261D70"))) PPC_WEAK_FUNC(sub_83261D70);
PPC_FUNC_IMPL(__imp__sub_83261D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83261D78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x83261de0
	if (cr6.eq) goto loc_83261DE0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83261de4
	if (!cr6.eq) goto loc_83261DE4;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8320ce58
	ctx.lr = 0x83261DA0;
	sub_8320CE58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x83261c90
	ctx.lr = 0x83261DB0;
	sub_83261C90(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x83261b48
	ctx.lr = 0x83261DC8;
	sub_83261B48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83261de4
	if (cr6.eq) goto loc_83261DE4;
	// bl 0x8320ce70
	ctx.lr = 0x83261DD8;
	sub_8320CE70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83261DE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83261DE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261DEC"))) PPC_WEAK_FUNC(sub_83261DEC);
PPC_FUNC_IMPL(__imp__sub_83261DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261DF0"))) PPC_WEAK_FUNC(sub_83261DF0);
PPC_FUNC_IMPL(__imp__sub_83261DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83261DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83268be0
	ctx.lr = 0x83261E08;
	sub_83268BE0(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83261d70
	ctx.lr = 0x83261E2C;
	sub_83261D70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83261e5c
	if (cr6.eq) goto loc_83261E5C;
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// lhz r9,34(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r4,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r29,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r29.s64 = temp.s64;
loc_83261E5C:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8326a260
	ctx.lr = 0x83261E98;
	sub_8326A260(ctx, base);
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// sraw r5,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83261ec0
	if (cr6.eq) goto loc_83261EC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83261EC0;
	sub_83222030(ctx, base);
loc_83261EC0:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r10,47
	ctx.r10.s64 = 47;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83261EEC"))) PPC_WEAK_FUNC(sub_83261EEC);
PPC_FUNC_IMPL(__imp__sub_83261EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83261EF0"))) PPC_WEAK_FUNC(sub_83261EF0);
PPC_FUNC_IMPL(__imp__sub_83261EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83261EF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,1988
	cr6.compare<uint32_t>(ctx.r10.u32, 1988, xer);
	// bgt cr6,0x83262068
	if (cr6.gt) goto loc_83262068;
	// beq cr6,0x83262050
	if (cr6.eq) goto loc_83262050;
	// cmplwi cr6,r10,488
	cr6.compare<uint32_t>(ctx.r10.u32, 488, xer);
	// beq cr6,0x83261fb8
	if (cr6.eq) goto loc_83261FB8;
	// cmplwi cr6,r10,489
	cr6.compare<uint32_t>(ctx.r10.u32, 489, xer);
	// bne cr6,0x83262070
	if (!cr6.eq) goto loc_83262070;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83261d70
	ctx.lr = 0x83261F30;
	sub_83261D70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83261f78
	if (cr6.eq) goto loc_83261F78;
	// lhz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// lhz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// lhz r4,42(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 42);
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r30,r3,r4
	ctx.r30.s32 = PPCDivide(ctx.r3.s32, ctx.r4.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r4,0
	// andc r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
loc_83261F78:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83262038
	if (cr6.eq) goto loc_83262038;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x83261FA0;
	sub_83222030(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83261FB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83261d70
	ctx.lr = 0x83261FC8;
	sub_83261D70(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83262010
	if (cr6.eq) goto loc_83262010;
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// lhz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 40);
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// lhz r4,42(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 42);
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r30,r3,r4
	ctx.r30.s32 = PPCDivide(ctx.r3.s32, ctx.r4.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r4,0
	// andc r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
loc_83262010:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83262038
	if (cr6.eq) goto loc_83262038;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x83262038;
	sub_83222030(ctx, base);
loc_83262038:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83262050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83261df0
	ctx.lr = 0x8326205C;
	sub_83261DF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83262068:
	// cmplwi cr6,r10,1989
	cr6.compare<uint32_t>(ctx.r10.u32, 1989, xer);
	// beq cr6,0x8326207c
	if (cr6.eq) goto loc_8326207C;
loc_83262070:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8326207C:
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832620a8
	if (cr6.eq) goto loc_832620A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832620A8;
	sub_83222030(ctx, base);
loc_832620A8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832620C4"))) PPC_WEAK_FUNC(sub_832620C4);
PPC_FUNC_IMPL(__imp__sub_832620C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832620C8"))) PPC_WEAK_FUNC(sub_832620C8);
PPC_FUNC_IMPL(__imp__sub_832620C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832620D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832620f4
	if (cr6.eq) goto loc_832620F4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,18840
	ctx.r3.s64 = ctx.r11.s64 + 18840;
	// bl 0x8320d088
	ctx.lr = 0x832620F4;
	sub_8320D088(ctx, base);
loc_832620F4:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x832620FC;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83262168
	if (!cr6.eq) goto loc_83262168;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83262168
	if (cr6.eq) goto loc_83262168;
	// bl 0x83209c20
	ctx.lr = 0x83262164;
	sub_83209C20(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_83262168:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8326217c
	if (!cr6.eq) goto loc_8326217C;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83262198
	goto loc_83262198;
loc_8326217C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83262198
	if (cr6.eq) goto loc_83262198;
	// bl 0x8320ce58
	ctx.lr = 0x83262188;
	sub_8320CE58(ctx, base);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8320cf00
	ctx.lr = 0x83262194;
	sub_8320CF00(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_83262198:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832621c4
	if (cr6.eq) goto loc_832621C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x832621C4;
	sub_83222030(ctx, base);
loc_832621C4:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,140
	ctx.r10.s64 = 140;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832621E4"))) PPC_WEAK_FUNC(sub_832621E4);
PPC_FUNC_IMPL(__imp__sub_832621E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832621E8"))) PPC_WEAK_FUNC(sub_832621E8);
PPC_FUNC_IMPL(__imp__sub_832621E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8320d350
	ctx.lr = 0x8326220C;
	sub_8320D350(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83262228
	if (cr6.eq) goto loc_83262228;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,18840
	ctx.r3.s64 = ctx.r11.s64 + 18840;
	// bl 0x8320d088
	ctx.lr = 0x83262228;
	sub_8320D088(ctx, base);
loc_83262228:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832622e8
	if (cr6.lt) goto loc_832622E8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,47
	ctx.r4.s64 = 47;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83221378
	ctx.lr = 0x8326225C;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83262284
	if (!cr6.eq) goto loc_83262284;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,18852
	ctx.r5.s64 = ctx.r11.s64 + 18852;
	// li r6,47
	ctx.r6.s64 = 47;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8320d428
	ctx.lr = 0x83262280;
	sub_8320D428(ctx, base);
	// b 0x832622e8
	goto loc_832622E8;
loc_83262284:
	// bl 0x83268ba8
	ctx.lr = 0x83262288;
	sub_83268BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,298
	ctx.r9.s64 = 298;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r4,r7,r7
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// bl 0x832728d0
	ctx.lr = 0x832622CC;
	sub_832728D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832622D8;
	sub_83222030(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83266dd0
	ctx.lr = 0x832622E8;
	sub_83266DD0(ctx, base);
loc_832622E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83262304"))) PPC_WEAK_FUNC(sub_83262304);
PPC_FUNC_IMPL(__imp__sub_83262304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262308"))) PPC_WEAK_FUNC(sub_83262308);
PPC_FUNC_IMPL(__imp__sub_83262308) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1157
	cr6.compare<uint32_t>(ctx.r11.u32, 1157, xer);
	// beq cr6,0x83262388
	if (cr6.eq) goto loc_83262388;
	// cmplwi cr6,r11,2432
	cr6.compare<uint32_t>(ctx.r11.u32, 2432, xer);
	// beq cr6,0x8326237c
	if (cr6.eq) goto loc_8326237C;
	// cmplwi cr6,r11,2433
	cr6.compare<uint32_t>(ctx.r11.u32, 2433, xer);
	// beq cr6,0x83262350
	if (cr6.eq) goto loc_83262350;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_83262350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x8320d350
	ctx.lr = 0x8326235C;
	sub_8320D350(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83262390
	if (cr6.eq) goto loc_83262390;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,18840
	ctx.r3.s64 = ctx.r11.s64 + 18840;
	// bl 0x8320d088
	ctx.lr = 0x83262378;
	sub_8320D088(ctx, base);
	// b 0x83262390
	goto loc_83262390;
loc_8326237C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832621e8
	ctx.lr = 0x83262384;
	sub_832621E8(ctx, base);
	// b 0x83262390
	goto loc_83262390;
loc_83262388:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832620c8
	ctx.lr = 0x83262390;
	sub_832620C8(ctx, base);
loc_83262390:
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

__attribute__((alias("__imp__sub_832623A8"))) PPC_WEAK_FUNC(sub_832623A8);
PPC_FUNC_IMPL(__imp__sub_832623A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1601
	cr6.compare<uint32_t>(ctx.r11.u32, 1601, xer);
	// beq cr6,0x832623f4
	if (cr6.eq) goto loc_832623F4;
	// cmplwi cr6,r11,1730
	cr6.compare<uint32_t>(ctx.r11.u32, 1730, xer);
	// ble cr6,0x832623e0
	if (!cr6.gt) goto loc_832623E0;
	// cmplwi cr6,r11,1733
	cr6.compare<uint32_t>(ctx.r11.u32, 1733, xer);
	// bgt cr6,0x832623e0
	if (cr6.gt) goto loc_832623E0;
	// addi r11,r11,-1731
	ctx.r11.s64 = ctx.r11.s64 + -1731;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x832623f8
	goto loc_832623F8;
loc_832623E0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832623F4:
	// li r4,8
	ctx.r4.s64 = 8;
loc_832623F8:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83262400;
	sub_8322E5B0(ctx, base);
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

__attribute__((alias("__imp__sub_83262414"))) PPC_WEAK_FUNC(sub_83262414);
PPC_FUNC_IMPL(__imp__sub_83262414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262418"))) PPC_WEAK_FUNC(sub_83262418);
PPC_FUNC_IMPL(__imp__sub_83262418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83262420;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,268(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lhz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq cr6,0x832624c4
	if (cr6.eq) goto loc_832624C4;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// lhz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r8,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// lhz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 28);
	// sth r7,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r7.u16);
	// lhz r6,30(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// sth r6,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// lhz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// lhz r4,34(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 34);
	// sth r4,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r4.u16);
loc_83262484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83262578
	if (cr6.eq) goto loc_83262578;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8326249C:
	// lbz r11,81(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83262520
	if (cr6.eq) goto loc_83262520;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83262578
	if (cr6.eq) goto loc_83262578;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8326249c
	if (!cr6.eq) goto loc_8326249C;
	// b 0x83262578
	goto loc_83262578;
loc_832624C4:
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwimi r9,r10,16,14,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x30000) | (ctx.r9.u64 & 0xFFFFFFFFFFFCFFFF);
	// rlwinm r10,r9,0,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83261aa8
	ctx.lr = 0x832624E4;
	sub_83261AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206de0
	ctx.lr = 0x832624F8;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83262484
	if (cr6.eq) goto loc_83262484;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,18804
	ctx.r4.s64 = ctx.r11.s64 + 18804;
	// addi r3,r10,18792
	ctx.r3.s64 = ctx.r10.s64 + 18792;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x83262518;
	sub_832085E8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83262520:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83260af0
	ctx.lr = 0x83262530;
	sub_83260AF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83262578
	if (!cr6.eq) goto loc_83262578;
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83262574
	if (cr6.eq) goto loc_83262574;
	// li r9,2
	ctx.r9.s64 = 2;
loc_83262548:
	// lbz r8,81(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 81);
	// addi r10,r11,81
	ctx.r10.s64 = ctx.r11.s64 + 81;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x83262574
	if (cr6.eq) goto loc_83262574;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83262574
	if (cr6.eq) goto loc_83262574;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83262548
	if (!cr6.eq) goto loc_83262548;
loc_83262574:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83262578:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83262688
	if (!cr6.eq) goto loc_83262688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83260468
	ctx.lr = 0x83262590;
	sub_83260468(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83262688
	if (cr6.eq) goto loc_83262688;
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// rlwinm r4,r6,31,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0xFFFF;
	// lhz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lhz r11,42(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 42);
	// rlwinm r4,r9,31,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFFF;
	// lhz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// mullw r31,r7,r10
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r5,r31,r11
	ctx.r5.s32 = PPCDivide(ctx.r31.s32, ctx.r11.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// andc r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twllei r11,0
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// twlgei r31,-1
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// beq cr6,0x83262688
	if (cr6.eq) goto loc_83262688;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// twllei r11,0
	// mullw r5,r9,r10
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r11
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// andc r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// cmpw cr6,r4,r8
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, xer);
	// twlgei r11,-1
	// beq cr6,0x83262688
	if (cr6.eq) goto loc_83262688;
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bge cr6,0x83262688
	if (!cr6.lt) goto loc_83262688;
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bge cr6,0x83262688
	if (!cr6.lt) goto loc_83262688;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f1,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x83262688
	if (cr6.eq) goto loc_83262688;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83260190
	ctx.lr = 0x83262688;
	sub_83260190(ctx, base);
loc_83262688:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83262690"))) PPC_WEAK_FUNC(sub_83262690);
PPC_FUNC_IMPL(__imp__sub_83262690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83262698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832592d8
	ctx.lr = 0x832626B0;
	sub_832592D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x832626e8
	if (!cr6.eq) goto loc_832626E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211ef8
	ctx.lr = 0x832626C8;
	sub_83211EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832626dc
	if (cr6.lt) goto loc_832626DC;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x832626e8
	if (!cr6.eq) goto loc_832626E8;
loc_832626DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832626E8:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x832626F0;
	sub_83209AA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// bl 0x83209c20
	ctx.lr = 0x83262714;
	sub_83209C20(ctx, base);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r31,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r31.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326272C"))) PPC_WEAK_FUNC(sub_8326272C);
PPC_FUNC_IMPL(__imp__sub_8326272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262730"))) PPC_WEAK_FUNC(sub_83262730);
PPC_FUNC_IMPL(__imp__sub_83262730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r10,r11,-2561
	ctx.r10.s64 = ctx.r11.s64 + -2561;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bgt cr6,0x83262870
	if (cr6.gt) goto loc_83262870;
	// lis r12,-31962
	ctx.r12.s64 = -2094661632;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10084
	ctx.r12.s64 = ctx.r12.s64 + 10084;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_83262830;
	case 1:
		goto loc_83262830;
	case 2:
		goto loc_83262870;
	case 3:
		goto loc_83262870;
	case 4:
		goto loc_83262870;
	case 5:
		goto loc_83262870;
	case 6:
		goto loc_83262870;
	case 7:
		goto loc_83262870;
	case 8:
		goto loc_83262870;
	case 9:
		goto loc_83262870;
	case 10:
		goto loc_83262870;
	case 11:
		goto loc_83262870;
	case 12:
		goto loc_83262870;
	case 13:
		goto loc_83262830;
	case 14:
		goto loc_83262830;
	case 15:
		goto loc_83262830;
	case 16:
		goto loc_83262870;
	case 17:
		goto loc_83262830;
	case 18:
		goto loc_83262870;
	case 19:
		goto loc_83262870;
	case 20:
		goto loc_83262830;
	case 21:
		goto loc_83262830;
	case 22:
		goto loc_83262830;
	case 23:
		goto loc_83262870;
	case 24:
		goto loc_83262830;
	case 25:
		goto loc_83262830;
	case 26:
		goto loc_83262830;
	case 27:
		goto loc_83262830;
	case 28:
		goto loc_83262830;
	case 29:
		goto loc_83262830;
	case 30:
		goto loc_83262830;
	case 31:
		goto loc_83262830;
	case 32:
		goto loc_83262830;
	case 33:
		goto loc_83262870;
	case 34:
		goto loc_83262870;
	case 35:
		goto loc_83262830;
	case 36:
		goto loc_83262870;
	case 37:
		goto loc_83262830;
	case 38:
		goto loc_83262830;
	case 39:
		goto loc_83262870;
	case 40:
		goto loc_83262870;
	case 41:
		goto loc_83262870;
	case 42:
		goto loc_83262870;
	case 43:
		goto loc_83262870;
	case 44:
		goto loc_83262870;
	case 45:
		goto loc_83262830;
	case 46:
		goto loc_83262830;
	case 47:
		goto loc_83262830;
	case 48:
		goto loc_83262870;
	case 49:
		goto loc_83262870;
	case 50:
		goto loc_83262850;
	default:
		return;
	}
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10288(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10288);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10352(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10352);
	// lwz r25,10320(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10320);
loc_83262830:
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x8326283C;
	sub_83223C38(ctx, base);
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
loc_83262850:
	// li r4,2434
	ctx.r4.s64 = 2434;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x8326285C;
	sub_83223C38(ctx, base);
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
loc_83262870:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83262884"))) PPC_WEAK_FUNC(sub_83262884);
PPC_FUNC_IMPL(__imp__sub_83262884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262888"))) PPC_WEAK_FUNC(sub_83262888);
PPC_FUNC_IMPL(__imp__sub_83262888) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1250
	cr6.compare<uint32_t>(ctx.r11.u32, 1250, xer);
	// beq cr6,0x832628b4
	if (cr6.eq) goto loc_832628B4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83262964
	goto loc_83262964;
loc_832628B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832628d0
	if (cr6.eq) goto loc_832628D0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13900
	ctx.r3.s64 = ctx.r11.s64 + 13900;
	// bl 0x8320d088
	ctx.lr = 0x832628D0;
	sub_8320D088(ctx, base);
loc_832628D0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83262954
	if (!cr6.gt) goto loc_83262954;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x832264e0
	ctx.lr = 0x83262938;
	sub_832264E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83262730
	ctx.lr = 0x83262940;
	sub_83262730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8326294c
	if (!cr6.eq) goto loc_8326294C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8326294C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83262954;
	sub_83222030(ctx, base);
loc_83262954:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83262960;
	sub_8320CF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83262964:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8326297C"))) PPC_WEAK_FUNC(sub_8326297C);
PPC_FUNC_IMPL(__imp__sub_8326297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262980"))) PPC_WEAK_FUNC(sub_83262980);
PPC_FUNC_IMPL(__imp__sub_83262980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2570
	cr6.compare<uint32_t>(ctx.r11.u32, 2570, xer);
	// bgt cr6,0x832629a8
	if (cr6.gt) goto loc_832629A8;
	// cmplwi cr6,r11,2563
	cr6.compare<uint32_t>(ctx.r11.u32, 2563, xer);
	// bge cr6,0x832629c4
	if (!cr6.lt) goto loc_832629C4;
	// cmplwi cr6,r11,2560
	cr6.compare<uint32_t>(ctx.r11.u32, 2560, xer);
	// b 0x832629ac
	goto loc_832629AC;
loc_832629A8:
	// cmplwi cr6,r11,2584
	cr6.compare<uint32_t>(ctx.r11.u32, 2584, xer);
loc_832629AC:
	// beq cr6,0x832629c4
	if (cr6.eq) goto loc_832629C4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832629C4:
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x832629D0;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_832629E4"))) PPC_WEAK_FUNC(sub_832629E4);
PPC_FUNC_IMPL(__imp__sub_832629E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832629E8"))) PPC_WEAK_FUNC(sub_832629E8);
PPC_FUNC_IMPL(__imp__sub_832629E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2571
	cr6.compare<uint32_t>(ctx.r11.u32, 2571, xer);
	// blt cr6,0x83262a28
	if (cr6.lt) goto loc_83262A28;
	// cmplwi cr6,r11,2572
	cr6.compare<uint32_t>(ctx.r11.u32, 2572, xer);
	// bgt cr6,0x83262a28
	if (cr6.gt) goto loc_83262A28;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262A14;
	sub_83223C38(ctx, base);
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
loc_83262A28:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83262A3C"))) PPC_WEAK_FUNC(sub_83262A3C);
PPC_FUNC_IMPL(__imp__sub_83262A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262A40"))) PPC_WEAK_FUNC(sub_83262A40);
PPC_FUNC_IMPL(__imp__sub_83262A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2573
	cr6.compare<uint32_t>(ctx.r11.u32, 2573, xer);
	// beq cr6,0x83262a74
	if (cr6.eq) goto loc_83262A74;
	// cmplwi cr6,r11,2580
	cr6.compare<uint32_t>(ctx.r11.u32, 2580, xer);
	// beq cr6,0x83262a74
	if (cr6.eq) goto loc_83262A74;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83262A74:
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262A80;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83262A94"))) PPC_WEAK_FUNC(sub_83262A94);
PPC_FUNC_IMPL(__imp__sub_83262A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262A98"))) PPC_WEAK_FUNC(sub_83262A98);
PPC_FUNC_IMPL(__imp__sub_83262A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2577
	cr6.compare<uint32_t>(ctx.r11.u32, 2577, xer);
	// beq cr6,0x83262ac4
	if (cr6.eq) goto loc_83262AC4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83262AC4:
	// li r4,2705
	ctx.r4.s64 = 2705;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262AD0;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83262AE4"))) PPC_WEAK_FUNC(sub_83262AE4);
PPC_FUNC_IMPL(__imp__sub_83262AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262AE8"))) PPC_WEAK_FUNC(sub_83262AE8);
PPC_FUNC_IMPL(__imp__sub_83262AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2604
	cr6.compare<uint32_t>(ctx.r11.u32, 2604, xer);
	// blt cr6,0x83262b28
	if (cr6.lt) goto loc_83262B28;
	// cmplwi cr6,r11,2605
	cr6.compare<uint32_t>(ctx.r11.u32, 2605, xer);
	// bgt cr6,0x83262b28
	if (cr6.gt) goto loc_83262B28;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262B14;
	sub_83223C38(ctx, base);
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
loc_83262B28:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83262B3C"))) PPC_WEAK_FUNC(sub_83262B3C);
PPC_FUNC_IMPL(__imp__sub_83262B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262B40"))) PPC_WEAK_FUNC(sub_83262B40);
PPC_FUNC_IMPL(__imp__sub_83262B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2579
	cr6.compare<uint32_t>(ctx.r11.u32, 2579, xer);
	// beq cr6,0x83262b6c
	if (cr6.eq) goto loc_83262B6C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83262B6C:
	// li r4,2707
	ctx.r4.s64 = 2707;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262B78;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83262B8C"))) PPC_WEAK_FUNC(sub_83262B8C);
PPC_FUNC_IMPL(__imp__sub_83262B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262B90"))) PPC_WEAK_FUNC(sub_83262B90);
PPC_FUNC_IMPL(__imp__sub_83262B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2595
	cr6.compare<uint32_t>(ctx.r11.u32, 2595, xer);
	// beq cr6,0x83262bbc
	if (cr6.eq) goto loc_83262BBC;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83262BBC:
	// li r4,2723
	ctx.r4.s64 = 2723;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262BC8;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83262BDC"))) PPC_WEAK_FUNC(sub_83262BDC);
PPC_FUNC_IMPL(__imp__sub_83262BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262BE0"))) PPC_WEAK_FUNC(sub_83262BE0);
PPC_FUNC_IMPL(__imp__sub_83262BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2594
	cr6.compare<uint32_t>(ctx.r11.u32, 2594, xer);
	// beq cr6,0x83262c0c
	if (cr6.eq) goto loc_83262C0C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83262C0C:
	// li r4,2722
	ctx.r4.s64 = 2722;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262C18;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83262C2C"))) PPC_WEAK_FUNC(sub_83262C2C);
PPC_FUNC_IMPL(__imp__sub_83262C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262C30"))) PPC_WEAK_FUNC(sub_83262C30);
PPC_FUNC_IMPL(__imp__sub_83262C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2597
	cr6.compare<uint32_t>(ctx.r11.u32, 2597, xer);
	// beq cr6,0x83262c5c
	if (cr6.eq) goto loc_83262C5C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83262C5C:
	// li r4,791
	ctx.r4.s64 = 791;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262C68;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_83262C7C"))) PPC_WEAK_FUNC(sub_83262C7C);
PPC_FUNC_IMPL(__imp__sub_83262C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262C80"))) PPC_WEAK_FUNC(sub_83262C80);
PPC_FUNC_IMPL(__imp__sub_83262C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2600
	cr6.compare<uint32_t>(ctx.r11.u32, 2600, xer);
	// blt cr6,0x83262cc0
	if (cr6.lt) goto loc_83262CC0;
	// cmplwi cr6,r11,2603
	cr6.compare<uint32_t>(ctx.r11.u32, 2603, xer);
	// bgt cr6,0x83262cc0
	if (cr6.gt) goto loc_83262CC0;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262CAC;
	sub_83223C38(ctx, base);
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
loc_83262CC0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83262CD4"))) PPC_WEAK_FUNC(sub_83262CD4);
PPC_FUNC_IMPL(__imp__sub_83262CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262CD8"))) PPC_WEAK_FUNC(sub_83262CD8);
PPC_FUNC_IMPL(__imp__sub_83262CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2609
	cr6.compare<uint32_t>(ctx.r11.u32, 2609, xer);
	// blt cr6,0x83262d18
	if (cr6.lt) goto loc_83262D18;
	// cmplwi cr6,r11,2610
	cr6.compare<uint32_t>(ctx.r11.u32, 2610, xer);
	// bgt cr6,0x83262d18
	if (cr6.gt) goto loc_83262D18;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262D04;
	sub_83223C38(ctx, base);
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
loc_83262D18:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83262D2C"))) PPC_WEAK_FUNC(sub_83262D2C);
PPC_FUNC_IMPL(__imp__sub_83262D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262D30"))) PPC_WEAK_FUNC(sub_83262D30);
PPC_FUNC_IMPL(__imp__sub_83262D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,2612
	cr6.compare<uint32_t>(ctx.r11.u32, 2612, xer);
	// blt cr6,0x83262d70
	if (cr6.lt) goto loc_83262D70;
	// cmplwi cr6,r11,2619
	cr6.compare<uint32_t>(ctx.r11.u32, 2619, xer);
	// bgt cr6,0x83262d70
	if (cr6.gt) goto loc_83262D70;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83223c38
	ctx.lr = 0x83262D5C;
	sub_83223C38(ctx, base);
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
loc_83262D70:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83262D84"))) PPC_WEAK_FUNC(sub_83262D84);
PPC_FUNC_IMPL(__imp__sub_83262D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262D88"))) PPC_WEAK_FUNC(sub_83262D88);
PPC_FUNC_IMPL(__imp__sub_83262D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83257840
	ctx.lr = 0x83262DA8;
	sub_83257840(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1839
	ctx.r11.s64 = 1839;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// bl 0x8322bff8
	ctx.lr = 0x83262DD0;
	sub_8322BFF8(ctx, base);
	// li r10,1840
	ctx.r10.s64 = 1840;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// bl 0x8322bff8
	ctx.lr = 0x83262DF4;
	sub_8322BFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_83262E0C"))) PPC_WEAK_FUNC(sub_83262E0C);
PPC_FUNC_IMPL(__imp__sub_83262E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262E10"))) PPC_WEAK_FUNC(sub_83262E10);
PPC_FUNC_IMPL(__imp__sub_83262E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bne cr6,0x83262e50
	if (!cr6.eq) goto loc_83262E50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83257840
	ctx.lr = 0x83262E4C;
	sub_83257840(ctx, base);
	// b 0x83262e74
	goto loc_83262E74;
loc_83262E50:
	// li r4,8
	ctx.r4.s64 = 8;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8322a890
	ctx.lr = 0x83262E5C;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83262ed8
	if (cr6.eq) goto loc_83262ED8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321c628
	ctx.lr = 0x83262E74;
	sub_8321C628(ctx, base);
loc_83262E74:
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// li r11,1841
	ctx.r11.s64 = 1841;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// bl 0x8322bff8
	ctx.lr = 0x83262E9C;
	sub_8322BFF8(ctx, base);
	// li r10,1842
	ctx.r10.s64 = 1842;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// bl 0x8322bff8
	ctx.lr = 0x83262EC0;
	sub_8322BFF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_83262ED8:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83221c30
	ctx.lr = 0x83262EE8;
	sub_83221C30(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r10,18952
	ctx.r8.s64 = ctx.r10.s64 + 18952;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,18992
	ctx.r4.s64 = ctx.r9.s64 + 18992;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83208568
	ctx.lr = 0x83262F04;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83262F04"))) PPC_WEAK_FUNC(sub_83262F04);
PPC_FUNC_IMPL(__imp__sub_83262F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262F08"))) PPC_WEAK_FUNC(sub_83262F08);
PPC_FUNC_IMPL(__imp__sub_83262F08) {
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
	// bl 0x83201e38
	ctx.lr = 0x83262F20;
	sub_83201E38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1947
	ctx.r10.s64 = 1947;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r5,r3,31
	ctx.r5.u64 = ctx.r3.u32 & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x8322bde8
	ctx.lr = 0x83262F48;
	sub_8322BDE8(ctx, base);
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

__attribute__((alias("__imp__sub_83262F5C"))) PPC_WEAK_FUNC(sub_83262F5C);
PPC_FUNC_IMPL(__imp__sub_83262F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83262F60"))) PPC_WEAK_FUNC(sub_83262F60);
PPC_FUNC_IMPL(__imp__sub_83262F60) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x8322c870
	ctx.lr = 0x83262F88;
	sub_8322C870(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83262fb0
	if (cr6.eq) goto loc_83262FB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83262FB0;
	sub_83222030(ctx, base);
loc_83262FB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83262FD8"))) PPC_WEAK_FUNC(sub_83262FD8);
PPC_FUNC_IMPL(__imp__sub_83262FD8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x8322c870
	ctx.lr = 0x83263000;
	sub_8322C870(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83263028
	if (cr6.eq) goto loc_83263028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83263028;
	sub_83222030(ctx, base);
loc_83263028:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83263050"))) PPC_WEAK_FUNC(sub_83263050);
PPC_FUNC_IMPL(__imp__sub_83263050) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,51
	ctx.r4.s64 = 51;
	// bl 0x8322c870
	ctx.lr = 0x83263078;
	sub_8322C870(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832630a0
	if (cr6.eq) goto loc_832630A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832630A0;
	sub_83222030(ctx, base);
loc_832630A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_832630C8"))) PPC_WEAK_FUNC(sub_832630C8);
PPC_FUNC_IMPL(__imp__sub_832630C8) {
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
	// bl 0x83235198
	ctx.lr = 0x832630E0;
	sub_83235198(ctx, base);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// sth r31,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r31.u16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,134
	ctx.r11.s64 = ctx.r11.s64 + 134;
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
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

__attribute__((alias("__imp__sub_83263114"))) PPC_WEAK_FUNC(sub_83263114);
PPC_FUNC_IMPL(__imp__sub_83263114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83263118"))) PPC_WEAK_FUNC(sub_83263118);
PPC_FUNC_IMPL(__imp__sub_83263118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83263120;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83263140
	if (cr6.lt) goto loc_83263140;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x83263148
	if (!cr6.gt) goto loc_83263148;
loc_83263140:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x83263148;
	sub_8320E738(ctx, base);
loc_83263148:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83263244
	if (cr6.lt) goto loc_83263244;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,1827
	ctx.r9.s64 = 1827;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x8322dfb0
	ctx.lr = 0x832631AC;
	sub_8322DFB0(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x83263244
	if (cr6.lt) goto loc_83263244;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220140
	ctx.lr = 0x832631C4;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832631e4
	if (cr6.eq) goto loc_832631E4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r5,3331
	ctx.r5.s64 = 3331;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d6e0
	ctx.lr = 0x832631E4;
	sub_8320D6E0(ctx, base);
loc_832631E4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83263244
	if (cr6.lt) goto loc_83263244;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220140
	ctx.lr = 0x832631FC;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83263244
	if (cr6.eq) goto loc_83263244;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r5,2006
	ctx.r5.s64 = 2006;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d6e0
	ctx.lr = 0x83263220;
	sub_8320D6E0(ctx, base);
	// li r11,2006
	ctx.r11.s64 = 2006;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// bl 0x8322bde8
	ctx.lr = 0x83263244;
	sub_8322BDE8(ctx, base);
loc_83263244:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8326324C"))) PPC_WEAK_FUNC(sub_8326324C);
PPC_FUNC_IMPL(__imp__sub_8326324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83263250"))) PPC_WEAK_FUNC(sub_83263250);
PPC_FUNC_IMPL(__imp__sub_83263250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83263258;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83263278
	if (cr6.lt) goto loc_83263278;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// ble cr6,0x83263280
	if (!cr6.gt) goto loc_83263280;
loc_83263278:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320e738
	ctx.lr = 0x83263280;
	sub_8320E738(ctx, base);
loc_83263280:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8326337c
	if (cr6.lt) goto loc_8326337C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,1827
	ctx.r9.s64 = 1827;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// bl 0x8322dfb0
	ctx.lr = 0x832632E4;
	sub_8322DFB0(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8326337c
	if (cr6.lt) goto loc_8326337C;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83220140
	ctx.lr = 0x832632FC;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8326331c
	if (cr6.eq) goto loc_8326331C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r5,3331
	ctx.r5.s64 = 3331;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d6e0
	ctx.lr = 0x8326331C;
	sub_8320D6E0(ctx, base);
loc_8326331C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x8326337c
	if (cr6.lt) goto loc_8326337C;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220140
	ctx.lr = 0x83263334;
	sub_83220140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8326337c
	if (cr6.eq) goto loc_8326337C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r5,2006
	ctx.r5.s64 = 2006;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d6e0
	ctx.lr = 0x83263358;
	sub_8320D6E0(ctx, base);
	// li r11,2006
	ctx.r11.s64 = 2006;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// bl 0x8322bde8
	ctx.lr = 0x8326337C;
	sub_8322BDE8(ctx, base);
loc_8326337C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83263384"))) PPC_WEAK_FUNC(sub_83263384);
PPC_FUNC_IMPL(__imp__sub_83263384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83263388"))) PPC_WEAK_FUNC(sub_83263388);
PPC_FUNC_IMPL(__imp__sub_83263388) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1823
	ctx.r10.s64 = 1823;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// beq cr6,0x83263418
	if (cr6.eq) goto loc_83263418;
	// dcbt r0,r8
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83263418
	if (!cr6.gt) goto loc_83263418;
loc_832633E0:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,83
	cr6.compare<uint32_t>(ctx.r6.u32, 83, xer);
	// beq cr6,0x83263404
	if (cr6.eq) goto loc_83263404;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x832633e0
	if (cr6.lt) goto loc_832633E0;
	// b 0x83263418
	goto loc_83263418;
loc_83263404:
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x83221440
	ctx.lr = 0x8326340C;
	sub_83221440(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8326341c
	if (!cr6.eq) goto loc_8326341C;
loc_83263418:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8326341C:
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8322c328
	ctx.lr = 0x83263430;
	sub_8322C328(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

