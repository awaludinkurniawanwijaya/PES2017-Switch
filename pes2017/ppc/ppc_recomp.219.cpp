#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E6F8FC"))) PPC_WEAK_FUNC(sub_82E6F8FC);
PPC_FUNC_IMPL(__imp__sub_82E6F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6F900"))) PPC_WEAK_FUNC(sub_82E6F900);
PPC_FUNC_IMPL(__imp__sub_82E6F900) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13388
	ctx.r10.s64 = ctx.r11.s64 + 13388;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x831032a0
	ctx.lr = 0x82E6F92C;
	sub_831032A0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e6f944
	if (cr6.eq) goto loc_82E6F944;
	// bl 0x82416268
	ctx.lr = 0x82E6F940;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E6F944:
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

__attribute__((alias("__imp__sub_82E6F95C"))) PPC_WEAK_FUNC(sub_82E6F95C);
PPC_FUNC_IMPL(__imp__sub_82E6F95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6F960"))) PPC_WEAK_FUNC(sub_82E6F960);
PPC_FUNC_IMPL(__imp__sub_82E6F960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,18232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E6F96C"))) PPC_WEAK_FUNC(sub_82E6F96C);
PPC_FUNC_IMPL(__imp__sub_82E6F96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6F970"))) PPC_WEAK_FUNC(sub_82E6F970);
PPC_FUNC_IMPL(__imp__sub_82E6F970) {
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
	// bl 0x82eca9c8
	ctx.lr = 0x82E6F988;
	sub_82ECA9C8(ctx, base);
	// bl 0x82e83570
	ctx.lr = 0x82E6F98C;
	sub_82E83570(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6f9b0
	if (cr6.eq) goto loc_82E6F9B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E6F9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_82E6F9B0:
	// bl 0x82eca7d0
	ctx.lr = 0x82E6F9B4;
	sub_82ECA7D0(ctx, base);
	// bl 0x82e7e308
	ctx.lr = 0x82E6F9B8;
	sub_82E7E308(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103260
	ctx.lr = 0x82E6F9C0;
	sub_83103260(ctx, base);
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

__attribute__((alias("__imp__sub_82E6F9D4"))) PPC_WEAK_FUNC(sub_82E6F9D4);
PPC_FUNC_IMPL(__imp__sub_82E6F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6F9D8"))) PPC_WEAK_FUNC(sub_82E6F9D8);
PPC_FUNC_IMPL(__imp__sub_82E6F9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6f9e8
	if (!cr6.eq) goto loc_82E6F9E8;
	// blr 
	return;
loc_82E6F9E8:
	// b 0x82ecad38
	sub_82ECAD38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6F9EC"))) PPC_WEAK_FUNC(sub_82E6F9EC);
PPC_FUNC_IMPL(__imp__sub_82E6F9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6F9F0"))) PPC_WEAK_FUNC(sub_82E6F9F0);
PPC_FUNC_IMPL(__imp__sub_82E6F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6fa00
	if (!cr6.eq) goto loc_82E6FA00;
	// blr 
	return;
loc_82E6FA00:
	// b 0x82ecadd0
	sub_82ECADD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FA04"))) PPC_WEAK_FUNC(sub_82E6FA04);
PPC_FUNC_IMPL(__imp__sub_82E6FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FA08"))) PPC_WEAK_FUNC(sub_82E6FA08);
PPC_FUNC_IMPL(__imp__sub_82E6FA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6fa18
	if (!cr6.eq) goto loc_82E6FA18;
	// blr 
	return;
loc_82E6FA18:
	// b 0x82ecac90
	sub_82ECAC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FA1C"))) PPC_WEAK_FUNC(sub_82E6FA1C);
PPC_FUNC_IMPL(__imp__sub_82E6FA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FA20"))) PPC_WEAK_FUNC(sub_82E6FA20);
PPC_FUNC_IMPL(__imp__sub_82E6FA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6fa34
	if (!cr6.eq) goto loc_82E6FA34;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E6FA34:
	// b 0x82ecae98
	sub_82ECAE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FA38"))) PPC_WEAK_FUNC(sub_82E6FA38);
PPC_FUNC_IMPL(__imp__sub_82E6FA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fa48
	if (cr6.eq) goto loc_82E6FA48;
	// b 0x82ecae38
	sub_82ECAE38(ctx, base);
	return;
loc_82E6FA48:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E6FA50"))) PPC_WEAK_FUNC(sub_82E6FA50);
PPC_FUNC_IMPL(__imp__sub_82E6FA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6fa64
	if (!cr6.eq) goto loc_82E6FA64;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E6FA64:
	// b 0x82ecace8
	sub_82ECACE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FA68"))) PPC_WEAK_FUNC(sub_82E6FA68);
PPC_FUNC_IMPL(__imp__sub_82E6FA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E6FA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e6fa90
	if (!cr6.eq) goto loc_82E6FA90;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E6FA90:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E6FA98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82ecace8
	ctx.lr = 0x82E6FAA4;
	sub_82ECACE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// blt cr6,0x82e6fa98
	if (cr6.lt) goto loc_82E6FA98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FAC8"))) PPC_WEAK_FUNC(sub_82E6FAC8);
PPC_FUNC_IMPL(__imp__sub_82E6FAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82ecaef0
	sub_82ECAEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FAD8"))) PPC_WEAK_FUNC(sub_82E6FAD8);
PPC_FUNC_IMPL(__imp__sub_82E6FAD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E6FADC"))) PPC_WEAK_FUNC(sub_82E6FADC);
PPC_FUNC_IMPL(__imp__sub_82E6FADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FAE0"))) PPC_WEAK_FUNC(sub_82E6FAE0);
PPC_FUNC_IMPL(__imp__sub_82E6FAE0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E6FAEC"))) PPC_WEAK_FUNC(sub_82E6FAEC);
PPC_FUNC_IMPL(__imp__sub_82E6FAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FAF0"))) PPC_WEAK_FUNC(sub_82E6FAF0);
PPC_FUNC_IMPL(__imp__sub_82E6FAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,18232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e6fb20
	if (cr6.eq) goto loc_82E6FB20;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e6fb20
	if (cr6.eq) goto loc_82E6FB20;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82e6fb20
	if (cr6.eq) goto loc_82E6FB20;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!cr6.eq) return;
loc_82E6FB20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E6FB28"))) PPC_WEAK_FUNC(sub_82E6FB28);
PPC_FUNC_IMPL(__imp__sub_82E6FB28) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e6fb98
	if (cr6.eq) goto loc_82E6FB98;
	// lis r11,263
	ctx.r11.s64 = 17235968;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r11,4104
	ctx.r9.u64 = ctx.r11.u64 | 4104;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e6fb90
	if (!cr6.eq) goto loc_82E6FB90;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e6fb90
	if (!cr6.eq) goto loc_82E6FB90;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fb90
	if (cr6.eq) goto loc_82E6FB90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E6FB88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r9.u32);
loc_82E6FB90:
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// b 0x82e6fb9c
	goto loc_82E6FB9C;
loc_82E6FB98:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6FB9C:
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

__attribute__((alias("__imp__sub_82E6FBB4"))) PPC_WEAK_FUNC(sub_82E6FBB4);
PPC_FUNC_IMPL(__imp__sub_82E6FBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FBB8"))) PPC_WEAK_FUNC(sub_82E6FBB8);
PPC_FUNC_IMPL(__imp__sub_82E6FBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E6FBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82e6fc08
	if (cr6.gt) goto loc_82E6FC08;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82e6fc10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E6FC10;
	// bdzf 4*cr6+eq,0x82e6fc84
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E6FC84;
	// bne cr6,0x82e6fcf4
	if (!cr6.eq) goto loc_82E6FCF4;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,18232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18232);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fc00
	if (cr6.eq) goto loc_82E6FC00;
	// bl 0x82ecaef0
	ctx.lr = 0x82E6FC00;
	sub_82ECAEF0(ctx, base);
loc_82E6FC00:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
loc_82E6FC08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E6FC10:
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,18232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18232);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fc30
	if (cr6.eq) goto loc_82E6FC30;
	// bl 0x82ecac90
	ctx.lr = 0x82E6FC2C;
	sub_82ECAC90(ctx, base);
	// lwz r11,18232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18232);
loc_82E6FC30:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6fc4c
	if (!cr6.eq) goto loc_82E6FC4C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E6FC4C:
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fc64
	if (cr6.eq) goto loc_82E6FC64;
	// bl 0x82ecae38
	ctx.lr = 0x82E6FC60;
	sub_82ECAE38(ctx, base);
	// b 0x82e6fc68
	goto loc_82E6FC68;
loc_82E6FC64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6FC68:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e6fc08
	if (cr6.eq) goto loc_82E6FC08;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E6FC84:
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r11,18232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18232);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6fca4
	if (!cr6.eq) goto loc_82E6FCA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6fca8
	goto loc_82E6FCA8;
loc_82E6FCA4:
	// bl 0x82ecace8
	ctx.lr = 0x82E6FCA8;
	sub_82ECACE8(ctx, base);
loc_82E6FCA8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,3
	ctx.r29.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e6fcbc
	if (cr6.eq) goto loc_82E6FCBC;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
loc_82E6FCBC:
	// lwz r11,18232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18232);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6fcd8
	if (!cr6.eq) goto loc_82E6FCD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6fcdc
	goto loc_82E6FCDC;
loc_82E6FCD8:
	// bl 0x82ecae98
	ctx.lr = 0x82E6FCDC;
	sub_82ECAE98(ctx, base);
loc_82E6FCDC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e6fc08
	if (cr6.eq) goto loc_82E6FC08;
	// stw r29,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E6FCF4:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82e6fc00
	if (cr6.lt) goto loc_82E6FC00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r10,263
	ctx.r10.s64 = 17235968;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,21716
	ctx.r8.s64 = ctx.r11.s64 + 21716;
	// ori r7,r10,4104
	ctx.r7.u64 = ctx.r10.u64 | 4104;
	// stw r9,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103068
	ctx.lr = 0x82E6FD40;
	sub_83103068(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FD48"))) PPC_WEAK_FUNC(sub_82E6FD48);
PPC_FUNC_IMPL(__imp__sub_82E6FD48) {
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
	// addi r30,r3,104
	ctx.r30.s64 = ctx.r3.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E6FD6C;
	sub_82596FE8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fd90
	if (cr6.eq) goto loc_82E6FD90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E6FD88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
loc_82E6FD90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82E6FD98;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82E6FDB0"))) PPC_WEAK_FUNC(sub_82E6FDB0);
PPC_FUNC_IMPL(__imp__sub_82E6FDB0) {
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
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E6FDD4;
	sub_82596FE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,141(r30)
	PPC_STORE_U8(ctx.r30.u32 + 141, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82E6FDE4;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_82E6FDFC"))) PPC_WEAK_FUNC(sub_82E6FDFC);
PPC_FUNC_IMPL(__imp__sub_82E6FDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FE00"))) PPC_WEAK_FUNC(sub_82E6FE00);
PPC_FUNC_IMPL(__imp__sub_82E6FE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E6FE08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82e6fe80
	if (cr6.eq) goto loc_82E6FE80;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82e6fe80
	if (!cr6.eq) goto loc_82E6FE80;
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x82e6fe40
	if (!cr6.gt) goto loc_82E6FE40;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// ble cr6,0x82e6fe50
	if (!cr6.gt) goto loc_82E6FE50;
loc_82E6FE40:
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6fdb0
	ctx.lr = 0x82E6FE4C;
	sub_82E6FDB0(ctx, base);
	// b 0x82e6fe54
	goto loc_82E6FE54;
loc_82E6FE50:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E6FE54:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e6fe80
	if (cr6.eq) goto loc_82E6FE80;
	// bl 0x82e6e978
	ctx.lr = 0x82E6FE64;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fe80
	if (cr6.eq) goto loc_82E6FE80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r31,156
	ctx.r5.s64 = ctx.r31.s64 + 156;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82e93868
	ctx.lr = 0x82E6FE80;
	sub_82E93868(ctx, base);
loc_82E6FE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FE88"))) PPC_WEAK_FUNC(sub_82E6FE88);
PPC_FUNC_IMPL(__imp__sub_82E6FE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E6FE90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E6FEB4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6fefc
	if (cr6.eq) goto loc_82E6FEFC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,17524
	ctx.r10.s64 = ctx.r11.s64 + 17524;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82E6FED8;
	sub_8257FA88(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r9,13412
	ctx.r8.s64 = ctx.r9.s64 + 13412;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E6FEFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FF10"))) PPC_WEAK_FUNC(sub_82E6FF10);
PPC_FUNC_IMPL(__imp__sub_82E6FF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E6FF18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E6FF3C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e6ff84
	if (cr6.eq) goto loc_82E6FF84;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,17524
	ctx.r10.s64 = ctx.r11.s64 + 17524;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82E6FF60;
	sub_8257FA88(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r9,13424
	ctx.r8.s64 = ctx.r9.s64 + 13424;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E6FF84:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E6FF98"))) PPC_WEAK_FUNC(sub_82E6FF98);
PPC_FUNC_IMPL(__imp__sub_82E6FF98) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e6ffe0
	if (cr6.eq) goto loc_82E6FFE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E6FFC8;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7a030
	ctx.lr = 0x82E6FFD0;
	sub_82E7A030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E6FFD8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E6FFE0;
	sub_82595170(ctx, base);
loc_82E6FFE0:
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

__attribute__((alias("__imp__sub_82E6FFF4"))) PPC_WEAK_FUNC(sub_82E6FFF4);
PPC_FUNC_IMPL(__imp__sub_82E6FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E6FFF8"))) PPC_WEAK_FUNC(sub_82E6FFF8);
PPC_FUNC_IMPL(__imp__sub_82E6FFF8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E70024;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70038
	if (cr6.eq) goto loc_82E70038;
	// bl 0x82e79fc0
	ctx.lr = 0x82E70030;
	sub_82E79FC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e7003c
	goto loc_82E7003C;
loc_82E70038:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E7003C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e6fe88
	ctx.lr = 0x82E70058;
	sub_82E6FE88(ctx, base);
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

__attribute__((alias("__imp__sub_82E70070"))) PPC_WEAK_FUNC(sub_82E70070);
PPC_FUNC_IMPL(__imp__sub_82E70070) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e6ff10
	ctx.lr = 0x82E700A0;
	sub_82E6FF10(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82dad4d0
	ctx.lr = 0x82E700BC;
	sub_82DAD4D0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e700cc
	if (cr6.eq) goto loc_82E700CC;
	// bl 0x8259b510
	ctx.lr = 0x82E700CC;
	sub_8259B510(ctx, base);
loc_82E700CC:
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

__attribute__((alias("__imp__sub_82E700E0"))) PPC_WEAK_FUNC(sub_82E700E0);
PPC_FUNC_IMPL(__imp__sub_82E700E0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r31,r11,-22208
	ctx.r31.s64 = ctx.r11.s64 + -22208;
	// lwz r11,-22208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e70140
	if (!cr6.eq) goto loc_82E70140;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E7011C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70130
	if (cr6.eq) goto loc_82E70130;
	// bl 0x82e6fff8
	ctx.lr = 0x82E70128;
	sub_82E6FFF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e70134
	goto loc_82E70134;
loc_82E70130:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E70134:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e70070
	ctx.lr = 0x82E7013C;
	sub_82E70070(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82E70140:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82E7015C"))) PPC_WEAK_FUNC(sub_82E7015C);
PPC_FUNC_IMPL(__imp__sub_82E7015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70160"))) PPC_WEAK_FUNC(sub_82E70160);
PPC_FUNC_IMPL(__imp__sub_82E70160) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b80848
	ctx.lr = 0x82E70180;
	sub_82B80848(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70190
	if (cr6.eq) goto loc_82E70190;
	// bl 0x82e78e28
	ctx.lr = 0x82E70190;
	sub_82E78E28(ctx, base);
loc_82E70190:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e701a0
	if (cr6.eq) goto loc_82E701A0;
	// bl 0x8259b510
	ctx.lr = 0x82E701A0;
	sub_8259B510(ctx, base);
loc_82E701A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E701C0"))) PPC_WEAK_FUNC(sub_82E701C0);
PPC_FUNC_IMPL(__imp__sub_82E701C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e70224
	if (!cr6.eq) goto loc_82E70224;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13276
	ctx.r4.s64 = ctx.r11.s64 + 13276;
	// bl 0x837b0c10
	ctx.lr = 0x82E701F0;
	sub_837B0C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887d8
	ctx.lr = 0x82E70200;
	sub_82E887D8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r3,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e70224
	if (cr6.lt) goto loc_82E70224;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E70224;
	sub_825952B8(ctx, base);
loc_82E70224:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70238"))) PPC_WEAK_FUNC(sub_82E70238);
PPC_FUNC_IMPL(__imp__sub_82E70238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E70240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82E7026C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7026c
	if (!cr6.eq) goto loc_82E7026C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x824508d8
	ctx.lr = 0x82E70294;
	sub_824508D8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252abc8
	ctx.lr = 0x82E702A8;
	sub_8252ABC8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E702AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e702ac
	if (!cr6.eq) goto loc_82E702AC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82537110
	ctx.lr = 0x82E702D4;
	sub_82537110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E702E0"))) PPC_WEAK_FUNC(sub_82E702E0);
PPC_FUNC_IMPL(__imp__sub_82E702E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E702E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e70310
	if (cr6.eq) goto loc_82E70310;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x82E7030C;
	sub_8398A348(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82E70310:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e70334
	if (cr6.lt) goto loc_82E70334;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E70334;
	sub_825952B8(ctx, base);
loc_82E70334:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e70360
	if (cr6.lt) goto loc_82E70360;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82E70360;
	sub_825952B8(ctx, base);
loc_82E70360:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E70374"))) PPC_WEAK_FUNC(sub_82E70374);
PPC_FUNC_IMPL(__imp__sub_82E70374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70378"))) PPC_WEAK_FUNC(sub_82E70378);
PPC_FUNC_IMPL(__imp__sub_82E70378) {
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
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e703c8
	if (cr6.eq) goto loc_82E703C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E703A8;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e703b8
	if (cr6.eq) goto loc_82E703B8;
	// bl 0x8259b510
	ctx.lr = 0x82E703B8;
	sub_8259B510(ctx, base);
loc_82E703B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E703C0;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E703C8;
	sub_82595170(ctx, base);
loc_82E703C8:
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

__attribute__((alias("__imp__sub_82E703DC"))) PPC_WEAK_FUNC(sub_82E703DC);
PPC_FUNC_IMPL(__imp__sub_82E703DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E703E0"))) PPC_WEAK_FUNC(sub_82E703E0);
PPC_FUNC_IMPL(__imp__sub_82E703E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E703E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r11,13272
	ctx.r5.s64 = ctx.r11.s64 + 13272;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e70238
	ctx.lr = 0x82E70404;
	sub_82E70238(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8252abc8
	ctx.lr = 0x82E70414;
	sub_8252ABC8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bl 0x8252ae98
	ctx.lr = 0x82E70434;
	sub_8252AE98(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e70448
	if (cr6.lt) goto loc_82E70448;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x82E70448;
	sub_8386D088(ctx, base);
loc_82E70448:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bge cr6,0x82e70468
	if (!cr6.lt) goto loc_82E70468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82E70468:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E7046C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e7046c
	if (!cr6.eq) goto loc_82E7046C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,156
	ctx.r3.s64 = ctx.r29.s64 + 156;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82E70490;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e704a4
	if (cr6.lt) goto loc_82E704A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82E704A4;
	sub_8386D088(ctx, base);
loc_82E704A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E704AC"))) PPC_WEAK_FUNC(sub_82E704AC);
PPC_FUNC_IMPL(__imp__sub_82E704AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E704B0"))) PPC_WEAK_FUNC(sub_82E704B0);
PPC_FUNC_IMPL(__imp__sub_82E704B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e704f8
	if (cr6.eq) goto loc_82E704F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E704E0;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e702e0
	ctx.lr = 0x82E704E8;
	sub_82E702E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E704F0;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E704F8;
	sub_82595170(ctx, base);
loc_82E704F8:
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

__attribute__((alias("__imp__sub_82E7050C"))) PPC_WEAK_FUNC(sub_82E7050C);
PPC_FUNC_IMPL(__imp__sub_82E7050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70510"))) PPC_WEAK_FUNC(sub_82E70510);
PPC_FUNC_IMPL(__imp__sub_82E70510) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70550
	if (cr6.eq) goto loc_82E70550;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e70550
	if (cr6.eq) goto loc_82E70550;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e704b0
	ctx.lr = 0x82E7054C;
	sub_82E704B0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82E70550:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E70568;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70578
	if (cr6.eq) goto loc_82E70578;
	// bl 0x82ecb7c0
	ctx.lr = 0x82E70574;
	sub_82ECB7C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E70578:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e7058c
	if (cr6.eq) goto loc_82E7058C;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// b 0x82e70590
	goto loc_82E70590;
loc_82E7058C:
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
loc_82E70590:
	// beq cr6,0x82e705a8
	if (cr6.eq) goto loc_82E705A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e705a4
	if (cr6.eq) goto loc_82E705A4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e704b0
	ctx.lr = 0x82E705A4;
	sub_82E704B0(ctx, base);
loc_82E705A4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82E705A8:
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

__attribute__((alias("__imp__sub_82E705C4"))) PPC_WEAK_FUNC(sub_82E705C4);
PPC_FUNC_IMPL(__imp__sub_82E705C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E705C8"))) PPC_WEAK_FUNC(sub_82E705C8);
PPC_FUNC_IMPL(__imp__sub_82E705C8) {
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
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e705f8
	if (cr6.eq) goto loc_82E705F8;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e704b0
	ctx.lr = 0x82E705F0;
	sub_82E704B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E705F8:
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

__attribute__((alias("__imp__sub_82E70610"))) PPC_WEAK_FUNC(sub_82E70610);
PPC_FUNC_IMPL(__imp__sub_82E70610) {
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
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e70640
	if (cr6.eq) goto loc_82E70640;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82e704b0
	ctx.lr = 0x82E70638;
	sub_82E704B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E70640:
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

__attribute__((alias("__imp__sub_82E70654"))) PPC_WEAK_FUNC(sub_82E70654);
PPC_FUNC_IMPL(__imp__sub_82E70654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70658"))) PPC_WEAK_FUNC(sub_82E70658);
PPC_FUNC_IMPL(__imp__sub_82E70658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E70660;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-22208
	ctx.r9.s64 = ctx.r11.s64 + -22208;
	// lwz r10,-22208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22208);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82e70694
	if (cr6.eq) goto loc_82E70694;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82E70694;
	sub_825749E0(ctx, base);
loc_82E70694:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b80748
	ctx.lr = 0x82E706A0;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e706cc
	if (cr6.eq) goto loc_82E706CC;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E706B0;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e706cc
	if (!cr6.eq) goto loc_82E706CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E706CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E706CC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70764
	if (cr6.eq) goto loc_82E70764;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x82e706f8
	if (cr6.eq) goto loc_82E706F8;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82E706F8;
	sub_825749E0(ctx, base);
loc_82E706F8:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b80748
	ctx.lr = 0x82E70704;
	sub_82B80748(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e70730
	if (cr6.eq) goto loc_82E70730;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82E70714;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e70730
	if (!cr6.eq) goto loc_82E70730;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E70730;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E70730:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70754
	if (cr6.eq) goto loc_82E70754;
	// bl 0x82e7af30
	ctx.lr = 0x82E70740;
	sub_82E7AF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e70754
	if (!cr6.eq) goto loc_82E70754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b80980
	ctx.lr = 0x82E70754;
	sub_82B80980(ctx, base);
loc_82E70754:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70764
	if (cr6.eq) goto loc_82E70764;
	// bl 0x8259b510
	ctx.lr = 0x82E70764;
	sub_8259B510(ctx, base);
loc_82E70764:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r30,r31,144
	ctx.r30.s64 = ctx.r31.s64 + 144;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7079c
	if (cr6.eq) goto loc_82E7079C;
	// bl 0x82ecb828
	ctx.lr = 0x82E7077C;
	sub_82ECB828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e7079c
	if (cr6.eq) goto loc_82E7079C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e7079c
	if (cr6.eq) goto loc_82E7079C;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82e704b0
	ctx.lr = 0x82E70798;
	sub_82E704B0(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82E7079C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e707bc
	if (!cr6.gt) goto loc_82E707BC;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,29704(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29704);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e707bc
	if (cr6.eq) goto loc_82E707BC;
	// bl 0x82eca4e8
	ctx.lr = 0x82E707BC;
	sub_82ECA4E8(ctx, base);
loc_82E707BC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e70814
	if (!cr6.eq) goto loc_82E70814;
	// lbz r11,141(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 141);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70814
	if (cr6.eq) goto loc_82E70814;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E707EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70800
	if (cr6.eq) goto loc_82E70800;
	// bl 0x82e6f8a8
	ctx.lr = 0x82E707F8;
	sub_82E6F8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e70804
	goto loc_82E70804;
loc_82E70800:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82E70804:
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82E70810;
	sub_83103100(ctx, base);
	// stb r29,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r29.u8);
loc_82E70814:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7085c
	if (cr6.eq) goto loc_82E7085C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E70830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e7085c
	if (cr6.eq) goto loc_82E7085C;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7085c
	if (cr6.eq) goto loc_82E7085C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E70858;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
loc_82E7085C:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70888
	if (cr6.eq) goto loc_82E70888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6fa68
	ctx.lr = 0x82E70870;
	sub_82E6FA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70888
	if (cr6.eq) goto loc_82E70888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e6fd48
	ctx.lr = 0x82E70884;
	sub_82E6FD48(ctx, base);
	// stb r29,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r29.u8);
loc_82E70888:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e708a0
	if (cr6.lt) goto loc_82E708A0;
	// bne cr6,0x82e70904
	if (!cr6.eq) goto loc_82E70904;
	// bl 0x82e83a40
	ctx.lr = 0x82E7089C;
	sub_82E83A40(ctx, base);
	// b 0x82e70904
	goto loc_82E70904;
loc_82E708A0:
	// bl 0x82e6f848
	ctx.lr = 0x82E708A4;
	sub_82E6F848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e708bc
	if (cr6.eq) goto loc_82E708BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82E708BC;
	sub_83103100(ctx, base);
loc_82E708BC:
	// bl 0x82ecaf10
	ctx.lr = 0x82E708C0;
	sub_82ECAF10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e708d8
	if (cr6.eq) goto loc_82E708D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82E708D8;
	sub_83103100(ctx, base);
loc_82E708D8:
	// bl 0x82e831c8
	ctx.lr = 0x82E708DC;
	sub_82E831C8(ctx, base);
	// bl 0x82eca750
	ctx.lr = 0x82E708E0;
	sub_82ECA750(ctx, base);
	// bl 0x82e8cbe8
	ctx.lr = 0x82E708E4;
	sub_82E8CBE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e708fc
	if (cr6.eq) goto loc_82E708FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82E708FC;
	sub_83103100(ctx, base);
loc_82E708FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82E70904:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70914
	if (cr6.eq) goto loc_82E70914;
	// bl 0x8259b510
	ctx.lr = 0x82E70914;
	sub_8259B510(ctx, base);
loc_82E70914:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7091C"))) PPC_WEAK_FUNC(sub_82E7091C);
PPC_FUNC_IMPL(__imp__sub_82E7091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70920"))) PPC_WEAK_FUNC(sub_82E70920);
PPC_FUNC_IMPL(__imp__sub_82E70920) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,13252
	ctx.r4.s64 = ctx.r11.s64 + 13252;
	// bl 0x83103328
	ctx.lr = 0x82E70944;
	sub_83103328(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r9,r10,13436
	ctx.r9.s64 = ctx.r10.s64 + 13436;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x83102db0
	ctx.lr = 0x82E70958;
	sub_83102DB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82E70980;
	sub_82596FA8(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// li r8,15
	ctx.r8.s64 = 15;
	// stb r30,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r30.u8);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// bl 0x82e700e0
	ctx.lr = 0x82E709A8;
	sub_82E700E0(ctx, base);
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

__attribute__((alias("__imp__sub_82E709C4"))) PPC_WEAK_FUNC(sub_82E709C4);
PPC_FUNC_IMPL(__imp__sub_82E709C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E709C8"))) PPC_WEAK_FUNC(sub_82E709C8);
PPC_FUNC_IMPL(__imp__sub_82E709C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E709D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// addi r8,r11,13436
	ctx.r8.s64 = ctx.r11.s64 + 13436;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r9,-22208
	ctx.r10.s64 = ctx.r9.s64 + -22208;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-22208(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22208);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r29,-22208(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22208, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x82dad4d0
	ctx.lr = 0x82E70A10;
	sub_82DAD4D0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70a20
	if (cr6.eq) goto loc_82E70A20;
	// bl 0x8259b510
	ctx.lr = 0x82E70A20;
	sub_8259B510(ctx, base);
loc_82E70A20:
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r31,r30,156
	ctx.r31.s64 = ctx.r30.s64 + 156;
	// stw r29,18232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18232, ctx.r29.u32);
	// lwz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82e70a50
	if (cr6.lt) goto loc_82E70A50;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82E70A50;
	sub_825952B8(ctx, base);
loc_82E70A50:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// addi r28,r30,144
	ctx.r28.s64 = ctx.r30.s64 + 144;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e70a7c
	if (cr6.eq) goto loc_82E70A7C;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82e704b0
	ctx.lr = 0x82E70A78;
	sub_82E704B0(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_82E70A7C:
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x82596f90
	ctx.lr = 0x82E70A84;
	sub_82596F90(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70a94
	if (cr6.eq) goto loc_82E70A94;
	// bl 0x8259b510
	ctx.lr = 0x82E70A94;
	sub_8259B510(ctx, base);
loc_82E70A94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831032a0
	ctx.lr = 0x82E70A9C;
	sub_831032A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E70AA4"))) PPC_WEAK_FUNC(sub_82E70AA4);
PPC_FUNC_IMPL(__imp__sub_82E70AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70AA8"))) PPC_WEAK_FUNC(sub_82E70AA8);
PPC_FUNC_IMPL(__imp__sub_82E70AA8) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E70AD0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70aec
	if (cr6.eq) goto loc_82E70AEC;
	// bl 0x82e70920
	ctx.lr = 0x82E70ADC;
	sub_82E70920(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r31,r11,18232
	ctx.r31.s64 = ctx.r11.s64 + 18232;
	// stw r3,18232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18232, ctx.r3.u32);
	// b 0x82e70afc
	goto loc_82E70AFC;
loc_82E70AEC:
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,18232
	ctx.r31.s64 = ctx.r10.s64 + 18232;
	// stw r11,18232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18232, ctx.r11.u32);
loc_82E70AFC:
	// bl 0x82ecab78
	ctx.lr = 0x82E70B00;
	sub_82ECAB78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83356770
	ctx.lr = 0x82E70B08;
	sub_83356770(ctx, base);
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// addi r3,r11,-1296
	ctx.r3.s64 = ctx.r11.s64 + -1296;
	// bl 0x83823fa0
	ctx.lr = 0x82E70B14;
	sub_83823FA0(ctx, base);
	// bl 0x82e7efc8
	ctx.lr = 0x82E70B18;
	sub_82E7EFC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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

__attribute__((alias("__imp__sub_82E70B30"))) PPC_WEAK_FUNC(sub_82E70B30);
PPC_FUNC_IMPL(__imp__sub_82E70B30) {
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
	// bl 0x82e709c8
	ctx.lr = 0x82E70B50;
	sub_82E709C8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70b68
	if (cr6.eq) goto loc_82E70B68;
	// bl 0x82416268
	ctx.lr = 0x82E70B64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E70B68:
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

__attribute__((alias("__imp__sub_82E70B80"))) PPC_WEAK_FUNC(sub_82E70B80);
PPC_FUNC_IMPL(__imp__sub_82E70B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,18608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18608);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70B8C"))) PPC_WEAK_FUNC(sub_82E70B8C);
PPC_FUNC_IMPL(__imp__sub_82E70B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70B90"))) PPC_WEAK_FUNC(sub_82E70B90);
PPC_FUNC_IMPL(__imp__sub_82E70B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70ba0
	if (!cr6.eq) goto loc_82E70BA0;
	// blr 
	return;
loc_82E70BA0:
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

__attribute__((alias("__imp__sub_82E70BB0"))) PPC_WEAK_FUNC(sub_82E70BB0);
PPC_FUNC_IMPL(__imp__sub_82E70BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70bc0
	if (!cr6.eq) goto loc_82E70BC0;
	// blr 
	return;
loc_82E70BC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E70BD0"))) PPC_WEAK_FUNC(sub_82E70BD0);
PPC_FUNC_IMPL(__imp__sub_82E70BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82E70BEC"))) PPC_WEAK_FUNC(sub_82E70BEC);
PPC_FUNC_IMPL(__imp__sub_82E70BEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70BF0"))) PPC_WEAK_FUNC(sub_82E70BF0);
PPC_FUNC_IMPL(__imp__sub_82E70BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70c00
	if (!cr6.eq) goto loc_82E70C00;
	// blr 
	return;
loc_82E70C00:
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

__attribute__((alias("__imp__sub_82E70C10"))) PPC_WEAK_FUNC(sub_82E70C10);
PPC_FUNC_IMPL(__imp__sub_82E70C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70c20
	if (!cr6.eq) goto loc_82E70C20;
	// blr 
	return;
loc_82E70C20:
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

__attribute__((alias("__imp__sub_82E70C30"))) PPC_WEAK_FUNC(sub_82E70C30);
PPC_FUNC_IMPL(__imp__sub_82E70C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82E70C4C"))) PPC_WEAK_FUNC(sub_82E70C4C);
PPC_FUNC_IMPL(__imp__sub_82E70C4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70C50"))) PPC_WEAK_FUNC(sub_82E70C50);
PPC_FUNC_IMPL(__imp__sub_82E70C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82E70C6C"))) PPC_WEAK_FUNC(sub_82E70C6C);
PPC_FUNC_IMPL(__imp__sub_82E70C6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70C70"))) PPC_WEAK_FUNC(sub_82E70C70);
PPC_FUNC_IMPL(__imp__sub_82E70C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82E70C8C"))) PPC_WEAK_FUNC(sub_82E70C8C);
PPC_FUNC_IMPL(__imp__sub_82E70C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70C90"))) PPC_WEAK_FUNC(sub_82E70C90);
PPC_FUNC_IMPL(__imp__sub_82E70C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82E70CAC"))) PPC_WEAK_FUNC(sub_82E70CAC);
PPC_FUNC_IMPL(__imp__sub_82E70CAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70CB0"))) PPC_WEAK_FUNC(sub_82E70CB0);
PPC_FUNC_IMPL(__imp__sub_82E70CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70cc0
	if (!cr6.eq) goto loc_82E70CC0;
	// blr 
	return;
loc_82E70CC0:
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

__attribute__((alias("__imp__sub_82E70CD0"))) PPC_WEAK_FUNC(sub_82E70CD0);
PPC_FUNC_IMPL(__imp__sub_82E70CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70ce0
	if (!cr6.eq) goto loc_82E70CE0;
	// blr 
	return;
loc_82E70CE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E70CF0"))) PPC_WEAK_FUNC(sub_82E70CF0);
PPC_FUNC_IMPL(__imp__sub_82E70CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E70D0C"))) PPC_WEAK_FUNC(sub_82E70D0C);
PPC_FUNC_IMPL(__imp__sub_82E70D0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E70D10"))) PPC_WEAK_FUNC(sub_82E70D10);
PPC_FUNC_IMPL(__imp__sub_82E70D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e70d20
	if (!cr6.eq) goto loc_82E70D20;
	// blr 
	return;
loc_82E70D20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E70D30"))) PPC_WEAK_FUNC(sub_82E70D30);
PPC_FUNC_IMPL(__imp__sub_82E70D30) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70d94
	if (cr6.eq) goto loc_82E70D94;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E70D64;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70d84
	if (cr6.eq) goto loc_82E70D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E70D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E70D84:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E70D8C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E70D94:
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

__attribute__((alias("__imp__sub_82E70DA8"))) PPC_WEAK_FUNC(sub_82E70DA8);
PPC_FUNC_IMPL(__imp__sub_82E70DA8) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,18612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70e04
	if (cr6.eq) goto loc_82E70E04;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E70DD8;
	sub_82596FE8(ctx, base);
	// lwz r10,18612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,18612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,18612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,18612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82E70E04;
	sub_82597088(ctx, base);
loc_82E70E04:
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

__attribute__((alias("__imp__sub_82E70E1C"))) PPC_WEAK_FUNC(sub_82E70E1C);
PPC_FUNC_IMPL(__imp__sub_82E70E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70E20"))) PPC_WEAK_FUNC(sub_82E70E20);
PPC_FUNC_IMPL(__imp__sub_82E70E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E70E28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70e74
	if (cr6.eq) goto loc_82E70E74;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E70E4C;
	sub_82596FE8(ctx, base);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bl 0x82597088
	ctx.lr = 0x82E70E74;
	sub_82597088(ctx, base);
loc_82E70E74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E70E7C"))) PPC_WEAK_FUNC(sub_82E70E7C);
PPC_FUNC_IMPL(__imp__sub_82E70E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70E80"))) PPC_WEAK_FUNC(sub_82E70E80);
PPC_FUNC_IMPL(__imp__sub_82E70E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E70E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70ed4
	if (cr6.eq) goto loc_82E70ED4;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E70EAC;
	sub_82596FE8(ctx, base);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bl 0x82597088
	ctx.lr = 0x82E70ED4;
	sub_82597088(ctx, base);
loc_82E70ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E70EDC"))) PPC_WEAK_FUNC(sub_82E70EDC);
PPC_FUNC_IMPL(__imp__sub_82E70EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70EE0"))) PPC_WEAK_FUNC(sub_82E70EE0);
PPC_FUNC_IMPL(__imp__sub_82E70EE0) {
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
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70f28
	if (cr6.eq) goto loc_82E70F28;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E70F10;
	sub_82596FE8(ctx, base);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82597088
	ctx.lr = 0x82E70F20;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e70f2c
	goto loc_82E70F2C;
loc_82E70F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E70F2C:
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

__attribute__((alias("__imp__sub_82E70F44"))) PPC_WEAK_FUNC(sub_82E70F44);
PPC_FUNC_IMPL(__imp__sub_82E70F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70F48"))) PPC_WEAK_FUNC(sub_82E70F48);
PPC_FUNC_IMPL(__imp__sub_82E70F48) {
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
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70f90
	if (cr6.eq) goto loc_82E70F90;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E70F78;
	sub_82596FE8(ctx, base);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82597088
	ctx.lr = 0x82E70F88;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e70f94
	goto loc_82E70F94;
loc_82E70F90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E70F94:
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

__attribute__((alias("__imp__sub_82E70FAC"))) PPC_WEAK_FUNC(sub_82E70FAC);
PPC_FUNC_IMPL(__imp__sub_82E70FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E70FB0"))) PPC_WEAK_FUNC(sub_82E70FB0);
PPC_FUNC_IMPL(__imp__sub_82E70FB0) {
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
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e70ff8
	if (cr6.eq) goto loc_82E70FF8;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E70FE0;
	sub_82596FE8(ctx, base);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82597088
	ctx.lr = 0x82E70FF0;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e70ffc
	goto loc_82E70FFC;
loc_82E70FF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E70FFC:
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

__attribute__((alias("__imp__sub_82E71014"))) PPC_WEAK_FUNC(sub_82E71014);
PPC_FUNC_IMPL(__imp__sub_82E71014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71018"))) PPC_WEAK_FUNC(sub_82E71018);
PPC_FUNC_IMPL(__imp__sub_82E71018) {
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
	// lis r30,-31757
	ctx.r30.s64 = -2081226752;
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71060
	if (cr6.eq) goto loc_82E71060;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82E71048;
	sub_82596FE8(ctx, base);
	// lwz r11,18612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18612);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82597088
	ctx.lr = 0x82E71058;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e71064
	goto loc_82E71064;
loc_82E71060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E71064:
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

__attribute__((alias("__imp__sub_82E7107C"))) PPC_WEAK_FUNC(sub_82E7107C);
PPC_FUNC_IMPL(__imp__sub_82E7107C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71080"))) PPC_WEAK_FUNC(sub_82E71080);
PPC_FUNC_IMPL(__imp__sub_82E71080) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,18612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e710e4
	if (!cr6.eq) goto loc_82E710E4;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E710BC;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e710d8
	if (cr6.eq) goto loc_82E710D8;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82596fa8
	ctx.lr = 0x82E710D0;
	sub_82596FA8(ctx, base);
	// stw r30,18612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18612, ctx.r30.u32);
	// b 0x82e710e0
	goto loc_82E710E0;
loc_82E710D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18612, ctx.r11.u32);
loc_82E710E0:
	// bl 0x82e70da8
	ctx.lr = 0x82E710E4;
	sub_82E70DA8(ctx, base);
loc_82E710E4:
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

__attribute__((alias("__imp__sub_82E710FC"))) PPC_WEAK_FUNC(sub_82E710FC);
PPC_FUNC_IMPL(__imp__sub_82E710FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71100"))) PPC_WEAK_FUNC(sub_82E71100);
PPC_FUNC_IMPL(__imp__sub_82E71100) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,18612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71164
	if (cr6.eq) goto loc_82E71164;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E71138;
	sub_82595150(ctx, base);
	// lwz r30,18612(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18612);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e71154
	if (cr6.eq) goto loc_82E71154;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82596f90
	ctx.lr = 0x82E7114C;
	sub_82596F90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82E71154;
	sub_82416268(ctx, base);
loc_82E71154:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E7115C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18612, ctx.r11.u32);
loc_82E71164:
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

__attribute__((alias("__imp__sub_82E7117C"))) PPC_WEAK_FUNC(sub_82E7117C);
PPC_FUNC_IMPL(__imp__sub_82E7117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71180"))) PPC_WEAK_FUNC(sub_82E71180);
PPC_FUNC_IMPL(__imp__sub_82E71180) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,18608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e71208
	if (!cr6.eq) goto loc_82E71208;
	// li r30,29
	ctx.r30.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E711BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82e711d4
	if (cr6.eq) goto loc_82E711D4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,18608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18608, ctx.r3.u32);
	// b 0x82e711d8
	goto loc_82E711D8;
loc_82E711D4:
	// stw r11,18608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18608, ctx.r11.u32);
loc_82E711D8:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1616
	ctx.r4.s64 = 1616;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82E711EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e711fc
	if (cr6.eq) goto loc_82E711FC;
	// bl 0x82eccbd8
	ctx.lr = 0x82E711F8;
	sub_82ECCBD8(ctx, base);
	// b 0x82e71200
	goto loc_82E71200;
loc_82E711FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E71200:
	// lwz r11,18608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18608);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82E71208:
	// bl 0x82e71080
	ctx.lr = 0x82E7120C;
	sub_82E71080(ctx, base);
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

__attribute__((alias("__imp__sub_82E71224"))) PPC_WEAK_FUNC(sub_82E71224);
PPC_FUNC_IMPL(__imp__sub_82E71224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71228"))) PPC_WEAK_FUNC(sub_82E71228);
PPC_FUNC_IMPL(__imp__sub_82E71228) {
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
	// bl 0x82e71100
	ctx.lr = 0x82E71240;
	sub_82E71100(ctx, base);
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,18608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71290
	if (cr6.eq) goto loc_82E71290;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E71264;
	sub_82595150(ctx, base);
	// lwz r30,18608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18608);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e71280
	if (cr6.eq) goto loc_82E71280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e70d30
	ctx.lr = 0x82E71278;
	sub_82E70D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82E71280;
	sub_82416268(ctx, base);
loc_82E71280:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E71288;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18608, ctx.r11.u32);
loc_82E71290:
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

__attribute__((alias("__imp__sub_82E712A8"))) PPC_WEAK_FUNC(sub_82E712A8);
PPC_FUNC_IMPL(__imp__sub_82E712A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E712B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,14212
	ctx.r8.s64 = ctx.r10.s64 + 14212;
	// li r7,30000
	ctx.r7.s64 = 30000;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,272(r3)
	PPC_STORE_U64(ctx.r3.u32 + 272, ctx.r7.u64);
	// addi r10,r3,280
	ctx.r10.s64 = ctx.r3.s64 + 280;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,1348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1348, ctx.r11.u32);
loc_82E712F4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e712f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E712F4;
	// addi r28,r31,9
	ctx.r28.s64 = ctx.r31.s64 + 9;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r11.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82E71318;
	sub_831CDCF0(ctx, base);
	// addi r29,r31,324
	ctx.r29.s64 = ctx.r31.s64 + 324;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82E7132C;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e713bc
	if (cr6.eq) goto loc_82E713BC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82E71338:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e71338
	if (!cr6.eq) goto loc_82E71338;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82e71370
	if (!cr6.gt) goto loc_82E71370;
loc_82E7135C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E71370:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e713bc
	if (cr6.eq) goto loc_82E713BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82E71388;
	sub_831CE7D8(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x832d2e80
	ctx.lr = 0x82E713A8;
	sub_832D2E80(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7135c
	if (cr6.eq) goto loc_82E7135C;
	// stw r29,314(r31)
	PPC_STORE_U32(ctx.r31.u32 + 314, ctx.r29.u32);
loc_82E713BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E713C8"))) PPC_WEAK_FUNC(sub_82E713C8);
PPC_FUNC_IMPL(__imp__sub_82E713C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,14120
	ctx.r3.s64 = ctx.r11.s64 + 14120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// addi r9,r3,-156
	ctx.r9.s64 = ctx.r3.s64 + -156;
	// stw r11,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r11.u32);
	// addi r8,r3,-148
	ctx.r8.s64 = ctx.r3.s64 + -148;
	// stw r9,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r9.u32);
	// addi r7,r3,-140
	ctx.r7.s64 = ctx.r3.s64 + -140;
	// addi r6,r3,-132
	ctx.r6.s64 = ctx.r3.s64 + -132;
	// stw r8,-148(r1)
	PPC_STORE_U32(ctx.r1.u32 + -148, ctx.r8.u32);
	// addi r5,r3,-124
	ctx.r5.s64 = ctx.r3.s64 + -124;
	// stw r7,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r7.u32);
	// addi r4,r3,-116
	ctx.r4.s64 = ctx.r3.s64 + -116;
	// stw r6,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r6.u32);
	// addi r11,r3,-108
	ctx.r11.s64 = ctx.r3.s64 + -108;
	// stw r5,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r5.u32);
	// addi r9,r3,-100
	ctx.r9.s64 = ctx.r3.s64 + -100;
	// stw r4,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r4.u32);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// addi r8,r3,-92
	ctx.r8.s64 = ctx.r3.s64 + -92;
	// stw r9,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r9.u32);
	// addi r7,r3,-84
	ctx.r7.s64 = ctx.r3.s64 + -84;
	// addi r6,r3,-76
	ctx.r6.s64 = ctx.r3.s64 + -76;
	// stw r8,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r8.u32);
	// addi r5,r3,-68
	ctx.r5.s64 = ctx.r3.s64 + -68;
	// stw r7,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r7.u32);
	// addi r4,r3,-60
	ctx.r4.s64 = ctx.r3.s64 + -60;
	// stw r6,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r6.u32);
	// addi r11,r3,-52
	ctx.r11.s64 = ctx.r3.s64 + -52;
	// stw r5,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r5.u32);
	// addi r9,r3,-44
	ctx.r9.s64 = ctx.r3.s64 + -44;
	// stw r4,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r4.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// addi r8,r3,-36
	ctx.r8.s64 = ctx.r3.s64 + -36;
	// stw r9,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r9.u32);
	// addi r7,r3,-28
	ctx.r7.s64 = ctx.r3.s64 + -28;
	// addi r6,r3,-20
	ctx.r6.s64 = ctx.r3.s64 + -20;
	// stw r8,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r8.u32);
	// addi r5,r3,-12
	ctx.r5.s64 = ctx.r3.s64 + -12;
	// stw r7,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r6.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r4,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r4.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r8.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r7,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r7.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r6,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r6.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r5,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r5.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r4,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r4.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r11.u32);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r9,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r9.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r7,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r5,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r5.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r4,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r4.u32);
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// li r7,19
	ctx.r7.s64 = 19;
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lwz r9,-13652(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -13652);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// stw r7,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
loc_82E7151C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x82e7153c
	if (cr6.eq) goto loc_82E7153C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// blt cr6,0x82e7151c
	if (cr6.lt) goto loc_82E7151C;
	// blr 
	return;
loc_82E7153C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,-156
	ctx.r10.s64 = ctx.r1.s64 + -156;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7154C"))) PPC_WEAK_FUNC(sub_82E7154C);
PPC_FUNC_IMPL(__imp__sub_82E7154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71550"))) PPC_WEAK_FUNC(sub_82E71550);
PPC_FUNC_IMPL(__imp__sub_82E71550) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E7157C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// beq cr6,0x82e715f0
	if (cr6.eq) goto loc_82E715F0;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E71598:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82e71598
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E71598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e713c8
	ctx.lr = 0x82E715A8;
	sub_82E713C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r31,284
	ctx.r9.s64 = ctx.r31.s64 + 284;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r6,r31,312
	ctx.r6.s64 = ctx.r31.s64 + 312;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832df900
	ctx.lr = 0x82E715C8;
	sub_832DF900(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82e715f0
	if (!cr6.eq) goto loc_82E715F0;
	// bl 0x83a7d958
	ctx.lr = 0x82E715D4;
	sub_83A7D958(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
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
loc_82E715F0:
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

__attribute__((alias("__imp__sub_82E71608"))) PPC_WEAK_FUNC(sub_82E71608);
PPC_FUNC_IMPL(__imp__sub_82E71608) {
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
	// bl 0x83a7d958
	ctx.lr = 0x82E71620;
	sub_83A7D958(ctx, base);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82E7162C;
	sub_83524138(ctx, base);
	// ld r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// bgt cr6,0x82e71640
	if (cr6.gt) goto loc_82E71640;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E71640:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// beq cr6,0x82e71678
	if (cr6.eq) goto loc_82E71678;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// bne cr6,0x82e71660
	if (!cr6.eq) goto loc_82E71660;
	// bl 0x832d3160
	ctx.lr = 0x82E71660;
	sub_832D3160(ctx, base);
loc_82E71660:
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
loc_82E71678:
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e716bc
	if (cr6.eq) goto loc_82E716BC;
	// bl 0x832d3188
	ctx.lr = 0x82E71684;
	sub_832D3188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e71660
	if (!cr6.eq) goto loc_82E71660;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
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
loc_82E716BC:
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

__attribute__((alias("__imp__sub_82E716D4"))) PPC_WEAK_FUNC(sub_82E716D4);
PPC_FUNC_IMPL(__imp__sub_82E716D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E716D8"))) PPC_WEAK_FUNC(sub_82E716D8);
PPC_FUNC_IMPL(__imp__sub_82E716D8) {
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
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e7172c
	if (cr6.lt) goto loc_82E7172C;
	// bne cr6,0x82e71774
	if (!cr6.eq) goto loc_82E71774;
	// bl 0x82e71608
	ctx.lr = 0x82E71700;
	sub_82E71608(ctx, base);
	// stw r3,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e71774
	if (cr6.eq) goto loc_82E71774;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
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
loc_82E7172C:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e7178c
	if (!cr6.eq) goto loc_82E7178C;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x831d2800
	ctx.lr = 0x82E71740;
	sub_831D2800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e71754
	if (!cr6.eq) goto loc_82E71754;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e71794
	goto loc_82E71794;
loc_82E71754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71550
	ctx.lr = 0x82E7175C;
	sub_82E71550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e7178c
	if (!cr6.eq) goto loc_82E7178C;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
loc_82E71774:
	// lwz r3,1348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1348);
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
loc_82E7178C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82E71794:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r11.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E717B4"))) PPC_WEAK_FUNC(sub_82E717B4);
PPC_FUNC_IMPL(__imp__sub_82E717B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E717B8"))) PPC_WEAK_FUNC(sub_82E717B8);
PPC_FUNC_IMPL(__imp__sub_82E717B8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// addi r9,r11,14212
	ctx.r9.s64 = ctx.r11.s64 + 14212;
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,997
	cr6.compare<uint32_t>(ctx.r10.u32, 997, xer);
	// bne cr6,0x82e717ec
	if (!cr6.eq) goto loc_82E717EC;
	// bl 0x832d3160
	ctx.lr = 0x82E717EC;
	sub_832D3160(ctx, base);
loc_82E717EC:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71824
	if (cr6.eq) goto loc_82E71824;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E7180C;
	sub_82595150(ctx, base);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82E71814;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E7181C;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
loc_82E71824:
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

__attribute__((alias("__imp__sub_82E71838"))) PPC_WEAK_FUNC(sub_82E71838);
PPC_FUNC_IMPL(__imp__sub_82E71838) {
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
	// bl 0x82e717b8
	ctx.lr = 0x82E71858;
	sub_82E717B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71870
	if (cr6.eq) goto loc_82E71870;
	// bl 0x82416268
	ctx.lr = 0x82E7186C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E71870:
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

__attribute__((alias("__imp__sub_82E71888"))) PPC_WEAK_FUNC(sub_82E71888);
PPC_FUNC_IMPL(__imp__sub_82E71888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,18992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18992);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71894"))) PPC_WEAK_FUNC(sub_82E71894);
PPC_FUNC_IMPL(__imp__sub_82E71894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71898"))) PPC_WEAK_FUNC(sub_82E71898);
PPC_FUNC_IMPL(__imp__sub_82E71898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E718A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e718c8
	if (cr6.eq) goto loc_82E718C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E718C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832d31b0
	ctx.lr = 0x82E718D0;
	sub_832D31B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E718F4"))) PPC_WEAK_FUNC(sub_82E718F4);
PPC_FUNC_IMPL(__imp__sub_82E718F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E718F8"))) PPC_WEAK_FUNC(sub_82E718F8);
PPC_FUNC_IMPL(__imp__sub_82E718F8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14540
	ctx.r3.s64 = ctx.r11.s64 + 14540;
	// bl 0x82ecce38
	ctx.lr = 0x82E71918;
	sub_82ECCE38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e71930
	if (cr6.eq) goto loc_82E71930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82E71930;
	sub_83103100(ctx, base);
loc_82E71930:
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

__attribute__((alias("__imp__sub_82E71948"))) PPC_WEAK_FUNC(sub_82E71948);
PPC_FUNC_IMPL(__imp__sub_82E71948) {
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
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e719cc
	if (cr6.lt) goto loc_82E719CC;
	// beq cr6,0x82e7197c
	if (cr6.eq) goto loc_82E7197C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82e71a08
	if (!cr6.lt) goto loc_82E71A08;
	// b 0x82e71a20
	goto loc_82E71A20;
loc_82E7197C:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e71a08
	if (cr6.eq) goto loc_82E71A08;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824168e8
	ctx.lr = 0x82E71998;
	sub_824168E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x832d1a68
	ctx.lr = 0x82E719A4;
	sub_832D1A68(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82e719bc
	if (cr6.eq) goto loc_82E719BC;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// beq cr6,0x82e719bc
	if (cr6.eq) goto loc_82E719BC;
	// cmplwi cr6,r30,1627
	cr6.compare<uint32_t>(ctx.r30.u32, 1627, xer);
	// bne cr6,0x82e71a08
	if (!cr6.eq) goto loc_82E71A08;
loc_82E719BC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// b 0x82e71a24
	goto loc_82E71A24;
loc_82E719CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,184
	ctx.r7.s64 = ctx.r31.s64 + 184;
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r11.u64);
	// std r11,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// bl 0x832d31b8
	ctx.lr = 0x82E719F8;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82e71a10
	if (!cr6.eq) goto loc_82E71A10;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_82E71A08:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e71a24
	goto loc_82E71A24;
loc_82E71A10:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x832d1a68
	ctx.lr = 0x82E71A20;
	sub_832D1A68(ctx, base);
loc_82E71A20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E71A24:
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

__attribute__((alias("__imp__sub_82E71A3C"))) PPC_WEAK_FUNC(sub_82E71A3C);
PPC_FUNC_IMPL(__imp__sub_82E71A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71A40"))) PPC_WEAK_FUNC(sub_82E71A40);
PPC_FUNC_IMPL(__imp__sub_82E71A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82e71a58
	if (cr6.eq) goto loc_82E71A58;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E71A58:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71A70"))) PPC_WEAK_FUNC(sub_82E71A70);
PPC_FUNC_IMPL(__imp__sub_82E71A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71A84"))) PPC_WEAK_FUNC(sub_82E71A84);
PPC_FUNC_IMPL(__imp__sub_82E71A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71A88"))) PPC_WEAK_FUNC(sub_82E71A88);
PPC_FUNC_IMPL(__imp__sub_82E71A88) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e71b34
	if (cr6.lt) goto loc_82E71B34;
	// bne cr6,0x82e71b74
	if (!cr6.eq) goto loc_82E71B74;
	// bl 0x82d48260
	ctx.lr = 0x82E71AB4;
	sub_82D48260(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// bl 0x832d31d0
	ctx.lr = 0x82E71AC4;
	sub_832D31D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e71adc
	if (cr6.eq) goto loc_82E71ADC;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82e71b78
	goto loc_82E71B78;
loc_82E71ADC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e71b0c
	if (cr6.eq) goto loc_82E71B0C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71afc
	if (cr6.eq) goto loc_82E71AFC;
	// cmplwi cr6,r11,1168
	cr6.compare<uint32_t>(ctx.r11.u32, 1168, xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// bne cr6,0x82e71b00
	if (!cr6.eq) goto loc_82E71B00;
loc_82E71AFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E71B00:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e71b78
	goto loc_82E71B78;
loc_82E71B0C:
	// bl 0x83a7d958
	ctx.lr = 0x82E71B10;
	sub_83A7D958(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82E71B1C;
	sub_83524138(ctx, base);
	// cmpldi cr6,r3,10000
	cr6.compare<uint64_t>(ctx.r3.u64, 10000, xer);
	// ble cr6,0x82e71b74
	if (!cr6.gt) goto loc_82E71B74;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82e71b78
	goto loc_82E71B78;
loc_82E71B34:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e71b74
	if (cr6.eq) goto loc_82E71B74;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824168e8
	ctx.lr = 0x82E71B50;
	sub_824168E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82E71B58;
	sub_83A7D958(ctx, base);
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e71b90
	if (!cr6.eq) goto loc_82E71B90;
loc_82E71B64:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_82E71B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E71B78:
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
loc_82E71B90:
	// cmplwi cr6,r30,1223
	cr6.compare<uint32_t>(ctx.r30.u32, 1223, xer);
	// beq cr6,0x82e71b64
	if (cr6.eq) goto loc_82E71B64;
	// cmplwi cr6,r30,1627
	cr6.compare<uint32_t>(ctx.r30.u32, 1627, xer);
	// bne cr6,0x82e71b74
	if (!cr6.eq) goto loc_82E71B74;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82e71b78
	goto loc_82E71B78;
}

__attribute__((alias("__imp__sub_82E71BB0"))) PPC_WEAK_FUNC(sub_82E71BB0);
PPC_FUNC_IMPL(__imp__sub_82E71BB0) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14568
	ctx.r3.s64 = ctx.r11.s64 + 14568;
	// bl 0x82ecd178
	ctx.lr = 0x82E71BD0;
	sub_82ECD178(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// beq cr6,0x82e71bf8
	if (cr6.eq) goto loc_82E71BF8;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// bl 0x83103100
	ctx.lr = 0x82E71BF4;
	sub_83103100(ctx, base);
	// b 0x82e71c00
	goto loc_82E71C00;
loc_82E71BF8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82E71C00:
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

__attribute__((alias("__imp__sub_82E71C18"))) PPC_WEAK_FUNC(sub_82E71C18);
PPC_FUNC_IMPL(__imp__sub_82E71C18) {
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
	// lwz r3,344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E71C40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e71c64
	if (!cr6.eq) goto loc_82E71C64;
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
loc_82E71C64:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71c7c
	if (cr6.eq) goto loc_82E71C7C;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82E71C7C:
	// ld r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// beq cr6,0x82e71ca4
	if (cr6.eq) goto loc_82E71CA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E71C9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
loc_82E71CA4:
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

__attribute__((alias("__imp__sub_82E71CBC"))) PPC_WEAK_FUNC(sub_82E71CBC);
PPC_FUNC_IMPL(__imp__sub_82E71CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71CC0"))) PPC_WEAK_FUNC(sub_82E71CC0);
PPC_FUNC_IMPL(__imp__sub_82E71CC0) {
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
	// lwz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E71CE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e71d0c
	if (!cr6.eq) goto loc_82E71D0C;
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
loc_82E71D0C:
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71d24
	if (cr6.eq) goto loc_82E71D24;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82E71D24:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e71d44
	if (cr6.eq) goto loc_82E71D44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E71D3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
loc_82E71D44:
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

__attribute__((alias("__imp__sub_82E71D5C"))) PPC_WEAK_FUNC(sub_82E71D5C);
PPC_FUNC_IMPL(__imp__sub_82E71D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71D60"))) PPC_WEAK_FUNC(sub_82E71D60);
PPC_FUNC_IMPL(__imp__sub_82E71D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e71d74
	if (cr6.eq) goto loc_82E71D74;
loc_82E71D6C:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82E71D74:
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e71d88
	if (!cr6.eq) goto loc_82E71D88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E71D88:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,72
	ctx.r10.s64 = 72;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82e71d6c
	if (cr0.eq) goto loc_82E71D6C;
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mulli r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 * 72;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subfc r6,r9,r7
	xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71DC8"))) PPC_WEAK_FUNC(sub_82E71DC8);
PPC_FUNC_IMPL(__imp__sub_82E71DC8) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71de8
	if (cr6.eq) goto loc_82E71DE8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832d31b0
	ctx.lr = 0x82E71DE8;
	sub_832D31B0(ctx, base);
loc_82E71DE8:
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

__attribute__((alias("__imp__sub_82E71DFC"))) PPC_WEAK_FUNC(sub_82E71DFC);
PPC_FUNC_IMPL(__imp__sub_82E71DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71E00"))) PPC_WEAK_FUNC(sub_82E71E00);
PPC_FUNC_IMPL(__imp__sub_82E71E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82E71E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,72
	ctx.r29.s64 = 72;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// divw r11,r8,r29
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// addi r31,r3,88
	ctx.r31.s64 = ctx.r3.s64 + 88;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82e71e40
	if (!cr6.gt) goto loc_82E71E40;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82E71E40:
	// li r26,29
	ctx.r26.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E71E54;
	sub_82595718(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// divw. r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// beq 0x82e71ed0
	if (cr0.eq) goto loc_82E71ED0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r8,r3,-8
	ctx.r8.s64 = ctx.r3.s64 + -8;
loc_82E71E80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,25(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e71ea8
	if (cr6.eq) goto loc_82E71EA8;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82e71ea8
	if (cr6.eq) goto loc_82E71EA8;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82E71EA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// subf r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divw r4,r5,r29
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r29.s32);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x82e71e80
	if (cr6.lt) goto loc_82E71E80;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e71ef4
	if (!cr6.eq) goto loc_82E71EF4;
loc_82E71ED0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e71fa8
	if (cr6.eq) goto loc_82E71FA8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82E71EE8;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82E71EF4:
	// stw r27,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r27.u32);
	// addi r31,r30,176
	ctx.r31.s64 = ctx.r30.s64 + 176;
	// addi r8,r30,156
	ctx.r8.s64 = ctx.r30.s64 + 156;
	// lwz r3,320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x832dffe0
	ctx.lr = 0x82E71F18;
	sub_832DFFE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82e71f34
	if (cr6.eq) goto loc_82E71F34;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82E71F34;
	sub_825952B8(ctx, base);
loc_82E71F34:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e71f50
	if (cr6.eq) goto loc_82E71F50;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82E71F50:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e71f80
	if (cr6.eq) goto loc_82E71F80;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x82E71F6C;
	sub_82595150(ctx, base);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x82416268
	ctx.lr = 0x82E71F74;
	sub_82416268(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x82E71F7C;
	sub_82595170(ctx, base);
	// stw r27,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r27.u32);
loc_82E71F80:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82595718
	ctx.lr = 0x82E71F94;
	sub_82595718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E71FA4;
	sub_831CDCF0(ctx, base);
	// stw r27,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r27.u32);
loc_82E71FA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E71FB4"))) PPC_WEAK_FUNC(sub_82E71FB4);
PPC_FUNC_IMPL(__imp__sub_82E71FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E71FB8"))) PPC_WEAK_FUNC(sub_82E71FB8);
PPC_FUNC_IMPL(__imp__sub_82E71FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E71FC0;
	__savegprlr_29(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,72
	ctx.r30.s64 = 72;
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// addi r8,r3,88
	ctx.r8.s64 = ctx.r3.s64 + 88;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r9,r7,r30
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e72018
	if (cr0.eq) goto loc_82E72018;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82E71FEC:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// stb r31,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r31.u8);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// divw r9,r5,r30
	ctx.r9.s32 = PPCDivide(ctx.r5.s32, ctx.r30.s32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e71fec
	if (cr6.lt) goto loc_82E71FEC;
loc_82E72018:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e720b4
	if (cr6.eq) goto loc_82E720B4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82E7202C:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82e72094
	if (!cr6.gt) goto loc_82E72094;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_82E72040:
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// ldx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x82e72080
	if (cr6.eq) goto loc_82E72080;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// ld r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r10,r29
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r29.u64, xer);
	// bne cr6,0x82e72080
	if (!cr6.eq) goto loc_82E72080;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e72080
	if (cr6.eq) goto loc_82E72080;
	// stb r4,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r4.u8);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_82E72080:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e72040
	if (cr6.lt) goto loc_82E72040;
loc_82E72094:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r6,r6,72
	ctx.r6.s64 = ctx.r6.s64 + 72;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r9,r30
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e7202c
	if (cr6.lt) goto loc_82E7202C;
loc_82E720B4:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E720B8"))) PPC_WEAK_FUNC(sub_82E720B8);
PPC_FUNC_IMPL(__imp__sub_82E720B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r6,72
	ctx.r6.s64 = 72;
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// divw. r5,r8,r6
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r6.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82e7210c
	if (cr0.eq) goto loc_82E7210C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82E720E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stw r7,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	// divw r5,r8,r6
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r6.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82e720e0
	if (cr6.lt) goto loc_82E720E0;
loc_82E7210C:
	// stw r7,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r7.u32);
	// stw r7,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72118"))) PPC_WEAK_FUNC(sub_82E72118);
PPC_FUNC_IMPL(__imp__sub_82E72118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82E72120;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r26,72
	ctx.r26.s64 = 72;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72224
	if (cr6.eq) goto loc_82E72224;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r3,88
	ctx.r7.s64 = ctx.r3.s64 + 88;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e72224
	if (cr0.eq) goto loc_82E72224;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
loc_82E72164:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82e72204
	if (!cr6.gt) goto loc_82E72204;
	// li r8,272
	ctx.r8.s64 = 272;
loc_82E7217C:
	// lwz r9,164(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e721ec
	if (cr6.eq) goto loc_82E721EC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x82e721ec
	if (!cr6.eq) goto loc_82E721EC;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82e721ec
	if (cr6.eq) goto loc_82E721EC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82e721ec
	if (!cr6.gt) goto loc_82E721EC;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e721e8
	if (!cr6.eq) goto loc_82E721E8;
	// stw r3,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r3.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r11.u32);
	// stb r25,324(r29)
	PPC_STORE_U8(ctx.r29.u32 + 324, ctx.r25.u8);
loc_82E721E8:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_82E721EC:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e7217c
	if (cr6.lt) goto loc_82E7217C;
loc_82E72204:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r6,72
	ctx.r6.s64 = ctx.r6.s64 + 72;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e72164
	if (cr6.lt) goto loc_82E72164;
loc_82E72224:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e723e0
	if (cr6.eq) goto loc_82E723E0;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e7230c
	if (!cr6.eq) goto loc_82E7230C;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// addi r31,r29,88
	ctx.r31.s64 = ctx.r29.s64 + 88;
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e7230c
	if (cr0.eq) goto loc_82E7230C;
	// addi r28,r29,108
	ctx.r28.s64 = ctx.r29.s64 + 108;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E72260:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi. r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e722b0
	if (cr0.eq) goto loc_82E722B0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
loc_82E72288:
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x82e722ac
	if (cr6.eq) goto loc_82E722AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e72288
	if (cr6.lt) goto loc_82E72288;
	// b 0x82e722b0
	goto loc_82E722B0;
loc_82E722AC:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_82E722B0:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e722d8
	if (!cr6.eq) goto loc_82E722D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8310fa70
	ctx.lr = 0x82E722CC;
	sub_8310FA70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e722fc
	if (!cr6.eq) goto loc_82E722FC;
loc_82E722D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e72260
	if (cr6.lt) goto loc_82E72260;
	// b 0x82e7230c
	goto loc_82E7230C;
loc_82E722FC:
	// stw r27,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r27.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r23,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r23.u32);
	// stb r23,324(r29)
	PPC_STORE_U8(ctx.r29.u32 + 324, ctx.r23.u8);
loc_82E7230C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e723e0
	if (!cr6.eq) goto loc_82E723E0;
	// bl 0x8310b9d0
	ctx.lr = 0x82E7231C;
	sub_8310B9D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e723e0
	if (!cr6.eq) goto loc_82E723E0;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r4,r9,r26
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e723e0
	if (cr0.eq) goto loc_82E723E0;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
loc_82E72350:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82e72394
	if (cr6.eq) goto loc_82E72394;
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_82E7236C:
	// lwz r3,108(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x82e72390
	if (cr6.eq) goto loc_82E72390;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82e7236c
	if (cr6.lt) goto loc_82E7236C;
	// b 0x82e72394
	goto loc_82E72394;
loc_82E72390:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
loc_82E72394:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e723b4
	if (!cr6.eq) goto loc_82E723B4;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// beq cr6,0x82e723d0
	if (cr6.eq) goto loc_82E723D0;
loc_82E723B4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,72
	ctx.r8.s64 = ctx.r8.s64 + 72;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// blt cr6,0x82e72350
	if (cr6.lt) goto loc_82E72350;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82E723D0:
	// stw r5,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r5.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// stw r23,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r23.u32);
	// stb r23,324(r29)
	PPC_STORE_U8(ctx.r29.u32 + 324, ctx.r23.u8);
loc_82E723E0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E723EC"))) PPC_WEAK_FUNC(sub_82E723EC);
PPC_FUNC_IMPL(__imp__sub_82E723EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E723F0"))) PPC_WEAK_FUNC(sub_82E723F0);
PPC_FUNC_IMPL(__imp__sub_82E723F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,88(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r8,r6,r9
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e72444
	if (cr0.eq) goto loc_82E72444;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E72414:
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e72434
	if (cr6.eq) goto loc_82E72434;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e7244c
	if (cr6.eq) goto loc_82E7244C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82E72434:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e72414
	if (cr6.lt) goto loc_82E72414;
loc_82E72444:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E7244C:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72460"))) PPC_WEAK_FUNC(sub_82E72460);
PPC_FUNC_IMPL(__imp__sub_82E72460) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E72488;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e724ac
	if (!cr6.eq) goto loc_82E724AC;
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
loc_82E724AC:
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e724c4
	if (cr6.eq) goto loc_82E724C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82E724C4:
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bne cr6,0x82e72538
	if (!cr6.eq) goto loc_82E72538;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r8,212(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r7,216(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw. r9,r4,r9
	ctx.r9.s32 = PPCDivide(ctx.r4.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e72530
	if (cr0.eq) goto loc_82E72530;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E72508:
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e7252c
	if (cr6.eq) goto loc_82E7252C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e72508
	if (cr6.lt) goto loc_82E72508;
	// b 0x82e72530
	goto loc_82E72530;
loc_82E7252C:
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_82E72530:
	// ld r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 256);
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
loc_82E72538:
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// bl 0x82ecd420
	ctx.lr = 0x82E72540;
	sub_82ECD420(ctx, base);
	// lwz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e72564
	if (cr6.eq) goto loc_82E72564;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E7255C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
loc_82E72564:
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

__attribute__((alias("__imp__sub_82E7257C"))) PPC_WEAK_FUNC(sub_82E7257C);
PPC_FUNC_IMPL(__imp__sub_82E7257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E72580"))) PPC_WEAK_FUNC(sub_82E72580);
PPC_FUNC_IMPL(__imp__sub_82E72580) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14624
	ctx.r3.s64 = ctx.r11.s64 + 14624;
	// bl 0x82ecd588
	ctx.lr = 0x82E725A0;
	sub_82ECD588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// beq cr6,0x82e725f4
	if (cr6.eq) goto loc_82E725F4;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,332(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// stw r5,208(r8)
	PPC_STORE_U32(ctx.r8.u32 + 208, ctx.r5.u32);
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// ld r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// std r11,216(r4)
	PPC_STORE_U64(ctx.r4.u32 + 216, ctx.r11.u64);
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// bl 0x83103100
	ctx.lr = 0x82E725F0;
	sub_83103100(ctx, base);
	// b 0x82e725fc
	goto loc_82E725FC;
loc_82E725F4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82E725FC:
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

__attribute__((alias("__imp__sub_82E72614"))) PPC_WEAK_FUNC(sub_82E72614);
PPC_FUNC_IMPL(__imp__sub_82E72614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E72618"))) PPC_WEAK_FUNC(sub_82E72618);
PPC_FUNC_IMPL(__imp__sub_82E72618) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e72674
	if (cr6.eq) goto loc_82E72674;
	// lis r11,910
	ctx.r11.s64 = 59637760;
	// ori r10,r11,14563
	ctx.r10.u64 = ctx.r11.u64 | 14563;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e72658
	if (cr6.gt) goto loc_82E72658;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82416260
	ctx.lr = 0x82E72650;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e72674
	if (!cr6.eq) goto loc_82E72674;
loc_82E72658:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,15364
	ctx.r9.s64 = ctx.r11.s64 + 15364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8246b850
	ctx.lr = 0x82E72674;
	sub_8246B850(ctx, base);
loc_82E72674:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72684"))) PPC_WEAK_FUNC(sub_82E72684);
PPC_FUNC_IMPL(__imp__sub_82E72684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E72688"))) PPC_WEAK_FUNC(sub_82E72688);
PPC_FUNC_IMPL(__imp__sub_82E72688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E72690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82e72750
	if (cr6.lt) goto loc_82E72750;
	// beq cr6,0x82e726e4
	if (cr6.eq) goto loc_82E726E4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82e7279c
	if (!cr6.lt) goto loc_82E7279C;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82e726d0
	if (!cr6.gt) goto loc_82E726D0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82E726C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e726c4
	if (cr6.lt) goto loc_82E726C4;
loc_82E726D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71fb8
	ctx.lr = 0x82E726D8;
	sub_82E71FB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E726E4:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e7279c
	if (cr6.eq) goto loc_82E7279C;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// stw r29,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x824168e8
	ctx.lr = 0x82E72708;
	sub_824168E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x832d1a68
	ctx.lr = 0x82E72714;
	sub_832D1A68(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82e72730
	if (!cr6.eq) goto loc_82E72730;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E72730:
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// beq cr6,0x82e72740
	if (cr6.eq) goto loc_82E72740;
	// cmplwi cr6,r30,1627
	cr6.compare<uint32_t>(ctx.r30.u32, 1627, xer);
	// bne cr6,0x82e7279c
	if (!cr6.eq) goto loc_82E7279C;
loc_82E72740:
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E72750:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e727b8
	if (cr6.eq) goto loc_82E727B8;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r7,r31,212
	ctx.r7.s64 = ctx.r31.s64 + 212;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E72770:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e72770
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E72770;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,176(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x832d31b8
	ctx.lr = 0x82E7278C;
	sub_832D31B8(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82e727a8
	if (!cr6.eq) goto loc_82E727A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82E7279C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82E727A8:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// bl 0x832d1a68
	ctx.lr = 0x82E727B8;
	sub_832D1A68(ctx, base);
loc_82E727B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E727C4"))) PPC_WEAK_FUNC(sub_82E727C4);
PPC_FUNC_IMPL(__imp__sub_82E727C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E727C8"))) PPC_WEAK_FUNC(sub_82E727C8);
PPC_FUNC_IMPL(__imp__sub_82E727C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E727D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e720b8
	ctx.lr = 0x82E727DC;
	sub_82E720B8(ctx, base);
	// addi r28,r3,168
	ctx.r28.s64 = ctx.r3.s64 + 168;
	// addi r6,r3,160
	ctx.r6.s64 = ctx.r3.s64 + 160;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r3,320(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// bl 0x832dfdf0
	ctx.lr = 0x82E727F4;
	sub_832DFDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e72808
	if (cr6.eq) goto loc_82E72808;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E72808:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// li r29,29
	ctx.r29.s64 = 29;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72840
	if (cr6.eq) goto loc_82E72840;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82E7282C;
	sub_82595150(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82416268
	ctx.lr = 0x82E72834;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82E7283C;
	sub_82595170(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
loc_82E72840:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82595718
	ctx.lr = 0x82E72854;
	sub_82595718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82E72864;
	sub_831CDCF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72874"))) PPC_WEAK_FUNC(sub_82E72874);
PPC_FUNC_IMPL(__imp__sub_82E72874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E72878"))) PPC_WEAK_FUNC(sub_82E72878);
PPC_FUNC_IMPL(__imp__sub_82E72878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E72880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82e72944
	if (!cr6.eq) goto loc_82E72944;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r28.u32);
	// bl 0x82e723f0
	ctx.lr = 0x82E728A0;
	sub_82E723F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e728b8
	if (!cr6.eq) goto loc_82E728B8;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E728B8:
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// addi r29,r31,240
	ctx.r29.s64 = ctx.r31.s64 + 240;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// std r8,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r8.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E728D8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e728d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E728D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832d2a70
	ctx.lr = 0x82E728F4;
	sub_832D2A70(ctx, base);
	// stw r3,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r3.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r7,r31,248
	ctx.r7.s64 = ctx.r31.s64 + 248;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1001
	ctx.r4.s64 = 1001;
	// bl 0x832d3298
	ctx.lr = 0x82E72914;
	sub_832D3298(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82e72934
	if (!cr6.eq) goto loc_82E72934;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E72934:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
loc_82E72944:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72950"))) PPC_WEAK_FUNC(sub_82E72950);
PPC_FUNC_IMPL(__imp__sub_82E72950) {
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
	// bl 0x82e727c8
	ctx.lr = 0x82E72968;
	sub_82E727C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72994
	if (cr6.eq) goto loc_82E72994;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
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
loc_82E72994:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E729B0"))) PPC_WEAK_FUNC(sub_82E729B0);
PPC_FUNC_IMPL(__imp__sub_82E729B0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ld r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lbz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// stb r8,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r8.u8);
	// lbz r7,25(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// stb r7,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r7.u8);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// bl 0x82470e60
	ctx.lr = 0x82E72A24;
	sub_82470E60(ctx, base);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82E72A58"))) PPC_WEAK_FUNC(sub_82E72A58);
PPC_FUNC_IMPL(__imp__sub_82E72A58) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14596
	ctx.r3.s64 = ctx.r11.s64 + 14596;
	// bl 0x82ecd820
	ctx.lr = 0x82E72A78;
	sub_82ECD820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// beq cr6,0x82e72b2c
	if (cr6.eq) goto loc_82E72B2C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r5,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// stw r8,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
	// lwz r8,344(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r7,128(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r7,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r7.u32);
	// lwz r6,344(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r5,212(r6)
	PPC_STORE_U32(ctx.r6.u32 + 212, ctx.r5.u32);
	// lbz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 324);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e72b1c
	if (cr6.eq) goto loc_82E72B1C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82E72B1C;
	sub_82AB5F20(ctx, base);
loc_82E72B1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x83103100
	ctx.lr = 0x82E72B28;
	sub_83103100(ctx, base);
	// b 0x82e72b34
	goto loc_82E72B34;
loc_82E72B2C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_82E72B34:
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

__attribute__((alias("__imp__sub_82E72B4C"))) PPC_WEAK_FUNC(sub_82E72B4C);
PPC_FUNC_IMPL(__imp__sub_82E72B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E72B50"))) PPC_WEAK_FUNC(sub_82E72B50);
PPC_FUNC_IMPL(__imp__sub_82E72B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E72B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e72be4
	if (cr6.eq) goto loc_82E72BE4;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82E72B74:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// ld r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// lbz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r7,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r7.u8);
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r11,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r11.u8);
	// bl 0x82470e60
	ctx.lr = 0x82E72BB8;
	sub_82470E60(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r9,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// stw r8,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r8.u32);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r7,r31,-16
	ctx.r7.s64 = ctx.r31.s64 + -16;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bne cr6,0x82e72b74
	if (!cr6.eq) goto loc_82E72B74;
loc_82E72BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72BF0"))) PPC_WEAK_FUNC(sub_82E72BF0);
PPC_FUNC_IMPL(__imp__sub_82E72BF0) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82e72e48
	if (cr6.gt) goto loc_82E72E48;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82e72c70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72C70;
	// bdzf 4*cr6+eq,0x82e72ce8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72CE8;
	// bdzf 4*cr6+eq,0x82e72d3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72D3C;
	// bdzf 4*cr6+eq,0x82e72d78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72D78;
	// bdzf 4*cr6+eq,0x82e72de4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72DE4;
	// bdzf 4*cr6+eq,0x82e72df8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72DF8;
	// bne cr6,0x82e72e14
	if (!cr6.eq) goto loc_82E72E14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e727c8
	ctx.lr = 0x82E72C3C;
	sub_82E727C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72c50
	if (cr6.eq) goto loc_82E72C50;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72C50:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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
loc_82E72C70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71948
	ctx.lr = 0x82E72C78;
	sub_82E71948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72e48
	if (cr6.eq) goto loc_82E72E48;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82e72ca8
	if (cr6.eq) goto loc_82E72CA8;
loc_82E72C90:
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
loc_82E72CA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72118
	ctx.lr = 0x82E72CB4;
	sub_82E72118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71d60
	ctx.lr = 0x82E72CBC;
	sub_82E71D60(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82e72e48
	if (cr6.gt) goto loc_82E72E48;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82e72ce0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72CE0;
	// bdzf 4*cr6+eq,0x82e72df0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E72DF0;
	// bne cr6,0x82e72c50
	if (!cr6.eq) goto loc_82E72C50;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72CE0:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72CE8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72118
	ctx.lr = 0x82E72CF4;
	sub_82E72118(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72d1c
	if (cr6.eq) goto loc_82E72D1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72a58
	ctx.lr = 0x82E72D08;
	sub_82E72A58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72c90
	if (cr6.eq) goto loc_82E72C90;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72D1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
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
loc_82E72D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71c18
	ctx.lr = 0x82E72D44;
	sub_82E71C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72e48
	if (cr6.eq) goto loc_82E72E48;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82e72c90
	if (!cr6.eq) goto loc_82E72C90;
	// lbz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 324);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r8,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r8.u32);
	// b 0x82e72e48
	goto loc_82E72E48;
loc_82E72D78:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r6,r31,284
	ctx.r6.s64 = ctx.r31.s64 + 284;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E72D8C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e72d8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E72D8C;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r5,r31,312
	ctx.r5.s64 = ctx.r31.s64 + 312;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// bl 0x832df6c8
	ctx.lr = 0x82E72DCC;
	sub_832DF6C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e72ddc
	if (cr6.eq) goto loc_82E72DDC;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82e72c50
	if (!cr6.eq) goto loc_82E72C50;
loc_82E72DDC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72DE4:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(ctx.r11.u32, 997, xer);
	// beq cr6,0x82e72e48
	if (cr6.eq) goto loc_82E72E48;
loc_82E72DF0:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72DF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72580
	ctx.lr = 0x82E72E00;
	sub_82E72580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72c90
	if (cr6.eq) goto loc_82E72C90;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82e72e44
	goto loc_82E72E44;
loc_82E72E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71cc0
	ctx.lr = 0x82E72E1C;
	sub_82E71CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e72e48
	if (cr6.eq) goto loc_82E72E48;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82e72c90
	if (!cr6.eq) goto loc_82E72C90;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82E72E44:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82E72E48:
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

__attribute__((alias("__imp__sub_82E72E60"))) PPC_WEAK_FUNC(sub_82E72E60);
PPC_FUNC_IMPL(__imp__sub_82E72E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E72E68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e72eb4
	if (cr6.eq) goto loc_82E72EB4;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E72E84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e72e98
	if (cr6.lt) goto loc_82E72E98;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82E72E98;
	sub_82416268(ctx, base);
loc_82E72E98:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82e72e84
	if (!cr6.eq) goto loc_82E72E84;
loc_82E72EB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72EBC"))) PPC_WEAK_FUNC(sub_82E72EBC);
PPC_FUNC_IMPL(__imp__sub_82E72EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E72EC0"))) PPC_WEAK_FUNC(sub_82E72EC0);
PPC_FUNC_IMPL(__imp__sub_82E72EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82E72EC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,910
	ctx.r11.s64 = 59637760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,14563
	ctx.r10.u64 = ctx.r11.u64 | 14563;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e72ef0
	if (!cr6.gt) goto loc_82E72EF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82E72EF0;
	sub_831CC150(ctx, base);
loc_82E72EF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,72
	ctx.r24.s64 = 72;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bge cr6,0x82e72fb0
	if (!cr6.lt) goto loc_82E72FB0;
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e72618
	ctx.lr = 0x82E72F1C;
	sub_82E72618(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// beq cr6,0x82e72f58
	if (cr6.eq) goto loc_82E72F58;
loc_82E72F34:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e72f48
	if (cr6.eq) goto loc_82E72F48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e729b0
	ctx.lr = 0x82E72F48;
	sub_82E729B0(ctx, base);
loc_82E72F48:
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bne cr6,0x82e72f34
	if (!cr6.eq) goto loc_82E72F34;
loc_82E72F58:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82e72f84
	if (cr6.eq) goto loc_82E72F84;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e72e60
	ctx.lr = 0x82E72F7C;
	sub_82E72E60(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82E72F84;
	sub_82416268(ctx, base);
loc_82E72F84:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82E72FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72FB8"))) PPC_WEAK_FUNC(sub_82E72FB8);
PPC_FUNC_IMPL(__imp__sub_82E72FB8) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e73004
	if (cr6.eq) goto loc_82E73004;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e72b50
	ctx.lr = 0x82E72FEC;
	sub_82E72B50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82e72e60
	ctx.lr = 0x82E73000;
	sub_82E72E60(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82E73004:
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

__attribute__((alias("__imp__sub_82E7301C"))) PPC_WEAK_FUNC(sub_82E7301C);
PPC_FUNC_IMPL(__imp__sub_82E7301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E73020"))) PPC_WEAK_FUNC(sub_82E73020);
PPC_FUNC_IMPL(__imp__sub_82E73020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,910
	ctx.r10.s64 = 59637760;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,72
	ctx.r9.s64 = 72;
	// ori r8,r10,14563
	ctx.r8.u64 = ctx.r10.u64 | 14563;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e73054
	if (!cr6.lt) goto loc_82E73054;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82E73054:
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
	// blt cr6,0x82e73084
	if (cr6.lt) goto loc_82E73084;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82E73084:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e73090
	if (!cr6.lt) goto loc_82E73090;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82E73090:
	// b 0x82e72ec0
	sub_82E72EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E73094"))) PPC_WEAK_FUNC(sub_82E73094);
PPC_FUNC_IMPL(__imp__sub_82E73094) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E73098"))) PPC_WEAK_FUNC(sub_82E73098);
PPC_FUNC_IMPL(__imp__sub_82E73098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E730A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,14532
	ctx.r4.s64 = ctx.r11.s64 + 14532;
	// bl 0x83103328
	ctx.lr = 0x82E730B4;
	sub_83103328(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,14732
	ctx.r9.s64 = ctx.r10.s64 + 14732;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// std r11,240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 240, ctx.r11.u64);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stb r11,324(r31)
	PPC_STORE_U8(ctx.r31.u32 + 324, ctx.r11.u8);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e73180
	if (cr6.eq) goto loc_82E73180;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e72b50
	ctx.lr = 0x82E73168;
	sub_82E72B50(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82e72e60
	ctx.lr = 0x82E7317C;
	sub_82E72E60(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_82E73180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7318C"))) PPC_WEAK_FUNC(sub_82E7318C);
PPC_FUNC_IMPL(__imp__sub_82E7318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E73190"))) PPC_WEAK_FUNC(sub_82E73190);
PPC_FUNC_IMPL(__imp__sub_82E73190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E73198;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,14732
	ctx.r9.s64 = ctx.r11.s64 + 14732;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,18992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18992, ctx.r29.u32);
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e731cc
	if (cr6.eq) goto loc_82E731CC;
	// bl 0x82416268
	ctx.lr = 0x82E731CC;
	sub_82416268(ctx, base);
loc_82E731CC:
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e73200
	if (cr6.eq) goto loc_82E73200;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82e72e60
	ctx.lr = 0x82E731F8;
	sub_82E72E60(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82E73200;
	sub_82416268(ctx, base);
loc_82E73200:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// bl 0x831032a0
	ctx.lr = 0x82E73214;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7321C"))) PPC_WEAK_FUNC(sub_82E7321C);
PPC_FUNC_IMPL(__imp__sub_82E7321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E73220"))) PPC_WEAK_FUNC(sub_82E73220);
PPC_FUNC_IMPL(__imp__sub_82E73220) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,18992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18992);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82e73284
	if (!cr6.eq) goto loc_82E73284;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E73258;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7327c
	if (cr6.eq) goto loc_82E7327C;
	// bl 0x82e73098
	ctx.lr = 0x82E73264;
	sub_82E73098(ctx, base);
	// stw r3,18992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18992, ctx.r3.u32);
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
loc_82E7327C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,18992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18992, ctx.r11.u32);
loc_82E73284:
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

__attribute__((alias("__imp__sub_82E73298"))) PPC_WEAK_FUNC(sub_82E73298);
PPC_FUNC_IMPL(__imp__sub_82E73298) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e732d0
	if (!cr6.lt) goto loc_82E732D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82e732d4
	if (!cr6.gt) goto loc_82E732D4;
loc_82E732D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E732D4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e7332c
	if (cr6.eq) goto loc_82E7332C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,72
	ctx.r9.s64 = 72;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82e73308
	if (!cr6.eq) goto loc_82E73308;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73020
	ctx.lr = 0x82E73308;
	sub_82E73020(ctx, base);
loc_82E73308:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e73358
	if (cr6.eq) goto loc_82E73358;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e73354
	goto loc_82E73354;
loc_82E7332C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e73344
	if (!cr6.eq) goto loc_82E73344;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e73020
	ctx.lr = 0x82E73344;
	sub_82E73020(ctx, base);
loc_82E73344:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e73358
	if (cr6.eq) goto loc_82E73358;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E73354:
	// bl 0x82e729b0
	ctx.lr = 0x82E73358;
	sub_82E729B0(ctx, base);
loc_82E73358:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E7337C"))) PPC_WEAK_FUNC(sub_82E7337C);
PPC_FUNC_IMPL(__imp__sub_82E7337C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E73380"))) PPC_WEAK_FUNC(sub_82E73380);
PPC_FUNC_IMPL(__imp__sub_82E73380) {
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
	// bl 0x82e73190
	ctx.lr = 0x82E733A0;
	sub_82E73190(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e733b8
	if (cr6.eq) goto loc_82E733B8;
	// bl 0x82416268
	ctx.lr = 0x82E733B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E733B8:
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

__attribute__((alias("__imp__sub_82E733D0"))) PPC_WEAK_FUNC(sub_82E733D0);
PPC_FUNC_IMPL(__imp__sub_82E733D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82E733D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,336(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E733F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7340c
	if (!cr6.eq) goto loc_82E7340C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82E7340C:
	// lwz r3,336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e73450
	if (cr6.eq) goto loc_82E73450;
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82e73554
	if (cr6.eq) goto loc_82E73554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E7343C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r9.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82E73450:
	// addi r27,r29,88
	ctx.r27.s64 = ctx.r29.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e72fb8
	ctx.lr = 0x82E7345C;
	sub_82E72FB8(ctx, base);
	// lwz r3,336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// bl 0x82ecce10
	ctx.lr = 0x82E73464;
	sub_82ECCE10(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// beq cr6,0x82e73534
	if (cr6.eq) goto loc_82E73534;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r28,15
	ctx.r28.s64 = 15;
	// addi r26,r11,14564
	ctx.r26.s64 = ctx.r11.s64 + 14564;
loc_82E73484:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// bl 0x82eccf10
	ctx.lr = 0x82E73490;
	sub_82ECCF10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ld r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r24,104(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r23,108(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r22,112(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// bl 0x827a8810
	ctx.lr = 0x82E734F0;
	sub_827A8810(ctx, base);
	// cntlzw r7,r3
	ctx.r7.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r6,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r6.u8);
	// bl 0x82e73298
	ctx.lr = 0x82E73508;
	sub_82E73298(ctx, base);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e7351c
	if (cr6.lt) goto loc_82E7351C;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82416268
	ctx.lr = 0x82E7351C;
	sub_82416268(ctx, base);
loc_82E7351C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// blt cr6,0x82e73484
	if (cr6.lt) goto loc_82E73484;
loc_82E73534:
	// lwz r3,336(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e73554
	if (cr6.eq) goto loc_82E73554;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E73550;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 336, ctx.r31.u32);
loc_82E73554:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E73560"))) PPC_WEAK_FUNC(sub_82E73560);
PPC_FUNC_IMPL(__imp__sub_82E73560) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x82e7382c
	if (cr6.gt) goto loc_82E7382C;
	// lis r12,-32025
	ctx.r12.s64 = -2098790400;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13724
	ctx.r12.s64 = ctx.r12.s64 + 13724;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82E735D4;
	case 1:
		goto loc_82E735F0;
	case 2:
		goto loc_82E7360C;
	case 3:
		goto loc_82E7364C;
	case 4:
		goto loc_82E73798;
	case 5:
		goto loc_82E737D8;
	case 6:
		goto loc_82E737D8;
	case 7:
		goto loc_82E737D8;
	case 8:
		goto loc_82E7368C;
	case 9:
		goto loc_82E736D0;
	case 10:
		goto loc_82E73714;
	case 11:
		goto loc_82E73758;
	case 12:
		goto loc_82E737E0;
	case 13:
		goto loc_82E73810;
	default:
		return;
	}
	// lwz r23,13780(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13780);
	// lwz r23,13808(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13808);
	// lwz r23,13836(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13836);
	// lwz r23,13900(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13900);
	// lwz r23,14232(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14232);
	// lwz r23,14296(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14296);
	// lwz r23,14296(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14296);
	// lwz r23,14296(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14296);
	// lwz r23,13964(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13964);
	// lwz r23,14032(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14032);
	// lwz r23,14100(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14100);
	// lwz r23,14168(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14168);
	// lwz r23,14304(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14304);
	// lwz r23,14352(r7)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 14352);
loc_82E735D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e718f8
	ctx.lr = 0x82E735DC;
	sub_82E718F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82e73828
	goto loc_82E73828;
loc_82E735F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e733d0
	ctx.lr = 0x82E735F8;
	sub_82E733D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82e73828
	goto loc_82E73828;
loc_82E7360C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71e00
	ctx.lr = 0x82E73614;
	sub_82E71E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E7364C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72688
	ctx.lr = 0x82E73654;
	sub_82E72688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E7368C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72950
	ctx.lr = 0x82E73694;
	sub_82E72950(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E736D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71948
	ctx.lr = 0x82E736D8;
	sub_82E71948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E73714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71bb0
	ctx.lr = 0x82E7371C;
	sub_82E71BB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E73758:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72460
	ctx.lr = 0x82E73760;
	sub_82E72460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E73798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e71a88
	ctx.lr = 0x82E737A0;
	sub_82E71A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r8,r11,10
	ctx.r8.s64 = ctx.r11.s64 + 10;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
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
loc_82E737D8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82e73828
	goto loc_82E73828;
loc_82E737E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72118
	ctx.lr = 0x82E737F4;
	sub_82E72118(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
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
loc_82E73810:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e72bf0
	ctx.lr = 0x82E73818;
	sub_82E72BF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7382c
	if (cr6.eq) goto loc_82E7382C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E73828:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82E7382C:
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

__attribute__((alias("__imp__sub_82E73840"))) PPC_WEAK_FUNC(sub_82E73840);
PPC_FUNC_IMPL(__imp__sub_82E73840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E73848;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15076
	ctx.r4.s64 = ctx.r11.s64 + 15076;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x831ce980
	ctx.lr = 0x82E7386C;
	sub_831CE980(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// beq cr6,0x82e738b0
	if (cr6.eq) goto loc_82E738B0;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82E73884:
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r5,r8,28
	ctx.r5.u64 = ctx.r8.u32 & 0xF;
	// lbzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// stbu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r3.u8);
	ctx.r31.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bdnz 0x82e73884
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E73884;
loc_82E738B0:
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E738BC"))) PPC_WEAK_FUNC(sub_82E738BC);
PPC_FUNC_IMPL(__imp__sub_82E738BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E738C0"))) PPC_WEAK_FUNC(sub_82E738C0);
PPC_FUNC_IMPL(__imp__sub_82E738C0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8310cc00
	ctx.lr = 0x82E738DC;
	sub_8310CC00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e73918
	if (cr6.eq) goto loc_82E73918;
	// bl 0x8308e078
	ctx.lr = 0x82E738EC;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82e738fc
	if (cr6.lt) goto loc_82E738FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7391c
	goto loc_82E7391C;
loc_82E738FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r9,r11,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82e7391c
	goto loc_82E7391C;
loc_82E73918:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E7391C:
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

__attribute__((alias("__imp__sub_82E73934"))) PPC_WEAK_FUNC(sub_82E73934);
PPC_FUNC_IMPL(__imp__sub_82E73934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E73938"))) PPC_WEAK_FUNC(sub_82E73938);
PPC_FUNC_IMPL(__imp__sub_82E73938) {
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
	// bl 0x8308e078
	ctx.lr = 0x82E73950;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82e73970
	if (cr6.lt) goto loc_82E73970;
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
loc_82E73970:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832d34e8
	ctx.lr = 0x82E73978;
	sub_832D34E8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82E73994"))) PPC_WEAK_FUNC(sub_82E73994);
PPC_FUNC_IMPL(__imp__sub_82E73994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E73998"))) PPC_WEAK_FUNC(sub_82E73998);
PPC_FUNC_IMPL(__imp__sub_82E73998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// addi r3,r11,15464
	ctx.r3.s64 = ctx.r11.s64 + 15464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// lwz r9,25696(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25696);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82E739B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82e739d4
	if (cr6.eq) goto loc_82E739D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e739b4
	if (cr6.lt) goto loc_82E739B4;
	// blr 
	return;
loc_82E739D4:
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E739E4"))) PPC_WEAK_FUNC(sub_82E739E4);
PPC_FUNC_IMPL(__imp__sub_82E739E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E739E8"))) PPC_WEAK_FUNC(sub_82E739E8);
PPC_FUNC_IMPL(__imp__sub_82E739E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E739F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// bgt cr6,0x82e73f8c
	if (cr6.gt) goto loc_82E73F8C;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82e73a54
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E73A54;
	// bdzf 4*cr6+eq,0x82e73aa0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E73AA0;
	// bdzf 4*cr6+eq,0x82e73b30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E73B30;
	// bdzf 4*cr6+eq,0x82e73bc0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E73BC0;
	// bdzf 4*cr6+eq,0x82e73c58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E73C58;
	// bdzf 4*cr6+eq,0x82e73e2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82E73E2C;
	// bne cr6,0x82e73ebc
	if (!cr6.eq) goto loc_82E73EBC;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r11,r11,15212
	ctx.r11.s64 = ctx.r11.s64 + 15212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x824733f0
	ctx.lr = 0x82E73A4C;
	sub_824733F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73A54:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lbz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 232);
	// addi r11,r11,15212
	ctx.r11.s64 = ctx.r11.s64 + 15212;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bne cr6,0x82e73a70
	if (!cr6.eq) goto loc_82E73A70;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
loc_82E73A70:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E73A74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e73a74
	if (!cr6.eq) goto loc_82E73A74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x82E73A98;
	sub_824733F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73AA0:
	// li r27,29
	ctx.r27.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82E73AB8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e74014
	if (cr6.eq) goto loc_82E74014;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82E73AD0;
	sub_831CDCF0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,15212
	ctx.r11.s64 = ctx.r11.s64 + 15212;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-60
	ctx.r5.s64 = ctx.r11.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82E73AEC;
	sub_831D0B08(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E73AF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e73af0
	if (!cr6.eq) goto loc_82E73AF0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x82E73B18;
	sub_824733F0(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825952b8
	ctx.lr = 0x82E73B28;
	sub_825952B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73B30:
	// li r27,29
	ctx.r27.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82E73B48;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e74014
	if (cr6.eq) goto loc_82E74014;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82E73B60;
	sub_831CDCF0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,15212
	ctx.r11.s64 = ctx.r11.s64 + 15212;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82E73B7C;
	sub_831D0B08(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E73B80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e73b80
	if (!cr6.eq) goto loc_82E73B80;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x82E73BA8;
	sub_824733F0(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825952b8
	ctx.lr = 0x82E73BB8;
	sub_825952B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73BC0:
	// li r27,29
	ctx.r27.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82E73BD8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e74014
	if (cr6.eq) goto loc_82E74014;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82E73BF0;
	sub_831CDCF0(ctx, base);
	// lfd f1,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r11,r11,15212
	ctx.r11.s64 = ctx.r11.s64 + 15212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-44
	ctx.r5.s64 = ctx.r11.s64 + -44;
	// bl 0x831d0b08
	ctx.lr = 0x82E73C14;
	sub_831D0B08(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E73C18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e73c18
	if (!cr6.eq) goto loc_82E73C18;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x82E73C40;
	sub_824733F0(ctx, base);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825952b8
	ctx.lr = 0x82E73C50;
	sub_825952B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73C58:
	// lwz r31,236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e73dec
	if (cr6.eq) goto loc_82E73DEC;
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,192
	cr6.compare<uint32_t>(ctx.r10.u32, 192, xer);
	// bne cr6,0x82e73c88
	if (!cr6.eq) goto loc_82E73C88;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// beq cr6,0x82e73dec
	if (cr6.eq) goto loc_82E73DEC;
loc_82E73C88:
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,224
	cr6.compare<uint32_t>(ctx.r10.u32, 224, xer);
	// bne cr6,0x82e73cb4
	if (!cr6.eq) goto loc_82E73CB4;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bne cr6,0x82e73cb4
	if (!cr6.eq) goto loc_82E73CB4;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// beq cr6,0x82e73dec
	if (cr6.eq) goto loc_82E73DEC;
loc_82E73CB4:
	// rlwinm r10,r11,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// cmplwi cr6,r10,240
	cr6.compare<uint32_t>(ctx.r10.u32, 240, xer);
	// bne cr6,0x82e73cf0
	if (!cr6.eq) goto loc_82E73CF0;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bne cr6,0x82e73cf0
	if (!cr6.eq) goto loc_82E73CF0;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bne cr6,0x82e73cf0
	if (!cr6.eq) goto loc_82E73CF0;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// beq cr6,0x82e73dec
	if (cr6.eq) goto loc_82E73DEC;
loc_82E73CF0:
	// rlwinm r10,r11,0,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC;
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// bne cr6,0x82e73d3c
	if (!cr6.eq) goto loc_82E73D3C;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bne cr6,0x82e73d3c
	if (!cr6.eq) goto loc_82E73D3C;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bne cr6,0x82e73d3c
	if (!cr6.eq) goto loc_82E73D3C;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bne cr6,0x82e73d3c
	if (!cr6.eq) goto loc_82E73D3C;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// beq cr6,0x82e73dec
	if (cr6.eq) goto loc_82E73DEC;
loc_82E73D3C:
	// rlwinm r11,r11,0,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE;
	// cmplwi cr6,r11,252
	cr6.compare<uint32_t>(ctx.r11.u32, 252, xer);
	// bne cr6,0x82e73d98
	if (!cr6.eq) goto loc_82E73D98;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bne cr6,0x82e73d98
	if (!cr6.eq) goto loc_82E73D98;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bne cr6,0x82e73d98
	if (!cr6.eq) goto loc_82E73D98;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bne cr6,0x82e73d98
	if (!cr6.eq) goto loc_82E73D98;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bne cr6,0x82e73d98
	if (!cr6.eq) goto loc_82E73D98;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r11,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// beq cr6,0x82e73dec
	if (cr6.eq) goto loc_82E73DEC;
loc_82E73D98:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83691bb8
	ctx.lr = 0x82E73DB8;
	sub_83691BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x82e739e8
	ctx.lr = 0x82E73DC8;
	sub_82E739E8(ctx, base);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e74014
	if (cr6.eq) goto loc_82E74014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E73DDC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E73DE4;
	sub_82416268(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73DEC:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,15212
	ctx.r29.s64 = ctx.r11.s64 + 15212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// bl 0x824733f0
	ctx.lr = 0x82E73E04;
	sub_824733F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x824733f0
	ctx.lr = 0x82E73E14;
	sub_824733F0(ctx, base);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73E24;
	sub_824733F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73E2C:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,15212
	ctx.r28.s64 = ctx.r11.s64 + 15212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// bl 0x824733f0
	ctx.lr = 0x82E73E44;
	sub_824733F0(ctx, base);
	// lwz r31,232(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e73ea4
	if (cr6.eq) goto loc_82E73EA4;
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// bl 0x82e739e8
	ctx.lr = 0x82E73E64;
	sub_82E739E8(ctx, base);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x82e73ea4
	if (!cr6.lt) goto loc_82E73EA4;
loc_82E73E78:
	// addi r4,r28,-28
	ctx.r4.s64 = ctx.r28.s64 + -28;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73E88;
	sub_824733F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x82e739e8
	ctx.lr = 0x82E73E98;
	sub_82E739E8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82e73e78
	if (cr6.lt) goto loc_82E73E78;
loc_82E73EA4:
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73EB4;
	sub_824733F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73EBC:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,15212
	ctx.r28.s64 = ctx.r11.s64 + 15212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// bl 0x824733f0
	ctx.lr = 0x82E73ED4;
	sub_824733F0(ctx, base);
	// lwz r31,232(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e73f74
	if (cr6.eq) goto loc_82E73F74;
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// bl 0x82e739e8
	ctx.lr = 0x82E73EF4;
	sub_82E739E8(ctx, base);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73F04;
	sub_824733F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ld r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// bl 0x82e739e8
	ctx.lr = 0x82E73F14;
	sub_82E739E8(ctx, base);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x82e73f74
	if (!cr6.lt) goto loc_82E73F74;
loc_82E73F28:
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73F38;
	sub_824733F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x82e739e8
	ctx.lr = 0x82E73F48;
	sub_82E739E8(ctx, base);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73F58;
	sub_824733F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x82e739e8
	ctx.lr = 0x82E73F68;
	sub_82E739E8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x82e73f28
	if (cr6.lt) goto loc_82E73F28;
loc_82E73F74:
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824733f0
	ctx.lr = 0x82E73F84;
	sub_824733F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82E73F8C:
	// li r27,29
	ctx.r27.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x82E73FA4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e74014
	if (cr6.eq) goto loc_82E74014;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x82E73FBC;
	sub_831CDCF0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,15212
	ctx.r5.s64 = ctx.r11.s64 + 15212;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0b08
	ctx.lr = 0x82E73FD8;
	sub_831D0B08(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E73FDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e73fdc
	if (!cr6.eq) goto loc_82E73FDC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824733f0
	ctx.lr = 0x82E74004;
	sub_824733F0(ctx, base);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825952b8
	ctx.lr = 0x82E74014;
	sub_825952B8(ctx, base);
loc_82E74014:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7401C"))) PPC_WEAK_FUNC(sub_82E7401C);
PPC_FUNC_IMPL(__imp__sub_82E7401C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74020"))) PPC_WEAK_FUNC(sub_82E74020);
PPC_FUNC_IMPL(__imp__sub_82E74020) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82E7403C;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x82e7404c
	if (cr6.lt) goto loc_82E7404C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e74078
	goto loc_82E74078;
loc_82E7404C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832d33b8
	ctx.lr = 0x82E74058;
	sub_832D33B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e74070
	if (!cr6.eq) goto loc_82E74070;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82E74070;
	sub_8259D6C0(ctx, base);
loc_82E74070:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82E74078:
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

__attribute__((alias("__imp__sub_82E74090"))) PPC_WEAK_FUNC(sub_82E74090);
PPC_FUNC_IMPL(__imp__sub_82E74090) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83691bb8
	ctx.lr = 0x82E740C4;
	sub_83691BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82e739e8
	ctx.lr = 0x82E740D4;
	sub_82E739E8(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e740f0
	if (cr6.eq) goto loc_82E740F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E740E8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E740F0;
	sub_82416268(ctx, base);
loc_82E740F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74104"))) PPC_WEAK_FUNC(sub_82E74104);
PPC_FUNC_IMPL(__imp__sub_82E74104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74108"))) PPC_WEAK_FUNC(sub_82E74108);
PPC_FUNC_IMPL(__imp__sub_82E74108) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// sth r8,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// sth r7,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r7.u16);
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// sth r5,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r5.u16);
	// sth r30,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r30.u16);
	// sth r10,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r10.u16);
	// bl 0x832d3630
	ctx.lr = 0x82E74170;
	sub_832D3630(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d35c0
	ctx.lr = 0x82E7417C;
	sub_832D35C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e741c0
	if (cr6.eq) goto loc_82E741C0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832d3538
	ctx.lr = 0x82E74190;
	sub_832D3538(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r7,106(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
loc_82E741C0:
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

__attribute__((alias("__imp__sub_82E741D8"))) PPC_WEAK_FUNC(sub_82E741D8);
PPC_FUNC_IMPL(__imp__sub_82E741D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d4840
	ctx.lr = 0x82E74200;
	sub_831D4840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e7424c
	if (!cr6.eq) goto loc_82E7424C;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,1900
	ctx.r8.s64 = ctx.r11.s64 + 1900;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// sth r6,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// sth r7,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// sth r5,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// bl 0x82e74108
	ctx.lr = 0x82E7424C;
	sub_82E74108(ctx, base);
loc_82E7424C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74260"))) PPC_WEAK_FUNC(sub_82E74260);
PPC_FUNC_IMPL(__imp__sub_82E74260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r6,10(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r10,r9,-1900
	ctx.r10.s64 = ctx.r9.s64 + -1900;
	// lhz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// li r31,-1
	ctx.r31.s64 = -1;
	// lhz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r11,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r11.u64);
	// std r11,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r11.u64);
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x831d5158
	ctx.lr = 0x82E742D8;
	sub_831D5158(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E742EC"))) PPC_WEAK_FUNC(sub_82E742EC);
PPC_FUNC_IMPL(__imp__sub_82E742EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E742F0"))) PPC_WEAK_FUNC(sub_82E742F0);
PPC_FUNC_IMPL(__imp__sub_82E742F0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lbz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// lbz r7,5(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// sth r6,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74324"))) PPC_WEAK_FUNC(sub_82E74324);
PPC_FUNC_IMPL(__imp__sub_82E74324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74328"))) PPC_WEAK_FUNC(sub_82E74328);
PPC_FUNC_IMPL(__imp__sub_82E74328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E74330;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82E74340;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e74354
	if (!cr6.eq) goto loc_82E74354;
loc_82E74348:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E74354:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82e74348
	if (cr6.eq) goto loc_82E74348;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83524138
	ctx.lr = 0x82E7436C;
	sub_83524138(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82E74374;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82E74378;
	sub_83524138(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x82e7439c
	if (cr6.eq) goto loc_82E7439C;
	// addi r11,r11,32400
	ctx.r11.s64 = ctx.r11.s64 + 32400;
loc_82E7439C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d4840
	ctx.lr = 0x82E743B0;
	sub_831D4840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e74348
	if (!cr6.eq) goto loc_82E74348;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r8,r11,1900
	ctx.r8.s64 = ctx.r11.s64 + 1900;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// clrlwi r7,r5,16
	ctx.r7.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// sth r7,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// sth r6,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r6.u16);
	// bne cr6,0x82e74428
	if (!cr6.eq) goto loc_82E74428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74108
	ctx.lr = 0x82E7441C;
	sub_82E74108(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82E74428:
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7444C"))) PPC_WEAK_FUNC(sub_82E7444C);
PPC_FUNC_IMPL(__imp__sub_82E7444C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74450"))) PPC_WEAK_FUNC(sub_82E74450);
PPC_FUNC_IMPL(__imp__sub_82E74450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e74460
	if (!cr6.eq) goto loc_82E74460;
	// blr 
	return;
loc_82E74460:
	// b 0x82ece448
	sub_82ECE448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E74464"))) PPC_WEAK_FUNC(sub_82E74464);
PPC_FUNC_IMPL(__imp__sub_82E74464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74468"))) PPC_WEAK_FUNC(sub_82E74468);
PPC_FUNC_IMPL(__imp__sub_82E74468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e74478
	if (!cr6.eq) goto loc_82E74478;
	// blr 
	return;
loc_82E74478:
	// b 0x82ece460
	sub_82ECE460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7447C"))) PPC_WEAK_FUNC(sub_82E7447C);
PPC_FUNC_IMPL(__imp__sub_82E7447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74480"))) PPC_WEAK_FUNC(sub_82E74480);
PPC_FUNC_IMPL(__imp__sub_82E74480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e74490
	if (!cr6.eq) goto loc_82E74490;
	// blr 
	return;
loc_82E74490:
	// b 0x82ed2670
	sub_82ED2670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E74494"))) PPC_WEAK_FUNC(sub_82E74494);
PPC_FUNC_IMPL(__imp__sub_82E74494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74498"))) PPC_WEAK_FUNC(sub_82E74498);
PPC_FUNC_IMPL(__imp__sub_82E74498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e744a8
	if (!cr6.eq) goto loc_82E744A8;
	// blr 
	return;
loc_82E744A8:
	// b 0x82ed26f8
	sub_82ED26F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E744AC"))) PPC_WEAK_FUNC(sub_82E744AC);
PPC_FUNC_IMPL(__imp__sub_82E744AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E744B0"))) PPC_WEAK_FUNC(sub_82E744B0);
PPC_FUNC_IMPL(__imp__sub_82E744B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e744c0
	if (!cr6.eq) goto loc_82E744C0;
	// blr 
	return;
loc_82E744C0:
	// b 0x82ed55e8
	sub_82ED55E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E744C4"))) PPC_WEAK_FUNC(sub_82E744C4);
PPC_FUNC_IMPL(__imp__sub_82E744C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E744C8"))) PPC_WEAK_FUNC(sub_82E744C8);
PPC_FUNC_IMPL(__imp__sub_82E744C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e744d8
	if (!cr6.eq) goto loc_82E744D8;
	// blr 
	return;
loc_82E744D8:
	// b 0x82ecf208
	sub_82ECF208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E744DC"))) PPC_WEAK_FUNC(sub_82E744DC);
PPC_FUNC_IMPL(__imp__sub_82E744DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E744E0"))) PPC_WEAK_FUNC(sub_82E744E0);
PPC_FUNC_IMPL(__imp__sub_82E744E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e744f0
	if (!cr6.eq) goto loc_82E744F0;
	// blr 
	return;
loc_82E744F0:
	// b 0x82ecf238
	sub_82ECF238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E744F4"))) PPC_WEAK_FUNC(sub_82E744F4);
PPC_FUNC_IMPL(__imp__sub_82E744F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E744F8"))) PPC_WEAK_FUNC(sub_82E744F8);
PPC_FUNC_IMPL(__imp__sub_82E744F8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// bl 0x82535130
	ctx.lr = 0x82E74520;
	sub_82535130(ctx, base);
	// stb r30,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82E7453C"))) PPC_WEAK_FUNC(sub_82E7453C);
PPC_FUNC_IMPL(__imp__sub_82E7453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74540"))) PPC_WEAK_FUNC(sub_82E74540);
PPC_FUNC_IMPL(__imp__sub_82E74540) {
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
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x82535130
	ctx.lr = 0x82E74554;
	sub_82535130(ctx, base);
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

__attribute__((alias("__imp__sub_82E74568"))) PPC_WEAK_FUNC(sub_82E74568);
PPC_FUNC_IMPL(__imp__sub_82E74568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E74570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,16536
	ctx.r29.s64 = ctx.r11.s64 + 16536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E74590;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82E74594;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E7459C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e7459c
	if (!cr6.eq) goto loc_82E7459C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E745C0;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E745CC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E745D0;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E745E0"))) PPC_WEAK_FUNC(sub_82E745E0);
PPC_FUNC_IMPL(__imp__sub_82E745E0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82e7460c
	if (!cr6.eq) goto loc_82E7460C;
	// li r31,8192
	ctx.r31.s64 = 8192;
loc_82E7460C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e74630
	if (!cr6.lt) goto loc_82E74630;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82E74624:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82e74624
	if (cr6.lt) goto loc_82E74624;
loc_82E74630:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82E7463C;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82E7465C"))) PPC_WEAK_FUNC(sub_82E7465C);
PPC_FUNC_IMPL(__imp__sub_82E7465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74660"))) PPC_WEAK_FUNC(sub_82E74660);
PPC_FUNC_IMPL(__imp__sub_82E74660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E74668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x82e74694
	if (!cr6.lt) goto loc_82E74694;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E74694;
	sub_82E745E0(ctx, base);
loc_82E74694:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E746AC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E746C0"))) PPC_WEAK_FUNC(sub_82E746C0);
PPC_FUNC_IMPL(__imp__sub_82E746C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// cmplwi cr6,r4,256
	cr6.compare<uint32_t>(ctx.r4.u32, 256, xer);
	// bge cr6,0x82e747a4
	if (!cr6.lt) goto loc_82E747A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,128
	cr6.compare<uint32_t>(ctx.r4.u32, 128, xer);
	// bge cr6,0x82e74738
	if (!cr6.lt) goto loc_82E74738;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82e74704
	if (!cr6.lt) goto loc_82E74704;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e745e0
	ctx.lr = 0x82E74704;
	sub_82E745E0(ctx, base);
loc_82E74704:
	// addi r9,r1,143
	ctx.r9.s64 = ctx.r1.s64 + 143;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_82E74738:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,204
	ctx.r10.s64 = 204;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bge cr6,0x82e74764
	if (!cr6.lt) goto loc_82E74764;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E74764;
	sub_82E745E0(ctx, base);
loc_82E74764:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
loc_82E747A4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bge cr6,0x82e74824
	if (!cr6.lt) goto loc_82E74824;
	// li r10,205
	ctx.r10.s64 = 205;
	// sth r4,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r4.u16);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// bge cr6,0x82e747dc
	if (!cr6.lt) goto loc_82E747DC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E747DC;
	sub_82E745E0(ctx, base);
loc_82E747DC:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r7,1(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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
loc_82E74824:
	// li r10,206
	ctx.r10.s64 = 206;
	// stw r4,81(r1)
	PPC_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bge cr6,0x82e74848
	if (!cr6.lt) goto loc_82E74848;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E74848;
	sub_82E745E0(ctx, base);
loc_82E74848:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E74864:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82e74864
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E74864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E74890"))) PPC_WEAK_FUNC(sub_82E74890);
PPC_FUNC_IMPL(__imp__sub_82E74890) {
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
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x82e74908
	if (!cr6.lt) goto loc_82E74908;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r8,r10,160
	ctx.r8.u64 = ctx.r10.u64 | 160;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x82e748d4
	if (!cr6.lt) goto loc_82E748D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e745e0
	ctx.lr = 0x82E748D4;
	sub_82E745E0(ctx, base);
loc_82E748D4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_82E74908:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e74930
	if (!cr6.lt) goto loc_82E74930;
	// li r10,218
	ctx.r10.s64 = 218;
	// sth r4,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r4.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// b 0x82e74944
	goto loc_82E74944;
loc_82E74930:
	// li r11,219
	ctx.r11.s64 = 219;
	// stw r4,85(r1)
	PPC_STORE_U32(ctx.r1.u32 + 85, ctx.r4.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
loc_82E74944:
	// bl 0x82e74660
	ctx.lr = 0x82E74948;
	sub_82E74660(ctx, base);
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

__attribute__((alias("__imp__sub_82E7495C"))) PPC_WEAK_FUNC(sub_82E7495C);
PPC_FUNC_IMPL(__imp__sub_82E7495C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74960"))) PPC_WEAK_FUNC(sub_82E74960);
PPC_FUNC_IMPL(__imp__sub_82E74960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E74968;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x82E7497C;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e74990
	if (cr6.lt) goto loc_82E74990;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E74990:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82E7499C;
	sub_825346C8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,16760
	ctx.r31.s64 = ctx.r11.s64 + 16760;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E749B0;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E749B8;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E749C0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82E749CC;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E749D8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E749E0;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E749E8;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E749F4"))) PPC_WEAK_FUNC(sub_82E749F4);
PPC_FUNC_IMPL(__imp__sub_82E749F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E749F8"))) PPC_WEAK_FUNC(sub_82E749F8);
PPC_FUNC_IMPL(__imp__sub_82E749F8) {
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
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x82e74a70
	if (!cr6.lt) goto loc_82E74A70;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r8,r10,144
	ctx.r8.u64 = ctx.r10.u64 | 144;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x82e74a3c
	if (!cr6.lt) goto loc_82E74A3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e745e0
	ctx.lr = 0x82E74A3C;
	sub_82E745E0(ctx, base);
loc_82E74A3C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_82E74A70:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e74a98
	if (!cr6.lt) goto loc_82E74A98;
	// li r10,220
	ctx.r10.s64 = 220;
	// sth r4,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r4.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// b 0x82e74aac
	goto loc_82E74AAC;
loc_82E74A98:
	// li r11,221
	ctx.r11.s64 = 221;
	// stw r4,85(r1)
	PPC_STORE_U32(ctx.r1.u32 + 85, ctx.r4.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
loc_82E74AAC:
	// bl 0x82e74660
	ctx.lr = 0x82E74AB0;
	sub_82E74660(ctx, base);
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

__attribute__((alias("__imp__sub_82E74AC4"))) PPC_WEAK_FUNC(sub_82E74AC4);
PPC_FUNC_IMPL(__imp__sub_82E74AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74AC8"))) PPC_WEAK_FUNC(sub_82E74AC8);
PPC_FUNC_IMPL(__imp__sub_82E74AC8) {
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
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// bge cr6,0x82e74b40
	if (!cr6.lt) goto loc_82E74B40;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r8,r10,128
	ctx.r8.u64 = ctx.r10.u64 | 128;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x82e74b0c
	if (!cr6.lt) goto loc_82E74B0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e745e0
	ctx.lr = 0x82E74B0C;
	sub_82E745E0(ctx, base);
loc_82E74B0C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
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
loc_82E74B40:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82e74b68
	if (!cr6.lt) goto loc_82E74B68;
	// li r10,222
	ctx.r10.s64 = 222;
	// sth r4,85(r1)
	PPC_STORE_U16(ctx.r1.u32 + 85, ctx.r4.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// b 0x82e74b7c
	goto loc_82E74B7C;
loc_82E74B68:
	// li r11,223
	ctx.r11.s64 = 223;
	// stw r4,85(r1)
	PPC_STORE_U32(ctx.r1.u32 + 85, ctx.r4.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
loc_82E74B7C:
	// bl 0x82e74660
	ctx.lr = 0x82E74B80;
	sub_82E74660(ctx, base);
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

__attribute__((alias("__imp__sub_82E74B94"))) PPC_WEAK_FUNC(sub_82E74B94);
PPC_FUNC_IMPL(__imp__sub_82E74B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74B98"))) PPC_WEAK_FUNC(sub_82E74B98);
PPC_FUNC_IMPL(__imp__sub_82E74B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E74BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bge cr6,0x82e74bd4
	if (!cr6.lt) goto loc_82E74BD4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E74BD4;
	sub_82E745E0(ctx, base);
loc_82E74BD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E74BEC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E74C04"))) PPC_WEAK_FUNC(sub_82E74C04);
PPC_FUNC_IMPL(__imp__sub_82E74C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E74C08"))) PPC_WEAK_FUNC(sub_82E74C08);
PPC_FUNC_IMPL(__imp__sub_82E74C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82E74C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// bl 0x82e74890
	ctx.lr = 0x82E74C28;
	sub_82E74890(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// blt cr6,0x82e74c40
	if (cr6.lt) goto loc_82E74C40;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82e74c44
	goto loc_82E74C44;
loc_82E74C40:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82E74C44:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// bge cr6,0x82e74c68
	if (!cr6.lt) goto loc_82E74C68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E74C68;
	sub_82E745E0(ctx, base);
loc_82E74C68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82E74C80;
	sub_831CE980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E74C98"))) PPC_WEAK_FUNC(sub_82E74C98);
PPC_FUNC_IMPL(__imp__sub_82E74C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E74CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,16908
	ctx.r29.s64 = ctx.r11.s64 + 16908;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E74CC0;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82E74CC4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E74CCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74ccc
	if (!cr6.eq) goto loc_82E74CCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E74CF0;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E74CFC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E74D00;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E74D10"))) PPC_WEAK_FUNC(sub_82E74D10);
PPC_FUNC_IMPL(__imp__sub_82E74D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E74D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,140
	ctx.r11.s64 = 140;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82e74d58
	if (!cr6.lt) goto loc_82E74D58;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E74D58;
	sub_82E745E0(ctx, base);
loc_82E74D58:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r27,r10,16884
	ctx.r27.s64 = ctx.r10.s64 + 16884;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r27,-116
	ctx.r4.s64 = ctx.r27.s64 + -116;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E74DA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74DAC;
	sub_82E74C08(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e74dc0
	if (cr6.lt) goto loc_82E74DC0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82E74DC0;
	sub_82416268(ctx, base);
loc_82E74DC0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x82e74de0
	if (cr6.lt) goto loc_82E74DE0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E74DE0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82E74DF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74df0
	if (!cr6.eq) goto loc_82E74DF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E74E14;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74E20;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e74e34
	if (cr6.lt) goto loc_82E74E34;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82E74E34;
	sub_82416268(ctx, base);
loc_82E74E34:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-108
	ctx.r4.s64 = ctx.r27.s64 + -108;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E74E5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74E68;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e74e7c
	if (cr6.lt) goto loc_82E74E7C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82E74E7C;
	sub_82416268(ctx, base);
loc_82E74E7C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82E74E94;
	sub_82E746C0(ctx, base);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82472fc0
	ctx.lr = 0x82E74EB0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74EBC;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e74ed0
	if (cr6.lt) goto loc_82E74ED0;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x82E74ED0;
	sub_82416268(ctx, base);
loc_82E74ED0:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82E74EE8;
	sub_82E746C0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r27,-92
	ctx.r4.s64 = ctx.r27.s64 + -92;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x82E74F04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74F10;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e74f24
	if (cr6.lt) goto loc_82E74F24;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82E74F24;
	sub_82416268(ctx, base);
loc_82E74F24:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82e746c0
	ctx.lr = 0x82E74F3C;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-80
	ctx.r4.s64 = ctx.r27.s64 + -80;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x82E74F58;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74F64;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e74f78
	if (cr6.lt) goto loc_82E74F78;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E74F78;
	sub_82416268(ctx, base);
loc_82E74F78:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,124(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// bl 0x82e746c0
	ctx.lr = 0x82E74F90;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x82E74FAC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E74FB8;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e74fcc
	if (cr6.lt) goto loc_82E74FCC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E74FCC;
	sub_82416268(ctx, base);
loc_82E74FCC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,128(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// bl 0x82e746c0
	ctx.lr = 0x82E74FE4;
	sub_82E746C0(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x82E75000;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E7500C;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75020
	if (cr6.lt) goto loc_82E75020;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E75020;
	sub_82416268(ctx, base);
loc_82E75020:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,132(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// bl 0x82e746c0
	ctx.lr = 0x82E75038;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x82E75054;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E75060;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75074
	if (cr6.lt) goto loc_82E75074;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82E75074;
	sub_82416268(ctx, base);
loc_82E75074:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,136(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// bl 0x82e746c0
	ctx.lr = 0x82E7508C;
	sub_82E746C0(ctx, base);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82472fc0
	ctx.lr = 0x82E750A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E750B4;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e750c8
	if (cr6.lt) goto loc_82E750C8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82E750C8;
	sub_82416268(ctx, base);
loc_82E750C8:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,140(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// bl 0x82e746c0
	ctx.lr = 0x82E750E0;
	sub_82E746C0(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x82E750FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E75108;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e7511c
	if (cr6.lt) goto loc_82E7511C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82E7511C;
	sub_82416268(ctx, base);
loc_82E7511C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,144(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// bl 0x82e746c0
	ctx.lr = 0x82E75134;
	sub_82E746C0(ctx, base);
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82472fc0
	ctx.lr = 0x82E75150;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E7515C;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75170
	if (cr6.lt) goto loc_82E75170;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82E75170;
	sub_82416268(ctx, base);
loc_82E75170:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,148(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// bl 0x82e746c0
	ctx.lr = 0x82E75188;
	sub_82E746C0(ctx, base);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82472fc0
	ctx.lr = 0x82E751A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82E751B0;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e751c4
	if (cr6.lt) goto loc_82E751C4;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x82E751C4;
	sub_82416268(ctx, base);
loc_82E751C4:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r30,r28,152
	ctx.r30.s64 = ctx.r28.s64 + 152;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,152(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// bl 0x82e749f8
	ctx.lr = 0x82E751E0;
	sub_82E749F8(ctx, base);
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e75224
	if (cr6.eq) goto loc_82E75224;
loc_82E751FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e746c0
	ctx.lr = 0x82E75208;
	sub_82E746C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e751fc
	if (!cr6.eq) goto loc_82E751FC;
loc_82E75224:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75230"))) PPC_WEAK_FUNC(sub_82E75230);
PPC_FUNC_IMPL(__imp__sub_82E75230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82E75238;
	__savegprlr_16(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83691bb8
	ctx.lr = 0x82E75260;
	sub_83691BB8(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e75854
	if (!cr6.lt) goto loc_82E75854;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r24,r11,16
	ctx.r24.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r16,r11,1
	ctx.r16.s64 = ctx.r11.s64 + 1;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r17,15
	ctx.r17.s64 = 15;
	// li r23,4
	ctx.r23.s64 = 4;
	// ori r19,r8,1
	ctx.r19.u64 = ctx.r8.u64 | 1;
	// addi r18,r11,17032
	ctx.r18.s64 = ctx.r11.s64 + 17032;
	// addi r20,r10,8980
	ctx.r20.s64 = ctx.r10.s64 + 8980;
	// addi r21,r9,26164
	ctx.r21.s64 = ctx.r9.s64 + 26164;
loc_82E752B4:
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r10,r24,-16
	ctx.r10.s64 = ctx.r24.s64 + -16;
	// ld r9,-8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + -8);
	// ld r8,-16(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x82E752E8;
	sub_82472FC0(ctx, base);
	// addi r6,r18,-116
	ctx.r6.s64 = ctx.r18.s64 + -116;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E75300;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e75394
	if (!cr6.eq) goto loc_82E75394;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// ld r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x82E75338;
	sub_82472FC0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82e7534c
	if (!cr6.lt) goto loc_82E7534C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82E7534C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E75350:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e75350
	if (!cr6.eq) goto loc_82E75350;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r22,20
	ctx.r3.s64 = ctx.r22.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E75374;
	sub_824208C8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e75388
	if (cr6.lt) goto loc_82E75388;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E75388;
	sub_82416268(ctx, base);
loc_82E75388:
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
loc_82E75394:
	// addi r6,r18,-108
	ctx.r6.s64 = ctx.r18.s64 + -108;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E753AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e753e8
	if (!cr6.eq) goto loc_82E753E8;
	// ld r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// ld r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e753e0
	if (!cr6.eq) goto loc_82E753E0;
	// ld r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e753e4
	goto loc_82E753E4;
loc_82E753E0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E753E4:
	// stw r11,48(r22)
	PPC_STORE_U32(ctx.r22.u32 + 48, ctx.r11.u32);
loc_82E753E8:
	// addi r6,r18,-100
	ctx.r6.s64 = ctx.r18.s64 + -100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E75400;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e7543c
	if (!cr6.eq) goto loc_82E7543C;
	// ld r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// ld r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,384(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e75434
	if (!cr6.eq) goto loc_82E75434;
	// ld r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e75438
	goto loc_82E75438;
loc_82E75434:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E75438:
	// stw r11,156(r22)
	PPC_STORE_U32(ctx.r22.u32 + 156, ctx.r11.u32);
loc_82E7543C:
	// addi r6,r18,-92
	ctx.r6.s64 = ctx.r18.s64 + -92;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E75454;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e75490
	if (!cr6.eq) goto loc_82E75490;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e75488
	if (!cr6.eq) goto loc_82E75488;
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e7548c
	goto loc_82E7548C;
loc_82E75488:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E7548C:
	// stw r11,160(r22)
	PPC_STORE_U32(ctx.r22.u32 + 160, ctx.r11.u32);
loc_82E75490:
	// addi r6,r18,-80
	ctx.r6.s64 = ctx.r18.s64 + -80;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E754A8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e754e4
	if (!cr6.eq) goto loc_82E754E4;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e754dc
	if (!cr6.eq) goto loc_82E754DC;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e754e0
	goto loc_82E754E0;
loc_82E754DC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E754E0:
	// stw r11,164(r22)
	PPC_STORE_U32(ctx.r22.u32 + 164, ctx.r11.u32);
loc_82E754E4:
	// addi r6,r18,-68
	ctx.r6.s64 = ctx.r18.s64 + -68;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E754FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e75538
	if (!cr6.eq) goto loc_82E75538;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,368(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e75530
	if (!cr6.eq) goto loc_82E75530;
	// ld r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e75534
	goto loc_82E75534;
loc_82E75530:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E75534:
	// stw r11,168(r22)
	PPC_STORE_U32(ctx.r22.u32 + 168, ctx.r11.u32);
loc_82E75538:
	// addi r6,r18,-60
	ctx.r6.s64 = ctx.r18.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E75550;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e7558c
	if (!cr6.eq) goto loc_82E7558C;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e75584
	if (!cr6.eq) goto loc_82E75584;
	// ld r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e75588
	goto loc_82E75588;
loc_82E75584:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E75588:
	// stw r11,172(r22)
	PPC_STORE_U32(ctx.r22.u32 + 172, ctx.r11.u32);
loc_82E7558C:
	// addi r6,r18,-44
	ctx.r6.s64 = ctx.r18.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E755A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e755e0
	if (!cr6.eq) goto loc_82E755E0;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,432(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e755d8
	if (!cr6.eq) goto loc_82E755D8;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e755dc
	goto loc_82E755DC;
loc_82E755D8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E755DC:
	// stw r11,176(r22)
	PPC_STORE_U32(ctx.r22.u32 + 176, ctx.r11.u32);
loc_82E755E0:
	// addi r6,r18,-36
	ctx.r6.s64 = ctx.r18.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E755F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e75634
	if (!cr6.eq) goto loc_82E75634;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e7562c
	if (!cr6.eq) goto loc_82E7562C;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e75630
	goto loc_82E75630;
loc_82E7562C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E75630:
	// stw r11,180(r22)
	PPC_STORE_U32(ctx.r22.u32 + 180, ctx.r11.u32);
loc_82E75634:
	// addi r6,r18,-24
	ctx.r6.s64 = ctx.r18.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E7564C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e75688
	if (!cr6.eq) goto loc_82E75688;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e75680
	if (!cr6.eq) goto loc_82E75680;
	// ld r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e75684
	goto loc_82E75684;
loc_82E75680:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E75684:
	// stw r11,184(r22)
	PPC_STORE_U32(ctx.r22.u32 + 184, ctx.r11.u32);
loc_82E75688:
	// addi r6,r18,-8
	ctx.r6.s64 = ctx.r18.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E756A0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e756dc
	if (!cr6.eq) goto loc_82E756DC;
	// ld r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e756d4
	if (!cr6.eq) goto loc_82E756D4;
	// ld r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e756d8
	goto loc_82E756D8;
loc_82E756D4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82E756D8:
	// stw r11,188(r22)
	PPC_STORE_U32(ctx.r22.u32 + 188, ctx.r11.u32);
loc_82E756DC:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82E756F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e75828
	if (!cr6.eq) goto loc_82E75828;
	// addi r31,r22,192
	ctx.r31.s64 = ctx.r22.s64 + 192;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82E7572C;
	sub_8247B7D8(ctx, base);
	// lwz r3,200(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 200);
	// stw r25,192(r22)
	PPC_STORE_U32(ctx.r22.u32 + 192, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7574c
	if (cr6.eq) goto loc_82E7574C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82E75744;
	sub_8247B268(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82E7574C:
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x82e75828
	if (!cr6.lt) goto loc_82E75828;
loc_82E7576C:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e75798
	if (!cr6.eq) goto loc_82E75798;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e7579c
	goto loc_82E7579C;
loc_82E75798:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82E7579C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e757f8
	if (cr6.lt) goto loc_82E757F8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e757e8
	if (!cr6.gt) goto loc_82E757E8;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E757E0;
	sub_8247B270(ctx, base);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// b 0x82e757ec
	goto loc_82E757EC;
loc_82E757E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E757EC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7581c
	if (cr6.eq) goto loc_82E7581C;
loc_82E757F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e75810
	if (cr0.eq) goto loc_82E75810;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82E75810:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E7581C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x82e7576c
	if (cr6.lt) goto loc_82E7576C;
loc_82E75828:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e7583c
	if (cr6.lt) goto loc_82E7583C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82E7583C;
	sub_82416268(ctx, base);
loc_82E7583C:
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// bne 0x82e752b4
	if (!cr0.eq) goto loc_82E752B4;
loc_82E75854:
	// lwz r31,240(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e75870
	if (cr6.eq) goto loc_82E75870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E75868;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E75870;
	sub_82416268(ctx, base);
loc_82E75870:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7587C"))) PPC_WEAK_FUNC(sub_82E7587C);
PPC_FUNC_IMPL(__imp__sub_82E7587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E75880"))) PPC_WEAK_FUNC(sub_82E75880);
PPC_FUNC_IMPL(__imp__sub_82E75880) {
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
	// bl 0x82d95768
	ctx.lr = 0x82E75898;
	sub_82D95768(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17148
	ctx.r8.s64 = ctx.r11.s64 + 17148;
	// addi r7,r10,17136
	ctx.r7.s64 = ctx.r10.s64 + 17136;
	// addi r6,r9,17132
	ctx.r6.s64 = ctx.r9.s64 + 17132;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r5.u32);
	// stb r11,312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 312, ctx.r11.u8);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
	// stb r11,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82E758F4"))) PPC_WEAK_FUNC(sub_82E758F4);
PPC_FUNC_IMPL(__imp__sub_82E758F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E758F8"))) PPC_WEAK_FUNC(sub_82E758F8);
PPC_FUNC_IMPL(__imp__sub_82E758F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82e75bf8
	sub_82E75BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75900"))) PPC_WEAK_FUNC(sub_82E75900);
PPC_FUNC_IMPL(__imp__sub_82E75900) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82e75bf8
	sub_82E75BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75908"))) PPC_WEAK_FUNC(sub_82E75908);
PPC_FUNC_IMPL(__imp__sub_82E75908) {
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
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,312
	ctx.r31.s64 = ctx.r3.s64 + 312;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75938
	if (cr6.lt) goto loc_82E75938;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E75938;
	sub_8386D088(ctx, base);
loc_82E75938:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82b6a590
	ctx.lr = 0x82E75954;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82E7596C"))) PPC_WEAK_FUNC(sub_82E7596C);
PPC_FUNC_IMPL(__imp__sub_82E7596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E75970"))) PPC_WEAK_FUNC(sub_82E75970);
PPC_FUNC_IMPL(__imp__sub_82E75970) {
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
	// bl 0x82d95768
	ctx.lr = 0x82E75990;
	sub_82D95768(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17176
	ctx.r8.s64 = ctx.r11.s64 + 17176;
	// addi r7,r10,25568
	ctx.r7.s64 = ctx.r10.s64 + 25568;
	// addi r6,r9,17172
	ctx.r6.s64 = ctx.r9.s64 + 17172;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r5,16728
	ctx.r4.s64 = ctx.r5.s64 + 16728;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x824208c8
	ctx.lr = 0x82E759C8;
	sub_824208C8(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,25612
	ctx.r9.s64 = ctx.r4.s64 + 25612;
	// addi r8,r3,25600
	ctx.r8.s64 = ctx.r3.s64 + 25600;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r7,r10,25596
	ctx.r7.s64 = ctx.r10.s64 + 25596;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x82423930
	ctx.lr = 0x82E75A2C;
	sub_82423930(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E75A4C"))) PPC_WEAK_FUNC(sub_82E75A4C);
PPC_FUNC_IMPL(__imp__sub_82E75A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E75A50"))) PPC_WEAK_FUNC(sub_82E75A50);
PPC_FUNC_IMPL(__imp__sub_82E75A50) {
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
	// bl 0x82e75880
	ctx.lr = 0x82E75A70;
	sub_82E75880(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,16728
	ctx.r4.s64 = ctx.r11.s64 + 16728;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x824208c8
	ctx.lr = 0x82E75A84;
	sub_824208C8(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,17216
	ctx.r7.s64 = ctx.r10.s64 + 17216;
	// addi r6,r9,17204
	ctx.r6.s64 = ctx.r9.s64 + 17204;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// addi r5,r8,17200
	ctx.r5.s64 = ctx.r8.s64 + 17200;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// stw r11,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// std r11,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r11.u64);
	// bl 0x82423930
	ctx.lr = 0x82E75AE8;
	sub_82423930(ctx, base);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E75B08"))) PPC_WEAK_FUNC(sub_82E75B08);
PPC_FUNC_IMPL(__imp__sub_82E75B08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82e75ba8
	sub_82E75BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75B10"))) PPC_WEAK_FUNC(sub_82E75B10);
PPC_FUNC_IMPL(__imp__sub_82E75B10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82e75ba8
	sub_82E75BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75B18"))) PPC_WEAK_FUNC(sub_82E75B18);
PPC_FUNC_IMPL(__imp__sub_82E75B18) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17216
	ctx.r8.s64 = ctx.r11.s64 + 17216;
	// addi r7,r10,17204
	ctx.r7.s64 = ctx.r10.s64 + 17204;
	// addi r6,r9,17200
	ctx.r6.s64 = ctx.r9.s64 + 17200;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,392
	ctx.r3.s64 = ctx.r3.s64 + 392;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// bl 0x824238b8
	ctx.lr = 0x82E75B5C;
	sub_824238B8(ctx, base);
	// lwz r5,332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e75b74
	if (cr6.lt) goto loc_82E75B74;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E75B74;
	sub_8386D088(ctx, base);
loc_82E75B74:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82b6a590
	ctx.lr = 0x82E75B90;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82E75BA8"))) PPC_WEAK_FUNC(sub_82E75BA8);
PPC_FUNC_IMPL(__imp__sub_82E75BA8) {
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
	// bl 0x82e75b18
	ctx.lr = 0x82E75BC8;
	sub_82E75B18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e75be0
	if (cr6.eq) goto loc_82E75BE0;
	// bl 0x82416268
	ctx.lr = 0x82E75BDC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E75BE0:
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

__attribute__((alias("__imp__sub_82E75BF8"))) PPC_WEAK_FUNC(sub_82E75BF8);
PPC_FUNC_IMPL(__imp__sub_82E75BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E75C00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,312
	ctx.r31.s64 = ctx.r3.s64 + 312;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75c24
	if (cr6.lt) goto loc_82E75C24;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82E75C24;
	sub_8386D088(ctx, base);
loc_82E75C24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82b6a590
	ctx.lr = 0x82E75C40;
	sub_82B6A590(ctx, base);
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e75c58
	if (cr6.eq) goto loc_82E75C58;
	// bl 0x82416268
	ctx.lr = 0x82E75C54;
	sub_82416268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E75C58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75C60"))) PPC_WEAK_FUNC(sub_82E75C60);
PPC_FUNC_IMPL(__imp__sub_82E75C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E75C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535130
	ctx.lr = 0x82E75C7C;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e75c90
	if (cr6.lt) goto loc_82E75C90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E75C90:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82E75C9C;
	sub_825346C8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,17372
	ctx.r31.s64 = ctx.r11.s64 + 17372;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E75CB0;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E75CB8;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E75CC0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82E75CCC;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E75CD8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82E75CE0;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82E75CE8;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75CF4"))) PPC_WEAK_FUNC(sub_82E75CF4);
PPC_FUNC_IMPL(__imp__sub_82E75CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E75CF8"))) PPC_WEAK_FUNC(sub_82E75CF8);
PPC_FUNC_IMPL(__imp__sub_82E75CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82E75D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,17428
	ctx.r29.s64 = ctx.r11.s64 + 17428;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82E75D20;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82E75D24;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E75D2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e75d2c
	if (!cr6.eq) goto loc_82E75D2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E75D50;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82E75D5C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82E75D60;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75D70"))) PPC_WEAK_FUNC(sub_82E75D70);
PPC_FUNC_IMPL(__imp__sub_82E75D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82E75D78;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r9,r31,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,132
	ctx.r11.s64 = 132;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82e75db8
	if (!cr6.lt) goto loc_82E75DB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82E75DB8;
	sub_82E745E0(ctx, base);
loc_82E75DB8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r27,r10,17404
	ctx.r27.s64 = ctx.r10.s64 + 17404;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E75E00;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E75E0C;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82e75e20
	if (cr6.lt) goto loc_82E75E20;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82E75E20;
	sub_82416268(ctx, base);
loc_82E75E20:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x82e75e40
	if (cr6.lt) goto loc_82E75E40;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E75E40:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82E75E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e75e50
	if (!cr6.eq) goto loc_82E75E50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82E75E74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E75E80;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e75e94
	if (cr6.lt) goto loc_82E75E94;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E75E94;
	sub_82416268(ctx, base);
loc_82E75E94:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82E75EBC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E75EC8;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75edc
	if (cr6.lt) goto loc_82E75EDC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E75EDC;
	sub_82416268(ctx, base);
loc_82E75EDC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82E75EF4;
	sub_82E746C0(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x82E75F10;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E75F1C;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75f30
	if (cr6.lt) goto loc_82E75F30;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82E75F30;
	sub_82416268(ctx, base);
loc_82E75F30:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,116(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82E75F48;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x82E75F64;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82E75F70;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e75f84
	if (cr6.lt) goto loc_82E75F84;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82E75F84;
	sub_82416268(ctx, base);
loc_82E75F84:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r30,r28,120
	ctx.r30.s64 = ctx.r28.s64 + 120;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82e749f8
	ctx.lr = 0x82E75FA0;
	sub_82E749F8(ctx, base);
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r10,128(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e75fe4
	if (cr6.eq) goto loc_82E75FE4;
loc_82E75FBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e746c0
	ctx.lr = 0x82E75FC8;
	sub_82E746C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e75fbc
	if (!cr6.eq) goto loc_82E75FBC;
loc_82E75FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E75FF0"))) PPC_WEAK_FUNC(sub_82E75FF0);
PPC_FUNC_IMPL(__imp__sub_82E75FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82E75FF8;
	__savegprlr_16(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83691bb8
	ctx.lr = 0x82E76020;
	sub_83691BB8(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e76374
	if (!cr6.lt) goto loc_82E76374;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r23,r11,16
	ctx.r23.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r16,r11,1
	ctx.r16.s64 = ctx.r11.s64 + 1;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r18,15
	ctx.r18.s64 = 15;
	// li r26,4
	ctx.r26.s64 = 4;
	// ori r20,r8,1
	ctx.r20.u64 = ctx.r8.u64 | 1;
	// addi r17,r11,17460
	ctx.r17.s64 = ctx.r11.s64 + 17460;
	// addi r21,r10,8980
	ctx.r21.s64 = ctx.r10.s64 + 8980;
	// addi r22,r9,26164
	ctx.r22.s64 = ctx.r9.s64 + 26164;
loc_82E76074:
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// addi r10,r23,-16
	ctx.r10.s64 = ctx.r23.s64 + -16;
	// ld r9,-8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + -8);
	// ld r8,-16(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x82E760A8;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-24
	ctx.r6.s64 = ctx.r17.s64 + -24;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E760C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e76154
	if (!cr6.eq) goto loc_82E76154;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x82E760F8;
	sub_82472FC0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82e7610c
	if (!cr6.lt) goto loc_82E7610C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82E7610C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82E76110:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e76110
	if (!cr6.eq) goto loc_82E76110;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,20
	ctx.r3.s64 = ctx.r19.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82E76134;
	sub_824208C8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82e76148
	if (cr6.lt) goto loc_82E76148;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82E76148;
	sub_82416268(ctx, base);
loc_82E76148:
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
loc_82E76154:
	// addi r6,r17,-16
	ctx.r6.s64 = ctx.r17.s64 + -16;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E7616C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e761a8
	if (!cr6.eq) goto loc_82E761A8;
	// ld r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e761a0
	if (!cr6.eq) goto loc_82E761A0;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e761a4
	goto loc_82E761A4;
loc_82E761A0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82E761A4:
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
loc_82E761A8:
	// addi r6,r17,-8
	ctx.r6.s64 = ctx.r17.s64 + -8;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E761C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e761fc
	if (!cr6.eq) goto loc_82E761FC;
	// ld r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e761f4
	if (!cr6.eq) goto loc_82E761F4;
	// ld r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e761f8
	goto loc_82E761F8;
loc_82E761F4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82E761F8:
	// stw r11,156(r19)
	PPC_STORE_U32(ctx.r19.u32 + 156, ctx.r11.u32);
loc_82E761FC:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82E76214;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82e76348
	if (!cr6.eq) goto loc_82E76348;
	// addi r31,r19,160
	ctx.r31.s64 = ctx.r19.s64 + 160;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82E7624C;
	sub_8247B7D8(ctx, base);
	// lwz r3,168(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 168);
	// stw r24,160(r19)
	PPC_STORE_U32(ctx.r19.u32 + 160, ctx.r24.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7626c
	if (cr6.eq) goto loc_82E7626C;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8247b268
	ctx.lr = 0x82E76264;
	sub_8247B268(ctx, base);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_82E7626C:
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x82e76348
	if (!cr6.lt) goto loc_82E76348;
loc_82E7628C:
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82e762b8
	if (!cr6.eq) goto loc_82E762B8;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82e762bc
	goto loc_82E762BC;
loc_82E762B8:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82E762BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e76318
	if (cr6.lt) goto loc_82E76318;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e76308
	if (!cr6.gt) goto loc_82E76308;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x82E76300;
	sub_8247B270(ctx, base);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// b 0x82e7630c
	goto loc_82E7630C;
loc_82E76308:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E7630C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82e7633c
	if (cr6.eq) goto loc_82E7633C;
loc_82E76318:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82e76330
	if (cr0.eq) goto loc_82E76330;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82E76330:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82E7633C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x82e7628c
	if (cr6.lt) goto loc_82E7628C;
loc_82E76348:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82e7635c
	if (cr6.lt) goto loc_82E7635C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82E7635C;
	sub_82416268(ctx, base);
loc_82E7635C:
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r24.u8);
	// bne 0x82e76074
	if (!cr0.eq) goto loc_82E76074;
loc_82E76374:
	// lwz r31,240(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82e76390
	if (cr6.eq) goto loc_82E76390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82E76388;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82E76390;
	sub_82416268(ctx, base);
loc_82E76390:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7639C"))) PPC_WEAK_FUNC(sub_82E7639C);
PPC_FUNC_IMPL(__imp__sub_82E7639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E763A0"))) PPC_WEAK_FUNC(sub_82E763A0);
PPC_FUNC_IMPL(__imp__sub_82E763A0) {
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
	// bl 0x82d95768
	ctx.lr = 0x82E763C0;
	sub_82D95768(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,17176
	ctx.r8.s64 = ctx.r11.s64 + 17176;
	// addi r7,r10,25568
	ctx.r7.s64 = ctx.r10.s64 + 25568;
	// addi r6,r9,17172
	ctx.r6.s64 = ctx.r9.s64 + 17172;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r5,17336
	ctx.r4.s64 = ctx.r5.s64 + 17336;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x824208c8
	ctx.lr = 0x82E763F8;
	sub_824208C8(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,25652
	ctx.r9.s64 = ctx.r4.s64 + 25652;
	// addi r8,r3,25640
	ctx.r8.s64 = ctx.r3.s64 + 25640;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r7,r10,25636
	ctx.r7.s64 = ctx.r10.s64 + 25636;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// std r11,328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 328, ctx.r11.u64);
	// bl 0x82423930
	ctx.lr = 0x82E7643C;
	sub_82423930(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E7645C"))) PPC_WEAK_FUNC(sub_82E7645C);
PPC_FUNC_IMPL(__imp__sub_82E7645C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E76460"))) PPC_WEAK_FUNC(sub_82E76460);
PPC_FUNC_IMPL(__imp__sub_82E76460) {
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
	// bl 0x82e75880
	ctx.lr = 0x82E76480;
	sub_82E75880(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,17336
	ctx.r4.s64 = ctx.r11.s64 + 17336;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x824208c8
	ctx.lr = 0x82E76494;
	sub_824208C8(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,17576
	ctx.r7.s64 = ctx.r10.s64 + 17576;
	// addi r6,r9,17564
	ctx.r6.s64 = ctx.r9.s64 + 17564;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// addi r5,r8,17560
	ctx.r5.s64 = ctx.r8.s64 + 17560;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// std r11,368(r31)
	PPC_STORE_U64(ctx.r31.u32 + 368, ctx.r11.u64);
	// bl 0x82423930
	ctx.lr = 0x82E764D8;
	sub_82423930(ctx, base);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
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

