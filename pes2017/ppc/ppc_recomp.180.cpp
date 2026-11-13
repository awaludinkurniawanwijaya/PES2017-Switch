#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D47294"))) PPC_WEAK_FUNC(sub_82D47294);
PPC_FUNC_IMPL(__imp__sub_82D47294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47298"))) PPC_WEAK_FUNC(sub_82D47298);
PPC_FUNC_IMPL(__imp__sub_82D47298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r4,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r4.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d472d8
	if (!cr6.eq) goto loc_82D472D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r9,-6048
	ctx.r11.s64 = ctx.r9.s64 + -6048;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82D472D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-6048
	ctx.r4.s64 = ctx.r10.s64 + -6048;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82D472F0"))) PPC_WEAK_FUNC(sub_82D472F0);
PPC_FUNC_IMPL(__imp__sub_82D472F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D472F4"))) PPC_WEAK_FUNC(sub_82D472F4);
PPC_FUNC_IMPL(__imp__sub_82D472F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D472F8"))) PPC_WEAK_FUNC(sub_82D472F8);
PPC_FUNC_IMPL(__imp__sub_82D472F8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d59328
	ctx.lr = 0x82D47324;
	sub_82D59328(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4733c
	if (cr6.eq) goto loc_82D4733C;
	// bl 0x82416268
	ctx.lr = 0x82D47338;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4733C:
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

__attribute__((alias("__imp__sub_82D47354"))) PPC_WEAK_FUNC(sub_82D47354);
PPC_FUNC_IMPL(__imp__sub_82D47354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47358"))) PPC_WEAK_FUNC(sub_82D47358);
PPC_FUNC_IMPL(__imp__sub_82D47358) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d59338
	ctx.lr = 0x82D47374;
	sub_82D59338(ctx, base);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,136(r30)
	PPC_STORE_U8(ctx.r30.u32 + 136, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d473ac
	if (cr6.eq) goto loc_82D473AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-6064
	ctx.r4.s64 = ctx.r9.s64 + -6064;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82D473AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D473AC:
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

__attribute__((alias("__imp__sub_82D473C8"))) PPC_WEAK_FUNC(sub_82D473C8);
PPC_FUNC_IMPL(__imp__sub_82D473C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4744c
	if (cr6.eq) goto loc_82D4744C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,-6048
	ctx.r31.s64 = ctx.r11.s64 + -6048;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4740C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lbz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47444
	if (cr6.eq) goto loc_82D47444;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82d47440
	if (cr6.eq) goto loc_82D47440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82D47440:
	// bctrl 
	ctx.lr = 0x82D47444;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D47444:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d59278
	ctx.lr = 0x82D4744C;
	sub_82D59278(ctx, base);
loc_82D4744C:
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

__attribute__((alias("__imp__sub_82D47464"))) PPC_WEAK_FUNC(sub_82D47464);
PPC_FUNC_IMPL(__imp__sub_82D47464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47468"))) PPC_WEAK_FUNC(sub_82D47468);
PPC_FUNC_IMPL(__imp__sub_82D47468) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d474ac
	if (cr6.eq) goto loc_82D474AC;
	// bl 0x82d35198
	ctx.lr = 0x82D47490;
	sub_82D35198(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82D4749C;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82D474A0;
	sub_82D35198(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// clrldi r5,r31,32
	ctx.r5.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// bl 0x82d37480
	ctx.lr = 0x82D474AC;
	sub_82D37480(ctx, base);
loc_82D474AC:
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

__attribute__((alias("__imp__sub_82D474C0"))) PPC_WEAK_FUNC(sub_82D474C0);
PPC_FUNC_IMPL(__imp__sub_82D474C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// stw r3,-5396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5396, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D474CC"))) PPC_WEAK_FUNC(sub_82D474CC);
PPC_FUNC_IMPL(__imp__sub_82D474CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D474D0"))) PPC_WEAK_FUNC(sub_82D474D0);
PPC_FUNC_IMPL(__imp__sub_82D474D0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-5396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d47504
	if (cr6.eq) goto loc_82D47504;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82D474FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5396, ctx.r11.u32);
loc_82D47504:
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

__attribute__((alias("__imp__sub_82D47518"))) PPC_WEAK_FUNC(sub_82D47518);
PPC_FUNC_IMPL(__imp__sub_82D47518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D47520;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-31758
	ctx.r9.s64 = -2081292288;
	// lis r8,-31758
	ctx.r8.s64 = -2081292288;
	// addi r7,r10,-5440
	ctx.r7.s64 = ctx.r10.s64 + -5440;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,-5400(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5400, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,-5396(r8)
	PPC_STORE_U32(ctx.r8.u32 + -5396, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x82d35198
	ctx.lr = 0x82D47554;
	sub_82D35198(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82D47560;
	sub_82D36760(ctx, base);
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r31,r30,104
	ctx.r31.s64 = ctx.r30.s64 + 104;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82d47584
	if (cr6.lt) goto loc_82D47584;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D47584;
	sub_825952B8(ctx, base);
loc_82D47584:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x82d529a8
	ctx.lr = 0x82D4759C;
	sub_82D529A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D475A4"))) PPC_WEAK_FUNC(sub_82D475A4);
PPC_FUNC_IMPL(__imp__sub_82D475A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D475A8"))) PPC_WEAK_FUNC(sub_82D475A8);
PPC_FUNC_IMPL(__imp__sub_82D475A8) {
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
	// bl 0x82d47518
	ctx.lr = 0x82D475C8;
	sub_82D47518(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d475e0
	if (cr6.eq) goto loc_82D475E0;
	// bl 0x82416268
	ctx.lr = 0x82D475DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D475E0:
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

__attribute__((alias("__imp__sub_82D475F8"))) PPC_WEAK_FUNC(sub_82D475F8);
PPC_FUNC_IMPL(__imp__sub_82D475F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D47600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,-5758
	ctx.r29.s64 = ctx.r11.s64 + -5758;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r29,218
	ctx.r4.s64 = ctx.r29.s64 + 218;
	// bl 0x82d52960
	ctx.lr = 0x82D4761C;
	sub_82D52960(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// addi r9,r10,-5440
	ctx.r9.s64 = ctx.r10.s64 + -5440;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D4765C;
	sub_8259CC28(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// bl 0x831021a0
	ctx.lr = 0x82D4766C;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x82D47674;
	sub_82DA45F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82D4767C;
	sub_83103100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D47688"))) PPC_WEAK_FUNC(sub_82D47688);
PPC_FUNC_IMPL(__imp__sub_82D47688) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-5400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d476dc
	if (!cr6.eq) goto loc_82D476DC;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D476C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d476d4
	if (cr6.eq) goto loc_82D476D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D476D0;
	sub_82D475F8(ctx, base);
	// b 0x82d476d8
	goto loc_82D476D8;
loc_82D476D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D476D8:
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
loc_82D476DC:
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

__attribute__((alias("__imp__sub_82D476F0"))) PPC_WEAK_FUNC(sub_82D476F0);
PPC_FUNC_IMPL(__imp__sub_82D476F0) {
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
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lwz r31,-5400(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5400);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d4774c
	if (!cr6.eq) goto loc_82D4774C;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4772C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47740
	if (cr6.eq) goto loc_82D47740;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D4773C;
	sub_82D475F8(ctx, base);
	// b 0x82d47744
	goto loc_82D47744;
loc_82D47740:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D47744:
	// stw r3,-5400(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5400, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4774C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d47778
	if (!cr6.eq) goto loc_82D47778;
	// bl 0x83a7d958
	ctx.lr = 0x82D4775C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82D47760;
	sub_83524138(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// std r9,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r9.u64);
	// b 0x82d4778c
	goto loc_82D4778C;
loc_82D47778:
	// bl 0x83a7d958
	ctx.lr = 0x82D4777C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82D47780;
	sub_83524138(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82D4778C:
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

__attribute__((alias("__imp__sub_82D477A4"))) PPC_WEAK_FUNC(sub_82D477A4);
PPC_FUNC_IMPL(__imp__sub_82D477A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D477A8"))) PPC_WEAK_FUNC(sub_82D477A8);
PPC_FUNC_IMPL(__imp__sub_82D477A8) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,-5400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d47804
	if (!cr6.eq) goto loc_82D47804;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D477E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d477fc
	if (cr6.eq) goto loc_82D477FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D477F8;
	sub_82D475F8(ctx, base);
	// b 0x82d47800
	goto loc_82D47800;
loc_82D477FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D47800:
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
loc_82D47804:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r30,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r30.u32);
	// std r30,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r30.u64);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D4782C"))) PPC_WEAK_FUNC(sub_82D4782C);
PPC_FUNC_IMPL(__imp__sub_82D4782C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47830"))) PPC_WEAK_FUNC(sub_82D47830);
PPC_FUNC_IMPL(__imp__sub_82D47830) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47894
	if (!cr6.eq) goto loc_82D47894;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D47868;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47884
	if (cr6.eq) goto loc_82D47884;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D47878;
	sub_82D475F8(ctx, base);
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d47898
	goto loc_82D47898;
loc_82D47884:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82d47898
	goto loc_82D47898;
loc_82D47894:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82D47898:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82D478A4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82D478A8;
	sub_83524138(ctx, base);
	// ld r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// std r9,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r9.u64);
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

__attribute__((alias("__imp__sub_82D478C8"))) PPC_WEAK_FUNC(sub_82D478C8);
PPC_FUNC_IMPL(__imp__sub_82D478C8) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d478f8
	if (!cr6.eq) goto loc_82D478F8;
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
loc_82D478F8:
	// bl 0x82d47688
	ctx.lr = 0x82D478FC;
	sub_82D47688(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4791C"))) PPC_WEAK_FUNC(sub_82D4791C);
PPC_FUNC_IMPL(__imp__sub_82D4791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47920"))) PPC_WEAK_FUNC(sub_82D47920);
PPC_FUNC_IMPL(__imp__sub_82D47920) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47950
	if (!cr6.eq) goto loc_82D47950;
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
loc_82D47950:
	// bl 0x82d47688
	ctx.lr = 0x82D47954;
	sub_82D47688(ctx, base);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D47974"))) PPC_WEAK_FUNC(sub_82D47974);
PPC_FUNC_IMPL(__imp__sub_82D47974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47978"))) PPC_WEAK_FUNC(sub_82D47978);
PPC_FUNC_IMPL(__imp__sub_82D47978) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-5400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d479a8
	if (cr6.eq) goto loc_82D479A8;
	// bl 0x82d47688
	ctx.lr = 0x82D47998;
	sub_82D47688(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D479A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D479A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D479B8"))) PPC_WEAK_FUNC(sub_82D479B8);
PPC_FUNC_IMPL(__imp__sub_82D479B8) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47a3c
	if (!cr6.eq) goto loc_82D47A3C;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D479F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47a1c
	if (cr6.eq) goto loc_82D47A1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D47A00;
	sub_82D475F8(ctx, base);
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
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
loc_82D47A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
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
loc_82D47A3C:
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
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

__attribute__((alias("__imp__sub_82D47A54"))) PPC_WEAK_FUNC(sub_82D47A54);
PPC_FUNC_IMPL(__imp__sub_82D47A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47A58"))) PPC_WEAK_FUNC(sub_82D47A58);
PPC_FUNC_IMPL(__imp__sub_82D47A58) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47ab8
	if (!cr6.eq) goto loc_82D47AB8;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D47A98;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47ab0
	if (cr6.eq) goto loc_82D47AB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D47AA8;
	sub_82D475F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82d47ab4
	goto loc_82D47AB4;
loc_82D47AB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D47AB4:
	// stw r11,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r11.u32);
loc_82D47AB8:
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r30,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r11,-5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d47aec
	if (cr6.eq) goto loc_82D47AEC;
	// bl 0x82d35198
	ctx.lr = 0x82D47AD0;
	sub_82D35198(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82D47ADC;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82D47AE0;
	sub_82D35198(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// bl 0x82d37480
	ctx.lr = 0x82D47AEC;
	sub_82D37480(ctx, base);
loc_82D47AEC:
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

__attribute__((alias("__imp__sub_82D47B04"))) PPC_WEAK_FUNC(sub_82D47B04);
PPC_FUNC_IMPL(__imp__sub_82D47B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47B08"))) PPC_WEAK_FUNC(sub_82D47B08);
PPC_FUNC_IMPL(__imp__sub_82D47B08) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47b74
	if (!cr6.eq) goto loc_82D47B74;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D47B48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47b64
	if (cr6.eq) goto loc_82D47B64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D47B58;
	sub_82D475F8(ctx, base);
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
	// b 0x82d47b78
	goto loc_82D47B78;
loc_82D47B64:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// stw r30,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r30.u32);
	// b 0x82d47b78
	goto loc_82D47B78;
loc_82D47B74:
	// stw r30,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r30.u32);
loc_82D47B78:
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

__attribute__((alias("__imp__sub_82D47B90"))) PPC_WEAK_FUNC(sub_82D47B90);
PPC_FUNC_IMPL(__imp__sub_82D47B90) {
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
	// bl 0x82d477a8
	ctx.lr = 0x82D47BA0;
	sub_82D477A8(ctx, base);
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

__attribute__((alias("__imp__sub_82D47BB4"))) PPC_WEAK_FUNC(sub_82D47BB4);
PPC_FUNC_IMPL(__imp__sub_82D47BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47BB8"))) PPC_WEAK_FUNC(sub_82D47BB8);
PPC_FUNC_IMPL(__imp__sub_82D47BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D47BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-5400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47c14
	if (!cr6.eq) goto loc_82D47C14;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D47BF4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47c08
	if (cr6.eq) goto loc_82D47C08;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d475f8
	ctx.lr = 0x82D47C04;
	sub_82D475F8(ctx, base);
	// b 0x82d47c0c
	goto loc_82D47C0C;
loc_82D47C08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82D47C0C:
	// stw r3,-5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5400, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82D47C14:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x8259cb28
	ctx.lr = 0x82D47C28;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d47c48
	if (cr6.lt) goto loc_82D47C48;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D47C48;
	sub_825952B8(ctx, base);
loc_82D47C48:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D47C60"))) PPC_WEAK_FUNC(sub_82D47C60);
PPC_FUNC_IMPL(__imp__sub_82D47C60) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d47d10
	if (cr6.eq) goto loc_82D47D10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d74810
	ctx.lr = 0x82D47C8C;
	sub_82D74810(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259cb28
	ctx.lr = 0x82D47CAC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d73dd8
	ctx.lr = 0x82D47CB4;
	sub_82D73DD8(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82d47cd8
	if (cr6.eq) goto loc_82D47CD8;
	// bl 0x82d479b8
	ctx.lr = 0x82D47CC4;
	sub_82D479B8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D47CC8;
	sub_831156E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8312bb08
	ctx.lr = 0x82D47CD8;
	sub_8312BB08(ctx, base);
loc_82D47CD8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-5757
	ctx.r4.s64 = ctx.r11.s64 + -5757;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D47CEC;
	sub_8259CC28(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// blt cr6,0x82d47d10
	if (cr6.lt) goto loc_82D47D10;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82D47D10;
	sub_825952B8(ctx, base);
loc_82D47D10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82D47D28"))) PPC_WEAK_FUNC(sub_82D47D28);
PPC_FUNC_IMPL(__imp__sub_82D47D28) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82d47dd4
	if (cr6.eq) goto loc_82D47DD4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d47dd4
	if (cr6.eq) goto loc_82D47DD4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d47d68
	if (!cr6.eq) goto loc_82D47D68;
	// lwz r4,80(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x82d47468
	ctx.lr = 0x82D47D64;
	sub_82D47468(ctx, base);
	// b 0x82d47dd4
	goto loc_82D47DD4;
loc_82D47D68:
	// bl 0x83a7d958
	ctx.lr = 0x82D47D6C;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82D47D70;
	sub_83524138(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,1000
	cr6.compare<uint64_t>(ctx.r10.u64, 1000, xer);
	// blt cr6,0x82d47dd4
	if (cr6.lt) goto loc_82D47DD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82d47468
	ctx.lr = 0x82D47D90;
	sub_82D47468(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x82d47dbc
	if (cr6.gt) goto loc_82D47DBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x82d474d0
	ctx.lr = 0x82D47DB4;
	sub_82D474D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47c60
	ctx.lr = 0x82D47DBC;
	sub_82D47C60(ctx, base);
loc_82D47DBC:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d47dd4
	if (cr6.eq) goto loc_82D47DD4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82D47DD4:
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

__attribute__((alias("__imp__sub_82D47DEC"))) PPC_WEAK_FUNC(sub_82D47DEC);
PPC_FUNC_IMPL(__imp__sub_82D47DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47DF0"))) PPC_WEAK_FUNC(sub_82D47DF0);
PPC_FUNC_IMPL(__imp__sub_82D47DF0) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47e20
	if (cr6.eq) goto loc_82D47E20;
	// bl 0x82d49b58
	ctx.lr = 0x82D47E14;
	sub_82D49B58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// b 0x82d47e24
	goto loc_82D47E24;
loc_82D47E20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D47E24:
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D47E3C"))) PPC_WEAK_FUNC(sub_82D47E3C);
PPC_FUNC_IMPL(__imp__sub_82D47E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D47E40"))) PPC_WEAK_FUNC(sub_82D47E40);
PPC_FUNC_IMPL(__imp__sub_82D47E40) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47ed8
	if (!cr6.eq) goto loc_82D47ED8;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r3,-32284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32284);
	// bl 0x83815a48
	ctx.lr = 0x82D47E6C;
	sub_83815A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d47e8c
	if (!cr6.eq) goto loc_82D47E8C;
loc_82D47E74:
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
loc_82D47E8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4b370
	ctx.lr = 0x82D47E94;
	sub_82D4B370(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d47e74
	if (cr6.eq) goto loc_82D47E74;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8337f1e0
	ctx.lr = 0x82D47EA8;
	sub_8337F1E0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82d2bbb8
	ctx.lr = 0x82D47EB0;
	sub_82D2BBB8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-32280(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32280);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D47ED0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r8.u8);
loc_82D47ED8:
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

__attribute__((alias("__imp__sub_82D47EF0"))) PPC_WEAK_FUNC(sub_82D47EF0);
PPC_FUNC_IMPL(__imp__sub_82D47EF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D47EF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D47F14;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r30,1(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82D47F28;
	sub_82597088(ctx, base);
	// rlwinm r10,r30,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d47f38
	if (cr6.eq) goto loc_82D47F38;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_82D47F38:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// subfe r29,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r30,r29,24
	ctx.r30.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d47f98
	if (cr6.eq) goto loc_82D47F98;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d47f94
	if (cr6.eq) goto loc_82D47F94;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d47f98
	if (!cr6.eq) goto loc_82D47F98;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D47F8C;
	sub_83A7D958(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x82d47f98
	goto loc_82D47F98;
loc_82D47F94:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82D47F98:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d48018
	if (!cr6.eq) goto loc_82D48018;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d48014
	if (cr6.eq) goto loc_82D48014;
	// bl 0x83a7d958
	ctx.lr = 0x82D47FB0;
	sub_83A7D958(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82D47FBC;
	sub_83524138(ctx, base);
	// clrldi r10,r27,48
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// bge cr6,0x82d47fd0
	if (!cr6.lt) goto loc_82D47FD0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82D47FD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48018
	if (cr6.eq) goto loc_82D48018;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d47e40
	ctx.lr = 0x82D47FE4;
	sub_82D47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48018
	if (cr6.eq) goto loc_82D48018;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D47FFC;
	sub_83A7D958(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D48014:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82D48018:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4802C"))) PPC_WEAK_FUNC(sub_82D4802C);
PPC_FUNC_IMPL(__imp__sub_82D4802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D48030"))) PPC_WEAK_FUNC(sub_82D48030);
PPC_FUNC_IMPL(__imp__sub_82D48030) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d47ef0
	ctx.lr = 0x82D48054;
	sub_82D47EF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d48150
	if (cr6.eq) goto loc_82D48150;
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d48090
	if (!cr6.eq) goto loc_82D48090;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d48150
	if (!cr6.eq) goto loc_82D48150;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D48088;
	sub_83A7D958(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// b 0x82d48150
	goto loc_82D48150;
loc_82D48090:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// beq cr6,0x82d480d0
	if (cr6.eq) goto loc_82D480D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// beq cr6,0x82d48150
	if (cr6.eq) goto loc_82D48150;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,-32280(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32280);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D480C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r30.u8);
	// b 0x82d48150
	goto loc_82D48150;
loc_82D480D0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d480fc
	if (cr6.eq) goto loc_82D480FC;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r4,-32276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32276);
	// bl 0x82d2bb40
	ctx.lr = 0x82D480E4;
	sub_82D2BB40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d48150
	if (cr6.eq) goto loc_82D48150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d47df0
	ctx.lr = 0x82D480F8;
	sub_82D47DF0(ctx, base);
	// b 0x82d48150
	goto loc_82D48150;
loc_82D480FC:
	// bl 0x83a7d958
	ctx.lr = 0x82D48100;
	sub_83A7D958(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82D4810C;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,200
	cr6.compare<uint64_t>(ctx.r3.u64, 200, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82d4811c
	if (!cr6.lt) goto loc_82D4811C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D4811C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48150
	if (cr6.eq) goto loc_82D48150;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-32276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32276);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D48148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r8.u8);
loc_82D48150:
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

__attribute__((alias("__imp__sub_82D48168"))) PPC_WEAK_FUNC(sub_82D48168);
PPC_FUNC_IMPL(__imp__sub_82D48168) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-5108
	ctx.r4.s64 = ctx.r11.s64 + -5108;
	// bl 0x83103328
	ctx.lr = 0x82D4818C;
	sub_83103328(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-5000
	ctx.r9.s64 = ctx.r10.s64 + -5000;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stb r30,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r30.u8);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stb r30,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r30.u8);
	// stb r30,82(r31)
	PPC_STORE_U8(ctx.r31.u32 + 82, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82D481C4;
	sub_82596FA8(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82D481E8"))) PPC_WEAK_FUNC(sub_82D481E8);
PPC_FUNC_IMPL(__imp__sub_82D481E8) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-5000
	ctx.r10.s64 = ctx.r11.s64 + -5000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82d48224
	if (cr6.eq) goto loc_82D48224;
	// bl 0x82d49b58
	ctx.lr = 0x82D48220;
	sub_82D49B58(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82D48224:
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,-5024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5024, ctx.r30.u32);
	// bl 0x82596f90
	ctx.lr = 0x82D4823C;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82D48244;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D4825C"))) PPC_WEAK_FUNC(sub_82D4825C);
PPC_FUNC_IMPL(__imp__sub_82D4825C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D48260"))) PPC_WEAK_FUNC(sub_82D48260);
PPC_FUNC_IMPL(__imp__sub_82D48260) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r31,-5024(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5024);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d482a8
	if (cr6.eq) goto loc_82D482A8;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D48294;
	sub_82596FE8(ctx, base);
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D482A8;
	sub_82597088(ctx, base);
loc_82D482A8:
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

__attribute__((alias("__imp__sub_82D482C0"))) PPC_WEAK_FUNC(sub_82D482C0);
PPC_FUNC_IMPL(__imp__sub_82D482C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D482C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-5024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5024);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48330
	if (cr6.eq) goto loc_82D48330;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82D482F0;
	sub_82596FE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48318
	if (cr6.eq) goto loc_82D48318;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D48310;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D48318:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// bl 0x82597088
	ctx.lr = 0x82D48330;
	sub_82597088(ctx, base);
loc_82D48330:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D48338"))) PPC_WEAK_FUNC(sub_82D48338);
PPC_FUNC_IMPL(__imp__sub_82D48338) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-5024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5024);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48370
	if (cr6.eq) goto loc_82D48370;
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
loc_82D48370:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,124
	ctx.r4.s64 = 124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D48388;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4839c
	if (cr6.eq) goto loc_82D4839C;
	// bl 0x82d48168
	ctx.lr = 0x82D48394;
	sub_82D48168(ctx, base);
	// stw r3,-5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5024, ctx.r3.u32);
	// b 0x82d483a4
	goto loc_82D483A4;
loc_82D4839C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5024, ctx.r11.u32);
loc_82D483A4:
	// bl 0x831021a0
	ctx.lr = 0x82D483A8;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82D483B0;
	sub_82DA45F8(ctx, base);
	// lwz r4,-5024(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5024);
	// bl 0x83103100
	ctx.lr = 0x82D483B8;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82D483D0"))) PPC_WEAK_FUNC(sub_82D483D0);
PPC_FUNC_IMPL(__imp__sub_82D483D0) {
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
	// bl 0x82d481e8
	ctx.lr = 0x82D483F0;
	sub_82D481E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48408
	if (cr6.eq) goto loc_82D48408;
	// bl 0x82416268
	ctx.lr = 0x82D48404;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D48408:
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

__attribute__((alias("__imp__sub_82D48420"))) PPC_WEAK_FUNC(sub_82D48420);
PPC_FUNC_IMPL(__imp__sub_82D48420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-5012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5012);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4842C"))) PPC_WEAK_FUNC(sub_82D4842C);
PPC_FUNC_IMPL(__imp__sub_82D4842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D48430"))) PPC_WEAK_FUNC(sub_82D48430);
PPC_FUNC_IMPL(__imp__sub_82D48430) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-5012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48494
	if (cr6.eq) goto loc_82D48494;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D48464;
	sub_82595150(ctx, base);
	// lwz r3,-5012(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5012);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d48484
	if (cr6.eq) goto loc_82D48484;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D48484;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D48484:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D4848C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-5012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5012, ctx.r11.u32);
loc_82D48494:
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

__attribute__((alias("__imp__sub_82D484A8"))) PPC_WEAK_FUNC(sub_82D484A8);
PPC_FUNC_IMPL(__imp__sub_82D484A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D484C0"))) PPC_WEAK_FUNC(sub_82D484C0);
PPC_FUNC_IMPL(__imp__sub_82D484C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82d484e4
	if (cr6.gt) goto loc_82D484E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D484E4:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D48500"))) PPC_WEAK_FUNC(sub_82D48500);
PPC_FUNC_IMPL(__imp__sub_82D48500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82d48524
	if (cr6.gt) goto loc_82D48524;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D48524:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D48540"))) PPC_WEAK_FUNC(sub_82D48540);
PPC_FUNC_IMPL(__imp__sub_82D48540) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4628
	ctx.r10.s64 = ctx.r11.s64 + -4628;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d4857c
	if (cr6.eq) goto loc_82D4857C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4857C;
	sub_825952B8(ctx, base);
loc_82D4857C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D485A0"))) PPC_WEAK_FUNC(sub_82D485A0);
PPC_FUNC_IMPL(__imp__sub_82D485A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D485A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d485f8
	if (cr6.eq) goto loc_82D485F8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d485f4
	if (cr6.eq) goto loc_82D485F4;
loc_82D485CC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d485cc
	if (!cr6.eq) goto loc_82D485CC;
loc_82D485F4:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82D485F8:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r29,214
	ctx.r29.s64 = 214;
	// addi r31,r11,-32064
	ctx.r31.s64 = ctx.r11.s64 + -32064;
loc_82D48604:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82d48680
	if (cr6.gt) goto loc_82D48680;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d48674
	if (cr6.eq) goto loc_82D48674;
	// bdz 0x82d48674
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D48674;
	// bdz 0x82d48634
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D48634;
	// bdz 0x82d48640
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D48640;
	// bdz 0x82d4864c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D4864C;
	// bdz 0x82d48658
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D48658;
	// b 0x82d48664
	goto loc_82D48664;
loc_82D48634:
	// bl 0x830ff290
	ctx.lr = 0x82D48638;
	sub_830FF290(ctx, base);
	// lbz r11,67(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 67);
	// b 0x82d4866c
	goto loc_82D4866C;
loc_82D48640:
	// bl 0x830ff290
	ctx.lr = 0x82D48644;
	sub_830FF290(ctx, base);
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// b 0x82d4866c
	goto loc_82D4866C;
loc_82D4864C:
	// bl 0x830ff290
	ctx.lr = 0x82D48650;
	sub_830FF290(ctx, base);
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// b 0x82d4866c
	goto loc_82D4866C;
loc_82D48658:
	// bl 0x830ff290
	ctx.lr = 0x82D4865C;
	sub_830FF290(ctx, base);
	// lbz r11,70(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// b 0x82d4866c
	goto loc_82D4866C;
loc_82D48664:
	// bl 0x830ff290
	ctx.lr = 0x82D48668;
	sub_830FF290(ctx, base);
	// lbz r11,71(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
loc_82D4866C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48680
	if (cr6.eq) goto loc_82D48680;
loc_82D48674:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d54828
	ctx.lr = 0x82D48680;
	sub_82D54828(ctx, base);
loc_82D48680:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x82d48604
	if (!cr0.eq) goto loc_82D48604;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D48694"))) PPC_WEAK_FUNC(sub_82D48694);
PPC_FUNC_IMPL(__imp__sub_82D48694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D48698"))) PPC_WEAK_FUNC(sub_82D48698);
PPC_FUNC_IMPL(__imp__sub_82D48698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D486A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r27,214
	ctx.r27.s64 = 214;
	// addi r29,r11,-32064
	ctx.r29.s64 = ctx.r11.s64 + -32064;
	// li r28,12
	ctx.r28.s64 = 12;
loc_82D486BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// bne cr6,0x82d487a0
	if (!cr6.eq) goto loc_82D487A0;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r31,r26,4
	ctx.r31.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d486e8
	if (!cr6.lt) goto loc_82D486E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82d486ec
	if (!cr6.gt) goto loc_82D486EC;
loc_82D486E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D486EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d48758
	if (cr6.eq) goto loc_82D48758;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// divw r30,r8,r28
	ctx.r30.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// bne cr6,0x82d4871c
	if (!cr6.eq) goto loc_82D4871C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d546e8
	ctx.lr = 0x82D4871C;
	sub_82D546E8(ctx, base);
loc_82D4871C:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82d48794
	if (cr6.eq) goto loc_82D48794;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// b 0x82d48794
	goto loc_82D48794;
loc_82D48758:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d48770
	if (!cr6.eq) goto loc_82D48770;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d546e8
	ctx.lr = 0x82D48770;
	sub_82D546E8(ctx, base);
loc_82D48770:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48794
	if (cr6.eq) goto loc_82D48794;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82D48794:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D487A0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82d486bc
	if (!cr0.eq) goto loc_82D486BC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D487B4"))) PPC_WEAK_FUNC(sub_82D487B4);
PPC_FUNC_IMPL(__imp__sub_82D487B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D487B8"))) PPC_WEAK_FUNC(sub_82D487B8);
PPC_FUNC_IMPL(__imp__sub_82D487B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4628
	ctx.r9.s64 = ctx.r10.s64 + -4628;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d4881c
	if (cr6.eq) goto loc_82D4881C;
loc_82D487F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d487f4
	if (!cr6.eq) goto loc_82D487F4;
loc_82D4881C:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D48824"))) PPC_WEAK_FUNC(sub_82D48824);
PPC_FUNC_IMPL(__imp__sub_82D48824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D48828"))) PPC_WEAK_FUNC(sub_82D48828);
PPC_FUNC_IMPL(__imp__sub_82D48828) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-4628
	ctx.r10.s64 = ctx.r11.s64 + -4628;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d4886c
	if (cr6.eq) goto loc_82D4886C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4886C;
	sub_825952B8(ctx, base);
loc_82D4886C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82d48894
	if (cr6.eq) goto loc_82D48894;
	// bl 0x82416268
	ctx.lr = 0x82D48890;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D48894:
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

__attribute__((alias("__imp__sub_82D488AC"))) PPC_WEAK_FUNC(sub_82D488AC);
PPC_FUNC_IMPL(__imp__sub_82D488AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D488B0"))) PPC_WEAK_FUNC(sub_82D488B0);
PPC_FUNC_IMPL(__imp__sub_82D488B0) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-5012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d48904
	if (!cr6.eq) goto loc_82D48904;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D488E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d488f8
	if (cr6.eq) goto loc_82D488F8;
	// bl 0x82d487b8
	ctx.lr = 0x82D488F4;
	sub_82D487B8(ctx, base);
	// b 0x82d488fc
	goto loc_82D488FC;
loc_82D488F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D488FC:
	// stw r3,-5012(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5012, ctx.r3.u32);
	// bl 0x82d485a0
	ctx.lr = 0x82D48904;
	sub_82D485A0(ctx, base);
loc_82D48904:
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

__attribute__((alias("__imp__sub_82D48918"))) PPC_WEAK_FUNC(sub_82D48918);
PPC_FUNC_IMPL(__imp__sub_82D48918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-5000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5000);
loc_82D48920:
	// addic. r3,r3,1
	xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r3.s64 = ctx.r3.s64 + 1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82d48920
	if (cr0.eq) goto loc_82D48920;
	// stw r3,-5000(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5000, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D48930"))) PPC_WEAK_FUNC(sub_82D48930);
PPC_FUNC_IMPL(__imp__sub_82D48930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d2ed38
	sub_82D2ED38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D48934"))) PPC_WEAK_FUNC(sub_82D48934);
PPC_FUNC_IMPL(__imp__sub_82D48934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D48938"))) PPC_WEAK_FUNC(sub_82D48938);
PPC_FUNC_IMPL(__imp__sub_82D48938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,77(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 77);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d48984
	if (!cr6.eq) goto loc_82D48984;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,77(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d4897c
	if (!cr6.eq) goto loc_82D4897C;
loc_82D48968:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,77(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d48968
	if (cr6.eq) goto loc_82D48968;
loc_82D4897C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82D48984:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d489bc
	if (!cr6.eq) goto loc_82D489BC;
loc_82D48994:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d489bc
	if (!cr6.eq) goto loc_82D489BC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d48994
	if (cr6.eq) goto loc_82D48994;
loc_82D489BC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D489C4"))) PPC_WEAK_FUNC(sub_82D489C4);
PPC_FUNC_IMPL(__imp__sub_82D489C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D489C8"))) PPC_WEAK_FUNC(sub_82D489C8);
PPC_FUNC_IMPL(__imp__sub_82D489C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D489FC;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,56(r7)
	PPC_STORE_U8(ctx.r7.u32 + 56, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,57(r6)
	PPC_STORE_U8(ctx.r6.u32 + 57, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D48A40"))) PPC_WEAK_FUNC(sub_82D48A40);
PPC_FUNC_IMPL(__imp__sub_82D48A40) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D48A74;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,76(r7)
	PPC_STORE_U8(ctx.r7.u32 + 76, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,77(r6)
	PPC_STORE_U8(ctx.r6.u32 + 77, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D48AB8"))) PPC_WEAK_FUNC(sub_82D48AB8);
PPC_FUNC_IMPL(__imp__sub_82D48AB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d48b00
	if (cr6.eq) goto loc_82D48B00;
loc_82D48ADC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D48AF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d48adc
	if (!cr6.eq) goto loc_82D48ADC;
loc_82D48B00:
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

__attribute__((alias("__imp__sub_82D48B18"))) PPC_WEAK_FUNC(sub_82D48B18);
PPC_FUNC_IMPL(__imp__sub_82D48B18) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d48b60
	if (cr6.eq) goto loc_82D48B60;
loc_82D48B3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D48B54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,60
	ctx.r31.s64 = ctx.r31.s64 + 60;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d48b3c
	if (!cr6.eq) goto loc_82D48B3C;
loc_82D48B60:
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

__attribute__((alias("__imp__sub_82D48B78"))) PPC_WEAK_FUNC(sub_82D48B78);
PPC_FUNC_IMPL(__imp__sub_82D48B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D48B80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48ba8
	if (cr6.eq) goto loc_82D48BA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82D48BA8;
	sub_831CC188(ctx, base);
loc_82D48BA8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8330ee50
	ctx.lr = 0x82D48BB4;
	sub_8330EE50(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82d48bd0
	if (cr6.eq) goto loc_82D48BD0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82d48bf4
	goto loc_82D48BF4;
loc_82D48BD0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d48be8
	if (cr6.eq) goto loc_82D48BE8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82d48bf4
	goto loc_82D48BF4;
loc_82D48BE8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48ce0
	if (!cr6.eq) goto loc_82D48CE0;
loc_82D48BF4:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d48c08
	if (!cr6.eq) goto loc_82D48C08;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D48C08:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48c20
	if (!cr6.eq) goto loc_82D48C20;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82d48c38
	goto loc_82D48C38;
loc_82D48C20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48c34
	if (!cr6.eq) goto loc_82D48C34;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82d48c38
	goto loc_82D48C38;
loc_82D48C34:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82D48C38:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48c88
	if (!cr6.eq) goto loc_82D48C88;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48c5c
	if (cr6.eq) goto loc_82D48C5C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82d48c84
	goto loc_82D48C84;
loc_82D48C5C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d48c84
	if (!cr6.eq) goto loc_82D48C84;
loc_82D48C70:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d48c70
	if (cr6.eq) goto loc_82D48C70;
loc_82D48C84:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82D48C88:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48d74
	if (!cr6.eq) goto loc_82D48D74;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48cb0
	if (cr6.eq) goto loc_82D48CB0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82d48d74
	goto loc_82D48D74;
loc_82D48CB0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d48cd8
	if (!cr6.eq) goto loc_82D48CD8;
loc_82D48CC4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d48cc4
	if (cr6.eq) goto loc_82D48CC4;
loc_82D48CD8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82d48d74
	goto loc_82D48D74;
loc_82D48CE0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d48d00
	if (!cr6.eq) goto loc_82D48D00;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82d48d28
	goto loc_82D48D28;
loc_82D48D00:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d48d14
	if (!cr6.eq) goto loc_82D48D14;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D48D14:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82D48D28:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48d40
	if (!cr6.eq) goto loc_82D48D40;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82d48d5c
	goto loc_82D48D5C;
loc_82D48D40:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d48d58
	if (!cr6.eq) goto loc_82D48D58;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82d48d5c
	goto loc_82D48D5C;
loc_82D48D58:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82D48D5C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// lbz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 20);
	// stb r9,20(r25)
	PPC_STORE_U8(ctx.r25.u32 + 20, ctx.r9.u8);
	// stb r10,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r10.u8);
loc_82D48D74:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d48f0c
	if (!cr6.eq) goto loc_82D48F0C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d48f08
	if (cr6.eq) goto loc_82D48F08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D48D98:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d48f08
	if (!cr6.eq) goto loc_82D48F08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d48e50
	if (!cr6.eq) goto loc_82D48E50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d48dd8
	if (!cr6.eq) goto loc_82D48DD8;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x834a5fc8
	ctx.lr = 0x82D48DD4;
	sub_834A5FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D48DD8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d48ea4
	if (!cr6.eq) goto loc_82D48EA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d48e04
	if (!cr6.eq) goto loc_82D48E04;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d48ea0
	if (cr6.eq) goto loc_82D48EA0;
loc_82D48E04:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d48e2c
	if (!cr6.eq) goto loc_82D48E2C;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df110
	ctx.lr = 0x82D48E28;
	sub_837DF110(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D48E2C:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// bl 0x834a5fc8
	ctx.lr = 0x82D48E4C;
	sub_834A5FC8(ctx, base);
	// b 0x82d48f08
	goto loc_82D48F08;
loc_82D48E50:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d48e74
	if (!cr6.eq) goto loc_82D48E74;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df110
	ctx.lr = 0x82D48E70;
	sub_837DF110(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D48E74:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d48ea4
	if (!cr6.eq) goto loc_82D48EA4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d48ec0
	if (!cr6.eq) goto loc_82D48EC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d48ec0
	if (!cr6.eq) goto loc_82D48EC0;
loc_82D48EA0:
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
loc_82D48EA4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d48d98
	if (!cr6.eq) goto loc_82D48D98;
	// b 0x82d48f08
	goto loc_82D48F08;
loc_82D48EC0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d48ee8
	if (!cr6.eq) goto loc_82D48EE8;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x834a5fc8
	ctx.lr = 0x82D48EE4;
	sub_834A5FC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D48EE8:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// bl 0x837df110
	ctx.lr = 0x82D48F08;
	sub_837DF110(ctx, base);
loc_82D48F08:
	// stb r29,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r29.u8);
loc_82D48F0C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x82D48F14;
	sub_82416268(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d48f28
	if (cr6.eq) goto loc_82D48F28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82D48F28:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D48F38"))) PPC_WEAK_FUNC(sub_82D48F38);
PPC_FUNC_IMPL(__imp__sub_82D48F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D48F40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d48f60
	if (!cr6.eq) goto loc_82D48F60;
loc_82D48F54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D48F60:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82d48f54
	if (cr6.eq) goto loc_82D48F54;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r25,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// beq 0x82d49040
	if (cr0.eq) goto loc_82D49040;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82D48F88:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// ble cr6,0x82d4904c
	if (!cr6.gt) goto loc_82D4904C;
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49030
	if (cr6.eq) goto loc_82D49030;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// beq cr6,0x82d49030
	if (cr6.eq) goto loc_82D49030;
loc_82D48FC0:
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49014
	if (cr6.eq) goto loc_82D49014;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d49014
	if (cr6.eq) goto loc_82D49014;
loc_82D48FDC:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d49000
	if (cr6.eq) goto loc_82D49000;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49000
	if (cr6.eq) goto loc_82D49000;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82d49000
	if (!cr6.eq) goto loc_82D49000;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
loc_82D49000:
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d48fdc
	if (!cr6.eq) goto loc_82D48FDC;
loc_82D49014:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x82D4901C;
	sub_837C05A0(ctx, base);
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d48fc0
	if (!cr6.eq) goto loc_82D48FC0;
loc_82D49030:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x82d48f88
	if (cr6.lt) goto loc_82D48F88;
loc_82D49040:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D4904C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D49058;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D49058"))) PPC_WEAK_FUNC(sub_82D49058);
PPC_FUNC_IMPL(__imp__sub_82D49058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D49060;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82d490dc
	if (cr6.eq) goto loc_82D490DC;
	// li r29,27
	ctx.r29.s64 = 27;
loc_82D49080:
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d490c4
	if (cr6.eq) goto loc_82D490C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x82D49094;
	sub_83779190(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D490A4;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D490BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D490C4;
	sub_82595170(ctx, base);
loc_82D490C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x82D490CC;
	sub_837C05A0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d49080
	if (!cr6.eq) goto loc_82D49080;
loc_82D490DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D490E8"))) PPC_WEAK_FUNC(sub_82D490E8);
PPC_FUNC_IMPL(__imp__sub_82D490E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D490F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82d49174
	if (cr6.eq) goto loc_82D49174;
	// li r29,27
	ctx.r29.s64 = 27;
loc_82D49110:
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d4915c
	if (cr6.eq) goto loc_82D4915C;
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x82d49058
	ctx.lr = 0x82D49124;
	sub_82D49058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x82D4912C;
	sub_83779190(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D4913C;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D49154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D4915C;
	sub_82595170(ctx, base);
loc_82D4915C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x82D49164;
	sub_837C05A0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d49110
	if (!cr6.eq) goto loc_82D49110;
loc_82D49174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D49180"))) PPC_WEAK_FUNC(sub_82D49180);
PPC_FUNC_IMPL(__imp__sub_82D49180) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d491e0
	if (cr6.eq) goto loc_82D491E0;
	// addi r5,r4,264
	ctx.r5.s64 = ctx.r4.s64 + 264;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82D491AC;
	sub_833ECC50(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d491d4
	if (!cr6.eq) goto loc_82D491D4;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82D491D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d48b78
	ctx.lr = 0x82D491E0;
	sub_82D48B78(ctx, base);
loc_82D491E0:
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
}

__attribute__((alias("__imp__sub_82D491F8"))) PPC_WEAK_FUNC(sub_82D491F8);
PPC_FUNC_IMPL(__imp__sub_82D491F8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82d49224
	if (!cr6.eq) goto loc_82D49224;
loc_82D4921C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d49290
	goto loc_82D49290;
loc_82D49224:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4923c
	if (cr6.eq) goto loc_82D4923C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d48f38
	ctx.lr = 0x82D49234;
	sub_82D48F38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d4921c
	if (!cr6.eq) goto loc_82D4921C;
loc_82D4923C:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d490e8
	ctx.lr = 0x82D49248;
	sub_82D490E8(ctx, base);
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d49058
	ctx.lr = 0x82D49250;
	sub_82D49058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x82D49258;
	sub_83779190(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D4926C;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D49284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D4928C;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D49290:
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

__attribute__((alias("__imp__sub_82D492A8"))) PPC_WEAK_FUNC(sub_82D492A8);
PPC_FUNC_IMPL(__imp__sub_82D492A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D492B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d492d0
	if (!cr6.eq) goto loc_82D492D0;
loc_82D492C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D492D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5d508
	ctx.lr = 0x82D492D8;
	sub_82D5D508(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// beq cr6,0x82d49334
	if (cr6.eq) goto loc_82D49334;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82D492F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82D492FC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49324
	if (cr6.eq) goto loc_82D49324;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d4931c
	if (cr6.eq) goto loc_82D4931C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d491f8
	ctx.lr = 0x82D49314;
	sub_82D491F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d49324
	if (!cr6.eq) goto loc_82D49324;
loc_82D4931C:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
loc_82D49324:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82d492f0
	if (cr6.lt) goto loc_82D492F0;
loc_82D49334:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d49350
	if (cr6.eq) goto loc_82D49350;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d48f38
	ctx.lr = 0x82D49348;
	sub_82D48F38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d492c4
	if (!cr6.eq) goto loc_82D492C4;
loc_82D49350:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d490e8
	ctx.lr = 0x82D4935C;
	sub_82D490E8(ctx, base);
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d49058
	ctx.lr = 0x82D49364;
	sub_82D49058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x82D4936C;
	sub_83779190(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D49380;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D49398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D493A0;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D493AC"))) PPC_WEAK_FUNC(sub_82D493AC);
PPC_FUNC_IMPL(__imp__sub_82D493AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D493B0"))) PPC_WEAK_FUNC(sub_82D493B0);
PPC_FUNC_IMPL(__imp__sub_82D493B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D493B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d493d8
	if (!cr6.eq) goto loc_82D493D8;
loc_82D493CC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D493D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5d508
	ctx.lr = 0x82D493E0;
	sub_82D5D508(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// beq cr6,0x82d4943c
	if (cr6.eq) goto loc_82D4943C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82D493F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82D49404;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4942c
	if (cr6.eq) goto loc_82D4942C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d49424
	if (cr6.eq) goto loc_82D49424;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d492a8
	ctx.lr = 0x82D4941C;
	sub_82D492A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d4942c
	if (!cr6.eq) goto loc_82D4942C;
loc_82D49424:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
loc_82D4942C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82d493f8
	if (cr6.lt) goto loc_82D493F8;
loc_82D4943C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83574c00
	ctx.lr = 0x82D49444;
	sub_83574C00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,27
	ctx.r29.s64 = 27;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49484
	if (cr6.eq) goto loc_82D49484;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D49464;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4947C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D49484;
	sub_82595170(ctx, base);
loc_82D49484:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d494a0
	if (cr6.eq) goto loc_82D494A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d48f38
	ctx.lr = 0x82D49498;
	sub_82D48F38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d493cc
	if (!cr6.eq) goto loc_82D493CC;
loc_82D494A0:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d490e8
	ctx.lr = 0x82D494AC;
	sub_82D490E8(ctx, base);
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d49058
	ctx.lr = 0x82D494B4;
	sub_82D49058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83779190
	ctx.lr = 0x82D494BC;
	sub_83779190(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D494CC;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D494E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D494EC;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D494F8"))) PPC_WEAK_FUNC(sub_82D494F8);
PPC_FUNC_IMPL(__imp__sub_82D494F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D49500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4954c
	if (!cr6.eq) goto loc_82D4954C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4954c
	if (!cr6.eq) goto loc_82D4954C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d82bc8
	ctx.lr = 0x82D49534;
	sub_82D82BC8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D4954C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d4957c
	if (cr6.eq) goto loc_82D4957C;
loc_82D49554:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8330ee50
	ctx.lr = 0x82D49560;
	sub_8330EE50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d48b78
	ctx.lr = 0x82D49570;
	sub_82D48B78(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d49554
	if (!cr6.eq) goto loc_82D49554;
loc_82D4957C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4958C"))) PPC_WEAK_FUNC(sub_82D4958C);
PPC_FUNC_IMPL(__imp__sub_82D4958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D49590"))) PPC_WEAK_FUNC(sub_82D49590);
PPC_FUNC_IMPL(__imp__sub_82D49590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D49598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d49618
	if (cr6.eq) goto loc_82D49618;
	// addi r31,r4,264
	ctx.r31.s64 = ctx.r4.s64 + 264;
	// lis r29,-31758
	ctx.r29.s64 = -2081292288;
loc_82D495B4:
	// lwz r11,-5000(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5000);
loc_82D495B8:
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82d495b8
	if (cr0.eq) goto loc_82D495B8;
	// stw r11,-5000(r29)
	PPC_STORE_U32(ctx.r29.u32 + -5000, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x82D495D8;
	sub_833ECC50(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d495b4
	if (!cr6.eq) goto loc_82D495B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828f7738
	ctx.lr = 0x82D495F4;
	sub_828F7738(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82d49608
	if (cr0.eq) goto loc_82D49608;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_82D49608:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828f79f0
	ctx.lr = 0x82D49618;
	sub_828F79F0(ctx, base);
loc_82D49618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D49620"))) PPC_WEAK_FUNC(sub_82D49620);
PPC_FUNC_IMPL(__imp__sub_82D49620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D49628;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r21,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq 0x82d49830
	if (cr0.eq) goto loc_82D49830;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// li r26,27
	ctx.r26.s64 = 27;
loc_82D49654:
	// lwz r25,0(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r23
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, xer);
	// ble cr6,0x82d4983c
	if (!cr6.gt) goto loc_82D4983C;
	// lwzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49820
	if (cr6.eq) goto loc_82D49820;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x82d497d8
	if (cr6.eq) goto loc_82D497D8;
loc_82D4968C:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d497bc
	if (cr6.eq) goto loc_82D497BC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// beq cr6,0x82d49764
	if (cr6.eq) goto loc_82D49764;
loc_82D496AC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d49750
	if (cr6.eq) goto loc_82D49750;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d49720
	if (cr6.eq) goto loc_82D49720;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d496d4
	if (cr6.eq) goto loc_82D496D4;
	// bl 0x83815558
	ctx.lr = 0x82D496D4;
	sub_83815558(ctx, base);
loc_82D496D4:
	// stw r27,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49720
	if (cr6.eq) goto loc_82D49720;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82D496F4;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49714
	if (cr6.eq) goto loc_82D49714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D49714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D49714:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82D4971C;
	sub_82595170(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82D49720:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49750
	if (cr6.eq) goto loc_82D49750;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x82D4973C;
	sub_82595150(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82D49744;
	sub_82416268(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x82D4974C;
	sub_82595170(ctx, base);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_82D49750:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d496ac
	if (!cr6.eq) goto loc_82D496AC;
loc_82D49764:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d497bc
	if (cr6.eq) goto loc_82D497BC;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595150
	ctx.lr = 0x82D49780;
	sub_82595150(ctx, base);
	// lwz r31,40(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d497b0
	if (cr6.eq) goto loc_82D497B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4979c
	if (cr6.eq) goto loc_82D4979C;
	// bl 0x82416268
	ctx.lr = 0x82D4979C;
	sub_82416268(ctx, base);
loc_82D4979C:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82416268
	ctx.lr = 0x82D497B0;
	sub_82416268(ctx, base);
loc_82D497B0:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595170
	ctx.lr = 0x82D497B8;
	sub_82595170(ctx, base);
	// stw r27,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r27.u32);
loc_82D497BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x82D497C4;
	sub_837C05A0(ctx, base);
	// lwzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4968c
	if (!cr6.eq) goto loc_82D4968C;
loc_82D497D8:
	// lwzx r11,r24,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49820
	if (cr6.eq) goto loc_82D49820;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595150
	ctx.lr = 0x82D497F4;
	sub_82595150(ctx, base);
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49814
	if (cr6.eq) goto loc_82D49814;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D49814;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D49814:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595170
	ctx.lr = 0x82D4981C;
	sub_82595170(ctx, base);
	// stwx r27,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r27.u32);
loc_82D49820:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x82d49654
	if (cr6.lt) goto loc_82D49654;
loc_82D49830:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82D4983C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82D49848;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82D49848"))) PPC_WEAK_FUNC(sub_82D49848);
PPC_FUNC_IMPL(__imp__sub_82D49848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D49850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-4360
	ctx.r4.s64 = ctx.r11.s64 + -4360;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83815208
	ctx.lr = 0x82D49870;
	sub_83815208(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d49888
	if (!cr6.eq) goto loc_82D49888;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D49888:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83815040
	ctx.lr = 0x82D49894;
	sub_83815040(ctx, base);
	// stw r31,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r31.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d498b0
	if (cr6.lt) goto loc_82D498B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D498B0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D498B4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d498b4
	if (!cr6.eq) goto loc_82D498B4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D498DC;
	sub_8259CC28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D498E8"))) PPC_WEAK_FUNC(sub_82D498E8);
PPC_FUNC_IMPL(__imp__sub_82D498E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D498F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d49a08
	if (cr6.eq) goto loc_82D49A08;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d49920
	if (cr6.lt) goto loc_82D49920;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D49920:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d5bcb8
	ctx.lr = 0x82D49928;
	sub_82D5BCB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49a08
	if (cr6.eq) goto loc_82D49A08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D49944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49a08
	if (cr6.eq) goto loc_82D49A08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x838152a0
	ctx.lr = 0x82D4995C;
	sub_838152A0(ctx, base);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82d49978
	if (cr6.eq) goto loc_82D49978;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838152a0
	ctx.lr = 0x82D49978;
	sub_838152A0(ctx, base);
loc_82D49978:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d499a0
	if (cr6.lt) goto loc_82D499A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D499A0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8259d6c0
	ctx.lr = 0x82D499AC;
	sub_8259D6C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D499C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d52390
	ctx.lr = 0x82D499CC;
	sub_82D52390(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d49a14
	if (!cr6.lt) goto loc_82D49A14;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D499E8;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D49A00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D49A08;
	sub_82595170(ctx, base);
loc_82D49A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D49A14:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d51eb0
	ctx.lr = 0x82D49A20;
	sub_82D51EB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d49a68
	if (!cr6.lt) goto loc_82D49A68;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D49A3C;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D49A54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D49A5C;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82D49A68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D49A74"))) PPC_WEAK_FUNC(sub_82D49A74);
PPC_FUNC_IMPL(__imp__sub_82D49A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D49A78"))) PPC_WEAK_FUNC(sub_82D49A78);
PPC_FUNC_IMPL(__imp__sub_82D49A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D49A80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d49a9c
	if (!cr6.eq) goto loc_82D49A9C;
loc_82D49A90:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D49A9C:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-4988
	ctx.r3.s64 = ctx.r11.s64 + -4988;
	// addi r29,r31,268
	ctx.r29.s64 = ctx.r31.s64 + 268;
	// bl 0x82d49180
	ctx.lr = 0x82D49AB0;
	sub_82D49180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2ec40
	ctx.lr = 0x82D49AB8;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49ad0
	if (cr6.eq) goto loc_82D49AD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d493b0
	ctx.lr = 0x82D49AC8;
	sub_82D493B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d49a90
	if (!cr6.eq) goto loc_82D49A90;
loc_82D49AD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d48f38
	ctx.lr = 0x82D49ADC;
	sub_82D48F38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d49a90
	if (!cr6.eq) goto loc_82D49A90;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d490e8
	ctx.lr = 0x82D49AF0;
	sub_82D490E8(ctx, base);
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d49058
	ctx.lr = 0x82D49AF8;
	sub_82D49058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d49620
	ctx.lr = 0x82D49B00;
	sub_82D49620(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49b18
	if (cr6.eq) goto loc_82D49B18;
	// bl 0x83815558
	ctx.lr = 0x82D49B10;
	sub_83815558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82D49B18:
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D49B2C;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D49B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D49B4C;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D49B58"))) PPC_WEAK_FUNC(sub_82D49B58);
PPC_FUNC_IMPL(__imp__sub_82D49B58) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d49b80
	if (!cr6.eq) goto loc_82D49B80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d49c00
	goto loc_82D49C00;
loc_82D49B80:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-4988
	ctx.r11.s64 = ctx.r11.s64 + -4988;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82d49180
	ctx.lr = 0x82D49B94;
	sub_82D49180(ctx, base);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r3,r30,132
	ctx.r3.s64 = ctx.r30.s64 + 132;
	// bl 0x82d490e8
	ctx.lr = 0x82D49BA0;
	sub_82D490E8(ctx, base);
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d49058
	ctx.lr = 0x82D49BA8;
	sub_82D49058(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x82d49620
	ctx.lr = 0x82D49BB0;
	sub_82D49620(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49bc8
	if (cr6.eq) goto loc_82D49BC8;
	// bl 0x83815558
	ctx.lr = 0x82D49BC0;
	sub_83815558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82D49BC8:
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D49BDC;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D49BF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D49BFC;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D49C00:
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

__attribute__((alias("__imp__sub_82D49C18"))) PPC_WEAK_FUNC(sub_82D49C18);
PPC_FUNC_IMPL(__imp__sub_82D49C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D49C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-4272
	ctx.r10.s64 = ctx.r11.s64 + -4272;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49c68
	if (cr6.eq) goto loc_82D49C68;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d48ab8
	ctx.lr = 0x82D49C58;
	sub_82D48AB8(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D49C68;
	sub_825952B8(ctx, base);
loc_82D49C68:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,31660
	ctx.r10.s64 = ctx.r11.s64 + 31660;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d49ca4
	if (cr6.lt) goto loc_82D49CA4;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D49CA4;
	sub_825952B8(ctx, base);
loc_82D49CA4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D49CBC"))) PPC_WEAK_FUNC(sub_82D49CBC);
PPC_FUNC_IMPL(__imp__sub_82D49CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D49CC0"))) PPC_WEAK_FUNC(sub_82D49CC0);
PPC_FUNC_IMPL(__imp__sub_82D49CC0) {
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
	// bl 0x82d49c18
	ctx.lr = 0x82D49CE0;
	sub_82D49C18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49d00
	if (cr6.eq) goto loc_82D49D00;
	// bl 0x82595188
	ctx.lr = 0x82D49CF0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D49D00;
	sub_825952B8(ctx, base);
loc_82D49D00:
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

__attribute__((alias("__imp__sub_82D49D1C"))) PPC_WEAK_FUNC(sub_82D49D1C);
PPC_FUNC_IMPL(__imp__sub_82D49D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D49D20"))) PPC_WEAK_FUNC(sub_82D49D20);
PPC_FUNC_IMPL(__imp__sub_82D49D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D49D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-4268
	ctx.r10.s64 = ctx.r11.s64 + -4268;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49d70
	if (cr6.eq) goto loc_82D49D70;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d48b18
	ctx.lr = 0x82D49D60;
	sub_82D48B18(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D49D70;
	sub_825952B8(ctx, base);
loc_82D49D70:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,44
	ctx.r30.s64 = ctx.r28.s64 + 44;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d49db0
	if (cr6.eq) goto loc_82D49DB0;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d48ab8
	ctx.lr = 0x82D49DA0;
	sub_82D48AB8(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D49DB0;
	sub_825952B8(ctx, base);
loc_82D49DB0:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r10,r11,31660
	ctx.r10.s64 = ctx.r11.s64 + 31660;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d49de8
	if (cr6.lt) goto loc_82D49DE8;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D49DE8;
	sub_825952B8(ctx, base);
loc_82D49DE8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D49E00"))) PPC_WEAK_FUNC(sub_82D49E00);
PPC_FUNC_IMPL(__imp__sub_82D49E00) {
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
	// bl 0x82d49d20
	ctx.lr = 0x82D49E20;
	sub_82D49D20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49e40
	if (cr6.eq) goto loc_82D49E40;
	// bl 0x82595188
	ctx.lr = 0x82D49E30;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D49E40;
	sub_825952B8(ctx, base);
loc_82D49E40:
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

__attribute__((alias("__imp__sub_82D49E5C"))) PPC_WEAK_FUNC(sub_82D49E5C);
PPC_FUNC_IMPL(__imp__sub_82D49E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D49E60"))) PPC_WEAK_FUNC(sub_82D49E60);
PPC_FUNC_IMPL(__imp__sub_82D49E60) {
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r9,r10,31660
	ctx.r9.s64 = ctx.r10.s64 + 31660;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82d49ea4
	if (cr6.lt) goto loc_82D49EA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D49EA4;
	sub_825952B8(ctx, base);
loc_82D49EA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82D49ECC"))) PPC_WEAK_FUNC(sub_82D49ECC);
PPC_FUNC_IMPL(__imp__sub_82D49ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D49ED0"))) PPC_WEAK_FUNC(sub_82D49ED0);
PPC_FUNC_IMPL(__imp__sub_82D49ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D49ED8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,57(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 57);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49f00
	if (cr6.eq) goto loc_82D49F00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82D49F00;
	sub_831CC188(ctx, base);
loc_82D49F00:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82da4608
	ctx.lr = 0x82D49F0C;
	sub_82DA4608(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82d49f28
	if (cr6.eq) goto loc_82D49F28;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82d49f4c
	goto loc_82D49F4C;
loc_82D49F28:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,57(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d49f40
	if (cr6.eq) goto loc_82D49F40;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82d49f4c
	goto loc_82D49F4C;
loc_82D49F40:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a038
	if (!cr6.eq) goto loc_82D4A038;
loc_82D49F4C:
	// lbz r11,57(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 57);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d49f60
	if (!cr6.eq) goto loc_82D49F60;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D49F60:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d49f78
	if (!cr6.eq) goto loc_82D49F78;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82d49f90
	goto loc_82D49F90;
loc_82D49F78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d49f8c
	if (!cr6.eq) goto loc_82D49F8C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82d49f90
	goto loc_82D49F90;
loc_82D49F8C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82D49F90:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d49fe0
	if (!cr6.eq) goto loc_82D49FE0;
	// lbz r11,57(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d49fb4
	if (cr6.eq) goto loc_82D49FB4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82d49fdc
	goto loc_82D49FDC;
loc_82D49FB4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,57(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d49fdc
	if (!cr6.eq) goto loc_82D49FDC;
loc_82D49FC8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,57(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d49fc8
	if (cr6.eq) goto loc_82D49FC8;
loc_82D49FDC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82D49FE0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a0cc
	if (!cr6.eq) goto loc_82D4A0CC;
	// lbz r11,57(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a008
	if (cr6.eq) goto loc_82D4A008;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82d4a0cc
	goto loc_82D4A0CC;
loc_82D4A008:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,57(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d4a030
	if (!cr6.eq) goto loc_82D4A030;
loc_82D4A01C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,57(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d4a01c
	if (cr6.eq) goto loc_82D4A01C;
loc_82D4A030:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82d4a0cc
	goto loc_82D4A0CC;
loc_82D4A038:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a058
	if (!cr6.eq) goto loc_82D4A058;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82d4a080
	goto loc_82D4A080;
loc_82D4A058:
	// lbz r11,57(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 57);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4a06c
	if (!cr6.eq) goto loc_82D4A06C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D4A06C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82D4A080:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a098
	if (!cr6.eq) goto loc_82D4A098;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82d4a0b4
	goto loc_82D4A0B4;
loc_82D4A098:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a0b0
	if (!cr6.eq) goto loc_82D4A0B0;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82d4a0b4
	goto loc_82D4A0B4;
loc_82D4A0B0:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82D4A0B4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,56(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 56);
	// lbz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 56);
	// stb r9,56(r25)
	PPC_STORE_U8(ctx.r25.u32 + 56, ctx.r9.u8);
	// stb r10,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r10.u8);
loc_82D4A0CC:
	// lbz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4a264
	if (!cr6.eq) goto loc_82D4A264;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4a260
	if (cr6.eq) goto loc_82D4A260;
loc_82D4A0F0:
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4a260
	if (!cr6.eq) goto loc_82D4A260;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4a1a8
	if (!cr6.eq) goto loc_82D4A1A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a130
	if (!cr6.eq) goto loc_82D4A130;
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8247e670
	ctx.lr = 0x82D4A12C;
	sub_8247E670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D4A130:
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a1fc
	if (!cr6.eq) goto loc_82D4A1FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d4a15c
	if (!cr6.eq) goto loc_82D4A15C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d4a1f8
	if (cr6.eq) goto loc_82D4A1F8;
loc_82D4A15C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d4a184
	if (!cr6.eq) goto loc_82D4A184;
	// stb r30,56(r10)
	PPC_STORE_U8(ctx.r10.u32 + 56, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8247e430
	ctx.lr = 0x82D4A180;
	sub_8247E430(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D4A184:
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,56(r9)
	PPC_STORE_U8(ctx.r9.u32 + 56, ctx.r30.u8);
	// bl 0x8247e670
	ctx.lr = 0x82D4A1A4;
	sub_8247E670(ctx, base);
	// b 0x82d4a260
	goto loc_82D4A260;
loc_82D4A1A8:
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a1cc
	if (!cr6.eq) goto loc_82D4A1CC;
	// stb r30,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8247e430
	ctx.lr = 0x82D4A1C8;
	sub_8247E430(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D4A1CC:
	// lbz r10,57(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a1fc
	if (!cr6.eq) goto loc_82D4A1FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 56);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d4a218
	if (!cr6.eq) goto loc_82D4A218;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d4a218
	if (!cr6.eq) goto loc_82D4A218;
loc_82D4A1F8:
	// stb r29,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r29.u8);
loc_82D4A1FC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a0f0
	if (!cr6.eq) goto loc_82D4A0F0;
	// b 0x82d4a260
	goto loc_82D4A260;
loc_82D4A218:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d4a240
	if (!cr6.eq) goto loc_82D4A240;
	// stb r30,56(r10)
	PPC_STORE_U8(ctx.r10.u32 + 56, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8247e670
	ctx.lr = 0x82D4A23C;
	sub_8247E670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D4A240:
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,56(r9)
	PPC_STORE_U8(ctx.r9.u32 + 56, ctx.r30.u8);
	// bl 0x8247e430
	ctx.lr = 0x82D4A260;
	sub_8247E430(ctx, base);
loc_82D4A260:
	// stb r30,56(r28)
	PPC_STORE_U8(ctx.r28.u32 + 56, ctx.r30.u8);
loc_82D4A264:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// addi r9,r10,31660
	ctx.r9.s64 = ctx.r10.s64 + 31660;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r9,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82d4a298
	if (cr6.lt) goto loc_82D4A298;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4A298;
	sub_825952B8(ctx, base);
loc_82D4A298:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4A2B8;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a2cc
	if (cr6.eq) goto loc_82D4A2CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82D4A2CC:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4A2DC"))) PPC_WEAK_FUNC(sub_82D4A2DC);
PPC_FUNC_IMPL(__imp__sub_82D4A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4A2E0"))) PPC_WEAK_FUNC(sub_82D4A2E0);
PPC_FUNC_IMPL(__imp__sub_82D4A2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D4A2E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,57(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 57);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4a37c
	if (!cr6.eq) goto loc_82D4A37C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,31660
	ctx.r26.s64 = ctx.r11.s64 + 31660;
loc_82D4A318:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d4a2e0
	ctx.lr = 0x82D4A324;
	sub_82D4A2E0(ctx, base);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r26.u32);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4a350
	if (cr6.lt) goto loc_82D4A350;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4A350;
	sub_825952B8(ctx, base);
loc_82D4A350:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4A36C;
	sub_825952B8(ctx, base);
	// lbz r11,57(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a318
	if (cr6.eq) goto loc_82D4A318;
loc_82D4A37C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4A384"))) PPC_WEAK_FUNC(sub_82D4A384);
PPC_FUNC_IMPL(__imp__sub_82D4A384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4A388"))) PPC_WEAK_FUNC(sub_82D4A388);
PPC_FUNC_IMPL(__imp__sub_82D4A388) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d4a2e0
	ctx.lr = 0x82D4A3A8;
	sub_82D4A2E0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D4A3DC"))) PPC_WEAK_FUNC(sub_82D4A3DC);
PPC_FUNC_IMPL(__imp__sub_82D4A3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4A3E0"))) PPC_WEAK_FUNC(sub_82D4A3E0);
PPC_FUNC_IMPL(__imp__sub_82D4A3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D4A3E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d4a458
	if (cr6.lt) goto loc_82D4A458;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// addi r31,r7,12
	ctx.r31.s64 = ctx.r7.s64 + 12;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4a430
	if (cr6.lt) goto loc_82D4A430;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4A430;
	sub_825952B8(ctx, base);
loc_82D4A430:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82416268
	ctx.lr = 0x82D4A44C;
	sub_82416268(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82D4A458;
	sub_831CC150(ctx, base);
loc_82D4A458:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4a488
	if (!cr6.eq) goto loc_82D4A488;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82d4a4c8
	goto loc_82D4A4C8;
loc_82D4A488:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a4b0
	if (cr6.eq) goto loc_82D4A4B0;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a4c8
	if (!cr6.eq) goto loc_82D4A4C8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82d4a4c8
	goto loc_82D4A4C8;
loc_82D4A4B0:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a4c8
	if (!cr6.eq) goto loc_82D4A4C8;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82D4A4C8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a5ec
	if (!cr6.eq) goto loc_82D4A5EC;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82D4A4E4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a56c
	if (!cr6.eq) goto loc_82D4A56C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a52c
	if (!cr6.eq) goto loc_82D4A52C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82d4a5dc
	goto loc_82D4A5DC;
loc_82D4A52C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4a544
	if (!cr6.eq) goto loc_82D4A544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x835840a0
	ctx.lr = 0x82D4A544;
	sub_835840A0(ctx, base);
loc_82D4A544:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83b63848
	ctx.lr = 0x82D4A568;
	sub_83B63848(ctx, base);
	// b 0x82d4a5dc
	goto loc_82D4A5DC;
loc_82D4A56C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4a5a0
	if (!cr6.eq) goto loc_82D4A5A0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,44(r8)
	PPC_STORE_U8(ctx.r8.u32 + 44, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82d4a5dc
	goto loc_82D4A5DC;
loc_82D4A5A0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4a5b8
	if (!cr6.eq) goto loc_82D4A5B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83b63848
	ctx.lr = 0x82D4A5B8;
	sub_83B63848(ctx, base);
loc_82D4A5B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,44(r9)
	PPC_STORE_U8(ctx.r9.u32 + 44, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x835840a0
	ctx.lr = 0x82D4A5DC;
	sub_835840A0(ctx, base);
loc_82D4A5DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4a4e4
	if (cr6.eq) goto loc_82D4A4E4;
loc_82D4A5EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4A608"))) PPC_WEAK_FUNC(sub_82D4A608);
PPC_FUNC_IMPL(__imp__sub_82D4A608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4A610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a65c
	if (!cr6.eq) goto loc_82D4A65C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4a65c
	if (!cr6.eq) goto loc_82D4A65C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d4a388
	ctx.lr = 0x82D4A644;
	sub_82D4A388(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D4A65C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d4a68c
	if (cr6.eq) goto loc_82D4A68C;
loc_82D4A664:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82da4608
	ctx.lr = 0x82D4A670;
	sub_82DA4608(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d49ed0
	ctx.lr = 0x82D4A680;
	sub_82D49ED0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d4a664
	if (!cr6.eq) goto loc_82D4A664;
loc_82D4A68C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4A69C"))) PPC_WEAK_FUNC(sub_82D4A69C);
PPC_FUNC_IMPL(__imp__sub_82D4A69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4A6A0"))) PPC_WEAK_FUNC(sub_82D4A6A0);
PPC_FUNC_IMPL(__imp__sub_82D4A6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D4A6A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r5,12
	ctx.r30.s64 = ctx.r5.s64 + 12;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4a774
	if (!cr6.eq) goto loc_82D4A774;
	// clrlwi r25,r6,24
	ctx.r25.u64 = ctx.r6.u32 & 0xFF;
loc_82D4A6DC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82d4a720
	if (cr6.eq) goto loc_82D4A720;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4a704
	if (cr6.lt) goto loc_82D4A704;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d4a708
	goto loc_82D4A708;
loc_82D4A704:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82D4A708:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x82D4A714;
	sub_827A8810(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// b 0x82d4a750
	goto loc_82D4A750;
loc_82D4A720:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4a738
	if (cr6.lt) goto loc_82D4A738;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D4A738:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D4A74C;
	sub_827A8810(ctx, base);
	// rlwinm r5,r3,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
loc_82D4A750:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a764
	if (cr6.eq) goto loc_82D4A764;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d4a768
	goto loc_82D4A768;
loc_82D4A764:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D4A768:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a6dc
	if (cr6.eq) goto loc_82D4A6DC;
loc_82D4A774:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4a3e0
	ctx.lr = 0x82D4A788;
	sub_82D4A3E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4A7A8"))) PPC_WEAK_FUNC(sub_82D4A7A8);
PPC_FUNC_IMPL(__imp__sub_82D4A7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D4A7B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,77(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 77);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a7d8
	if (cr6.eq) goto loc_82D4A7D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82D4A7D8;
	sub_831CC188(ctx, base);
loc_82D4A7D8:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82d48938
	ctx.lr = 0x82D4A7E4;
	sub_82D48938(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82d4a800
	if (cr6.eq) goto loc_82D4A800;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82d4a824
	goto loc_82D4A824;
loc_82D4A800:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,77(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 77);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4a818
	if (cr6.eq) goto loc_82D4A818;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82d4a824
	goto loc_82D4A824;
loc_82D4A818:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a910
	if (!cr6.eq) goto loc_82D4A910;
loc_82D4A824:
	// lbz r11,77(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 77);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4a838
	if (!cr6.eq) goto loc_82D4A838;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D4A838:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a850
	if (!cr6.eq) goto loc_82D4A850;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82d4a868
	goto loc_82D4A868;
loc_82D4A850:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a864
	if (!cr6.eq) goto loc_82D4A864;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82d4a868
	goto loc_82D4A868;
loc_82D4A864:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82D4A868:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a8b8
	if (!cr6.eq) goto loc_82D4A8B8;
	// lbz r11,77(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a88c
	if (cr6.eq) goto loc_82D4A88C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82d4a8b4
	goto loc_82D4A8B4;
loc_82D4A88C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,77(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d4a8b4
	if (!cr6.eq) goto loc_82D4A8B4;
loc_82D4A8A0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,77(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d4a8a0
	if (cr6.eq) goto loc_82D4A8A0;
loc_82D4A8B4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82D4A8B8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a9a4
	if (!cr6.eq) goto loc_82D4A9A4;
	// lbz r11,77(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4a8e0
	if (cr6.eq) goto loc_82D4A8E0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82d4a9a4
	goto loc_82D4A9A4;
loc_82D4A8E0:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,77(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d4a908
	if (!cr6.eq) goto loc_82D4A908;
loc_82D4A8F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,77(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d4a8f4
	if (cr6.eq) goto loc_82D4A8F4;
loc_82D4A908:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82d4a9a4
	goto loc_82D4A9A4;
loc_82D4A910:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a930
	if (!cr6.eq) goto loc_82D4A930;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82d4a958
	goto loc_82D4A958;
loc_82D4A930:
	// lbz r11,77(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 77);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4a944
	if (!cr6.eq) goto loc_82D4A944;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82D4A944:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82D4A958:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a970
	if (!cr6.eq) goto loc_82D4A970;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82d4a98c
	goto loc_82D4A98C;
loc_82D4A970:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82d4a988
	if (!cr6.eq) goto loc_82D4A988;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82d4a98c
	goto loc_82D4A98C;
loc_82D4A988:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82D4A98C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,76(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 76);
	// lbz r10,76(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 76);
	// stb r9,76(r25)
	PPC_STORE_U8(ctx.r25.u32 + 76, ctx.r9.u8);
	// stb r10,76(r26)
	PPC_STORE_U8(ctx.r26.u32 + 76, ctx.r10.u8);
loc_82D4A9A4:
	// lbz r11,76(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4ab3c
	if (!cr6.eq) goto loc_82D4AB3C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4ab38
	if (cr6.eq) goto loc_82D4AB38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D4A9C8:
	// lbz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4ab38
	if (!cr6.eq) goto loc_82D4AB38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4aa80
	if (!cr6.eq) goto loc_82D4AA80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4aa08
	if (!cr6.eq) goto loc_82D4AA08;
	// stb r29,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df020
	ctx.lr = 0x82D4AA04;
	sub_837DF020(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D4AA08:
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4aad4
	if (!cr6.eq) goto loc_82D4AAD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d4aa34
	if (!cr6.eq) goto loc_82D4AA34;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82d4aad0
	if (cr6.eq) goto loc_82D4AAD0;
loc_82D4AA34:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d4aa5c
	if (!cr6.eq) goto loc_82D4AA5C;
	// stb r29,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df098
	ctx.lr = 0x82D4AA58;
	sub_837DF098(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82D4AA5C:
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// stb r29,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,76(r9)
	PPC_STORE_U8(ctx.r9.u32 + 76, ctx.r29.u8);
	// bl 0x837df020
	ctx.lr = 0x82D4AA7C;
	sub_837DF020(ctx, base);
	// b 0x82d4ab38
	goto loc_82D4AB38;
loc_82D4AA80:
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4aaa4
	if (!cr6.eq) goto loc_82D4AAA4;
	// stb r29,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df098
	ctx.lr = 0x82D4AAA0;
	sub_837DF098(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D4AAA4:
	// lbz r10,77(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4aad4
	if (!cr6.eq) goto loc_82D4AAD4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d4aaf0
	if (!cr6.eq) goto loc_82D4AAF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d4aaf0
	if (!cr6.eq) goto loc_82D4AAF0;
loc_82D4AAD0:
	// stb r30,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r30.u8);
loc_82D4AAD4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4a9c8
	if (!cr6.eq) goto loc_82D4A9C8;
	// b 0x82d4ab38
	goto loc_82D4AB38;
loc_82D4AAF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 76);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82d4ab18
	if (!cr6.eq) goto loc_82D4AB18;
	// stb r29,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837df020
	ctx.lr = 0x82D4AB14;
	sub_837DF020(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D4AB18:
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// stb r29,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,76(r9)
	PPC_STORE_U8(ctx.r9.u32 + 76, ctx.r29.u8);
	// bl 0x837df098
	ctx.lr = 0x82D4AB38;
	sub_837DF098(ctx, base);
loc_82D4AB38:
	// stb r29,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r29.u8);
loc_82D4AB3C:
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x82d49c18
	ctx.lr = 0x82D4AB44;
	sub_82D49C18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D4AB58;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ab6c
	if (cr6.eq) goto loc_82D4AB6C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82D4AB6C:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4AB7C"))) PPC_WEAK_FUNC(sub_82D4AB7C);
PPC_FUNC_IMPL(__imp__sub_82D4AB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4AB80"))) PPC_WEAK_FUNC(sub_82D4AB80);
PPC_FUNC_IMPL(__imp__sub_82D4AB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4AB88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,77(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 77);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4abe0
	if (!cr6.eq) goto loc_82D4ABE0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82D4ABA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d4ab80
	ctx.lr = 0x82D4ABB4;
	sub_82D4AB80(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d49c18
	ctx.lr = 0x82D4ABC0;
	sub_82D49C18(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D4ABD0;
	sub_825952B8(ctx, base);
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4aba8
	if (cr6.eq) goto loc_82D4ABA8;
loc_82D4ABE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4ABE8"))) PPC_WEAK_FUNC(sub_82D4ABE8);
PPC_FUNC_IMPL(__imp__sub_82D4ABE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D4ABF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,60(r5)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r20,15
	ctx.r20.s64 = 15;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d4ae94
	if (cr6.eq) goto loc_82D4AE94;
	// li r18,27
	ctx.r18.s64 = 27;
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r17,2
	ctx.r17.s64 = 2;
loc_82D4AC30:
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,264
	ctx.r4.s64 = 264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4AC44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4ac58
	if (cr6.eq) goto loc_82D4AC58;
	// bl 0x82d60398
	ctx.lr = 0x82D4AC50;
	sub_82D60398(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82d4ac5c
	goto loc_82D4AC5C;
loc_82D4AC58:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_82D4AC5C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,32(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// bl 0x838152a0
	ctx.lr = 0x82D4AC68;
	sub_838152A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r4,40(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// bl 0x838152a0
	ctx.lr = 0x82D4AC78;
	sub_838152A0(ctx, base);
	// stw r19,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r19.u32);
	// stw r31,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r31.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r3,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r3.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ac98
	if (cr6.lt) goto loc_82D4AC98;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D4AC98:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4AC9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4ac9c
	if (!cr6.eq) goto loc_82D4AC9C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r23,r24,20
	ctx.r23.s64 = ctx.r24.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4ACC4;
	sub_8259CC28(ctx, base);
	// lwz r10,48(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r25,44(r22)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4adb4
	if (cr6.eq) goto loc_82D4ADB4;
loc_82D4ACD4:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d498e8
	ctx.lr = 0x82D4ACE8;
	sub_82D498E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4ada4
	if (cr6.eq) goto loc_82D4ADA4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ada4
	if (cr6.eq) goto loc_82D4ADA4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4ad14
	if (cr6.lt) goto loc_82D4AD14;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82D4AD14:
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r28,r24,216
	ctx.r28.s64 = ctx.r24.s64 + 216;
	// bl 0x82416260
	ctx.lr = 0x82D4AD20;
	sub_82416260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4af90
	if (cr6.eq) goto loc_82D4AF90;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r31,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r31.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r26,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r26.u8);
	// stb r26,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r26.u8);
	// beq 0x82d4ad90
	if (cr0.eq) goto loc_82D4AD90;
	// stw r20,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_82D4AD64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4ad64
	if (!cr6.eq) goto loc_82D4AD64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4AD8C;
	sub_8259CC28(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
loc_82D4AD90:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d4a6a0
	ctx.lr = 0x82D4ADA4;
	sub_82D4A6A0(ctx, base);
loc_82D4ADA4:
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4acd4
	if (!cr6.eq) goto loc_82D4ACD4;
loc_82D4ADB4:
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82D4ADD4;
	sub_8259CB28(ctx, base);
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r29,r11,132
	ctx.r29.s64 = ctx.r11.s64 + 132;
	// bl 0x82416260
	ctx.lr = 0x82D4ADE8;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4afa8
	if (cr6.eq) goto loc_82D4AFA8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r30,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r30.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r26,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r26.u8);
	// stb r26,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r26.u8);
	// beq 0x82d4ae44
	if (cr0.eq) goto loc_82D4AE44;
	// stw r20,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r20.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D4AE3C;
	sub_8259CB28(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82D4AE44:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d4a6a0
	ctx.lr = 0x82D4AE58;
	sub_82D4A6A0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ae74
	if (cr6.lt) goto loc_82D4AE74;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82D4AE74;
	sub_825952B8(ctx, base);
loc_82D4AE74:
	// lwz r11,64(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 64);
	// addi r22,r22,60
	ctx.r22.s64 = ctx.r22.s64 + 60;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// bne cr6,0x82d4ac30
	if (!cr6.eq) goto loc_82D4AC30;
	// lwz r24,340(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_82D4AE94:
	// lwz r25,44(r14)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r14.u32 + 44);
	// lwz r11,48(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d4af84
	if (cr6.eq) goto loc_82D4AF84;
loc_82D4AEA4:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d498e8
	ctx.lr = 0x82D4AEB8;
	sub_82D498E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4af74
	if (cr6.eq) goto loc_82D4AF74;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4af74
	if (cr6.eq) goto loc_82D4AF74;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4aee4
	if (cr6.lt) goto loc_82D4AEE4;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82D4AEE4:
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r28,r24,116
	ctx.r28.s64 = ctx.r24.s64 + 116;
	// bl 0x82416260
	ctx.lr = 0x82D4AEF0;
	sub_82416260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4afc0
	if (cr6.eq) goto loc_82D4AFC0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r31,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r31.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stb r26,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r26.u8);
	// stb r26,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r26.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// beq 0x82d4af60
	if (cr0.eq) goto loc_82D4AF60;
	// stw r20,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r20.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_82D4AF34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4af34
	if (!cr6.eq) goto loc_82D4AF34;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4AF5C;
	sub_8259CC28(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
loc_82D4AF60:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d4a6a0
	ctx.lr = 0x82D4AF74;
	sub_82D4A6A0(ctx, base);
loc_82D4AF74:
	// lwz r11,48(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 48);
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4aea4
	if (!cr6.eq) goto loc_82D4AEA4;
loc_82D4AF84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82D4AF90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82D4AFA8;
	sub_8246B850(ctx, base);
loc_82D4AFA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82D4AFC0;
	sub_8246B850(ctx, base);
loc_82D4AFC0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82D4AFD8;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_82D4AFD8"))) PPC_WEAK_FUNC(sub_82D4AFD8);
PPC_FUNC_IMPL(__imp__sub_82D4AFD8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82d4ab80
	ctx.lr = 0x82D4AFF8;
	sub_82D4AB80(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82D4B02C"))) PPC_WEAK_FUNC(sub_82D4B02C);
PPC_FUNC_IMPL(__imp__sub_82D4B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B030"))) PPC_WEAK_FUNC(sub_82D4B030);
PPC_FUNC_IMPL(__imp__sub_82D4B030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4B038;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4b084
	if (!cr6.eq) goto loc_82D4B084;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4b084
	if (!cr6.eq) goto loc_82D4B084;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82d4afd8
	ctx.lr = 0x82D4B06C;
	sub_82D4AFD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D4B084:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82d4b0b4
	if (cr6.eq) goto loc_82D4B0B4;
loc_82D4B08C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82d48938
	ctx.lr = 0x82D4B098;
	sub_82D48938(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4a7a8
	ctx.lr = 0x82D4B0A8;
	sub_82D4A7A8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d4b08c
	if (!cr6.eq) goto loc_82D4B08C;
loc_82D4B0B4:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B0C4"))) PPC_WEAK_FUNC(sub_82D4B0C4);
PPC_FUNC_IMPL(__imp__sub_82D4B0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B0C8"))) PPC_WEAK_FUNC(sub_82D4B0C8);
PPC_FUNC_IMPL(__imp__sub_82D4B0C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r8,r9,-4264
	ctx.r8.s64 = ctx.r9.s64 + -4264;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82d489c8
	ctx.lr = 0x82D4B140;
	sub_82D489C8(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d48a40
	ctx.lr = 0x82D4B150;
	sub_82D48A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82D4B168"))) PPC_WEAK_FUNC(sub_82D4B168);
PPC_FUNC_IMPL(__imp__sub_82D4B168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D4B170;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4264
	ctx.r10.s64 = ctx.r11.s64 + -4264;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d4b030
	ctx.lr = 0x82D4B198;
	sub_82D4B030(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x82D4B1AC;
	sub_825952B8(ctx, base);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d4a608
	ctx.lr = 0x82D4B1C0;
	sub_82D4A608(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x82D4B1D0;
	sub_825952B8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b200
	if (cr6.eq) goto loc_82D4B200;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83813400
	ctx.lr = 0x82D4B1F0;
	sub_83813400(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D4B200;
	sub_825952B8(ctx, base);
loc_82D4B200:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82d49d20
	ctx.lr = 0x82D4B218;
	sub_82D49D20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B220"))) PPC_WEAK_FUNC(sub_82D4B220);
PPC_FUNC_IMPL(__imp__sub_82D4B220) {
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
	// bl 0x82d4b168
	ctx.lr = 0x82D4B240;
	sub_82D4B168(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4b260
	if (cr6.eq) goto loc_82D4B260;
	// bl 0x82595188
	ctx.lr = 0x82D4B250;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82D4B260;
	sub_825952B8(ctx, base);
loc_82D4B260:
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

__attribute__((alias("__imp__sub_82D4B27C"))) PPC_WEAK_FUNC(sub_82D4B27C);
PPC_FUNC_IMPL(__imp__sub_82D4B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B280"))) PPC_WEAK_FUNC(sub_82D4B280);
PPC_FUNC_IMPL(__imp__sub_82D4B280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D4B288;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,27
	ctx.r27.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,284
	ctx.r4.s64 = 284;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82D4B2B0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b338
	if (cr6.eq) goto loc_82D4B338;
	// bl 0x82d60c10
	ctx.lr = 0x82D4B2BC;
	sub_82D60C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b338
	if (cr6.eq) goto loc_82D4B338;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4b0c8
	ctx.lr = 0x82D4B2D0;
	sub_82D4B0C8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d49848
	ctx.lr = 0x82D4B2E0;
	sub_82D49848(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d4abe8
	ctx.lr = 0x82D4B2F8;
	sub_82D4ABE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d4b344
	if (!cr6.lt) goto loc_82D4B344;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D4B310;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4B328;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D4B330;
	sub_82595170(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4b168
	ctx.lr = 0x82D4B338;
	sub_82D4B168(ctx, base);
loc_82D4B338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D4B344:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x82D4B350;
	sub_8337F1E0(ctx, base);
	// li r4,30688
	ctx.r4.s64 = 30688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83545640
	ctx.lr = 0x82D4B35C;
	sub_83545640(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4b168
	ctx.lr = 0x82D4B364;
	sub_82D4B168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B370"))) PPC_WEAK_FUNC(sub_82D4B370);
PPC_FUNC_IMPL(__imp__sub_82D4B370) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d4b280
	ctx.lr = 0x82D4B388;
	sub_82D4B280(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b3a8
	if (!cr6.eq) goto loc_82D4B3A8;
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
loc_82D4B3A8:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-4988
	ctx.r11.s64 = ctx.r11.s64 + -4988;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82d49590
	ctx.lr = 0x82D4B3BC;
	sub_82D49590(ctx, base);
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

__attribute__((alias("__imp__sub_82D4B3D4"))) PPC_WEAK_FUNC(sub_82D4B3D4);
PPC_FUNC_IMPL(__imp__sub_82D4B3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B3D8"))) PPC_WEAK_FUNC(sub_82D4B3D8);
PPC_FUNC_IMPL(__imp__sub_82D4B3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D4B3E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4B404;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b41c
	if (cr6.eq) goto loc_82D4B41C;
	// bl 0x82d5ea40
	ctx.lr = 0x82D4B410;
	sub_82D5EA40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b428
	if (!cr6.eq) goto loc_82D4B428;
loc_82D4B41C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82D4B428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x838152a0
	ctx.lr = 0x82D4B434;
	sub_838152A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x838152a0
	ctx.lr = 0x82D4B444;
	sub_838152A0(ctx, base);
	// stw r31,48(r26)
	PPC_STORE_U32(ctx.r26.u32 + 48, ctx.r31.u32);
	// stw r29,52(r26)
	PPC_STORE_U32(ctx.r26.u32 + 52, ctx.r29.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r3,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r3.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4b464
	if (cr6.lt) goto loc_82D4B464;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D4B464:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4B468:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4b468
	if (!cr6.eq) goto loc_82D4B468;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4B48C;
	sub_8259CC28(ctx, base);
	// addi r28,r26,100
	ctx.r28.s64 = ctx.r26.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d4abe8
	ctx.lr = 0x82D4B4A8;
	sub_82D4ABE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d52390
	ctx.lr = 0x82D4B4B0;
	sub_82D52390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d51eb0
	ctx.lr = 0x82D4B4BC;
	sub_82D51EB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2d660
	ctx.lr = 0x82D4B4C8;
	sub_82D2D660(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b598
	if (cr6.eq) goto loc_82D4B598;
	// lbz r11,113(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4b4e4
	if (cr6.eq) goto loc_82D4B4E4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82D4B4E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dad028
	ctx.lr = 0x82D4B4EC;
	sub_82DAD028(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b55c
	if (cr6.eq) goto loc_82D4B55C;
loc_82D4B4FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82D4B508;
	sub_82D2D580(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b550
	if (cr6.eq) goto loc_82D4B550;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d31a8
	ctx.lr = 0x82D4B51C;
	sub_835D31A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b550
	if (cr6.eq) goto loc_82D4B550;
loc_82D4B52C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2d4a8
	ctx.lr = 0x82D4B538;
	sub_82D2D4A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b544
	if (cr6.eq) goto loc_82D4B544;
	// stw r24,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r24.u32);
loc_82D4B544:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82d4b52c
	if (cr6.lt) goto loc_82D4B52C;
loc_82D4B550:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x82d4b4fc
	if (cr6.lt) goto loc_82D4B4FC;
loc_82D4B55C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d31a8
	ctx.lr = 0x82D4B564;
	sub_835D31A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b598
	if (cr6.eq) goto loc_82D4B598;
loc_82D4B574:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2d4a8
	ctx.lr = 0x82D4B580;
	sub_82D2D4A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b58c
	if (cr6.eq) goto loc_82D4B58C;
	// stw r24,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r24.u32);
loc_82D4B58C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82d4b574
	if (cr6.lt) goto loc_82D4B574;
loc_82D4B598:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B5A4"))) PPC_WEAK_FUNC(sub_82D4B5A4);
PPC_FUNC_IMPL(__imp__sub_82D4B5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B5A8"))) PPC_WEAK_FUNC(sub_82D4B5A8);
PPC_FUNC_IMPL(__imp__sub_82D4B5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4B5B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4B5D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b5ec
	if (cr6.eq) goto loc_82D4B5EC;
	// bl 0x82d2ef50
	ctx.lr = 0x82D4B5E0;
	sub_82D2EF50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b5f8
	if (!cr6.eq) goto loc_82D4B5F8;
loc_82D4B5EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D4B5F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x838152a0
	ctx.lr = 0x82D4B604;
	sub_838152A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x838152a0
	ctx.lr = 0x82D4B614;
	sub_838152A0(ctx, base);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4b634
	if (cr6.lt) goto loc_82D4B634;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D4B634:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4B638:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4b638
	if (!cr6.eq) goto loc_82D4B638;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4B65C;
	sub_8259CC28(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d4abe8
	ctx.lr = 0x82D4B674;
	sub_82D4ABE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d52390
	ctx.lr = 0x82D4B67C;
	sub_82D52390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d51eb0
	ctx.lr = 0x82D4B688;
	sub_82D51EB0(ctx, base);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r30,76(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4b6cc
	if (cr6.eq) goto loc_82D4B6CC;
loc_82D4B698:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4b3d8
	ctx.lr = 0x82D4B6A4;
	sub_82D4B3D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b6bc
	if (cr6.eq) goto loc_82D4B6BC;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x82ab5f20
	ctx.lr = 0x82D4B6BC;
	sub_82AB5F20(ctx, base);
loc_82D4B6BC:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4b698
	if (!cr6.eq) goto loc_82D4B698;
loc_82D4B6CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B6D8"))) PPC_WEAK_FUNC(sub_82D4B6D8);
PPC_FUNC_IMPL(__imp__sub_82D4B6D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4B6E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4B704;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b71c
	if (cr6.eq) goto loc_82D4B71C;
	// bl 0x82d33cc0
	ctx.lr = 0x82D4B710;
	sub_82D33CC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b728
	if (!cr6.eq) goto loc_82D4B728;
loc_82D4B71C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D4B728:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x838152a0
	ctx.lr = 0x82D4B734;
	sub_838152A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x838152a0
	ctx.lr = 0x82D4B744;
	sub_838152A0(ctx, base);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4b764
	if (cr6.lt) goto loc_82D4B764;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D4B764:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4B768:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4b768
	if (!cr6.eq) goto loc_82D4B768;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4B78C;
	sub_8259CC28(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d4abe8
	ctx.lr = 0x82D4B7A4;
	sub_82D4ABE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d52390
	ctx.lr = 0x82D4B7AC;
	sub_82D52390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d51eb0
	ctx.lr = 0x82D4B7B8;
	sub_82D51EB0(ctx, base);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r30,76(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d4b7fc
	if (cr6.eq) goto loc_82D4B7FC;
loc_82D4B7C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d4b5a8
	ctx.lr = 0x82D4B7D4;
	sub_82D4B5A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b7ec
	if (cr6.eq) goto loc_82D4B7EC;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,340
	ctx.r3.s64 = ctx.r31.s64 + 340;
	// bl 0x82ab5f20
	ctx.lr = 0x82D4B7EC;
	sub_82AB5F20(ctx, base);
loc_82D4B7EC:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4b7c8
	if (!cr6.eq) goto loc_82D4B7C8;
loc_82D4B7FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B808"))) PPC_WEAK_FUNC(sub_82D4B808);
PPC_FUNC_IMPL(__imp__sub_82D4B808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D4B810;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D4B830;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b848
	if (cr6.eq) goto loc_82D4B848;
	// bl 0x82d2eb28
	ctx.lr = 0x82D4B83C;
	sub_82D2EB28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b854
	if (!cr6.eq) goto loc_82D4B854;
loc_82D4B848:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D4B854:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4b0c8
	ctx.lr = 0x82D4B85C;
	sub_82D4B0C8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d49848
	ctx.lr = 0x82D4B86C;
	sub_82D49848(ctx, base);
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d4abe8
	ctx.lr = 0x82D4B884;
	sub_82D4ABE8(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d4b8c8
	if (cr6.eq) goto loc_82D4B8C8;
loc_82D4B894:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d4b6d8
	ctx.lr = 0x82D4B8A0;
	sub_82D4B6D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b8b8
	if (cr6.eq) goto loc_82D4B8B8;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,340
	ctx.r3.s64 = ctx.r30.s64 + 340;
	// bl 0x82ab5f20
	ctx.lr = 0x82D4B8B8;
	sub_82AB5F20(ctx, base);
loc_82D4B8B8:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r31,r31,92
	ctx.r31.s64 = ctx.r31.s64 + 92;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4b894
	if (!cr6.eq) goto loc_82D4B894;
loc_82D4B8C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4b168
	ctx.lr = 0x82D4B8D0;
	sub_82D4B168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B8DC"))) PPC_WEAK_FUNC(sub_82D4B8DC);
PPC_FUNC_IMPL(__imp__sub_82D4B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B8E0"))) PPC_WEAK_FUNC(sub_82D4B8E0);
PPC_FUNC_IMPL(__imp__sub_82D4B8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4B8E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d4b808
	ctx.lr = 0x82D4B8F0;
	sub_82D4B808(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b904
	if (!cr6.eq) goto loc_82D4B904;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D4B904:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82D4B90C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b96c
	if (cr6.eq) goto loc_82D4B96C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2ec40
	ctx.lr = 0x82D4B91C;
	sub_82D2EC40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82D4B924;
	sub_82D33C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b96c
	if (cr6.eq) goto loc_82D4B96C;
loc_82D4B934:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82D4B940;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4b954
	if (cr6.eq) goto loc_82D4B954;
	// bl 0x82d33c10
	ctx.lr = 0x82D4B94C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4b964
	if (!cr6.eq) goto loc_82D4B964;
loc_82D4B954:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82d4b934
	if (cr6.lt) goto loc_82D4B934;
	// b 0x82d4b96c
	goto loc_82D4B96C;
loc_82D4B964:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d48930
	ctx.lr = 0x82D4B96C;
	sub_82D48930(ctx, base);
loc_82D4B96C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x82D4B978;
	sub_8337F1E0(ctx, base);
	// li r4,30688
	ctx.r4.s64 = 30688;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83545640
	ctx.lr = 0x82D4B984;
	sub_83545640(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-4988
	ctx.r3.s64 = ctx.r11.s64 + -4988;
	// bl 0x82d49590
	ctx.lr = 0x82D4B994;
	sub_82D49590(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4B9A0"))) PPC_WEAK_FUNC(sub_82D4B9A0);
PPC_FUNC_IMPL(__imp__sub_82D4B9A0) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D4B9B8;
	sub_82D52328(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-3392
	ctx.r9.s64 = ctx.r11.s64 + -3392;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82D4B9E4"))) PPC_WEAK_FUNC(sub_82D4B9E4);
PPC_FUNC_IMPL(__imp__sub_82D4B9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4B9E8"))) PPC_WEAK_FUNC(sub_82D4B9E8);
PPC_FUNC_IMPL(__imp__sub_82D4B9E8) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-29284
	ctx.r7.s64 = ctx.r9.s64 + -29284;
	// lwz r4,-29288(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29288);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82d521a8
	ctx.lr = 0x82D4BA14;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d4ba20
	if (!cr6.lt) goto loc_82D4BA20;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D4BA20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BA30"))) PPC_WEAK_FUNC(sub_82D4BA30);
PPC_FUNC_IMPL(__imp__sub_82D4BA30) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-29284
	ctx.r8.s64 = ctx.r10.s64 + -29284;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D4BA70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d4ba80
	if (!cr6.lt) goto loc_82D4BA80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d4ba84
	goto loc_82D4BA84;
loc_82D4BA80:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82D4BA84:
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

__attribute__((alias("__imp__sub_82D4BA9C"))) PPC_WEAK_FUNC(sub_82D4BA9C);
PPC_FUNC_IMPL(__imp__sub_82D4BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4BAA0"))) PPC_WEAK_FUNC(sub_82D4BAA0);
PPC_FUNC_IMPL(__imp__sub_82D4BAA0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3392
	ctx.r10.s64 = ctx.r11.s64 + -3392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D4BACC;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4bae4
	if (cr6.eq) goto loc_82D4BAE4;
	// bl 0x82416268
	ctx.lr = 0x82D4BAE0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4BAE4:
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

__attribute__((alias("__imp__sub_82D4BAFC"))) PPC_WEAK_FUNC(sub_82D4BAFC);
PPC_FUNC_IMPL(__imp__sub_82D4BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4BB00"))) PPC_WEAK_FUNC(sub_82D4BB00);
PPC_FUNC_IMPL(__imp__sub_82D4BB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r3,-4936(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4936);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BB0C"))) PPC_WEAK_FUNC(sub_82D4BB0C);
PPC_FUNC_IMPL(__imp__sub_82D4BB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4BB10"))) PPC_WEAK_FUNC(sub_82D4BB10);
PPC_FUNC_IMPL(__imp__sub_82D4BB10) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-4936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4936);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4bb40
	if (cr6.eq) goto loc_82D4BB40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4BB40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4BB40:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4936, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D4BB5C"))) PPC_WEAK_FUNC(sub_82D4BB5C);
PPC_FUNC_IMPL(__imp__sub_82D4BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4BB60"))) PPC_WEAK_FUNC(sub_82D4BB60);
PPC_FUNC_IMPL(__imp__sub_82D4BB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BB74"))) PPC_WEAK_FUNC(sub_82D4BB74);
PPC_FUNC_IMPL(__imp__sub_82D4BB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4BB78"))) PPC_WEAK_FUNC(sub_82D4BB78);
PPC_FUNC_IMPL(__imp__sub_82D4BB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// addi r6,r11,53
	ctx.r6.s64 = ctx.r11.s64 + 53;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BBA0"))) PPC_WEAK_FUNC(sub_82D4BBA0);
PPC_FUNC_IMPL(__imp__sub_82D4BBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// addi r6,r11,69
	ctx.r6.s64 = ctx.r11.s64 + 69;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BBC8"))) PPC_WEAK_FUNC(sub_82D4BBC8);
PPC_FUNC_IMPL(__imp__sub_82D4BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 & ctx.r4.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,548(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 548);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d4bc18
	if (!cr6.eq) goto loc_82D4BC18;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// addi r5,r11,53
	ctx.r5.s64 = ctx.r11.s64 + 53;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82D4BC18:
	// addi r11,r11,85
	ctx.r11.s64 = ctx.r11.s64 + 85;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BC28"))) PPC_WEAK_FUNC(sub_82D4BC28);
PPC_FUNC_IMPL(__imp__sub_82D4BC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x82d4bc38
	if (cr6.lt) goto loc_82D4BC38;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D4BC38:
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 548);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BC44"))) PPC_WEAK_FUNC(sub_82D4BC44);
PPC_FUNC_IMPL(__imp__sub_82D4BC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4BC48"))) PPC_WEAK_FUNC(sub_82D4BC48);
PPC_FUNC_IMPL(__imp__sub_82D4BC48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,516(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4BC50"))) PPC_WEAK_FUNC(sub_82D4BC50);
PPC_FUNC_IMPL(__imp__sub_82D4BC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r3,r3,19
	ctx.r3.s64 = ctx.r3.s64 + 19;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r6,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r6.u8);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stb r7,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r7.u8);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// bl 0x831ce7d8
	ctx.lr = 0x82D4BCA0;
	sub_831CE7D8(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// sth r30,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r30.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82D4BCD8"))) PPC_WEAK_FUNC(sub_82D4BCD8);
PPC_FUNC_IMPL(__imp__sub_82D4BCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D4BCE0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,520
	ctx.r29.s64 = ctx.r3.s64 + 520;
	// lwz r5,536(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-3229
	ctx.r6.s64 = ctx.r11.s64 + -3229;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D4BD14;
	sub_827A8810(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f30,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82d4bdfc
	if (cr6.eq) goto loc_82D4BDFC;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4bdfc
	if (!cr6.eq) goto loc_82D4BDFC;
	// bl 0x831156e8
	ctx.lr = 0x82D4BD40;
	sub_831156E8(ctx, base);
	// lwz r28,56(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312b860
	ctx.lr = 0x82D4BD4C;
	sub_8312B860(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8312b840
	ctx.lr = 0x82D4BD5C;
	sub_8312B840(ctx, base);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addis r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -65536;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// sth r27,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r27.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r7.u8);
	// bl 0x82d41bf0
	ctx.lr = 0x82D4BD8C;
	sub_82D41BF0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82d4bdac
	if (!cr6.eq) goto loc_82D4BDAC;
loc_82D4BD98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D4BDAC:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82d41db0
	ctx.lr = 0x82D4BDB4;
	sub_82D41DB0(ctx, base);
	// stw r3,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r3.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4bdcc
	if (cr6.lt) goto loc_82D4BDCC;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82D4BDCC:
	// bl 0x83816968
	ctx.lr = 0x82D4BDD0;
	sub_83816968(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,256
	ctx.r6.s64 = 256;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,256
	ctx.r7.s64 = 256;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4BDFC;
	sub_83816550(ctx, base);
loc_82D4BDFC:
	// add r25,r30,r31
	ctx.r25.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r11,548(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4bf0c
	if (cr6.eq) goto loc_82D4BF0C;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82d41b88
	ctx.lr = 0x82D4BE28;
	sub_82D41B88(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4bd98
	if (cr6.eq) goto loc_82D4BD98;
	// lhzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82d41b88
	ctx.lr = 0x82D4BE4C;
	sub_82D41B88(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4bd98
	if (cr6.eq) goto loc_82D4BD98;
	// addi r11,r30,53
	ctx.r11.s64 = ctx.r30.s64 + 53;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82d41d48
	ctx.lr = 0x82D4BE6C;
	sub_82D41D48(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r10,r30,69
	ctx.r10.s64 = ctx.r30.s64 + 69;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82d41d48
	ctx.lr = 0x82D4BE84;
	sub_82D41D48(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// add r24,r11,r31
	ctx.r24.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r24,100
	ctx.r11.s64 = ctx.r24.s64 + 100;
	// lwz r9,120(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d4bea4
	if (cr6.lt) goto loc_82D4BEA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D4BEA4:
	// addi r10,r30,42
	ctx.r10.s64 = ctx.r30.s64 + 42;
	// lbz r7,98(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 98);
	// addi r9,r30,22
	ctx.r9.s64 = ctx.r30.s64 + 22;
	// lbz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// addi r8,r30,18
	ctx.r8.s64 = ctx.r30.s64 + 18;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lhzx r10,r5,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r5,r4,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// bl 0x82d4bc50
	ctx.lr = 0x82D4BEE0;
	sub_82D4BC50(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d41ac0
	ctx.lr = 0x82D4BEE8;
	sub_82D41AC0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4bd98
	if (cr6.eq) goto loc_82D4BD98;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d41c98
	ctx.lr = 0x82D4BEFC;
	sub_82D41C98(ctx, base);
	// addi r11,r30,85
	ctx.r11.s64 = ctx.r30.s64 + 85;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// b 0x82d4bff8
	goto loc_82D4BFF8;
loc_82D4BF0C:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r24,r11,r31
	ctx.r24.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r26,r24,100
	ctx.r26.s64 = ctx.r24.s64 + 100;
	// lwz r11,120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4bf2c
	if (cr6.lt) goto loc_82D4BF2C;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82d4bf30
	goto loc_82D4BF30;
loc_82D4BF2C:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_82D4BF30:
	// addi r11,r30,42
	ctx.r11.s64 = ctx.r30.s64 + 42;
	// lbz r7,98(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 98);
	// addi r10,r30,22
	ctx.r10.s64 = ctx.r30.s64 + 22;
	// lbz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// addi r9,r30,18
	ctx.r9.s64 = ctx.r30.s64 + 18;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lhzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x82d4bc50
	ctx.lr = 0x82D4BF68;
	sub_82D4BC50(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d41ac0
	ctx.lr = 0x82D4BF70;
	sub_82D41AC0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d4bd98
	if (cr6.eq) goto loc_82D4BD98;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4bf90
	if (cr6.lt) goto loc_82D4BF90;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82d4bf94
	goto loc_82D4BF94;
loc_82D4BF90:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_82D4BF94:
	// li r9,2
	ctx.r9.s64 = 2;
	// lhzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lbz r7,98(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 98);
	// lbz r6,96(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 96);
	// lwzx r5,r28,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x82d4bc50
	ctx.lr = 0x82D4BFB4;
	sub_82D4BC50(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d41ac0
	ctx.lr = 0x82D4BFBC;
	sub_82D41AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4bd98
	if (cr6.eq) goto loc_82D4BD98;
	// addi r11,r30,53
	ctx.r11.s64 = ctx.r30.s64 + 53;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82d41c98
	ctx.lr = 0x82D4BFDC;
	sub_82D41C98(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r10,r30,69
	ctx.r10.s64 = ctx.r30.s64 + 69;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82d41c98
	ctx.lr = 0x82D4BFF4;
	sub_82D41C98(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
loc_82D4BFF8:
	// lwz r11,240(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 240);
	// addi r28,r24,220
	ctx.r28.s64 = ctx.r24.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c00c
	if (cr6.lt) goto loc_82D4C00C;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82D4C00C:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83816968
	ctx.lr = 0x82D4C014;
	sub_83816968(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r6,100
	ctx.r6.s64 = 100;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,100
	ctx.r7.s64 = 100;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4C040;
	sub_83816550(ctx, base);
	// lwz r10,304(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 304);
	// addi r11,r24,284
	ctx.r11.s64 = ctx.r24.s64 + 284;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4c058
	if (cr6.lt) goto loc_82D4C058;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82d4c05c
	goto loc_82D4C05C;
loc_82D4C058:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82D4C05C:
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x83816968
	ctx.lr = 0x82D4C064;
	sub_83816968(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,256
	ctx.r6.s64 = 256;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,256
	ctx.r7.s64 = 256;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4C090;
	sub_83816550(ctx, base);
	// lbz r11,548(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 548);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4c0ec
	if (cr6.eq) goto loc_82D4C0EC;
	// lwz r11,368(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 368);
	// addi r29,r24,348
	ctx.r29.s64 = ctx.r24.s64 + 348;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c0b0
	if (cr6.lt) goto loc_82D4C0B0;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82D4C0B0:
	// addi r11,r30,85
	ctx.r11.s64 = ctx.r30.s64 + 85;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x83816968
	ctx.lr = 0x82D4C0C0;
	sub_83816968(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r6,128
	ctx.r6.s64 = 128;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// li r7,128
	ctx.r7.s64 = 128;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4C0EC;
	sub_83816550(ctx, base);
loc_82D4C0EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4C100"))) PPC_WEAK_FUNC(sub_82D4C100);
PPC_FUNC_IMPL(__imp__sub_82D4C100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D4C108;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-2236
	ctx.r10.s64 = ctx.r11.s64 + -2236;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r30,r3,520
	ctx.r30.s64 = ctx.r3.s64 + 520;
	// lwz r9,540(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r31,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r31.u32);
	// blt cr6,0x82d4c13c
	if (cr6.lt) goto loc_82D4C13C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d4c140
	goto loc_82D4C140;
loc_82D4C13C:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82D4C140:
	// li r26,2
	ctx.r26.s64 = 2;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r11,r25,120
	ctx.r11.s64 = ctx.r25.s64 + 120;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
loc_82D4C154:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4c16c
	if (cr6.lt) goto loc_82D4C16C;
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// b 0x82d4c170
	goto loc_82D4C170;
loc_82D4C16C:
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
loc_82D4C170:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// blt cr6,0x82d4c18c
	if (cr6.lt) goto loc_82D4C18C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82d4c190
	goto loc_82D4C190;
loc_82D4C18C:
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
loc_82D4C190:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r31.u32);
	// blt cr6,0x82d4c1ac
	if (cr6.lt) goto loc_82D4C1AC;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x82d4c1b0
	goto loc_82D4C1B0;
loc_82D4C1AC:
	// addi r10,r11,100
	ctx.r10.s64 = ctx.r11.s64 + 100;
loc_82D4C1B0:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r31,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r31.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4c1cc
	if (cr6.lt) goto loc_82D4C1CC;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x82d4c1d0
	goto loc_82D4C1D0;
loc_82D4C1CC:
	// addi r10,r11,164
	ctx.r10.s64 = ctx.r11.s64 + 164;
loc_82D4C1D0:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r31,300(r11)
	PPC_STORE_U32(ctx.r11.u32 + 300, ctx.r31.u32);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4c1ec
	if (cr6.lt) goto loc_82D4C1EC;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// b 0x82d4c1f0
	goto loc_82D4C1F0;
loc_82D4C1EC:
	// addi r10,r11,284
	ctx.r10.s64 = ctx.r11.s64 + 284;
loc_82D4C1F0:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bdnz 0x82d4c154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D4C154;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,-4936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4936, ctx.r31.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d4c224
	if (cr6.lt) goto loc_82D4C224;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D4C224;
	sub_825952B8(ctx, base);
loc_82D4C224:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r27,r25,56
	ctx.r27.s64 = ctx.r25.s64 + 56;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r30,r27,404
	ctx.r30.s64 = ctx.r27.s64 + 404;
loc_82D4C240:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c260
	if (cr6.lt) goto loc_82D4C260;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4C260;
	sub_825952B8(ctx, base);
loc_82D4C260:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82d4c240
	if (!cr0.lt) goto loc_82D4C240;
	// addi r30,r27,348
	ctx.r30.s64 = ctx.r27.s64 + 348;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D4C27C:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c29c
	if (cr6.lt) goto loc_82D4C29C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4C29C;
	sub_825952B8(ctx, base);
loc_82D4C29C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82d4c27c
	if (!cr0.lt) goto loc_82D4C27C;
	// addi r30,r27,284
	ctx.r30.s64 = ctx.r27.s64 + 284;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D4C2B8:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c2d8
	if (cr6.lt) goto loc_82D4C2D8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4C2D8;
	sub_825952B8(ctx, base);
loc_82D4C2D8:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82d4c2b8
	if (!cr0.lt) goto loc_82D4C2B8;
	// addi r30,r27,220
	ctx.r30.s64 = ctx.r27.s64 + 220;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D4C2F4:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c314
	if (cr6.lt) goto loc_82D4C314;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4C314;
	sub_825952B8(ctx, base);
loc_82D4C314:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82d4c2f4
	if (!cr0.lt) goto loc_82D4C2F4;
	// addi r30,r27,156
	ctx.r30.s64 = ctx.r27.s64 + 156;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D4C330:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c350
	if (cr6.lt) goto loc_82D4C350;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4C350;
	sub_825952B8(ctx, base);
loc_82D4C350:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82d4c330
	if (!cr0.lt) goto loc_82D4C330;
	// addi r30,r27,100
	ctx.r30.s64 = ctx.r27.s64 + 100;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D4C36C:
	// addi r30,r30,-28
	ctx.r30.s64 = ctx.r30.s64 + -28;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4c38c
	if (cr6.lt) goto loc_82D4C38C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D4C38C;
	sub_825952B8(ctx, base);
loc_82D4C38C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82d4c36c
	if (!cr0.lt) goto loc_82D4C36C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831032a0
	ctx.lr = 0x82D4C3A8;
	sub_831032A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4C3B0"))) PPC_WEAK_FUNC(sub_82D4C3B0);
PPC_FUNC_IMPL(__imp__sub_82D4C3B0) {
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
	// bl 0x82d4c100
	ctx.lr = 0x82D4C3D0;
	sub_82D4C100(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4c3e8
	if (cr6.eq) goto loc_82D4C3E8;
	// bl 0x82416268
	ctx.lr = 0x82D4C3E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4C3E8:
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

__attribute__((alias("__imp__sub_82D4C400"))) PPC_WEAK_FUNC(sub_82D4C400);
PPC_FUNC_IMPL(__imp__sub_82D4C400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// subfc r7,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// bl 0x8259cb28
	ctx.lr = 0x82D4C458;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C470"))) PPC_WEAK_FUNC(sub_82D4C470);
PPC_FUNC_IMPL(__imp__sub_82D4C470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// rlwinm r8,r5,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// subfc r7,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r11,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,284
	ctx.r4.s64 = ctx.r11.s64 + 284;
	// bl 0x8259cb28
	ctx.lr = 0x82D4C4C8;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C4E0"))) PPC_WEAK_FUNC(sub_82D4C4E0);
PPC_FUNC_IMPL(__imp__sub_82D4C4E0) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r4,r7,-29116
	ctx.r4.s64 = ctx.r7.s64 + -29116;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82D4C534:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4c534
	if (!cr6.eq) goto loc_82D4C534;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4C558;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C570"))) PPC_WEAK_FUNC(sub_82D4C570);
PPC_FUNC_IMPL(__imp__sub_82D4C570) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r4,r7,-29108
	ctx.r4.s64 = ctx.r7.s64 + -29108;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82D4C5C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4c5c4
	if (!cr6.eq) goto loc_82D4C5C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4C5E8;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C600"))) PPC_WEAK_FUNC(sub_82D4C600);
PPC_FUNC_IMPL(__imp__sub_82D4C600) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r4,r7,-29100
	ctx.r4.s64 = ctx.r7.s64 + -29100;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82D4C654:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4c654
	if (!cr6.eq) goto loc_82D4C654;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4C678;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C690"))) PPC_WEAK_FUNC(sub_82D4C690);
PPC_FUNC_IMPL(__imp__sub_82D4C690) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// subfe r4,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r9,-29092
	ctx.r6.s64 = ctx.r9.s64 + -29092;
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r3,2,22,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// li r11,15
	ctx.r11.s64 = 15;
	// lwzx r4,r9,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82D4C6E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4c6e0
	if (!cr6.eq) goto loc_82D4C6E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4C704;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C71C"))) PPC_WEAK_FUNC(sub_82D4C71C);
PPC_FUNC_IMPL(__imp__sub_82D4C71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4C720"))) PPC_WEAK_FUNC(sub_82D4C720);
PPC_FUNC_IMPL(__imp__sub_82D4C720) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r4,r4,520
	ctx.r4.s64 = ctx.r4.s64 + 520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D4C758;
	sub_8259CB28(ctx, base);
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

__attribute__((alias("__imp__sub_82D4C770"))) PPC_WEAK_FUNC(sub_82D4C770);
PPC_FUNC_IMPL(__imp__sub_82D4C770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82D4C778;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-2388
	ctx.r4.s64 = ctx.r11.s64 + -2388;
	// bl 0x83103328
	ctx.lr = 0x82D4C78C;
	sub_83103328(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r9,-2236
	ctx.r8.s64 = ctx.r9.s64 + -2236;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// addi r10,r31,156
	ctx.r10.s64 = ctx.r31.s64 + 156;
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// addi r10,r31,220
	ctx.r10.s64 = ctx.r31.s64 + 220;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// addi r9,r31,284
	ctx.r9.s64 = ctx.r31.s64 + 284;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r8,r31,348
	ctx.r8.s64 = ctx.r31.s64 + 348;
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// addi r10,r31,520
	ctx.r10.s64 = ctx.r31.s64 + 520;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stb r30,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r30.u8);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stb r30,284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 284, ctx.r30.u8);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stb r30,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r30.u8);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// addi r11,r31,404
	ctx.r11.s64 = ctx.r31.s64 + 404;
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stb r30,520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 520, ctx.r30.u8);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// lwz r6,540(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82d4c888
	if (cr6.lt) goto loc_82D4C888;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D4C888:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r25,r31,96
	ctx.r25.s64 = ctx.r31.s64 + 96;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// addi r24,r31,98
	ctx.r24.s64 = ctx.r31.s64 + 98;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r28,r31,460
	ctx.r28.s64 = ctx.r31.s64 + 460;
	// addi r27,r31,548
	ctx.r27.s64 = ctx.r31.s64 + 548;
	// ori r26,r11,14904
	ctx.r26.u64 = ctx.r11.u64 | 14904;
loc_82D4C8AC:
	// bl 0x831156e8
	ctx.lr = 0x82D4C8B0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x83123a08
	ctx.lr = 0x82D4C8C0;
	sub_83123A08(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r10,18
	ctx.r9.s64 = ctx.r10.s64 + 18;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lhz r7,784(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r6,40
	ctx.r5.s64 = ctx.r6.s64 + 40;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r3,r31
	PPC_STORE_U16(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u16);
	// lwz r10,808(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 808);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,42
	ctx.r8.s64 = ctx.r9.s64 + 42;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u16);
	// lwz r5,796(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r3,22
	ctx.r10.s64 = ctx.r3.s64 + 22;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,19,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0x7;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
loc_82D4C920:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4c920
	if (!cr6.eq) goto loc_82D4C920;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// bl 0x8259cc28
	ctx.lr = 0x82D4C950;
	sub_8259CC28(ctx, base);
	// lwz r8,796(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r6,r8,23,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x1;
	// stbx r6,r25,r7
	PPC_STORE_U8(ctx.r25.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r5,796(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// rlwinm r4,r5,0,16,18
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r4,8192
	cr6.compare<uint32_t>(ctx.r4.u32, 8192, xer);
	// bne cr6,0x82d4c978
	if (!cr6.eq) goto loc_82D4C978;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82d4c984
	goto loc_82D4C984;
loc_82D4C978:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
loc_82D4C984:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,74
	ctx.r4.s64 = ctx.r29.s64 + 74;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stbx r10,r24,r9
	PPC_STORE_U8(ctx.r24.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82D4C994:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4c994
	if (!cr6.eq) goto loc_82D4C994;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82D4C9C4;
	sub_8259CC28(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r8,53
	ctx.r7.s64 = ctx.r8.s64 + 53;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r5,69
	ctx.r4.s64 = ctx.r5.s64 + 69;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r30,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r30.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r30,r27,r10
	PPC_STORE_U8(ctx.r27.u32 + ctx.r10.u32, ctx.r30.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,220
	ctx.r11.s64 = ctx.r11.s64 + 220;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82d4ca18
	if (cr6.lt) goto loc_82D4CA18;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D4CA18:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82d4ca40
	if (cr6.lt) goto loc_82D4CA40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D4CA40:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 + 404;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82d4ca68
	if (cr6.lt) goto loc_82D4CA68;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D4CA68:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82d4c8ac
	if (cr6.lt) goto loc_82D4C8AC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82D4CA94:
	// addi r10,r11,118
	ctx.r10.s64 = ctx.r11.s64 + 118;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// blt cr6,0x82d4ca94
	if (cr6.lt) goto loc_82D4CA94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4CAC0"))) PPC_WEAK_FUNC(sub_82D4CAC0);
PPC_FUNC_IMPL(__imp__sub_82D4CAC0) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,-4936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4936);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4cb10
	if (!cr6.eq) goto loc_82D4CB10;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,564
	ctx.r4.s64 = 564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4CAF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4cb08
	if (cr6.eq) goto loc_82D4CB08;
	// bl 0x82d4c770
	ctx.lr = 0x82D4CB04;
	sub_82D4C770(ctx, base);
	// b 0x82d4cb0c
	goto loc_82D4CB0C;
loc_82D4CB08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D4CB0C:
	// stw r3,-4936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4936, ctx.r3.u32);
loc_82D4CB10:
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

__attribute__((alias("__imp__sub_82D4CB24"))) PPC_WEAK_FUNC(sub_82D4CB24);
PPC_FUNC_IMPL(__imp__sub_82D4CB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4CB28"))) PPC_WEAK_FUNC(sub_82D4CB28);
PPC_FUNC_IMPL(__imp__sub_82D4CB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D4CB30;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 556);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4ce68
	if (!cr6.eq) goto loc_82D4CE68;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r3,520
	ctx.r31.s64 = ctx.r3.s64 + 520;
	// stb r11,556(r3)
	PPC_STORE_U8(ctx.r3.u32 + 556, ctx.r11.u8);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r5,536(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r10,-3230
	ctx.r6.s64 = ctx.r10.s64 + -3230;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82D4CB6C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d4cb90
	if (cr6.eq) goto loc_82D4CB90;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cb84
	if (cr6.lt) goto loc_82D4CB84;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D4CB84:
	// bl 0x83816968
	ctx.lr = 0x82D4CB88;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CB90;
	sub_83816378(ctx, base);
loc_82D4CB90:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r24,r25,548
	ctx.r24.s64 = ctx.r25.s64 + 548;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r25,464
	ctx.r28.s64 = ctx.r25.s64 + 464;
	// addi r29,r25,304
	ctx.r29.s64 = ctx.r25.s64 + 304;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
loc_82D4CBAC:
	// lwz r11,-64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cbc0
	if (cr6.lt) goto loc_82D4CBC0;
	// lwz r31,-84(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -84);
	// b 0x82d4cbc4
	goto loc_82D4CBC4;
loc_82D4CBC0:
	// addi r31,r29,-84
	ctx.r31.s64 = ctx.r29.s64 + -84;
loc_82D4CBC4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d4cbe4
	if (cr6.eq) goto loc_82D4CBE4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4cbe4
	if (cr6.eq) goto loc_82D4CBE4;
	// bl 0x83816968
	ctx.lr = 0x82D4CBDC;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CBE4;
	sub_83816378(ctx, base);
loc_82D4CBE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cbf8
	if (cr6.lt) goto loc_82D4CBF8;
	// lwz r31,-20(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20);
	// b 0x82d4cbfc
	goto loc_82D4CBFC;
loc_82D4CBF8:
	// addi r31,r29,-20
	ctx.r31.s64 = ctx.r29.s64 + -20;
loc_82D4CBFC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d4cc1c
	if (cr6.eq) goto loc_82D4CC1C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4cc1c
	if (cr6.eq) goto loc_82D4CC1C;
	// bl 0x83816968
	ctx.lr = 0x82D4CC14;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CC1C;
	sub_83816378(ctx, base);
loc_82D4CC1C:
	// lbzx r11,r24,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4cc60
	if (cr6.eq) goto loc_82D4CC60;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cc3c
	if (cr6.lt) goto loc_82D4CC3C;
	// lwz r31,44(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// b 0x82d4cc40
	goto loc_82D4CC40;
loc_82D4CC3C:
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
loc_82D4CC40:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d4cc60
	if (cr6.eq) goto loc_82D4CC60;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4cc60
	if (cr6.eq) goto loc_82D4CC60;
	// bl 0x83816968
	ctx.lr = 0x82D4CC58;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CC60;
	sub_83816378(ctx, base);
loc_82D4CC60:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d4c4e0
	ctx.lr = 0x82D4CC70;
	sub_82D4C4E0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cc84
	if (cr6.lt) goto loc_82D4CC84;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4cc88
	goto loc_82D4CC88;
loc_82D4CC84:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4CC88:
	// bl 0x83816968
	ctx.lr = 0x82D4CC8C;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CC94;
	sub_83816378(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ccb0
	if (cr6.lt) goto loc_82D4CCB0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82D4CCB0;
	sub_825952B8(ctx, base);
loc_82D4CCB0:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d4c570
	ctx.lr = 0x82D4CCCC;
	sub_82D4C570(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cce0
	if (cr6.lt) goto loc_82D4CCE0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4cce4
	goto loc_82D4CCE4;
loc_82D4CCE0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4CCE4:
	// bl 0x83816968
	ctx.lr = 0x82D4CCE8;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CCF0;
	sub_83816378(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cd0c
	if (cr6.lt) goto loc_82D4CD0C;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82D4CD0C;
	sub_825952B8(ctx, base);
loc_82D4CD0C:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d4c600
	ctx.lr = 0x82D4CD28;
	sub_82D4C600(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cd3c
	if (cr6.lt) goto loc_82D4CD3C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4cd40
	goto loc_82D4CD40;
loc_82D4CD3C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4CD40:
	// bl 0x83816968
	ctx.lr = 0x82D4CD44;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CD4C;
	sub_83816378(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cd68
	if (cr6.lt) goto loc_82D4CD68;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82D4CD68;
	sub_825952B8(ctx, base);
loc_82D4CD68:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r27.u8);
	// beq cr6,0x82d4cd84
	if (cr6.eq) goto loc_82D4CD84;
	// bl 0x833bbd78
	ctx.lr = 0x82D4CD84;
	sub_833BBD78(ctx, base);
loc_82D4CD84:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82d4cbac
	if (cr6.lt) goto loc_82D4CBAC;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r28,11
	ctx.r28.s64 = 11;
	// addi r29,r10,-29092
	ctx.r29.s64 = ctx.r10.s64 + -29092;
loc_82D4CDAC:
	// subfc r10,r28,r31
	xer.ca = ctx.r31.u32 >= ctx.r28.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r6,r7,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lwzx r4,r6,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4CDD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4cdd0
	if (!cr6.eq) goto loc_82D4CDD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4CDF4;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82d4ce08
	if (!cr6.lt) goto loc_82D4CE08;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82D4CE08:
	// bl 0x83816968
	ctx.lr = 0x82D4CE0C;
	sub_83816968(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CE14;
	sub_83816378(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ce30
	if (cr6.lt) goto loc_82D4CE30;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82D4CE30;
	sub_825952B8(ctx, base);
loc_82D4CE30:
	// addi r11,r31,118
	ctx.r11.s64 = ctx.r31.s64 + 118;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// lwzx r3,r10,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4ce54
	if (cr6.eq) goto loc_82D4CE54;
	// bl 0x833bbd78
	ctx.lr = 0x82D4CE54;
	sub_833BBD78(ctx, base);
loc_82D4CE54:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82d4cdac
	if (cr6.lt) goto loc_82D4CDAC;
loc_82D4CE68:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4CE70"))) PPC_WEAK_FUNC(sub_82D4CE70);
PPC_FUNC_IMPL(__imp__sub_82D4CE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82D4CE78;
	__savegprlr_18(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x82d4cb28
	ctx.lr = 0x82D4CE84;
	sub_82D4CB28(ctx, base);
	// lwz r10,516(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 516);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4cee8
	if (cr6.eq) goto loc_82D4CEE8;
	// bl 0x831156e8
	ctx.lr = 0x82D4CEA0;
	sub_831156E8(ctx, base);
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b860
	ctx.lr = 0x82D4CEAC;
	sub_8312B860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8312b840
	ctx.lr = 0x82D4CEBC;
	sub_8312B840(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// subf r9,r26,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r26.s64;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// sth r30,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r30.u16);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// bl 0x82d41a18
	ctx.lr = 0x82D4CEE8;
	sub_82D41A18(ctx, base);
loc_82D4CEE8:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r19,r21,548
	ctx.r19.s64 = ctx.r21.s64 + 548;
	// addi r24,r21,96
	ctx.r24.s64 = ctx.r21.s64 + 96;
	// addi r23,r21,98
	ctx.r23.s64 = ctx.r21.s64 + 98;
	// addi r29,r21,88
	ctx.r29.s64 = ctx.r21.s64 + 88;
	// addi r27,r21,84
	ctx.r27.s64 = ctx.r21.s64 + 84;
	// addi r28,r21,120
	ctx.r28.s64 = ctx.r21.s64 + 120;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D4CF0C:
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cf20
	if (cr6.lt) goto loc_82D4CF20;
	// lwz r25,100(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// b 0x82d4cf24
	goto loc_82D4CF24;
loc_82D4CF20:
	// addi r25,r28,100
	ctx.r25.s64 = ctx.r28.s64 + 100;
loc_82D4CF24:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82d4cf44
	if (cr6.eq) goto loc_82D4CF44;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4cf44
	if (cr6.eq) goto loc_82D4CF44;
	// bl 0x83816968
	ctx.lr = 0x82D4CF3C;
	sub_83816968(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CF44;
	sub_83816378(ctx, base);
loc_82D4CF44:
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4cf58
	if (cr6.lt) goto loc_82D4CF58;
	// lwz r25,164(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// b 0x82d4cf5c
	goto loc_82D4CF5C;
loc_82D4CF58:
	// addi r25,r28,164
	ctx.r25.s64 = ctx.r28.s64 + 164;
loc_82D4CF5C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82d4cf7c
	if (cr6.eq) goto loc_82D4CF7C;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4cf7c
	if (cr6.eq) goto loc_82D4CF7C;
	// bl 0x83816968
	ctx.lr = 0x82D4CF74;
	sub_83816968(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83816378
	ctx.lr = 0x82D4CF7C;
	sub_83816378(ctx, base);
loc_82D4CF7C:
	// lbzx r11,r19,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4d024
	if (cr6.eq) goto loc_82D4D024;
	// lhz r10,-4(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + -4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82d41980
	ctx.lr = 0x82D4CF9C;
	sub_82D41980(ctx, base);
	// lhz r8,-4(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + -4);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82d41980
	ctx.lr = 0x82D4CFB0;
	sub_82D41980(ctx, base);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d4cfc4
	if (cr6.lt) goto loc_82D4CFC4;
	// lwz r5,-20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	// b 0x82d4cfc8
	goto loc_82D4CFC8;
loc_82D4CFC4:
	// addi r5,r28,-20
	ctx.r5.s64 = ctx.r28.s64 + -20;
loc_82D4CFC8:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,147
	ctx.r3.s64 = ctx.r1.s64 + 147;
	// lbzx r9,r24,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// lbzx r8,r23,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// stb r31,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r31.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r31,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r31.u8);
	// stb r9,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r9.u8);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stb r8,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r8.u8);
	// stb r31,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r31.u8);
	// lhz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// bl 0x831ce7d8
	ctx.lr = 0x82D4D008;
	sub_831CE7D8(ctx, base);
	// subf r6,r26,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r26.s64;
	// sth r25,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r25.u16);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r4,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r4,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r4.u8);
	// b 0x82d4d10c
	goto loc_82D4D10C;
loc_82D4D024:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r25,r28,-20
	ctx.r25.s64 = ctx.r28.s64 + -20;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d03c
	if (cr6.lt) goto loc_82D4D03C;
	// lwz r5,-20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -20);
	// b 0x82d4d040
	goto loc_82D4D040;
loc_82D4D03C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82D4D040:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,179
	ctx.r3.s64 = ctx.r1.s64 + 179;
	// lbzx r9,r24,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// lbzx r8,r23,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// stb r31,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r31.u8);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stb r31,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r31.u8);
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// stb r9,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r9.u8);
	// stb r31,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r31.u8);
	// stb r8,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r8.u8);
	// lhz r18,0(r27)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// bl 0x831ce7d8
	ctx.lr = 0x82D4D080;
	sub_831CE7D8(ctx, base);
	// subf r6,r26,r18
	ctx.r6.s64 = ctx.r18.s64 - ctx.r26.s64;
	// sth r18,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r18.u16);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r4,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r4,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r4.u8);
	// bl 0x82d418e0
	ctx.lr = 0x82D4D09C;
	sub_82D418E0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x82d4d0b0
	if (cr6.lt) goto loc_82D4D0B0;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82d4d0b4
	goto loc_82D4D0B4;
loc_82D4D0B0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82D4D0B4:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,211
	ctx.r3.s64 = ctx.r1.s64 + 211;
	// lbzx r9,r24,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// lbzx r8,r23,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// stb r31,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r31.u8);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stb r31,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r31.u8);
	// stb r9,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// stw r20,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r20.u32);
	// stb r8,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r8.u8);
	// stb r31,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r31.u8);
	// lhz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// bl 0x831ce7d8
	ctx.lr = 0x82D4D0F4;
	sub_831CE7D8(ctx, base);
	// subf r6,r26,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r26.s64;
	// sth r25,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r25.u16);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r4,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r4,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r4.u8);
loc_82D4D10C:
	// bl 0x82d418e0
	ctx.lr = 0x82D4D110;
	sub_82D418E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82d4cf0c
	if (cr6.lt) goto loc_82D4CF0C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83103260
	ctx.lr = 0x82D4D130;
	sub_83103260(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4D138"))) PPC_WEAK_FUNC(sub_82D4D138);
PPC_FUNC_IMPL(__imp__sub_82D4D138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82D4D140;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce750
	ctx.lr = 0x82D4D148;
	__savefpr_18(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82d4dafc
	if (cr6.gt) goto loc_82D4DAFC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d4d494
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4D494;
	// bdzf 4*cr6+eq,0x82d4d4d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4D4D8;
	// bne cr6,0x82d4d508
	if (!cr6.eq) goto loc_82D4D508;
	// bl 0x831156e8
	ctx.lr = 0x82D4D174;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r31,56(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8312b840
	ctx.lr = 0x82D4D188;
	sub_8312B840(ctx, base);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r11,-28976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28976);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d4d20c
	if (cr6.eq) goto loc_82D4D20C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b860
	ctx.lr = 0x82D4D1AC;
	sub_8312B860(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8312b840
	ctx.lr = 0x82D4D1BC;
	sub_8312B840(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addis r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -65536;
	// sth r30,184(r1)
	PPC_STORE_U16(ctx.r1.u32 + 184, ctx.r30.u16);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r7.u8);
	// bl 0x82d42018
	ctx.lr = 0x82D4D1F0;
	sub_82D42018(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r21,520
	ctx.r3.s64 = ctx.r21.s64 + 520;
	// bl 0x8259cb28
	ctx.lr = 0x82D4D204;
	sub_8259CB28(ctx, base);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4D20C;
	sub_8387E8E0(ctx, base);
loc_82D4D20C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r22,r21,548
	ctx.r22.s64 = ctx.r21.s64 + 548;
	// addi r24,r21,98
	ctx.r24.s64 = ctx.r21.s64 + 98;
	// addi r23,r21,96
	ctx.r23.s64 = ctx.r21.s64 + 96;
	// addi r30,r21,88
	ctx.r30.s64 = ctx.r21.s64 + 88;
	// addi r29,r21,84
	ctx.r29.s64 = ctx.r21.s64 + 84;
	// addi r27,r21,100
	ctx.r27.s64 = ctx.r21.s64 + 100;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r19,2
	ctx.r19.s64 = 2;
loc_82D4D230:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82d4d240
	if (!cr6.eq) goto loc_82D4D240;
	// stbx r20,r22,r31
	PPC_STORE_U8(ctx.r22.u32 + ctx.r31.u32, ctx.r20.u8);
loc_82D4D240:
	// lbzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4d31c
	if (cr6.eq) goto loc_82D4D31C;
	// lhz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + -4);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r28.u32);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// bl 0x82d415a8
	ctx.lr = 0x82D4D264;
	sub_82D415A8(ctx, base);
	// addi r26,r27,20
	ctx.r26.s64 = ctx.r27.s64 + 20;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82D4D27C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4D284;
	sub_8387E8E0(ctx, base);
	// lhz r8,-4(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + -4);
	// stw r19,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// bl 0x82d415a8
	ctx.lr = 0x82D4D29C;
	sub_82D415A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r27,184
	ctx.r3.s64 = ctx.r27.s64 + 184;
	// bl 0x8259cb28
	ctx.lr = 0x82D4D2B0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4D2B8;
	sub_8387E8E0(ctx, base);
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82d4d2cc
	if (cr6.lt) goto loc_82D4D2CC;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82d4d2d0
	goto loc_82D4D2D0;
loc_82D4D2CC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82D4D2D0:
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lbzx r7,r24,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r31.u32);
	// lbzx r6,r23,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x82d4bc50
	ctx.lr = 0x82D4D2F0;
	sub_82D4BC50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82d41e60
	ctx.lr = 0x82D4D300;
	sub_82D41E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r26,228
	ctx.r3.s64 = ctx.r26.s64 + 228;
	// bl 0x8259cb28
	ctx.lr = 0x82D4D314;
	sub_8259CB28(ctx, base);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// b 0x82d4d3e4
	goto loc_82D4D3E4;
loc_82D4D31C:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r26,r27,20
	ctx.r26.s64 = ctx.r27.s64 + 20;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d334
	if (cr6.lt) goto loc_82D4D334;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82d4d338
	goto loc_82D4D338;
loc_82D4D334:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82D4D338:
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r7,r24,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r31.u32);
	// lbzx r6,r23,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x82d4bc50
	ctx.lr = 0x82D4D358;
	sub_82D4BC50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82d41e60
	ctx.lr = 0x82D4D368;
	sub_82D41E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r26,100
	ctx.r3.s64 = ctx.r26.s64 + 100;
	// bl 0x8259cb28
	ctx.lr = 0x82D4D37C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4D384;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d398
	if (cr6.lt) goto loc_82D4D398;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82d4d39c
	goto loc_82D4D39C;
loc_82D4D398:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82D4D39C:
	// li r9,2
	ctx.r9.s64 = 2;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lbzx r7,r24,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r31.u32);
	// lbzx r6,r23,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r31.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// bl 0x82d4bc50
	ctx.lr = 0x82D4D3BC;
	sub_82D4BC50(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x82d41e60
	ctx.lr = 0x82D4D3CC;
	sub_82D41E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r27,184
	ctx.r3.s64 = ctx.r27.s64 + 184;
	// bl 0x8259cb28
	ctx.lr = 0x82D4D3E0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
loc_82D4D3E4:
	// bl 0x8387e8e0
	ctx.lr = 0x82D4D3E8;
	sub_8387E8E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82d4d230
	if (cr6.lt) goto loc_82D4D230;
	// bl 0x82d34e50
	ctx.lr = 0x82D4D404;
	sub_82D34E50(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,32492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32492);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d4d478
	if (cr6.eq) goto loc_82D4D478;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d4d45c
	if (cr6.eq) goto loc_82D4D45C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82d4d440
	if (cr6.eq) goto loc_82D4D440;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r20,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r20.u32);
	// stw r11,560(r21)
	PPC_STORE_U32(ctx.r21.u32 + 560, ctx.r11.u32);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4D43C;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82D4D440:
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r20,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r20.u32);
	// stw r11,560(r21)
	PPC_STORE_U32(ctx.r21.u32 + 560, ctx.r11.u32);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4D458;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82D4D45C:
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r20,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r20.u32);
	// stw r11,560(r21)
	PPC_STORE_U32(ctx.r21.u32 + 560, ctx.r11.u32);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4D474;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82D4D478:
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r20,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r20.u32);
	// stw r11,560(r21)
	PPC_STORE_U32(ctx.r21.u32 + 560, ctx.r11.u32);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4D490;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82D4D494:
	// lwz r3,560(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// bl 0x82d462e8
	ctx.lr = 0x82D4D49C;
	sub_82D462E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4dafc
	if (cr6.eq) goto loc_82D4DAFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d4bcd8
	ctx.lr = 0x82D4D4B4;
	sub_82D4BCD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4dafc
	if (cr6.eq) goto loc_82D4DAFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r11.u32);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4D4D4;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82D4D4D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d4bcd8
	ctx.lr = 0x82D4D4E4;
	sub_82D4BCD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4dafc
	if (cr6.eq) goto loc_82D4DAFC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r11.u32);
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4D504;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82D4D508:
	// bl 0x831156e8
	ctx.lr = 0x82D4D50C;
	sub_831156E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lfs f20,22396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22396);
	ctx.f20.f64 = double(temp.f32);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lfs f19,-5556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5556);
	ctx.f19.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f23,-2208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2208);
	ctx.f23.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f24,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f25,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f28.f64 = double(temp.f32);
	// addi r29,r21,464
	ctx.r29.s64 = ctx.r21.s64 + 464;
	// lfs f22,-2212(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -2212);
	ctx.f22.f64 = double(temp.f32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lfs f21,-10804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -10804);
	ctx.f21.f64 = double(temp.f32);
	// addi r26,r21,156
	ctx.r26.s64 = ctx.r21.s64 + 156;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r22,15
	ctx.r22.s64 = 15;
	// lis r25,-31776
	ctx.r25.s64 = -2082471936;
	// lis r23,-31775
	ctx.r23.s64 = -2082406400;
	// lis r20,-31775
	ctx.r20.s64 = -2082406400;
	// addi r24,r11,-2732
	ctx.r24.s64 = ctx.r11.s64 + -2732;
loc_82D4D578:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d58c
	if (cr6.lt) goto loc_82D4D58C;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x82d4d590
	goto loc_82D4D590;
loc_82D4D58C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82D4D590:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d0b4c8
	ctx.lr = 0x82D4D598;
	sub_82D0B4C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d06fa0
	ctx.lr = 0x82D4D5A4;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82d04828
	ctx.lr = 0x82D4D5AC;
	sub_82D04828(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82d06fa0
	ctx.lr = 0x82D4D5B8;
	sub_82D06FA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// lwz r4,560(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// bl 0x82d06ef8
	ctx.lr = 0x82D4D5C8;
	sub_82D06EF8(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82d047a8
	ctx.lr = 0x82D4D5D0;
	sub_82D047A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,560(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// bl 0x82d06ef8
	ctx.lr = 0x82D4D5E0;
	sub_82D06EF8(ctx, base);
	// lfs f0,920(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f21
	ctx.f31.f64 = ctx.f21.f64;
	// fcmpu cr6,f0,f21
	cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82d4d5fc
	if (!cr6.gt) goto loc_82D4D5FC;
loc_82D4D5F0:
	// fmuls f31,f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f21.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82d4d5f0
	if (cr6.lt) goto loc_82D4D5F0;
loc_82D4D5FC:
	// bl 0x82d34e50
	ctx.lr = 0x82D4D600;
	sub_82D34E50(ctx, base);
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32492(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32492);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82d4d614
	if (!cr6.lt) goto loc_82D4D614;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82D4D614:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82d07058
	ctx.lr = 0x82D4D620;
	sub_82D07058(ctx, base);
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82d0abf0
	ctx.lr = 0x82D4D634;
	sub_82D0ABF0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f1,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07060
	ctx.lr = 0x82D4D640;
	sub_82D07060(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,-28872(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + -28872);
	// bl 0x83a7a980
	ctx.lr = 0x82D4D64C;
	sub_83A7A980(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82a245d0
	ctx.lr = 0x82D4D658;
	sub_82A245D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d07118
	ctx.lr = 0x82D4D664;
	sub_82D07118(ctx, base);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d0af58
	ctx.lr = 0x82D4D678;
	sub_82D0AF58(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x833bcae8
	ctx.lr = 0x82D4D690;
	sub_833BCAE8(ctx, base);
	// lfs f0,408(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f0.f64 = double(temp.f32);
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// fcmpu cr6,f0,f22
	cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// fdivs f30,f28,f31
	ctx.f30.f64 = double(float(ctx.f28.f64 / ctx.f31.f64));
	// bge cr6,0x82d4d6b0
	if (!cr6.lt) goto loc_82D4D6B0;
	// fnmsubs f0,f30,f22,f28
	ctx.f0.f64 = double(float(-(ctx.f30.f64 * ctx.f22.f64 - ctx.f28.f64)));
	// b 0x82d4d6b4
	goto loc_82D4D6B4;
loc_82D4D6B0:
	// fnmsubs f0,f30,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f30.f64 * ctx.f0.f64 - ctx.f28.f64)));
loc_82D4D6B4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmuls f29,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82d4c4e0
	ctx.lr = 0x82D4D6C8;
	sub_82D4C4E0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d6dc
	if (cr6.lt) goto loc_82D4D6DC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4d6e0
	goto loc_82D4D6E0;
loc_82D4D6DC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4D6E0:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lhz r30,134(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// lfs f31,-28876(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -28876);
	ctx.f31.f64 = double(temp.f32);
	// lwz r18,0(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fsubs f27,f28,f29
	ctx.f27.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// bl 0x83816968
	ctx.lr = 0x82D4D6FC;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4D728;
	sub_83816550(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d744
	if (cr6.lt) goto loc_82D4D744;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82D4D744;
	sub_825952B8(ctx, base);
loc_82D4D744:
	// fnmsubs f27,f30,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(-(ctx.f30.f64 * ctx.f26.f64 - ctx.f28.f64)));
	// stw r22,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r22.u32);
	// fcmpu cr6,f26,f23
	cr6.compare(ctx.f26.f64, ctx.f23.f64);
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// stb r28,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r28.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// fmuls f31,f27,f25
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
	// bge cr6,0x82d4d7cc
	if (!cr6.lt) goto loc_82D4D7CC;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82d4c600
	ctx.lr = 0x82D4D770;
	sub_82D4C600(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d784
	if (cr6.lt) goto loc_82D4D784;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4d788
	goto loc_82D4D788;
loc_82D4D784:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4D788:
	// lwz r18,0(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f29,-28876(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -28876);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f18,f30,f23,f31
	ctx.f18.f64 = double(float(ctx.f30.f64 * ctx.f23.f64 + ctx.f31.f64));
	// bl 0x83816968
	ctx.lr = 0x82D4D798;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4D7C4;
	sub_83816550(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// b 0x82d4d82c
	goto loc_82D4D82C;
loc_82D4D7CC:
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82d4c600
	ctx.lr = 0x82D4D7D4;
	sub_82D4C600(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d7e8
	if (cr6.lt) goto loc_82D4D7E8;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4d7ec
	goto loc_82D4D7EC;
loc_82D4D7E8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4D7EC:
	// lwz r18,0(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f29,-28876(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -28876);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f18,f28,f31
	ctx.f18.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// bl 0x83816968
	ctx.lr = 0x82D4D7FC;
	sub_83816968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f2,f18
	ctx.f2.f64 = ctx.f18.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x83816550
	ctx.lr = 0x82D4D828;
	sub_83816550(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
loc_82D4D82C:
	// bl 0x8387e8e0
	ctx.lr = 0x82D4D830;
	sub_8387E8E0(ctx, base);
	// bl 0x82d34e50
	ctx.lr = 0x82D4D834;
	sub_82D34E50(ctx, base);
	// lwz r11,32492(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32492);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d4d850
	if (cr6.eq) goto loc_82D4D850;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82d4d850
	if (cr6.eq) goto loc_82D4D850;
	// fmr f0,f19
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f19.f64;
	// b 0x82d4d854
	goto loc_82D4D854;
loc_82D4D850:
	// lfs f0,8(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_82D4D854:
	// fmuls f0,f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f26,f0
	cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bge cr6,0x82d4d86c
	if (!cr6.lt) goto loc_82D4D86C;
	// fnmsubs f0,f0,f30,f28
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f30.f64 - ctx.f28.f64)));
	// fmuls f31,f0,f25
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// b 0x82d4d870
	goto loc_82D4D870;
loc_82D4D86C:
	// fmuls f31,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f25.f64));
loc_82D4D870:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d4c570
	ctx.lr = 0x82D4D880;
	sub_82D4C570(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d894
	if (cr6.lt) goto loc_82D4D894;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d4d898
	goto loc_82D4D898;
loc_82D4D894:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82D4D898:
	// lwz r18,0(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f30,-28876(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -28876);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f29,f28,f31
	ctx.f29.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// bl 0x83816968
	ctx.lr = 0x82D4D8A8;
	sub_83816968(ctx, base);
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// bl 0x83816550
	ctx.lr = 0x82D4D8D4;
	sub_83816550(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4d8f0
	if (cr6.lt) goto loc_82D4D8F0;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82D4D8F0;
	sub_825952B8(ctx, base);
loc_82D4D8F0:
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r28,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r28.u8);
	// bl 0x82572fa0
	ctx.lr = 0x82D4D908;
	sub_82572FA0(ctx, base);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82d04b60
	ctx.lr = 0x82D4D910;
	sub_82D04B60(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d0b540
	ctx.lr = 0x82D4D918;
	sub_82D0B540(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x82d4d578
	if (cr6.lt) goto loc_82D4D578;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r25,11
	ctx.r25.s64 = 11;
	// addi r26,r11,-29092
	ctx.r26.s64 = ctx.r11.s64 + -29092;
	// addi r27,r10,-29048
	ctx.r27.s64 = ctx.r10.s64 + -29048;
loc_82D4D948:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d0b4c8
	ctx.lr = 0x82D4D950;
	sub_82D0B4C8(ctx, base);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82d06fa0
	ctx.lr = 0x82D4D960;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82d04828
	ctx.lr = 0x82D4D968;
	sub_82D04828(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82d06fa0
	ctx.lr = 0x82D4D974;
	sub_82D06FA0(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82d047a8
	ctx.lr = 0x82D4D97C;
	sub_82D047A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,560(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// bl 0x82d06ef8
	ctx.lr = 0x82D4D98C;
	sub_82D06EF8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f1,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07058
	ctx.lr = 0x82D4D998;
	sub_82D07058(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f1,12(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d07060
	ctx.lr = 0x82D4D9A4;
	sub_82D07060(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,-28872(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + -28872);
	// bl 0x83a7a980
	ctx.lr = 0x82D4D9B0;
	sub_83A7A980(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82a245d0
	ctx.lr = 0x82D4D9BC;
	sub_82A245D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d07118
	ctx.lr = 0x82D4D9C8;
	sub_82D07118(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82d0af58
	ctx.lr = 0x82D4D9DC;
	sub_82D0AF58(ctx, base);
	// addi r11,r29,118
	ctx.r11.s64 = ctx.r29.s64 + 118;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x833bcae8
	ctx.lr = 0x82D4D9FC;
	sub_833BCAE8(ctx, base);
	// subfc r10,r25,r29
	xer.ca = ctx.r29.u32 >= ctx.r25.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r25.s64;
	// stwx r3,r31,r21
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// and r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 & ctx.r30.u64;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// rlwinm r6,r7,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lwzx r4,r6,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4DA24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4da24
	if (!cr6.eq) goto loc_82D4DA24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D4DA48;
	sub_8259CC28(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bge cr6,0x82d4da5c
	if (!cr6.lt) goto loc_82D4DA5C;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
loc_82D4DA5C:
	// lwzx r31,r31,r21
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lfs f31,-28876(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + -28876);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x83816968
	ctx.lr = 0x82D4DA68;
	sub_83816968(ctx, base);
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r6,64
	ctx.r6.s64 = 64;
	// lfs f2,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x83816550
	ctx.lr = 0x82D4DA94;
	sub_83816550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4dab0
	if (cr6.lt) goto loc_82D4DAB0;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82D4DAB0;
	sub_825952B8(ctx, base);
loc_82D4DAB0:
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// bl 0x82572fa0
	ctx.lr = 0x82D4DAC8;
	sub_82572FA0(ctx, base);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// bl 0x82d04b60
	ctx.lr = 0x82D4DAD0;
	sub_82D04B60(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82d0b540
	ctx.lr = 0x82D4DAD8;
	sub_82D0B540(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82d4d948
	if (cr6.lt) goto loc_82D4D948;
	// lwz r3,560(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 560);
	// bl 0x82d46378
	ctx.lr = 0x82D4DAF4;
	sub_82D46378(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,552(r21)
	PPC_STORE_U32(ctx.r21.u32 + 552, ctx.r11.u32);
loc_82D4DAFC:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x831ce79c
	ctx.lr = 0x82D4DB08;
	__restfpr_18(ctx, base);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4DB0C"))) PPC_WEAK_FUNC(sub_82D4DB0C);
PPC_FUNC_IMPL(__imp__sub_82D4DB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4DB10"))) PPC_WEAK_FUNC(sub_82D4DB10);
PPC_FUNC_IMPL(__imp__sub_82D4DB10) {
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
	// lis r30,-31758
	ctx.r30.s64 = -2081292288;
	// lwz r3,-4560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4560);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4db98
	if (!cr6.eq) goto loc_82D4DB98;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4DB4C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4db90
	if (cr6.eq) goto loc_82D4DB90;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,-1936
	ctx.r4.s64 = ctx.r11.s64 + -1936;
	// bl 0x83103328
	ctx.lr = 0x82D4DB64;
	sub_83103328(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r10,-1780
	ctx.r9.s64 = ctx.r10.s64 + -1780;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831021a0
	ctx.lr = 0x82D4DB74;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x82D4DB7C;
	sub_82DA45F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82D4DB84;
	sub_83103100(ctx, base);
	// stw r31,-4560(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4560, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82d4db98
	goto loc_82D4DB98;
loc_82D4DB90:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-4560(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4560, ctx.r3.u32);
loc_82D4DB98:
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

__attribute__((alias("__imp__sub_82D4DBB0"))) PPC_WEAK_FUNC(sub_82D4DBB0);
PPC_FUNC_IMPL(__imp__sub_82D4DBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d4db10
	ctx.lr = 0x82D4DBC0;
	sub_82D4DB10(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4DBD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4DBE0"))) PPC_WEAK_FUNC(sub_82D4DBE0);
PPC_FUNC_IMPL(__imp__sub_82D4DBE0) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// addi r9,r11,-1780
	ctx.r9.s64 = ctx.r11.s64 + -1780;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,-4560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4560, ctx.r11.u32);
	// bl 0x831032a0
	ctx.lr = 0x82D4DC18;
	sub_831032A0(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82d4dc30
	if (cr6.eq) goto loc_82D4DC30;
	// bl 0x82416268
	ctx.lr = 0x82D4DC2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4DC30:
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

__attribute__((alias("__imp__sub_82D4DC48"))) PPC_WEAK_FUNC(sub_82D4DC48);
PPC_FUNC_IMPL(__imp__sub_82D4DC48) {
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
	// bl 0x82d52328
	ctx.lr = 0x82D4DC60;
	sub_82D52328(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-1296
	ctx.r9.s64 = ctx.r10.s64 + -1296;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D4DC90"))) PPC_WEAK_FUNC(sub_82D4DC90);
PPC_FUNC_IMPL(__imp__sub_82D4DC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r5,r3,104
	ctx.r5.s64 = ctx.r3.s64 + 104;
	// lwz r4,-28764(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28764);
	// b 0x82d2b3a8
	sub_82D2B3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4DCA0"))) PPC_WEAK_FUNC(sub_82D4DCA0);
PPC_FUNC_IMPL(__imp__sub_82D4DCA0) {
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
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-28756
	ctx.r7.s64 = ctx.r9.s64 + -28756;
	// lwz r4,-28760(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28760);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82d521a8
	ctx.lr = 0x82D4DCCC;
	sub_82D521A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d4dcd8
	if (!cr6.lt) goto loc_82D4DCD8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82D4DCD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4DCE8"))) PPC_WEAK_FUNC(sub_82D4DCE8);
PPC_FUNC_IMPL(__imp__sub_82D4DCE8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-28756
	ctx.r8.s64 = ctx.r10.s64 + -28756;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D4DD28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d4dd38
	if (!cr6.lt) goto loc_82D4DD38;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d4dd3c
	goto loc_82D4DD3C;
loc_82D4DD38:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
loc_82D4DD3C:
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

__attribute__((alias("__imp__sub_82D4DD54"))) PPC_WEAK_FUNC(sub_82D4DD54);
PPC_FUNC_IMPL(__imp__sub_82D4DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4DD58"))) PPC_WEAK_FUNC(sub_82D4DD58);
PPC_FUNC_IMPL(__imp__sub_82D4DD58) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-1296
	ctx.r10.s64 = ctx.r11.s64 + -1296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D4DD84;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4dd9c
	if (cr6.eq) goto loc_82D4DD9C;
	// bl 0x82416268
	ctx.lr = 0x82D4DD98;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4DD9C:
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

__attribute__((alias("__imp__sub_82D4DDB4"))) PPC_WEAK_FUNC(sub_82D4DDB4);
PPC_FUNC_IMPL(__imp__sub_82D4DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4DDB8"))) PPC_WEAK_FUNC(sub_82D4DDB8);
PPC_FUNC_IMPL(__imp__sub_82D4DDB8) {
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
	// bl 0x83a7d958
	ctx.lr = 0x82D4DDD8;
	sub_83A7D958(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82D4DDE4;
	sub_83524138(ctx, base);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82d4ddf8
	if (!cr6.lt) goto loc_82D4DDF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D4DDF8:
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

__attribute__((alias("__imp__sub_82D4DE10"))) PPC_WEAK_FUNC(sub_82D4DE10);
PPC_FUNC_IMPL(__imp__sub_82D4DE10) {
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-4168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4de54
	if (cr6.eq) goto loc_82D4DE54;
	// lbz r10,193(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82d4de54
	if (!cr6.eq) goto loc_82D4DE54;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x82d4ddb8
	ctx.lr = 0x82D4DE44;
	sub_82D4DDB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4de58
	if (!cr6.eq) goto loc_82D4DE58;
loc_82D4DE54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D4DE58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4DE68"))) PPC_WEAK_FUNC(sub_82D4DE68);
PPC_FUNC_IMPL(__imp__sub_82D4DE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-4168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4de90
	if (cr6.eq) goto loc_82D4DE90;
	// lbz r11,193(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82d4de90
	if (cr6.lt) goto loc_82D4DE90;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_82D4DE90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4DE98"))) PPC_WEAK_FUNC(sub_82D4DE98);
PPC_FUNC_IMPL(__imp__sub_82D4DE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,-4168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4df38
	if (cr6.eq) goto loc_82D4DF38;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r9,184(r10)
	PPC_STORE_U8(ctx.r10.u32 + 184, ctx.r9.u8);
	// lwz r10,-4168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// stb r8,193(r10)
	PPC_STORE_U8(ctx.r10.u32 + 193, ctx.r8.u8);
	// lwz r10,-4168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// stb r3,195(r10)
	PPC_STORE_U8(ctx.r10.u32 + 195, ctx.r3.u8);
	// lwz r11,-4168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// lwz r7,76(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d4df08
	if (cr6.eq) goto loc_82D4DF08;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,764
	ctx.r4.s64 = ctx.r11.s64 + 764;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4DF08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4DF08:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4df34
	if (cr6.eq) goto loc_82D4DF34;
	// bl 0x837d59a0
	ctx.lr = 0x82D4DF18;
	sub_837D59A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837d5ea0
	ctx.lr = 0x82D4DF34;
	sub_837D5EA0(ctx, base);
loc_82D4DF34:
	// bl 0x82d60dc0
	ctx.lr = 0x82D4DF38;
	sub_82D60DC0(ctx, base);
loc_82D4DF38:
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

__attribute__((alias("__imp__sub_82D4DF4C"))) PPC_WEAK_FUNC(sub_82D4DF4C);
PPC_FUNC_IMPL(__imp__sub_82D4DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4DF50"))) PPC_WEAK_FUNC(sub_82D4DF50);
PPC_FUNC_IMPL(__imp__sub_82D4DF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-4168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4df78
	if (cr6.eq) goto loc_82D4DF78;
	// lbz r11,193(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d4df78
	if (cr6.lt) goto loc_82D4DF78;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!cr6.gt) return;
loc_82D4DF78:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4DF80"))) PPC_WEAK_FUNC(sub_82D4DF80);
PPC_FUNC_IMPL(__imp__sub_82D4DF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D4DF88;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e1a8
	if (cr6.eq) goto loc_82D4E1A8;
	// bl 0x82d2ec40
	ctx.lr = 0x82D4DFA0;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e1a8
	if (cr6.eq) goto loc_82D4E1A8;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// bl 0x82d2ec40
	ctx.lr = 0x82D4DFB0;
	sub_82D2EC40(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r31,r11,844
	ctx.r31.s64 = ctx.r11.s64 + 844;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4DFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// bl 0x82d2ec40
	ctx.lr = 0x82D4DFDC;
	sub_82D2EC40(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82D4DFF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82d4e1a8
	if (cr6.eq) goto loc_82D4E1A8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e1a8
	if (cr6.eq) goto loc_82D4E1A8;
	// lwz r31,188(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d4e0b8
	if (cr6.eq) goto loc_82D4E0B8;
	// bl 0x82d53f18
	ctx.lr = 0x82D4E018;
	sub_82D53F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d53fa0
	ctx.lr = 0x82D4E020;
	sub_82D53FA0(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-9040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82D4E034;
	sub_82D34B00(ctx, base);
	// lwz r31,188(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d53f18
	ctx.lr = 0x82D4E040;
	sub_82D53F18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d540c0
	ctx.lr = 0x82D4E04C;
	sub_82D540C0(ctx, base);
	// lwz r29,188(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d53f18
	ctx.lr = 0x82D4E058;
	sub_82D53F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d54008
	ctx.lr = 0x82D4E064;
	sub_82D54008(ctx, base);
	// lwz r10,176(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d4e18c
	if (!cr6.eq) goto loc_82D4E18C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82d4e084
	if (!cr6.eq) goto loc_82D4E084;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// b 0x82d4e088
	goto loc_82D4E088;
loc_82D4E084:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82D4E088:
	// lwz r31,188(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// bl 0x82d53f18
	ctx.lr = 0x82D4E090;
	sub_82D53F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d540c0
	ctx.lr = 0x82D4E09C;
	sub_82D540C0(ctx, base);
	// lwz r29,188(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d53f18
	ctx.lr = 0x82D4E0A8;
	sub_82D53F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d54008
	ctx.lr = 0x82D4E0B4;
	sub_82D54008(ctx, base);
	// b 0x82d4e188
	goto loc_82D4E188;
loc_82D4E0B8:
	// bl 0x82d48420
	ctx.lr = 0x82D4E0BC;
	sub_82D48420(ctx, base);
	// bl 0x82d484a8
	ctx.lr = 0x82D4E0C0;
	sub_82D484A8(ctx, base);
	// lis r28,-31758
	ctx.r28.s64 = -2081292288;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,-9040(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82D4E0D4;
	sub_82D34B00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82d48420
	ctx.lr = 0x82D4E0DC;
	sub_82D48420(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d48500
	ctx.lr = 0x82D4E0E4;
	sub_82D48500(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48420
	ctx.lr = 0x82D4E0EC;
	sub_82D48420(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d484c0
	ctx.lr = 0x82D4E0F4;
	sub_82D484C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d54488
	ctx.lr = 0x82D4E0FC;
	sub_82D54488(ctx, base);
	// bl 0x82d54550
	ctx.lr = 0x82D4E100;
	sub_82D54550(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e150
	if (cr6.eq) goto loc_82D4E150;
	// add r4,r30,r25
	ctx.r4.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lwz r3,-9040(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82D4E118;
	sub_82D34B00(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bge cr6,0x82d4e150
	if (!cr6.lt) goto loc_82D4E150;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-9040(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82D4E12C;
	sub_82D34B00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d54488
	ctx.lr = 0x82D4E134;
	sub_82D54488(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d545a8
	ctx.lr = 0x82D4E13C;
	sub_82D545A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d54488
	ctx.lr = 0x82D4E144;
	sub_82D54488(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d54568
	ctx.lr = 0x82D4E14C;
	sub_82D54568(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D4E150:
	// lwz r11,176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d4e18c
	if (!cr6.eq) goto loc_82D4E18C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// beq cr6,0x82d4e16c
	if (cr6.eq) goto loc_82D4E16C;
	// addi r30,r26,-1
	ctx.r30.s64 = ctx.r26.s64 + -1;
loc_82D4E16C:
	// bl 0x82d48420
	ctx.lr = 0x82D4E170;
	sub_82D48420(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d48500
	ctx.lr = 0x82D4E178;
	sub_82D48500(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48420
	ctx.lr = 0x82D4E180;
	sub_82D48420(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d484c0
	ctx.lr = 0x82D4E188;
	sub_82D484C0(ctx, base);
loc_82D4E188:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82D4E18C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x82D4E198;
	sub_82D29598(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d29598
	ctx.lr = 0x82D4E1A4;
	sub_82D29598(ctx, base);
	// stw r31,176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 176, ctx.r31.u32);
loc_82D4E1A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E1B0"))) PPC_WEAK_FUNC(sub_82D4E1B0);
PPC_FUNC_IMPL(__imp__sub_82D4E1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-4168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4e1c8
	if (!cr6.eq) goto loc_82D4E1C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D4E1C8:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d4e1e8
	if (cr6.eq) goto loc_82D4E1E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d4e1e8
	if (cr6.eq) goto loc_82D4E1E8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82D4E1E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4E1F0"))) PPC_WEAK_FUNC(sub_82D4E1F0);
PPC_FUNC_IMPL(__imp__sub_82D4E1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,-4168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4e208
	if (!cr6.eq) goto loc_82D4E208;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82D4E208:
	// lbz r11,193(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4E218"))) PPC_WEAK_FUNC(sub_82D4E218);
PPC_FUNC_IMPL(__imp__sub_82D4E218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D4E220;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83131fc0
	ctx.lr = 0x82D4E228;
	sub_83131FC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D4E230;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82D4E234;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x82d4e2c8
	if (cr6.gt) goto loc_82D4E2C8;
	// lis r12,-32043
	ctx.r12.s64 = -2099970048;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7592
	ctx.r12.s64 = ctx.r12.s64 + -7592;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82D4E2AC;
	case 1:
		goto loc_82D4E2C8;
	case 2:
		goto loc_82D4E2AC;
	case 3:
		goto loc_82D4E2AC;
	case 4:
		goto loc_82D4E2AC;
	case 5:
		goto loc_82D4E2AC;
	case 6:
		goto loc_82D4E2AC;
	case 7:
		goto loc_82D4E2AC;
	case 8:
		goto loc_82D4E2C8;
	case 9:
		goto loc_82D4E2C8;
	case 10:
		goto loc_82D4E2AC;
	case 11:
		goto loc_82D4E2AC;
	case 12:
		goto loc_82D4E2AC;
	case 13:
		goto loc_82D4E2AC;
	case 14:
		goto loc_82D4E2AC;
	case 15:
		goto loc_82D4E2C8;
	case 16:
		goto loc_82D4E2C8;
	case 17:
		goto loc_82D4E2C8;
	case 18:
		goto loc_82D4E2C8;
	case 19:
		goto loc_82D4E2C8;
	case 20:
		goto loc_82D4E2AC;
	default:
		return;
	}
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7480(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7480);
	// lwz r22,-7508(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7508);
loc_82D4E2AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131d78
	ctx.lr = 0x82D4E2B4;
	sub_83131D78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4e2d4
	if (!cr6.eq) goto loc_82D4E2D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131d88
	ctx.lr = 0x82D4E2C8;
	sub_83131D88(ctx, base);
loc_82D4E2C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D4E2D4:
	// bl 0x83131d18
	ctx.lr = 0x82D4E2D8;
	sub_83131D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4e2c8
	if (cr6.eq) goto loc_82D4E2C8;
	// bl 0x830ff290
	ctx.lr = 0x82D4E2E8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82d4e31c
	if (cr6.gt) goto loc_82D4E31C;
	// beq cr6,0x82d4e37c
	if (cr6.eq) goto loc_82D4E37C;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82d4e2c8
	if (cr6.lt) goto loc_82D4E2C8;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// ble cr6,0x82d4e37c
	if (!cr6.gt) goto loc_82D4E37C;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82d4e33c
	if (cr6.eq) goto loc_82D4E33C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D4E31C:
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// bgt cr6,0x82d4e2c8
	if (cr6.gt) goto loc_82D4E2C8;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// bge cr6,0x82d4e37c
	if (!cr6.lt) goto loc_82D4E37C;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// blt cr6,0x82d4e2c8
	if (cr6.lt) goto loc_82D4E2C8;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x82d4e2c8
	if (cr6.gt) goto loc_82D4E2C8;
loc_82D4E33C:
	// bl 0x831156e8
	ctx.lr = 0x82D4E340;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x82D4E350;
	sub_83123778(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314e3c0
	ctx.lr = 0x82D4E360;
	sub_8314E3C0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82d4e2c8
	if (cr6.eq) goto loc_82D4E2C8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82d4e2c8
	if (cr6.eq) goto loc_82D4E2C8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x82d4e2c8
	if (cr6.eq) goto loc_82D4E2C8;
loc_82D4E37C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131da0
	ctx.lr = 0x82D4E384;
	sub_83131DA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131da8
	ctx.lr = 0x82D4E390;
	sub_83131DA8(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-9040(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9040);
	// bl 0x82d34b00
	ctx.lr = 0x82D4E3A4;
	sub_82D34B00(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// bge cr6,0x82d4e2c8
	if (!cr6.lt) goto loc_82D4E2C8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83131d70
	ctx.lr = 0x82D4E3B8;
	sub_83131D70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E3C4"))) PPC_WEAK_FUNC(sub_82D4E3C4);
PPC_FUNC_IMPL(__imp__sub_82D4E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4E3C8"))) PPC_WEAK_FUNC(sub_82D4E3C8);
PPC_FUNC_IMPL(__imp__sub_82D4E3C8) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82d4e4a4
	if (cr6.eq) goto loc_82D4E4A4;
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4e4a4
	if (!cr6.eq) goto loc_82D4E4A4;
	// lbz r11,194(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 194);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82d4e454
	if (cr6.lt) goto loc_82D4E454;
	// bne cr6,0x82d4e4a4
	if (!cr6.eq) goto loc_82D4E4A4;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d4ddb8
	ctx.lr = 0x82D4E418;
	sub_82D4DDB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4e4a4
	if (cr6.eq) goto loc_82D4E4A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4df80
	ctx.lr = 0x82D4E42C;
	sub_82D4DF80(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,816
	ctx.r4.s64 = ctx.r11.s64 + 816;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4E44C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82d4e498
	goto loc_82D4E498;
loc_82D4E454:
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// li r4,12000
	ctx.r4.s64 = 12000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d4ddb8
	ctx.lr = 0x82D4E464;
	sub_82D4DDB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4e4a4
	if (cr6.eq) goto loc_82D4E4A4;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,816
	ctx.r11.s64 = ctx.r11.s64 + 816;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4E494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r8,1
	ctx.r8.s64 = 1;
loc_82D4E498:
	// stb r8,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r8.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D4E4A0;
	sub_83A7D958(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82D4E4A4:
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

__attribute__((alias("__imp__sub_82D4E4BC"))) PPC_WEAK_FUNC(sub_82D4E4BC);
PPC_FUNC_IMPL(__imp__sub_82D4E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4E4C0"))) PPC_WEAK_FUNC(sub_82D4E4C0);
PPC_FUNC_IMPL(__imp__sub_82D4E4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D4E4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-416
	ctx.r31.s64 = ctx.r11.s64 + -416;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// bl 0x82d126b0
	ctx.lr = 0x82D4E4E4;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d4e4f4
	if (!cr6.eq) goto loc_82D4E4F4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82d4e50c
	goto loc_82D4E50C;
loc_82D4E4F4:
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// bl 0x82d12cc0
	ctx.lr = 0x82D4E4FC;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_82D4E50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d126b0
	ctx.lr = 0x82D4E514;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d4e524
	if (!cr6.eq) goto loc_82D4E524;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82d4e53c
	goto loc_82D4E53C;
loc_82D4E524:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12cc0
	ctx.lr = 0x82D4E52C;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_82D4E53C:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4e5b0
	if (cr6.eq) goto loc_82D4E5B0;
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4e560
	if (cr6.lt) goto loc_82D4E560;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d4e564
	goto loc_82D4E564;
loc_82D4E560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4E564:
	// bl 0x82d126b0
	ctx.lr = 0x82D4E568;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d4e57c
	if (!cr6.eq) goto loc_82D4E57C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D4E57C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4e590
	if (cr6.lt) goto loc_82D4E590;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d4e594
	goto loc_82D4E594;
loc_82D4E590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4E594:
	// bl 0x82d12cc0
	ctx.lr = 0x82D4E598;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D4E5B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E5BC"))) PPC_WEAK_FUNC(sub_82D4E5BC);
PPC_FUNC_IMPL(__imp__sub_82D4E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4E5C0"))) PPC_WEAK_FUNC(sub_82D4E5C0);
PPC_FUNC_IMPL(__imp__sub_82D4E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D4E5C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// addi r10,r11,940
	ctx.r10.s64 = ctx.r11.s64 + 940;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x82596f90
	ctx.lr = 0x82D4E5E4;
	sub_82596F90(ctx, base);
	// lwz r9,136(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r30,r29,116
	ctx.r30.s64 = ctx.r29.s64 + 116;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82d4e608
	if (cr6.lt) goto loc_82D4E608;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D4E608;
	sub_825952B8(ctx, base);
loc_82D4E608:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4e63c
	if (cr6.lt) goto loc_82D4E63C;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D4E63C;
	sub_825952B8(ctx, base);
loc_82D4E63C:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x831032a0
	ctx.lr = 0x82D4E650;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E658"))) PPC_WEAK_FUNC(sub_82D4E658);
PPC_FUNC_IMPL(__imp__sub_82D4E658) {
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
	// bl 0x82d4e5c0
	ctx.lr = 0x82D4E678;
	sub_82D4E5C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4e690
	if (cr6.eq) goto loc_82D4E690;
	// bl 0x82416268
	ctx.lr = 0x82D4E68C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4E690:
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

__attribute__((alias("__imp__sub_82D4E6A8"))) PPC_WEAK_FUNC(sub_82D4E6A8);
PPC_FUNC_IMPL(__imp__sub_82D4E6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D4E6B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-701
	ctx.r29.s64 = ctx.r11.s64 + -701;
	// addi r4,r29,1445
	ctx.r4.s64 = ctx.r29.s64 + 1445;
	// bl 0x83103328
	ctx.lr = 0x82D4E6C8;
	sub_83103328(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,940
	ctx.r9.s64 = ctx.r10.s64 + 940;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// addi r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 88;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r27,r31,116
	ctx.r27.s64 = ctx.r31.s64 + 116;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// bl 0x82596fa8
	ctx.lr = 0x82D4E714;
	sub_82596FA8(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stb r30,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r30.u8);
	// stb r30,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r30.u8);
	// stb r30,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r30.u8);
	// stb r30,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r30.u8);
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82D4E73C;
	sub_83A7D958(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82D4E744;
	sub_83A7D958(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D4E758;
	sub_8259CC28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D4E768;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E774"))) PPC_WEAK_FUNC(sub_82D4E774);
PPC_FUNC_IMPL(__imp__sub_82D4E774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4E778"))) PPC_WEAK_FUNC(sub_82D4E778);
PPC_FUNC_IMPL(__imp__sub_82D4E778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4E780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-284
	ctx.r29.s64 = ctx.r11.s64 + -284;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D4E7A4;
	sub_8259CC28(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4e7b8
	if (cr6.lt) goto loc_82D4E7B8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82d4e7bc
	goto loc_82D4E7BC;
loc_82D4E7B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D4E7BC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4E7C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4e7c0
	if (!cr6.eq) goto loc_82D4E7C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82D4E7E4;
	sub_825A1EB8(ctx, base);
	// addi r4,r29,1040
	ctx.r4.s64 = ctx.r29.s64 + 1040;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82D4E7F4;
	sub_825A1EB8(ctx, base);
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82D4E804;
	sub_82B142A0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82D4E814;
	sub_825A1EB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E81C"))) PPC_WEAK_FUNC(sub_82D4E81C);
PPC_FUNC_IMPL(__imp__sub_82D4E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4E820"))) PPC_WEAK_FUNC(sub_82D4E820);
PPC_FUNC_IMPL(__imp__sub_82D4E820) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4e84c
	if (cr6.lt) goto loc_82D4E84C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D4E84C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D4E850:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d4e850
	if (!cr6.eq) goto loc_82D4E850;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82D4E874;
	sub_825A1EB8(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,760
	ctx.r4.s64 = ctx.r10.s64 + 760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82D4E888;
	sub_825A1EB8(ctx, base);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82D4E898;
	sub_82B142A0(ctx, base);
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

__attribute__((alias("__imp__sub_82D4E8B0"))) PPC_WEAK_FUNC(sub_82D4E8B0);
PPC_FUNC_IMPL(__imp__sub_82D4E8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D4E8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e8d8
	if (cr6.eq) goto loc_82D4E8D8;
	// bl 0x82d49a78
	ctx.lr = 0x82D4E8D4;
	sub_82D49A78(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_82D4E8D8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4e8ec
	if (cr6.eq) goto loc_82D4E8EC;
	// bl 0x82d49a78
	ctx.lr = 0x82D4E8E8;
	sub_82D49A78(ctx, base);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_82D4E8EC:
	// lbz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,-416
	ctx.r30.s64 = ctx.r11.s64 + -416;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4e914
	if (cr6.eq) goto loc_82D4E914;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// bl 0x82d12668
	ctx.lr = 0x82D4E908;
	sub_82D12668(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d12668
	ctx.lr = 0x82D4E910;
	sub_82D12668(ctx, base);
	// stb r29,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r29.u8);
loc_82D4E914:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4e93c
	if (cr6.eq) goto loc_82D4E93C;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d4e934
	if (cr6.lt) goto loc_82D4E934;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D4E934:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d12668
	ctx.lr = 0x82D4E93C;
	sub_82D12668(ctx, base);
loc_82D4E93C:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r4,r30,-254
	ctx.r4.s64 = ctx.r30.s64 + -254;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cc28
	ctx.lr = 0x82D4E94C;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-253
	ctx.r4.s64 = ctx.r30.s64 + -253;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x8259cc28
	ctx.lr = 0x82D4E95C;
	sub_8259CC28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4E964"))) PPC_WEAK_FUNC(sub_82D4E964);
PPC_FUNC_IMPL(__imp__sub_82D4E964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4E968"))) PPC_WEAK_FUNC(sub_82D4E968);
PPC_FUNC_IMPL(__imp__sub_82D4E968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D4E970;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// blt cr6,0x82d4e98c
	if (cr6.lt) goto loc_82D4E98C;
	// stw r27,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r27.u32);
loc_82D4E98C:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r29,r10,-416
	ctx.r29.s64 = ctx.r10.s64 + -416;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82d4ebb0
	if (cr6.gt) goto loc_82D4EBB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d4ea20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EA20;
	// bdzf 4*cr6+eq,0x82d4ea20
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EA20;
	// bdzf 4*cr6+eq,0x82d4ebb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EBB0;
	// bdzf 4*cr6+eq,0x82d4ea70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EA70;
	// bdzf 4*cr6+eq,0x82d4eab0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EAB0;
	// bdzf 4*cr6+eq,0x82d4eaf0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EAF0;
	// bdzf 4*cr6+eq,0x82d4eb30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EB30;
	// bne cr6,0x82d4eb70
	if (!cr6.eq) goto loc_82D4EB70;
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82D4E9DC;
	sub_837B0C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d4e820
	ctx.lr = 0x82D4E9EC;
	sub_82D4E820(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4E9F4;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82D4EA00;
	sub_837B0C10(ctx, base);
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4e778
	ctx.lr = 0x82D4EA14;
	sub_82D4E778(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4EA1C;
	sub_8387E8E0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EA20:
	// addi r4,r29,172
	ctx.r4.s64 = ctx.r29.s64 + 172;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82D4EA2C;
	sub_837B0C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x82d4e820
	ctx.lr = 0x82D4EA3C;
	sub_82D4E820(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4EA44;
	sub_8387E8E0(ctx, base);
	// addi r4,r29,172
	ctx.r4.s64 = ctx.r29.s64 + 172;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82D4EA50;
	sub_837B0C10(ctx, base);
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4e778
	ctx.lr = 0x82D4EA64;
	sub_82D4E778(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4EA6C;
	sub_8387E8E0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EA70:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,664
	ctx.r4.s64 = ctx.r29.s64 + 664;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4ea84
	if (cr6.eq) goto loc_82D4EA84;
	// addi r4,r29,200
	ctx.r4.s64 = ctx.r29.s64 + 200;
loc_82D4EA84:
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EA90;
	sub_8259D6C0(ctx, base);
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,1020
	ctx.r4.s64 = ctx.r29.s64 + 1020;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eaa4
	if (cr6.eq) goto loc_82D4EAA4;
	// addi r4,r29,540
	ctx.r4.s64 = ctx.r29.s64 + 540;
loc_82D4EAA4:
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EAAC;
	sub_8259D6C0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EAB0:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,736
	ctx.r4.s64 = ctx.r29.s64 + 736;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eac4
	if (cr6.eq) goto loc_82D4EAC4;
	// addi r4,r29,268
	ctx.r4.s64 = ctx.r29.s64 + 268;
loc_82D4EAC4:
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EAD0;
	sub_8259D6C0(ctx, base);
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,1048
	ctx.r4.s64 = ctx.r29.s64 + 1048;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eae4
	if (cr6.eq) goto loc_82D4EAE4;
	// addi r4,r29,564
	ctx.r4.s64 = ctx.r29.s64 + 564;
loc_82D4EAE4:
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EAEC;
	sub_8259D6C0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EAF0:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,808
	ctx.r4.s64 = ctx.r29.s64 + 808;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eb04
	if (cr6.eq) goto loc_82D4EB04;
	// addi r4,r29,336
	ctx.r4.s64 = ctx.r29.s64 + 336;
loc_82D4EB04:
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EB10;
	sub_8259D6C0(ctx, base);
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,1076
	ctx.r4.s64 = ctx.r29.s64 + 1076;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eb24
	if (cr6.eq) goto loc_82D4EB24;
	// addi r4,r29,588
	ctx.r4.s64 = ctx.r29.s64 + 588;
loc_82D4EB24:
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EB2C;
	sub_8259D6C0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EB30:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,880
	ctx.r4.s64 = ctx.r29.s64 + 880;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eb44
	if (cr6.eq) goto loc_82D4EB44;
	// addi r4,r29,404
	ctx.r4.s64 = ctx.r29.s64 + 404;
loc_82D4EB44:
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EB50;
	sub_8259D6C0(ctx, base);
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,1104
	ctx.r4.s64 = ctx.r29.s64 + 1104;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eb64
	if (cr6.eq) goto loc_82D4EB64;
	// addi r4,r29,612
	ctx.r4.s64 = ctx.r29.s64 + 612;
loc_82D4EB64:
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EB6C;
	sub_8259D6C0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EB70:
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,952
	ctx.r4.s64 = ctx.r29.s64 + 952;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eb84
	if (cr6.eq) goto loc_82D4EB84;
	// addi r4,r29,472
	ctx.r4.s64 = ctx.r29.s64 + 472;
loc_82D4EB84:
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EB90;
	sub_8259D6C0(ctx, base);
	// lbz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 192);
	// addi r4,r29,1132
	ctx.r4.s64 = ctx.r29.s64 + 1132;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d4eba4
	if (cr6.eq) goto loc_82D4EBA4;
	// addi r4,r29,636
	ctx.r4.s64 = ctx.r29.s64 + 636;
loc_82D4EBA4:
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x8259d6c0
	ctx.lr = 0x82D4EBAC;
	sub_8259D6C0(ctx, base);
	// b 0x82d4ebd4
	goto loc_82D4EBD4;
loc_82D4EBB0:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r31,r30,88
	ctx.r31.s64 = ctx.r30.s64 + 88;
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ebcc
	if (cr6.lt) goto loc_82D4EBCC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d4ebd0
	goto loc_82D4EBD0;
loc_82D4EBCC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D4EBD0:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
loc_82D4EBD4:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ec48
	if (cr6.eq) goto loc_82D4EC48;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ebf4
	if (cr6.lt) goto loc_82D4EBF4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d4ebf8
	goto loc_82D4EBF8;
loc_82D4EBF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4EBF8:
	// bl 0x83104018
	ctx.lr = 0x82D4EBFC;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4ec28
	if (!cr6.eq) goto loc_82D4EC28;
	// stw r27,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r27.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// blt cr6,0x82d4ec20
	if (cr6.lt) goto loc_82D4EC20;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82D4EC20:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// b 0x82d4ec48
	goto loc_82D4EC48;
loc_82D4EC28:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d4ec3c
	if (cr6.lt) goto loc_82D4EC3C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82d4ec40
	goto loc_82D4EC40;
loc_82D4EC3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4EC40:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82D4EC48;
	sub_82D12640(ctx, base);
loc_82D4EC48:
	// addi r3,r29,-64
	ctx.r3.s64 = ctx.r29.s64 + -64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82D4EC54;
	sub_82D12640(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82D4EC60;
	sub_82D12640(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,196(r30)
	PPC_STORE_U8(ctx.r30.u32 + 196, ctx.r27.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4EC70"))) PPC_WEAK_FUNC(sub_82D4EC70);
PPC_FUNC_IMPL(__imp__sub_82D4EC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4EC78;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-344
	ctx.r30.s64 = ctx.r11.s64 + -344;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// bl 0x83815a48
	ctx.lr = 0x82D4EC90;
	sub_83815A48(ctx, base);
	// bl 0x82d4b8e0
	ctx.lr = 0x82D4EC94;
	sub_82D4B8E0(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8337f1e0
	ctx.lr = 0x82D4ECA0;
	sub_8337F1E0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r30,1124
	ctx.r4.s64 = ctx.r30.s64 + 1124;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4ECBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x82d4ed7c
	if (cr6.eq) goto loc_82D4ED7C;
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d4ed7c
	if (!cr6.eq) goto loc_82D4ED7C;
	// addi r3,r30,-88
	ctx.r3.s64 = ctx.r30.s64 + -88;
	// bl 0x83815a48
	ctx.lr = 0x82D4ECE0;
	sub_83815A48(ctx, base);
	// bl 0x82d4b8e0
	ctx.lr = 0x82D4ECE4;
	sub_82D4B8E0(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8337f1e0
	ctx.lr = 0x82D4ECF0;
	sub_8337F1E0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d2ec40
	ctx.lr = 0x82D4ECF8;
	sub_82D2EC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4ed18
	if (cr6.eq) goto loc_82D4ED18;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d2ec40
	ctx.lr = 0x82D4ED08;
	sub_82D2EC40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8337f1e0
	ctx.lr = 0x82D4ED10;
	sub_8337F1E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4df80
	ctx.lr = 0x82D4ED18;
	sub_82D4DF80(ctx, base);
loc_82D4ED18:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d2ec40
	ctx.lr = 0x82D4ED20;
	sub_82D2EC40(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,1136
	ctx.r4.s64 = ctx.r30.s64 + 1136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4ED38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4ed80
	if (cr6.eq) goto loc_82D4ED80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82D4ED4C;
	sub_82D30530(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2fc70
	ctx.lr = 0x82D4ED58;
	sub_82D2FC70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2fc70
	ctx.lr = 0x82D4ED64;
	sub_82D2FC70(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,315
	ctx.r4.u64 = ctx.r4.u64 | 315;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d30340
	ctx.lr = 0x82D4ED78;
	sub_82D30340(ctx, base);
	// b 0x82d4ed80
	goto loc_82D4ED80;
loc_82D4ED7C:
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
loc_82D4ED80:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ee0c
	if (cr6.eq) goto loc_82D4EE0C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4EDA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4ee0c
	if (cr6.eq) goto loc_82D4EE0C;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cb28
	ctx.lr = 0x82D4EDD8;
	sub_8259CB28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d4edec
	if (!cr6.lt) goto loc_82D4EDEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82D4EDEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4EE04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D4EE0C;
	sub_8387E8E0(ctx, base);
loc_82D4EE0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4EE14"))) PPC_WEAK_FUNC(sub_82D4EE14);
PPC_FUNC_IMPL(__imp__sub_82D4EE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4EE18"))) PPC_WEAK_FUNC(sub_82D4EE18);
PPC_FUNC_IMPL(__imp__sub_82D4EE18) {
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
	// lbz r11,193(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 193);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82d4ef5c
	if (cr6.gt) goto loc_82D4EF5C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d4eeac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EEAC;
	// bdzf 4*cr6+eq,0x82d4eef4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D4EEF4;
	// bne cr6,0x82d4ef00
	if (!cr6.eq) goto loc_82D4EF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4e4c0
	ctx.lr = 0x82D4EE5C;
	sub_82D4E4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ef5c
	if (cr6.eq) goto loc_82D4EF5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4ec70
	ctx.lr = 0x82D4EE70;
	sub_82D4EC70(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d4ee98
	if (!cr6.eq) goto loc_82D4EE98;
loc_82D4EE7C:
	// bl 0x83a7d958
	ctx.lr = 0x82D4EE80;
	sub_83A7D958(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82D4EE88;
	sub_83A7D958(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stb r11,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r11.u8);
	// b 0x82d4ef5c
	goto loc_82D4EF5C;
loc_82D4EE98:
	// bl 0x837d59a0
	ctx.lr = 0x82D4EE9C;
	sub_837D59A0(ctx, base);
	// bl 0x837d61d0
	ctx.lr = 0x82D4EEA0;
	sub_837D61D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r11.u8);
	// b 0x82d4ef5c
	goto loc_82D4EF5C;
loc_82D4EEAC:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d4ee7c
	if (cr6.eq) goto loc_82D4EE7C;
	// bl 0x837d59a0
	ctx.lr = 0x82D4EEBC;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5c78
	ctx.lr = 0x82D4EEC4;
	sub_837D5C78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ef5c
	if (cr6.eq) goto loc_82D4EF5C;
	// bl 0x83a7d958
	ctx.lr = 0x82D4EED4;
	sub_83A7D958(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82D4EEDC;
	sub_83A7D958(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stb r11,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r11.u8);
	// stb r10,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r10.u8);
	// b 0x82d4ef5c
	goto loc_82D4EF5C;
loc_82D4EEF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4e3c8
	ctx.lr = 0x82D4EEFC;
	sub_82D4E3C8(ctx, base);
	// b 0x82d4ef5c
	goto loc_82D4EF5C;
loc_82D4EF00:
	// bl 0x837d59a0
	ctx.lr = 0x82D4EF04;
	sub_837D59A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x837d5cf8
	ctx.lr = 0x82D4EF0C;
	sub_837D5CF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82d4ef5c
	if (cr6.eq) goto loc_82D4EF5C;
	// bl 0x82d16ed0
	ctx.lr = 0x82D4EF18;
	sub_82D16ED0(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82d17018
	ctx.lr = 0x82D4EF2C;
	sub_82D17018(ctx, base);
	// lbz r11,195(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 195);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4ef48
	if (cr6.eq) goto loc_82D4EF48;
	// bl 0x837d59a0
	ctx.lr = 0x82D4EF40;
	sub_837D59A0(ctx, base);
	// bl 0x837d61d0
	ctx.lr = 0x82D4EF44;
	sub_837D61D0(ctx, base);
	// stb r30,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r30.u8);
loc_82D4EF48:
	// bl 0x82d60d70
	ctx.lr = 0x82D4EF4C;
	sub_82D60D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4e8b0
	ctx.lr = 0x82D4EF54;
	sub_82D4E8B0(ctx, base);
	// stb r30,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r30.u8);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
loc_82D4EF5C:
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

__attribute__((alias("__imp__sub_82D4EF74"))) PPC_WEAK_FUNC(sub_82D4EF74);
PPC_FUNC_IMPL(__imp__sub_82D4EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4EF78"))) PPC_WEAK_FUNC(sub_82D4EF78);
PPC_FUNC_IMPL(__imp__sub_82D4EF78) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4efb0
	if (cr6.eq) goto loc_82D4EFB0;
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
loc_82D4EFB0:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D4EFC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4efdc
	if (cr6.eq) goto loc_82D4EFDC;
	// bl 0x82d4e6a8
	ctx.lr = 0x82D4EFD4;
	sub_82D4E6A8(ctx, base);
	// stw r3,-4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4168, ctx.r3.u32);
	// b 0x82d4efe4
	goto loc_82D4EFE4;
loc_82D4EFDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4168, ctx.r11.u32);
loc_82D4EFE4:
	// bl 0x831021a0
	ctx.lr = 0x82D4EFE8;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x82D4EFF0;
	sub_82DA45F8(ctx, base);
	// lwz r4,-4168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// bl 0x83103100
	ctx.lr = 0x82D4EFF8;
	sub_83103100(ctx, base);
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

__attribute__((alias("__imp__sub_82D4F010"))) PPC_WEAK_FUNC(sub_82D4F010);
PPC_FUNC_IMPL(__imp__sub_82D4F010) {
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
	// bl 0x82d4e8b0
	ctx.lr = 0x82D4F020;
	sub_82D4E8B0(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-4168(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4168, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4F040"))) PPC_WEAK_FUNC(sub_82D4F040);
PPC_FUNC_IMPL(__imp__sub_82D4F040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4F048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4f0d0
	if (cr6.eq) goto loc_82D4F0D0;
	// lbz r10,193(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82d4f07c
	if (cr6.lt) goto loc_82D4F07C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// ble cr6,0x82d4f0d0
	if (!cr6.gt) goto loc_82D4F0D0;
loc_82D4F07C:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82d4f09c
	if (!cr6.eq) goto loc_82D4F09C;
	// bl 0x837d59a0
	ctx.lr = 0x82D4F088;
	sub_837D59A0(ctx, base);
	// bl 0x837d61d0
	ctx.lr = 0x82D4F08C;
	sub_837D61D0(ctx, base);
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 193, ctx.r10.u8);
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
loc_82D4F09C:
	// stw r30,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,193(r11)
	PPC_STORE_U8(ctx.r11.u32 + 193, ctx.r10.u8);
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// stb r9,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r9.u8);
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// stb r29,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r29.u8);
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// stw r28,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r28.u32);
	// lwz r3,-4168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// bl 0x82d4e968
	ctx.lr = 0x82D4F0D0;
	sub_82D4E968(ctx, base);
loc_82D4F0D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4F0D8"))) PPC_WEAK_FUNC(sub_82D4F0D8);
PPC_FUNC_IMPL(__imp__sub_82D4F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4F0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,-4168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f130
	if (cr6.eq) goto loc_82D4F130;
	// bl 0x82d4e218
	ctx.lr = 0x82D4F104;
	sub_82D4E218(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4f120
	if (cr6.eq) goto loc_82D4F120;
	// lwz r11,-4168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4168);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 184, ctx.r10.u8);
	// bl 0x82d610a8
	ctx.lr = 0x82D4F120;
	sub_82D610A8(ctx, base);
loc_82D4F120:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d4f040
	ctx.lr = 0x82D4F130;
	sub_82D4F040(ctx, base);
loc_82D4F130:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4F138"))) PPC_WEAK_FUNC(sub_82D4F138);
PPC_FUNC_IMPL(__imp__sub_82D4F138) {
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
	// lbz r11,322(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 322);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4f164
	if (!cr6.eq) goto loc_82D4F164;
	// bl 0x82d19a68
	ctx.lr = 0x82D4F154;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f164
	if (cr6.eq) goto loc_82D4F164;
	// bl 0x82d2b0f8
	ctx.lr = 0x82D4F160;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82D4F164;
	sub_82D39100(ctx, base);
loc_82D4F164:
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

__attribute__((alias("__imp__sub_82D4F178"))) PPC_WEAK_FUNC(sub_82D4F178);
PPC_FUNC_IMPL(__imp__sub_82D4F178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4F180;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,323(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 323);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4f294
	if (!cr6.eq) goto loc_82D4F294;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8353b168
	ctx.lr = 0x82D4F1AC;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f258
	if (cr6.eq) goto loc_82D4F258;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4F1CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d4f244
	if (!cr6.eq) goto loc_82D4F244;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4F1F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d4f244
	if (!cr6.eq) goto loc_82D4F244;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4F214;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d4f244
	if (!cr6.eq) goto loc_82D4F244;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4F238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d4f254
	if (cr6.eq) goto loc_82D4F254;
loc_82D4F244:
	// lbz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 324);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4f258
	if (!cr6.eq) goto loc_82D4F258;
	// stb r28,324(r30)
	PPC_STORE_U8(ctx.r30.u32 + 324, ctx.r28.u8);
loc_82D4F254:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D4F258:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d4f294
	if (!cr6.eq) goto loc_82D4F294;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,21
	ctx.r8.u64 = ctx.r10.u64 | 21;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103068
	ctx.lr = 0x82D4F290;
	sub_83103068(ctx, base);
	// stb r28,323(r30)
	PPC_STORE_U8(ctx.r30.u32 + 323, ctx.r28.u8);
loc_82D4F294:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4F2A0"))) PPC_WEAK_FUNC(sub_82D4F2A0);
PPC_FUNC_IMPL(__imp__sub_82D4F2A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,323(r3)
	PPC_STORE_U8(ctx.r3.u32 + 323, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D4F2AC"))) PPC_WEAK_FUNC(sub_82D4F2AC);
PPC_FUNC_IMPL(__imp__sub_82D4F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4F2B0"))) PPC_WEAK_FUNC(sub_82D4F2B0);
PPC_FUNC_IMPL(__imp__sub_82D4F2B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r10,-28348
	ctx.r9.s64 = ctx.r10.s64 + -28348;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// bl 0x82d19b10
	ctx.lr = 0x82D4F2E8;
	sub_82D19B10(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d4f31c
	if (!cr6.eq) goto loc_82D4F31C;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82D4F304;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,33
	ctx.r5.s64 = 2162688;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82d4f334
	goto loc_82D4F334;
loc_82D4F31C:
	// bl 0x82d198e0
	ctx.lr = 0x82D4F320;
	sub_82D198E0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,1018
	ctx.r5.s64 = ctx.r11.s64 + 1018;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D4F334:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82D4F340;
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

__attribute__((alias("__imp__sub_82D4F358"))) PPC_WEAK_FUNC(sub_82D4F358);
PPC_FUNC_IMPL(__imp__sub_82D4F358) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82D4F370;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f394
	if (cr6.eq) goto loc_82D4F394;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,1780
	ctx.r4.s64 = ctx.r10.s64 + 1780;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4F394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82D4F394:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4f3a8
	if (cr6.eq) goto loc_82D4F3A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82D4F3A8:
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

__attribute__((alias("__imp__sub_82D4F3BC"))) PPC_WEAK_FUNC(sub_82D4F3BC);
PPC_FUNC_IMPL(__imp__sub_82D4F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4F3C0"))) PPC_WEAK_FUNC(sub_82D4F3C0);
PPC_FUNC_IMPL(__imp__sub_82D4F3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D4F3C8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce774
	ctx.lr = 0x82D4F3D0;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,-28348
	ctx.r27.s64 = ctx.r11.s64 + -28348;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82D4F3FC:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d19b10
	ctx.lr = 0x82D4F410;
	sub_82D19B10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d4f440
	if (cr6.eq) goto loc_82D4F440;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82d4f3fc
	if (cr6.lt) goto loc_82D4F3FC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7c0
	ctx.lr = 0x82D4F43C;
	__restfpr_27(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D4F440:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4f604
	if (cr6.eq) goto loc_82D4F604;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82D4F45C;
	sub_82D19A88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f604
	if (cr6.eq) goto loc_82D4F604;
	// bl 0x82d33c10
	ctx.lr = 0x82D4F468;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, xer);
	// ble cr6,0x82d4f604
	if (!cr6.gt) goto loc_82D4F604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82D4F478;
	sub_82D19A10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f604
	if (cr6.eq) goto loc_82D4F604;
	// lbz r7,3(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 3);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r4,1(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// lbz r3,2(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 2);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f28,f5,f0
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f30,f3,f0
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f27,f2,f0
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bne cr6,0x82d4f598
	if (!cr6.eq) goto loc_82D4F598;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82D4F510;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f528
	if (cr6.eq) goto loc_82D4F528;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,1808
	ctx.r4.s64 = ctx.r11.s64 + 1808;
	// bl 0x83815d38
	ctx.lr = 0x82D4F524;
	sub_83815D38(ctx, base);
	// b 0x82d4f52c
	goto loc_82D4F52C;
loc_82D4F528:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82D4F52C:
	// stw r3,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83815b28
	ctx.lr = 0x82D4F538;
	sub_83815B28(ctx, base);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815b28
	ctx.lr = 0x82D4F548;
	sub_83815B28(ctx, base);
	// stw r3,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82D4F560;
	sub_83815B68(ctx, base);
	// stw r3,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r3.u32);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82D4F570;
	sub_83815B68(ctx, base);
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82D4F580;
	sub_83815B68(ctx, base);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// lfs f1,21588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82D4F594;
	sub_83815B68(ctx, base);
	// stw r3,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
loc_82D4F598:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815bc8
	ctx.lr = 0x82D4F5A8;
	sub_83815BC8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815bc8
	ctx.lr = 0x82D4F5B8;
	sub_83815BC8(ctx, base);
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815be8
	ctx.lr = 0x82D4F5C8;
	sub_83815BE8(ctx, base);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815be8
	ctx.lr = 0x82D4F5D8;
	sub_83815BE8(ctx, base);
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815be8
	ctx.lr = 0x82D4F5E8;
	sub_83815BE8(ctx, base);
	// lwz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83815be8
	ctx.lr = 0x82D4F5F8;
	sub_83815BE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x838153c8
	ctx.lr = 0x82D4F604;
	sub_838153C8(ctx, base);
loc_82D4F604:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7c0
	ctx.lr = 0x82D4F610;
	__restfpr_27(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4F614"))) PPC_WEAK_FUNC(sub_82D4F614);
PPC_FUNC_IMPL(__imp__sub_82D4F614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4F618"))) PPC_WEAK_FUNC(sub_82D4F618);
PPC_FUNC_IMPL(__imp__sub_82D4F618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D4F620;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82D4F62C;
	sub_82D19BA0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82D4F638;
	sub_82D19BB0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,-28348
	ctx.r30.s64 = ctx.r11.s64 + -28348;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82D4F650:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d19b10
	ctx.lr = 0x82D4F664;
	sub_82D19B10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x82d4f690
	if (cr6.eq) goto loc_82D4F690;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// blt cr6,0x82d4f650
	if (cr6.lt) goto loc_82D4F650;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D4F690:
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// blt cr6,0x82d4f6a4
	if (cr6.lt) goto loc_82D4F6A4;
loc_82D4F698:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82D4F6A4:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, xer);
	// ble cr6,0x82d4f698
	if (!cr6.gt) goto loc_82D4F698;
	// addi r11,r29,27
	ctx.r11.s64 = ctx.r29.s64 + 27;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4F6D4"))) PPC_WEAK_FUNC(sub_82D4F6D4);
PPC_FUNC_IMPL(__imp__sub_82D4F6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4F6D8"))) PPC_WEAK_FUNC(sub_82D4F6D8);
PPC_FUNC_IMPL(__imp__sub_82D4F6D8) {
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
	// bl 0x82d4f618
	ctx.lr = 0x82D4F6F0;
	sub_82D4F618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4f6fc
	if (!cr6.eq) goto loc_82D4F6FC;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
loc_82D4F6FC:
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

__attribute__((alias("__imp__sub_82D4F710"))) PPC_WEAK_FUNC(sub_82D4F710);
PPC_FUNC_IMPL(__imp__sub_82D4F710) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// lbz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4f788
	if (cr6.eq) goto loc_82D4F788;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r10,1592
	ctx.r9.s64 = ctx.r10.s64 + 1592;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82d4f788
	if (!cr6.eq) goto loc_82D4F788;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,-28348(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28348);
	// bl 0x82d19b10
	ctx.lr = 0x82D4F774;
	sub_82D19B10(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4f3c0
	ctx.lr = 0x82D4F788;
	sub_82D4F3C0(ctx, base);
loc_82D4F788:
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

__attribute__((alias("__imp__sub_82D4F7A0"))) PPC_WEAK_FUNC(sub_82D4F7A0);
PPC_FUNC_IMPL(__imp__sub_82D4F7A0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// lbz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d4f820
	if (cr6.eq) goto loc_82D4F820;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1592
	ctx.r11.s64 = ctx.r11.s64 + 1592;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82d4f820
	if (!cr6.eq) goto loc_82D4F820;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-28348
	ctx.r9.s64 = ctx.r10.s64 + -28348;
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x82d19b10
	ctx.lr = 0x82D4F80C;
	sub_82D19B10(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4f3c0
	ctx.lr = 0x82D4F820;
	sub_82D4F3C0(ctx, base);
loc_82D4F820:
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

__attribute__((alias("__imp__sub_82D4F838"))) PPC_WEAK_FUNC(sub_82D4F838);
PPC_FUNC_IMPL(__imp__sub_82D4F838) {
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
	// lbz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4f8f4
	if (cr6.eq) goto loc_82D4F8F4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r11,r11,1592
	ctx.r11.s64 = ctx.r11.s64 + 1592;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82d4f8f4
	if (!cr6.eq) goto loc_82D4F8F4;
	// bl 0x82d19a78
	ctx.lr = 0x82D4F884;
	sub_82D19A78(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r10,r11,-28348
	ctx.r10.s64 = ctx.r11.s64 + -28348;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82d2f098
	ctx.lr = 0x82D4F894;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f8f4
	if (cr6.eq) goto loc_82D4F8F4;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82d4f8b8
	if (!cr6.eq) goto loc_82D4F8B8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,1832
	ctx.r11.s64 = ctx.r11.s64 + 1832;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x82d4f8c8
	goto loc_82D4F8C8;
loc_82D4F8B8:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82d4f8f4
	if (!cr6.eq) goto loc_82D4F8F4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,1832
	ctx.r4.s64 = ctx.r11.s64 + 1832;
loc_82D4F8C8:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D4F8DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4f8f4
	if (cr6.eq) goto loc_82D4F8F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82D4F8F4;
	sub_82D291E0(ctx, base);
loc_82D4F8F4:
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

__attribute__((alias("__imp__sub_82D4F90C"))) PPC_WEAK_FUNC(sub_82D4F90C);
PPC_FUNC_IMPL(__imp__sub_82D4F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4F910"))) PPC_WEAK_FUNC(sub_82D4F910);
PPC_FUNC_IMPL(__imp__sub_82D4F910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4F918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r8,r11,1944
	ctx.r8.s64 = ctx.r11.s64 + 1944;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// beq cr6,0x82d4f9c0
	if (cr6.eq) goto loc_82D4F9C0;
	// addi r31,r3,296
	ctx.r31.s64 = ctx.r3.s64 + 296;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82D4F950:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d4f968
	if (cr6.eq) goto loc_82D4F968;
	// lwz r3,292(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// bl 0x83815c28
	ctx.lr = 0x82D4F964;
	sub_83815C28(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82D4F968:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82d4f950
	if (!cr0.eq) goto loc_82D4F950;
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4f9bc
	if (cr6.eq) goto loc_82D4F9BC;
	// li r11,27
	ctx.r11.s64 = 27;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D4F994;
	sub_82595150(ctx, base);
	// lwz r31,292(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82d4f9b0
	if (cr6.eq) goto loc_82D4F9B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83815cb8
	ctx.lr = 0x82D4F9A8;
	sub_83815CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82D4F9B0;
	sub_82416268(ctx, base);
loc_82D4F9B0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D4F9B8;
	sub_82595170(ctx, base);
	// stw r28,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r28.u32);
loc_82D4F9BC:
	// stw r28,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r28.u32);
loc_82D4F9C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d25548
	ctx.lr = 0x82D4F9C8;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4F9D0"))) PPC_WEAK_FUNC(sub_82D4F9D0);
PPC_FUNC_IMPL(__imp__sub_82D4F9D0) {
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
	// bl 0x82d19868
	ctx.lr = 0x82D4F9E8;
	sub_82D19868(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d4fa1c
	if (!cr6.eq) goto loc_82D4FA1C;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4fa1c
	if (cr6.eq) goto loc_82D4FA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4f618
	ctx.lr = 0x82D4FA04;
	sub_82D4F618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4fa14
	if (!cr6.eq) goto loc_82D4FA14;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
loc_82D4FA14:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d3bc50
	ctx.lr = 0x82D4FA1C;
	sub_82D3BC50(ctx, base);
loc_82D4FA1C:
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

__attribute__((alias("__imp__sub_82D4FA34"))) PPC_WEAK_FUNC(sub_82D4FA34);
PPC_FUNC_IMPL(__imp__sub_82D4FA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4FA38"))) PPC_WEAK_FUNC(sub_82D4FA38);
PPC_FUNC_IMPL(__imp__sub_82D4FA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D4FA40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82D4FA4C;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fb7c
	if (cr6.eq) goto loc_82D4FB7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D4FA60;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fb7c
	if (cr6.eq) goto loc_82D4FB7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82D4FA70;
	sub_82D19BA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r10,-28348
	ctx.r9.s64 = ctx.r10.s64 + -28348;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// bl 0x82d19b10
	ctx.lr = 0x82D4FA94;
	sub_82D19B10(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bne cr6,0x82d4fb7c
	if (!cr6.eq) goto loc_82D4FB7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4f618
	ctx.lr = 0x82D4FAA8;
	sub_82D4F618(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d4fab8
	if (!cr6.eq) goto loc_82D4FAB8;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
loc_82D4FAB8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r30,321(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 321);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x82d4fad4
	if (!cr6.eq) goto loc_82D4FAD4;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
loc_82D4FAD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9b8
	ctx.lr = 0x82D4FADC;
	sub_82D1A9B8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,284(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lbz r6,322(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 322);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d61808
	ctx.lr = 0x82D4FAFC;
	sub_82D61808(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fb7c
	if (cr6.eq) goto loc_82D4FB7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82D4FB14;
	sub_83103100(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,1752
	ctx.r30.s64 = ctx.r11.s64 + 1752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4FB38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82D4FB40;
	sub_82D19BB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82D4FB50;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fb7c
	if (cr6.eq) goto loc_82D4FB7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D4FB70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82D4FB7C;
	sub_82D17DA0(ctx, base);
loc_82D4FB7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4FB84"))) PPC_WEAK_FUNC(sub_82D4FB84);
PPC_FUNC_IMPL(__imp__sub_82D4FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4FB88"))) PPC_WEAK_FUNC(sub_82D4FB88);
PPC_FUNC_IMPL(__imp__sub_82D4FB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D4FB90;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,264
	ctx.r11.s64 = 17301504;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82d4fc78
	if (cr0.eq) goto loc_82D4FC78;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bne cr6,0x82d4fca0
	if (!cr6.eq) goto loc_82D4FCA0;
	// bl 0x82d19a78
	ctx.lr = 0x82D4FBC0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fca0
	if (cr6.eq) goto loc_82D4FCA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82D4FBD0;
	sub_82D19BA0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-28348
	ctx.r10.s64 = ctx.r11.s64 + -28348;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x82d19b10
	ctx.lr = 0x82D4FBF4;
	sub_82D19B10(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d4fca0
	if (!cr6.eq) goto loc_82D4FCA0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d61510
	ctx.lr = 0x82D4FC08;
	sub_82D61510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4f618
	ctx.lr = 0x82D4FC14;
	sub_82D4F618(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fc24
	if (cr6.eq) goto loc_82D4FC24;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82D4FC24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82D4FC2C;
	sub_82D19BB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d4f3c0
	ctx.lr = 0x82D4FC40;
	sub_82D4F3C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// ori r8,r10,22
	ctx.r8.u64 = ctx.r10.u64 | 22;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82D4FC6C;
	sub_83103068(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D4FC78:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82D4FCA0;
	sub_83103068(ctx, base);
loc_82D4FCA0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4FCAC"))) PPC_WEAK_FUNC(sub_82D4FCAC);
PPC_FUNC_IMPL(__imp__sub_82D4FCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4FCB0"))) PPC_WEAK_FUNC(sub_82D4FCB0);
PPC_FUNC_IMPL(__imp__sub_82D4FCB0) {
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
	// bl 0x82d4f910
	ctx.lr = 0x82D4FCD0;
	sub_82D4F910(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d4fce8
	if (cr6.eq) goto loc_82D4FCE8;
	// bl 0x82416268
	ctx.lr = 0x82D4FCE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D4FCE8:
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

__attribute__((alias("__imp__sub_82D4FD00"))) PPC_WEAK_FUNC(sub_82D4FD00);
PPC_FUNC_IMPL(__imp__sub_82D4FD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82D4FD08;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r11,1572
	ctx.r4.s64 = ctx.r11.s64 + 1572;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82D4FD40;
	sub_82D253F8(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r27,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r23,263(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// addi r8,r10,1944
	ctx.r8.s64 = ctx.r10.s64 + 1944;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r6,-31775
	ctx.r6.s64 = -2082406400;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// addi r24,r11,-28360
	ctx.r24.s64 = ctx.r11.s64 + -28360;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r26,r31,208
	ctx.r26.s64 = ctx.r31.s64 + 208;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// addi r25,r31,212
	ctx.r25.s64 = ctx.r31.s64 + 212;
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// lwz r4,-28360(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28360);
	// stb r30,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r30.u8);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stb r30,323(r31)
	PPC_STORE_U8(ctx.r31.u32 + 323, ctx.r30.u8);
	// stb r30,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r30.u8);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// stw r28,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r28.u32);
	// stb r22,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r22.u8);
	// stb r21,321(r31)
	PPC_STORE_U8(ctx.r31.u32 + 321, ctx.r21.u8);
	// stb r23,322(r31)
	PPC_STORE_U8(ctx.r31.u32 + 322, ctx.r23.u8);
	// lwz r11,-28204(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -28204);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r11,-28256(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -28256);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82D4FE10;
	sub_82D20AE0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D4FE24:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d4fe24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D4FE24;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fe50
	if (cr6.eq) goto loc_82D4FE50;
	// bl 0x82d5ee78
	ctx.lr = 0x82D4FE3C;
	sub_82D5EE78(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x83767d28
	ctx.lr = 0x82D4FE48;
	sub_83767D28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82D4FE50:
	// bl 0x83744b10
	ctx.lr = 0x82D4FE54;
	sub_83744B10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fe88
	if (cr6.eq) goto loc_82D4FE88;
	// addi r28,r31,132
	ctx.r28.s64 = ctx.r31.s64 + 132;
loc_82D4FE68:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83744b48
	ctx.lr = 0x82D4FE78;
	sub_83744B48(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x82d4fe68
	if (cr6.lt) goto loc_82D4FE68;
loc_82D4FE88:
	// bl 0x82aabcb0
	ctx.lr = 0x82D4FE8C;
	sub_82AABCB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4febc
	if (cr6.eq) goto loc_82D4FEBC;
	// addi r28,r31,108
	ctx.r28.s64 = ctx.r31.s64 + 108;
loc_82D4FEA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83744be0
	ctx.lr = 0x82D4FEAC;
	sub_83744BE0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x82d4fea0
	if (cr6.lt) goto loc_82D4FEA0;
loc_82D4FEBC:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8373f888
	ctx.lr = 0x82D4FEC4;
	sub_8373F888(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d4fef4
	if (cr6.eq) goto loc_82D4FEF4;
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
loc_82D4FED4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8373f8f0
	ctx.lr = 0x82D4FEE4;
	sub_8373F8F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82d4fed4
	if (cr6.lt) goto loc_82D4FED4;
loc_82D4FEF4:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 + 108;
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lis r7,-31775
	ctx.r7.s64 = -2082406400;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// addi r6,r10,-27864
	ctx.r6.s64 = ctx.r10.s64 + -27864;
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// lis r4,-31775
	ctx.r4.s64 = -2082406400;
	// stw r6,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// addi r3,r7,-28152
	ctx.r3.s64 = ctx.r7.s64 + -28152;
	// stw r5,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r5.u32);
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// addi r9,r4,-27768
	ctx.r9.s64 = ctx.r4.s64 + -27768;
	// stw r25,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r25.u32);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// stw r9,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r9.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// addi r9,r31,176
	ctx.r9.s64 = ctx.r31.s64 + 176;
	// stw r8,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r10,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// stw r7,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r7.u32);
	// stw r9,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r9.u32);
	// stw r6,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r6.u32);
	// lbz r5,320(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 320);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d4ff88
	if (cr6.eq) goto loc_82D4FF88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82D4FF88;
	sub_82D191F8(ctx, base);
loc_82D4FF88:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82d4ffb0
	if (!cr6.eq) goto loc_82D4FFB0;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82D4FFA4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82D4FFB0:
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x82d23390
	ctx.lr = 0x82D4FFB8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D4FFC4"))) PPC_WEAK_FUNC(sub_82D4FFC4);
PPC_FUNC_IMPL(__imp__sub_82D4FFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D4FFC8"))) PPC_WEAK_FUNC(sub_82D4FFC8);
PPC_FUNC_IMPL(__imp__sub_82D4FFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D4FFD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,336
	ctx.r4.s64 = 336;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82D50000;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50038
	if (cr6.eq) goto loc_82D50038;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d4fd00
	ctx.lr = 0x82D50030;
	sub_82D4FD00(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D50038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D50044"))) PPC_WEAK_FUNC(sub_82D50044);
PPC_FUNC_IMPL(__imp__sub_82D50044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D50048"))) PPC_WEAK_FUNC(sub_82D50048);
PPC_FUNC_IMPL(__imp__sub_82D50048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82D50050;
	__savegprlr_17(ctx, base);
	// stwu r1,-1568(r1)
	ea = -1568 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82D5005C;
	sub_82D19A68(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50420
	if (cr6.eq) goto loc_82D50420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82D50070;
	sub_82D19A78(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50420
	if (cr6.eq) goto loc_82D50420;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r20,r11,1712
	ctx.r20.s64 = ctx.r11.s64 + 1712;
	// addi r4,r20,-56
	ctx.r4.s64 = ctx.r20.s64 + -56;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82D5009C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r7,r8,-28316
	ctx.r7.s64 = ctx.r8.s64 + -28316;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x82D500C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r25,r11,-28348
	ctx.r25.s64 = ctx.r11.s64 + -28348;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// addi r26,r29,220
	ctx.r26.s64 = ctx.r29.s64 + 220;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// li r18,255
	ctx.r18.s64 = 255;
	// addi r21,r11,1592
	ctx.r21.s64 = ctx.r11.s64 + 1592;
loc_82D500EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82d2f098
	ctx.lr = 0x82D500F8;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50230
	if (cr6.eq) goto loc_82D50230;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r21.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82d5020c
	if (!cr6.eq) goto loc_82D5020C;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82d19b10
	ctx.lr = 0x82D50130;
	sub_82D19B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82D50138;
	sub_82D33C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82D5014C;
	sub_82D1ED60(ctx, base);
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r28,-4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// ble cr6,0x82d50160
	if (!cr6.gt) goto loc_82D50160;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82D50160:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82d50230
	if (cr6.eq) goto loc_82D50230;
loc_82D5016C:
	// cmplwi cr6,r23,20
	cr6.compare<uint32_t>(ctx.r23.u32, 20, xer);
	// beq cr6,0x82d501cc
	if (cr6.eq) goto loc_82D501CC;
	// cmplwi cr6,r23,12
	cr6.compare<uint32_t>(ctx.r23.u32, 12, xer);
	// beq cr6,0x82d501cc
	if (cr6.eq) goto loc_82D501CC;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82d501cc
	if (cr6.eq) goto loc_82D501CC;
	// lbz r10,3(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d501cc
	if (!cr6.eq) goto loc_82D501CC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82D501A0;
	sub_82D19AA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d501cc
	if (cr6.eq) goto loc_82D501CC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82D501B8;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82D501CC;
	sub_82D2B608(ctx, base);
loc_82D501CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r10,321(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 321);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82d501e4
	if (!cr6.eq) goto loc_82D501E4;
	// stb r18,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r18.u8);
loc_82D501E4:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d4f3c0
	ctx.lr = 0x82D501F8;
	sub_82D4F3C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82d5016c
	if (cr6.lt) goto loc_82D5016C;
	// b 0x82d50230
	goto loc_82D50230;
loc_82D5020C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82D5021C;
	sub_82D2AEC8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82D50230;
	sub_82D2B608(ctx, base);
loc_82D50230:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplwi cr6,r23,32
	cr6.compare<uint32_t>(ctx.r23.u32, 32, xer);
	// blt cr6,0x82d500ec
	if (cr6.lt) goto loc_82D500EC;
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// addi r31,r24,100
	ctx.r31.s64 = ctx.r24.s64 + 100;
	// addi r4,r20,-28
	ctx.r4.s64 = ctx.r20.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D50264;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50278
	if (cr6.eq) goto loc_82D50278;
	// lis r4,41
	ctx.r4.s64 = 2686976;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82d29598
	ctx.lr = 0x82D50278;
	sub_82D29598(ctx, base);
loc_82D50278:
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lwz r11,328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r10,-28204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28204);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d502ac
	if (!cr6.eq) goto loc_82D502AC;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d502b0
	if (cr6.eq) goto loc_82D502B0;
loc_82D502AC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82D502B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d50358
	if (!cr6.eq) goto loc_82D50358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r20,-12
	ctx.r4.s64 = ctx.r20.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D502D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50404
	if (cr6.eq) goto loc_82D50404;
	// bl 0x831156e8
	ctx.lr = 0x82D502E4;
	sub_831156E8(ctx, base);
	// lwz r4,328(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82D502F0;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82D50300;
	sub_831CE980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30450
	ctx.lr = 0x82D5030C;
	sub_82D30450(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d5033c
	if (!cr6.eq) goto loc_82D5033C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x82d50338
	if (cr6.eq) goto loc_82D50338;
	// stb r27,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r27.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82D50338:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82D5033C:
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82D50348;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,328(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 328);
	// bl 0x82a990c8
	ctx.lr = 0x82D50354;
	sub_82A990C8(ctx, base);
	// b 0x82d503fc
	goto loc_82D503FC;
loc_82D50358:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r10,332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// addi r28,r29,332
	ctx.r28.s64 = ctx.r29.s64 + 332;
	// lwz r11,-28256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28256);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d50404
	if (cr6.eq) goto loc_82D50404;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D50388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50404
	if (cr6.eq) goto loc_82D50404;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d30450
	ctx.lr = 0x82D50398;
	sub_82D30450(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d503cc
	if (!cr6.eq) goto loc_82D503CC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82d503c4
	if (cr6.eq) goto loc_82D503C4;
	// stb r27,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r27.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82D503C4:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82D503CC:
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// li r30,7
	ctx.r30.s64 = 7;
	// bl 0x8315d6c8
	ctx.lr = 0x82D503E8;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// bl 0x82b3f950
	ctx.lr = 0x82D503FC;
	sub_82B3F950(ctx, base);
loc_82D503FC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D50404;
	sub_8387E8E0(ctx, base);
loc_82D50404:
	// lbz r11,322(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 322);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d5041c
	if (!cr6.eq) goto loc_82D5041C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82D50418;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82D5041C;
	sub_82D390C0(ctx, base);
loc_82D5041C:
	// stb r27,288(r29)
	PPC_STORE_U8(ctx.r29.u32 + 288, ctx.r27.u8);
loc_82D50420:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1568
	ctx.r1.s64 = ctx.r1.s64 + 1568;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D5042C"))) PPC_WEAK_FUNC(sub_82D5042C);
PPC_FUNC_IMPL(__imp__sub_82D5042C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D50430"))) PPC_WEAK_FUNC(sub_82D50430);
PPC_FUNC_IMPL(__imp__sub_82D50430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D5044C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// srawi r9,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 31;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D50464"))) PPC_WEAK_FUNC(sub_82D50464);
PPC_FUNC_IMPL(__imp__sub_82D50464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D50468"))) PPC_WEAK_FUNC(sub_82D50468);
PPC_FUNC_IMPL(__imp__sub_82D50468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2792
	ctx.r8.s64 = ctx.r11.s64 + 2792;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D5047C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x82d504d8
	if (cr6.eq) goto loc_82D504D8;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,156
	cr6.compare<uint32_t>(ctx.r10.u32, 156, xer);
	// blt cr6,0x82d5047c
	if (cr6.lt) goto loc_82D5047C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2992
	ctx.r8.s64 = ctx.r11.s64 + 2992;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82D504B0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x82d504d8
	if (cr6.eq) goto loc_82D504D8;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// blt cr6,0x82d504b0
	if (cr6.lt) goto loc_82D504B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D504D8:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D504F0"))) PPC_WEAK_FUNC(sub_82D504F0);
PPC_FUNC_IMPL(__imp__sub_82D504F0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d52328
	ctx.lr = 0x82D50510;
	sub_82D52328(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,3248
	ctx.r9.s64 = ctx.r11.s64 + 3248;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82D50568"))) PPC_WEAK_FUNC(sub_82D50568);
PPC_FUNC_IMPL(__imp__sub_82D50568) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3248
	ctx.r10.s64 = ctx.r11.s64 + 3248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82d52380
	ctx.lr = 0x82D50594;
	sub_82D52380(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d505ac
	if (cr6.eq) goto loc_82D505AC;
	// bl 0x82416268
	ctx.lr = 0x82D505A8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D505AC:
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

__attribute__((alias("__imp__sub_82D505C4"))) PPC_WEAK_FUNC(sub_82D505C4);
PPC_FUNC_IMPL(__imp__sub_82D505C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D505C8"))) PPC_WEAK_FUNC(sub_82D505C8);
PPC_FUNC_IMPL(__imp__sub_82D505C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r30,r3,148
	ctx.r30.s64 = ctx.r3.s64 + 148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d52238
	ctx.lr = 0x82D505EC;
	sub_82D52238(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d50634
	if (cr6.eq) goto loc_82D50634;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D5062C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d50668
	if (cr6.lt) goto loc_82D50668;
loc_82D50634:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lbz r10,-27720(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -27720);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d50664
	if (cr6.eq) goto loc_82D50664;
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lbz r5,165(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82d2b7a0
	ctx.lr = 0x82D50664;
	sub_82D2B7A0(ctx, base);
loc_82D50664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D50668:
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

__attribute__((alias("__imp__sub_82D50680"))) PPC_WEAK_FUNC(sub_82D50680);
PPC_FUNC_IMPL(__imp__sub_82D50680) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d506bc
	if (!cr6.eq) goto loc_82D506BC;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d506bc
	if (!cr6.eq) goto loc_82D506BC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82d5074c
	goto loc_82D5074C;
loc_82D506BC:
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d506d4
	if (cr6.eq) goto loc_82D506D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61cc8
	ctx.lr = 0x82D506D0;
	sub_82D61CC8(ctx, base);
	// b 0x82d506e0
	goto loc_82D506E0;
loc_82D506D4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d5ef90
	ctx.lr = 0x82D506E0;
	sub_82D5EF90(ctx, base);
loc_82D506E0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d5074c
	if (cr6.lt) goto loc_82D5074C;
	// lbz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 164);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d5071c
	if (cr6.eq) goto loc_82D5071C;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50714
	if (cr6.eq) goto loc_82D50714;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d61cc8
	ctx.lr = 0x82D50708;
	sub_82D61CC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82d50738
	if (!cr6.lt) goto loc_82D50738;
	// b 0x82d5074c
	goto loc_82D5074C;
loc_82D50714:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d50738
	if (!cr6.eq) goto loc_82D50738;
loc_82D5071C:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d50738
	if (cr6.eq) goto loc_82D50738;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d5ef90
	ctx.lr = 0x82D50730;
	sub_82D5EF90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82d5074c
	if (cr6.lt) goto loc_82D5074C;
loc_82D50738:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
loc_82D5074C:
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

__attribute__((alias("__imp__sub_82D50764"))) PPC_WEAK_FUNC(sub_82D50764);
PPC_FUNC_IMPL(__imp__sub_82D50764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

