#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_835CC17C"))) PPC_WEAK_FUNC(sub_835CC17C);
PPC_FUNC_IMPL(__imp__sub_835CC17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC180"))) PPC_WEAK_FUNC(sub_835CC180);
PPC_FUNC_IMPL(__imp__sub_835CC180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC194"))) PPC_WEAK_FUNC(sub_835CC194);
PPC_FUNC_IMPL(__imp__sub_835CC194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC198"))) PPC_WEAK_FUNC(sub_835CC198);
PPC_FUNC_IMPL(__imp__sub_835CC198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC1AC"))) PPC_WEAK_FUNC(sub_835CC1AC);
PPC_FUNC_IMPL(__imp__sub_835CC1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC1B0"))) PPC_WEAK_FUNC(sub_835CC1B0);
PPC_FUNC_IMPL(__imp__sub_835CC1B0) {
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
	// bl 0x83565260
	ctx.lr = 0x835CC1C8;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835cc1ec
	if (!cr6.eq) goto loc_835CC1EC;
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
loc_835CC1EC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CC200;
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

__attribute__((alias("__imp__sub_835CC214"))) PPC_WEAK_FUNC(sub_835CC214);
PPC_FUNC_IMPL(__imp__sub_835CC214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC218"))) PPC_WEAK_FUNC(sub_835CC218);
PPC_FUNC_IMPL(__imp__sub_835CC218) {
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
	// bl 0x83565260
	ctx.lr = 0x835CC230;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835cc254
	if (!cr6.eq) goto loc_835CC254;
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
loc_835CC254:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CC268;
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

__attribute__((alias("__imp__sub_835CC27C"))) PPC_WEAK_FUNC(sub_835CC27C);
PPC_FUNC_IMPL(__imp__sub_835CC27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC280"))) PPC_WEAK_FUNC(sub_835CC280);
PPC_FUNC_IMPL(__imp__sub_835CC280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC294"))) PPC_WEAK_FUNC(sub_835CC294);
PPC_FUNC_IMPL(__imp__sub_835CC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC298"))) PPC_WEAK_FUNC(sub_835CC298);
PPC_FUNC_IMPL(__imp__sub_835CC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CC2A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835CC2C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// or r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 | ctx.r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835CC2D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC2E0"))) PPC_WEAK_FUNC(sub_835CC2E0);
PPC_FUNC_IMPL(__imp__sub_835CC2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CC2E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835CC30C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// andc r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 & ~ctx.r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835CC320;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC328"))) PPC_WEAK_FUNC(sub_835CC328);
PPC_FUNC_IMPL(__imp__sub_835CC328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC33C"))) PPC_WEAK_FUNC(sub_835CC33C);
PPC_FUNC_IMPL(__imp__sub_835CC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC340"))) PPC_WEAK_FUNC(sub_835CC340);
PPC_FUNC_IMPL(__imp__sub_835CC340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC354"))) PPC_WEAK_FUNC(sub_835CC354);
PPC_FUNC_IMPL(__imp__sub_835CC354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC358"))) PPC_WEAK_FUNC(sub_835CC358);
PPC_FUNC_IMPL(__imp__sub_835CC358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC36C"))) PPC_WEAK_FUNC(sub_835CC36C);
PPC_FUNC_IMPL(__imp__sub_835CC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC370"))) PPC_WEAK_FUNC(sub_835CC370);
PPC_FUNC_IMPL(__imp__sub_835CC370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC384"))) PPC_WEAK_FUNC(sub_835CC384);
PPC_FUNC_IMPL(__imp__sub_835CC384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC388"))) PPC_WEAK_FUNC(sub_835CC388);
PPC_FUNC_IMPL(__imp__sub_835CC388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC39C"))) PPC_WEAK_FUNC(sub_835CC39C);
PPC_FUNC_IMPL(__imp__sub_835CC39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC3A0"))) PPC_WEAK_FUNC(sub_835CC3A0);
PPC_FUNC_IMPL(__imp__sub_835CC3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC3B4"))) PPC_WEAK_FUNC(sub_835CC3B4);
PPC_FUNC_IMPL(__imp__sub_835CC3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC3B8"))) PPC_WEAK_FUNC(sub_835CC3B8);
PPC_FUNC_IMPL(__imp__sub_835CC3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC3CC"))) PPC_WEAK_FUNC(sub_835CC3CC);
PPC_FUNC_IMPL(__imp__sub_835CC3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC3D0"))) PPC_WEAK_FUNC(sub_835CC3D0);
PPC_FUNC_IMPL(__imp__sub_835CC3D0) {
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
	// bl 0x83562048
	ctx.lr = 0x835CC3E8;
	sub_83562048(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r8,r11,15660
	ctx.r8.s64 = ctx.r11.s64 + 15660;
	// addi r7,r10,15752
	ctx.r7.s64 = ctx.r10.s64 + 15752;
	// addi r6,r9,15744
	ctx.r6.s64 = ctx.r9.s64 + 15744;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835CC424;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cc448
	if (cr6.eq) goto loc_835CC448;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15672
	ctx.r9.s64 = ctx.r11.s64 + 15672;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x835cc44c
	goto loc_835CC44C;
loc_835CC448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_835CC44C:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565278
	ctx.lr = 0x835CC45C;
	sub_83565278(ctx, base);
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

__attribute__((alias("__imp__sub_835CC474"))) PPC_WEAK_FUNC(sub_835CC474);
PPC_FUNC_IMPL(__imp__sub_835CC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC478"))) PPC_WEAK_FUNC(sub_835CC478);
PPC_FUNC_IMPL(__imp__sub_835CC478) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CC4A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r30
	ctx.r9.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// bl 0x83565278
	ctx.lr = 0x835CC4C0;
	sub_83565278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565310
	ctx.lr = 0x835CC4CC;
	sub_83565310(ctx, base);
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

__attribute__((alias("__imp__sub_835CC4E4"))) PPC_WEAK_FUNC(sub_835CC4E4);
PPC_FUNC_IMPL(__imp__sub_835CC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC4E8"))) PPC_WEAK_FUNC(sub_835CC4E8);
PPC_FUNC_IMPL(__imp__sub_835CC4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CC4FC"))) PPC_WEAK_FUNC(sub_835CC4FC);
PPC_FUNC_IMPL(__imp__sub_835CC4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC500"))) PPC_WEAK_FUNC(sub_835CC500);
PPC_FUNC_IMPL(__imp__sub_835CC500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CC508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x835cc544
	if (!cr6.gt) goto loc_835CC544;
	// rlwinm r28,r4,16,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0x1;
	// addi r30,r3,108
	ctx.r30.s64 = ctx.r3.s64 + 108;
loc_835CC528:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83865be8
	ctx.lr = 0x835CC534;
	sub_83865BE8(ctx, base);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x835cc528
	if (cr6.lt) goto loc_835CC528;
loc_835CC544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC54C"))) PPC_WEAK_FUNC(sub_835CC54C);
PPC_FUNC_IMPL(__imp__sub_835CC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC550"))) PPC_WEAK_FUNC(sub_835CC550);
PPC_FUNC_IMPL(__imp__sub_835CC550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835CC558;
	__savegprlr_26(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x835cc684
	if (!cr6.gt) goto loc_835CC684;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r31,r11,15840
	ctx.r31.s64 = ctx.r11.s64 + 15840;
	// addi r29,r10,15840
	ctx.r29.s64 = ctx.r10.s64 + 15840;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
loc_835CC588:
	// lwzx r8,r28,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x835cc5a0
	if (cr6.eq) goto loc_835CC5A0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_835CC5A0:
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r26,40(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r26,r7,21,9,10
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r7.u32, 21) & 0x600000) | (ctx.r26.u64 & 0xFFFFFFFFFF9FFFFF);
	// stw r26,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r26.u32);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r7,r8,11,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x835cc5e4
	if (cr6.eq) goto loc_835CC5E4;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_835CC5E4:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r10,40(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// rlwimi r10,r7,19,11,12
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 19) & 0x180000) | (ctx.r10.u64 & 0xFFFFFFFFFFE7FFFF);
	// stw r10,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r10.u32);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r9,r26,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r26.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// lwzx r7,r6,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwimi r9,r7,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// beq cr6,0x835cc64c
	if (cr6.eq) goto loc_835CC64C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// subfe r8,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r7,r8,1,30,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
loc_835CC64C:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x835cc670
	if (cr6.eq) goto loc_835CC670;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// subfe r8,r9,r5
	temp.u8 = (~ctx.r9.u32 + ctx.r5.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r8,r7,0,0,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// stw r8,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
loc_835CC670:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x835cc588
	if (cr6.lt) goto loc_835CC588;
loc_835CC684:
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC688"))) PPC_WEAK_FUNC(sub_835CC688);
PPC_FUNC_IMPL(__imp__sub_835CC688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x835cc70c
	if (!cr6.gt) goto loc_835CC70C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,15416
	ctx.r10.s64 = ctx.r11.s64 + 15416;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,108
	ctx.r11.s64 = ctx.r3.s64 + 108;
loc_835CC6B4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r31,28(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwimi r31,r4,10,19,21
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x1C00) | (ctx.r31.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r5,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r31,28(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwimi r31,r4,13,16,18
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 13) & 0xE000) | (ctx.r31.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r31,28(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// rlwimi r31,r4,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r31,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r31.u32);
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x835cc6b4
	if (cr6.lt) goto loc_835CC6B4;
loc_835CC70C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CC714"))) PPC_WEAK_FUNC(sub_835CC714);
PPC_FUNC_IMPL(__imp__sub_835CC714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC718"))) PPC_WEAK_FUNC(sub_835CC718);
PPC_FUNC_IMPL(__imp__sub_835CC718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-22496
	ctx.r8.s64 = ctx.r11.s64 + -22496;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
loc_835CC738:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwimi r5,r6,25,4,6
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 25) & 0xE000000) | (ctx.r5.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x835cc738
	if (cr6.lt) goto loc_835CC738;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CC764"))) PPC_WEAK_FUNC(sub_835CC764);
PPC_FUNC_IMPL(__imp__sub_835CC764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC768"))) PPC_WEAK_FUNC(sub_835CC768);
PPC_FUNC_IMPL(__imp__sub_835CC768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r9,r3,108
	ctx.r9.s64 = ctx.r3.s64 + 108;
loc_835CC77C:
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lwz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r5,r7,0,0,29
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// stw r5,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x835cc77c
	if (cr6.lt) goto loc_835CC77C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CC7D4"))) PPC_WEAK_FUNC(sub_835CC7D4);
PPC_FUNC_IMPL(__imp__sub_835CC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC7D8"))) PPC_WEAK_FUNC(sub_835CC7D8);
PPC_FUNC_IMPL(__imp__sub_835CC7D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x835cd898
	sub_835CD898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC7E0"))) PPC_WEAK_FUNC(sub_835CC7E0);
PPC_FUNC_IMPL(__imp__sub_835CC7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,13080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13080);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC7EC"))) PPC_WEAK_FUNC(sub_835CC7EC);
PPC_FUNC_IMPL(__imp__sub_835CC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC7F0"))) PPC_WEAK_FUNC(sub_835CC7F0);
PPC_FUNC_IMPL(__imp__sub_835CC7F0) {
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
	// bl 0x83588780
	ctx.lr = 0x835CC810;
	sub_83588780(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835cc824
	if (cr6.eq) goto loc_835CC824;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83588c58
	ctx.lr = 0x835CC824;
	sub_83588C58(ctx, base);
loc_835CC824:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83865cc8
	ctx.lr = 0x835CC830;
	sub_83865CC8(ctx, base);
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

__attribute__((alias("__imp__sub_835CC848"))) PPC_WEAK_FUNC(sub_835CC848);
PPC_FUNC_IMPL(__imp__sub_835CC848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CC850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,15852
	ctx.r10.s64 = ctx.r11.s64 + 15852;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83588780
	ctx.lr = 0x835CC868;
	sub_83588780(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r29,104
	ctx.r31.s64 = ctx.r29.s64 + 104;
	// li r30,2
	ctx.r30.s64 = 2;
loc_835CC874:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cc888
	if (cr6.eq) goto loc_835CC888;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83867558
	ctx.lr = 0x835CC888;
	sub_83867558(ctx, base);
loc_835CC888:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835cc8a0
	if (cr6.eq) goto loc_835CC8A0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83588c58
	ctx.lr = 0x835CC8A0;
	sub_83588C58(ctx, base);
loc_835CC8A0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x835cc874
	if (!cr0.eq) goto loc_835CC874;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835620f8
	ctx.lr = 0x835CC8B4;
	sub_835620F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC8BC"))) PPC_WEAK_FUNC(sub_835CC8BC);
PPC_FUNC_IMPL(__imp__sub_835CC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC8C0"))) PPC_WEAK_FUNC(sub_835CC8C0);
PPC_FUNC_IMPL(__imp__sub_835CC8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,13084(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13084);
	// b 0x825832e0
	sub_825832E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CC8CC"))) PPC_WEAK_FUNC(sub_835CC8CC);
PPC_FUNC_IMPL(__imp__sub_835CC8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC8D0"))) PPC_WEAK_FUNC(sub_835CC8D0);
PPC_FUNC_IMPL(__imp__sub_835CC8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835cc920
	if (cr6.eq) goto loc_835CC920;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
loc_835CC904:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835cc904
	if (!cr0.eq) goto loc_835CC904;
loc_835CC920:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574ba8
	ctx.lr = 0x835CC928;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cc934
	if (cr6.eq) goto loc_835CC934;
	// bl 0x83565458
	ctx.lr = 0x835CC934;
	sub_83565458(ctx, base);
loc_835CC934:
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

__attribute__((alias("__imp__sub_835CC94C"))) PPC_WEAK_FUNC(sub_835CC94C);
PPC_FUNC_IMPL(__imp__sub_835CC94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC950"))) PPC_WEAK_FUNC(sub_835CC950);
PPC_FUNC_IMPL(__imp__sub_835CC950) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r9,r11,26
	ctx.r9.s64 = ctx.r11.s64 + 26;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CC968"))) PPC_WEAK_FUNC(sub_835CC968);
PPC_FUNC_IMPL(__imp__sub_835CC968) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CC984"))) PPC_WEAK_FUNC(sub_835CC984);
PPC_FUNC_IMPL(__imp__sub_835CC984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC988"))) PPC_WEAK_FUNC(sub_835CC988);
PPC_FUNC_IMPL(__imp__sub_835CC988) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r3,10(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CC9A4"))) PPC_WEAK_FUNC(sub_835CC9A4);
PPC_FUNC_IMPL(__imp__sub_835CC9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CC9A8"))) PPC_WEAK_FUNC(sub_835CC9A8);
PPC_FUNC_IMPL(__imp__sub_835CC9A8) {
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
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83565260
	ctx.lr = 0x835CC9D0;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cc9e8
	if (cr6.eq) goto loc_835CC9E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x835cc500
	ctx.lr = 0x835CC9E8;
	sub_835CC500(ctx, base);
loc_835CC9E8:
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

__attribute__((alias("__imp__sub_835CCA00"))) PPC_WEAK_FUNC(sub_835CCA00);
PPC_FUNC_IMPL(__imp__sub_835CCA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CCA08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83565260
	ctx.lr = 0x835CCA30;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cca50
	if (cr6.eq) goto loc_835CCA50;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835cc550
	ctx.lr = 0x835CCA50;
	sub_835CC550(ctx, base);
loc_835CCA50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CCA58"))) PPC_WEAK_FUNC(sub_835CCA58);
PPC_FUNC_IMPL(__imp__sub_835CCA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CCA60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83565260
	ctx.lr = 0x835CCA88;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ccaa8
	if (cr6.eq) goto loc_835CCAA8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835cc688
	ctx.lr = 0x835CCAA8;
	sub_835CC688(ctx, base);
loc_835CCAA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CCAB0"))) PPC_WEAK_FUNC(sub_835CCAB0);
PPC_FUNC_IMPL(__imp__sub_835CCAB0) {
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
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83565260
	ctx.lr = 0x835CCAD8;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ccaf0
	if (cr6.eq) goto loc_835CCAF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x835cc718
	ctx.lr = 0x835CCAF0;
	sub_835CC718(ctx, base);
loc_835CCAF0:
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

__attribute__((alias("__imp__sub_835CCB08"))) PPC_WEAK_FUNC(sub_835CCB08);
PPC_FUNC_IMPL(__imp__sub_835CCB08) {
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
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83565260
	ctx.lr = 0x835CCB34;
	sub_83565260(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835ccb4c
	if (cr6.eq) goto loc_835CCB4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x835cc768
	ctx.lr = 0x835CCB4C;
	sub_835CC768(ctx, base);
loc_835CCB4C:
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

__attribute__((alias("__imp__sub_835CCB64"))) PPC_WEAK_FUNC(sub_835CCB64);
PPC_FUNC_IMPL(__imp__sub_835CCB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCB68"))) PPC_WEAK_FUNC(sub_835CCB68);
PPC_FUNC_IMPL(__imp__sub_835CCB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCB80"))) PPC_WEAK_FUNC(sub_835CCB80);
PPC_FUNC_IMPL(__imp__sub_835CCB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCB94"))) PPC_WEAK_FUNC(sub_835CCB94);
PPC_FUNC_IMPL(__imp__sub_835CCB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCB98"))) PPC_WEAK_FUNC(sub_835CCB98);
PPC_FUNC_IMPL(__imp__sub_835CCB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCBAC"))) PPC_WEAK_FUNC(sub_835CCBAC);
PPC_FUNC_IMPL(__imp__sub_835CCBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCBB0"))) PPC_WEAK_FUNC(sub_835CCBB0);
PPC_FUNC_IMPL(__imp__sub_835CCBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCBC4"))) PPC_WEAK_FUNC(sub_835CCBC4);
PPC_FUNC_IMPL(__imp__sub_835CCBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCBC8"))) PPC_WEAK_FUNC(sub_835CCBC8);
PPC_FUNC_IMPL(__imp__sub_835CCBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCBDC"))) PPC_WEAK_FUNC(sub_835CCBDC);
PPC_FUNC_IMPL(__imp__sub_835CCBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCBE0"))) PPC_WEAK_FUNC(sub_835CCBE0);
PPC_FUNC_IMPL(__imp__sub_835CCBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCBF4"))) PPC_WEAK_FUNC(sub_835CCBF4);
PPC_FUNC_IMPL(__imp__sub_835CCBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCBF8"))) PPC_WEAK_FUNC(sub_835CCBF8);
PPC_FUNC_IMPL(__imp__sub_835CCBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCC0C"))) PPC_WEAK_FUNC(sub_835CCC0C);
PPC_FUNC_IMPL(__imp__sub_835CCC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCC10"))) PPC_WEAK_FUNC(sub_835CCC10);
PPC_FUNC_IMPL(__imp__sub_835CCC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_835CCC24"))) PPC_WEAK_FUNC(sub_835CCC24);
PPC_FUNC_IMPL(__imp__sub_835CCC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCC28"))) PPC_WEAK_FUNC(sub_835CCC28);
PPC_FUNC_IMPL(__imp__sub_835CCC28) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,15672
	ctx.r10.s64 = ctx.r11.s64 + 15672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83588780
	ctx.lr = 0x835CCC54;
	sub_83588780(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835ccc68
	if (cr6.eq) goto loc_835CCC68;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83588c58
	ctx.lr = 0x835CCC68;
	sub_83588C58(ctx, base);
loc_835CCC68:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,19304
	ctx.r9.s64 = ctx.r11.s64 + 19304;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x835ccc8c
	if (cr6.eq) goto loc_835CCC8C;
	// bl 0x82416268
	ctx.lr = 0x835CCC88;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835CCC8C:
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

__attribute__((alias("__imp__sub_835CCCA4"))) PPC_WEAK_FUNC(sub_835CCCA4);
PPC_FUNC_IMPL(__imp__sub_835CCCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCCA8"))) PPC_WEAK_FUNC(sub_835CCCA8);
PPC_FUNC_IMPL(__imp__sub_835CCCA8) {
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
	// bl 0x835cc848
	ctx.lr = 0x835CCCC8;
	sub_835CC848(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ccce8
	if (cr6.eq) goto loc_835CCCE8;
	// bl 0x82595188
	ctx.lr = 0x835CCCD8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835CCCE8;
	sub_825952B8(ctx, base);
loc_835CCCE8:
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

__attribute__((alias("__imp__sub_835CCD04"))) PPC_WEAK_FUNC(sub_835CCD04);
PPC_FUNC_IMPL(__imp__sub_835CCD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCD08"))) PPC_WEAK_FUNC(sub_835CCD08);
PPC_FUNC_IMPL(__imp__sub_835CCD08) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,15888
	ctx.r10.s64 = ctx.r11.s64 + 15888;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x835cc8d0
	ctx.lr = 0x835CCD30;
	sub_835CC8D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_835CCD74"))) PPC_WEAK_FUNC(sub_835CCD74);
PPC_FUNC_IMPL(__imp__sub_835CCD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCD78"))) PPC_WEAK_FUNC(sub_835CCD78);
PPC_FUNC_IMPL(__imp__sub_835CCD78) {
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
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835cc8d0
	ctx.lr = 0x835CCD94;
	sub_835CC8D0(ctx, base);
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

__attribute__((alias("__imp__sub_835CCDAC"))) PPC_WEAK_FUNC(sub_835CCDAC);
PPC_FUNC_IMPL(__imp__sub_835CCDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCDB0"))) PPC_WEAK_FUNC(sub_835CCDB0);
PPC_FUNC_IMPL(__imp__sub_835CCDB0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x835cce80
	if (cr6.eq) goto loc_835CCE80;
	// bl 0x83565260
	ctx.lr = 0x835CCDD4;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cce80
	if (cr6.eq) goto loc_835CCE80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CCE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835CCE20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x835CCE38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835CCE50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835CCE68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
loc_835CCE80:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
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

__attribute__((alias("__imp__sub_835CCE9C"))) PPC_WEAK_FUNC(sub_835CCE9C);
PPC_FUNC_IMPL(__imp__sub_835CCE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCEA0"))) PPC_WEAK_FUNC(sub_835CCEA0);
PPC_FUNC_IMPL(__imp__sub_835CCEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,15960
	ctx.r9.s64 = ctx.r10.s64 + 15960;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835CCED8;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ccf20
	if (cr6.eq) goto loc_835CCF20;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835CCEE8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835ccee8
	if (!cr0.eq) goto loc_835CCEE8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x835ccf20
	if (cr6.gt) goto loc_835CCF20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CCF20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CCF20:
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

__attribute__((alias("__imp__sub_835CCF38"))) PPC_WEAK_FUNC(sub_835CCF38);
PPC_FUNC_IMPL(__imp__sub_835CCF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,15960
	ctx.r10.s64 = ctx.r11.s64 + 15960;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835CCF64;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ccfac
	if (cr6.eq) goto loc_835CCFAC;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835CCF74:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835ccf74
	if (!cr0.eq) goto loc_835CCF74;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x835ccfac
	if (cr6.gt) goto loc_835CCFAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CCFAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CCFAC:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r10,r11,19304
	ctx.r10.s64 = ctx.r11.s64 + 19304;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_835CCFCC"))) PPC_WEAK_FUNC(sub_835CCFCC);
PPC_FUNC_IMPL(__imp__sub_835CCFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CCFD0"))) PPC_WEAK_FUNC(sub_835CCFD0);
PPC_FUNC_IMPL(__imp__sub_835CCFD0) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CCFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_835CD010"))) PPC_WEAK_FUNC(sub_835CD010);
PPC_FUNC_IMPL(__imp__sub_835CD010) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x8259f070
	sub_8259F070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CD01C"))) PPC_WEAK_FUNC(sub_835CD01C);
PPC_FUNC_IMPL(__imp__sub_835CD01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD020"))) PPC_WEAK_FUNC(sub_835CD020);
PPC_FUNC_IMPL(__imp__sub_835CD020) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835CD048;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd054
	if (cr6.eq) goto loc_835CD054;
	// bl 0x83565458
	ctx.lr = 0x835CD054;
	sub_83565458(ctx, base);
loc_835CD054:
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

__attribute__((alias("__imp__sub_835CD06C"))) PPC_WEAK_FUNC(sub_835CD06C);
PPC_FUNC_IMPL(__imp__sub_835CD06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD070"))) PPC_WEAK_FUNC(sub_835CD070);
PPC_FUNC_IMPL(__imp__sub_835CD070) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835CD0A0;
	sub_82595718(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd0b8
	if (cr6.eq) goto loc_835CD0B8;
	// bl 0x835cc3d0
	ctx.lr = 0x835CD0B0;
	sub_835CC3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835cd0bc
	goto loc_835CD0BC;
loc_835CD0B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_835CD0BC:
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x8259f070
	ctx.lr = 0x835CD0CC;
	sub_8259F070(ctx, base);
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

__attribute__((alias("__imp__sub_835CD0E8"))) PPC_WEAK_FUNC(sub_835CD0E8);
PPC_FUNC_IMPL(__imp__sub_835CD0E8) {
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
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_835CD128"))) PPC_WEAK_FUNC(sub_835CD128);
PPC_FUNC_IMPL(__imp__sub_835CD128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CD130;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x83562048
	ctx.lr = 0x835CD148;
	sub_83562048(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r8,r11,15660
	ctx.r8.s64 = ctx.r11.s64 + 15660;
	// addi r7,r10,15752
	ctx.r7.s64 = ctx.r10.s64 + 15752;
	// addi r6,r9,15744
	ctx.r6.s64 = ctx.r9.s64 + 15744;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835cd278
	if (!cr6.eq) goto loc_835CD278;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x835cc8d0
	ctx.lr = 0x835CD18C;
	sub_835CC8D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835CD1A4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd1d0
	if (cr6.eq) goto loc_835CD1D0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835cc8d0
	ctx.lr = 0x835CD1BC;
	sub_835CC8D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x835ccd08
	ctx.lr = 0x835CD1CC;
	sub_835CCD08(ctx, base);
	// b 0x835cd1d4
	goto loc_835CD1D4;
loc_835CD1D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_835CD1D4:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x835cd1fc
	if (cr6.eq) goto loc_835CD1FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x835CD1F0;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd1fc
	if (cr6.eq) goto loc_835CD1FC;
	// bl 0x83565458
	ctx.lr = 0x835CD1FC;
	sub_83565458(ctx, base);
loc_835CD1FC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd238
	if (cr6.eq) goto loc_835CD238;
	// bl 0x835652c0
	ctx.lr = 0x835CD20C;
	sub_835652C0(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x835cd238
	if (cr6.eq) goto loc_835CD238;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83565e90
	ctx.lr = 0x835CD220;
	sub_83565E90(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x835652c0
	ctx.lr = 0x835CD228;
	sub_835652C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565278
	ctx.lr = 0x835CD234;
	sub_83565278(ctx, base);
	// b 0x835cd254
	goto loc_835CD254;
loc_835CD238:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565278
	ctx.lr = 0x835CD244;
	sub_83565278(ctx, base);
	// lis r4,2048
	ctx.r4.s64 = 134217728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,12
	ctx.r4.u64 = ctx.r4.u64 | 12;
	// bl 0x83565310
	ctx.lr = 0x835CD254;
	sub_83565310(ctx, base);
loc_835CD254:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x835CD260;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd2b8
	if (cr6.eq) goto loc_835CD2B8;
	// bl 0x83565458
	ctx.lr = 0x835CD26C;
	sub_83565458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835CD278:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x835cd2b8
	if (!cr6.eq) goto loc_835CD2B8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x835CD294;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd2a4
	if (cr6.eq) goto loc_835CD2A4;
	// bl 0x835ccea0
	ctx.lr = 0x835CD2A0;
	sub_835CCEA0(ctx, base);
	// b 0x835cd2a8
	goto loc_835CD2A8;
loc_835CD2A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_835CD2A8:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565278
	ctx.lr = 0x835CD2B8;
	sub_83565278(ctx, base);
loc_835CD2B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CD2C4"))) PPC_WEAK_FUNC(sub_835CD2C4);
PPC_FUNC_IMPL(__imp__sub_835CD2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD2C8"))) PPC_WEAK_FUNC(sub_835CD2C8);
PPC_FUNC_IMPL(__imp__sub_835CD2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CD2D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r9,r11,15752
	ctx.r9.s64 = ctx.r11.s64 + 15752;
	// addi r8,r10,15744
	ctx.r8.s64 = ctx.r10.s64 + 15744;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x835CD308;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x835cd390
	if (!cr6.eq) goto loc_835CD390;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD32C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82574ba8
	ctx.lr = 0x835CD348;
	sub_82574BA8(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82574ba8
	ctx.lr = 0x835CD358;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd364
	if (cr6.eq) goto loc_835CD364;
	// bl 0x83565458
	ctx.lr = 0x835CD364;
	sub_83565458(ctx, base);
loc_835CD364:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd378
	if (cr6.eq) goto loc_835CD378;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83565b18
	ctx.lr = 0x835CD378;
	sub_83565B18(ctx, base);
loc_835CD378:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x835CD384;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd390
	if (cr6.eq) goto loc_835CD390;
	// bl 0x83565458
	ctx.lr = 0x835CD390;
	sub_83565458(ctx, base);
loc_835CD390:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cd3d8
	if (cr6.eq) goto loc_835CD3D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x835CD3B0;
	sub_82595150(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd3d0
	if (cr6.eq) goto loc_835CD3D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD3D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CD3D0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x835CD3D8;
	sub_82595170(ctx, base);
loc_835CD3D8:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,15660
	ctx.r10.s64 = ctx.r11.s64 + 15660;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x83562088
	ctx.lr = 0x835CD3EC;
	sub_83562088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CD3F4"))) PPC_WEAK_FUNC(sub_835CD3F4);
PPC_FUNC_IMPL(__imp__sub_835CD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD3F8"))) PPC_WEAK_FUNC(sub_835CD3F8);
PPC_FUNC_IMPL(__imp__sub_835CD3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CD400;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835CD424;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd440
	if (cr6.eq) goto loc_835CD440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835cd128
	ctx.lr = 0x835CD438;
	sub_835CD128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835cd444
	goto loc_835CD444;
loc_835CD440:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_835CD444:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x835CD454;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CD460"))) PPC_WEAK_FUNC(sub_835CD460);
PPC_FUNC_IMPL(__imp__sub_835CD460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8259f070
	ctx.lr = 0x835CD494;
	sub_8259F070(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD4AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82574ba8
	ctx.lr = 0x835CD4B8;
	sub_82574BA8(ctx, base);
	// li r30,-2
	ctx.r30.s64 = -2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd500
	if (cr6.eq) goto loc_835CD500;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_835CD4C8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835cd4c8
	if (!cr0.eq) goto loc_835CD4C8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x835cd500
	if (cr6.gt) goto loc_835CD500;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD500;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CD500:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574ba8
	ctx.lr = 0x835CD50C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd550
	if (cr6.eq) goto loc_835CD550;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_835CD518:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ea = ctx.r9.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r9
	ea = ctx.r9.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835cd518
	if (!cr0.eq) goto loc_835CD518;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x835cd550
	if (cr6.gt) goto loc_835CD550;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CD550:
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

__attribute__((alias("__imp__sub_835CD568"))) PPC_WEAK_FUNC(sub_835CD568);
PPC_FUNC_IMPL(__imp__sub_835CD568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CD570;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x835cd64c
	if (cr6.eq) goto loc_835CD64C;
loc_835CD598:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x835cd5d4
	if (cr6.eq) goto loc_835CD5D4;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x835cd5b4
	if (!cr6.lt) goto loc_835CD5B4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_835CD5B4:
	// subf r7,r6,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r6.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83867710
	ctx.lr = 0x835CD5CC;
	sub_83867710(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_835CD5D4:
	// subf r11,r6,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r6.s64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r8,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x835cd598
	if (!cr6.eq) goto loc_835CD598;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// beq cr6,0x835cd64c
	if (cr6.eq) goto loc_835CD64C;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x835cd634
	if (!cr6.lt) goto loc_835CD634;
	// li r9,1
	ctx.r9.s64 = 1;
loc_835CD634:
	// subf r7,r6,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r6.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83867710
	ctx.lr = 0x835CD64C;
	sub_83867710(ctx, base);
loc_835CD64C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CD658"))) PPC_WEAK_FUNC(sub_835CD658);
PPC_FUNC_IMPL(__imp__sub_835CD658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835CD660;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r8,28(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// beq cr6,0x835cd6a4
	if (cr6.eq) goto loc_835CD6A4;
loc_835CD694:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835CD6A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// beq cr6,0x835cd6d0
	if (cr6.eq) goto loc_835CD6D0;
loc_835CD6B8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bne cr6,0x835cd694
	if (!cr6.eq) goto loc_835CD694;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x835cd6b8
	if (!cr6.eq) goto loc_835CD6B8;
loc_835CD6D0:
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82595718
	ctx.lr = 0x835CD6F0;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835cd70c
	if (!cr6.eq) goto loc_835CD70C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835CD70C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x835cd748
	if (cr6.eq) goto loc_835CD748;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
loc_835CD720:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stwu r7,12(r10)
	ea = 12 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x835cd720
	if (!cr6.eq) goto loc_835CD720;
loc_835CD748:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bge cr6,0x835cd758
	if (!cr6.lt) goto loc_835CD758;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_835CD758:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83867710
	ctx.lr = 0x835CD774;
	sub_83867710(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835CD784;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CD790"))) PPC_WEAK_FUNC(sub_835CD790);
PPC_FUNC_IMPL(__imp__sub_835CD790) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,15888
	ctx.r10.s64 = ctx.r11.s64 + 15888;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82574ba8
	ctx.lr = 0x835CD7C4;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd7d0
	if (cr6.eq) goto loc_835CD7D0;
	// bl 0x83565458
	ctx.lr = 0x835CD7D0;
	sub_83565458(ctx, base);
loc_835CD7D0:
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,19304
	ctx.r9.s64 = ctx.r11.s64 + 19304;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x835cd7f4
	if (cr6.eq) goto loc_835CD7F4;
	// bl 0x82416268
	ctx.lr = 0x835CD7F0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835CD7F4:
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

__attribute__((alias("__imp__sub_835CD80C"))) PPC_WEAK_FUNC(sub_835CD80C);
PPC_FUNC_IMPL(__imp__sub_835CD80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD810"))) PPC_WEAK_FUNC(sub_835CD810);
PPC_FUNC_IMPL(__imp__sub_835CD810) {
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
	// bl 0x835ccf38
	ctx.lr = 0x835CD830;
	sub_835CCF38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cd848
	if (cr6.eq) goto loc_835CD848;
	// bl 0x82416268
	ctx.lr = 0x835CD844;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_835CD848:
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

__attribute__((alias("__imp__sub_835CD860"))) PPC_WEAK_FUNC(sub_835CD860);
PPC_FUNC_IMPL(__imp__sub_835CD860) {
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
	// bl 0x83562028
	ctx.lr = 0x835CD870;
	sub_83562028(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r4,r10,-11272
	ctx.r4.s64 = ctx.r10.s64 + -11272;
	// stw r3,13080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13080, ctx.r3.u32);
	// bl 0x82583300
	ctx.lr = 0x835CD884;
	sub_82583300(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CD894"))) PPC_WEAK_FUNC(sub_835CD894);
PPC_FUNC_IMPL(__imp__sub_835CD894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD898"))) PPC_WEAK_FUNC(sub_835CD898);
PPC_FUNC_IMPL(__imp__sub_835CD898) {
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
	// bl 0x835cd2c8
	ctx.lr = 0x835CD8B8;
	sub_835CD2C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cd8d8
	if (cr6.eq) goto loc_835CD8D8;
	// bl 0x82595188
	ctx.lr = 0x835CD8C8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835CD8D8;
	sub_825952B8(ctx, base);
loc_835CD8D8:
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

__attribute__((alias("__imp__sub_835CD8F4"))) PPC_WEAK_FUNC(sub_835CD8F4);
PPC_FUNC_IMPL(__imp__sub_835CD8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CD8F8"))) PPC_WEAK_FUNC(sub_835CD8F8);
PPC_FUNC_IMPL(__imp__sub_835CD8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835CD900;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x835cd9b8
	if (!cr6.eq) goto loc_835CD9B8;
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// bl 0x8259f070
	ctx.lr = 0x835CD930;
	sub_8259F070(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835CD958;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cd978
	if (cr6.eq) goto loc_835CD978;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x835CD96C;
	sub_833D6D90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835CD978:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CD98C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835CD9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rotlwi r26,r3,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x835CD9B4;
	sub_833D6D90(ctx, base);
	// b 0x835cd9c0
	goto loc_835CD9C0;
loc_835CD9B8:
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r26,36(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_835CD9C0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x835cdcc0
	if (cr6.eq) goto loc_835CDCC0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x835cdcc0
	if (cr6.eq) goto loc_835CDCC0;
	// bl 0x83588780
	ctx.lr = 0x835CD9D4;
	sub_83588780(ctx, base);
	// bl 0x835212a0
	ctx.lr = 0x835CD9D8;
	sub_835212A0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r29,r11,15640
	ctx.r29.s64 = ctx.r11.s64 + 15640;
	// bne cr6,0x835cda1c
	if (!cr6.eq) goto loc_835CDA1C;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83522ab0
	ctx.lr = 0x835CDA00;
	sub_83522AB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x835CDA10;
	sub_83522040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x835cdae4
	goto loc_835CDAE4;
loc_835CDA1C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835410c0
	ctx.lr = 0x835CDA24;
	sub_835410C0(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x835cda6c
	if (!cr6.eq) goto loc_835CDA6C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_835CDA4C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835cda4c
	if (!cr0.eq) goto loc_835CDA4C;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_835CDA6C:
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x835cda7c
	if (!cr6.eq) goto loc_835CDA7C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_835CDA7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835cda90
	if (!cr6.eq) goto loc_835CDA90;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x835cdaa4
	goto loc_835CDAA4;
loc_835CDA90:
	// rldicr r11,r10,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne cr6,0x835cdaa4
	if (!cr6.eq) goto loc_835CDAA4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_835CDAA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cdad0
	if (cr6.eq) goto loc_835CDAD0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83574e78
	ctx.lr = 0x835CDAB8;
	sub_83574E78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x835CDAC8;
	sub_83522040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x835cdae0
	goto loc_835CDAE0;
loc_835CDAD0:
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831126c8
	ctx.lr = 0x835CDADC;
	sub_831126C8(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_835CDAE0:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_835CDAE4:
	// bl 0x83521f50
	ctx.lr = 0x835CDAE8;
	sub_83521F50(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0ca0
	ctx.lr = 0x835CDAF8;
	sub_831D0CA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835cdb40
	if (!cr6.eq) goto loc_835CDB40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835cc010
	ctx.lr = 0x835CDB08;
	sub_835CC010(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8386d6e8
	ctx.lr = 0x835CDB18;
	sub_8386D6E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8386daf0
	ctx.lr = 0x835CDB24;
	sub_8386DAF0(ctx, base);
	// stw r3,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8386ddd0
	ctx.lr = 0x835CDB3C;
	sub_8386DDD0(ctx, base);
	// b 0x835cdc1c
	goto loc_835CDC1C;
loc_835CDB40:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ecaf8
	ctx.lr = 0x835CDB48;
	sub_835ECAF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825832f8
	ctx.lr = 0x835CDB54;
	sub_825832F8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83131d70
	ctx.lr = 0x835CDB60;
	sub_83131D70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8307e038
	ctx.lr = 0x835CDB6C;
	sub_8307E038(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0ca0
	ctx.lr = 0x835CDB78;
	sub_831D0CA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835cdbd0
	if (!cr6.eq) goto loc_835CDBD0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ef3e0
	ctx.lr = 0x835CDB88;
	sub_835EF3E0(ctx, base);
	// clrldi r6,r26,32
	ctx.r6.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835ef5a8
	ctx.lr = 0x835CDB9C;
	sub_835EF5A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f3ab0
	ctx.lr = 0x835CDBA8;
	sub_835F3AB0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835cdc08
	if (cr6.eq) goto loc_835CDC08;
loc_835CDBB0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ecaa8
	ctx.lr = 0x835CDBB8;
	sub_835ECAA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83521f50
	ctx.lr = 0x835CDBC0;
	sub_83521F50(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835CDBD0:
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0ca0
	ctx.lr = 0x835CDBDC;
	sub_831D0CA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835cdc5c
	if (!cr6.eq) goto loc_835CDC5C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f3a70
	ctx.lr = 0x835CDBEC;
	sub_835F3A70(ctx, base);
	// clrldi r6,r26,32
	ctx.r6.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f3ae8
	ctx.lr = 0x835CDC00;
	sub_835F3AE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f3ab0
	ctx.lr = 0x835CDC08;
	sub_835F3AB0(ctx, base);
loc_835CDC08:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835d54f8
	ctx.lr = 0x835CDC10;
	sub_835D54F8(ctx, base);
	// stw r3,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835ecaa8
	ctx.lr = 0x835CDC1C;
	sub_835ECAA8(ctx, base);
loc_835CDC1C:
	// lwz r3,104(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835cdc98
	if (!cr6.eq) goto loc_835CDC98;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83565278
	ctx.lr = 0x835CDC34;
	sub_83565278(ctx, base);
	// lis r4,2048
	ctx.r4.s64 = 134217728;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x83565310
	ctx.lr = 0x835CDC44;
	sub_83565310(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83521f50
	ctx.lr = 0x835CDC4C;
	sub_83521F50(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835CDC5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0ca0
	ctx.lr = 0x835CDC68;
	sub_831D0CA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x835cdbb0
	if (!cr6.eq) goto loc_835CDBB0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f55b0
	ctx.lr = 0x835CDC78;
	sub_835F55B0(ctx, base);
	// clrldi r6,r26,32
	ctx.r6.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f61e0
	ctx.lr = 0x835CDC8C;
	sub_835F61E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835f3ab0
	ctx.lr = 0x835CDC94;
	sub_835F3AB0(ctx, base);
	// b 0x835cdc08
	goto loc_835CDC08;
loc_835CDC98:
	// bl 0x83865f58
	ctx.lr = 0x835CDC9C;
	sub_83865F58(ctx, base);
	// stw r3,112(r25)
	PPC_STORE_U32(ctx.r25.u32 + 112, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83565278
	ctx.lr = 0x835CDCAC;
	sub_83565278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83521f50
	ctx.lr = 0x835CDCB4;
	sub_83521F50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835CDCC0:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CDCD0"))) PPC_WEAK_FUNC(sub_835CDCD0);
PPC_FUNC_IMPL(__imp__sub_835CDCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CDCD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r10,15488
	ctx.r9.s64 = ctx.r10.s64 + 15488;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// beq cr6,0x835cdd80
	if (cr6.eq) goto loc_835CDD80;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835cdd80
	if (cr6.eq) goto loc_835CDD80;
	// li r7,512
	ctx.r7.s64 = 512;
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// bl 0x83867500
	ctx.lr = 0x835CDD20;
	sub_83867500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835cdd40
	if (!cr6.eq) goto loc_835CDD40;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835CDD40:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x835cdd74
	if (cr6.eq) goto loc_835CDD74;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835cd568
	ctx.lr = 0x835CDD5C;
	sub_835CD568(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cdd74
	if (cr6.eq) goto loc_835CDD74;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835CDD74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835CDD80:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CDD90"))) PPC_WEAK_FUNC(sub_835CDD90);
PPC_FUNC_IMPL(__imp__sub_835CDD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CDD98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r10,15488
	ctx.r9.s64 = ctx.r10.s64 + 15488;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x835cddd8
	if (!cr6.eq) goto loc_835CDDD8;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835CDDD8:
	// li r6,512
	ctx.r6.s64 = 512;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83867548
	ctx.lr = 0x835CDDE4;
	sub_83867548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835cde04
	if (!cr6.eq) goto loc_835CDE04;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835CDE04:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x835cde38
	if (cr6.eq) goto loc_835CDE38;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835cd658
	ctx.lr = 0x835CDE20;
	sub_835CD658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cde38
	if (cr6.eq) goto loc_835CDE38;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835CDE38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CDE44"))) PPC_WEAK_FUNC(sub_835CDE44);
PPC_FUNC_IMPL(__imp__sub_835CDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CDE48"))) PPC_WEAK_FUNC(sub_835CDE48);
PPC_FUNC_IMPL(__imp__sub_835CDE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// ld r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 168);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subfic r11,r10,1
	xer.ca = ctx.r10.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r10.s64;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// lbz r8,25(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// beq cr6,0x835cdeac
	if (cr6.eq) goto loc_835CDEAC;
	// b 0x835cd658
	sub_835CD658(ctx, base);
	return;
loc_835CDEAC:
	// b 0x835cd568
	sub_835CD568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CDEB0"))) PPC_WEAK_FUNC(sub_835CDEB0);
PPC_FUNC_IMPL(__imp__sub_835CDEB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CDEB4"))) PPC_WEAK_FUNC(sub_835CDEB4);
PPC_FUNC_IMPL(__imp__sub_835CDEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CDEB8"))) PPC_WEAK_FUNC(sub_835CDEB8);
PPC_FUNC_IMPL(__imp__sub_835CDEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835CDEC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r3,104
	ctx.r29.s64 = ctx.r3.s64 + 104;
	// beq cr6,0x835cdf40
	if (cr6.eq) goto loc_835CDF40;
loc_835CDEE0:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x835cdf00
	if (cr6.eq) goto loc_835CDF00;
	// bl 0x835cdd90
	ctx.lr = 0x835CDEFC;
	sub_835CDD90(ctx, base);
	// b 0x835cdf04
	goto loc_835CDF04;
loc_835CDF00:
	// bl 0x835cdcd0
	ctx.lr = 0x835CDF04;
	sub_835CDCD0(ctx, base);
loc_835CDF04:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835cdf2c
	if (!cr6.eq) goto loc_835CDF2C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83865f58
	ctx.lr = 0x835CDF18;
	sub_83865F58(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x835cdee0
	if (cr6.lt) goto loc_835CDEE0;
loc_835CDF2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x835cdfac
	goto loc_835CDFAC;
loc_835CDF40:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cdf5c
	if (cr6.eq) goto loc_835CDF5C;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x83865cc8
	ctx.lr = 0x835CDF54;
	sub_83865CC8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x835cdf84
	goto loc_835CDF84;
loc_835CDF5C:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x835cdf7c
	if (cr6.eq) goto loc_835CDF7C;
	// bl 0x835cdd90
	ctx.lr = 0x835CDF78;
	sub_835CDD90(ctx, base);
	// b 0x835cdf80
	goto loc_835CDF80;
loc_835CDF7C:
	// bl 0x835cdcd0
	ctx.lr = 0x835CDF80;
	sub_835CDCD0(ctx, base);
loc_835CDF80:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_835CDF84:
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// bne cr6,0x835cdfa4
	if (!cr6.eq) goto loc_835CDFA4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83865f58
	ctx.lr = 0x835CDFA0;
	sub_83865F58(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_835CDFA4:
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
loc_835CDFAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x835cdfcc
	if (!cr6.eq) goto loc_835CDFCC;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83565278
	ctx.lr = 0x835CDFC0;
	sub_83565278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_835CDFCC:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83565278
	ctx.lr = 0x835CDFD4;
	sub_83565278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565310
	ctx.lr = 0x835CDFE0;
	sub_83565310(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CDFEC"))) PPC_WEAK_FUNC(sub_835CDFEC);
PPC_FUNC_IMPL(__imp__sub_835CDFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CDFF0"))) PPC_WEAK_FUNC(sub_835CDFF0);
PPC_FUNC_IMPL(__imp__sub_835CDFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835CDFF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x835620b8
	ctx.lr = 0x835CE008;
	sub_835620B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r9,r10,15852
	ctx.r9.s64 = ctx.r10.s64 + 15852;
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// addi r26,r31,112
	ctx.r26.s64 = ctx.r31.s64 + 112;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
loc_835CE03C:
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835ce03c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CE03C;
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835ce15c
	if (cr6.eq) goto loc_835CE15C;
	// lbz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ce0c0
	if (cr6.eq) goto loc_835CE0C0;
loc_835CE064:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x835ce084
	if (cr6.eq) goto loc_835CE084;
	// bl 0x835cdd90
	ctx.lr = 0x835CE080;
	sub_835CDD90(ctx, base);
	// b 0x835ce088
	goto loc_835CE088;
loc_835CE084:
	// bl 0x835cdcd0
	ctx.lr = 0x835CE088;
	sub_835CDCD0(ctx, base);
loc_835CE088:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835ce0b0
	if (!cr6.eq) goto loc_835CE0B0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83865f58
	ctx.lr = 0x835CE09C;
	sub_83865F58(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x835ce064
	if (cr6.lt) goto loc_835CE064;
loc_835CE0B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r25,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r25.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x835ce128
	goto loc_835CE128;
loc_835CE0C0:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ce0dc
	if (cr6.eq) goto loc_835CE0DC;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x83865cc8
	ctx.lr = 0x835CE0D4;
	sub_83865CC8(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x835ce104
	goto loc_835CE104;
loc_835CE0DC:
	// lbz r11,25(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 25);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x835ce0fc
	if (cr6.eq) goto loc_835CE0FC;
	// bl 0x835cdd90
	ctx.lr = 0x835CE0F8;
	sub_835CDD90(ctx, base);
	// b 0x835ce100
	goto loc_835CE100;
loc_835CE0FC:
	// bl 0x835cdcd0
	ctx.lr = 0x835CE100;
	sub_835CDCD0(ctx, base);
loc_835CE100:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_835CE104:
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// bne cr6,0x835ce120
	if (!cr6.eq) goto loc_835CE120;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83865f58
	ctx.lr = 0x835CE11C;
	sub_83865F58(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
loc_835CE120:
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
loc_835CE128:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x835ce148
	if (!cr6.eq) goto loc_835CE148;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83565278
	ctx.lr = 0x835CE13C;
	sub_83565278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835CE148:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83565278
	ctx.lr = 0x835CE150;
	sub_83565278(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565310
	ctx.lr = 0x835CE15C;
	sub_83565310(ctx, base);
loc_835CE15C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE168"))) PPC_WEAK_FUNC(sub_835CE168);
PPC_FUNC_IMPL(__imp__sub_835CE168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CE170;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835CE194;
	sub_82595718(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ce1b0
	if (cr6.eq) goto loc_835CE1B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835cdff0
	ctx.lr = 0x835CE1A8;
	sub_835CDFF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835ce1b4
	goto loc_835CE1B4;
loc_835CE1B0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_835CE1B4:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x8259f070
	ctx.lr = 0x835CE1C4;
	sub_8259F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE1D0"))) PPC_WEAK_FUNC(sub_835CE1D0);
PPC_FUNC_IMPL(__imp__sub_835CE1D0) {
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
	// bl 0x83562098
	ctx.lr = 0x835CE1E0;
	sub_83562098(ctx, base);
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lis r10,-31907
	ctx.r10.s64 = -2091057152;
	// addi r4,r10,-7832
	ctx.r4.s64 = ctx.r10.s64 + -7832;
	// stw r3,13084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13084, ctx.r3.u32);
	// bl 0x82583300
	ctx.lr = 0x835CE1F4;
	sub_82583300(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CE204"))) PPC_WEAK_FUNC(sub_835CE204);
PPC_FUNC_IMPL(__imp__sub_835CE204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CE208"))) PPC_WEAK_FUNC(sub_835CE208);
PPC_FUNC_IMPL(__imp__sub_835CE208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835CE210;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83588780
	ctx.lr = 0x835CE21C;
	sub_83588780(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835410c0
	ctx.lr = 0x835CE228;
	sub_835410C0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(ctx.r11.s64, -1, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x835ce240
	if (!cr6.eq) goto loc_835CE240;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_835CE240:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835ce254
	if (!cr6.eq) goto loc_835CE254;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x835ce268
	goto loc_835CE268;
loc_835CE254:
	// rldicr r11,r11,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0x8000000000000000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x835ce268
	if (!cr6.eq) goto loc_835CE268;
	// li r11,1
	ctx.r11.s64 = 1;
loc_835CE268:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ce3b4
	if (cr6.eq) goto loc_835CE3B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565260
	ctx.lr = 0x835CE27C;
	sub_83565260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835ce3b4
	if (cr6.eq) goto loc_835CE3B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,104(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r29,112(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x835652c0
	ctx.lr = 0x835CE298;
	sub_835652C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835CE2B4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ce2e4
	if (cr6.eq) goto loc_835CE2E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835410c0
	ctx.lr = 0x835CE2C8;
	sub_835410C0(ctx, base);
	// bl 0x83574e78
	ctx.lr = 0x835CE2CC;
	sub_83574E78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83577a28
	ctx.lr = 0x835CE2DC;
	sub_83577A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835ce2e8
	goto loc_835CE2E8;
loc_835CE2E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_835CE2E8:
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x8259f070
	ctx.lr = 0x835CE2F8;
	sub_8259F070(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x835ce310
	if (!cr6.eq) goto loc_835CE310;
	// lis r30,2048
	ctx.r30.s64 = 134217728;
	// ori r30,r30,15
	ctx.r30.u64 = ctx.r30.u64 | 15;
	// b 0x835ce354
	goto loc_835CE354;
loc_835CE310:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CE324;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835ce354
	if (!cr6.eq) goto loc_835CE354;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CE348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ce37c
	if (cr6.eq) goto loc_835CE37C;
loc_835CE354:
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83565278
	ctx.lr = 0x835CE368;
	sub_83565278(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x835CE370;
	sub_833D6D90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_835CE37C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x835ce38c
	if (cr6.eq) goto loc_835CE38C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83867558
	ctx.lr = 0x835CE38C;
	sub_83867558(ctx, base);
loc_835CE38C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835ce3a4
	if (cr6.eq) goto loc_835CE3A4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83588c58
	ctx.lr = 0x835CE3A4;
	sub_83588C58(ctx, base);
loc_835CE3A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835655b0
	ctx.lr = 0x835CE3AC;
	sub_835655B0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d6d90
	ctx.lr = 0x835CE3B4;
	sub_833D6D90(ctx, base);
loc_835CE3B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE3C0"))) PPC_WEAK_FUNC(sub_835CE3C0);
PPC_FUNC_IMPL(__imp__sub_835CE3C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// addi r8,r1,91
	ctx.r8.s64 = ctx.r1.s64 + 91;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,9125
	ctx.r10.u64 = ctx.r10.u64 | 9125;
	// addi r7,r1,103
	ctx.r7.s64 = ctx.r1.s64 + 103;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lis r5,42
	ctx.r5.s64 = 2752512;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// addi r31,r1,115
	ctx.r31.s64 = ctx.r1.s64 + 115;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// li r30,16
	ctx.r30.s64 = 16;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ori r8,r5,9145
	ctx.r8.u64 = ctx.r5.u64 | 9145;
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// sth r6,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r6.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r9,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r9.u8);
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// sth r30,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r30.u16);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x8386a768
	ctx.lr = 0x835CE464;
	sub_8386A768(ctx, base);
	// lis r4,-31744
	ctx.r4.s64 = -2080374784;
	// stw r3,13092(r4)
	PPC_STORE_U32(ctx.r4.u32 + 13092, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_835CE484"))) PPC_WEAK_FUNC(sub_835CE484);
PPC_FUNC_IMPL(__imp__sub_835CE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CE488"))) PPC_WEAK_FUNC(sub_835CE488);
PPC_FUNC_IMPL(__imp__sub_835CE488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,13092(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13092);
	// b 0x8386a408
	sub_8386A408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE494"))) PPC_WEAK_FUNC(sub_835CE494);
PPC_FUNC_IMPL(__imp__sub_835CE494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CE498"))) PPC_WEAK_FUNC(sub_835CE498);
PPC_FUNC_IMPL(__imp__sub_835CE498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835CE4A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83588780
	ctx.lr = 0x835CE4B0;
	sub_83588780(ctx, base);
	// bl 0x835d3178
	ctx.lr = 0x835CE4B4;
	sub_835D3178(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,7
	ctx.r7.s64 = 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r6,r9,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// beq cr6,0x835ce518
	if (cr6.eq) goto loc_835CE518;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// b 0x835ce51c
	goto loc_835CE51C;
loc_835CE518:
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
loc_835CE51C:
	// not r6,r9
	ctx.r6.u64 = ~ctx.r9.u64;
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r4,r6,28,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stb r4,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r4.u8);
	// beq cr6,0x835ce538
	if (cr6.eq) goto loc_835CE538;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_835CE538:
	// rlwinm r6,r9,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r4,r9,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stb r4,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r4.u8);
	// beq cr6,0x835ce5cc
	if (cr6.eq) goto loc_835CE5CC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r10,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x835ce5ac
	if (cr6.lt) goto loc_835CE5AC;
	// beq cr6,0x835ce590
	if (cr6.eq) goto loc_835CE590;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x835ce5d0
	if (!cr6.lt) goto loc_835CE5D0;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x835ce5d0
	goto loc_835CE5D0;
loc_835CE590:
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x835ce5d0
	goto loc_835CE5D0;
loc_835CE5AC:
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x835ce5d0
	goto loc_835CE5D0;
loc_835CE5CC:
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
loc_835CE5D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d1708
	ctx.lr = 0x835CE5DC;
	sub_835D1708(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d17f8
	ctx.lr = 0x835CE5E8;
	sub_835D17F8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d1770
	ctx.lr = 0x835CE5F4;
	sub_835D1770(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE5FC"))) PPC_WEAK_FUNC(sub_835CE5FC);
PPC_FUNC_IMPL(__imp__sub_835CE5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CE600"))) PPC_WEAK_FUNC(sub_835CE600);
PPC_FUNC_IMPL(__imp__sub_835CE600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835CE608;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x83588780
	ctx.lr = 0x835CE620;
	sub_83588780(ctx, base);
	// bl 0x835d3178
	ctx.lr = 0x835CE624;
	sub_835D3178(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,48
	ctx.r27.s64 = 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x835ce698
	if (cr0.eq) goto loc_835CE698;
	// li r28,0
	ctx.r28.s64 = 0;
loc_835CE648:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CE678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// blt cr6,0x835ce648
	if (cr6.lt) goto loc_835CE648;
loc_835CE698:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CE6B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,8
	ctx.r8.s64 = 8;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r6,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE6E0"))) PPC_WEAK_FUNC(sub_835CE6E0);
PPC_FUNC_IMPL(__imp__sub_835CE6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x835CE6E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835ce838
	if (cr6.eq) goto loc_835CE838;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x835ac608
	ctx.lr = 0x835CE70C;
	sub_835AC608(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835ce838
	if (cr6.eq) goto loc_835CE838;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lwz r11,16256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835ce734
	if (!cr6.eq) goto loc_835CE734;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,16256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16256, ctx.r11.u32);
loc_835CE734:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83585588
	ctx.lr = 0x835CE73C;
	sub_83585588(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835ac610
	ctx.lr = 0x835CE748;
	sub_835AC610(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835ac610
	ctx.lr = 0x835CE754;
	sub_835AC610(ctx, base);
	// dcbt r0,r3
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835ac610
	ctx.lr = 0x835CE760;
	sub_835AC610(ctx, base);
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r10,13184
	ctx.r27.s64 = ctx.r10.s64 + 13184;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835ce7a4
	if (cr6.eq) goto loc_835CE7A4;
loc_835CE788:
	// dcbzl r11,r27
	memset(base + ((ctx.r11.u32 + ctx.r27.u32) & ~127), 0, 128);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x835ce788
	if (cr6.lt) goto loc_835CE788;
loc_835CE7A4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x835ce7e4
	if (cr6.eq) goto loc_835CE7E4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_835CE7B8:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x832d24b8
	ctx.lr = 0x835CE7D8;
	sub_832D24B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x835ce7b8
	if (!cr0.eq) goto loc_835CE7B8;
loc_835CE7E4:
	// lwz r31,8(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,68
	ctx.r10.s64 = 68;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r30,r11,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// sth r24,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r24.u16);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bl 0x831ce980
	ctx.lr = 0x835CE81C;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r6,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
loc_835CE838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CE840"))) PPC_WEAK_FUNC(sub_835CE840);
PPC_FUNC_IMPL(__imp__sub_835CE840) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83578d58
	ctx.lr = 0x835CE864;
	sub_83578D58(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x835ba0f0
	ctx.lr = 0x835CE874;
	sub_835BA0F0(ctx, base);
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

__attribute__((alias("__imp__sub_835CE88C"))) PPC_WEAK_FUNC(sub_835CE88C);
PPC_FUNC_IMPL(__imp__sub_835CE88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CE890"))) PPC_WEAK_FUNC(sub_835CE890);
PPC_FUNC_IMPL(__imp__sub_835CE890) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x838c21a0
	ctx.lr = 0x835CE8B4;
	sub_838C21A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835ce498
	ctx.lr = 0x835CE8C4;
	sub_835CE498(ctx, base);
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

__attribute__((alias("__imp__sub_835CE8DC"))) PPC_WEAK_FUNC(sub_835CE8DC);
PPC_FUNC_IMPL(__imp__sub_835CE8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CE8E0"))) PPC_WEAK_FUNC(sub_835CE8E0);
PPC_FUNC_IMPL(__imp__sub_835CE8E0) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efd8
	ctx.lr = 0x835CE904;
	sub_8257EFD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x825749c0
	ctx.lr = 0x835CE910;
	sub_825749C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257efc8
	ctx.lr = 0x835CE918;
	sub_8257EFC8(ctx, base);
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

__attribute__((alias("__imp__sub_835CE930"))) PPC_WEAK_FUNC(sub_835CE930);
PPC_FUNC_IMPL(__imp__sub_835CE930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835CE938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r4,12
	ctx.r28.s64 = ctx.r4.s64 + 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8257efd8
	ctx.lr = 0x835CE950;
	sub_8257EFD8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cea1c
	if (cr6.eq) goto loc_835CEA1C;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_835CE964:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835ce964
	if (!cr0.eq) goto loc_835CE964;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835cea1c
	if (cr6.eq) goto loc_835CEA1C;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8259f070
	ctx.lr = 0x835CE9A4;
	sub_8259F070(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,-2
	ctx.r9.s64 = -2;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_835CE9B0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835ce9b0
	if (!cr0.eq) goto loc_835CE9B0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bgt cr6,0x835ce9e8
	if (cr6.gt) goto loc_835CE9E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CE9E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CE9E8:
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82574ba8
	ctx.lr = 0x835CE9FC;
	sub_82574BA8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x835CEA08;
	sub_833D6D90(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efc8
	ctx.lr = 0x835CEA10;
	sub_8257EFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835CEA1C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bl 0x82574ba8
	ctx.lr = 0x835CEA34;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cea7c
	if (cr6.eq) goto loc_835CEA7C;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_835CEA44:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835cea44
	if (!cr0.eq) goto loc_835CEA44;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x835cea7c
	if (cr6.gt) goto loc_835CEA7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835CEA7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835CEA7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257efc8
	ctx.lr = 0x835CEA84;
	sub_8257EFC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CEA90"))) PPC_WEAK_FUNC(sub_835CEA90);
PPC_FUNC_IMPL(__imp__sub_835CEA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835CEA98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,16264
	ctx.r30.s64 = ctx.r11.s64 + 16264;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,16264(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82574a80
	ctx.lr = 0x835CEAC4;
	sub_82574A80(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x835ceb08
	if (cr6.eq) goto loc_835CEB08;
loc_835CEACC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,300
	cr6.compare<uint32_t>(ctx.r28.u32, 300, xer);
	// ble cr6,0x835ceae8
	if (!cr6.gt) goto loc_835CEAE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583480
	ctx.lr = 0x835CEAE4;
	sub_82583480(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_835CEAE8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82574a80
	ctx.lr = 0x835CEB00;
	sub_82574A80(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bne cr6,0x835ceacc
	if (!cr6.eq) goto loc_835CEACC;
loc_835CEB08:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ble cr6,0x835ceb20
	if (!cr6.gt) goto loc_835CEB20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_835CEB20:
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldimi r10,r11,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// rldicr r12,r12,63,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r9.u64);
	// bl 0x83522850
	ctx.lr = 0x835CEB3C;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835ceb78
	if (!cr6.eq) goto loc_835CEB78;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_835CEB5C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x835ceb5c
	if (!cr0.eq) goto loc_835CEB5C;
loc_835CEB78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CEB84"))) PPC_WEAK_FUNC(sub_835CEB84);
PPC_FUNC_IMPL(__imp__sub_835CEB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CEB88"))) PPC_WEAK_FUNC(sub_835CEB88);
PPC_FUNC_IMPL(__imp__sub_835CEB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CEB98:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835ceb98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CEB98;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CEBB0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cebb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CEBB0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CEBC8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cebc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CEBC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CEBD4"))) PPC_WEAK_FUNC(sub_835CEBD4);
PPC_FUNC_IMPL(__imp__sub_835CEBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CEBD8"))) PPC_WEAK_FUNC(sub_835CEBD8);
PPC_FUNC_IMPL(__imp__sub_835CEBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r11,r4,80
	ctx.r11.s64 = ctx.r4.s64 + 80;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r5,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r9,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r9.u32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stw r8,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r8.u32);
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r7,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r7.u32);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r6,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r6.u32);
	// lwz r5,48(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r5,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r5.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r9,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r9.u32);
	// lwz r8,64(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r8,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r8.u32);
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r7,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r7.u32);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r6,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r6.u32);
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r5,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r5.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r9,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r9.u32);
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r8,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r8.u32);
	// lwz r7,100(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// stw r7,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r7.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f11,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,104(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CECD4"))) PPC_WEAK_FUNC(sub_835CECD4);
PPC_FUNC_IMPL(__imp__sub_835CECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CECD8"))) PPC_WEAK_FUNC(sub_835CECD8);
PPC_FUNC_IMPL(__imp__sub_835CECD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835CECE8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835cece8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CECE8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CECF8"))) PPC_WEAK_FUNC(sub_835CECF8);
PPC_FUNC_IMPL(__imp__sub_835CECF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce770
	ctx.lr = 0x835CED08;
	__savefpr_26(ctx, base);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// fadds f11,f26,f11
	ctx.f11.f64 = double(float(ctx.f26.f64 + ctx.f11.f64));
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f11,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f7,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f5
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f5,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f4,80(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f9,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f8,48(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f7,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// stfs f6,84(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f3,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f1,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f9,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// stfs f8,92(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f5,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f27
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f27.f64));
	// stfs f4,60(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f3,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,96(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,64(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f7,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,100(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,32(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f1,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,104(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7bc
	ctx.lr = 0x835CEEC0;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CEECC"))) PPC_WEAK_FUNC(sub_835CEECC);
PPC_FUNC_IMPL(__imp__sub_835CEECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CEED0"))) PPC_WEAK_FUNC(sub_835CEED0);
PPC_FUNC_IMPL(__imp__sub_835CEED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce750
	ctx.lr = 0x835CEEE0;
	__savefpr_18(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f5,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f11,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f7,f1
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f3,f1
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f31,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f30,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f31,f1
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f1.f64));
	// lfs f29,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f30,f1
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// lfs f28,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f1
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f1.f64));
	// lfs f27,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f28,f1
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// lfs f26,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f27,f1
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f1.f64));
	// lfs f25,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f26,f26,f1
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f1.f64));
	// lfs f24,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f25,f25,f1
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f1.f64));
	// lfs f23,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f24,f24,f1
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f1.f64));
	// lfs f22,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f23,f23,f1
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f1.f64));
	// lfs f21,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f22,f22,f1
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f1.f64));
	// lfs f20,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f21,f21,f1
	ctx.f21.f64 = double(float(ctx.f21.f64 * ctx.f1.f64));
	// lfs f19,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f20,f20,f1
	ctx.f20.f64 = double(float(ctx.f20.f64 * ctx.f1.f64));
	// lfs f18,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f19,f19,f1
	ctx.f19.f64 = double(float(ctx.f19.f64 * ctx.f1.f64));
	// fmuls f1,f18,f1
	ctx.f1.f64 = double(float(ctx.f18.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f8,72(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f2,76(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f9,44(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f5,80(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,84(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,52(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f30,88(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f29,20(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f28,56(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f27,92(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f26,24(r3)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f25,60(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f24,96(r3)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f23,28(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f22,64(r3)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f21,100(r3)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f20,32(r3)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f19,68(r3)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f1,104(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce79c
	ctx.lr = 0x835CF02C;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CF038"))) PPC_WEAK_FUNC(sub_835CF038);
PPC_FUNC_IMPL(__imp__sub_835CF038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// lfs f12,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// lfs f9,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r1,-32
	ctx.r30.s64 = ctx.r1.s64 + -32;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f7,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stvx128 v58,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f3,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f2,72(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lvx128 v57,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lvx128 v55,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v54,v55,1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xAA));
	// stvx128 v54,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lvx128 v53,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v52,v53,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0x55));
	// stvx128 v52,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lvx128 v51,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// stvx128 v50,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lvx128 v49,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v48,v49,1
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xAA));
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v48,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lvx128 v47,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v46,v47,2
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0x55));
	// lfs f4,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v46,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f3,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// stfs f2,80(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lvx128 v45,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v44,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// lfs f1,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v44,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lvx128 v43,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v42,v43,1
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xAA));
	// stvx128 v42,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfs f8,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lvx128 v41,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v40,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0x55));
	// stvx128 v40,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lfs f6,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f5,84(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lvx128 v39,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v38,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// stvx128 v38,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f0,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfs f5,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lfs f4,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// lvx128 v37,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v36,v37,1
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xAA));
	// stvx128 v36,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lvx128 v35,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v34,v35,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0x55));
	// stvx128 v34,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lvx128 v33,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stvx128 v32,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f6,56(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f1,92(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// stvx128 v58,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lvx128 v57,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v56,v57,1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xAA));
	// stvx128 v56,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f11,60(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lvx128 v55,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v54,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0x55));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lfs f10,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// lfs f8,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f7,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stvx128 v54,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lfs f5,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f3,96(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lvx128 v53,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// stvx128 v52,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f9,f1
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lvx128 v51,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v50,v51,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xAA));
	// stvx128 v50,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lvx128 v49,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v48,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x55));
	// stvx128 v48,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f10,100(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lvx128 v47,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lvx128 v45,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v44,v45,1
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xAA));
	// stvx128 v44,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f5,f7
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f6,68(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lvx128 v43,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v42,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0x55));
	// stvx128 v42,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f4,104(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CF3AC"))) PPC_WEAK_FUNC(sub_835CF3AC);
PPC_FUNC_IMPL(__imp__sub_835CF3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CF3B0"))) PPC_WEAK_FUNC(sub_835CF3B0);
PPC_FUNC_IMPL(__imp__sub_835CF3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f9,f12,f1,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmadds f0,f4,f11,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,16(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f4,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmadds f0,f4,f11,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f8,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,28(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmadds f0,f4,f11,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f8,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f4,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmadds f0,f4,f11,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f8,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,52(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f4,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmadds f0,f4,f11,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f10,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f8,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,64(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f4,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmadds f0,f4,f11,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f13,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f6,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f5,f6,f11,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f5,76(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f2,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f0,f2,f11,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f10,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,84(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,84(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f6,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,88(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f5,f6,f11,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f5,88(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f2,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,92(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f0,f2,f11,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f10,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f9,96(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f6,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f5,f6,f11,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f5,100(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f2,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fmadds f1,f2,f11,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f1,104(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CF5DC"))) PPC_WEAK_FUNC(sub_835CF5DC);
PPC_FUNC_IMPL(__imp__sub_835CF5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CF5E0"))) PPC_WEAK_FUNC(sub_835CF5E0);
PPC_FUNC_IMPL(__imp__sub_835CF5E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82595718
	ctx.lr = 0x835CF62C;
	sub_82595718(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x835CF644;
	sub_82595718(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_835CF664"))) PPC_WEAK_FUNC(sub_835CF664);
PPC_FUNC_IMPL(__imp__sub_835CF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CF668"))) PPC_WEAK_FUNC(sub_835CF668);
PPC_FUNC_IMPL(__imp__sub_835CF668) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835CF670;
	__savegprlr_25(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,4
	ctx.r26.s64 = 4;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r11,27636
	ctx.r11.s64 = ctx.r11.s64 + 27636;
	// li r27,20
	ctx.r27.s64 = 20;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r28,12
	ctx.r28.s64 = 12;
	// lvlx128 v59,r11,r26
	temp.u32 = ctx.r11.u32 + ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r30,28
	ctx.r30.s64 = 28;
	// vor128 v58,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// lvlx128 v55,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r31,24
	ctx.r31.s64 = 24;
	// lvlx128 v52,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vor128 v50,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// lvlx128 v49,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v58,v55,4,3
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// lvlx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// lvlx128 v47,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v51,4,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 57), 4));
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// vrlimi128 v50,v49,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 57), 4));
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// vor128 v7,v58,v58
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v58.u8));
	// lvlx128 v46,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v48,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vor128 v6,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v45,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// lvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v7,v49,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 2));
	// lvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v48,v59,4,3
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 57), 4));
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// vrlimi128 v6,v52,2,2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 78), 2));
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// vrlimi128 v45,v46,2,2
	simde_mm_store_ps(ctx.v45.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v46.f32), 78), 2));
	// vrlimi128 v7,v47,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 147), 1));
	// vor128 v44,v59,v59
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v59.u8));
	// vrlimi128 v6,v46,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v46.f32), 147), 1));
	// vor128 v5,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vperm128 v59,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v58,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v7,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vrlimi128 v44,v54,4,3
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v54.f32), 57), 4));
	// vperm128 v57,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v56,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vrlimi128 v5,v51,2,2
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 78), 2));
	// vrlimi128 v7,v47,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 147), 1));
	// vor128 v43,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// vrlimi128 v5,v55,1,1
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// vperm128 v12,v57,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v11,v58,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vrlimi128 v43,v49,2,2
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 78), 2));
	// vperm128 v13,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v42,v57,v56,v5
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsldoi v6,v12,v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 8));
	// vmaddfp v8,v12,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v7,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vmaddfp v10,v13,v12,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v5,v13,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// vrlimi128 v7,v52,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 147), 1));
	// vmaddfp v5,v5,v11,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v41,v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm v12,v10,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v8,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vsldoi128 v3,v41,v41,8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 8));
	// vperm v10,v5,v5,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsldoi v7,v12,v12,8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 8));
	// vnmsubfp v4,v13,v8,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsldoi v5,v10,v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 8));
	// vmaddfp v13,v13,v3,v4
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v13,v11,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v13,v11,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v6,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v13,v6,v5,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmsum4fp128 v40,v42,v13
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vspltw128 v39,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// stvx128 v39,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x835cfa88
	if (cr6.eq) goto loc_835CFA88;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// vupkd3d128 v28,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v28 = vTemp;
	// stvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r25,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r25,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r25,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v33,r11,r28
	temp.u32 = ctx.r11.u32 + ctx.r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v38,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v36,r11,r26
	temp.u32 = ctx.r11.u32 + ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v34,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v35,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vor128 v32,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vmrglw128 v61,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vrlimi128 v54,v38,4,3
	simde_mm_store_ps(ctx.v54.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v38.f32), 57), 4));
	// vmrglw128 v60,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vor128 v53,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vmrghw128 v63,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vor128 v52,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vmrghw128 v62,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vrlimi128 v32,v37,4,3
	simde_mm_store_ps(ctx.v32.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 57), 4));
	// vor128 v7,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vrlimi128 v53,v55,4,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 57), 4));
	// vrlimi128 v52,v34,4,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 57), 4));
	// vor128 v6,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vrlimi128 v7,v38,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v38.f32), 78), 2));
	// vor128 v5,v53,v53
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v53.u8));
	// vor128 v50,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vrlimi128 v6,v37,2,2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 78), 2));
	// vrlimi128 v7,v55,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// vrlimi128 v5,v35,2,2
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 78), 2));
	// vor128 v48,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vrlimi128 v6,v33,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 147), 1));
	// vperm128 v12,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v49,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vperm128 v9,v58,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vrlimi128 v5,v38,1,1
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v38.f32), 147), 1));
	// vperm128 v46,v57,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vrlimi128 v50,v35,4,3
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 57), 4));
	// vperm128 v13,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor128 v47,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vsldoi v7,v12,v12,12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 4));
	// vrlimi128 v48,v37,2,2
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 78), 2));
	// vperm128 v10,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vrlimi128 v49,v38,4,3
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v38.f32), 57), 4));
	// vperm128 v11,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor128 v4,v50,v50
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v50.u8));
	// vsldoi v8,v13,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vrlimi128 v47,v51,4,3
	simde_mm_store_ps(ctx.v47.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 57), 4));
	// vmaddfp v26,v7,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v2,v62,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsldoi v13,v10,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vperm128 v45,v58,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vrlimi128 v4,v35,2,2
	simde_mm_store_ps(ctx.v4.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 78), 2));
	// vmaddfp v27,v12,v8,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v8,v63,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor128 v5,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v48.u8));
	// vsldoi v1,v11,v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 8));
	// vmaddfp v25,v9,v13,v0
	simde_mm_store_ps(ctx.v25.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v13,v9,v9,12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 4));
	// vor128 v6,v49,v49
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v49.u8));
	// vor128 v31,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vrlimi128 v5,v51,1,1
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 147), 1));
	// vor128 v7,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vmaddfp v24,v13,v10,v0
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v6,v35,2,2
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 78), 2));
	// vsldoi v12,v31,v31,12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 4));
	// vrlimi128 v4,v36,1,1
	simde_mm_store_ps(ctx.v4.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 147), 1));
	// vperm128 v10,v62,v63,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vrlimi128 v7,v37,2,2
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 78), 2));
	// vperm128 v13,v60,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v3,v63,v62,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v44,v61,v60,v4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmaddfp v22,v11,v13,v0
	simde_mm_store_ps(ctx.v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v42,v58,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vor128 v43,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vmaddfp v23,v8,v10,v0
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsldoi v13,v13,v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 8));
	// vor128 v40,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// vor128 v4,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v44.u8));
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// vrlimi128 v43,v35,4,3
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 57), 4));
	// vsldoi128 v5,v42,v42,12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 4));
	// vrlimi128 v7,v34,1,1
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 147), 1));
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// vrlimi128 v6,v55,1,1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// vsldoi128 v30,v40,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi v10,v4,v4,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 12));
	// vor128 v29,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vrlimi128 v43,v33,2,2
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 78), 2));
	// vor128 v37,v55,v55
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v55.u8));
	// vperm128 v9,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v41,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vrlimi128 v34,v33,4,3
	simde_mm_store_ps(ctx.v34.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 57), 4));
	// vnmsubfp v11,v10,v31,v27
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v27.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vperm128 v39,v61,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vnmsubfp v31,v4,v12,v26
	simde_mm_store_ps(ctx.v31.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v26.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v4,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vnmsubfp v12,v1,v13,v22
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v22.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v37,v36,4,3
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 57), 4));
	// vnmsubfp v13,v2,v3,v23
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v23.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v2,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vnmsubfp v10,v30,v29,v25
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v25.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v36,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v33,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vsldoi v3,v9,v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 12));
	// vrlimi128 v34,v35,2,2
	simde_mm_store_ps(ctx.v34.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 78), 2));
	// vperm128 v8,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v2,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v2,v4,v5,v24
	simde_mm_store_ps(ctx.v2.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v24.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v5,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vsldoi128 v1,v36,v36,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), 12));
	// vrlimi128 v37,v38,2,2
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v38.f32), 78), 2));
	// vperm128 v30,v62,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmaddfp v26,v9,v11,v0
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v5,v55,1,1
	simde_mm_store_ps(ctx.v5.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// vperm128 v9,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaddfp v27,v1,v12,v0
	simde_mm_store_ps(ctx.v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmrghw v29,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsldoi128 v1,v33,v33,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), 12));
	// vor v4,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmaddfp v23,v8,v10,v0
	simde_mm_store_ps(ctx.v23.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v5,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vor128 v32,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmaddfp v24,v1,v13,v0
	simde_mm_store_ps(ctx.v24.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm v4,v10,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vor128 v2,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vperm128 v1,v60,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vor128 v6,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// stvx128 v5,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v5,v8,v8,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 12));
	// vperm128 v8,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vnmsubfp v25,v3,v12,v26
	simde_mm_store_ps(ctx.v25.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v26.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v3,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vmaddfp v26,v4,v29,v0
	simde_mm_store_ps(ctx.v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v29.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v2,v55,1,1
	simde_mm_store_ps(ctx.v2.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// vnmsubfp v27,v6,v11,v27
	simde_mm_store_ps(ctx.v27.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v27.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v3,v55,1,1
	simde_mm_store_ps(ctx.v3.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 147), 1));
	// vnmsubfp v29,v5,v13,v23
	simde_mm_store_ps(ctx.v29.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v23.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vperm v4,v11,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor128 v11,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vor128 v2,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// vperm v3,v10,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vnmsubfp v5,v11,v10,v24
	simde_mm_store_ps(ctx.v5.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v24.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v6,v8,v31,v25
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v25.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v3,v4,v26
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v26.f32)));
	// vmaddfp v7,v30,v31,v27
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v30.f32), simde_mm_load_ps(ctx.v31.f32)), simde_mm_load_ps(ctx.v27.f32)));
	// vnmsubfp v8,v9,v2,v29
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v29.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v9,v1,v2,v5
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vspltw128 v58,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v57,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v56,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vsubfp128 v55,v57,v58
	simde_mm_store_ps(ctx.v55.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vsubfp128 v11,v55,v56
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vrefp v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v10,v11,v13,v28
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v28.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v10,v13,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v6,v13,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v7,v13,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v12,v8,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v9,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_835CFA88:
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CFA8C"))) PPC_WEAK_FUNC(sub_835CFA8C);
PPC_FUNC_IMPL(__imp__sub_835CFA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CFA90"))) PPC_WEAK_FUNC(sub_835CFA90);
PPC_FUNC_IMPL(__imp__sub_835CFA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r7,r1,-208
	ctx.r7.s64 = ctx.r1.s64 + -208;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// vspltw128 v0,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// vmaddfp v11,v0,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// vmaddfp v12,v13,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// addi r5,r1,-160
	ctx.r5.s64 = ctx.r1.s64 + -160;
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// lfs f11,-112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// lfs f2,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// lfs f12,16192(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16192);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f10,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v61,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// lfs f5,-144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
	// lfs f3,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f3.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stvx128 v62,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-32218
	ctx.r5.s64 = -2111438848;
	// lfs f11,-160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// stvx128 v62,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// lfs f0,16188(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,16180(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16180);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r8.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f0,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,-96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f13,-256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// lfs f13,21708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21708);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lfs f10,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f5,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f8,-252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -252, temp.u32);
	// lis r5,-32218
	ctx.r5.s64 = -2111438848;
	// stfs f6,-248(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -248, temp.u32);
	// lis r4,-32218
	ctx.r4.s64 = -2111438848;
	// stfs f4,-244(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -244, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f0,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// fmsubs f2,f1,f13,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,16184(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16176(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,16172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16172);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f1,-240(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// lfs f13,16168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,-224(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// stfs f11,-236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// stfs f10,-228(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// fmuls f9,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f9,-232(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
loc_835CFC14:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835cfc14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFC14;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835CFC38:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835cfc38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFC38;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_835CFC5C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x835cfc5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFC5C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835CFC70"))) PPC_WEAK_FUNC(sub_835CFC70);
PPC_FUNC_IMPL(__imp__sub_835CFC70) {
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
	// lis r8,-31744
	ctx.r8.s64 = -2080374784;
	// lwz r9,16404(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16404);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835cfd10
	if (!cr6.eq) goto loc_835CFD10;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r31,r10,16296
	ctx.r31.s64 = ctx.r10.s64 + 16296;
	// ori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 | 1;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// stw r10,16404(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16404, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_835CFCB4:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835cfcb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFCB4;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CFCCC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cfccc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFCCC;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CFCE4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cfce4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFCE4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// bl 0x831cdcc8
	ctx.lr = 0x835CFCF8;
	sub_831CDCC8(ctx, base);
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
loc_835CFD10:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// addi r3,r11,16296
	ctx.r3.s64 = ctx.r11.s64 + 16296;
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

__attribute__((alias("__imp__sub_835CFD2C"))) PPC_WEAK_FUNC(sub_835CFD2C);
PPC_FUNC_IMPL(__imp__sub_835CFD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CFD30"))) PPC_WEAK_FUNC(sub_835CFD30);
PPC_FUNC_IMPL(__imp__sub_835CFD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835CFD38;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mullw r31,r7,r8
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835cfda8
	if (cr6.eq) goto loc_835CFDA8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x835CFD80;
	sub_82595150(ctx, base);
	// lwz r30,20(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835cfda0
	if (cr6.eq) goto loc_835CFDA0;
	// bl 0x82595188
	ctx.lr = 0x835CFD90;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835CFDA0;
	sub_825952B8(ctx, base);
loc_835CFDA0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x835CFDA8;
	sub_82595170(ctx, base);
loc_835CFDA8:
	// lis r11,606
	ctx.r11.s64 = 39714816;
	// ori r10,r11,53399
	ctx.r10.u64 = ctx.r11.u64 | 53399;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bgt cr6,0x835cfdcc
	if (cr6.gt) goto loc_835CFDCC;
	// mulli r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 * 108;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x835cfdd0
	if (!cr6.gt) goto loc_835CFDD0;
loc_835CFDCC:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_835CFDD0:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x835CFDE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835cfe58
	if (cr6.eq) goto loc_835CFE58;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r7,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r7.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt 0x835cfe50
	if (cr0.lt) goto loc_835CFE50;
loc_835CFDFC:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CFE0C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cfe0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFE0C;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CFE24:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cfe24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFE24;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 + 68;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835CFE3C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cfe3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFE3C;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r9,r9,108
	ctx.r9.s64 = ctx.r9.s64 + 108;
	// bge 0x835cfdfc
	if (!cr0.lt) goto loc_835CFDFC;
loc_835CFE50:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x835cfe5c
	goto loc_835CFE5C;
loc_835CFE58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_835CFE5C:
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835cfe74
	if (cr6.eq) goto loc_835CFE74;
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
	// stw r25,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r25.u32);
loc_835CFE74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835CFE7C"))) PPC_WEAK_FUNC(sub_835CFE7C);
PPC_FUNC_IMPL(__imp__sub_835CFE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835CFE80"))) PPC_WEAK_FUNC(sub_835CFE80);
PPC_FUNC_IMPL(__imp__sub_835CFE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x835CFE88;
	__savegprlr_20(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82586ac0
	ctx.lr = 0x835CFE9C;
	sub_82586AC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82586c08
	ctx.lr = 0x835CFEAC;
	sub_82586C08(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825832e8
	ctx.lr = 0x835CFEB4;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,80
	cr6.compare<uint32_t>(ctx.r3.u32, 80, xer);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// blt cr6,0x835cfee8
	if (cr6.lt) goto loc_835CFEE8;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82586e50
	ctx.lr = 0x835CFECC;
	sub_82586E50(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,65519
	cr6.compare<uint32_t>(ctx.r11.u32, 65519, xer);
	// beq cr6,0x835cfefc
	if (cr6.eq) goto loc_835CFEFC;
	// cmplwi cr6,r11,61439
	cr6.compare<uint32_t>(ctx.r11.u32, 61439, xer);
	// beq cr6,0x835cfefc
	if (cr6.eq) goto loc_835CFEFC;
loc_835CFEE4:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_835CFEE8:
	// bl 0x82586bd8
	ctx.lr = 0x835CFEEC;
	sub_82586BD8(ctx, base);
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_835CFEFC:
	// addis r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -65536;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,4097
	ctx.r11.s64 = ctx.r11.s64 + 4097;
	// li r5,80
	ctx.r5.s64 = 80;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x831ce980
	ctx.lr = 0x835CFF18;
	sub_831CE980(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x835d0114
	if (cr6.eq) goto loc_835D0114;
	// lhz r11,210(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 210);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// rlwinm r8,r11,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// sth r7,210(r1)
	PPC_STORE_U16(ctx.r1.u32 + 210, ctx.r7.u16);
loc_835CFF44:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// rlwimi r7,r10,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// rlwimi r5,r10,16,16,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// rlwimi r3,r10,16,16,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// rlwimi r29,r10,16,16,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r28,r10,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// rlwimi r26,r10,16,16,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r25,r10,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// rlwimi r24,r10,16,16,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r23,r10,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r9,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r8,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r7,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r5,r5,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFF;
	// rlwinm r4,r4,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r3,r3,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// rlwinm r31,r31,8,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r29,r29,24,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFFFF;
	// rlwinm r28,r28,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rlwinm r26,r26,24,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFFFF;
	// rlwinm r25,r25,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r24,r24,24,16,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFFFF;
	// rlwinm r23,r23,8,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 | ctx.r31.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// or r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 | ctx.r28.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// or r4,r26,r25
	ctx.r4.u64 = ctx.r26.u64 | ctx.r25.u64;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// or r3,r24,r23
	ctx.r3.u64 = ctx.r24.u64 | ctx.r23.u64;
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwu r5,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835cff44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835CFF44;
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r4,r9,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r9,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r4,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r3,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r4,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r4.u32);
	// stw r3,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
loc_835D0114:
	// lhz r10,210(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 210);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x835cfee4
	if (!cr6.eq) goto loc_835CFEE4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x835D0130;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835cf668
	ctx.lr = 0x835D013C;
	sub_835CF668(ctx, base);
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x835cfd30
	ctx.lr = 0x835D014C;
	sub_835CFD30(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw. r28,r8,r9
	ctx.r28.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x835d072c
	if (cr0.eq) goto loc_835D072C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_835D0178:
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82586e50
	ctx.lr = 0x835D0188;
	sub_82586E50(ctx, base);
	// cmplwi cr6,r3,108
	cr6.compare<uint32_t>(ctx.r3.u32, 108, xer);
	// bne cr6,0x835cfee4
	if (!cr6.eq) goto loc_835CFEE4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r5,108
	ctx.r5.s64 = 108;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x835D01A4;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x835d071c
	if (cr6.eq) goto loc_835D071C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D01C8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x835d01c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D01C8;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// rlwimi r4,r11,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// rlwimi r26,r11,16,16,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r25,r11,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,9
	ctx.r10.s64 = 9;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// rlwimi r24,r11,16,16,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r23,r11,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r21,r9,24,16,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r21,r7
	ctx.r7.u64 = ctx.r21.u64 | ctx.r7.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r22,r11,16,0,15
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r22.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// rlwinm r4,r4,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// rlwinm r26,r26,24,16,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFFFF;
	// rlwinm r25,r25,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r24,r24,24,16,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFFFF;
	// rlwinm r23,r23,8,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r10,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r22,r22,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// or r5,r4,r3
	ctx.r5.u64 = ctx.r4.u64 | ctx.r3.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// or r4,r26,r25
	ctx.r4.u64 = ctx.r26.u64 | ctx.r25.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// or r3,r24,r23
	ctx.r3.u64 = ctx.r24.u64 | ctx.r23.u64;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r6,r6,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r4,r11,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r4,r4,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
loc_835D0370:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x835d0370
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0370;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_835D0398:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835d0398
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0398;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// li r10,9
	ctx.r10.s64 = 9;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r20,r9,24,16,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// or r7,r20,r7
	ctx.r7.u64 = ctx.r20.u64 | ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r4,r11,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// rlwimi r26,r11,16,16,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r25,r11,16,0,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r25.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// rlwimi r24,r11,16,16,31
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r24.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r23,r11,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// rlwinm r10,r26,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFFFF;
	// rlwimi r22,r11,16,16,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r6,r6,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r5,r5,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r26,r25,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r21,r11,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r25,r24,24,16,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 24) & 0xFFFF;
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r4,r4,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r3,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r24,r23,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r23,r22,24,16,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 24) & 0xFFFF;
	// rlwinm r22,r21,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// or r5,r4,r3
	ctx.r5.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 | ctx.r26.u64;
	// or r3,r25,r24
	ctx.r3.u64 = ctx.r25.u64 | ctx.r24.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// or r10,r23,r22
	ctx.r10.u64 = ctx.r23.u64 | ctx.r22.u64;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r7,r11,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwimi r6,r11,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r4,r6,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r10,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r7,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r5,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
loc_835D0540:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x835d0540
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0540;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_835D0568:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x835d0568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0568;
	// li r10,9
	ctx.r10.s64 = 9;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r6,r10,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// rlwimi r3,r11,16,16,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFF0000);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r7,r3,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r4,r11,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r10,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r3,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r4,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r6,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r3,r5,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r6,r10,24,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwimi r3,r11,16,16,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// rlwinm r7,r3,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r6,r10,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF0000;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwimi r4,r11,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// rlwinm r11,r4,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r3,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// or r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwimi r4,r11,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r5,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r4,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r3,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
loc_835D0710:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x835d0710
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0710;
loc_835D071C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x835d0178
	if (cr6.lt) goto loc_835D0178;
loc_835D072C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82586bd8
	ctx.lr = 0x835D0734;
	sub_82586BD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D0740"))) PPC_WEAK_FUNC(sub_835D0740);
PPC_FUNC_IMPL(__imp__sub_835D0740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835D0748;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x835d0864
	if (!cr6.lt) goto loc_835D0864;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f31,f1,f12
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// beq cr6,0x835d07e4
	if (cr6.eq) goto loc_835D07E4;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x835d07e4
	if (cr6.gt) goto loc_835D07E4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bgt cr6,0x835d07e4
	if (cr6.gt) goto loc_835D07E4;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, xer);
	// bgt cr6,0x835d07e4
	if (cr6.gt) goto loc_835D07E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r5,108
	ctx.r11.s64 = ctx.r5.s64 * 108;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x835d07ec
	goto loc_835D07EC;
loc_835D07E4:
	// bl 0x835cfc70
	ctx.lr = 0x835D07E8;
	sub_835CFC70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_835D07EC:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835d0840
	if (cr6.eq) goto loc_835D0840;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bgt cr6,0x835d0840
	if (cr6.gt) goto loc_835D0840;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bgt cr6,0x835d0840
	if (cr6.gt) goto loc_835D0840;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bgt cr6,0x835d0840
	if (cr6.gt) goto loc_835D0840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r7,108
	ctx.r11.s64 = ctx.r7.s64 * 108;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x835d0844
	goto loc_835D0844;
loc_835D0840:
	// bl 0x835cfc70
	ctx.lr = 0x835D0844;
	sub_835CFC70(ctx, base);
loc_835D0844:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835cf3b0
	ctx.lr = 0x835D0858;
	sub_835CF3B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_835D0864:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835d08b4
	if (cr6.eq) goto loc_835D08B4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bgt cr6,0x835d08b4
	if (cr6.gt) goto loc_835D08B4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x835d08b4
	if (cr6.gt) goto loc_835D08B4;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// bgt cr6,0x835d08b4
	if (cr6.gt) goto loc_835D08B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mulli r11,r6,108
	ctx.r11.s64 = ctx.r6.s64 * 108;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x835d08b8
	goto loc_835D08B8;
loc_835D08B4:
	// bl 0x835cfc70
	ctx.lr = 0x835D08B8;
	sub_835CFC70(ctx, base);
loc_835D08B8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x835D08C8;
	sub_831CE980(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D08D4"))) PPC_WEAK_FUNC(sub_835D08D4);
PPC_FUNC_IMPL(__imp__sub_835D08D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D08D8"))) PPC_WEAK_FUNC(sub_835D08D8);
PPC_FUNC_IMPL(__imp__sub_835D08D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835D08E0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fctidz f0,f2
	ctx.f0.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x835d0740
	ctx.lr = 0x835D0914;
	sub_835D0740(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x835d0a00
	if (!cr6.lt) goto loc_835D0A00;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// std r31,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r31.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r31,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r31.u32);
loc_835D094C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d094c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D094C;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0964:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0964
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0964;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d0740
	ctx.lr = 0x835D0984;
	sub_835D0740(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,9
	ctx.r10.s64 = 9;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r31,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r31.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r31,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r31.u32);
	// fsubs f1,f30,f12
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
loc_835D09C4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d09c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D09C4;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D09D8:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d09d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D09D8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x835cf3b0
	ctx.lr = 0x835D09F0;
	sub_835CF3B0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x835D0A00;
	sub_831CE980(ctx, base);
loc_835D0A00:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D0A10"))) PPC_WEAK_FUNC(sub_835D0A10);
PPC_FUNC_IMPL(__imp__sub_835D0A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D0A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d0a68
	if (cr6.eq) goto loc_835D0A68;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x835D0A40;
	sub_82595150(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835d0a60
	if (cr6.eq) goto loc_835D0A60;
	// bl 0x82595188
	ctx.lr = 0x835D0A50;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835D0A60;
	sub_825952B8(ctx, base);
loc_835D0A60:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x835D0A68;
	sub_82595170(ctx, base);
loc_835D0A68:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x835D0A78;
	sub_825952B8(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x835D0A88;
	sub_825952B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D0A90"))) PPC_WEAK_FUNC(sub_835D0A90);
PPC_FUNC_IMPL(__imp__sub_835D0A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D0A98;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d0b08
	if (!cr6.eq) goto loc_835D0B08;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0AD0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0ad0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0AD0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0AE8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0ae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0AE8;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r28,68
	ctx.r11.s64 = ctx.r28.s64 + 68;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0AFC:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0afc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0AFC;
	// b 0x835d0da8
	goto loc_835D0DA8;
loc_835D0B08:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// li r9,32
	ctx.r9.s64 = 32;
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v9,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v8,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v9,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltw128 v7,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v6,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// vmaddfp v12,v12,v8,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lvx128 v11,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lvx128 v10,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// addi r5,r7,-24912
	ctx.r5.s64 = ctx.r7.s64 + -24912;
	// lfs f0,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmaddfp v13,v11,v7,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vspltw128 v5,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vmaddfp v12,v10,v6,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lvx128 v9,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// lvx128 v60,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r31,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r31.u64);
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// std r31,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r31.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r31,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r31.u64);
	// vaddfp v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v58,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v13,v5,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v13,v13,v61
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaddfp v0,v13,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vminfp128 v59,v60,v0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp128 v57,v58,v59
	simde_mm_store_ps(ctx.v57.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v59.f32)));
	// li r10,9
	ctx.r10.s64 = 9;
	// stvx128 v57,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f29,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fctidz f4,f29
	ctx.f4.s64 = (ctx.f29.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// stw r31,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r31.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0C70:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0c70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0C70;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0C88:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0c88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0C88;
	// lfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x835d08d8
	ctx.lr = 0x835D0CB0;
	sub_835D08D8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x835d0d98
	if (!cr6.lt) goto loc_835D0D98;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// std r31,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r31.u64);
	// stw r31,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r31.u32);
loc_835D0CE4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0ce4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0CE4;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0CFC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0cfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0CFC;
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835d08d8
	ctx.lr = 0x835D0D1C;
	sub_835D08D8(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,9
	ctx.r10.s64 = 9;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// std r31,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r31.u64);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// std r31,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r31.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r31,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r31.u32);
	// fsubs f1,f29,f12
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
loc_835D0D5C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0d5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0D5C;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,420
	ctx.r11.s64 = ctx.r1.s64 + 420;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D0D70:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d0d70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0D70;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x835cf3b0
	ctx.lr = 0x835D0D88;
	sub_835CF3B0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x831ce980
	ctx.lr = 0x835D0D98;
	sub_831CE980(ctx, base);
loc_835D0D98:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x835D0DA8;
	sub_831CE980(ctx, base);
loc_835D0DA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D0DC0"))) PPC_WEAK_FUNC(sub_835D0DC0);
PPC_FUNC_IMPL(__imp__sub_835D0DC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D0DCC"))) PPC_WEAK_FUNC(sub_835D0DCC);
PPC_FUNC_IMPL(__imp__sub_835D0DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D0DD0"))) PPC_WEAK_FUNC(sub_835D0DD0);
PPC_FUNC_IMPL(__imp__sub_835D0DD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D0DDC"))) PPC_WEAK_FUNC(sub_835D0DDC);
PPC_FUNC_IMPL(__imp__sub_835D0DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D0DE0"))) PPC_WEAK_FUNC(sub_835D0DE0);
PPC_FUNC_IMPL(__imp__sub_835D0DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x835d0df8
	if (!cr6.gt) goto loc_835D0DF8;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// blr 
	return;
loc_835D0DF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D0E00"))) PPC_WEAK_FUNC(sub_835D0E00);
PPC_FUNC_IMPL(__imp__sub_835D0E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x835d0e44
	if (!cr6.gt) goto loc_835D0E44;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x835d0e3c
	if (cr6.eq) goto loc_835D0E3C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_835D0E28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x835d0e28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0E28;
loc_835D0E3C:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_835D0E44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D0E4C"))) PPC_WEAK_FUNC(sub_835D0E4C);
PPC_FUNC_IMPL(__imp__sub_835D0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D0E50"))) PPC_WEAK_FUNC(sub_835D0E50);
PPC_FUNC_IMPL(__imp__sub_835D0E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x835d0ea0
	if (!cr6.gt) goto loc_835D0EA0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x835d0e94
	if (cr6.eq) goto loc_835D0E94;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_835D0E7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x835d0e7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0E7C;
loc_835D0E94:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_835D0EA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D0EA8"))) PPC_WEAK_FUNC(sub_835D0EA8);
PPC_FUNC_IMPL(__imp__sub_835D0EA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x835d0e50
	sub_835D0E50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D0EAC"))) PPC_WEAK_FUNC(sub_835D0EAC);
PPC_FUNC_IMPL(__imp__sub_835D0EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D0EB0"))) PPC_WEAK_FUNC(sub_835D0EB0);
PPC_FUNC_IMPL(__imp__sub_835D0EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x835d0f00
	if (!cr6.gt) goto loc_835D0F00;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x835d0ef4
	if (cr6.eq) goto loc_835D0EF4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_835D0EDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x835d0edc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0EDC;
loc_835D0EF4:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// blr 
	return;
loc_835D0F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D0F08"))) PPC_WEAK_FUNC(sub_835D0F08);
PPC_FUNC_IMPL(__imp__sub_835D0F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x835d0eb0
	sub_835D0EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D0F0C"))) PPC_WEAK_FUNC(sub_835D0F0C);
PPC_FUNC_IMPL(__imp__sub_835D0F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D0F10"))) PPC_WEAK_FUNC(sub_835D0F10);
PPC_FUNC_IMPL(__imp__sub_835D0F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D0F18;
	__savegprlr_28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r31,15
	ctx.r28.s64 = ctx.r31.s64 + 15;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_835D0F3C:
	// subf r10,r29,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r29.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d0f74
	if (cr6.eq) goto loc_835D0F74;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835d0f64
	if (cr6.eq) goto loc_835D0F64;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_835D0F64:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x835d0f74
	if (cr6.eq) goto loc_835D0F74;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_835D0F74:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835d0f94
	if (cr6.eq) goto loc_835D0F94;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835d0f94
	if (cr6.eq) goto loc_835D0F94;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_835D0F94:
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq cr6,0x835d0fb8
	if (cr6.eq) goto loc_835D0FB8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x835d0fb8
	if (cr6.eq) goto loc_835D0FB8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_835D0FB8:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq cr6,0x835d0fe4
	if (cr6.eq) goto loc_835D0FE4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835d0fe4
	if (cr6.eq) goto loc_835D0FE4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_835D0FE4:
	// lhz r31,2(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x835d0f3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D0F3C;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1008"))) PPC_WEAK_FUNC(sub_835D1008);
PPC_FUNC_IMPL(__imp__sub_835D1008) {
	PPC_FUNC_PROLOGUE();
	// b 0x835d0f10
	sub_835D0F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D100C"))) PPC_WEAK_FUNC(sub_835D100C);
PPC_FUNC_IMPL(__imp__sub_835D100C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1010"))) PPC_WEAK_FUNC(sub_835D1010);
PPC_FUNC_IMPL(__imp__sub_835D1010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1020"))) PPC_WEAK_FUNC(sub_835D1020);
PPC_FUNC_IMPL(__imp__sub_835D1020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1050"))) PPC_WEAK_FUNC(sub_835D1050);
PPC_FUNC_IMPL(__imp__sub_835D1050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D1058;
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
	// bl 0x83586f98
	ctx.lr = 0x835D106C;
	sub_83586F98(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r10,r11,16248
	ctx.r10.s64 = ctx.r11.s64 + 16248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8386b2b8
	ctx.lr = 0x835D108C;
	sub_8386B2B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d10a4
	if (cr6.eq) goto loc_835D10A4;
	// stb r10,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r10.u8);
loc_835D10A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d10b8
	if (cr6.eq) goto loc_835D10B8;
	// stb r10,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r10.u8);
loc_835D10B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D10C0"))) PPC_WEAK_FUNC(sub_835D10C0);
PPC_FUNC_IMPL(__imp__sub_835D10C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D10C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83586f98
	ctx.lr = 0x835D10DC;
	sub_83586F98(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,16248
	ctx.r10.s64 = ctx.r11.s64 + 16248;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8386b518
	ctx.lr = 0x835D1100;
	sub_8386B518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1114
	if (cr6.eq) goto loc_835D1114;
	// stb r30,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r30.u8);
loc_835D1114:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1128
	if (cr6.eq) goto loc_835D1128;
	// stb r30,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r30.u8);
loc_835D1128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1130"))) PPC_WEAK_FUNC(sub_835D1130);
PPC_FUNC_IMPL(__imp__sub_835D1130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D1138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83586f98
	ctx.lr = 0x835D114C;
	sub_83586F98(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,16248
	ctx.r10.s64 = ctx.r11.s64 + 16248;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8386b768
	ctx.lr = 0x835D1170;
	sub_8386B768(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1184
	if (cr6.eq) goto loc_835D1184;
	// stb r30,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r30.u8);
loc_835D1184:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1198
	if (cr6.eq) goto loc_835D1198;
	// stb r30,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r30.u8);
loc_835D1198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D11A0"))) PPC_WEAK_FUNC(sub_835D11A0);
PPC_FUNC_IMPL(__imp__sub_835D11A0) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,16248
	ctx.r10.s64 = ctx.r11.s64 + 16248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8386b9e8
	ctx.lr = 0x835D11D0;
	sub_8386B9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83586fc0
	ctx.lr = 0x835D11D8;
	sub_83586FC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835d11f8
	if (cr6.eq) goto loc_835D11F8;
	// bl 0x82595188
	ctx.lr = 0x835D11E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835D11F8;
	sub_825952B8(ctx, base);
loc_835D11F8:
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

__attribute__((alias("__imp__sub_835D1214"))) PPC_WEAK_FUNC(sub_835D1214);
PPC_FUNC_IMPL(__imp__sub_835D1214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1218"))) PPC_WEAK_FUNC(sub_835D1218);
PPC_FUNC_IMPL(__imp__sub_835D1218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835D1220;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83588780
	ctx.lr = 0x835D1234;
	sub_83588780(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1270
	if (cr6.eq) goto loc_835D1270;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d1270
	if (cr6.eq) goto loc_835D1270;
	// lbz r11,157(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1270
	if (cr6.eq) goto loc_835D1270;
	// lbz r11,149(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 149);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x835d1274
	if (!cr6.eq) goto loc_835D1274;
loc_835D1270:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_835D1274:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d12ec
	if (cr6.eq) goto loc_835D12EC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8386b2b8
	ctx.lr = 0x835D1298;
	sub_8386B2B8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83588c58
	ctx.lr = 0x835D12AC;
	sub_83588C58(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d12bc
	if (cr6.eq) goto loc_835D12BC;
	// stb r27,156(r11)
	PPC_STORE_U8(ctx.r11.u32 + 156, ctx.r27.u8);
loc_835D12BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d12cc
	if (cr6.eq) goto loc_835D12CC;
	// stb r27,148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 148, ctx.r27.u8);
loc_835D12CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d12dc
	if (cr6.eq) goto loc_835D12DC;
	// stb r27,157(r11)
	PPC_STORE_U8(ctx.r11.u32 + 157, ctx.r27.u8);
loc_835D12DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d12ec
	if (cr6.eq) goto loc_835D12EC;
	// stb r27,149(r11)
	PPC_STORE_U8(ctx.r11.u32 + 149, ctx.r27.u8);
loc_835D12EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D12F4"))) PPC_WEAK_FUNC(sub_835D12F4);
PPC_FUNC_IMPL(__imp__sub_835D12F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D12F8"))) PPC_WEAK_FUNC(sub_835D12F8);
PPC_FUNC_IMPL(__imp__sub_835D12F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D1300;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x835d135c
	if (!cr6.eq) goto loc_835D135C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d1350
	if (cr6.eq) goto loc_835D1350;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x835D1330;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835D1348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x835D1350;
	sub_82595170(ctx, base);
loc_835D1350:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D135C:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82c3b448
	ctx.lr = 0x835D1374;
	sub_82C3B448(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x835d13a8
	if (cr6.eq) goto loc_835D13A8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x835D13A0;
	sub_831CE420(ctx, base);
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_835D13A8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x835d13f8
	if (!cr6.eq) goto loc_835D13F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x835D13CC;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835D13E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x835D13EC;
	sub_82595170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_835D13F8:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1408"))) PPC_WEAK_FUNC(sub_835D1408);
PPC_FUNC_IMPL(__imp__sub_835D1408) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,16288
	ctx.r10.s64 = ctx.r11.s64 + 16288;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835d1444
	if (cr6.eq) goto loc_835D1444;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x835D1444;
	sub_825952B8(ctx, base);
loc_835D1444:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_835D1468"))) PPC_WEAK_FUNC(sub_835D1468);
PPC_FUNC_IMPL(__imp__sub_835D1468) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,16288
	ctx.r10.s64 = ctx.r11.s64 + 16288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x835d14ac
	if (cr6.eq) goto loc_835D14AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x835D14AC;
	sub_825952B8(ctx, base);
loc_835D14AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// beq cr6,0x835d14dc
	if (cr6.eq) goto loc_835D14DC;
	// bl 0x82595188
	ctx.lr = 0x835D14CC;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835D14DC;
	sub_825952B8(ctx, base);
loc_835D14DC:
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

__attribute__((alias("__imp__sub_835D14F8"))) PPC_WEAK_FUNC(sub_835D14F8);
PPC_FUNC_IMPL(__imp__sub_835D14F8) {
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
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// addi r6,r10,16288
	ctx.r6.s64 = ctx.r10.s64 + 16288;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// beq cr6,0x835d1554
	if (cr6.eq) goto loc_835D1554;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x835977d8
	ctx.lr = 0x835D1554;
	sub_835977D8(ctx, base);
loc_835D1554:
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

__attribute__((alias("__imp__sub_835D156C"))) PPC_WEAK_FUNC(sub_835D156C);
PPC_FUNC_IMPL(__imp__sub_835D156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1570"))) PPC_WEAK_FUNC(sub_835D1570);
PPC_FUNC_IMPL(__imp__sub_835D1570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_835D1588:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x835d1588
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D1588;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D159C"))) PPC_WEAK_FUNC(sub_835D159C);
PPC_FUNC_IMPL(__imp__sub_835D159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D15A0"))) PPC_WEAK_FUNC(sub_835D15A0);
PPC_FUNC_IMPL(__imp__sub_835D15A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 228, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r11,232(r9)
	PPC_STORE_U8(ctx.r9.u32 + 232, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D15B8"))) PPC_WEAK_FUNC(sub_835D15B8);
PPC_FUNC_IMPL(__imp__sub_835D15B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r6,236
	ctx.r11.s64 = ctx.r6.s64 + 236;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_835D15D0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x835d15d0
	if (!cr0.eq) goto loc_835D15D0;
	// stw r9,428(r6)
	PPC_STORE_U32(ctx.r6.u32 + 428, ctx.r9.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stb r9,233(r10)
	PPC_STORE_U8(ctx.r10.u32 + 233, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1600"))) PPC_WEAK_FUNC(sub_835D1600);
PPC_FUNC_IMPL(__imp__sub_835D1600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// addi r10,r11,160
	ctx.r10.s64 = ctx.r11.s64 + 160;
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r8,224(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D163C"))) PPC_WEAK_FUNC(sub_835D163C);
PPC_FUNC_IMPL(__imp__sub_835D163C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1640"))) PPC_WEAK_FUNC(sub_835D1640);
PPC_FUNC_IMPL(__imp__sub_835D1640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r4.u32);
	// stb r10,232(r11)
	PPC_STORE_U8(ctx.r11.u32 + 232, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1660"))) PPC_WEAK_FUNC(sub_835D1660);
PPC_FUNC_IMPL(__imp__sub_835D1660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,236
	ctx.r11.s64 = ctx.r10.s64 + 236;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bne cr6,0x835d16b0
	if (!cr6.eq) goto loc_835D16B0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x835d16b0
	if (!cr6.eq) goto loc_835D16B0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x835d16b4
	if (cr6.eq) goto loc_835D16B4;
loc_835D16B0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_835D16B4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// slw r8,r9,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r7,428(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 428, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D16E4"))) PPC_WEAK_FUNC(sub_835D16E4);
PPC_FUNC_IMPL(__imp__sub_835D16E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D16E8"))) PPC_WEAK_FUNC(sub_835D16E8);
PPC_FUNC_IMPL(__imp__sub_835D16E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r4.u32);
	// stb r10,233(r11)
	PPC_STORE_U8(ctx.r11.u32 + 233, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1708"))) PPC_WEAK_FUNC(sub_835D1708);
PPC_FUNC_IMPL(__imp__sub_835D1708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r6,9(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r5,10(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addic r4,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// subfe r8,r4,r6
	temp.u8 = (~ctx.r4.u32 + ctx.r6.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r7,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r3.s64;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// and r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D176C"))) PPC_WEAK_FUNC(sub_835D176C);
PPC_FUNC_IMPL(__imp__sub_835D176C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1770"))) PPC_WEAK_FUNC(sub_835D1770);
PPC_FUNC_IMPL(__imp__sub_835D1770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r6.u64);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// or r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 | ctx.r5.u64;
	// addic r5,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// subfe r8,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r5.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// or r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 | ctx.r3.u64;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// or r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 | ctx.r9.u64;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D17F4"))) PPC_WEAK_FUNC(sub_835D17F4);
PPC_FUNC_IMPL(__imp__sub_835D17F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D17F8"))) PPC_WEAK_FUNC(sub_835D17F8);
PPC_FUNC_IMPL(__imp__sub_835D17F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// std r9,80(r11)
	PPC_STORE_U64(ctx.r11.u32 + 80, ctx.r9.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r7,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r7.u64);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subfic r3,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r7,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r3,r7,r6
	temp.u8 = (~ctx.r7.u32 + ctx.r6.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1848"))) PPC_WEAK_FUNC(sub_835D1848);
PPC_FUNC_IMPL(__imp__sub_835D1848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// std r10,112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r8.u64);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// std r7,128(r11)
	PPC_STORE_U64(ctx.r11.u32 + 128, ctx.r7.u64);
	// ld r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 136, ctx.r6.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rotlwi r4,r3,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// or r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// rldicr r6,r9,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rlwinm r5,r10,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// subfe r4,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// std r9,144(r11)
	PPC_STORE_U64(ctx.r11.u32 + 144, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D18DC"))) PPC_WEAK_FUNC(sub_835D18DC);
PPC_FUNC_IMPL(__imp__sub_835D18DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D18E0"))) PPC_WEAK_FUNC(sub_835D18E0);
PPC_FUNC_IMPL(__imp__sub_835D18E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x835d1958
	if (cr6.gt) goto loc_835D1958;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x835d1910
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1910;
	// bdzf 4*cr6+eq,0x835d1958
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1958;
	// bdzf 4*cr6+eq,0x835d191c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D191C;
	// bdzf 4*cr6+eq,0x835d1928
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1928;
	// bdzf 4*cr6+eq,0x835d1958
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1958;
	// bdzf 4*cr6+eq,0x835d1934
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1934;
	// bdzf 4*cr6+eq,0x835d1940
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1940;
	// bne cr6,0x835d194c
	if (!cr6.eq) goto loc_835D194C;
loc_835D1910:
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_835D191C:
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,447
	ctx.r3.u64 = ctx.r3.u64 | 447;
	// blr 
	return;
loc_835D1928:
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,43872
	ctx.r3.u64 = ctx.r3.u64 | 43872;
	// blr 
	return;
loc_835D1934:
	// lis r3,11682
	ctx.r3.s64 = 765591552;
	// ori r3,r3,43940
	ctx.r3.u64 = ctx.r3.u64 | 43940;
	// blr 
	return;
loc_835D1940:
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,344
	ctx.r3.u64 = ctx.r3.u64 | 344;
	// blr 
	return;
loc_835D194C:
	// lis r3,11552
	ctx.r3.s64 = 757071872;
	// ori r3,r3,406
	ctx.r3.u64 = ctx.r3.u64 | 406;
	// blr 
	return;
loc_835D1958:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1964"))) PPC_WEAK_FUNC(sub_835D1964);
PPC_FUNC_IMPL(__imp__sub_835D1964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1968"))) PPC_WEAK_FUNC(sub_835D1968);
PPC_FUNC_IMPL(__imp__sub_835D1968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bgt cr6,0x835d19d4
	if (cr6.gt) goto loc_835D19D4;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x835d1998
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1998;
	// bdzf 4*cr6+eq,0x835d19d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D19D4;
	// bdzf 4*cr6+eq,0x835d1998
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D1998;
	// bdzf 4*cr6+eq,0x835d19a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D19A4;
	// bdzf 4*cr6+eq,0x835d19d4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D19D4;
	// bdzf 4*cr6+eq,0x835d19b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D19B0;
	// bdzf 4*cr6+eq,0x835d19bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_835D19BC;
	// bne cr6,0x835d19c8
	if (!cr6.eq) goto loc_835D19C8;
loc_835D1998:
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// blr 
	return;
loc_835D19A4:
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,43869
	ctx.r3.u64 = ctx.r3.u64 | 43869;
	// blr 
	return;
loc_835D19B0:
	// lis r3,11682
	ctx.r3.s64 = 765591552;
	// ori r3,r3,43940
	ctx.r3.u64 = ctx.r3.u64 | 43940;
	// blr 
	return;
loc_835D19BC:
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,344
	ctx.r3.u64 = ctx.r3.u64 | 344;
	// blr 
	return;
loc_835D19C8:
	// lis r3,11552
	ctx.r3.s64 = 757071872;
	// ori r3,r3,406
	ctx.r3.u64 = ctx.r3.u64 | 406;
	// blr 
	return;
loc_835D19D4:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D19E0"))) PPC_WEAK_FUNC(sub_835D19E0);
PPC_FUNC_IMPL(__imp__sub_835D19E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x835D19E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 & ctx.r4.u64;
	// bl 0x83866040
	ctx.lr = 0x835D1A08;
	sub_83866040(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832f0
	ctx.lr = 0x835D1A14;
	sub_825832F0(ctx, base);
	// bl 0x835d1968
	ctx.lr = 0x835D1A18;
	sub_835D1968(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x835D1A30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x835D1A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// bl 0x83867550
	ctx.lr = 0x835D1A64;
	sub_83867550(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1A78"))) PPC_WEAK_FUNC(sub_835D1A78);
PPC_FUNC_IMPL(__imp__sub_835D1A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfc r9,r10,r4
	xer.ca = ctx.r4.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 & ctx.r4.u64;
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D1AA8"))) PPC_WEAK_FUNC(sub_835D1AA8);
PPC_FUNC_IMPL(__imp__sub_835D1AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D1AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835d14f8
	ctx.lr = 0x835D1ADC;
	sub_835D14F8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r9,r11,16360
	ctx.r9.s64 = ctx.r11.s64 + 16360;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1B04"))) PPC_WEAK_FUNC(sub_835D1B04);
PPC_FUNC_IMPL(__imp__sub_835D1B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1B08"))) PPC_WEAK_FUNC(sub_835D1B08);
PPC_FUNC_IMPL(__imp__sub_835D1B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x835D1B10;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x835d1b44
	if (!cr6.eq) goto loc_835D1B44;
	// li r31,16
	ctx.r31.s64 = 16;
loc_835D1B44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d18e0
	ctx.lr = 0x835D1B4C;
	sub_835D18E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835d55c8
	ctx.lr = 0x835D1B64;
	sub_835D55C8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83868428
	ctx.lr = 0x835D1B9C;
	sub_83868428(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835d1968
	ctx.lr = 0x835D1BA8;
	sub_835D1968(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lis r7,64
	ctx.r7.s64 = 4194304;
	// bl 0x83867500
	ctx.lr = 0x835D1BC0;
	sub_83867500(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x835d1be0
	if (!cr6.eq) goto loc_835D1BE0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83868630
	ctx.lr = 0x835D1BD4;
	sub_83868630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_835D1BE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835D1BF8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d1c44
	if (cr6.eq) goto loc_835D1C44;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x835d14f8
	ctx.lr = 0x835D1C20;
	sub_835D14F8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r25,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,16360
	ctx.r10.s64 = ctx.r11.s64 + 16360;
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_835D1C44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1C50"))) PPC_WEAK_FUNC(sub_835D1C50);
PPC_FUNC_IMPL(__imp__sub_835D1C50) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,16360
	ctx.r10.s64 = ctx.r11.s64 + 16360;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83588780
	ctx.lr = 0x835D1C78;
	sub_83588780(ctx, base);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835d1c90
	if (cr6.eq) goto loc_835D1C90;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83588c58
	ctx.lr = 0x835D1C90;
	sub_83588C58(ctx, base);
loc_835D1C90:
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835d1ca8
	if (cr6.eq) goto loc_835D1CA8;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83588c58
	ctx.lr = 0x835D1CA8;
	sub_83588C58(ctx, base);
loc_835D1CA8:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x835d1cc0
	if (cr6.eq) goto loc_835D1CC0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83588c58
	ctx.lr = 0x835D1CC0;
	sub_83588C58(ctx, base);
loc_835D1CC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d1408
	ctx.lr = 0x835D1CC8;
	sub_835D1408(ctx, base);
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

__attribute__((alias("__imp__sub_835D1CE0"))) PPC_WEAK_FUNC(sub_835D1CE0);
PPC_FUNC_IMPL(__imp__sub_835D1CE0) {
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
	// bl 0x835d1c50
	ctx.lr = 0x835D1D00;
	sub_835D1C50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d1d20
	if (cr6.eq) goto loc_835D1D20;
	// bl 0x82595188
	ctx.lr = 0x835D1D10;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835D1D20;
	sub_825952B8(ctx, base);
loc_835D1D20:
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

__attribute__((alias("__imp__sub_835D1D3C"))) PPC_WEAK_FUNC(sub_835D1D3C);
PPC_FUNC_IMPL(__imp__sub_835D1D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1D40"))) PPC_WEAK_FUNC(sub_835D1D40);
PPC_FUNC_IMPL(__imp__sub_835D1D40) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8386a408
	ctx.lr = 0x835D1D5C;
	sub_8386A408(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_835D1D78"))) PPC_WEAK_FUNC(sub_835D1D78);
PPC_FUNC_IMPL(__imp__sub_835D1D78) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D1DA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d1600
	ctx.lr = 0x835D1DB8;
	sub_835D1600(ctx, base);
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

__attribute__((alias("__imp__sub_835D1DD0"))) PPC_WEAK_FUNC(sub_835D1DD0);
PPC_FUNC_IMPL(__imp__sub_835D1DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D1DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83556b78
	ctx.lr = 0x835D1DEC;
	sub_83556B78(ctx, base);
	// bl 0x8355f770
	ctx.lr = 0x835D1DF0;
	sub_8355F770(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d1f34
	if (cr6.eq) goto loc_835D1F34;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f10.f64 = double(temp.f32);
	// li r6,64
	ctx.r6.s64 = 64;
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,21708(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21708);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// lfs f12,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fdivs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// fadds f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x835b95b0
	ctx.lr = 0x835D1EB4;
	sub_835B95B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x831ce980
	ctx.lr = 0x835D1EC0;
	sub_831CE980(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,14
	ctx.r9.s64 = 14;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x835D1F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x835D1F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835D1F34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D1F3C"))) PPC_WEAK_FUNC(sub_835D1F3C);
PPC_FUNC_IMPL(__imp__sub_835D1F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D1F40"))) PPC_WEAK_FUNC(sub_835D1F40);
PPC_FUNC_IMPL(__imp__sub_835D1F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x835D1F48;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce778
	ctx.lr = 0x835D1F50;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x83556b78
	ctx.lr = 0x835D1F84;
	sub_83556B78(ctx, base);
	// bl 0x8355f770
	ctx.lr = 0x835D1F88;
	sub_8355F770(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835d2178
	if (cr6.eq) goto loc_835D2178;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835d2178
	if (cr6.eq) goto loc_835D2178;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x835d2178
	if (cr6.eq) goto loc_835D2178;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x835d2178
	if (cr6.eq) goto loc_835D2178;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x835d2178
	if (cr6.eq) goto loc_835D2178;
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// clrldi r9,r29,32
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r6,r26
	ctx.r6.s64 = ctx.r26.s16;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// extsh r5,r25
	ctx.r5.s64 = ctx.r25.s16;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f13
	ctx.f4.f64 = double(ctx.f13.s64);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// lfs f11,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f13,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// lfs f12,-29856(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29856);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fdivs f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fdivs f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// fdivs f4,f0,f9
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fdivs f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 / ctx.f9.f64));
	// fmuls f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f8,f7,f4
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f7,f1,f12,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fmsubs f3,f8,f13,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fadds f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f2,f10,f11
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fadds f0,f5,f7
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f4,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f9,f1,f7
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f11,f6,f3
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f10,f2,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x835b95b0
	ctx.lr = 0x835D20F8;
	sub_835B95B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x835D2104;
	sub_831CE980(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,14
	ctx.r6.s64 = 14;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x835D2158;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x835D2178;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_835D2178:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c4
	ctx.lr = 0x835D2184;
	__restfpr_28(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D2188"))) PPC_WEAK_FUNC(sub_835D2188);
PPC_FUNC_IMPL(__imp__sub_835D2188) {
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
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x835cc168
	ctx.lr = 0x835D21AC;
	sub_835CC168(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d1600
	ctx.lr = 0x835D21BC;
	sub_835D1600(ctx, base);
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

__attribute__((alias("__imp__sub_835D21D4"))) PPC_WEAK_FUNC(sub_835D21D4);
PPC_FUNC_IMPL(__imp__sub_835D21D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D21D8"))) PPC_WEAK_FUNC(sub_835D21D8);
PPC_FUNC_IMPL(__imp__sub_835D21D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// vspltw128 v60,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// vspltw128 v61,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vspltw128 v59,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,68
	ctx.r30.s64 = 68;
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// stvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// sth r4,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f11,-60(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D22A4"))) PPC_WEAK_FUNC(sub_835D22A4);
PPC_FUNC_IMPL(__imp__sub_835D22A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D22A8"))) PPC_WEAK_FUNC(sub_835D22A8);
PPC_FUNC_IMPL(__imp__sub_835D22A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// vspltw128 v60,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// vspltw128 v61,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// vspltw128 v59,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,70
	ctx.r30.s64 = 70;
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// stvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// sth r4,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r4.u16);
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// sth r31,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r31.u16);
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f11,-60(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D2374"))) PPC_WEAK_FUNC(sub_835D2374);
PPC_FUNC_IMPL(__imp__sub_835D2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D2378"))) PPC_WEAK_FUNC(sub_835D2378);
PPC_FUNC_IMPL(__imp__sub_835D2378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D2380;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r10,70
	ctx.r10.s64 = 70;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r30,r6,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// sth r6,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r6.u16);
	// bl 0x831ce980
	ctx.lr = 0x835D23BC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r7,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D23E0"))) PPC_WEAK_FUNC(sub_835D23E0);
PPC_FUNC_IMPL(__imp__sub_835D23E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835d2400
	if (!cr6.eq) goto loc_835D2400;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x835d242c
	if (cr6.eq) goto loc_835D242C;
loc_835D2400:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,29
	ctx.r6.s64 = 29;
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_835D242C:
	// li r8,17
	ctx.r8.s64 = 17;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835d2448
	if (!cr6.eq) goto loc_835D2448;
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// lbz r9,489(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 489);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x835d248c
	if (cr6.eq) goto loc_835D248C;
loc_835D2448:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r5,41(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// subfe r9,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r5,r9,31,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r4,r4,9
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFF;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 | ctx.r5.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// oris r9,r5,256
	ctx.r9.u64 = ctx.r5.u64 | 16777216;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
loc_835D248C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835d24a4
	if (!cr6.eq) goto loc_835D24A4;
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x835d24d0
	if (cr6.eq) goto loc_835D24D0;
loc_835D24A4:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,31
	ctx.r5.s64 = 31;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
loc_835D24D0:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835d24e8
	if (!cr6.eq) goto loc_835D24E8;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// lbz r9,488(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 488);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x835d252c
	if (cr6.eq) goto loc_835D252C;
loc_835D24E8:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// subfe r9,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r5,r9,31,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r4,r4,9
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFFFF;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 | ctx.r5.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// oris r4,r8,640
	ctx.r4.u64 = ctx.r8.u64 | 41943040;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
loc_835D252C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x835d2554
	if (!cr6.eq) goto loc_835D2554;
	// lhz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// lhz r9,492(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 492);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x835d2554
	if (!cr6.eq) goto loc_835D2554;
	// lbz r11,42(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lbz r9,490(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 490);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_835D2554:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,36
	ctx.r8.s64 = 36;
	// lbz r7,42(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 42);
	// lhz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 44);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D258C"))) PPC_WEAK_FUNC(sub_835D258C);
PPC_FUNC_IMPL(__imp__sub_835D258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D2590"))) PPC_WEAK_FUNC(sub_835D2590);
PPC_FUNC_IMPL(__imp__sub_835D2590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x835d25b8
	if (!cr6.eq) goto loc_835D25B8;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,544(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x835d2694
	if (cr6.eq) goto loc_835D2694;
loc_835D25B8:
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x835d2664
	if (cr6.eq) goto loc_835D2664;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// li r31,12
	ctx.r31.s64 = 12;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lbz r5,39(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwimi r3,r11,3,0,28
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// rlwimi r6,r3,5,0,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// sth r31,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r31.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r9,r3,3,0,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 3) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// rlwimi r7,r9,5,0,26
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0xFFFFFFE0) | (ctx.r7.u64 & 0xFFFFFFFF0000001F);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_835D2664:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,21
	ctx.r8.s64 = 21;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
loc_835D2694:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D26A0"))) PPC_WEAK_FUNC(sub_835D26A0);
PPC_FUNC_IMPL(__imp__sub_835D26A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d26c4
	if (!cr6.eq) goto loc_835D26C4;
	// lwz r11,576(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	// lwz r10,96(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x835d2794
	if (cr6.eq) goto loc_835D2794;
loc_835D26C4:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,8
	ctx.r10.s64 = 8;
	// lbz r11,80(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 80);
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// beq cr6,0x835d2738
	if (cr6.eq) goto loc_835D2738;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,259
	ctx.r5.s64 = 259;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwimi r31,r5,23,0,8
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0xFF800000) | (ctx.r31.u64 & 0xFFFFFFFF007FFFFF);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r5,84(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// b 0x835d2750
	goto loc_835D2750;
loc_835D2738:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwimi r4,r5,23,0,8
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0xFF800000) | (ctx.r4.u64 & 0xFFFFFFFF007FFFFF);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
loc_835D2750:
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r5,81(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 81);
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// subfe r8,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r3,r8,31,0,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// clrlwi r7,r8,9
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFF;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// or r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 | ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// oris r10,r4,512
	ctx.r10.u64 = ctx.r4.u64 | 33554432;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
loc_835D2794:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835D279C"))) PPC_WEAK_FUNC(sub_835D279C);
PPC_FUNC_IMPL(__imp__sub_835D279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D27A0"))) PPC_WEAK_FUNC(sub_835D27A0);
PPC_FUNC_IMPL(__imp__sub_835D27A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D27A8;
	__savegprlr_28(ctx, base);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d27c8
	if (!cr6.eq) goto loc_835D27C8;
	// ld r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 624);
	// ld r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 144);
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, xer);
	// beq cr6,0x835d28f0
	if (cr6.eq) goto loc_835D28F0;
loc_835D27C8:
	// lbz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d28b8
	if (cr6.eq) goto loc_835D28B8;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,131
	ctx.r4.s64 = 131;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r31,37
	ctx.r31.s64 = 37;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r30,38
	ctx.r30.s64 = 38;
	// li r29,41
	ctx.r29.s64 = 41;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r5,r4,24,0,8
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF800000) | (ctx.r5.u64 & 0xFFFFFFFF007FFFFF);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r5,113(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 113);
	// lbz r4,115(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 115);
	// lwz r28,116(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r5,128(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lwz r31,120(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r5,114(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 114);
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_835D28B8:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,17
	ctx.r8.s64 = 17;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwimi r5,r6,24,0,8
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0xFF800000) | (ctx.r5.u64 & 0xFFFFFFFF007FFFFF);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
loc_835D28F0:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D28F4"))) PPC_WEAK_FUNC(sub_835D28F4);
PPC_FUNC_IMPL(__imp__sub_835D28F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D28F8"))) PPC_WEAK_FUNC(sub_835D28F8);
PPC_FUNC_IMPL(__imp__sub_835D28F8) {
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
	// bl 0x835d23e0
	ctx.lr = 0x835D2918;
	sub_835D23E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d2590
	ctx.lr = 0x835D2924;
	sub_835D2590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d26a0
	ctx.lr = 0x835D2930;
	sub_835D26A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835d27a0
	ctx.lr = 0x835D293C;
	sub_835D27A0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x835D294C;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_835D2964"))) PPC_WEAK_FUNC(sub_835D2964);
PPC_FUNC_IMPL(__imp__sub_835D2964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D2968"))) PPC_WEAK_FUNC(sub_835D2968);
PPC_FUNC_IMPL(__imp__sub_835D2968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D2970;
	__savegprlr_29(ctx, base);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2988
	if (cr6.eq) goto loc_835D2988;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// b 0x835d2994
	goto loc_835D2994;
loc_835D2988:
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2a9c
	if (cr6.eq) goto loc_835D2A9C;
loc_835D2994:
	// li r6,16
	ctx.r6.s64 = 16;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
loc_835D29B8:
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// and r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x835d29f4
	if (cr6.eq) goto loc_835D29F4;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
loc_835D29F4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// bdnz 0x835d29b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D29B8;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,48
	ctx.r8.s64 = 48;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,56
	ctx.r9.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// stw r31,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r31.u32);
loc_835D2A9C:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D2AA0"))) PPC_WEAK_FUNC(sub_835D2AA0);
PPC_FUNC_IMPL(__imp__sub_835D2AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D2AA8;
	__savegprlr_29(ctx, base);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r9,r3,268
	ctx.r9.s64 = ctx.r3.s64 + 268;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2ac8
	if (cr6.eq) goto loc_835D2AC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// stb r7,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r7.u8);
loc_835D2AC8:
	// lbz r11,265(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 265);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2b0c
	if (cr6.eq) goto loc_835D2B0C;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r31,464(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stb r4,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r4.u8);
loc_835D2B0C:
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2b90
	if (cr6.eq) goto loc_835D2B90;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r6,20
	ctx.r6.s64 = 20;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_835D2B30:
	// lwz r11,460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 460);
	// and r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835d2b7c
	if (cr6.eq) goto loc_835D2B7C;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,-4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_835D2B7C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// bdnz 0x835d2b30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_835D2B30;
	// stw r4,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r4.u32);
loc_835D2B90:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D2B94"))) PPC_WEAK_FUNC(sub_835D2B94);
PPC_FUNC_IMPL(__imp__sub_835D2B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D2B98"))) PPC_WEAK_FUNC(sub_835D2B98);
PPC_FUNC_IMPL(__imp__sub_835D2B98) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835a8848
	ctx.lr = 0x835D2BB8;
	sub_835A8848(ctx, base);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x835D2BCC;
	sub_831CE980(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x835D2BDC;
	sub_831CE980(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d1570
	ctx.lr = 0x835D2BE8;
	sub_835D1570(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d15a0
	ctx.lr = 0x835D2BF4;
	sub_835D15A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d15b8
	ctx.lr = 0x835D2C00;
	sub_835D15B8(ctx, base);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// addi r9,r1,91
	ctx.r9.s64 = ctx.r1.s64 + 91;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,9125
	ctx.r10.u64 = ctx.r10.u64 | 9125;
	// addi r8,r1,103
	ctx.r8.s64 = ctx.r1.s64 + 103;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// sth r7,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r6,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r6.u8);
	// stb r11,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// bl 0x8386a768
	ctx.lr = 0x835D2C60;
	sub_8386A768(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_835D2C7C"))) PPC_WEAK_FUNC(sub_835D2C7C);
PPC_FUNC_IMPL(__imp__sub_835D2C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835D2C80"))) PPC_WEAK_FUNC(sub_835D2C80);
PPC_FUNC_IMPL(__imp__sub_835D2C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835D2C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2cac
	if (cr6.eq) goto loc_835D2CAC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x835d28f8
	ctx.lr = 0x835D2CAC;
	sub_835D28F8(ctx, base);
loc_835D2CAC:
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2d08
	if (cr6.eq) goto loc_835D2D08;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x835d2cd0
	if (!cr6.eq) goto loc_835D2CD0;
	// lbz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2d00
	if (cr6.eq) goto loc_835D2D00;
loc_835D2CD0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,15
	ctx.r8.s64 = 15;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r6,260(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
loc_835D2D00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
loc_835D2D08:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2d20
	if (cr6.eq) goto loc_835D2D20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d2968
	ctx.lr = 0x835D2D20;
	sub_835D2968(ctx, base);
loc_835D2D20:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2d38
	if (cr6.eq) goto loc_835D2D38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d2aa0
	ctx.lr = 0x835D2D38;
	sub_835D2AA0(ctx, base);
loc_835D2D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835D2D40"))) PPC_WEAK_FUNC(sub_835D2D40);
PPC_FUNC_IMPL(__imp__sub_835D2D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835D2D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2da8
	if (cr6.eq) goto loc_835D2DA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835a8848
	ctx.lr = 0x835D2D6C;
	sub_835A8848(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x835D2D80;
	sub_831CE980(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x835D2D90;
	sub_831CE980(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2da8
	if (cr6.eq) goto loc_835D2DA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d28f8
	ctx.lr = 0x835D2DA8;
	sub_835D28F8(ctx, base);
loc_835D2DA8:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2dc0
	if (cr6.eq) goto loc_835D2DC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d15a0
	ctx.lr = 0x835D2DC0;
	sub_835D15A0(ctx, base);
loc_835D2DC0:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2dd8
	if (cr6.eq) goto loc_835D2DD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d1570
	ctx.lr = 0x835D2DD8;
	sub_835D1570(ctx, base);
loc_835D2DD8:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835d2df0
	if (cr6.eq) goto loc_835D2DF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d15b8
	ctx.lr = 0x835D2DF0;
	sub_835D15B8(ctx, base);
loc_835D2DF0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

