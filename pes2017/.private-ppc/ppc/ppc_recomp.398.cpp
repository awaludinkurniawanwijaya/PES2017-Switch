#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_835DDD98"))) PPC_WEAK_FUNC(sub_835DDD98);
PPC_FUNC_IMPL(__imp__sub_835DDD98) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a81eb0
	ctx.lr = 0x835DDDAC;
	sub_83A81EB0(ctx, base);
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

__attribute__((alias("__imp__sub_835DDDC0"))) PPC_WEAK_FUNC(sub_835DDDC0);
PPC_FUNC_IMPL(__imp__sub_835DDDC0) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dddf4
	if (cr6.eq) goto loc_835DDDF4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a81e78
	ctx.lr = 0x835DDDEC;
	sub_83A81E78(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DDDF4:
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

__attribute__((alias("__imp__sub_835DDE08"))) PPC_WEAK_FUNC(sub_835DDE08);
PPC_FUNC_IMPL(__imp__sub_835DDE08) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x83a978c0
	sub_83A978C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DDE14"))) PPC_WEAK_FUNC(sub_835DDE14);
PPC_FUNC_IMPL(__imp__sub_835DDE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDE18"))) PPC_WEAK_FUNC(sub_835DDE18);
PPC_FUNC_IMPL(__imp__sub_835DDE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r10,18340(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18340);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835DDE28"))) PPC_WEAK_FUNC(sub_835DDE28);
PPC_FUNC_IMPL(__imp__sub_835DDE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r10,18344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18344);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835DDE38"))) PPC_WEAK_FUNC(sub_835DDE38);
PPC_FUNC_IMPL(__imp__sub_835DDE38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a99910
	ctx.lr = 0x835DDE4C;
	sub_83A99910(ctx, base);
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

__attribute__((alias("__imp__sub_835DDE60"))) PPC_WEAK_FUNC(sub_835DDE60);
PPC_FUNC_IMPL(__imp__sub_835DDE60) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a99920
	ctx.lr = 0x835DDE74;
	sub_83A99920(ctx, base);
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

__attribute__((alias("__imp__sub_835DDE88"))) PPC_WEAK_FUNC(sub_835DDE88);
PPC_FUNC_IMPL(__imp__sub_835DDE88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x835e8260
	sub_835E8260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DDE90"))) PPC_WEAK_FUNC(sub_835DDE90);
PPC_FUNC_IMPL(__imp__sub_835DDE90) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x835e83f8
	sub_835E83F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DDE98"))) PPC_WEAK_FUNC(sub_835DDE98);
PPC_FUNC_IMPL(__imp__sub_835DDE98) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddef4
	if (cr6.eq) goto loc_835DDEF4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835ddef4
	if (cr6.eq) goto loc_835DDEF4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835ddef4
	if (cr6.eq) goto loc_835DDEF4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835ddef4
	if (cr6.eq) goto loc_835DDEF4;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,18928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18928);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x835e80e8
	ctx.lr = 0x835DDEF0;
	sub_835E80E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DDEF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DDF04"))) PPC_WEAK_FUNC(sub_835DDF04);
PPC_FUNC_IMPL(__imp__sub_835DDF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDF08"))) PPC_WEAK_FUNC(sub_835DDF08);
PPC_FUNC_IMPL(__imp__sub_835DDF08) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835ddf3c
	if (cr6.eq) goto loc_835DDF3C;
	// bl 0x83a81d30
	ctx.lr = 0x835DDF30;
	sub_83A81D30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_835DDF3C:
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

__attribute__((alias("__imp__sub_835DDF50"))) PPC_WEAK_FUNC(sub_835DDF50);
PPC_FUNC_IMPL(__imp__sub_835DDF50) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a81d68
	sub_83A81D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DDF54"))) PPC_WEAK_FUNC(sub_835DDF54);
PPC_FUNC_IMPL(__imp__sub_835DDF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDF58"))) PPC_WEAK_FUNC(sub_835DDF58);
PPC_FUNC_IMPL(__imp__sub_835DDF58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83a82f58
	sub_83A82F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DDF60"))) PPC_WEAK_FUNC(sub_835DDF60);
PPC_FUNC_IMPL(__imp__sub_835DDF60) {
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
	// bl 0x83a8a450
	ctx.lr = 0x835DDF78;
	sub_83A8A450(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_835DDF94"))) PPC_WEAK_FUNC(sub_835DDF94);
PPC_FUNC_IMPL(__imp__sub_835DDF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DDF98"))) PPC_WEAK_FUNC(sub_835DDF98);
PPC_FUNC_IMPL(__imp__sub_835DDF98) {
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
	// lbz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ddfbc
	if (cr6.eq) goto loc_835DDFBC;
	// bl 0x83a8a060
	ctx.lr = 0x835DDFBC;
	sub_83A8A060(ctx, base);
loc_835DDFBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_835DDFD8"))) PPC_WEAK_FUNC(sub_835DDFD8);
PPC_FUNC_IMPL(__imp__sub_835DDFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,529
	ctx.r11.s64 = 34668544;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,768
	ctx.r10.u64 = ctx.r11.u64 | 768;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DDFFC"))) PPC_WEAK_FUNC(sub_835DDFFC);
PPC_FUNC_IMPL(__imp__sub_835DDFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE000"))) PPC_WEAK_FUNC(sub_835DE000);
PPC_FUNC_IMPL(__imp__sub_835DE000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,8199
	ctx.r10.u64 = ctx.r11.u64 | 8199;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DE024"))) PPC_WEAK_FUNC(sub_835DE024);
PPC_FUNC_IMPL(__imp__sub_835DE024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE028"))) PPC_WEAK_FUNC(sub_835DE028);
PPC_FUNC_IMPL(__imp__sub_835DE028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,204(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,208(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lwz r6,212(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r5,216(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// stw r5,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DE07C"))) PPC_WEAK_FUNC(sub_835DE07C);
PPC_FUNC_IMPL(__imp__sub_835DE07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE080"))) PPC_WEAK_FUNC(sub_835DE080);
PPC_FUNC_IMPL(__imp__sub_835DE080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DE0B4"))) PPC_WEAK_FUNC(sub_835DE0B4);
PPC_FUNC_IMPL(__imp__sub_835DE0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE0B8"))) PPC_WEAK_FUNC(sub_835DE0B8);
PPC_FUNC_IMPL(__imp__sub_835DE0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x835de0f4
	if (!cr6.gt) goto loc_835DE0F4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
loc_835DE0E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835de0e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DE0E8;
loc_835DE0F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DE0FC"))) PPC_WEAK_FUNC(sub_835DE0FC);
PPC_FUNC_IMPL(__imp__sub_835DE0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE100"))) PPC_WEAK_FUNC(sub_835DE100);
PPC_FUNC_IMPL(__imp__sub_835DE100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DE108;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835de158
	if (cr6.eq) goto loc_835DE158;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835de158
	if (cr6.eq) goto loc_835DE158;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x83a81cc0
	ctx.lr = 0x835DE144;
	sub_83A81CC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_835DE158:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE160"))) PPC_WEAK_FUNC(sub_835DE160);
PPC_FUNC_IMPL(__imp__sub_835DE160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DE168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835de1b4
	if (cr6.eq) goto loc_835DE1B4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835de1b4
	if (cr6.eq) goto loc_835DE1B4;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x83a94d68
	ctx.lr = 0x835DE1A0;
	sub_83A94D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_835DE1B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE1BC"))) PPC_WEAK_FUNC(sub_835DE1BC);
PPC_FUNC_IMPL(__imp__sub_835DE1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE1C0"))) PPC_WEAK_FUNC(sub_835DE1C0);
PPC_FUNC_IMPL(__imp__sub_835DE1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835DE1C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835de298
	if (cr6.eq) goto loc_835DE298;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835de298
	if (cr6.eq) goto loc_835DE298;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// bl 0x835db360
	ctx.lr = 0x835DE200;
	sub_835DB360(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x835db460
	ctx.lr = 0x835DE214;
	sub_835DB460(ctx, base);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r7,212(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lwz r6,216(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 216);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x835de240
	if (!cr6.eq) goto loc_835DE240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e2f48
	ctx.lr = 0x835DE240;
	sub_835E2F48(ctx, base);
loc_835DE240:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e3000
	ctx.lr = 0x835DE248;
	sub_835E3000(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835de268
	if (!cr6.eq) goto loc_835DE268;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_835DE268:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835db158
	ctx.lr = 0x835DE270;
	sub_835DB158(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x835e3120
	ctx.lr = 0x835DE280;
	sub_835E3120(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e3080
	ctx.lr = 0x835DE28C;
	sub_835E3080(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_835DE298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE2A0"))) PPC_WEAK_FUNC(sub_835DE2A0);
PPC_FUNC_IMPL(__imp__sub_835DE2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835DE2A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835de498
	if (cr6.eq) goto loc_835DE498;
	// bl 0x83a81a50
	ctx.lr = 0x835DE2D4;
	sub_83A81A50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835de2e0
	if (cr6.eq) goto loc_835DE2E0;
	// bl 0x83a82ca0
	ctx.lr = 0x835DE2E0;
	sub_83A82CA0(ctx, base);
loc_835DE2E0:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lbz r3,180(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 180);
	// bl 0x83102db0
	ctx.lr = 0x835DE2F0;
	sub_83102DB0(ctx, base);
	// ld r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 192);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x835de318
	if (cr6.eq) goto loc_835DE318;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a93dd0
	ctx.lr = 0x835DE308;
	sub_83A93DD0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835de318
	if (cr6.lt) goto loc_835DE318;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_835DE318:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x835DE328;
	sub_831CE980(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// lwz r4,160(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lwz r3,156(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x835dac10
	ctx.lr = 0x835DE33C;
	sub_835DAC10(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835de470
	if (!cr6.eq) goto loc_835DE470;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835de1c0
	ctx.lr = 0x835DE360;
	sub_835DE1C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83a81668
	ctx.lr = 0x835DE368;
	sub_83A81668(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x83a91dd8
	ctx.lr = 0x835DE370;
	sub_83A91DD8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83a9a2f0
	ctx.lr = 0x835DE378;
	sub_83A9A2F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83a829f0
	ctx.lr = 0x835DE380;
	sub_83A829F0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835de390
	if (cr6.lt) goto loc_835DE390;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_835DE390:
	// lwz r4,160(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// lwz r3,156(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// bl 0x83935df8
	ctx.lr = 0x835DE39C;
	sub_83935DF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835de3ac
	if (cr6.lt) goto loc_835DE3AC;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_835DE3AC:
	// addi r29,r28,220
	ctx.r29.s64 = ctx.r28.s64 + 220;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x835dc228
	ctx.lr = 0x835DE3BC;
	sub_835DC228(ctx, base);
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addic. r10,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x835de404
	if (cr0.eq) goto loc_835DE404;
loc_835DE3CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835db938
	ctx.lr = 0x835DE3D8;
	sub_835DB938(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835de3f0
	if (!cr6.eq) goto loc_835DE3F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x835de3f0
	if (cr6.lt) goto loc_835DE3F0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_835DE3F0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x835de3cc
	if (cr6.lt) goto loc_835DE3CC;
loc_835DE404:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835dba50
	ctx.lr = 0x835DE414;
	sub_835DBA50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835de42c
	if (!cr6.eq) goto loc_835DE42C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x835de42c
	if (cr6.lt) goto loc_835DE42C;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_835DE42C:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835e3618
	ctx.lr = 0x835DE444;
	sub_835E3618(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835de458
	if (!cr6.eq) goto loc_835DE458;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_835DE458:
	// addi r3,r28,244
	ctx.r3.s64 = ctx.r28.s64 + 244;
	// bl 0x83a949b0
	ctx.lr = 0x835DE460;
	sub_83A949B0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835de470
	if (cr6.lt) goto loc_835DE470;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_835DE470:
	// bl 0x83102db0
	ctx.lr = 0x835DE474;
	sub_83102DB0(ctx, base);
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// addme r9,r10
	temp.u8 = (ctx.r10.u32 != 0) | (xer.ca != 0);
	ctx.r9.s64 = ctx.r10.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// beq cr6,0x835de498
	if (cr6.eq) goto loc_835DE498;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
loc_835DE498:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE4A0"))) PPC_WEAK_FUNC(sub_835DE4A0);
PPC_FUNC_IMPL(__imp__sub_835DE4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x835DE4A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x83a81a50
	ctx.lr = 0x835DE4B8;
	sub_83A81A50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835de4c4
	if (cr6.eq) goto loc_835DE4C4;
	// bl 0x83a82ca0
	ctx.lr = 0x835DE4C4;
	sub_83A82CA0(ctx, base);
loc_835DE4C4:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,148(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// lwz r30,152(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lbz r3,180(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 180);
	// bl 0x83102db0
	ctx.lr = 0x835DE4E0;
	sub_83102DB0(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x835DE4E4;
	sub_83102DB0(ctx, base);
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r23,r28,220
	ctx.r23.s64 = ctx.r28.s64 + 220;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addic. r27,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r27.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x835de558
	if (cr0.eq) goto loc_835DE558;
loc_835DE4F8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// beq cr6,0x835de524
	if (cr6.eq) goto loc_835DE524;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835db8e8
	ctx.lr = 0x835DE510;
	sub_835DB8E8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x835db988
	ctx.lr = 0x835DE524;
	sub_835DB988(ctx, base);
loc_835DE524:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835db938
	ctx.lr = 0x835DE534;
	sub_835DB938(ctx, base);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x835db9d8
	ctx.lr = 0x835DE54C;
	sub_835DB9D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x835de4f8
	if (cr6.lt) goto loc_835DE4F8;
loc_835DE558:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e81b0
	ctx.lr = 0x835DE564;
	sub_835E81B0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x835de58c
	if (cr6.eq) goto loc_835DE58C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x835de58c
	if (cr6.eq) goto loc_835DE58C;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lis r10,-31906
	ctx.r10.s64 = -2090991616;
	// addi r3,r11,-8568
	ctx.r3.s64 = ctx.r11.s64 + -8568;
	// addi r31,r10,-8560
	ctx.r31.s64 = ctx.r10.s64 + -8560;
loc_835DE58C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a82ce8
	ctx.lr = 0x835DE594;
	sub_83A82CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82d20
	ctx.lr = 0x835DE5A0;
	sub_83A82D20(ctx, base);
	// addi r31,r26,4
	ctx.r31.s64 = ctx.r26.s64 + 4;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x835DE5B4;
	sub_831CE980(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835de5e8
	if (cr6.eq) goto loc_835DE5E8;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r26,148
	ctx.r10.s64 = ctx.r26.s64 + 148;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_835DE5D4:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835de5d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DE5D4;
	// stw r10,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r10.u32);
	// b 0x835de5ec
	goto loc_835DE5EC;
loc_835DE5E8:
	// stw r24,68(r26)
	PPC_STORE_U32(ctx.r26.u32 + 68, ctx.r24.u32);
loc_835DE5EC:
	// addi r30,r26,244
	ctx.r30.s64 = ctx.r26.s64 + 244;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835de1c0
	ctx.lr = 0x835DE600;
	sub_835DE1C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a82b40
	ctx.lr = 0x835DE610;
	sub_83A82B40(ctx, base);
	// ld r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 192);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x835de634
	if (cr6.eq) goto loc_835DE634;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83a94010
	ctx.lr = 0x835DE630;
	sub_83A94010(ctx, base);
	// stw r3,192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 192, ctx.r3.u32);
loc_835DE634:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835de644
	if (cr6.eq) goto loc_835DE644;
	// bl 0x83a81ad8
	ctx.lr = 0x835DE644;
	sub_83A81AD8(ctx, base);
loc_835DE644:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835DE65C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x835dacc8
	ctx.lr = 0x835DE660;
	sub_835DACC8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,204(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// bl 0x835dbd10
	ctx.lr = 0x835DE670;
	sub_835DBD10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e3ba8
	ctx.lr = 0x835DE678;
	sub_835E3BA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,244
	ctx.r3.s64 = ctx.r28.s64 + 244;
	// bl 0x83a95940
	ctx.lr = 0x835DE688;
	sub_83A95940(ctx, base);
	// stw r3,188(r26)
	PPC_STORE_U32(ctx.r26.u32 + 188, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x835de6b0
	if (cr6.lt) goto loc_835DE6B0;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// lwz r10,256(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_835DE6B0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r24,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE6C0"))) PPC_WEAK_FUNC(sub_835DE6C0);
PPC_FUNC_IMPL(__imp__sub_835DE6C0) {
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
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r10,18336
	ctx.r30.s64 = ctx.r10.s64 + 18336;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,18336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18336, ctx.r11.u32);
	// beq cr6,0x835de700
	if (cr6.eq) goto loc_835DE700;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r4,168(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// addi r3,r11,-9008
	ctx.r3.s64 = ctx.r11.s64 + -9008;
	// bl 0x83a81b40
	ctx.lr = 0x835DE700;
	sub_83A81B40(ctx, base);
loc_835DE700:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// beq cr6,0x835de720
	if (cr6.eq) goto loc_835DE720;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r4,232(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// bl 0x83a97958
	ctx.lr = 0x835DE720;
	sub_83A97958(ctx, base);
loc_835DE720:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x835de740
	if (cr6.eq) goto loc_835DE740;
	// lis r11,-31906
	ctx.r11.s64 = -2090991616;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// addi r3,r11,-8664
	ctx.r3.s64 = ctx.r11.s64 + -8664;
	// bl 0x83a81b80
	ctx.lr = 0x835DE740;
	sub_83A81B80(ctx, base);
loc_835DE740:
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x83a81bc0
	ctx.lr = 0x835DE74C;
	sub_83A81BC0(ctx, base);
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

__attribute__((alias("__imp__sub_835DE764"))) PPC_WEAK_FUNC(sub_835DE764);
PPC_FUNC_IMPL(__imp__sub_835DE764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE768"))) PPC_WEAK_FUNC(sub_835DE768);
PPC_FUNC_IMPL(__imp__sub_835DE768) {
	PPC_FUNC_PROLOGUE();
	// b 0x835e8628
	sub_835E8628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE76C"))) PPC_WEAK_FUNC(sub_835DE76C);
PPC_FUNC_IMPL(__imp__sub_835DE76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE770"))) PPC_WEAK_FUNC(sub_835DE770);
PPC_FUNC_IMPL(__imp__sub_835DE770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e8d98
	sub_835E8D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE780"))) PPC_WEAK_FUNC(sub_835DE780);
PPC_FUNC_IMPL(__imp__sub_835DE780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e85a0
	sub_835E85A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE78C"))) PPC_WEAK_FUNC(sub_835DE78C);
PPC_FUNC_IMPL(__imp__sub_835DE78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE790"))) PPC_WEAK_FUNC(sub_835DE790);
PPC_FUNC_IMPL(__imp__sub_835DE790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e8730
	sub_835E8730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE7A0"))) PPC_WEAK_FUNC(sub_835DE7A0);
PPC_FUNC_IMPL(__imp__sub_835DE7A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// addi r3,r10,-20380
	ctx.r3.s64 = ctx.r10.s64 + -20380;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x835e8f68
	sub_835E8F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE7BC"))) PPC_WEAK_FUNC(sub_835DE7BC);
PPC_FUNC_IMPL(__imp__sub_835DE7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE7C0"))) PPC_WEAK_FUNC(sub_835DE7C0);
PPC_FUNC_IMPL(__imp__sub_835DE7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e90a0
	sub_835E90A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE7D0"))) PPC_WEAK_FUNC(sub_835DE7D0);
PPC_FUNC_IMPL(__imp__sub_835DE7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e87c0
	sub_835E87C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE7E0"))) PPC_WEAK_FUNC(sub_835DE7E0);
PPC_FUNC_IMPL(__imp__sub_835DE7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e8858
	sub_835E8858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE7F4"))) PPC_WEAK_FUNC(sub_835DE7F4);
PPC_FUNC_IMPL(__imp__sub_835DE7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE7F8"))) PPC_WEAK_FUNC(sub_835DE7F8);
PPC_FUNC_IMPL(__imp__sub_835DE7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e8908
	sub_835E8908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE808"))) PPC_WEAK_FUNC(sub_835DE808);
PPC_FUNC_IMPL(__imp__sub_835DE808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20380
	ctx.r3.s64 = ctx.r11.s64 + -20380;
	// b 0x835e8990
	sub_835E8990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE818"))) PPC_WEAK_FUNC(sub_835DE818);
PPC_FUNC_IMPL(__imp__sub_835DE818) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-20380
	ctx.r3.s64 = ctx.r10.s64 + -20380;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x835e8a18
	sub_835E8A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DE834"))) PPC_WEAK_FUNC(sub_835DE834);
PPC_FUNC_IMPL(__imp__sub_835DE834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE838"))) PPC_WEAK_FUNC(sub_835DE838);
PPC_FUNC_IMPL(__imp__sub_835DE838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
loc_835DE858:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835de858
	if (!cr6.lt) goto loc_835DE858;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DE884"))) PPC_WEAK_FUNC(sub_835DE884);
PPC_FUNC_IMPL(__imp__sub_835DE884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE888"))) PPC_WEAK_FUNC(sub_835DE888);
PPC_FUNC_IMPL(__imp__sub_835DE888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
loc_835DE8A8:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835de8a8
	if (!cr6.lt) goto loc_835DE8A8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DE8D4"))) PPC_WEAK_FUNC(sub_835DE8D4);
PPC_FUNC_IMPL(__imp__sub_835DE8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DE8D8"))) PPC_WEAK_FUNC(sub_835DE8D8);
PPC_FUNC_IMPL(__imp__sub_835DE8D8) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835de92c
	if (cr6.eq) goto loc_835DE92C;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r11,r11,-20380
	ctx.r11.s64 = ctx.r11.s64 + -20380;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x835de888
	ctx.lr = 0x835DE90C;
	sub_835DE888(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// addme r6,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r6.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// sth r5,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
loc_835DE92C:
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

__attribute__((alias("__imp__sub_835DE940"))) PPC_WEAK_FUNC(sub_835DE940);
PPC_FUNC_IMPL(__imp__sub_835DE940) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835de994
	if (cr6.eq) goto loc_835DE994;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r11,r11,-20380
	ctx.r11.s64 = ctx.r11.s64 + -20380;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x835de838
	ctx.lr = 0x835DE974;
	sub_835DE838(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// addme r6,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r6.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// sth r5,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
loc_835DE994:
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

__attribute__((alias("__imp__sub_835DE9A8"))) PPC_WEAK_FUNC(sub_835DE9A8);
PPC_FUNC_IMPL(__imp__sub_835DE9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dea24
	if (cr6.eq) goto loc_835DEA24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
loc_835DE9B8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blt 0x835dea14
	if (cr0.lt) goto loc_835DEA14;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// ble cr6,0x835de9ec
	if (!cr6.gt) goto loc_835DE9EC;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x835dea14
	if (cr6.gt) goto loc_835DEA14;
loc_835DE9EC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x835dea04
	if (!cr6.lt) goto loc_835DEA04;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x835dea14
	if (cr6.lt) goto loc_835DEA14;
loc_835DEA04:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x835de9b8
	if (!cr0.eq) goto loc_835DE9B8;
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_835DEA14:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_835DEA24:
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DEA2C"))) PPC_WEAK_FUNC(sub_835DEA2C);
PPC_FUNC_IMPL(__imp__sub_835DEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DEA30"))) PPC_WEAK_FUNC(sub_835DEA30);
PPC_FUNC_IMPL(__imp__sub_835DEA30) {
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
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r9,r3,1392
	ctx.r9.s64 = ctx.r3.s64 + 1392;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21716
	ctx.r6.s64 = ctx.r7.s64 + 21716;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r11.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,1392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1392, ctx.r11.u32);
	// std r11,1400(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1400, ctx.r11.u64);
	// stw r11,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r11.u32);
	// stb r11,1412(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1412, ctx.r11.u8);
	// sth r4,1414(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1414, ctx.r4.u16);
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
	// stw r7,1420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1420, ctx.r7.u32);
	// stw r11,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r11.u32);
	// stw r11,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// stw r7,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r7.u32);
	// stw r11,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r11.u32);
loc_835DEADC:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835deadc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DEADC;
	// sth r11,1504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1504, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835ea0a0
	ctx.lr = 0x835DEAF0;
	sub_835EA0A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_835DEB08"))) PPC_WEAK_FUNC(sub_835DEB08);
PPC_FUNC_IMPL(__imp__sub_835DEB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lfs f13,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r8,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r8.u8);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// std r11,2320(r3)
	PPC_STORE_U64(ctx.r3.u32 + 2320, ctx.r11.u64);
	// stfs f0,172(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// stw r11,2472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2472, ctx.r11.u32);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// stw r11,2508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2508, ctx.r11.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r11,2576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2576, ctx.r11.u32);
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// stw r11,2580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2580, ctx.r11.u32);
	// stfs f0,188(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stw r8,2712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2712, ctx.r8.u32);
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// stb r11,2716(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2716, ctx.r11.u8);
	// stb r11,2717(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2717, ctx.r11.u8);
	// addi r10,r3,104
	ctx.r10.s64 = ctx.r3.s64 + 104;
	// stw r11,2752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2752, ctx.r11.u32);
	// addi r10,r3,200
	ctx.r10.s64 = ctx.r3.s64 + 200;
	// stw r11,2756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2756, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_835DEB88:
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835deb88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DEB88;
	// li r8,582
	ctx.r8.s64 = 582;
loc_835DEB98:
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835DEBA4:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x835deba4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DEBA4;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// cmpwi cr6,r8,618
	cr6.compare<int32_t>(ctx.r8.s32, 618, xer);
	// blt cr6,0x835deb98
	if (cr6.lt) goto loc_835DEB98;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r3,2476
	ctx.r10.s64 = ctx.r3.s64 + 2476;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835DEBD4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835debd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DEBD4;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r3,2732
	ctx.r10.s64 = ctx.r3.s64 + 2732;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_835DEBF0:
	// sth r11,-14(r10)
	PPC_STORE_U16(ctx.r10.u32 + -14, ctx.r11.u16);
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x835debf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DEBF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DEC00"))) PPC_WEAK_FUNC(sub_835DEC00);
PPC_FUNC_IMPL(__imp__sub_835DEC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DEC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835dec80
	if (cr6.eq) goto loc_835DEC80;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x835e9110
	ctx.lr = 0x835DEC68;
	sub_835E9110(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dec7c
	if (!cr6.eq) goto loc_835DEC7C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r29,r11,r10
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
loc_835DEC7C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_835DEC80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DEC88"))) PPC_WEAK_FUNC(sub_835DEC88);
PPC_FUNC_IMPL(__imp__sub_835DEC88) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835dede4
	if (cr6.eq) goto loc_835DEDE4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_835DECB8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835decb8
	if (!cr6.eq) goto loc_835DECB8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bgt cr6,0x835dede4
	if (cr6.gt) goto loc_835DEDE4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x835e4298
	ctx.lr = 0x835DECE8;
	sub_835E4298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835dede4
	if (!cr6.eq) goto loc_835DEDE4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835dede4
	if (cr6.eq) goto loc_835DEDE4;
	// lbz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// li r11,4
	ctx.r11.s64 = 4;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lhz r5,138(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 138);
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r11,r31,26
	ctx.r11.s64 = ctx.r31.s64 + 26;
	// sth r5,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r5.u16);
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r7,r31,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
loc_835DED44:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// sth r5,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r5.u16);
	// beq cr6,0x835ded60
	if (cr6.eq) goto loc_835DED60;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_835DED60:
	// lhzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// beq cr6,0x835ded7c
	if (cr6.eq) goto loc_835DED7C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_835DED7C:
	// lhzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// beq cr6,0x835ded98
	if (cr6.eq) goto loc_835DED98;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_835DED98:
	// lhzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,65535
	cr6.compare<uint32_t>(ctx.r5.u32, 65535, xer);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// beq cr6,0x835dedb4
	if (cr6.eq) goto loc_835DEDB4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_835DEDB4:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x835ded44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DED44;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// sth r10,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r10.u16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// sth r7,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r7.u16);
loc_835DEDE4:
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

__attribute__((alias("__imp__sub_835DEDFC"))) PPC_WEAK_FUNC(sub_835DEDFC);
PPC_FUNC_IMPL(__imp__sub_835DEDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DEE00"))) PPC_WEAK_FUNC(sub_835DEE00);
PPC_FUNC_IMPL(__imp__sub_835DEE00) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835dee20
	if (cr6.eq) goto loc_835DEE20;
	// bl 0x835de8d8
	ctx.lr = 0x835DEE20;
	sub_835DE8D8(ctx, base);
loc_835DEE20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835dee30
	if (cr6.eq) goto loc_835DEE30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835de940
	ctx.lr = 0x835DEE30;
	sub_835DE940(ctx, base);
loc_835DEE30:
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

__attribute__((alias("__imp__sub_835DEE48"))) PPC_WEAK_FUNC(sub_835DEE48);
PPC_FUNC_IMPL(__imp__sub_835DEE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DEEA4"))) PPC_WEAK_FUNC(sub_835DEEA4);
PPC_FUNC_IMPL(__imp__sub_835DEEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DEEA8"))) PPC_WEAK_FUNC(sub_835DEEA8);
PPC_FUNC_IMPL(__imp__sub_835DEEA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// ori r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 | 32;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DEF0C"))) PPC_WEAK_FUNC(sub_835DEF0C);
PPC_FUNC_IMPL(__imp__sub_835DEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DEF10"))) PPC_WEAK_FUNC(sub_835DEF10);
PPC_FUNC_IMPL(__imp__sub_835DEF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// ori r6,r7,256
	ctx.r6.u64 = ctx.r7.u64 | 256;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r5,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DEF74"))) PPC_WEAK_FUNC(sub_835DEF74);
PPC_FUNC_IMPL(__imp__sub_835DEF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DEF78"))) PPC_WEAK_FUNC(sub_835DEF78);
PPC_FUNC_IMPL(__imp__sub_835DEF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// oris r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 65536;
	// stfs f13,124(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f12,128(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DEFE4"))) PPC_WEAK_FUNC(sub_835DEFE4);
PPC_FUNC_IMPL(__imp__sub_835DEFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DEFE8"))) PPC_WEAK_FUNC(sub_835DEFE8);
PPC_FUNC_IMPL(__imp__sub_835DEFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// oris r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 524288;
	// stfs f13,156(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stfs f12,160(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF054"))) PPC_WEAK_FUNC(sub_835DF054);
PPC_FUNC_IMPL(__imp__sub_835DF054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF058"))) PPC_WEAK_FUNC(sub_835DF058);
PPC_FUNC_IMPL(__imp__sub_835DF058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r8,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r8.u8);
	// oris r6,r7,16384
	ctx.r6.u64 = ctx.r7.u64 | 1073741824;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF0B4"))) PPC_WEAK_FUNC(sub_835DF0B4);
PPC_FUNC_IMPL(__imp__sub_835DF0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF0B8"))) PPC_WEAK_FUNC(sub_835DF0B8);
PPC_FUNC_IMPL(__imp__sub_835DF0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DF0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835df194
	if (cr6.eq) goto loc_835DF194;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x835df194
	if (cr6.lt) goto loc_835DF194;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lhz r11,18368(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18368);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x835df194
	if (!cr6.lt) goto loc_835DF194;
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r9,r10,2760
	ctx.r9.s64 = ctx.r10.s64 * 2760;
	// lhz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r10,18388(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18388);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835df130
	if (cr6.eq) goto loc_835DF130;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x835daf60
	ctx.lr = 0x835DF124;
	sub_835DAF60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835df130
	if (!cr6.eq) goto loc_835DF130;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_835DF130:
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(ctx.r31.u32, 256, xer);
	// bge cr6,0x835df190
	if (!cr6.lt) goto loc_835DF190;
	// rlwinm r11,r31,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// addi r8,r11,59
	ctx.r8.s64 = ctx.r11.s64 + 59;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r6,r7,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 34;
	// or r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stfs f0,268(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 268, temp.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// divwu r6,r7,r9
	ctx.r6.u32 = PPCDivide(ctx.r7.u32, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r6,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835DF190:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_835DF194:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DF19C"))) PPC_WEAK_FUNC(sub_835DF19C);
PPC_FUNC_IMPL(__imp__sub_835DF19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF1A0"))) PPC_WEAK_FUNC(sub_835DF1A0);
PPC_FUNC_IMPL(__imp__sub_835DF1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x835df230
	if (cr6.lt) goto loc_835DF230;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bge cr6,0x835df230
	if (!cr6.lt) goto loc_835DF230;
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mulli r9,r11,2760
	ctx.r9.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18388);
	// addi r7,r10,331
	ctx.r7.s64 = ctx.r10.s64 + 331;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// slw r8,r5,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,2652(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2652, ctx.r7.u32);
	// lwz r6,2580(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r5,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r5.u32);
	// blr 
	return;
loc_835DF230:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF238"))) PPC_WEAK_FUNC(sub_835DF238);
PPC_FUNC_IMPL(__imp__sub_835DF238) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r30,r30,21
	ctx.r30.u64 = ctx.r30.u64 | 21;
	// beq cr6,0x835df354
	if (cr6.eq) goto loc_835DF354;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835df354
	if (cr6.lt) goto loc_835DF354;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lhz r11,18368(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18368);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bge cr6,0x835df354
	if (!cr6.lt) goto loc_835DF354;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r9,r3,2760
	ctx.r9.s64 = ctx.r3.s64 * 2760;
	// lwz r10,18388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18388);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835df354
	if (cr6.eq) goto loc_835DF354;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x835dae80
	ctx.lr = 0x835DF2A0;
	sub_835DAE80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835df354
	if (!cr6.eq) goto loc_835DF354;
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x835df354
	if (cr6.eq) goto loc_835DF354;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,2718
	ctx.r11.s64 = ctx.r31.s64 + 2718;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 65535;
loc_835DF2D8:
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bne cr6,0x835df2f4
	if (!cr6.eq) goto loc_835DF2F4;
	// sth r6,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r6.u16);
	// lbz r10,2717(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2717);
	// andc r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stb r3,2717(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2717, ctx.r3.u8);
loc_835DF2F4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x835df310
	if (cr6.eq) goto loc_835DF310;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x835df314
	if (!cr6.lt) goto loc_835DF314;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x835df314
	if (!cr6.eq) goto loc_835DF314;
loc_835DF310:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_835DF314:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bdnz 0x835df2d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DF2D8;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x835df354
	if (cr6.lt) goto loc_835DF354;
	// addi r11,r7,1359
	ctx.r11.s64 = ctx.r7.s64 + 1359;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r4.u16);
	// slw r8,r10,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r7,2716(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2716);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,2716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2716, ctx.r6.u8);
	// b 0x835df358
	goto loc_835DF358;
loc_835DF354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835DF358:
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

__attribute__((alias("__imp__sub_835DF370"))) PPC_WEAK_FUNC(sub_835DF370);
PPC_FUNC_IMPL(__imp__sub_835DF370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lhz r10,18368(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18368);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mulli r9,r11,1352
	ctx.r9.s64 = ctx.r11.s64 * 1352;
	// lwz r11,18400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18400);
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,18352
	ctx.r6.s64 = ctx.r8.s64 + 18352;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF3CC"))) PPC_WEAK_FUNC(sub_835DF3CC);
PPC_FUNC_IMPL(__imp__sub_835DF3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF3D0"))) PPC_WEAK_FUNC(sub_835DF3D0);
PPC_FUNC_IMPL(__imp__sub_835DF3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DF3D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// li r30,292
	ctx.r30.s64 = 292;
	// mulli r10,r11,2824
	ctx.r10.s64 = ctx.r11.s64 * 2824;
	// lwz r11,18380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18380);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,1624
	ctx.r31.s64 = ctx.r11.s64 + 1624;
loc_835DF3FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835df410
	if (cr6.eq) goto loc_835DF410;
	// bl 0x835de7c0
	ctx.lr = 0x835DF40C;
	sub_835DE7C0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_835DF410:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x835df3fc
	if (!cr0.eq) goto loc_835DF3FC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DF424"))) PPC_WEAK_FUNC(sub_835DF424);
PPC_FUNC_IMPL(__imp__sub_835DF424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF428"))) PPC_WEAK_FUNC(sub_835DF428);
PPC_FUNC_IMPL(__imp__sub_835DF428) {
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
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// li r30,292
	ctx.r30.s64 = 292;
	// mulli r10,r11,2824
	ctx.r10.s64 = ctx.r11.s64 * 2824;
	// lwz r11,18380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18380);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,1624
	ctx.r31.s64 = ctx.r11.s64 + 1624;
loc_835DF458:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835df468
	if (cr6.eq) goto loc_835DF468;
	// bl 0x835de7f8
	ctx.lr = 0x835DF468;
	sub_835DE7F8(ctx, base);
loc_835DF468:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x835df458
	if (!cr0.eq) goto loc_835DF458;
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

__attribute__((alias("__imp__sub_835DF48C"))) PPC_WEAK_FUNC(sub_835DF48C);
PPC_FUNC_IMPL(__imp__sub_835DF48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF490"))) PPC_WEAK_FUNC(sub_835DF490);
PPC_FUNC_IMPL(__imp__sub_835DF490) {
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
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// li r30,292
	ctx.r30.s64 = 292;
	// mulli r10,r11,2824
	ctx.r10.s64 = ctx.r11.s64 * 2824;
	// lwz r11,18380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18380);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,1624
	ctx.r31.s64 = ctx.r11.s64 + 1624;
loc_835DF4C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835df4d0
	if (cr6.eq) goto loc_835DF4D0;
	// bl 0x835de808
	ctx.lr = 0x835DF4D0;
	sub_835DE808(ctx, base);
loc_835DF4D0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x835df4c0
	if (!cr0.eq) goto loc_835DF4C0;
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

__attribute__((alias("__imp__sub_835DF4F4"))) PPC_WEAK_FUNC(sub_835DF4F4);
PPC_FUNC_IMPL(__imp__sub_835DF4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF4F8"))) PPC_WEAK_FUNC(sub_835DF4F8);
PPC_FUNC_IMPL(__imp__sub_835DF4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835DF500;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r7,r4,406
	ctx.r7.s64 = ctx.r4.s64 + 406;
	// mulli r10,r10,2824
	ctx.r10.s64 = ctx.r10.s64 * 2824;
	// lwz r11,18380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18380);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r30,r7,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x835df578
	if (!cr6.eq) goto loc_835DF578;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x835de7a0
	ctx.lr = 0x835DF55C;
	sub_835DE7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835df578
	if (!cr6.eq) goto loc_835DF578;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7d0
	ctx.lr = 0x835DF570;
	sub_835DE7D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_835DF578:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x835de7e0
	ctx.lr = 0x835DF588;
	sub_835DE7E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DF5A4"))) PPC_WEAK_FUNC(sub_835DF5A4);
PPC_FUNC_IMPL(__imp__sub_835DF5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF5A8"))) PPC_WEAK_FUNC(sub_835DF5A8);
PPC_FUNC_IMPL(__imp__sub_835DF5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
loc_835DF5C8:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835df5c8
	if (!cr6.lt) goto loc_835DF5C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF5F4"))) PPC_WEAK_FUNC(sub_835DF5F4);
PPC_FUNC_IMPL(__imp__sub_835DF5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF5F8"))) PPC_WEAK_FUNC(sub_835DF5F8);
PPC_FUNC_IMPL(__imp__sub_835DF5F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
loc_835DF618:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835df618
	if (!cr6.lt) goto loc_835DF618;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF644"))) PPC_WEAK_FUNC(sub_835DF644);
PPC_FUNC_IMPL(__imp__sub_835DF644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF648"))) PPC_WEAK_FUNC(sub_835DF648);
PPC_FUNC_IMPL(__imp__sub_835DF648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f12,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x835df668
	if (cr6.gt) goto loc_835DF668;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x835df694
	goto loc_835DF694;
loc_835DF668:
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// stfs f8,16(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_835DF694:
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17400);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lfs f13,17396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DF6CC"))) PPC_WEAK_FUNC(sub_835DF6CC);
PPC_FUNC_IMPL(__imp__sub_835DF6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF6D0"))) PPC_WEAK_FUNC(sub_835DF6D0);
PPC_FUNC_IMPL(__imp__sub_835DF6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,256
	ctx.r10.s64 = 256;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// addi r10,r3,264
	ctx.r10.s64 = ctx.r3.s64 + 264;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
loc_835DF78C:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835df78c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DF78C;
	// stfs f0,2512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2512, temp.u32);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// stfs f0,2520(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2520, temp.u32);
	// stw r11,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r11.u32);
	// stfs f0,2528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2528, temp.u32);
	// stw r11,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r11.u32);
	// stfs f0,2536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2536, temp.u32);
	// stw r11,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r11.u32);
	// stfs f0,2544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2544, temp.u32);
	// stw r11,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// stfs f0,2552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2552, temp.u32);
	// stw r11,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// stfs f0,2560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// stw r11,2564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2564, ctx.r11.u32);
	// stfs f0,2568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2568, temp.u32);
	// stw r11,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,2584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2584, temp.u32);
	// stfs f0,2592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2592, temp.u32);
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// stfs f0,2600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2600, temp.u32);
	// stw r11,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r11.u32);
	// stfs f0,2608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2608, temp.u32);
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// stfs f0,2616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2616, temp.u32);
	// stw r11,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r11.u32);
	// stfs f0,2624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2624, temp.u32);
	// stw r11,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r11.u32);
	// stfs f0,2632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2632, temp.u32);
	// stw r11,2628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2628, ctx.r11.u32);
	// stfs f0,2640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2640, temp.u32);
	// stw r11,2636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2636, ctx.r11.u32);
	// stw r11,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r11.u32);
	// stfs f0,2648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2648, temp.u32);
	// stfs f0,2656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// stfs f0,2664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2664, temp.u32);
	// stw r11,2660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2660, ctx.r11.u32);
	// stfs f0,2672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2672, temp.u32);
	// stw r11,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r11.u32);
	// stfs f0,2680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2680, temp.u32);
	// stw r11,2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2676, ctx.r11.u32);
	// stfs f0,2688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2688, temp.u32);
	// stw r11,2684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2684, ctx.r11.u32);
	// stfs f0,2696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2696, temp.u32);
	// stw r11,2692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2692, ctx.r11.u32);
	// stfs f0,2704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2704, temp.u32);
	// stw r11,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r11.u32);
	// stw r11,2708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2708, ctx.r11.u32);
	// bl 0x835deb08
	ctx.lr = 0x835DF860;
	sub_835DEB08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_835DF878"))) PPC_WEAK_FUNC(sub_835DF878);
PPC_FUNC_IMPL(__imp__sub_835DF878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r30,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r30.u16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// bl 0x835dea30
	ctx.lr = 0x835DF8BC;
	sub_835DEA30(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,292
	ctx.r11.s64 = 292;
	// std r30,1560(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1560, ctx.r30.u64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// addi r10,r31,1624
	ctx.r10.s64 = ctx.r31.s64 + 1624;
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// addi r7,r8,21716
	ctx.r7.s64 = ctx.r8.s64 + 21716;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// stw r7,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r7.u32);
	// stfs f0,1588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stfs f0,1592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// stfs f0,1608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stfs f0,1612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1612, temp.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_835DF918:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835df918
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DF918;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,2792
	ctx.r11.s64 = ctx.r31.s64 + 2792;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835DF930:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835df930
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DF930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_835DF954"))) PPC_WEAK_FUNC(sub_835DF954);
PPC_FUNC_IMPL(__imp__sub_835DF954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DF958"))) PPC_WEAK_FUNC(sub_835DF958);
PPC_FUNC_IMPL(__imp__sub_835DF958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r10,21
	ctx.r3.u64 = ctx.r10.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mulli r10,r8,2824
	ctx.r10.s64 = ctx.r8.s64 * 2824;
	// addi r7,r10,31
	ctx.r7.s64 = ctx.r10.s64 + 31;
	// rotlwi r9,r8,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// srawi r5,r7,5
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 5;
	// addi r6,r9,31
	ctx.r6.s64 = ctx.r9.s64 + 31;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r7,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 5;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ble cr6,0x835df9b4
	if (!cr6.gt) goto loc_835DF9B4;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_835DF9B4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x835df9d0
	if (!cr6.gt) goto loc_835DF9D0;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// srawi r9,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_835DF9D0:
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// addi r9,r10,31
	ctx.r9.s64 = ctx.r10.s64 + 31;
	// mulli r10,r11,1352
	ctx.r10.s64 = ctx.r11.s64 * 1352;
	// srawi r7,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 5;
	// addi r6,r10,31
	ctx.r6.s64 = ctx.r10.s64 + 31;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r7,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 5;
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// addi r5,r9,31
	ctx.r5.s64 = ctx.r9.s64 + 31;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r9,r5,5
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 5;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835DFA28"))) PPC_WEAK_FUNC(sub_835DFA28);
PPC_FUNC_IMPL(__imp__sub_835DFA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835DFA30;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpdi cr6,r4,-1
	cr6.compare<int64_t>(ctx.r4.s64, -1, xer);
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// bne cr6,0x835dfacc
	if (!cr6.eq) goto loc_835DFACC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,18404
	ctx.r30.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x835dfbf4
	if (cr6.lt) goto loc_835DFBF4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_835DFA68:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x835DFA7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835dfa88
	if (cr6.eq) goto loc_835DFA88;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_835DFA88:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x835dfab4
	if (cr6.lt) goto loc_835DFAB4;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// bge cr6,0x835dfab4
	if (!cr6.lt) goto loc_835DFAB4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_835DFAB4:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x835dfa68
	if (!cr6.lt) goto loc_835DFA68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835DFACC:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r4,r12
	ctx.r11.u64 = ctx.r4.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x835dfb40
	if (cr6.eq) goto loc_835DFB40;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,18404
	ctx.r10.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x835dfbf4
	if (cr6.lt) goto loc_835DFBF4;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_835DFAFC:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r4,r8
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, xer);
	// beq cr6,0x835dfb20
	if (cr6.eq) goto loc_835DFB20;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835dfafc
	if (!cr6.lt) goto loc_835DFAFC;
loc_835DFB20:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x835dfbf4
	if (cr6.lt) goto loc_835DFBF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835DFB38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835DFB40:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r4,r12
	ctx.r11.u64 = ctx.r4.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x835dfbf4
	if (cr6.eq) goto loc_835DFBF4;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// rldicl r10,r4,48,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 48) & 0xFFFFFFFFFFFF;
	// addi r30,r11,18404
	ctx.r30.s64 = ctx.r11.s64 + 18404;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r27,r4,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x835dfbf4
	if (cr6.lt) goto loc_835DFBF4;
	// extsh r28,r10
	ctx.r28.s64 = ctx.r10.s16;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
loc_835DFB80:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// lwz r10,18384(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18384);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, xer);
	// bne cr6,0x835dfbbc
	if (!cr6.eq) goto loc_835DFBBC;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x835dfbbc
	if (!cr6.eq) goto loc_835DFBBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x835DFBBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835DFBBC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x835dfbe8
	if (cr6.lt) goto loc_835DFBE8;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x835dfbe8
	if (!cr6.lt) goto loc_835DFBE8;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_835DFBE8:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x835dfb80
	if (!cr6.lt) goto loc_835DFB80;
loc_835DFBF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835DFBFC"))) PPC_WEAK_FUNC(sub_835DFBFC);
PPC_FUNC_IMPL(__imp__sub_835DFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835DFC00"))) PPC_WEAK_FUNC(sub_835DFC00);
PPC_FUNC_IMPL(__imp__sub_835DFC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835DFC08;
	__savegprlr_24(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r26,r11,18404
	ctx.r26.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x835e067c
	if (cr6.lt) goto loc_835E067C;
	// lis r28,-31744
	ctx.r28.s64 = -2080374784;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-31744
	ctx.r27.s64 = -2080374784;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_835DFC30:
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lwz r11,18388(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18388);
	// lwz r9,18392(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18392);
	// mulli r10,r29,2760
	ctx.r10.s64 = ctx.r29.s64 * 2760;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835dfed8
	if (cr6.eq) goto loc_835DFED8;
	// rlwinm r9,r6,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfc7c
	if (cr6.eq) goto loc_835DFC7C;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
loc_835DFC7C:
	// rlwinm r9,r6,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfc98
	if (cr6.eq) goto loc_835DFC98;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
loc_835DFC98:
	// rlwinm r9,r6,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfcb4
	if (cr6.eq) goto loc_835DFCB4;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
loc_835DFCB4:
	// rlwinm r9,r6,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfcd0
	if (cr6.eq) goto loc_835DFCD0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r8,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
loc_835DFCD0:
	// rlwinm r9,r6,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfcec
	if (cr6.eq) goto loc_835DFCEC;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r8,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
loc_835DFCEC:
	// rlwinm r9,r6,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfd08
	if (cr6.eq) goto loc_835DFD08;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r8,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r8.u32);
loc_835DFD08:
	// rlwinm r9,r6,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfd24
	if (cr6.eq) goto loc_835DFD24;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r8,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r8.u32);
loc_835DFD24:
	// rlwinm r9,r6,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfd4c
	if (cr6.eq) goto loc_835DFD4C;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// addi r8,r10,68
	ctx.r8.s64 = ctx.r10.s64 + 68;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_835DFD40:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x835dfd40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DFD40;
loc_835DFD4C:
	// rlwinm r9,r6,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfd80
	if (cr6.eq) goto loc_835DFD80;
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r10,104
	ctx.r9.s64 = ctx.r10.s64 + 104;
	// stw r8,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r8.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r7.u32);
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r5,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r5.u32);
	// ld r4,104(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// std r4,104(r10)
	PPC_STORE_U64(ctx.r10.u32 + 104, ctx.r4.u64);
	// stw r9,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r9.u32);
loc_835DFD80:
	// rlwinm r9,r6,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfdb4
	if (cr6.eq) goto loc_835DFDB4;
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r8,r11,120
	ctx.r8.s64 = ctx.r11.s64 + 120;
	// addi r7,r10,120
	ctx.r7.s64 = ctx.r10.s64 + 120;
	// stw r9,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r9.u32);
	// lwz r5,124(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r5,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r5.u32);
	// lwz r4,128(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// stw r4,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r4.u32);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// stw r3,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r3.u32);
loc_835DFDB4:
	// rlwinm r9,r6,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfde8
	if (cr6.eq) goto loc_835DFDE8;
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// addi r8,r11,136
	ctx.r8.s64 = ctx.r11.s64 + 136;
	// addi r7,r10,136
	ctx.r7.s64 = ctx.r10.s64 + 136;
	// stw r9,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r9.u32);
	// lwz r5,140(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// stw r5,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r5.u32);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r4,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r4.u32);
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r3,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r3.u32);
loc_835DFDE8:
	// rlwinm r9,r6,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfe1c
	if (cr6.eq) goto loc_835DFE1C;
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// addi r8,r11,152
	ctx.r8.s64 = ctx.r11.s64 + 152;
	// addi r7,r10,152
	ctx.r7.s64 = ctx.r10.s64 + 152;
	// stw r9,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r9.u32);
	// lwz r5,156(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r5,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r5.u32);
	// lwz r4,160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r4,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r4.u32);
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// stw r3,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r3.u32);
loc_835DFE1C:
	// rlwinm r9,r6,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfe40
	if (cr6.eq) goto loc_835DFE40;
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 168, temp.u32);
	// lfs f13,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 172, temp.u32);
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 176, temp.u32);
loc_835DFE40:
	// rlwinm r9,r6,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfe5c
	if (cr6.eq) goto loc_835DFE5C;
	// lfs f0,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// lfs f13,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,184(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 184, temp.u32);
loc_835DFE5C:
	// rlwinm r9,r6,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfe70
	if (cr6.eq) goto loc_835DFE70;
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 188, temp.u32);
loc_835DFE70:
	// rlwinm r9,r6,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfe84
	if (cr6.eq) goto loc_835DFE84;
	// lfs f0,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 192, temp.u32);
loc_835DFE84:
	// rlwinm r9,r6,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfea0
	if (cr6.eq) goto loc_835DFEA0;
	// lwz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r9,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r9.u32);
	// lwz r8,200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r8,200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 200, ctx.r8.u32);
loc_835DFEA0:
	// rlwinm r9,r6,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfeb4
	if (cr6.eq) goto loc_835DFEB4;
	// lbz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 116);
	// stb r9,116(r10)
	PPC_STORE_U8(ctx.r10.u32 + 116, ctx.r9.u8);
loc_835DFEB4:
	// rlwinm r9,r6,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dfec8
	if (cr6.eq) goto loc_835DFEC8;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
loc_835DFEC8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_835DFED8:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r11,204
	ctx.r9.s64 = ctx.r11.s64 + 204;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_835DFEE8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835dff04
	if (cr6.eq) goto loc_835DFF04;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
loc_835DFF04:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x835dfee8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DFEE8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
loc_835DFF14:
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835dff74
	if (cr6.eq) goto loc_835DFF74;
	// lwzx r9,r3,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stwx r7,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_835DFF38:
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835dff64
	if (cr6.eq) goto loc_835DFF64;
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r24,268(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 268);
	// stw r24,268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 268, ctx.r24.u32);
	// lwz r7,272(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 272);
	// stw r7,272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 272, ctx.r7.u32);
loc_835DFF64:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x835dff38
	if (!cr0.eq) goto loc_835DFF38;
loc_835DFF74:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r5,64
	cr6.compare<uint32_t>(ctx.r5.u32, 64, xer);
	// blt cr6,0x835dff14
	if (cr6.lt) goto loc_835DFF14;
	// ld r5,2320(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// li r7,6
	ctx.r7.s64 = 6;
	// ld r6,2320(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 2320);
	// addi r8,r11,2336
	ctx.r8.s64 = ctx.r11.s64 + 2336;
	// addi r9,r10,2328
	ctx.r9.s64 = ctx.r10.s64 + 2328;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// std r4,2320(r10)
	PPC_STORE_U64(ctx.r10.u32 + 2320, ctx.r4.u64);
loc_835DFFA8:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// clrldi r6,r7,63
	ctx.r6.u64 = ctx.r7.u64 & 0x1;
	// cmpldi cr6,r6,0
	cr6.compare<uint64_t>(ctx.r6.u64, 0, xer);
	// beq cr6,0x835dffc0
	if (cr6.eq) goto loc_835DFFC0;
	// lfsx f0,r5,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_835DFFC0:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// rldicl r6,r7,63,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r4,r6,63
	ctx.r4.u64 = ctx.r6.u64 & 0x1;
	// std r6,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r6.u64);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x835dffe0
	if (cr6.eq) goto loc_835DFFE0;
	// lfs f0,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
loc_835DFFE0:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// rldicl r6,r7,63,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r4,r6,63
	ctx.r4.u64 = ctx.r6.u64 & 0x1;
	// std r6,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r6.u64);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x835e0000
	if (cr6.eq) goto loc_835E0000;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_835E0000:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// rldicl r6,r7,63,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r4,r6,63
	ctx.r4.u64 = ctx.r6.u64 & 0x1;
	// std r6,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r6.u64);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x835e0020
	if (cr6.eq) goto loc_835E0020;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
loc_835E0020:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// rldicl r6,r7,63,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r4,r6,63
	ctx.r4.u64 = ctx.r6.u64 & 0x1;
	// std r6,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r6.u64);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x835e0040
	if (cr6.eq) goto loc_835E0040;
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
loc_835E0040:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// rldicl r6,r7,63,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// clrldi r4,r6,63
	ctx.r4.u64 = ctx.r6.u64 & 0x1;
	// std r6,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r6.u64);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x835e0060
	if (cr6.eq) goto loc_835E0060;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
loc_835E0060:
	// ld r7,2320(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2320);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// rldicl r6,r7,63,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// std r6,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r6.u64);
	// bdnz 0x835dffa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835DFFA8;
	// lwz r9,2472(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2472);
	// std r30,2320(r11)
	PPC_STORE_U64(ctx.r11.u32 + 2320, ctx.r30.u64);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835e00c0
	if (cr6.eq) goto loc_835E00C0;
	// stw r9,2472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2472, ctx.r9.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r9,2472(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2472);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x835e00bc
	if (!cr6.gt) goto loc_835E00BC;
	// addi r9,r10,2476
	ctx.r9.s64 = ctx.r10.s64 + 2476;
loc_835E00A0:
	// lwzx r7,r9,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r6,2472(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2472);
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// blt cr6,0x835e00a0
	if (cr6.lt) goto loc_835E00A0;
loc_835E00BC:
	// stw r30,2472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2472, ctx.r30.u32);
loc_835E00C0:
	// lwz r9,2508(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2508);
	// lwz r8,2508(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,2508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2508, ctx.r7.u32);
	// lwz r6,2508(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835e0224
	if (cr6.eq) goto loc_835E0224;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e00fc
	if (cr6.eq) goto loc_835E00FC;
	// lwz r9,2512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2512);
	// stw r9,2512(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2512, ctx.r9.u32);
	// lwz r8,2516(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2516);
	// stw r8,2516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2516, ctx.r8.u32);
loc_835E00FC:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e0124
	if (cr6.eq) goto loc_835E0124;
	// lwz r9,2520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2520);
	// stw r9,2520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2520, ctx.r9.u32);
	// lwz r8,2524(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2524);
	// stw r8,2524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2524, ctx.r8.u32);
loc_835E0124:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e014c
	if (cr6.eq) goto loc_835E014C;
	// lwz r9,2528(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2528);
	// stw r9,2528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2528, ctx.r9.u32);
	// lwz r8,2532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2532);
	// stw r8,2532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2532, ctx.r8.u32);
loc_835E014C:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e0174
	if (cr6.eq) goto loc_835E0174;
	// lwz r9,2536(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2536);
	// stw r9,2536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2536, ctx.r9.u32);
	// lwz r8,2540(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2540);
	// stw r8,2540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2540, ctx.r8.u32);
loc_835E0174:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e019c
	if (cr6.eq) goto loc_835E019C;
	// lwz r9,2544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2544);
	// stw r9,2544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2544, ctx.r9.u32);
	// lwz r8,2548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// stw r8,2548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2548, ctx.r8.u32);
loc_835E019C:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e01c4
	if (cr6.eq) goto loc_835E01C4;
	// lwz r9,2552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2552);
	// stw r9,2552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2552, ctx.r9.u32);
	// lwz r8,2556(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2556);
	// stw r8,2556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2556, ctx.r8.u32);
loc_835E01C4:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e01ec
	if (cr6.eq) goto loc_835E01EC;
	// lwz r9,2560(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2560);
	// stw r9,2560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2560, ctx.r9.u32);
	// lwz r8,2564(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2564);
	// stw r8,2564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2564, ctx.r8.u32);
loc_835E01EC:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e0214
	if (cr6.eq) goto loc_835E0214;
	// lwz r9,2568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2568);
	// stw r9,2568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2568, ctx.r9.u32);
	// lwz r8,2572(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2572);
	// stw r8,2572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2572, ctx.r8.u32);
loc_835E0214:
	// lwz r9,2508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2508);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r8.u32);
	// stw r30,2508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2508, ctx.r30.u32);
loc_835E0224:
	// lwz r9,2576(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2576);
	// lwz r8,2576(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,2576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2576, ctx.r7.u32);
	// lwz r6,2576(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835e0368
	if (cr6.eq) goto loc_835E0368;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e025c
	if (cr6.eq) goto loc_835E025C;
	// lwz r9,2584(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	// stw r9,2584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2584, ctx.r9.u32);
	// lwz r8,2588(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2588);
	// stw r8,2588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2588, ctx.r8.u32);
loc_835E025C:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0280
	if (cr6.eq) goto loc_835E0280;
	// lwz r9,2592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2592);
	// stw r9,2592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2592, ctx.r9.u32);
	// lwz r8,2596(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// stw r8,2596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2596, ctx.r8.u32);
loc_835E0280:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e02a4
	if (cr6.eq) goto loc_835E02A4;
	// lwz r9,2600(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// stw r9,2600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2600, ctx.r9.u32);
	// lwz r8,2604(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2604);
	// stw r8,2604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2604, ctx.r8.u32);
loc_835E02A4:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e02c8
	if (cr6.eq) goto loc_835E02C8;
	// lwz r9,2608(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2608);
	// stw r9,2608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2608, ctx.r9.u32);
	// lwz r8,2612(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2612);
	// stw r8,2612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2612, ctx.r8.u32);
loc_835E02C8:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e02ec
	if (cr6.eq) goto loc_835E02EC;
	// lwz r9,2616(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2616);
	// stw r9,2616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2616, ctx.r9.u32);
	// lwz r8,2620(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2620);
	// stw r8,2620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2620, ctx.r8.u32);
loc_835E02EC:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0310
	if (cr6.eq) goto loc_835E0310;
	// lwz r9,2624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2624);
	// stw r9,2624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2624, ctx.r9.u32);
	// lwz r8,2628(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2628);
	// stw r8,2628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2628, ctx.r8.u32);
loc_835E0310:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0334
	if (cr6.eq) goto loc_835E0334;
	// lwz r9,2632(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2632);
	// stw r9,2632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2632, ctx.r9.u32);
	// lwz r8,2636(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2636);
	// stw r8,2636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2636, ctx.r8.u32);
loc_835E0334:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0358
	if (cr6.eq) goto loc_835E0358;
	// lwz r9,2640(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2640);
	// stw r9,2640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2640, ctx.r9.u32);
	// lwz r8,2644(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2644);
	// stw r8,2644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2644, ctx.r8.u32);
loc_835E0358:
	// lwz r9,2576(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2576);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r8.u32);
	// stw r30,2576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2576, ctx.r30.u32);
loc_835E0368:
	// lwz r9,2580(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2580);
	// lwz r8,2580(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,2580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2580, ctx.r7.u32);
	// lwz r6,2580(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835e04ac
	if (cr6.eq) goto loc_835E04AC;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e03a0
	if (cr6.eq) goto loc_835E03A0;
	// lwz r9,2648(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2648);
	// stw r9,2648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2648, ctx.r9.u32);
	// lwz r8,2652(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2652);
	// stw r8,2652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2652, ctx.r8.u32);
loc_835E03A0:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e03c4
	if (cr6.eq) goto loc_835E03C4;
	// lwz r9,2656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2656);
	// stw r9,2656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2656, ctx.r9.u32);
	// lwz r8,2660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2660);
	// stw r8,2660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2660, ctx.r8.u32);
loc_835E03C4:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e03e8
	if (cr6.eq) goto loc_835E03E8;
	// lwz r9,2664(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2664);
	// stw r9,2664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2664, ctx.r9.u32);
	// lwz r8,2668(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2668);
	// stw r8,2668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2668, ctx.r8.u32);
loc_835E03E8:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e040c
	if (cr6.eq) goto loc_835E040C;
	// lwz r9,2672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// stw r9,2672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2672, ctx.r9.u32);
	// lwz r8,2676(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2676);
	// stw r8,2676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2676, ctx.r8.u32);
loc_835E040C:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0430
	if (cr6.eq) goto loc_835E0430;
	// lwz r9,2680(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	// stw r9,2680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2680, ctx.r9.u32);
	// lwz r8,2684(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2684);
	// stw r8,2684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2684, ctx.r8.u32);
loc_835E0430:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0454
	if (cr6.eq) goto loc_835E0454;
	// lwz r9,2688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2688);
	// stw r9,2688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2688, ctx.r9.u32);
	// lwz r8,2692(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2692);
	// stw r8,2692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2692, ctx.r8.u32);
loc_835E0454:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e0478
	if (cr6.eq) goto loc_835E0478;
	// lwz r9,2696(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2696);
	// stw r9,2696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2696, ctx.r9.u32);
	// lwz r8,2700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2700);
	// stw r8,2700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2700, ctx.r8.u32);
loc_835E0478:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e049c
	if (cr6.eq) goto loc_835E049C;
	// lwz r9,2704(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2704);
	// stw r9,2704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2704, ctx.r9.u32);
	// lwz r8,2708(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2708);
	// stw r8,2708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2708, ctx.r8.u32);
loc_835E049C:
	// lwz r9,2580(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2580);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r8,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r8.u32);
	// stw r30,2580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2580, ctx.r30.u32);
loc_835E04AC:
	// lwz r9,2712(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2712);
	// stw r9,2712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2712, ctx.r9.u32);
	// stw r25,2712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2712, ctx.r25.u32);
	// lwz r9,2752(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2752);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e04d4
	if (cr6.eq) goto loc_835E04D4;
	// stw r9,2752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2752, ctx.r9.u32);
	// lwz r9,2756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	// stw r9,2756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2756, ctx.r9.u32);
	// stw r30,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r30.u32);
loc_835E04D4:
	// lbz r9,2716(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2716);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835e04ec
	if (!cr6.eq) goto loc_835E04EC;
	// lbz r9,2717(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2717);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e0644
	if (cr6.eq) goto loc_835E0644;
loc_835E04EC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,2736
	ctx.r7.s64 = ctx.r11.s64 + 2736;
	// addi r9,r10,2734
	ctx.r9.s64 = ctx.r10.s64 + 2734;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_835E0500:
	// lbz r6,2717(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2717);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e0524
	if (cr6.eq) goto loc_835E0524;
	// lbz r6,2717(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2717);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2717(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2717, ctx.r4.u8);
	// lhzx r6,r9,r5
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
loc_835E0524:
	// lbz r6,2716(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2716);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e0548
	if (cr6.eq) goto loc_835E0548;
	// lbz r6,2716(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2716);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2716, ctx.r4.u8);
	// lhz r6,-18(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + -18);
	// sth r6,-16(r9)
	PPC_STORE_U16(ctx.r9.u32 + -16, ctx.r6.u16);
loc_835E0548:
	// lbz r6,2717(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2717);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e0570
	if (cr6.eq) goto loc_835E0570;
	// lbz r6,2717(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2717);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2717(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2717, ctx.r4.u8);
	// lhz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
loc_835E0570:
	// lbz r6,2716(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2716);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e0594
	if (cr6.eq) goto loc_835E0594;
	// lbz r6,2716(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2716);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2716, ctx.r4.u8);
	// lhz r6,-16(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + -16);
	// sth r6,-14(r9)
	PPC_STORE_U16(ctx.r9.u32 + -14, ctx.r6.u16);
loc_835E0594:
	// lbz r6,2717(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2717);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e05bc
	if (cr6.eq) goto loc_835E05BC;
	// lbz r6,2717(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2717);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2717(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2717, ctx.r4.u8);
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r6.u16);
loc_835E05BC:
	// lbz r6,2716(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2716);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e05e0
	if (cr6.eq) goto loc_835E05E0;
	// lbz r6,2716(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2716);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2716, ctx.r4.u8);
	// lhz r6,-14(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + -14);
	// sth r6,-12(r9)
	PPC_STORE_U16(ctx.r9.u32 + -12, ctx.r6.u16);
loc_835E05E0:
	// lbz r6,2717(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2717);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e0608
	if (cr6.eq) goto loc_835E0608;
	// lbz r6,2717(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2717);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2717(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2717, ctx.r4.u8);
	// lhz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// sth r6,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r6.u16);
loc_835E0608:
	// lbz r6,2716(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2716);
	// and r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e062c
	if (cr6.eq) goto loc_835E062C;
	// lbz r6,2716(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2716);
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stb r4,2716(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2716, ctx.r4.u8);
	// lhz r6,-12(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + -12);
	// sth r6,-10(r9)
	PPC_STORE_U16(ctx.r9.u32 + -10, ctx.r6.u16);
loc_835E062C:
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x835e0500
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E0500;
	// stb r30,2716(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2716, ctx.r30.u8);
	// stb r30,2717(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2717, ctx.r30.u8);
loc_835E0644:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x835e0670
	if (cr6.lt) goto loc_835E0670;
	// lhz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// bge cr6,0x835e0670
	if (!cr6.lt) goto loc_835E0670;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_835E0670:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x835dfc30
	if (!cr6.lt) goto loc_835DFC30;
loc_835E067C:
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E0680"))) PPC_WEAK_FUNC(sub_835E0680);
PPC_FUNC_IMPL(__imp__sub_835E0680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// li r12,1
	ctx.r12.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// and r11,r8,r12
	ctx.r11.u64 = ctx.r8.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,18404
	ctx.r10.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_835E06CC:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r8,r7
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, xer);
	// beq cr6,0x835e06f0
	if (cr6.eq) goto loc_835E06F0;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835e06cc
	if (!cr6.lt) goto loc_835E06CC;
loc_835E06F0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// mulli r10,r11,1352
	ctx.r10.s64 = ctx.r11.s64 * 1352;
	// lwz r11,18400(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18400);
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,18352
	ctx.r6.s64 = ctx.r8.s64 + 18352;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E0734"))) PPC_WEAK_FUNC(sub_835E0734);
PPC_FUNC_IMPL(__imp__sub_835E0734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E0738"))) PPC_WEAK_FUNC(sub_835E0738);
PPC_FUNC_IMPL(__imp__sub_835E0738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,18404
	ctx.r10.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_835E0774:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r8,r7
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, xer);
	// beq cr6,0x835e0798
	if (cr6.eq) goto loc_835E0798;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835e0774
	if (!cr6.lt) goto loc_835E0774;
loc_835E0798:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// mulli r9,r11,1352
	ctx.r9.s64 = ctx.r11.s64 * 1352;
	// lwz r10,18400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18400);
	// addi r7,r8,18352
	ctx.r7.s64 = ctx.r8.s64 + 18352;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x835e07ec
	if (!cr6.eq) goto loc_835E07EC;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// mulli r10,r11,2760
	ctx.r10.s64 = ctx.r11.s64 * 2760;
	// lwz r11,18388(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18388);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// blr 
	return;
loc_835E07EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E07F8"))) PPC_WEAK_FUNC(sub_835E07F8);
PPC_FUNC_IMPL(__imp__sub_835E07F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r10,r11,18404
	ctx.r10.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_835E0834:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r8,r7
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, xer);
	// beq cr6,0x835e0858
	if (cr6.eq) goto loc_835E0858;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835e0834
	if (!cr6.lt) goto loc_835E0834;
loc_835E0858:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// mulli r10,r11,1352
	ctx.r10.s64 = ctx.r11.s64 * 1352;
	// lwz r11,18400(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18400);
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,18352
	ctx.r6.s64 = ctx.r8.s64 + 18352;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E0890"))) PPC_WEAK_FUNC(sub_835E0890);
PPC_FUNC_IMPL(__imp__sub_835E0890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E0898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,18404
	ctx.r30.s64 = ctx.r11.s64 + 18404;
	// beq cr6,0x835e08d0
	if (cr6.eq) goto loc_835E08D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835df5f8
	ctx.lr = 0x835E08BC;
	sub_835DF5F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// bgt cr6,0x835e08cc
	if (cr6.gt) goto loc_835E08CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_835E08CC:
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_835E08D0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x835e08f4
	if (cr6.eq) goto loc_835E08F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835df5a8
	ctx.lr = 0x835E08E0;
	sub_835DF5A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// bgt cr6,0x835e08f0
	if (cr6.gt) goto loc_835E08F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_835E08F0:
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_835E08F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E0900"))) PPC_WEAK_FUNC(sub_835E0900);
PPC_FUNC_IMPL(__imp__sub_835E0900) {
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
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mulli r10,r11,2824
	ctx.r10.s64 = ctx.r11.s64 * 2824;
	// lwz r11,18380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18380);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r11,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x835e0948
	if (!cr6.eq) goto loc_835E0948;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x835e09f0
	goto loc_835E09F0;
loc_835E0948:
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// sth r30,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r30.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e0968
	if (cr6.eq) goto loc_835E0968;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835E0968:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x835e09cc
	if (cr6.gt) goto loc_835E09CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e09ac
	if (cr6.eq) goto loc_835E09AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1560
	ctx.r3.s64 = ctx.r31.s64 + 1560;
	// bl 0x835eac60
	ctx.lr = 0x835E0998;
	sub_835EAC60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r3,23,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 23) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x835e09f0
	goto loc_835E09F0;
loc_835E09AC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x835e9218
	ctx.lr = 0x835E09B8;
	sub_835E9218(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r3,23,8,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 23) & 0xC00000) | (ctx.r11.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x835e09f0
	goto loc_835E09F0;
loc_835E09CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835df648
	ctx.lr = 0x835E09DC;
	sub_835DF648(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r9,r10,22,8,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0xC00000) | (ctx.r9.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_835E09F0:
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

__attribute__((alias("__imp__sub_835E0A08"))) PPC_WEAK_FUNC(sub_835E0A08);
PPC_FUNC_IMPL(__imp__sub_835E0A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E0A10;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// ld r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// mulli r8,r29,2824
	ctx.r8.s64 = ctx.r29.s64 * 2824;
	// lwz r11,18380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18380);
	// lwz r9,18384(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18384);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r7,r29,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stdx r5,r7,r9
	PPC_STORE_U64(ctx.r7.u32 + ctx.r9.u32, ctx.r5.u64);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// divwu r7,r8,r3
	ctx.r7.u32 = PPCDivide(ctx.r8.u32, ctx.r3.u32);
	// stw r7,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r7.u32);
	// beq cr6,0x835e0a80
	if (cr6.eq) goto loc_835E0A80;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// sth r10,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r10.u16);
loc_835E0A80:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835e0aa4
	if (cr6.eq) goto loc_835E0AA4;
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r7,16(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
loc_835E0AA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r31,1616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1616, ctx.r31.u32);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// oris r8,r11,16
	ctx.r8.u64 = ctx.r11.u64 | 1048576;
	// stw r31,1620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1620, ctx.r31.u32);
	// addi r3,r30,1576
	ctx.r3.s64 = ctx.r30.s64 + 1576;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,1580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1580, ctx.r31.u32);
	// stfs f31,1592(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1592, temp.u32);
	// stfs f31,1588(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// stfs f31,1584(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1584, temp.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f30,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x835df648
	ctx.lr = 0x835E0AE8;
	sub_835DF648(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r28,r11,18352
	ctx.r28.s64 = ctx.r11.s64 + 18352;
	// stfs f31,1612(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1612, temp.u32);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// stfs f30,1608(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1608, temp.u32);
	// stfs f30,1604(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1604, temp.u32);
	// stw r31,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r31.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mulli r5,r29,1352
	ctx.r5.s64 = ctx.r29.s64 * 1352;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r6,r11,-20344
	ctx.r6.s64 = ctx.r11.s64 + -20344;
loc_835E0B18:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r8,73
	ctx.r8.s64 = 73;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r9,r11,176
	ctx.r9.s64 = ctx.r11.s64 + 176;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// stw r31,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r31.u32);
	// stw r31,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r31.u32);
	// stw r3,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r3.u32);
	// std r31,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r31.u64);
	// std r31,144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 144, ctx.r31.u64);
	// stw r31,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r31.u32);
	// stw r4,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r4.u32);
	// lwz r8,1616(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r8,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r8.u32);
	// lwz r8,1620(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
loc_835E0B8C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835e0b8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E0B8C;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e0b18
	if (cr6.lt) goto loc_835E0B18;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E0BD0"))) PPC_WEAK_FUNC(sub_835E0BD0);
PPC_FUNC_IMPL(__imp__sub_835E0BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r6,-1
	ctx.r6.s64 = -1;
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_835E0C20:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x835e0c38
	if (!cr6.eq) goto loc_835E0C38;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_835E0C38:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x835e0c4c
	if (!cr6.eq) goto loc_835E0C4C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_835E0C4C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// blt cr6,0x835e0c20
	if (cr6.lt) goto loc_835E0C20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E0C70"))) PPC_WEAK_FUNC(sub_835E0C70);
PPC_FUNC_IMPL(__imp__sub_835E0C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// bne cr6,0x835e0c88
	if (!cr6.eq) goto loc_835E0C88;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// blr 
	return;
loc_835E0C88:
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lhz r5,2(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x835e0d00
	if (cr6.eq) goto loc_835E0D00;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x835e0d04
	if (cr0.eq) goto loc_835E0D04;
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// b 0x835e0d04
	goto loc_835E0D04;
loc_835E0D00:
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
loc_835E0D04:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x835e0d48
	if (cr6.eq) goto loc_835E0D48;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sthx r7,r5,r9
	PPC_STORE_U16(ctx.r5.u32 + ctx.r9.u32, ctx.r7.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// blr 
	return;
loc_835E0D48:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sthx r6,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u16);
	// sth r8,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E0D6C"))) PPC_WEAK_FUNC(sub_835E0D6C);
PPC_FUNC_IMPL(__imp__sub_835E0D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E0D70"))) PPC_WEAK_FUNC(sub_835E0D70);
PPC_FUNC_IMPL(__imp__sub_835E0D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x835e0eac
	if (cr6.lt) goto loc_835E0EAC;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// bge cr6,0x835e0eac
	if (!cr6.lt) goto loc_835E0EAC;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_835E0DA8:
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// bge cr6,0x835e0dd4
	if (!cr6.lt) goto loc_835E0DD4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x835e0dd4
	if (cr6.eq) goto loc_835E0DD4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x835e0da8
	if (!cr6.lt) goto loc_835E0DA8;
loc_835E0DD4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,-1
	ctx.r4.s64 = -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x835e0e0c
	if (!cr6.eq) goto loc_835E0E0C;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// b 0x835e0e1c
	goto loc_835E0E1C;
loc_835E0E0C:
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
loc_835E0E1C:
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x835e0e30
	if (!cr6.eq) goto loc_835E0E30;
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// b 0x835e0e3c
	goto loc_835E0E3C;
loc_835E0E30:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r5,r6,r8
	PPC_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u16);
loc_835E0E3C:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x835e0e74
	if (!cr6.eq) goto loc_835E0E74;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,-1
	ctx.r8.s64 = -1;
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sthx r8,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u16);
	// blr 
	return;
loc_835E0E74:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r7,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r7.u16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r6.u16);
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// sthx r3,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r7,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r7.u16);
	// blr 
	return;
loc_835E0EAC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E0EB8"))) PPC_WEAK_FUNC(sub_835E0EB8);
PPC_FUNC_IMPL(__imp__sub_835E0EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x835E0EC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31744
	ctx.r20.s64 = -2080374784;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r25,-31744
	ctx.r25.s64 = -2080374784;
	// lis r10,23
	ctx.r10.s64 = 1507328;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,18376(r20)
	PPC_STORE_U32(ctx.r20.u32 + 18376, ctx.r31.u32);
	// ori r9,r10,13552
	ctx.r9.u64 = ctx.r10.u64 | 13552;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// sth r11,18368(r25)
	PPC_STORE_U16(ctx.r25.u32 + 18368, ctx.r11.u16);
	// li r22,-1
	ctx.r22.s64 = -1;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bgt cr6,0x835e0f10
	if (cr6.gt) goto loc_835E0F10;
	// mulli r11,r30,2824
	ctx.r11.s64 = ctx.r30.s64 * 2824;
	// li r10,-9
	ctx.r10.s64 = -9;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x835e0f14
	if (!cr6.gt) goto loc_835E0F14;
loc_835E0F10:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_835E0F14:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x835daa48
	ctx.lr = 0x835E0F1C;
	sub_835DAA48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e0f5c
	if (cr6.eq) goto loc_835E0F5C;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// blt 0x835e0f4c
	if (cr0.lt) goto loc_835E0F4C;
loc_835E0F38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835df878
	ctx.lr = 0x835E0F40;
	sub_835DF878(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,2824
	ctx.r29.s64 = ctx.r29.s64 + 2824;
	// bge 0x835e0f38
	if (!cr0.lt) goto loc_835E0F38;
loc_835E0F4C:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r23,r11,18380
	ctx.r23.s64 = ctx.r11.s64 + 18380;
	// stw r28,18380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18380, ctx.r28.u32);
	// b 0x835e0f6c
	goto loc_835E0F6C;
loc_835E0F5C:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r23,r10,18380
	ctx.r23.s64 = ctx.r10.s64 + 18380;
	// stw r31,18380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18380, ctx.r31.u32);
loc_835E0F6C:
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// ble cr6,0x835e0f8c
	if (!cr6.gt) goto loc_835E0F8C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_835E0F8C:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x835daa48
	ctx.lr = 0x835E0F94;
	sub_835DAA48(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e0fd8
	if (cr6.eq) goto loc_835E0FD8;
	// addic. r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x835e0fcc
	if (cr0.lt) goto loc_835E0FCC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835E0FB4:
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// sth r24,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r24.u16);
	// stwu r24,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835e0fb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E0FB4;
loc_835E0FCC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r3,18384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18384, ctx.r3.u32);
	// b 0x835e0fe4
	goto loc_835E0FE4;
loc_835E0FD8:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,18384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18384, ctx.r31.u32);
loc_835E0FE4:
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e0ffc
	if (!cr6.gt) goto loc_835E0FFC;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_835E0FFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x835daa48
	ctx.lr = 0x835E1004;
	sub_835DAA48(ctx, base);
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// stw r3,18376(r20)
	PPC_STORE_U32(ctx.r20.u32 + 18376, ctx.r3.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x835e104c
	if (!cr6.gt) goto loc_835E104C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_835E1020:
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r8,r11,2824
	ctx.r8.s64 = ctx.r11.s64 * 2824;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r10,8(r9)
	PPC_STORE_U16(ctx.r9.u32 + 8, ctx.r10.u16);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r9,18368(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, xer);
	// blt cr6,0x835e1020
	if (cr6.lt) goto loc_835E1020;
loc_835E104C:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r9,23
	ctx.r9.s64 = 1507328;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ori r27,r9,48819
	ctx.r27.u64 = ctx.r9.u64 | 48819;
	// mulli r3,r30,2760
	ctx.r3.s64 = ctx.r30.s64 * 2760;
	// stw r31,18372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18372, ctx.r31.u32);
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// ble cr6,0x835e1070
	if (!cr6.gt) goto loc_835E1070;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_835E1070:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x835daa48
	ctx.lr = 0x835E1078;
	sub_835DAA48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e10b0
	if (cr6.eq) goto loc_835E10B0;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// blt 0x835e10a4
	if (cr0.lt) goto loc_835E10A4;
loc_835E1090:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835df6d0
	ctx.lr = 0x835E1098;
	sub_835DF6D0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,2760
	ctx.r29.s64 = ctx.r29.s64 + 2760;
	// bge 0x835e1090
	if (!cr0.lt) goto loc_835E1090;
loc_835E10A4:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r28,18388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18388, ctx.r28.u32);
	// b 0x835e10bc
	goto loc_835E10BC;
loc_835E10B0:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,18388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18388, ctx.r31.u32);
loc_835E10BC:
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// mulli r3,r30,2760
	ctx.r3.s64 = ctx.r30.s64 * 2760;
	// ble cr6,0x835e10d4
	if (!cr6.gt) goto loc_835E10D4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_835E10D4:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x835daa48
	ctx.lr = 0x835E10DC;
	sub_835DAA48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e1114
	if (cr6.eq) goto loc_835E1114;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// blt 0x835e1108
	if (cr0.lt) goto loc_835E1108;
loc_835E10F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835df6d0
	ctx.lr = 0x835E10FC;
	sub_835DF6D0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,2760
	ctx.r29.s64 = ctx.r29.s64 + 2760;
	// bge 0x835e10f4
	if (!cr0.lt) goto loc_835E10F4;
loc_835E1108:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r28,18392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18392, ctx.r28.u32);
	// b 0x835e1120
	goto loc_835E1120;
loc_835E1114:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,18392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18392, ctx.r31.u32);
loc_835E1120:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// addi r26,r11,18352
	ctx.r26.s64 = ctx.r11.s64 + 18352;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lis r11,48
	ctx.r11.s64 = 3145728;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r31,18400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18400, ctx.r31.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// ori r27,r11,31022
	ctx.r27.u64 = ctx.r11.u64 | 31022;
loc_835E1144:
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// mulli r3,r30,1352
	ctx.r3.s64 = ctx.r30.s64 * 1352;
	// ble cr6,0x835e115c
	if (!cr6.gt) goto loc_835E115C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_835E115C:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x835daa48
	ctx.lr = 0x835E1164;
	sub_835DAA48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e121c
	if (cr6.eq) goto loc_835E121C;
	// addic. r7,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r7.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x835e1214
	if (cr0.lt) goto loc_835E1214;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_835E1178:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r31.u32);
	// std r31,128(r11)
	PPC_STORE_U64(ctx.r11.u32 + 128, ctx.r31.u64);
	// std r31,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r31.u64);
	// stw r31,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r31.u32);
	// stw r29,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r29.u32);
	// stw r31,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r31.u32);
	// stw r31,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r31.u32);
	// stw r31,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r31.u32);
	// stw r31,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r31.u32);
	// stw r24,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r24.u32);
loc_835E11D0:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835e11d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E11D0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835E11E8:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835e11e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E11E8;
	// li r9,292
	ctx.r9.s64 = 292;
	// addi r10,r11,168
	ctx.r10.s64 = ctx.r11.s64 + 168;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835E1200:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835e1200
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E1200;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,1352
	ctx.r11.s64 = ctx.r11.s64 + 1352;
	// bge 0x835e1178
	if (!cr0.lt) goto loc_835E1178;
loc_835E1214:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x835e1220
	goto loc_835E1220;
loc_835E121C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_835E1220:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e1144
	if (cr6.lt) goto loc_835E1144;
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// li r4,32
	ctx.r4.s64 = 32;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x835daa48
	ctx.lr = 0x835E1248;
	sub_835DAA48(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lhz r5,18368(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// addi r8,r10,18404
	ctx.r8.s64 = ctx.r10.s64 + 18404;
	// lwz r4,18376(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18376);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,18396(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18396, ctx.r11.u32);
	// bl 0x835e0bd0
	ctx.lr = 0x835E126C;
	sub_835E0BD0(ctx, base);
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r21.u32 + 8);
	// lwz r4,120(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 120);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// lwz r3,124(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 124);
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// lwz r10,128(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 128);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ble cr6,0x835e12e4
	if (!cr6.gt) goto loc_835E12E4;
loc_835E12AC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r10,r31,2824
	ctx.r10.s64 = ctx.r31.s64 * 2824;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x835eaa48
	ctx.lr = 0x835E12C8;
	sub_835EAA48(ctx, base);
	// lhz r11,18368(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 18368);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x835e12ac
	if (cr6.lt) goto loc_835E12AC;
loc_835E12E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E12F0"))) PPC_WEAK_FUNC(sub_835E12F0);
PPC_FUNC_IMPL(__imp__sub_835E12F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E12F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31744
	ctx.r28.s64 = -2080374784;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lhz r11,18368(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 18368);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e1348
	if (!cr6.gt) goto loc_835E1348;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_835E1320:
	// lwz r11,18380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18380);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x835e91b8
	ctx.lr = 0x835E1330;
	sub_835E91B8(ctx, base);
	// lhz r11,18368(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 18368);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r30,r30,2824
	ctx.r30.s64 = ctx.r30.s64 + 2824;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e1320
	if (cr6.lt) goto loc_835E1320;
loc_835E1348:
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,18396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18396);
	// bl 0x835daa80
	ctx.lr = 0x835E1354;
	sub_835DAA80(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// stw r27,18396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18396, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r30,r10,18352
	ctx.r30.s64 = ctx.r10.s64 + 18352;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_835E1368:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x835daa80
	ctx.lr = 0x835E1370;
	sub_835DAA80(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e1368
	if (cr6.lt) goto loc_835E1368;
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,18388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18388);
	// bl 0x835daa80
	ctx.lr = 0x835E1390;
	sub_835DAA80(ctx, base);
	// stw r27,18388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18388, ctx.r27.u32);
	// lis r30,-31744
	ctx.r30.s64 = -2080374784;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r3,18392(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18392);
	// bl 0x835daa80
	ctx.lr = 0x835E13A4;
	sub_835DAA80(ctx, base);
	// stw r27,18392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18392, ctx.r27.u32);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r3,18384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18384);
	// bl 0x835daa80
	ctx.lr = 0x835E13B8;
	sub_835DAA80(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,18384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18384, ctx.r27.u32);
	// lwz r11,18380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1418
	if (cr6.eq) goto loc_835E1418;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// mulli r9,r10,2824
	ctx.r9.s64 = ctx.r10.s64 * 2824;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt 0x835e1414
	if (cr0.lt) goto loc_835E1414;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,1576
	ctx.r11.s64 = ctx.r11.s64 + 1576;
	// addi r9,r9,21716
	ctx.r9.s64 = ctx.r9.s64 + 21716;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,21716
	ctx.r10.s64 = ctx.r10.s64 + 21716;
loc_835E1400:
	// addi r11,r11,-2824
	ctx.r11.s64 = ctx.r11.s64 + -2824;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,-1552(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1552, ctx.r9.u32);
	// bdnz 0x835e1400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E1400;
loc_835E1414:
	// bl 0x835daa80
	ctx.lr = 0x835E1418;
	sub_835DAA80(ctx, base);
loc_835E1418:
	// stw r27,18380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 18380, ctx.r27.u32);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r3,18376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18376);
	// bl 0x835daa80
	ctx.lr = 0x835E142C;
	sub_835DAA80(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r27,18376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18376, ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r27,18368(r28)
	PPC_STORE_U16(ctx.r28.u32 + 18368, ctx.r27.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E1448"))) PPC_WEAK_FUNC(sub_835E1448);
PPC_FUNC_IMPL(__imp__sub_835E1448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x835E1450;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce778
	ctx.lr = 0x835E1458;
	__savefpr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r4,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// addi r28,r11,18404
	ctx.r28.s64 = ctx.r11.s64 + 18404;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x835e1fe8
	if (cr6.lt) goto loc_835E1FE8;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r27,6
	ctx.r27.s64 = 6;
	// addi r7,r11,18352
	ctx.r7.s64 = ctx.r11.s64 + 18352;
	// lfs f28,17396(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17396);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,17400(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17400);
	ctx.f29.f64 = double(temp.f32);
	// lis r15,-32222
	ctx.r15.s64 = -2111700992;
	// lfs f30,-7404(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -7404);
	ctx.f30.f64 = double(temp.f32);
	// lis r14,-32256
	ctx.r14.s64 = -2113929216;
	// lis r20,-31744
	ctx.r20.s64 = -2080374784;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
loc_835E14C4:
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// extsh r16,r18
	ctx.r16.s64 = ctx.r18.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r21,r16,2824
	ctx.r21.s64 = ctx.r16.s64 * 2824;
	// lwz r10,18396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18396);
	// sthx r18,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r18.u16);
	// lwz r10,18380(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18380);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r30,r21,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// add r22,r21,r10
	ctx.r22.u64 = ctx.r21.u64 + ctx.r10.u64;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// beq cr6,0x835e153c
	if (cr6.eq) goto loc_835E153C;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x835e1560
	if (!cr6.eq) goto loc_835E1560;
	// rlwinm r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835e1560
	if (!cr6.eq) goto loc_835E1560;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e1530
	if (cr6.eq) goto loc_835E1530;
	// addi r3,r22,1560
	ctx.r3.s64 = ctx.r22.s64 + 1560;
	// bl 0x835eadd0
	ctx.lr = 0x835E152C;
	sub_835EADD0(ctx, base);
	// b 0x835e1560
	goto loc_835E1560;
loc_835E1530:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e93f0
	ctx.lr = 0x835E1538;
	sub_835E93F0(ctx, base);
	// b 0x835e1560
	goto loc_835E1560;
loc_835E153C:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e1558
	if (cr6.eq) goto loc_835E1558;
	// addi r3,r22,1560
	ctx.r3.s64 = ctx.r22.s64 + 1560;
	// bl 0x835eadc8
	ctx.lr = 0x835E1554;
	sub_835EADC8(ctx, base);
	// b 0x835e1560
	goto loc_835E1560;
loc_835E1558:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e93c0
	ctx.lr = 0x835E1560;
	sub_835E93C0(ctx, base);
loc_835E1560:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1fac
	if (cr6.eq) goto loc_835E1FAC;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mulli r10,r16,2760
	ctx.r10.s64 = ctx.r16.s64 * 2760;
	// lwz r11,18392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18392);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r19,r10,r11
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stwx r17,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r17.u32);
	// ble cr6,0x835e15a0
	if (!cr6.gt) goto loc_835E15A0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bgt cr6,0x835e15a0
	if (cr6.gt) goto loc_835E15A0;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r19,r19,0,28,26
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835E15A0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x835e1a60
	if (cr6.eq) goto loc_835E1A60;
	// rlwinm r11,r19,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1614
	if (cr6.eq) goto loc_835E1614;
	// rlwinm r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835e1614
	if (!cr6.eq) goto loc_835E1614;
	// lfs f0,1604(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r22,1596
	ctx.r11.s64 = ctx.r22.s64 + 1596;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,9008(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1608(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 1608, temp.u32);
	// stw r27,1600(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1600, ctx.r27.u32);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f0,1612(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 1612, temp.u32);
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x835e1600
	if (!cr6.lt) goto loc_835E1600;
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x835e1600
	if (!cr6.gt) goto loc_835E1600;
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_835E1600:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df428
	ctx.lr = 0x835E1608;
	sub_835DF428(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// oris r10,r11,768
	ctx.r10.u64 = ctx.r11.u64 | 50331648;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
loc_835E1614:
	// rlwinm r11,r19,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e16b4
	if (cr6.eq) goto loc_835E16B4;
	// rlwinm r11,r30,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e165c
	if (cr6.eq) goto loc_835E165C;
	// rlwinm r11,r30,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835e165c
	if (!cr6.eq) goto loc_835E165C;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e1654
	if (cr6.eq) goto loc_835E1654;
	// addi r3,r22,1560
	ctx.r3.s64 = ctx.r22.s64 + 1560;
	// bl 0x835eadd0
	ctx.lr = 0x835E1650;
	sub_835EADD0(ctx, base);
	// b 0x835e165c
	goto loc_835E165C;
loc_835E1654:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e93f0
	ctx.lr = 0x835E165C;
	sub_835E93F0(ctx, base);
loc_835E165C:
	// lfs f0,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r22,1596
	ctx.r11.s64 = ctx.r22.s64 + 1596;
	// lfs f13,1604(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 1604);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,1600(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1600, ctx.r27.u32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1608(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 1608, temp.u32);
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f13,1612(r22)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r22.u32 + 1612, temp.u32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x835e16a0
	if (!cr6.lt) goto loc_835E16A0;
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// ble cr6,0x835e16a0
	if (!cr6.gt) goto loc_835E16A0;
	// lfs f13,9008(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_835E16A0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df490
	ctx.lr = 0x835E16A8;
	sub_835DF490(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r10,r11,0,8,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFCFFFFFF;
	// stw r10,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
loc_835E16B4:
	// rlwinm r11,r19,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e16e0
	if (cr6.eq) goto loc_835E16E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E16E0;
	sub_835DF4F8(ctx, base);
loc_835E16E0:
	// rlwinm r11,r19,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e170c
	if (cr6.eq) goto loc_835E170C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E170C;
	sub_835DF4F8(ctx, base);
loc_835E170C:
	// rlwinm r11,r19,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1738
	if (cr6.eq) goto loc_835E1738;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E1738;
	sub_835DF4F8(ctx, base);
loc_835E1738:
	// rlwinm r11,r19,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1764
	if (cr6.eq) goto loc_835E1764;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,9008(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E1764;
	sub_835DF4F8(ctx, base);
loc_835E1764:
	// rlwinm r11,r19,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1790
	if (cr6.eq) goto loc_835E1790;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E1790;
	sub_835DF4F8(ctx, base);
loc_835E1790:
	// rlwinm r11,r19,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e17bc
	if (cr6.eq) goto loc_835E17BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E17BC;
	sub_835DF4F8(ctx, base);
loc_835E17BC:
	// rlwinm r11,r19,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e183c
	if (cr6.eq) goto loc_835E183C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// stw r11,1616(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1616, ctx.r11.u32);
	// bge cr6,0x835e183c
	if (!cr6.lt) goto loc_835E183C;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E17FC;
	sub_835DF4F8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f2,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E181C;
	sub_835DF4F8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,9008(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// li r5,9
	ctx.r5.s64 = 9;
	// lfs f2,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E183C;
	sub_835DF4F8(ctx, base);
loc_835E183C:
	// rlwinm r11,r19,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e188c
	if (cr6.eq) goto loc_835E188C;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f1,9008(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E186C;
	sub_835DF4F8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// lfs f2,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E188C;
	sub_835DF4F8(ctx, base);
loc_835E188C:
	// rlwinm r11,r19,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x10000;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e18c4
	if (cr6.eq) goto loc_835E18C4;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x835e9750
	ctx.lr = 0x835E18C0;
	sub_835E9750(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E18C4:
	// rlwinm r11,r19,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e18f8
	if (cr6.eq) goto loc_835E18F8;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f12,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x835e97a8
	ctx.lr = 0x835E18F4;
	sub_835E97A8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E18F8:
	// rlwinm r11,r19,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e192c
	if (cr6.eq) goto loc_835E192C;
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x835e9800
	ctx.lr = 0x835E1928;
	sub_835E9800(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E192C:
	// rlwinm r11,r19,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1950
	if (cr6.eq) goto loc_835E1950;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f3,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9858
	ctx.lr = 0x835E194C;
	sub_835E9858(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E1950:
	// rlwinm r11,r19,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1970
	if (cr6.eq) goto loc_835E1970;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f2,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e98a8
	ctx.lr = 0x835E196C;
	sub_835E98A8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E1970:
	// rlwinm r11,r19,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e198c
	if (cr6.eq) goto loc_835E198C;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f1,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e98f0
	ctx.lr = 0x835E1988;
	sub_835E98F0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E198C:
	// rlwinm r11,r19,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e19a8
	if (cr6.eq) goto loc_835E19A8;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfs f1,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835ea6b0
	ctx.lr = 0x835E19A4;
	sub_835EA6B0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E19A8:
	// rlwinm r11,r19,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e19d8
	if (cr6.eq) goto loc_835E19D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-26260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// li r5,15
	ctx.r5.s64 = 15;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// li r4,6
	ctx.r4.s64 = 6;
	// lfs f2,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835df4f8
	ctx.lr = 0x835E19D4;
	sub_835DF4F8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E19D8:
	// rlwinm r11,r19,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1a10
	if (cr6.eq) goto loc_835E1A10;
	// lbz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x835e1a04
	if (cr6.lt) goto loc_835E1A04;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x835e4eb0
	ctx.lr = 0x835E1A00;
	sub_835E4EB0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E1A04:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x835e9700
	ctx.lr = 0x835E1A10;
	sub_835E9700(ctx, base);
loc_835E1A10:
	// rlwinm r11,r19,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1a4c
	if (cr6.eq) goto loc_835E1A4C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835e1a3c
	if (!cr6.eq) goto loc_835E1A3C;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r10.u32);
	// b 0x835e1a40
	goto loc_835E1A40;
loc_835E1A3C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_835E1A40:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x835e9a50
	ctx.lr = 0x835E1A4C;
	sub_835E9A50(ctx, base);
loc_835E1A4C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x835e1a60
	if (cr6.eq) goto loc_835E1A60;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r10.u32);
loc_835E1A60:
	// lbz r27,2717(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2717);
	// lbz r28,2716(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2716);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x835e1a7c
	if (!cr6.eq) goto loc_835E1A7C;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1ad0
	if (cr6.eq) goto loc_835E1AD0;
loc_835E1A7C:
	// addi r30,r31,2718
	ctx.r30.s64 = ctx.r31.s64 + 2718;
	// li r29,8
	ctx.r29.s64 = 8;
loc_835E1A84:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1a9c
	if (cr6.eq) goto loc_835E1A9C;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// bl 0x835e9c48
	ctx.lr = 0x835E1A9C;
	sub_835E9C48(ctx, base);
loc_835E1A9C:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r27,r27,31,25,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1ab8
	if (cr6.eq) goto loc_835E1AB8;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x835e9c20
	ctx.lr = 0x835E1AB8;
	sub_835E9C20(ctx, base);
loc_835E1AB8:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// rlwinm r28,r28,31,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7F;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bne 0x835e1a84
	if (!cr0.eq) goto loc_835E1A84;
	// stb r17,2717(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2717, ctx.r17.u8);
	// stb r17,2716(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2716, ctx.r17.u8);
loc_835E1AD0:
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// addi r23,r22,2792
	ctx.r23.s64 = ctx.r22.s64 + 2792;
	// addi r25,r31,204
	ctx.r25.s64 = ctx.r31.s64 + 204;
loc_835E1ADC:
	// lwz r24,32(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x835e1b84
	if (cr6.eq) goto loc_835E1B84;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r17,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r17.u32);
loc_835E1AF0:
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1b74
	if (cr6.eq) goto loc_835E1B74;
	// add r4,r26,r28
	ctx.r4.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lwz r11,18380(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18380);
	// addi r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 + 36;
	// add r30,r21,r11
	ctx.r30.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addi r10,r10,406
	ctx.r10.s64 = ctx.r10.s64 + 406;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r4,34
	ctx.r9.s64 = ctx.r4.s64 + 34;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lfs f31,268(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 268);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwzx r27,r7,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x835e1b64
	if (!cr6.eq) goto loc_835E1B64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x835de7a0
	ctx.lr = 0x835E1B48;
	sub_835DE7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e1b64
	if (!cr6.eq) goto loc_835E1B64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7d0
	ctx.lr = 0x835E1B5C;
	sub_835DE7D0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
loc_835E1B64:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7e0
	ctx.lr = 0x835E1B74;
	sub_835DE7E0(ctx, base);
loc_835E1B74:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// blt cr6,0x835e1af0
	if (cr6.lt) goto loc_835E1AF0;
loc_835E1B84:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1ba0
	if (cr6.eq) goto loc_835E1BA0;
	// stw r17,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r17.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
loc_835E1BA0:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(ctx.r26.u32, 64, xer);
	// blt cr6,0x835e1adc
	if (cr6.lt) goto loc_835E1ADC;
	// ld r11,2320(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2320);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x835e1c30
	if (cr6.eq) goto loc_835E1C30;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// li r29,582
	ctx.r29.s64 = 582;
loc_835E1BC8:
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_835E1BCC:
	// ld r11,2320(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2320);
	// clrldi r10,r11,63
	ctx.r10.u64 = ctx.r11.u64 & 0x1;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x835e1c04
	if (cr6.eq) goto loc_835E1C04;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lfsx f1,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9a78
	ctx.lr = 0x835E1BF8;
	sub_835E9A78(ctx, base);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r8.u32);
loc_835E1C04:
	// ld r11,2320(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2320);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rldicl r10,r11,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// std r10,2320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2320, ctx.r10.u64);
	// blt cr6,0x835e1bcc
	if (cr6.lt) goto loc_835E1BCC;
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,618
	cr6.compare<int32_t>(ctx.r29.s32, 618, xer);
	// blt cr6,0x835e1bc8
	if (cr6.lt) goto loc_835E1BC8;
	// std r17,2320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2320, ctx.r17.u64);
loc_835E1C30:
	// lwz r4,2472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x835e1c5c
	if (cr6.eq) goto loc_835E1C5C;
	// addi r5,r31,2476
	ctx.r5.s64 = ctx.r31.s64 + 2476;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e9ad0
	ctx.lr = 0x835E1C48;
	sub_835E9AD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e1c58
	if (!cr6.eq) goto loc_835E1C58;
	// lwz r11,2472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2472);
	// stw r11,1620(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1620, ctx.r11.u32);
loc_835E1C58:
	// stw r17,2472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2472, ctx.r17.u32);
loc_835E1C5C:
	// lwz r25,2508(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2508);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x835e1d08
	if (cr6.eq) goto loc_835E1D08;
	// lwz r11,1620(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1620);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e1d04
	if (!cr6.gt) goto loc_835E1D04;
	// li r30,1672
	ctx.r30.s64 = 1672;
	// addi r29,r31,2516
	ctx.r29.s64 = ctx.r31.s64 + 2516;
loc_835E1C80:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1ce8
	if (cr6.eq) goto loc_835E1CE8;
	// lwz r11,18380(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18380);
	// lfs f31,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x835e1cd8
	if (!cr6.eq) goto loc_835E1CD8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x835de7a0
	ctx.lr = 0x835E1CBC;
	sub_835DE7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e1cd8
	if (!cr6.eq) goto loc_835E1CD8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7d0
	ctx.lr = 0x835E1CD0;
	sub_835DE7D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r11,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u32);
loc_835E1CD8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7e0
	ctx.lr = 0x835E1CE8;
	sub_835DE7E0(ctx, base);
loc_835E1CE8:
	// lwz r11,1620(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1620);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r25,r25,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e1c80
	if (cr6.lt) goto loc_835E1C80;
loc_835E1D04:
	// stw r17,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r17.u32);
loc_835E1D08:
	// lwz r25,2576(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2576);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x835e1da4
	if (cr6.eq) goto loc_835E1DA4;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r30,1704
	ctx.r30.s64 = 1704;
	// addi r29,r31,2588
	ctx.r29.s64 = ctx.r31.s64 + 2588;
loc_835E1D20:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1d88
	if (cr6.eq) goto loc_835E1D88;
	// lwz r11,18380(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18380);
	// lfs f31,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne cr6,0x835e1d78
	if (!cr6.eq) goto loc_835E1D78;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x835de7a0
	ctx.lr = 0x835E1D5C;
	sub_835DE7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e1d78
	if (!cr6.eq) goto loc_835E1D78;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7d0
	ctx.lr = 0x835E1D70;
	sub_835DE7D0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r11,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u32);
loc_835E1D78:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7e0
	ctx.lr = 0x835E1D88;
	sub_835DE7E0(ctx, base);
loc_835E1D88:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r25,r25,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r30,1736
	cr6.compare<int32_t>(ctx.r30.s32, 1736, xer);
	// blt cr6,0x835e1d20
	if (cr6.lt) goto loc_835E1D20;
	// stw r17,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r17.u32);
loc_835E1DA4:
	// lwz r25,2580(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2580);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x835e1e40
	if (cr6.eq) goto loc_835E1E40;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// li r30,1736
	ctx.r30.s64 = 1736;
	// addi r29,r31,2652
	ctx.r29.s64 = ctx.r31.s64 + 2652;
loc_835E1DBC:
	// clrlwi r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1e24
	if (cr6.eq) goto loc_835E1E24;
	// lwz r11,18380(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 18380);
	// lfs f31,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r21,r11
	ctx.r28.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne cr6,0x835e1e14
	if (!cr6.eq) goto loc_835E1E14;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x835de7a0
	ctx.lr = 0x835E1DF8;
	sub_835DE7A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e1e14
	if (!cr6.eq) goto loc_835E1E14;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7d0
	ctx.lr = 0x835E1E0C;
	sub_835DE7D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stwx r11,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r11.u32);
loc_835E1E14:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x835de7e0
	ctx.lr = 0x835E1E24;
	sub_835DE7E0(ctx, base);
loc_835E1E24:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r25,r25,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r30,1768
	cr6.compare<int32_t>(ctx.r30.s32, 1768, xer);
	// blt cr6,0x835e1dbc
	if (cr6.lt) goto loc_835E1DBC;
	// stw r17,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r17.u32);
loc_835E1E40:
	// lwz r4,2712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2712);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x835e1e5c
	if (cr6.lt) goto loc_835E1E5C;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e9c70
	ctx.lr = 0x835E1E54;
	sub_835E9C70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,2712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2712, ctx.r11.u32);
loc_835E1E5C:
	// lwz r4,2752(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2752);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e1e78
	if (cr6.eq) goto loc_835E1E78;
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// lwz r5,2756(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2756);
	// bl 0x835e96d8
	ctx.lr = 0x835E1E74;
	sub_835E96D8(ctx, base);
	// stw r17,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r17.u32);
loc_835E1E78:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x835e1f70
	if (cr6.eq) goto loc_835E1F70;
	// rlwinm r11,r19,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x4;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1edc
	if (cr6.eq) goto loc_835E1EDC;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r11,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e1eb0
	if (cr6.eq) goto loc_835E1EB0;
	// lwz r8,1580(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1580);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// ble cr6,0x835e1ec8
	if (!cr6.gt) goto loc_835E1EC8;
loc_835E1EB0:
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// li r9,1
	ctx.r9.s64 = 1;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r5.u32);
loc_835E1EC8:
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x835e1f60
	if (!cr6.lt) goto loc_835E1F60;
	// stw r17,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r17.u32);
	// b 0x835e1f68
	goto loc_835E1F68;
loc_835E1EDC:
	// clrlwi r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1f20
	if (cr6.eq) goto loc_835E1F20;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e1f0c
	if (cr6.eq) goto loc_835E1F0C;
	// addi r3,r22,1560
	ctx.r3.s64 = ctx.r22.s64 + 1560;
	// bl 0x835eadc0
	ctx.lr = 0x835E1F00;
	sub_835EADC0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// b 0x835e1f70
	goto loc_835E1F70;
loc_835E1F0C:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e9268
	ctx.lr = 0x835E1F14;
	sub_835E9268(ctx, base);
loc_835E1F14:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r11.u32);
	// b 0x835e1f70
	goto loc_835E1F70;
loc_835E1F20:
	// rlwinm r11,r19,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e1f70
	if (cr6.eq) goto loc_835E1F70;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e1f48
	if (cr6.eq) goto loc_835E1F48;
	// addi r3,r22,1560
	ctx.r3.s64 = ctx.r22.s64 + 1560;
	// bl 0x835eadc0
	ctx.lr = 0x835E1F44;
	sub_835EADC0(ctx, base);
	// b 0x835e1f50
	goto loc_835E1F50;
loc_835E1F48:
	// addi r3,r22,24
	ctx.r3.s64 = ctx.r22.s64 + 24;
	// bl 0x835e9338
	ctx.lr = 0x835E1F50;
	sub_835E9338(ctx, base);
loc_835E1F50:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e1f14
	if (cr6.eq) goto loc_835E1F14;
	// stw r17,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r17.u32);
	// b 0x835e1f68
	goto loc_835E1F68;
loc_835E1F60:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835e1f70
	if (cr6.eq) goto loc_835E1F70;
loc_835E1F68:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x835e0900
	ctx.lr = 0x835E1F70;
	sub_835E0900(ctx, base);
loc_835E1F70:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r10,r16,1352
	ctx.r10.s64 = ctx.r16.s64 * 1352;
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r29,380(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lhz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,18400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18400);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,6
	ctx.r27.s64 = 6;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,12(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_835E1FAC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// blt cr6,0x835e1fd8
	if (cr6.lt) goto loc_835E1FD8;
	// lhz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r16,r10
	cr6.compare<int32_t>(ctx.r16.s32, ctx.r10.s32, xer);
	// bge cr6,0x835e1fd8
	if (!cr6.lt) goto loc_835E1FD8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r16,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_835E1FD8:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x835e14c4
	if (!cr6.lt) goto loc_835E14C4;
loc_835E1FE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x835E1FF8;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E1FFC"))) PPC_WEAK_FUNC(sub_835E1FFC);
PPC_FUNC_IMPL(__imp__sub_835E1FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2000"))) PPC_WEAK_FUNC(sub_835E2000);
PPC_FUNC_IMPL(__imp__sub_835E2000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x835E2008;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r4,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// ble cr6,0x835e2830
	if (!cr6.gt) goto loc_835E2830;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lfs f30,-25156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25156);
	ctx.f30.f64 = double(temp.f32);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// lfs f31,6564(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6564);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r8,r23,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// li r17,-1
	ctx.r17.s64 = -1;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lis r25,-32222
	ctx.r25.s64 = -2111700992;
	// lis r18,-31744
	ctx.r18.s64 = -2080374784;
	// lis r16,-31744
	ctx.r16.s64 = -2080374784;
	// lis r15,-31744
	ctx.r15.s64 = -2080374784;
	// addi r22,r11,-20344
	ctx.r22.s64 = ctx.r11.s64 + -20344;
	// addi r19,r10,18352
	ctx.r19.s64 = ctx.r10.s64 + 18352;
	// addi r21,r9,18424
	ctx.r21.s64 = ctx.r9.s64 + 18424;
loc_835E2084:
	// lwz r11,18396(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 18396);
	// lwz r10,18380(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18380);
	// lhzx r29,r8,r11
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// extsh r27,r29
	ctx.r27.s64 = ctx.r29.s16;
	// mulli r11,r27,2824
	ctx.r11.s64 = ctx.r27.s64 * 2824;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x835e2108
	if (!cr6.eq) goto loc_835E2108;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835e2100
	if (!cr6.eq) goto loc_835E2100;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e9280
	ctx.lr = 0x835E20C8;
	sub_835E9280(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,35
	ctx.r10.u64 = ctx.r11.u64 | 35;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x835e20f4
	if (!cr6.eq) goto loc_835E20F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e9218
	ctx.lr = 0x835E20E4;
	sub_835E9218(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x835e2810
	goto loc_835E2810;
loc_835E20F4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e2108
	if (cr6.eq) goto loc_835E2108;
loc_835E2100:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_835E2108:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835e2130
	if (!cr6.eq) goto loc_835E2130;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x835e2130
	if (cr6.lt) goto loc_835E2130;
	// addi r3,r30,1576
	ctx.r3.s64 = ctx.r30.s64 + 1576;
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// bl 0x835de9a8
	ctx.lr = 0x835E2130;
	sub_835DE9A8(ctx, base);
loc_835E2130:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e215c
	if (cr6.eq) goto loc_835E215C;
	// lwz r10,1580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x835e215c
	if (!cr6.eq) goto loc_835E215C;
	// stw r23,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e0900
	ctx.lr = 0x835E2158;
	sub_835E0900(ctx, base);
	// b 0x835e2810
	goto loc_835E2810;
loc_835E215C:
	// rlwinm r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e21a4
	if (cr6.eq) goto loc_835E21A4;
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835e21a4
	if (!cr6.eq) goto loc_835E21A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e2190
	if (cr6.eq) goto loc_835E2190;
	// addi r3,r30,1560
	ctx.r3.s64 = ctx.r30.s64 + 1560;
	// bl 0x835eadc8
	ctx.lr = 0x835E218C;
	sub_835EADC8(ctx, base);
	// b 0x835e2198
	goto loc_835E2198;
loc_835E2190:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x835e93c0
	ctx.lr = 0x835E2198;
	sub_835E93C0(ctx, base);
loc_835E2198:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_835E21A4:
	// lwz r3,1624(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r28,r30,1624
	ctx.r28.s64 = ctx.r30.s64 + 1624;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e21c8
	if (cr6.eq) goto loc_835E21C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E21C8;
	sub_835DE818(ctx, base);
loc_835E21C8:
	// addi r3,r30,1596
	ctx.r3.s64 = ctx.r30.s64 + 1596;
	// lwz r4,476(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lfs f29,1584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x835de9a8
	ctx.lr = 0x835E21D8;
	sub_835DE9A8(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x835e2204
	if (cr6.eq) goto loc_835E2204;
	// addi r3,r30,1560
	ctx.r3.s64 = ctx.r30.s64 + 1560;
	// bl 0x835eadd8
	ctx.lr = 0x835E2200;
	sub_835EADD8(ctx, base);
	// b 0x835e220c
	goto loc_835E220C;
loc_835E2204:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x835e94e0
	ctx.lr = 0x835E220C;
	sub_835E94E0(ctx, base);
loc_835E220C:
	// lwz r3,1632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2240
	if (cr6.eq) goto loc_835E2240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E222C;
	sub_835DE818(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831d1ce8
	ctx.lr = 0x835E2234;
	sub_831D1CE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// b 0x835e2244
	goto loc_835E2244;
loc_835E2240:
	// lfs f1,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
loc_835E2244:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r26,r30,24
	ctx.r26.s64 = ctx.r30.s64 + 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9530
	ctx.lr = 0x835E2254;
	sub_835E9530(ctx, base);
	// lwz r3,1636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2274
	if (cr6.eq) goto loc_835E2274;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E2274;
	sub_835DE818(ctx, base);
loc_835E2274:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9580
	ctx.lr = 0x835E2280;
	sub_835E9580(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835e22c0
	if (!cr6.eq) goto loc_835E22C0;
	// lwz r3,1628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// lfs f0,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e22b0
	if (cr6.eq) goto loc_835E22B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E22B0;
	sub_835DE818(ctx, base);
loc_835E22B0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x835e9950
	ctx.lr = 0x835E22C0;
	sub_835E9950(ctx, base);
loc_835E22C0:
	// lwz r3,1640(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e22e0
	if (cr6.eq) goto loc_835E22E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E22E0;
	sub_835DE818(ctx, base);
loc_835E22E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e99b0
	ctx.lr = 0x835E22EC;
	sub_835E99B0(ctx, base);
	// lwz r3,1644(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e230c
	if (cr6.eq) goto loc_835E230C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E230C;
	sub_835DE818(ctx, base);
loc_835E230C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9a00
	ctx.lr = 0x835E2318;
	sub_835E9A00(ctx, base);
	// lwz r3,1652(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e233c
	if (cr6.eq) goto loc_835E233C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E2338;
	sub_835DE818(ctx, base);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
loc_835E233C:
	// lwz r3,1656(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2358
	if (cr6.eq) goto loc_835E2358;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x835de818
	ctx.lr = 0x835E2358;
	sub_835DE818(ctx, base);
loc_835E2358:
	// lwz r3,1660(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// lfs f0,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2378
	if (cr6.eq) goto loc_835E2378;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x835de818
	ctx.lr = 0x835E2378;
	sub_835DE818(ctx, base);
loc_835E2378:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f3,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,1616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9620
	ctx.lr = 0x835E2390;
	sub_835E9620(ctx, base);
	// lwz r3,1664(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// lfs f0,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e23b0
	if (cr6.eq) goto loc_835E23B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E23B0;
	sub_835DE818(ctx, base);
loc_835E23B0:
	// lwz r3,1668(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e23d0
	if (cr6.eq) goto loc_835E23D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x835de818
	ctx.lr = 0x835E23D0;
	sub_835DE818(ctx, base);
loc_835E23D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e95a8
	ctx.lr = 0x835E23E0;
	sub_835E95A8(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r29,r30,1736
	ctx.r29.s64 = ctx.r30.s64 + 1736;
loc_835E23E8:
	// lwz r3,-32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2418
	if (cr6.eq) goto loc_835E2418;
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E2408;
	sub_835DE818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9b88
	ctx.lr = 0x835E2418;
	sub_835E9B88(ctx, base);
loc_835E2418:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2448
	if (cr6.eq) goto loc_835E2448;
	// lfs f0,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E2438;
	sub_835DE818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9bd8
	ctx.lr = 0x835E2448;
	sub_835E9BD8(ctx, base);
loc_835E2448:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x835e23e8
	if (cr6.lt) goto loc_835E23E8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r29,r30,1768
	ctx.r29.s64 = ctx.r30.s64 + 1768;
loc_835E2460:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2498
	if (cr6.eq) goto loc_835E2498;
	// lfs f0,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r31.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x835de818
	ctx.lr = 0x835E248C;
	sub_835DE818(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9420
	ctx.lr = 0x835E2498;
	sub_835E9420(ctx, base);
loc_835E2498:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(ctx.r31.u32, 256, xer);
	// blt cr6,0x835e2460
	if (cr6.lt) goto loc_835E2460;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e24e4
	if (cr6.eq) goto loc_835E24E4;
	// lwz r3,1648(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// lfs f0,-26260(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e24d8
	if (cr6.eq) goto loc_835E24D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E24D8;
	sub_835DE818(ctx, base);
loc_835E24D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835ea650
	ctx.lr = 0x835E24E4;
	sub_835EA650(ctx, base);
loc_835E24E4:
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e253c
	if (!cr6.gt) goto loc_835E253C;
	// addi r29,r30,1672
	ctx.r29.s64 = ctx.r30.s64 + 1672;
loc_835E24F8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2528
	if (cr6.eq) goto loc_835E2528;
	// lfs f0,9008(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E2518;
	sub_835DE818(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835e9b28
	ctx.lr = 0x835E2528;
	sub_835E9B28(ctx, base);
loc_835E2528:
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e24f8
	if (cr6.lt) goto loc_835E24F8;
loc_835E253C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// beq cr6,0x835e256c
	if (cr6.eq) goto loc_835E256C;
	// addi r3,r30,1560
	ctx.r3.s64 = ctx.r30.s64 + 1560;
	// bl 0x835eac58
	ctx.lr = 0x835E2568;
	sub_835EAC58(ctx, base);
	// b 0x835e2574
	goto loc_835E2574;
loc_835E256C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835ea360
	ctx.lr = 0x835E2574;
	sub_835EA360(ctx, base);
loc_835E2574:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e25a0
	if (cr6.eq) goto loc_835E25A0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// blt cr6,0x835e25ac
	if (cr6.lt) goto loc_835E25AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x835e25ac
	goto loc_835E25AC;
loc_835E25A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// oris r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 2097152;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_835E25AC:
	// lwz r11,18400(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 18400);
	// addi r8,r19,4
	ctx.r8.s64 = ctx.r19.s64 + 4;
	// mulli r9,r27,1352
	ctx.r9.s64 = ctx.r27.s64 * 1352;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r10,r20
	ctx.r20.u64 = ctx.r10.u64 + ctx.r20.u64;
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r27,r31,176
	ctx.r27.s64 = ctx.r31.s64 + 176;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_835E25F0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2610
	if (cr6.eq) goto loc_835E2610;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835de818
	ctx.lr = 0x835E2610;
	sub_835DE818(ctx, base);
loc_835E2610:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r22,1168
	ctx.r11.s64 = ctx.r22.s64 + 1168;
	// stfsu f0,4(r27)
	ea = 4 + ctx.r27.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e25f0
	if (cr6.lt) goto loc_835E25F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835e2810
	if (!cr6.eq) goto loc_835E2810;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9df0
	ctx.lr = 0x835E2648;
	sub_835E9DF0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9e18
	ctx.lr = 0x835E2654;
	sub_835E9E18(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9cf8
	ctx.lr = 0x835E2660;
	sub_835E9CF8(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9d20
	ctx.lr = 0x835E266C;
	sub_835E9D20(ctx, base);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9e40
	ctx.lr = 0x835E267C;
	sub_835E9E40(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// ble cr6,0x835e26c8
	if (!cr6.gt) goto loc_835E26C8;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
loc_835E2694:
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9e90
	ctx.lr = 0x835E26A4;
	sub_835E9E90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// and r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, xer);
	// stwu r6,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r28.u32 = ea;
	// blt cr6,0x835e2694
	if (cr6.lt) goto loc_835E2694;
loc_835E26C8:
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9ee0
	ctx.lr = 0x835E26D8;
	sub_835E9EE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_835E26E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x835e2714
	if (!cr6.lt) goto loc_835E2714;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9f30
	ctx.lr = 0x835E2700;
	sub_835E9F30(ctx, base);
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// b 0x835e2720
	goto loc_835E2720;
loc_835E2714:
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r17,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r17.u32);
loc_835E2720:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,16
	cr6.compare<int32_t>(ctx.r4.s32, 16, xer);
	// blt cr6,0x835e26e8
	if (cr6.lt) goto loc_835E26E8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9d48
	ctx.lr = 0x835E2740;
	sub_835E9D48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e2770
	if (!cr6.eq) goto loc_835E2770;
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// std r10,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r10.u64);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// stw r7,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r7.u32);
loc_835E2770:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835e9f80
	ctx.lr = 0x835E277C;
	sub_835E9F80(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r7,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r7.u32);
	// lwz r6,1616(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r6,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r6.u32);
	// lwz r5,1620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r5,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
	// bl 0x835e9fd0
	ctx.lr = 0x835E27AC;
	sub_835E9FD0(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r27,r30,2792
	ctx.r27.s64 = ctx.r30.s64 + 2792;
	// stw r4,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r4.u32);
loc_835E27BC:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835e2800
	if (cr6.eq) goto loc_835E2800;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_835E27CC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e27f0
	if (cr6.eq) goto loc_835E27F0;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r4,81
	ctx.r11.s64 = ctx.r4.s64 + 81;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e9ca8
	ctx.lr = 0x835E27F0;
	sub_835E9CA8(ctx, base);
loc_835E27F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x835e27cc
	if (cr6.lt) goto loc_835E27CC;
loc_835E2800:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(ctx.r29.u32, 64, xer);
	// blt cr6,0x835e27bc
	if (cr6.lt) goto loc_835E27BC;
loc_835E2810:
	// addi r11,r14,1
	ctx.r11.s64 = ctx.r14.s64 + 1;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x835e2084
	if (cr6.lt) goto loc_835E2084;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_835E2830:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r9,r11,18364
	ctx.r9.s64 = ctx.r11.s64 + 18364;
	// stw r20,18364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18364, ctx.r20.u32);
	// stw r10,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r10.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E2854"))) PPC_WEAK_FUNC(sub_835E2854);
PPC_FUNC_IMPL(__imp__sub_835E2854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2858"))) PPC_WEAK_FUNC(sub_835E2858);
PPC_FUNC_IMPL(__imp__sub_835E2858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E2860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mulli r10,r30,2824
	ctx.r10.s64 = ctx.r30.s64 * 2824;
	// lwz r11,18380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18380);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x835df3d0
	ctx.lr = 0x835E2880;
	sub_835DF3D0(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r10,18404
	ctx.r3.s64 = ctx.r10.s64 + 18404;
	// bl 0x835e0d70
	ctx.lr = 0x835E2890;
	sub_835E0D70(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,2792
	ctx.r9.s64 = ctx.r31.s64 + 2792;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_835E28B0:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835e28b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E28B0;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// rlwinm r8,r30,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r7,-31744
	ctx.r7.s64 = -2080374784;
	// mulli r11,r30,1352
	ctx.r11.s64 = ctx.r30.s64 * 1352;
	// lwz r9,18384(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18384);
	// stdx r10,r8,r9
	PPC_STORE_U64(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u64);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r7,18352
	ctx.r5.s64 = ctx.r7.s64 + 18352;
	// lwz r10,18352(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18352);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E290C"))) PPC_WEAK_FUNC(sub_835E290C);
PPC_FUNC_IMPL(__imp__sub_835E290C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2910"))) PPC_WEAK_FUNC(sub_835E2910);
PPC_FUNC_IMPL(__imp__sub_835E2910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E2918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// addi r30,r11,18404
	ctx.r30.s64 = ctx.r11.s64 + 18404;
	// lhz r11,18404(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18404);
	// lwz r10,18400(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18400);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r10,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r10.s64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r10,18400(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18400, ctx.r10.u32);
	// blt cr6,0x835e29a4
	if (cr6.lt) goto loc_835E29A4;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
loc_835E2948:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// lwz r10,18380(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18380);
	// mulli r9,r31,2824
	ctx.r9.s64 = ctx.r31.s64 * 2824;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,10,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e296c
	if (cr6.eq) goto loc_835E296C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x835e2858
	ctx.lr = 0x835E296C;
	sub_835E2858(ctx, base);
loc_835E296C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x835e2998
	if (cr6.lt) goto loc_835E2998;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x835e2998
	if (!cr6.lt) goto loc_835E2998;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_835E2998:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x835e2948
	if (!cr6.lt) goto loc_835E2948;
loc_835E29A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E29AC"))) PPC_WEAK_FUNC(sub_835E29AC);
PPC_FUNC_IMPL(__imp__sub_835E29AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E29B0"))) PPC_WEAK_FUNC(sub_835E29B0);
PPC_FUNC_IMPL(__imp__sub_835E29B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x835E29B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x835e2a08
	if (cr6.eq) goto loc_835E2A08;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_835E29D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835e29d4
	if (!cr6.eq) goto loc_835E29D4;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// ble cr6,0x835e2a08
	if (!cr6.gt) goto loc_835E2A08;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,51
	ctx.r3.u64 = ctx.r3.u64 | 51;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_835E2A08:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r20,r11,18404
	ctx.r20.s64 = ctx.r11.s64 + 18404;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x835e0c70
	ctx.lr = 0x835E2A24;
	sub_835E0C70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e2a38
	if (cr6.eq) goto loc_835E2A38;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,48
	ctx.r31.u64 = ctx.r31.u64 | 48;
	// b 0x835e2cd0
	goto loc_835E2CD0;
loc_835E2A38:
	// lhz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// extsh r23,r21
	ctx.r23.s64 = ctx.r21.s16;
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// mulli r10,r23,2824
	ctx.r10.s64 = ctx.r23.s64 * 2824;
	// lwz r11,18380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18380);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r23,2760
	ctx.r11.s64 = ctx.r23.s64 * 2760;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,18392(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18392);
	// lwz r10,18388(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18388);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x835deb08
	ctx.lr = 0x835E2A7C;
	sub_835DEB08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835deb08
	ctx.lr = 0x835E2A84;
	sub_835DEB08(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// sth r10,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r10.u16);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
loc_835E2AB8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835e2ab8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E2AB8;
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// addi r29,r22,44
	ctx.r29.s64 = ctx.r22.s64 + 44;
	// lbz r9,28(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 28);
	// li r28,16
	ctx.r28.s64 = 16;
	// lhz r8,30(r22)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r22.u32 + 30);
	// lwz r7,8(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r6,24(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// lwz r5,32(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// lwz r4,20(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r3,36(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// stb r9,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r9.u8);
	// sth r8,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r8.u16);
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
loc_835E2B14:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e2b5c
	if (cr6.eq) goto loc_835E2B5C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_835E2B24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835e2b24
	if (!cr6.eq) goto loc_835E2B24;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bgt cr6,0x835e2b5c
	if (cr6.gt) goto loc_835E2B5C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835d8e18
	ctx.lr = 0x835E2B54;
	sub_835D8E18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_835E2B5C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x835e2b14
	if (!cr0.eq) goto loc_835E2B14;
	// lwz r11,24(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,40(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bne cr6,0x835e2bc8
	if (!cr6.eq) goto loc_835E2BC8;
	// addi r3,r30,1560
	ctx.r3.s64 = ctx.r30.s64 + 1560;
	// bl 0x835eaca0
	ctx.lr = 0x835E2B90;
	sub_835EACA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e2bdc
	if (!cr6.eq) goto loc_835E2BDC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_835E2BA8:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x835e2be8
	if (cr6.eq) goto loc_835E2BE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x835e2bf8
	goto loc_835E2BF8;
loc_835E2BC8:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x835eab00
	ctx.lr = 0x835E2BD0;
	sub_835EAB00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e2ba8
	if (cr6.eq) goto loc_835E2BA8;
loc_835E2BDC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x835e2858
	ctx.lr = 0x835E2BE4;
	sub_835E2858(ctx, base);
	// b 0x835e2cd0
	goto loc_835E2CD0;
loc_835E2BE8:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_835E2BF8:
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// lwz r7,12(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// extsh r4,r21
	ctx.r4.s64 = ctx.r21.s16;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,18372(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 18372);
loc_835E2C14:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mulhwu r10,r11,r3
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r3.u32)) >> 32;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// rlwinm r10,r9,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf. r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r9,18372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18372, ctx.r9.u32);
	// bne 0x835e2c48
	if (!cr0.eq) goto loc_835E2C48;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,18372(r8)
	PPC_STORE_U32(ctx.r8.u32 + 18372, ctx.r9.u32);
loc_835E2C48:
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rldicr r10,r10,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r25,r10,r4
	ctx.r25.u64 = ctx.r10.u64 | ctx.r4.u64;
	// blt cr6,0x835e2c90
	if (cr6.lt) goto loc_835E2C90;
loc_835E2C64:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ld r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r25,r30
	cr6.compare<uint64_t>(ctx.r25.u64, ctx.r30.u64, xer);
	// beq cr6,0x835e2c88
	if (cr6.eq) goto loc_835E2C88;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835e2c64
	if (!cr6.lt) goto loc_835E2C64;
loc_835E2C88:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x835e2c14
	if (!cr6.lt) goto loc_835E2C14;
loc_835E2C90:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// blt cr6,0x835e2cb4
	if (cr6.lt) goto loc_835E2CB4;
	// lhz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, xer);
	// bge cr6,0x835e2cb4
	if (!cr6.lt) goto loc_835E2CB4;
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// std r25,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r25.u64);
loc_835E2CB4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r25,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r25.u64);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x835e0a08
	ctx.lr = 0x835E2CD0;
	sub_835E0A08(ctx, base);
loc_835E2CD0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x835e2cdc
	if (cr6.eq) goto loc_835E2CDC;
	// std r25,0(r19)
	PPC_STORE_U64(ctx.r19.u32 + 0, ctx.r25.u64);
loc_835E2CDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E2CE8"))) PPC_WEAK_FUNC(sub_835E2CE8);
PPC_FUNC_IMPL(__imp__sub_835E2CE8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e2d70
	if (cr6.eq) goto loc_835E2D70;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e2d24
	if (cr6.eq) goto loc_835E2D24;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x835e2d34
	goto loc_835E2D34;
loc_835E2D24:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_835E2D34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9a580
	ctx.lr = 0x835E2D3C;
	sub_83A9A580(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x835e2d68
	if (!cr6.lt) goto loc_835E2D68;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
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
loc_835E2D68:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_835E2D70:
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

__attribute__((alias("__imp__sub_835E2D84"))) PPC_WEAK_FUNC(sub_835E2D84);
PPC_FUNC_IMPL(__imp__sub_835E2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2D88"))) PPC_WEAK_FUNC(sub_835E2D88);
PPC_FUNC_IMPL(__imp__sub_835E2D88) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e2da8
	if (cr6.eq) goto loc_835E2DA8;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// b 0x835e2db8
	goto loc_835E2DB8;
loc_835E2DA8:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,600
	ctx.r10.s64 = 600;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_835E2DB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9a7e0
	ctx.lr = 0x835E2DC8;
	sub_83A9A7E0(ctx, base);
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

__attribute__((alias("__imp__sub_835E2DDC"))) PPC_WEAK_FUNC(sub_835E2DDC);
PPC_FUNC_IMPL(__imp__sub_835E2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2DE0"))) PPC_WEAK_FUNC(sub_835E2DE0);
PPC_FUNC_IMPL(__imp__sub_835E2DE0) {
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
	// bl 0x83a9a8c8
	ctx.lr = 0x835E2DF0;
	sub_83A9A8C8(ctx, base);
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

__attribute__((alias("__imp__sub_835E2E04"))) PPC_WEAK_FUNC(sub_835E2E04);
PPC_FUNC_IMPL(__imp__sub_835E2E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2E08"))) PPC_WEAK_FUNC(sub_835E2E08);
PPC_FUNC_IMPL(__imp__sub_835E2E08) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e2ea8
	if (cr6.eq) goto loc_835E2EA8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e2e54
	if (cr6.eq) goto loc_835E2E54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// b 0x835e2e6c
	goto loc_835E2E6C;
loc_835E2E54:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_835E2E6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9a680
	ctx.lr = 0x835E2E74;
	sub_83A9A680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x835e2ea0
	if (!cr6.lt) goto loc_835E2EA0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
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
loc_835E2EA0:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_835E2EA8:
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

__attribute__((alias("__imp__sub_835E2EBC"))) PPC_WEAK_FUNC(sub_835E2EBC);
PPC_FUNC_IMPL(__imp__sub_835E2EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2EC0"))) PPC_WEAK_FUNC(sub_835E2EC0);
PPC_FUNC_IMPL(__imp__sub_835E2EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e2ee4
	if (cr6.eq) goto loc_835E2EE4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x835e2ef0
	goto loc_835E2EF0;
loc_835E2EE4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r9,1000
	ctx.r9.s64 = 1000;
loc_835E2EF0:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a9a940
	ctx.lr = 0x835E2F0C;
	sub_83A9A940(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E2F20"))) PPC_WEAK_FUNC(sub_835E2F20);
PPC_FUNC_IMPL(__imp__sub_835E2F20) {
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
	// bl 0x83a9aa30
	ctx.lr = 0x835E2F30;
	sub_83A9AA30(ctx, base);
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

__attribute__((alias("__imp__sub_835E2F44"))) PPC_WEAK_FUNC(sub_835E2F44);
PPC_FUNC_IMPL(__imp__sub_835E2F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E2F48"))) PPC_WEAK_FUNC(sub_835E2F48);
PPC_FUNC_IMPL(__imp__sub_835E2F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r8,18504
	ctx.r6.s64 = ctx.r8.s64 + 18504;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r9,18504(r8)
	PPC_STORE_U16(ctx.r8.u32 + 18504, ctx.r9.u16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stb r10,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r10.u8);
	// li r10,96
	ctx.r10.s64 = 96;
	// stb r8,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r8.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r10,12(r6)
	PPC_STORE_U16(ctx.r6.u32 + 12, ctx.r10.u16);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r8,20(r6)
	PPC_STORE_U16(ctx.r6.u32 + 20, ctx.r8.u16);
	// sth r10,28(r6)
	PPC_STORE_U16(ctx.r6.u32 + 28, ctx.r10.u16);
	// ori r11,r7,48000
	ctx.r11.u64 = ctx.r7.u64 | 48000;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r9,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r11.u32);
	// stw r11,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r11.u32);
	// sth r8,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r8.u16);
	// stw r11,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r11.u32);
	// stw r11,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r11.u32);
	// sth r10,44(r6)
	PPC_STORE_U16(ctx.r6.u32 + 44, ctx.r10.u16);
	// sth r8,52(r6)
	PPC_STORE_U16(ctx.r6.u32 + 52, ctx.r8.u16);
	// stw r11,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r11.u32);
	// sth r10,60(r6)
	PPC_STORE_U16(ctx.r6.u32 + 60, ctx.r10.u16);
	// sth r8,68(r6)
	PPC_STORE_U16(ctx.r6.u32 + 68, ctx.r8.u16);
	// stw r11,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E2FFC"))) PPC_WEAK_FUNC(sub_835E2FFC);
PPC_FUNC_IMPL(__imp__sub_835E2FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3000"))) PPC_WEAK_FUNC(sub_835E3000);
PPC_FUNC_IMPL(__imp__sub_835E3000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e3078
	if (cr6.eq) goto loc_835E3078;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835E3024:
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// lhz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// lhz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 68);
	// lhz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bdnz 0x835e3024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E3024;
loc_835E3078:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E3080"))) PPC_WEAK_FUNC(sub_835E3080);
PPC_FUNC_IMPL(__imp__sub_835E3080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E3088;
	__savegprlr_28(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x835e30e4
	if (cr6.lt) goto loc_835E30E4;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_835E30B0:
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r9,r9,152
	ctx.r9.s64 = ctx.r9.s64 + 152;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r6,104(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 104);
	// lhz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x835e30b0
	if (cr6.lt) goto loc_835E30B0;
loc_835E30E4:
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bge cr6,0x835e3110
	if (!cr6.lt) goto loc_835E3110;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 * 76;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835E3110:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E311C"))) PPC_WEAK_FUNC(sub_835E311C);
PPC_FUNC_IMPL(__imp__sub_835E311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3120"))) PPC_WEAK_FUNC(sub_835E3120);
PPC_FUNC_IMPL(__imp__sub_835E3120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835E3140:
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x835e3158
	if (!cr6.lt) goto loc_835E3158;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_835E3158:
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// bdnz 0x835e3140
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E3140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E3164"))) PPC_WEAK_FUNC(sub_835E3164);
PPC_FUNC_IMPL(__imp__sub_835E3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3168"))) PPC_WEAK_FUNC(sub_835E3168);
PPC_FUNC_IMPL(__imp__sub_835E3168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E3170;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r6,r9,48000
	ctx.r6.u64 = ctx.r9.u64 | 48000;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// ori r27,r27,21
	ctx.r27.u64 = ctx.r27.u64 | 21;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e31f8
	if (!cr6.gt) goto loc_835E31F8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83a9aaa8
	ctx.lr = 0x835E31EC;
	sub_83A9AAA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e31f8
	if (cr6.lt) goto loc_835E31F8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_835E31F8:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3228
	if (!cr6.gt) goto loc_835E3228;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83a9aaa8
	ctx.lr = 0x835E321C;
	sub_83A9AAA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e3228
	if (cr6.lt) goto loc_835E3228;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_835E3228:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835e3240
	if (cr6.eq) goto loc_835E3240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835E3240:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E324C"))) PPC_WEAK_FUNC(sub_835E324C);
PPC_FUNC_IMPL(__imp__sub_835E324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3250"))) PPC_WEAK_FUNC(sub_835E3250);
PPC_FUNC_IMPL(__imp__sub_835E3250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E3258;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r6,r9,48000
	ctx.r6.u64 = ctx.r9.u64 | 48000;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ori r27,r27,21
	ctx.r27.u64 = ctx.r27.u64 | 21;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e32d4
	if (!cr6.gt) goto loc_835E32D4;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83a9ac08
	ctx.lr = 0x835E32C8;
	sub_83A9AC08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e32d4
	if (cr6.lt) goto loc_835E32D4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_835E32D4:
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3304
	if (!cr6.gt) goto loc_835E3304;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83a9ac08
	ctx.lr = 0x835E32F8;
	sub_83A9AC08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e3304
	if (cr6.lt) goto loc_835E3304;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_835E3304:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835e331c
	if (cr6.eq) goto loc_835E331C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835E331C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3328"))) PPC_WEAK_FUNC(sub_835E3328);
PPC_FUNC_IMPL(__imp__sub_835E3328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3330;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// ori r5,r9,48000
	ctx.r5.u64 = ctx.r9.u64 | 48000;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ori r29,r29,21
	ctx.r29.u64 = ctx.r29.u64 | 21;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e33b4
	if (!cr6.gt) goto loc_835E33B4;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x83a9ad58
	ctx.lr = 0x835E33A8;
	sub_83A9AD58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e33b4
	if (cr6.lt) goto loc_835E33B4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_835E33B4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835e33cc
	if (cr6.eq) goto loc_835E33CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835E33CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E33D8"))) PPC_WEAK_FUNC(sub_835E33D8);
PPC_FUNC_IMPL(__imp__sub_835E33D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E33E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r6,r9,48000
	ctx.r6.u64 = ctx.r9.u64 | 48000;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// ori r27,r27,21
	ctx.r27.u64 = ctx.r27.u64 | 21;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3468
	if (!cr6.gt) goto loc_835E3468;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83a9aeb8
	ctx.lr = 0x835E345C;
	sub_83A9AEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e3468
	if (cr6.lt) goto loc_835E3468;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_835E3468:
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3498
	if (!cr6.gt) goto loc_835E3498;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x83a9aeb8
	ctx.lr = 0x835E348C;
	sub_83A9AEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e3498
	if (cr6.lt) goto loc_835E3498;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_835E3498:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835e34b0
	if (cr6.eq) goto loc_835E34B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835E34B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E34BC"))) PPC_WEAK_FUNC(sub_835E34BC);
PPC_FUNC_IMPL(__imp__sub_835E34BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E34C0"))) PPC_WEAK_FUNC(sub_835E34C0);
PPC_FUNC_IMPL(__imp__sub_835E34C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x835E34C8;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// extsb r24,r11
	ctx.r24.s64 = ctx.r11.s8;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// ori r6,r10,48128
	ctx.r6.u64 = ctx.r10.u64 | 48128;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r20,-32768
	ctx.r20.s64 = -2147483648;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// ori r20,r20,21
	ctx.r20.u64 = ctx.r20.u64 | 21;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r24,6
	cr6.compare<int32_t>(ctx.r24.s32, 6, xer);
	// li r26,12288
	ctx.r26.s64 = 12288;
	// bge cr6,0x835e3534
	if (!cr6.lt) goto loc_835E3534;
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_835E3534:
	// lhz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x835e3574
	if (!cr6.gt) goto loc_835E3574;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83a9b018
	ctx.lr = 0x835E3564;
	sub_83A9B018(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e3574
	if (cr6.lt) goto loc_835E3574;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mullw r28,r30,r26
	ctx.r28.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
loc_835E3574:
	// lhz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x835e35b0
	if (!cr6.gt) goto loc_835E35B0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83a9b018
	ctx.lr = 0x835E359C;
	sub_83A9B018(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e35b0
	if (cr6.lt) goto loc_835E35B0;
	// mullw r11,r30,r26
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r26.s32);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_835E35B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r25,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r25.u8);
	// li r10,1920
	ctx.r10.s64 = 1920;
	// stb r24,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r24.u8);
	// ori r9,r11,48000
	ctx.r9.u64 = ctx.r11.u64 | 48000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a431e0
	ctx.lr = 0x835E35D8;
	sub_83A431E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x835e35e4
	if (!cr6.gt) goto loc_835E35E4;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_835E35E4:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x835e3608
	if (cr6.eq) goto loc_835E3608;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x835e3608
	if (cr6.eq) goto loc_835E3608;
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_835E3608:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3614"))) PPC_WEAK_FUNC(sub_835E3614);
PPC_FUNC_IMPL(__imp__sub_835E3614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3618"))) PPC_WEAK_FUNC(sub_835E3618);
PPC_FUNC_IMPL(__imp__sub_835E3618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835E3620;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e3714
	if (cr6.eq) goto loc_835E3714;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835e3714
	if (cr6.eq) goto loc_835E3714;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x835e3708
	if (!cr6.gt) goto loc_835E3708;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_835E3668:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e3168
	ctx.lr = 0x835E3678;
	sub_835E3168(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x835e3250
	ctx.lr = 0x835E3690;
	sub_835E3250(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x835e3328
	ctx.lr = 0x835E36A8;
	sub_835E3328(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x835e33d8
	ctx.lr = 0x835E36C0;
	sub_835E33D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x835e34c0
	ctx.lr = 0x835E36DC;
	sub_835E34C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x835e3668
	if (cr6.lt) goto loc_835E3668;
loc_835E3708:
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r27.u32);
loc_835E3714:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E371C"))) PPC_WEAK_FUNC(sub_835E371C);
PPC_FUNC_IMPL(__imp__sub_835E371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3720"))) PPC_WEAK_FUNC(sub_835E3720);
PPC_FUNC_IMPL(__imp__sub_835E3720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83a9b230
	ctx.lr = 0x835E3730;
	sub_83A9B230(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,18584
	ctx.r30.s64 = ctx.r11.s64 + 18584;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,18584(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18584);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x835e3768
	if (cr6.eq) goto loc_835E3768;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x835E3760;
	sub_831CE420(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_835E3768:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3774"))) PPC_WEAK_FUNC(sub_835E3774);
PPC_FUNC_IMPL(__imp__sub_835E3774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3778"))) PPC_WEAK_FUNC(sub_835E3778);
PPC_FUNC_IMPL(__imp__sub_835E3778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3780;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r6,r9,48000
	ctx.r6.u64 = ctx.r9.u64 | 48000;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ble cr6,0x835e37fc
	if (!cr6.gt) goto loc_835E37FC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9ab08
	ctx.lr = 0x835E37F8;
	sub_83A9AB08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E37FC:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,18584
	ctx.r29.s64 = ctx.r11.s64 + 18584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x835E3810;
	sub_835977D8(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3844
	if (!cr6.gt) goto loc_835E3844;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9ab08
	ctx.lr = 0x835E3840;
	sub_83A9AB08(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E3844:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x835E3850;
	sub_835977D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E385C"))) PPC_WEAK_FUNC(sub_835E385C);
PPC_FUNC_IMPL(__imp__sub_835E385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3860"))) PPC_WEAK_FUNC(sub_835E3860);
PPC_FUNC_IMPL(__imp__sub_835E3860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3868;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r6,r9,48000
	ctx.r6.u64 = ctx.r9.u64 | 48000;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ble cr6,0x835e38d8
	if (!cr6.gt) goto loc_835E38D8;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9ac60
	ctx.lr = 0x835E38D4;
	sub_83A9AC60(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E38D8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,18584
	ctx.r29.s64 = ctx.r11.s64 + 18584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x835E38EC;
	sub_835977D8(ctx, base);
	// lhz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3920
	if (!cr6.gt) goto loc_835E3920;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9ac60
	ctx.lr = 0x835E391C;
	sub_83A9AC60(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E3920:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x835E392C;
	sub_835977D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3938"))) PPC_WEAK_FUNC(sub_835E3938);
PPC_FUNC_IMPL(__imp__sub_835E3938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// ori r5,r8,48000
	ctx.r5.u64 = ctx.r8.u64 | 48000;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x835e39b8
	if (!cr6.gt) goto loc_835E39B8;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x83a9adb8
	ctx.lr = 0x835E39B4;
	sub_83A9ADB8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E39B8:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,18584
	ctx.r3.s64 = ctx.r11.s64 + 18584;
	// bl 0x835977d8
	ctx.lr = 0x835E39C8;
	sub_835977D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E39DC"))) PPC_WEAK_FUNC(sub_835E39DC);
PPC_FUNC_IMPL(__imp__sub_835E39DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E39E0"))) PPC_WEAK_FUNC(sub_835E39E0);
PPC_FUNC_IMPL(__imp__sub_835E39E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E39E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r6,r9,48000
	ctx.r6.u64 = ctx.r9.u64 | 48000;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ble cr6,0x835e3a64
	if (!cr6.gt) goto loc_835E3A64;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9af18
	ctx.lr = 0x835E3A60;
	sub_83A9AF18(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E3A64:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,18584
	ctx.r29.s64 = ctx.r11.s64 + 18584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x835E3A78;
	sub_835977D8(ctx, base);
	// lhz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3aac
	if (!cr6.gt) goto loc_835E3AAC;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9af18
	ctx.lr = 0x835E3AA8;
	sub_83A9AF18(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E3AAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x835E3AB8;
	sub_835977D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3AC4"))) PPC_WEAK_FUNC(sub_835E3AC4);
PPC_FUNC_IMPL(__imp__sub_835E3AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3AC8"))) PPC_WEAK_FUNC(sub_835E3AC8);
PPC_FUNC_IMPL(__imp__sub_835E3AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lhz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,8
	ctx.r8.s64 = 8;
	// ori r7,r9,48128
	ctx.r7.u64 = ctx.r9.u64 | 48128;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ble cr6,0x835e3b44
	if (!cr6.gt) goto loc_835E3B44;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9b070
	ctx.lr = 0x835E3B40;
	sub_83A9B070(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E3B44:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,18584
	ctx.r29.s64 = ctx.r11.s64 + 18584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x835E3B58;
	sub_835977D8(ctx, base);
	// lhz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x835e3b8c
	if (!cr6.gt) goto loc_835E3B8C;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// bl 0x83a9b070
	ctx.lr = 0x835E3B88;
	sub_83A9B070(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_835E3B8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x835E3B98;
	sub_835977D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3BA4"))) PPC_WEAK_FUNC(sub_835E3BA4);
PPC_FUNC_IMPL(__imp__sub_835E3BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3BA8"))) PPC_WEAK_FUNC(sub_835E3BA8);
PPC_FUNC_IMPL(__imp__sub_835E3BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3BB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r8,18584
	ctx.r3.s64 = ctx.r8.s64 + 18584;
	// stw r11,18580(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18580, ctx.r11.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ad5e38
	ctx.lr = 0x835E3BD8;
	sub_82AD5E38(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x835e3c3c
	if (!cr6.gt) goto loc_835E3C3C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_835E3BEC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e3778
	ctx.lr = 0x835E3BF8;
	sub_835E3778(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e3860
	ctx.lr = 0x835E3C04;
	sub_835E3860(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e3938
	ctx.lr = 0x835E3C10;
	sub_835E3938(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e39e0
	ctx.lr = 0x835E3C1C;
	sub_835E39E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x835e3ac8
	ctx.lr = 0x835E3C28;
	sub_835E3AC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x835e3bec
	if (cr6.lt) goto loc_835E3BEC;
loc_835E3C3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3C48"))) PPC_WEAK_FUNC(sub_835E3C48);
PPC_FUNC_IMPL(__imp__sub_835E3C48) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835db408
	sub_835DB408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3C54"))) PPC_WEAK_FUNC(sub_835E3C54);
PPC_FUNC_IMPL(__imp__sub_835E3C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3C58"))) PPC_WEAK_FUNC(sub_835E3C58);
PPC_FUNC_IMPL(__imp__sub_835E3C58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835db4a0
	sub_835DB4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3C64"))) PPC_WEAK_FUNC(sub_835E3C64);
PPC_FUNC_IMPL(__imp__sub_835E3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3C68"))) PPC_WEAK_FUNC(sub_835E3C68);
PPC_FUNC_IMPL(__imp__sub_835E3C68) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x835db520
	sub_835DB520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3C74"))) PPC_WEAK_FUNC(sub_835E3C74);
PPC_FUNC_IMPL(__imp__sub_835E3C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3C78"))) PPC_WEAK_FUNC(sub_835E3C78);
PPC_FUNC_IMPL(__imp__sub_835E3C78) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83a95cc8
	ctx.lr = 0x835E3C9C;
	sub_83A95CC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835e3ca8
	if (cr6.eq) goto loc_835E3CA8;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_835E3CA8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// ori r7,r10,8209
	ctx.r7.u64 = ctx.r10.u64 | 8209;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
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

__attribute__((alias("__imp__sub_835E3CD4"))) PPC_WEAK_FUNC(sub_835E3CD4);
PPC_FUNC_IMPL(__imp__sub_835E3CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3CD8"))) PPC_WEAK_FUNC(sub_835E3CD8);
PPC_FUNC_IMPL(__imp__sub_835E3CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e3d74
	if (cr6.eq) goto loc_835E3D74;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x835E3D0C;
	sub_831CDCF0(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// li r9,97
	ctx.r9.s64 = 97;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835E3D1C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x835e3d1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E3D1C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83a95b48
	ctx.lr = 0x835E3D38;
	sub_83A95B48(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,18600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18600, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x835e3d6c
	if (cr6.gt) goto loc_835E3D6C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_835E3D6C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_835E3D74:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E3D88"))) PPC_WEAK_FUNC(sub_835E3D88);
PPC_FUNC_IMPL(__imp__sub_835E3D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E3D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,17404
	ctx.r4.s64 = ctx.r11.s64 + 17404;
	// addi r3,r10,18608
	ctx.r3.s64 = ctx.r10.s64 + 18608;
	// bl 0x835eade0
	ctx.lr = 0x835E3DB0;
	sub_835EADE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835e3dc8
	if (cr6.eq) goto loc_835E3DC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a95d98
	ctx.lr = 0x835E3DC8;
	sub_83A95D98(ctx, base);
loc_835E3DC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3DD4"))) PPC_WEAK_FUNC(sub_835E3DD4);
PPC_FUNC_IMPL(__imp__sub_835E3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3DD8"))) PPC_WEAK_FUNC(sub_835E3DD8);
PPC_FUNC_IMPL(__imp__sub_835E3DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,18608
	ctx.r3.s64 = ctx.r11.s64 + 18608;
	// b 0x83572958
	sub_83572958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3DE4"))) PPC_WEAK_FUNC(sub_835E3DE4);
PPC_FUNC_IMPL(__imp__sub_835E3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3DE8"))) PPC_WEAK_FUNC(sub_835E3DE8);
PPC_FUNC_IMPL(__imp__sub_835E3DE8) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,17412
	ctx.r9.s64 = ctx.r11.s64 + 17412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x835e3e1c
	if (cr6.eq) goto loc_835E3E1C;
	// bl 0x82416268
	ctx.lr = 0x835E3E18;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835E3E1C:
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

__attribute__((alias("__imp__sub_835E3E30"))) PPC_WEAK_FUNC(sub_835E3E30);
PPC_FUNC_IMPL(__imp__sub_835E3E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r11,r11,18660
	ctx.r11.s64 = ctx.r11.s64 + 18660;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_835E3E6C:
	// lhz r8,26(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// beq cr6,0x835e3e8c
	if (cr6.eq) goto loc_835E3E8C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x835e3e6c
	if (!cr6.eq) goto loc_835E3E6C;
	// blr 
	return;
loc_835E3E8C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e3e9c
	if (cr6.eq) goto loc_835E3E9C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_835E3E9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E3EA4"))) PPC_WEAK_FUNC(sub_835E3EA4);
PPC_FUNC_IMPL(__imp__sub_835E3EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E3EA8"))) PPC_WEAK_FUNC(sub_835E3EA8);
PPC_FUNC_IMPL(__imp__sub_835E3EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835E3EB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e3f88
	if (cr6.eq) goto loc_835E3F88;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// addi r30,r11,18660
	ctx.r30.s64 = ctx.r11.s64 + 18660;
	// ori r29,r29,272
	ctx.r29.u64 = ctx.r29.u64 | 272;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e3f84
	if (cr6.eq) goto loc_835E3F84;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_835E3EFC:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(ctx.r28.u32, 65535, xer);
	// beq cr6,0x835e3f24
	if (cr6.eq) goto loc_835E3F24;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x835e3f24
	if (cr6.eq) goto loc_835E3F24;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e3f78
	if (cr6.eq) goto loc_835E3F78;
loc_835E3F24:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a96138
	ctx.lr = 0x835E3F30;
	sub_83A96138(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x835e3f74
	if (cr6.lt) goto loc_835E3F74;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x835e3f48
	if (cr6.eq) goto loc_835E3F48;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_835E3F48:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x835e3f58
	if (cr6.eq) goto loc_835E3F58;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// sth r11,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r11.u16);
loc_835E3F58:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x835e3f64
	if (cr6.eq) goto loc_835E3F64;
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
loc_835E3F64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x835e3f78
	goto loc_835E3F78;
loc_835E3F74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_835E3F78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x835e3efc
	if (!cr6.eq) goto loc_835E3EFC;
loc_835E3F84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_835E3F88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E3F90"))) PPC_WEAK_FUNC(sub_835E3F90);
PPC_FUNC_IMPL(__imp__sub_835E3F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835E3F98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// addi r30,r11,18660
	ctx.r30.s64 = ctx.r11.s64 + 18660;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// ori r29,r29,272
	ctx.r29.u64 = ctx.r29.u64 | 272;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e404c
	if (cr6.eq) goto loc_835E404C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_835E3FD0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(ctx.r28.u32, 65535, xer);
	// beq cr6,0x835e3ff8
	if (cr6.eq) goto loc_835E3FF8;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x835e3ff8
	if (cr6.eq) goto loc_835E3FF8;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e4040
	if (cr6.eq) goto loc_835E4040;
loc_835E3FF8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a966a8
	ctx.lr = 0x835E4004;
	sub_83A966A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e403c
	if (cr6.eq) goto loc_835E403C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x835e401c
	if (cr6.eq) goto loc_835E401C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_835E401C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x835e402c
	if (cr6.eq) goto loc_835E402C;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
loc_835E402C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x835e4040
	goto loc_835E4040;
loc_835E403C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_835E4040:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x835e3fd0
	if (!cr6.eq) goto loc_835E3FD0;
loc_835E404C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4058"))) PPC_WEAK_FUNC(sub_835E4058);
PPC_FUNC_IMPL(__imp__sub_835E4058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E4060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,18608
	ctx.r28.s64 = ctx.r11.s64 + 18608;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsh r10,r31
	ctx.r10.s64 = ctx.r31.s16;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ori r29,r29,16
	ctx.r29.u64 = ctx.r29.u64 | 16;
	// bne cr6,0x835e40e4
	if (!cr6.eq) goto loc_835E40E4;
	// bl 0x83a96708
	ctx.lr = 0x835E40A0;
	sub_83A96708(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,18660
	ctx.r30.s64 = ctx.r11.s64 + 18660;
	// lwz r11,18660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18660);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x835e40d8
	if (cr6.eq) goto loc_835E40D8;
loc_835E40B8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e40cc
	if (cr6.eq) goto loc_835E40CC;
	// bl 0x835e83f8
	ctx.lr = 0x835E40C8;
	sub_835E83F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_835E40CC:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x835e40b8
	if (!cr6.eq) goto loc_835E40B8;
loc_835E40D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e62630
	ctx.lr = 0x835E40E0;
	sub_82E62630(ctx, base);
	// b 0x835e4178
	goto loc_835E4178;
loc_835E40E4:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,18660
	ctx.r30.s64 = ctx.r11.s64 + 18660;
	// lwz r11,18660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18660);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x835e417c
	if (cr6.eq) goto loc_835E417C;
loc_835E40FC:
	// lhz r9,26(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x835e411c
	if (cr6.eq) goto loc_835E411C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x835e40fc
	if (!cr6.eq) goto loc_835E40FC;
	// b 0x835e417c
	goto loc_835E417C;
loc_835E411C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83a967d0
	ctx.lr = 0x835E4124;
	sub_83A967D0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e4134
	if (cr6.eq) goto loc_835E4134;
	// bl 0x835e83f8
	ctx.lr = 0x835E4134;
	sub_835E83F8(ctx, base);
loc_835E4134:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x835e4178
	if (cr6.eq) goto loc_835E4178;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825952b8
	ctx.lr = 0x835E416C;
	sub_825952B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_835E4178:
	// li r29,0
	ctx.r29.s64 = 0;
loc_835E417C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E419C"))) PPC_WEAK_FUNC(sub_835E419C);
PPC_FUNC_IMPL(__imp__sub_835E419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E41A0"))) PPC_WEAK_FUNC(sub_835E41A0);
PPC_FUNC_IMPL(__imp__sub_835E41A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835E41A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31744
	ctx.r26.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r25,r26,18608
	ctx.r25.s64 = ctx.r26.s64 + 18608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 18608);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E41E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e3ea8
	ctx.lr = 0x835E41F8;
	sub_835E3EA8(ctx, base);
	// lwz r11,18608(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 18608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835E4210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E421C"))) PPC_WEAK_FUNC(sub_835E421C);
PPC_FUNC_IMPL(__imp__sub_835E421C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4220"))) PPC_WEAK_FUNC(sub_835E4220);
PPC_FUNC_IMPL(__imp__sub_835E4220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835E4228;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31744
	ctx.r27.s64 = -2080374784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r27,18608
	ctx.r26.s64 = ctx.r27.s64 + 18608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18608);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E425C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e3f90
	ctx.lr = 0x835E4270;
	sub_835E3F90(ctx, base);
	// lwz r11,18608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835E4288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4294"))) PPC_WEAK_FUNC(sub_835E4294);
PPC_FUNC_IMPL(__imp__sub_835E4294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4298"))) PPC_WEAK_FUNC(sub_835E4298);
PPC_FUNC_IMPL(__imp__sub_835E4298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E42A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e4378
	if (cr6.eq) goto loc_835E4378;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,18608
	ctx.r31.s64 = ctx.r11.s64 + 18608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E42E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e3ea8
	ctx.lr = 0x835E4300;
	sub_835E3EA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e4358
	if (!cr6.eq) goto loc_835E4358;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a96490
	ctx.lr = 0x835E4324;
	sub_83A96490(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// and r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 & ctx.r7.u64;
	// bl 0x83a96520
	ctx.lr = 0x835E4344;
	sub_83A96520(ctx, base);
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a962d8
	ctx.lr = 0x835E4354;
	sub_83A962D8(ctx, base);
	// stw r3,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
loc_835E4358:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,112(r29)
	PPC_STORE_U16(ctx.r29.u32 + 112, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835E4374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835E4378:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4380"))) PPC_WEAK_FUNC(sub_835E4380);
PPC_FUNC_IMPL(__imp__sub_835E4380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E4388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e441c
	if (cr6.eq) goto loc_835E441C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,18608
	ctx.r31.s64 = ctx.r11.s64 + 18608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E43C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e3e30
	ctx.lr = 0x835E43D4;
	sub_835E3E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e4404
	if (!cr6.eq) goto loc_835E4404;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a96490
	ctx.lr = 0x835E43F0;
	sub_83A96490(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835E4404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4418;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835E441C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4424"))) PPC_WEAK_FUNC(sub_835E4424);
PPC_FUNC_IMPL(__imp__sub_835E4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4428"))) PPC_WEAK_FUNC(sub_835E4428);
PPC_FUNC_IMPL(__imp__sub_835E4428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E4430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e44c4
	if (cr6.eq) goto loc_835E44C4;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,18608
	ctx.r31.s64 = ctx.r11.s64 + 18608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4470;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835e3e30
	ctx.lr = 0x835E447C;
	sub_835E3E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e44ac
	if (!cr6.eq) goto loc_835E44AC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83a963d0
	ctx.lr = 0x835E4498;
	sub_83A963D0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// and r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835E44AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E44C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835E44C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E44CC"))) PPC_WEAK_FUNC(sub_835E44CC);
PPC_FUNC_IMPL(__imp__sub_835E44CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E44D0"))) PPC_WEAK_FUNC(sub_835E44D0);
PPC_FUNC_IMPL(__imp__sub_835E44D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E44D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e4580
	if (cr6.eq) goto loc_835E4580;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,18608
	ctx.r31.s64 = ctx.r11.s64 + 18608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x835e3e30
	ctx.lr = 0x835E4528;
	sub_835E3E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e4564
	if (!cr6.eq) goto loc_835E4564;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x835e4548
	if (!cr6.eq) goto loc_835E4548;
	// bl 0x83a95ce8
	ctx.lr = 0x835E4544;
	sub_83A95CE8(ctx, base);
	// b 0x835e454c
	goto loc_835E454C;
loc_835E4548:
	// bl 0x83a95d40
	ctx.lr = 0x835E454C;
	sub_83A95D40(ctx, base);
loc_835E454C:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,8193
	ctx.r7.u64 = ctx.r9.u64 | 8193;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// and r30,r8,r7
	ctx.r30.u64 = ctx.r8.u64 & ctx.r7.u64;
loc_835E4564:
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E457C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835E4580:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4588"))) PPC_WEAK_FUNC(sub_835E4588);
PPC_FUNC_IMPL(__imp__sub_835E4588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E4590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,18608
	ctx.r31.s64 = ctx.r11.s64 + 18608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E45C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x835e3e30
	ctx.lr = 0x835E45D4;
	sub_835E3E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e45f0
	if (!cr6.eq) goto loc_835E45F0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a9dfc8
	ctx.lr = 0x835E45F0;
	sub_83A9DFC8(ctx, base);
loc_835E45F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4610"))) PPC_WEAK_FUNC(sub_835E4610);
PPC_FUNC_IMPL(__imp__sub_835E4610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835E4618;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835e47d8
	if (cr6.eq) goto loc_835E47D8;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r7,-31744
	ctx.r7.s64 = -2080374784;
	// addi r27,r11,18660
	ctx.r27.s64 = ctx.r11.s64 + 18660;
	// lwz r8,18660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18660);
	// lhz r10,18604(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18604);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_835E4640:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x835e4660
	if (cr6.eq) goto loc_835E4660;
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x835e4668
	if (!cr6.gt) goto loc_835E4668;
loc_835E4660:
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,18604(r7)
	PPC_STORE_U16(ctx.r7.u32 + 18604, ctx.r10.u16);
loc_835E4668:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x835e4694
	if (cr6.eq) goto loc_835E4694;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
loc_835E4678:
	// lhz r5,26(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r4,r9
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, xer);
	// beq cr6,0x835e4694
	if (cr6.eq) goto loc_835E4694;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x835e4678
	if (!cr6.eq) goto loc_835E4678;
loc_835E4694:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x835e4640
	if (!cr6.eq) goto loc_835E4640;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// sth r10,18(r26)
	PPC_STORE_U16(ctx.r26.u32 + 18, ctx.r10.u16);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r28,r11,52427
	ctx.r28.u64 = ctx.r11.u64 | 52427;
	// lhz r11,14(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// sth r10,18604(r7)
	PPC_STORE_U16(ctx.r7.u32 + 18604, ctx.r10.u16);
	// beq cr6,0x835e4764
	if (cr6.eq) goto loc_835E4764;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_835E46C8:
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x835e46e4
	if (cr6.gt) goto loc_835E46E4;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x835e46c8
	if (!cr6.eq) goto loc_835E46C8;
	// b 0x835e4764
	goto loc_835E4764;
loc_835E46E4:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835E46FC;
	sub_82595718(ctx, base);
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// beq 0x835e4728
	if (cr0.eq) goto loc_835E4728;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835E471C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835e471c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E471C;
loc_835E4728:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x835e4744
	if (!cr6.lt) goto loc_835E4744;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x835E4744;
	sub_831CC150(ctx, base);
loc_835E4744:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x835e47d8
	if (!cr6.eq) goto loc_835E47D8;
loc_835E4764:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x835E477C;
	sub_82595718(ctx, base);
	// addic. r10,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// beq 0x835e47a8
	if (cr0.eq) goto loc_835E47A8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835E479C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835e479c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E479C;
loc_835E47A8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x835e47c4
	if (!cr6.lt) goto loc_835E47C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15616
	ctx.r3.s64 = ctx.r11.s64 + 15616;
	// bl 0x831cc150
	ctx.lr = 0x835E47C4;
	sub_831CC150(ctx, base);
loc_835E47C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_835E47D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E47E0"))) PPC_WEAK_FUNC(sub_835E47E0);
PPC_FUNC_IMPL(__imp__sub_835E47E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x835E47E8;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r26,r11,18608
	ctx.r26.s64 = ctx.r11.s64 + 18608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,18608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E482C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r3,18600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18600);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x835e4860
	if (cr6.gt) goto loc_835E4860;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E4850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_835E4860:
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,-1
	ctx.r25.s64 = -1;
	// bl 0x835e8260
	ctx.lr = 0x835E486C;
	sub_835E8260(ctx, base);
	// lwz r8,18600(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a96ac0
	ctx.lr = 0x835E488C;
	sub_83A96AC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835e48a4
	if (!cr6.eq) goto loc_835E48A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e83f8
	ctx.lr = 0x835E48A0;
	sub_835E83F8(ctx, base);
	// b 0x835e48d0
	goto loc_835E48D0;
loc_835E48A4:
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r24,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r24.u16);
	// sth r24,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r24.u16);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// sth r23,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r23.u16);
	// sth r22,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r22.u16);
	// bl 0x835e4610
	ctx.lr = 0x835E48CC;
	sub_835E4610(ctx, base);
	// lhz r25,98(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
loc_835E48D0:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x835e48dc
	if (cr6.eq) goto loc_835E48DC;
	// stw r29,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
loc_835E48DC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x835e48e8
	if (cr6.eq) goto loc_835E48E8;
	// sth r25,0(r20)
	PPC_STORE_U16(ctx.r20.u32 + 0, ctx.r25.u16);
loc_835E48E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835E48FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4908"))) PPC_WEAK_FUNC(sub_835E4908);
PPC_FUNC_IMPL(__imp__sub_835E4908) {
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
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e496c
	if (cr6.eq) goto loc_835E496C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835eae88
	ctx.lr = 0x835E494C;
	sub_835EAE88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e496c
	if (!cr6.eq) goto loc_835E496C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_835E496C:
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

__attribute__((alias("__imp__sub_835E4984"))) PPC_WEAK_FUNC(sub_835E4984);
PPC_FUNC_IMPL(__imp__sub_835E4984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4988"))) PPC_WEAK_FUNC(sub_835E4988);
PPC_FUNC_IMPL(__imp__sub_835E4988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E4990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31770
	ctx.r30.s64 = -2082078720;
	// lbz r11,-19176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -19176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e49d4
	if (cr6.eq) goto loc_835E49D4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
loc_835E49AC:
	// lwz r11,18688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 18688);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x835eafb0
	ctx.lr = 0x835E49BC;
	sub_835EAFB0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r10,-19176(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -19176);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x835e49ac
	if (cr6.lt) goto loc_835E49AC;
loc_835E49D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E49E0"))) PPC_WEAK_FUNC(sub_835E49E0);
PPC_FUNC_IMPL(__imp__sub_835E49E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835E49E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31770
	ctx.r25.s64 = -2082078720;
	// lbz r11,-19176(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -19176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e4b00
	if (cr6.eq) goto loc_835E4B00;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r26,-31744
	ctx.r26.s64 = -2080374784;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lis r27,-31744
	ctx.r27.s64 = -2080374784;
loc_835E4A0C:
	// lwz r11,18704(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 18704);
	// mulli r9,r28,76
	ctx.r9.s64 = ctx.r28.s64 * 76;
	// lwz r10,18688(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 18688);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x835e4ae4
	if (cr6.eq) goto loc_835E4AE4;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4a48
	if (cr6.eq) goto loc_835E4A48;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835eb028
	ctx.lr = 0x835E4A48;
	sub_835EB028(ctx, base);
loc_835E4A48:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4a60
	if (cr6.eq) goto loc_835E4A60;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835eb050
	ctx.lr = 0x835E4A60;
	sub_835EB050(ctx, base);
loc_835E4A60:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4a7c
	if (cr6.eq) goto loc_835E4A7C;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835eb078
	ctx.lr = 0x835E4A7C;
	sub_835EB078(ctx, base);
loc_835E4A7C:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4a94
	if (cr6.eq) goto loc_835E4A94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835eb0a0
	ctx.lr = 0x835E4A94;
	sub_835EB0A0(ctx, base);
loc_835E4A94:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4aac
	if (cr6.eq) goto loc_835E4AAC;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835eb0c8
	ctx.lr = 0x835E4AAC;
	sub_835EB0C8(ctx, base);
loc_835E4AAC:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4ac4
	if (cr6.eq) goto loc_835E4AC4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835eb0f0
	ctx.lr = 0x835E4AC4;
	sub_835EB0F0(ctx, base);
loc_835E4AC4:
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e4adc
	if (cr6.eq) goto loc_835E4ADC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x835eb118
	ctx.lr = 0x835E4ADC;
	sub_835EB118(ctx, base);
loc_835E4ADC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835eb000
	ctx.lr = 0x835E4AE4;
	sub_835EB000(ctx, base);
loc_835E4AE4:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// lbz r10,-19176(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -19176);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x835e4a0c
	if (cr6.lt) goto loc_835E4A0C;
loc_835E4B00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4B0C"))) PPC_WEAK_FUNC(sub_835E4B0C);
PPC_FUNC_IMPL(__imp__sub_835E4B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4B10"))) PPC_WEAK_FUNC(sub_835E4B10);
PPC_FUNC_IMPL(__imp__sub_835E4B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r5,-31770
	ctx.r5.s64 = -2082078720;
	// lbz r11,-19176(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + -19176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e4ca8
	if (cr6.eq) goto loc_835E4CA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r6,-31744
	ctx.r6.s64 = -2080374784;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lis r7,-31744
	ctx.r7.s64 = -2080374784;
loc_835E4B34:
	// lwz r10,18672(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18672);
	// mulli r11,r8,76
	ctx.r11.s64 = ctx.r8.s64 * 76;
	// lwz r9,18704(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18704);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835e4c8c
	if (cr6.eq) goto loc_835E4C8C;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e4b84
	if (cr6.eq) goto loc_835E4B84;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_835E4B84:
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e4bb4
	if (cr6.eq) goto loc_835E4BB4;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
loc_835E4BB4:
	// rlwinm r3,r9,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e4bfc
	if (cr6.eq) goto loc_835E4BFC;
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_835E4BFC:
	// rlwinm r3,r9,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e4c1c
	if (cr6.eq) goto loc_835E4C1C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,72(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_835E4C1C:
	// rlwinm r3,r9,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e4c4c
	if (cr6.eq) goto loc_835E4C4C;
	// lwz r3,52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// stw r3,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r3,60(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
loc_835E4C4C:
	// rlwinm r3,r9,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835e4c6c
	if (cr6.eq) goto loc_835E4C6C;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_835E4C6C:
	// rlwinm r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835e4c8c
	if (cr6.eq) goto loc_835E4C8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// ori r3,r9,64
	ctx.r3.u64 = ctx.r9.u64 | 64;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_835E4C8C:
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbz r10,-19176(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + -19176);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x835e4b34
	if (cr6.lt) goto loc_835E4B34;
loc_835E4CA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4CB4"))) PPC_WEAK_FUNC(sub_835E4CB4);
PPC_FUNC_IMPL(__imp__sub_835E4CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4CB8"))) PPC_WEAK_FUNC(sub_835E4CB8);
PPC_FUNC_IMPL(__imp__sub_835E4CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// lwz r11,18672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18672);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4D10"))) PPC_WEAK_FUNC(sub_835E4D10);
PPC_FUNC_IMPL(__imp__sub_835E4D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// lwz r11,18672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18672);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r7,r8,4
	ctx.r7.u64 = ctx.r8.u64 | 4;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4D80"))) PPC_WEAK_FUNC(sub_835E4D80);
PPC_FUNC_IMPL(__imp__sub_835E4D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// lwz r11,18672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18672);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f1,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4DC4"))) PPC_WEAK_FUNC(sub_835E4DC4);
PPC_FUNC_IMPL(__imp__sub_835E4DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4DC8"))) PPC_WEAK_FUNC(sub_835E4DC8);
PPC_FUNC_IMPL(__imp__sub_835E4DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// lwz r11,18672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18672);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r4,r5,16
	ctx.r4.u64 = ctx.r5.u64 | 16;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4E20"))) PPC_WEAK_FUNC(sub_835E4E20);
PPC_FUNC_IMPL(__imp__sub_835E4E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// lwz r11,18672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18672);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4E64"))) PPC_WEAK_FUNC(sub_835E4E64);
PPC_FUNC_IMPL(__imp__sub_835E4E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4E68"))) PPC_WEAK_FUNC(sub_835E4E68);
PPC_FUNC_IMPL(__imp__sub_835E4E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// lwz r11,18672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18672);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f1,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4EAC"))) PPC_WEAK_FUNC(sub_835E4EAC);
PPC_FUNC_IMPL(__imp__sub_835E4EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4EB0"))) PPC_WEAK_FUNC(sub_835E4EB0);
PPC_FUNC_IMPL(__imp__sub_835E4EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lbz r9,-19176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -19176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,18688(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18688);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x835eb140
	sub_835EB140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4EE8"))) PPC_WEAK_FUNC(sub_835E4EE8);
PPC_FUNC_IMPL(__imp__sub_835E4EE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E4EEC"))) PPC_WEAK_FUNC(sub_835E4EEC);
PPC_FUNC_IMPL(__imp__sub_835E4EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E4EF0"))) PPC_WEAK_FUNC(sub_835E4EF0);
PPC_FUNC_IMPL(__imp__sub_835E4EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E4EF8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e4f98
	if (cr6.eq) goto loc_835E4F98;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_835E4F28:
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x835e4f8c
	if (cr6.eq) goto loc_835E4F8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x835E4F8C;
	sub_831CE980(ctx, base);
loc_835E4F8C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// bne 0x835e4f28
	if (!cr0.eq) goto loc_835E4F28;
loc_835E4F98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4FA8"))) PPC_WEAK_FUNC(sub_835E4FA8);
PPC_FUNC_IMPL(__imp__sub_835E4FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E4FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x835e4ff0
	if (cr6.eq) goto loc_835E4FF0;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_835E4FC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835e4fe0
	if (cr6.eq) goto loc_835E4FE0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x835E4FE0;
	sub_831CE980(ctx, base);
loc_835E4FE0:
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x835e4fc8
	if (!cr6.eq) goto loc_835E4FC8;
loc_835E4FF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E4FFC"))) PPC_WEAK_FUNC(sub_835E4FFC);
PPC_FUNC_IMPL(__imp__sub_835E4FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5000"))) PPC_WEAK_FUNC(sub_835E5000);
PPC_FUNC_IMPL(__imp__sub_835E5000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E5008;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x835e5070
	if (cr6.eq) goto loc_835E5070;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x835e5058
	if (cr6.eq) goto loc_835E5058;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_835E503C:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bne cr6,0x835e503c
	if (!cr6.eq) goto loc_835E503C;
loc_835E5058:
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x833ea3a8
	ctx.lr = 0x835E506C;
	sub_833EA3A8(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_835E5070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E507C"))) PPC_WEAK_FUNC(sub_835E507C);
PPC_FUNC_IMPL(__imp__sub_835E507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5080"))) PPC_WEAK_FUNC(sub_835E5080);
PPC_FUNC_IMPL(__imp__sub_835E5080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E5088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x835e50d8
	if (cr6.eq) goto loc_835E50D8;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// beq cr6,0x835e50d4
	if (cr6.eq) goto loc_835E50D4;
loc_835E50B4:
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x835E50C4;
	sub_831CE980(ctx, base);
	// addi r31,r31,76
	ctx.r31.s64 = ctx.r31.s64 + 76;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x835e50b4
	if (!cr6.eq) goto loc_835E50B4;
loc_835E50D4:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_835E50D8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E50E4"))) PPC_WEAK_FUNC(sub_835E50E4);
PPC_FUNC_IMPL(__imp__sub_835E50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E50E8"))) PPC_WEAK_FUNC(sub_835E50E8);
PPC_FUNC_IMPL(__imp__sub_835E50E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E50F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x835e5114
	if (!cr6.gt) goto loc_835E5114;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x835E5114;
	sub_831CC150(ctx, base);
loc_835E5114:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x835e51d8
	if (!cr6.lt) goto loc_835E51D8;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x835E5148;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x835e518c
	if (cr6.eq) goto loc_835E518C;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r8,r8,21716
	ctx.r8.s64 = ctx.r8.s64 + 21716;
loc_835E5168:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e517c
	if (cr6.eq) goto loc_835E517C;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_835E517C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x835e5168
	if (!cr6.eq) goto loc_835E5168;
loc_835E518C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r29,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// beq cr6,0x835e51c0
	if (cr6.eq) goto loc_835E51C0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x833ea3a8
	ctx.lr = 0x835E51B0;
	sub_833EA3A8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x835E51C0;
	sub_825952B8(ctx, base);
loc_835E51C0:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_835E51D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E51E0"))) PPC_WEAK_FUNC(sub_835E51E0);
PPC_FUNC_IMPL(__imp__sub_835E51E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835E51E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,862
	ctx.r11.s64 = 56492032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,20695
	ctx.r10.u64 = ctx.r11.u64 | 20695;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x835e520c
	if (!cr6.gt) goto loc_835E520C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x835E520C;
	sub_831CC150(ctx, base);
loc_835E520C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,76
	ctx.r28.s64 = 76;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x835e5298
	if (!cr6.lt) goto loc_835E5298;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,76
	ctx.r29.s64 = ctx.r4.s64 * 76;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835E5244;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x835e4fa8
	ctx.lr = 0x835E525C;
	sub_835E4FA8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x835e5280
	if (cr6.eq) goto loc_835E5280;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835E5280;
	sub_825952B8(ctx, base);
loc_835E5280:
	// mulli r11,r28,76
	ctx.r11.s64 = ctx.r28.s64 * 76;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_835E5298:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E52A0"))) PPC_WEAK_FUNC(sub_835E52A0);
PPC_FUNC_IMPL(__imp__sub_835E52A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x835e52d0
	if (!cr6.lt) goto loc_835E52D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_835E52D0:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x835e5300
	if (cr6.lt) goto loc_835E5300;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_835E5300:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x835e530c
	if (!cr6.lt) goto loc_835E530C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_835E530C:
	// b 0x835e50e8
	sub_835E50E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E5310"))) PPC_WEAK_FUNC(sub_835E5310);
PPC_FUNC_IMPL(__imp__sub_835E5310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E5314"))) PPC_WEAK_FUNC(sub_835E5314);
PPC_FUNC_IMPL(__imp__sub_835E5314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5318"))) PPC_WEAK_FUNC(sub_835E5318);
PPC_FUNC_IMPL(__imp__sub_835E5318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,862
	ctx.r10.s64 = 56492032;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,76
	ctx.r9.s64 = 76;
	// ori r8,r10,20695
	ctx.r8.u64 = ctx.r10.u64 | 20695;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x835e534c
	if (!cr6.lt) goto loc_835E534C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_835E534C:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x835e537c
	if (cr6.lt) goto loc_835E537C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_835E537C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x835e5388
	if (!cr6.lt) goto loc_835E5388;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_835E5388:
	// b 0x835e51e0
	sub_835E51E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E538C"))) PPC_WEAK_FUNC(sub_835E538C);
PPC_FUNC_IMPL(__imp__sub_835E538C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E5390"))) PPC_WEAK_FUNC(sub_835E5390);
PPC_FUNC_IMPL(__imp__sub_835E5390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x835e53dc
	if (!cr6.gt) goto loc_835E53DC;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835e5000
	ctx.lr = 0x835E53D8;
	sub_835E5000(ctx, base);
	// b 0x835e544c
	goto loc_835E544C;
loc_835E53DC:
	// bge cr6,0x835e544c
	if (!cr6.lt) goto loc_835E544C;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e52a0
	ctx.lr = 0x835E53EC;
	sub_835E52A0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf. r10,r8,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x835e542c
	if (cr0.eq) goto loc_835E542C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,21716
	ctx.r10.s64 = ctx.r10.s64 + 21716;
loc_835E5414:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e5424
	if (cr6.eq) goto loc_835E5424;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_835E5424:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x835e5414
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E5414;
loc_835E542C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_835E544C:
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

__attribute__((alias("__imp__sub_835E5464"))) PPC_WEAK_FUNC(sub_835E5464);
PPC_FUNC_IMPL(__imp__sub_835E5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5468"))) PPC_WEAK_FUNC(sub_835E5468);
PPC_FUNC_IMPL(__imp__sub_835E5468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E5470;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,76
	ctx.r29.s64 = 76;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw r11,r11,r29
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// ble cr6,0x835e54b4
	if (!cr6.gt) goto loc_835E54B4;
	// mulli r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 * 76;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835e5080
	ctx.lr = 0x835E54AC;
	sub_835E5080(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835E54B4:
	// bge cr6,0x835e550c
	if (!cr6.lt) goto loc_835E550C;
	// subf r4,r11,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835e5318
	ctx.lr = 0x835E54C4;
	sub_835E5318(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// divw r9,r10,r29
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	// subf r4,r9,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r9.s64;
	// bl 0x835e4ef0
	ctx.lr = 0x835E54EC;
	sub_835E4EF0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// subf r5,r6,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mulli r10,r5,76
	ctx.r10.s64 = ctx.r5.s64 * 76;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
loc_835E550C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E5514"))) PPC_WEAK_FUNC(sub_835E5514);
PPC_FUNC_IMPL(__imp__sub_835E5514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5518"))) PPC_WEAK_FUNC(sub_835E5518);
PPC_FUNC_IMPL(__imp__sub_835E5518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835E5520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31770
	ctx.r31.s64 = -2082078720;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r29,r11,18688
	ctx.r29.s64 = ctx.r11.s64 + 18688;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r3,-19176(r31)
	PPC_STORE_U8(ctx.r31.u32 + -19176, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835e5390
	ctx.lr = 0x835E5544;
	sub_835E5390(ctx, base);
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lbz r4,-19176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -19176);
	// addi r3,r10,18672
	ctx.r3.s64 = ctx.r10.s64 + 18672;
	// bl 0x835e5468
	ctx.lr = 0x835E5554;
	sub_835E5468(ctx, base);
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// lbz r4,-19176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -19176);
	// addi r3,r9,18704
	ctx.r3.s64 = ctx.r9.s64 + 18704;
	// bl 0x835e5468
	ctx.lr = 0x835E5564;
	sub_835E5468(ctx, base);
	// lbz r8,-19176(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -19176);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835e55ac
	if (cr6.eq) goto loc_835E55AC;
loc_835E5570:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x835eaf18
	ctx.lr = 0x835E5584;
	sub_835EAF18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e55b0
	if (!cr6.eq) goto loc_835E55B0;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lbz r11,-19176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -19176);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x835e5570
	if (cr6.lt) goto loc_835E5570;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835E55AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_835E55B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E55B8"))) PPC_WEAK_FUNC(sub_835E55B8);
PPC_FUNC_IMPL(__imp__sub_835E55B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E55D0"))) PPC_WEAK_FUNC(sub_835E55D0);
PPC_FUNC_IMPL(__imp__sub_835E55D0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,17484
	ctx.r9.s64 = ctx.r11.s64 + 17484;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x835e5604
	if (cr6.eq) goto loc_835E5604;
	// bl 0x835daa80
	ctx.lr = 0x835E5600;
	sub_835DAA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835E5604:
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

__attribute__((alias("__imp__sub_835E5618"))) PPC_WEAK_FUNC(sub_835E5618);
PPC_FUNC_IMPL(__imp__sub_835E5618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E5630"))) PPC_WEAK_FUNC(sub_835E5630);
PPC_FUNC_IMPL(__imp__sub_835E5630) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-31770
	ctx.r9.s64 = -2082078720;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-19172
	ctx.r3.s64 = ctx.r9.s64 + -19172;
	// bl 0x83572958
	ctx.lr = 0x835E565C;
	sub_83572958(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E566C"))) PPC_WEAK_FUNC(sub_835E566C);
PPC_FUNC_IMPL(__imp__sub_835E566C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5670"))) PPC_WEAK_FUNC(sub_835E5670);
PPC_FUNC_IMPL(__imp__sub_835E5670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r3,r11,-19172
	ctx.r3.s64 = ctx.r11.s64 + -19172;
	// b 0x835eb1e0
	sub_835EB1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E567C"))) PPC_WEAK_FUNC(sub_835E567C);
PPC_FUNC_IMPL(__imp__sub_835E567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5680"))) PPC_WEAK_FUNC(sub_835E5680);
PPC_FUNC_IMPL(__imp__sub_835E5680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x835E5688;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r24,r11,-19172
	ctx.r24.s64 = ctx.r11.s64 + -19172;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x835eb228
	ctx.lr = 0x835E56A4;
	sub_835EB228(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r31,r11,18728
	ctx.r31.s64 = ctx.r11.s64 + 18728;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f30,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835e5784
	if (cr6.eq) goto loc_835E5784;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e56ec
	if (cr6.eq) goto loc_835E56EC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x835e5784
	if (cr6.eq) goto loc_835E5784;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x835e5784
	goto loc_835E5784;
loc_835E56EC:
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
loc_835E5720:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835e5720
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835E5720;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x835E5738;
	sub_831CE980(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x835eb2b8
	ctx.lr = 0x835E5748;
	sub_835EB2B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r5,100
	ctx.r5.s64 = 100;
	// beq cr6,0x835e5764
	if (cr6.eq) goto loc_835E5764;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce980
	ctx.lr = 0x835E5760;
	sub_831CE980(ctx, base);
	// b 0x835e5774
	goto loc_835E5774;
loc_835E5764:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x835E576C;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_835E5774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x831ce980
	ctx.lr = 0x835E5784;
	sub_831CE980(ctx, base);
loc_835E5784:
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835e59d8
	if (cr6.eq) goto loc_835E59D8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e57c8
	if (cr6.eq) goto loc_835E57C8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x835eb340
	ctx.lr = 0x835E57AC;
	sub_835EB340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e57c8
	if (!cr6.eq) goto loc_835E57C8;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r10,6
	ctx.r10.s64 = 6;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_835E57C8:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x835eb4e0
	ctx.lr = 0x835E57DC;
	sub_835EB4E0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bgt cr6,0x835e58c4
	if (cr6.gt) goto loc_835E58C4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x835e5844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835E5844;
	// bdzf 4*cr6+eq,0x835e584c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835E584C;
	// bdzf 4*cr6+eq,0x835e5870
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835E5870;
	// bdzf 4*cr6+eq,0x835e589c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835E589C;
	// bne cr6,0x835e58a8
	if (!cr6.eq) goto loc_835E58A8;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x835e5844
	if (cr6.eq) goto loc_835E5844;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x835e58cc
	if (cr6.eq) goto loc_835E58CC;
loc_835E5838:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// b 0x835e58cc
	goto loc_835E58CC;
loc_835E5844:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_835E584C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835e58cc
	if (cr6.eq) goto loc_835E58CC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x835e58cc
	goto loc_835E58CC;
loc_835E5870:
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// bne cr6,0x835e5888
	if (!cr6.eq) goto loc_835E5888;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x835e58cc
	goto loc_835E58CC;
loc_835E5888:
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x835e58cc
	if (cr6.eq) goto loc_835E58CC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// b 0x835e58cc
	goto loc_835E58CC;
loc_835E589C:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x835e58cc
	goto loc_835E58CC;
loc_835E58A8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x835e5838
	if (cr6.eq) goto loc_835E5838;
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// beq cr6,0x835e58cc
	if (cr6.eq) goto loc_835E58CC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// b 0x835e58cc
	goto loc_835E58CC;
loc_835E58C4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
loc_835E58CC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e59ac
	if (cr6.eq) goto loc_835E59AC;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,136
	ctx.r29.s64 = ctx.r31.s64 + 136;
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_835E58EC:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x835e5940
	if (cr6.eq) goto loc_835E5940;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d8f40
	ctx.lr = 0x835E5908;
	sub_835D8F40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e5918
	if (!cr6.eq) goto loc_835E5918;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_835E5918:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d8fb8
	ctx.lr = 0x835E5928;
	sub_835D8FB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835e5940
	if (!cr6.eq) goto loc_835E5940;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835e5940
	if (cr6.eq) goto loc_835E5940;
	// li r28,1
	ctx.r28.s64 = 1;
loc_835E5940:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x835e58ec
	if (cr6.lt) goto loc_835E58EC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmuls f1,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x835eb478
	ctx.lr = 0x835E5960;
	sub_835EB478(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e59ac
	if (cr6.eq) goto loc_835E59AC;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835e5980
	if (!cr6.eq) goto loc_835E5980;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x835e59a0
	if (cr6.eq) goto loc_835E59A0;
loc_835E5980:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x835eb398
	ctx.lr = 0x835E598C;
	sub_835EB398(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835e59ac
	if (!cr6.eq) goto loc_835E59AC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x835e59ac
	if (!cr6.eq) goto loc_835E59AC;
loc_835E59A0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x835eb408
	ctx.lr = 0x835E59AC;
	sub_835EB408(ctx, base);
loc_835E59AC:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835e59d8
	if (cr6.eq) goto loc_835E59D8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x835eb5a0
	ctx.lr = 0x835E59C4;
	sub_835EB5A0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,4
	ctx.r9.s64 = 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_835E59D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E59EC"))) PPC_WEAK_FUNC(sub_835E59EC);
PPC_FUNC_IMPL(__imp__sub_835E59EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E59F0"))) PPC_WEAK_FUNC(sub_835E59F0);
PPC_FUNC_IMPL(__imp__sub_835E59F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beq cr6,0x835e5a3c
	if (cr6.eq) goto loc_835E5A3C;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// addi r10,r11,18728
	ctx.r10.s64 = ctx.r11.s64 + 18728;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_835E5A18:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x835e5a38
	if (cr6.eq) goto loc_835E5A38;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// addi r8,r10,204
	ctx.r8.s64 = ctx.r10.s64 + 204;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x835e5a18
	if (cr6.lt) goto loc_835E5A18;
	// b 0x835e5a3c
	goto loc_835E5A3C;
loc_835E5A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835E5A3C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E5A54"))) PPC_WEAK_FUNC(sub_835E5A54);
PPC_FUNC_IMPL(__imp__sub_835E5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5A58"))) PPC_WEAK_FUNC(sub_835E5A58);
PPC_FUNC_IMPL(__imp__sub_835E5A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// addi r9,r11,18728
	ctx.r9.s64 = ctx.r11.s64 + 18728;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_835E5A8C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x835e5ab0
	if (cr6.eq) goto loc_835E5AB0;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// addi r7,r9,204
	ctx.r7.s64 = ctx.r9.s64 + 204;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x835e5a8c
	if (cr6.lt) goto loc_835E5A8C;
	// blr 
	return;
loc_835E5AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835E5ABC"))) PPC_WEAK_FUNC(sub_835E5ABC);
PPC_FUNC_IMPL(__imp__sub_835E5ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5AC0"))) PPC_WEAK_FUNC(sub_835E5AC0);
PPC_FUNC_IMPL(__imp__sub_835E5AC0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r9,r11,16944
	ctx.r9.s64 = ctx.r11.s64 + 16944;
	// addi r8,r10,17484
	ctx.r8.s64 = ctx.r10.s64 + 17484;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835e5b00
	if (cr6.eq) goto loc_835E5B00;
	// bl 0x835daa80
	ctx.lr = 0x835E5AFC;
	sub_835DAA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835E5B00:
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

__attribute__((alias("__imp__sub_835E5B14"))) PPC_WEAK_FUNC(sub_835E5B14);
PPC_FUNC_IMPL(__imp__sub_835E5B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835E5B18"))) PPC_WEAK_FUNC(sub_835E5B18);
PPC_FUNC_IMPL(__imp__sub_835E5B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835E5B20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r11,18720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18720);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhwu r9,r11,r9
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3;
	// rlwinm r9,r4,31,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x80000000;
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf. r31,r7,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r31,18720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18720, ctx.r31.u32);
	// bne 0x835e5b74
	if (!cr0.eq) goto loc_835E5B74;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r31,18720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18720, ctx.r31.u32);
loc_835E5B74:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r30,r11,18728
	ctx.r30.s64 = ctx.r11.s64 + 18728;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// bgt cr6,0x835e5bbc
	if (cr6.gt) goto loc_835E5BBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x831ce980
	ctx.lr = 0x835E5B9C;
	sub_831CE980(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x835e5bbc
	if (cr6.eq) goto loc_835E5BBC;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_835E5BBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835E5BC4"))) PPC_WEAK_FUNC(sub_835E5BC4);
PPC_FUNC_IMPL(__imp__sub_835E5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

