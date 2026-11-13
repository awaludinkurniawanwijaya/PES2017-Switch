#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825BAF88"))) PPC_WEAK_FUNC(sub_825BAF88);
PPC_FUNC_IMPL(__imp__sub_825BAF88) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28640
	ctx.r4.s64 = 28640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BAFBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bafd4
	if (cr6.eq) goto loc_825BAFD4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825baf10
	ctx.lr = 0x825BAFD0;
	sub_825BAF10(ctx, base);
	// b 0x825bafd8
	goto loc_825BAFD8;
loc_825BAFD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825BAFD8:
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

__attribute__((alias("__imp__sub_825BAFF0"))) PPC_WEAK_FUNC(sub_825BAFF0);
PPC_FUNC_IMPL(__imp__sub_825BAFF0) {
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
	// lwz r3,28636(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28636);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-20572
	ctx.r10.s64 = ctx.r11.s64 + -20572;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825bb030
	if (cr6.eq) goto loc_825BB030;
	// bl 0x83103e98
	ctx.lr = 0x825BB028;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_825BB030:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb050
	if (cr6.eq) goto loc_825BB050;
	// bl 0x82595188
	ctx.lr = 0x825BB040;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BB050;
	sub_825952B8(ctx, base);
loc_825BB050:
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

__attribute__((alias("__imp__sub_825BB06C"))) PPC_WEAK_FUNC(sub_825BB06C);
PPC_FUNC_IMPL(__imp__sub_825BB06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB070"))) PPC_WEAK_FUNC(sub_825BB070);
PPC_FUNC_IMPL(__imp__sub_825BB070) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb0c0
	if (cr6.eq) goto loc_825BB0C0;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825BB0A0;
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
	ctx.lr = 0x825BB0B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825BB0C0;
	sub_82595170(ctx, base);
loc_825BB0C0:
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

__attribute__((alias("__imp__sub_825BB0D4"))) PPC_WEAK_FUNC(sub_825BB0D4);
PPC_FUNC_IMPL(__imp__sub_825BB0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB0D8"))) PPC_WEAK_FUNC(sub_825BB0D8);
PPC_FUNC_IMPL(__imp__sub_825BB0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825BB0E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825bae48
	ctx.lr = 0x825BB0F0;
	sub_825BAE48(ctx, base);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// addi r28,r31,124
	ctx.r28.s64 = ctx.r31.s64 + 124;
	// addi r29,r30,132
	ctx.r29.s64 = ctx.r30.s64 + 132;
	// subf r26,r30,r31
	ctx.r26.s64 = ctx.r31.s64 - ctx.r30.s64;
	// li r27,22
	ctx.r27.s64 = 22;
	// lbz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// stb r11,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r11.u8);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lfs f12,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// lfs f11,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lfs f10,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,112(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lfs f9,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
loc_825BB140:
	// lbz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -4);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stb r11,-12(r29)
	PPC_STORE_U8(ctx.r29.u32 + -12, ctx.r11.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r10.u32);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// lfsx f13,r26,r29
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f12,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f11,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// bl 0x825a5200
	ctx.lr = 0x825BB17C;
	sub_825A5200(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,1296
	ctx.r28.s64 = ctx.r28.s64 + 1296;
	// addi r29,r29,1296
	ctx.r29.s64 = ctx.r29.s64 + 1296;
	// bne 0x825bb140
	if (!cr0.eq) goto loc_825BB140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BB198"))) PPC_WEAK_FUNC(sub_825BB198);
PPC_FUNC_IMPL(__imp__sub_825BB198) {
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
	// lwz r3,28636(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb204
	if (cr6.eq) goto loc_825BB204;
	// bl 0x83103bb8
	ctx.lr = 0x825BB1BC;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb1e0
	if (cr6.eq) goto loc_825BB1E0;
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
loc_825BB1E0:
	// lwz r3,28636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28636);
	// bl 0x83103d60
	ctx.lr = 0x825BB1E8;
	sub_83103D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x825bb0d8
	ctx.lr = 0x825BB1F4;
	sub_825BB0D8(ctx, base);
	// lwz r3,28636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28636);
	// bl 0x83103e98
	ctx.lr = 0x825BB1FC;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28636, ctx.r11.u32);
loc_825BB204:
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

__attribute__((alias("__imp__sub_825BB21C"))) PPC_WEAK_FUNC(sub_825BB21C);
PPC_FUNC_IMPL(__imp__sub_825BB21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB220"))) PPC_WEAK_FUNC(sub_825BB220);
PPC_FUNC_IMPL(__imp__sub_825BB220) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,6
	ctx.r30.s64 = 6;
loc_825BB23C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb24c
	if (cr6.eq) goto loc_825BB24C;
	// bl 0x825d7e70
	ctx.lr = 0x825BB24C;
	sub_825D7E70(ctx, base);
loc_825BB24C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb23c
	if (!cr0.eq) goto loc_825BB23C;
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

__attribute__((alias("__imp__sub_825BB270"))) PPC_WEAK_FUNC(sub_825BB270);
PPC_FUNC_IMPL(__imp__sub_825BB270) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,6
	ctx.r30.s64 = 6;
loc_825BB28C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb29c
	if (cr6.eq) goto loc_825BB29C;
	// bl 0x825d7e88
	ctx.lr = 0x825BB29C;
	sub_825D7E88(ctx, base);
loc_825BB29C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb28c
	if (!cr0.eq) goto loc_825BB28C;
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

__attribute__((alias("__imp__sub_825BB2C0"))) PPC_WEAK_FUNC(sub_825BB2C0);
PPC_FUNC_IMPL(__imp__sub_825BB2C0) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,6
	ctx.r30.s64 = 6;
loc_825BB2DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb2ec
	if (cr6.eq) goto loc_825BB2EC;
	// bl 0x825d7ea0
	ctx.lr = 0x825BB2EC;
	sub_825D7EA0(ctx, base);
loc_825BB2EC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb2dc
	if (!cr0.eq) goto loc_825BB2DC;
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

__attribute__((alias("__imp__sub_825BB310"))) PPC_WEAK_FUNC(sub_825BB310);
PPC_FUNC_IMPL(__imp__sub_825BB310) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,6
	ctx.r30.s64 = 6;
loc_825BB32C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb33c
	if (cr6.eq) goto loc_825BB33C;
	// bl 0x825d7eb8
	ctx.lr = 0x825BB33C;
	sub_825D7EB8(ctx, base);
loc_825BB33C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb32c
	if (!cr0.eq) goto loc_825BB32C;
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

__attribute__((alias("__imp__sub_825BB360"))) PPC_WEAK_FUNC(sub_825BB360);
PPC_FUNC_IMPL(__imp__sub_825BB360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825BB368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
loc_825BB378:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb398
	if (cr6.eq) goto loc_825BB398;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r9,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x825d7f78
	ctx.lr = 0x825BB398;
	sub_825D7F78(ctx, base);
loc_825BB398:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// blt cr6,0x825bb378
	if (cr6.lt) goto loc_825BB378;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BB3B0"))) PPC_WEAK_FUNC(sub_825BB3B0);
PPC_FUNC_IMPL(__imp__sub_825BB3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825BB3B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-20304
	ctx.r10.s64 = ctx.r11.s64 + -20304;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r28,6
	ctx.r28.s64 = 6;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BB3D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb41c
	if (cr6.eq) goto loc_825BB41C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825BB3F4;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825bb410
	if (cr6.eq) goto loc_825BB410;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d8040
	ctx.lr = 0x825BB408;
	sub_825D8040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x825BB410;
	sub_82416268(ctx, base);
loc_825BB410:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825BB418;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825BB41C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb3d8
	if (!cr0.eq) goto loc_825BB3D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 44);
	// addi r30,r27,40
	ctx.r30.s64 = ctx.r27.s64 + 40;
	// addi r9,r11,-24712
	ctx.r9.s64 = ctx.r11.s64 + -24712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r9.u32);
	// beq cr6,0x825bb46c
	if (cr6.eq) goto loc_825BB46C;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bb46c
	if (cr6.eq) goto loc_825BB46C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BB468;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825BB46C:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bb498
	if (cr6.eq) goto loc_825BB498;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BB494;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825BB498:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BB4AC"))) PPC_WEAK_FUNC(sub_825BB4AC);
PPC_FUNC_IMPL(__imp__sub_825BB4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB4B0"))) PPC_WEAK_FUNC(sub_825BB4B0);
PPC_FUNC_IMPL(__imp__sub_825BB4B0) {
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
	// bl 0x825bb3b0
	ctx.lr = 0x825BB4D0;
	sub_825BB3B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb4f0
	if (cr6.eq) goto loc_825BB4F0;
	// bl 0x82595188
	ctx.lr = 0x825BB4E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BB4F0;
	sub_825952B8(ctx, base);
loc_825BB4F0:
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

__attribute__((alias("__imp__sub_825BB50C"))) PPC_WEAK_FUNC(sub_825BB50C);
PPC_FUNC_IMPL(__imp__sub_825BB50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB510"))) PPC_WEAK_FUNC(sub_825BB510);
PPC_FUNC_IMPL(__imp__sub_825BB510) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb534
	if (!cr6.eq) goto loc_825BB534;
	// bl 0x825aa080
	ctx.lr = 0x825BB534;
	sub_825AA080(ctx, base);
loc_825BB534:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb554
	if (!cr6.eq) goto loc_825BB554;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-10208
	ctx.r9.s64 = ctx.r9.s64 + -10208;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_825BB554:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825BB56C"))) PPC_WEAK_FUNC(sub_825BB56C);
PPC_FUNC_IMPL(__imp__sub_825BB56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BB570"))) PPC_WEAK_FUNC(sub_825BB570);
PPC_FUNC_IMPL(__imp__sub_825BB570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825BB578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20304
	ctx.r9.s64 = ctx.r10.s64 + -20304;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r6,r8,-24636
	ctx.r6.s64 = ctx.r8.s64 + -24636;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
loc_825BB5CC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x825bb5cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825BB5CC;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb62c
	if (!cr6.eq) goto loc_825BB62C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BB5FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BB614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x825a9760
	ctx.lr = 0x825BB624;
	sub_825A9760(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BB62C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BB638"))) PPC_WEAK_FUNC(sub_825BB638);
PPC_FUNC_IMPL(__imp__sub_825BB638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825BB640;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r27,r10,55328
	ctx.r27.u64 = ctx.r10.u64 | 55328;
	// addi r26,r11,-20408
	ctx.r26.s64 = ctx.r11.s64 + -20408;
loc_825BB664:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bb720
	if (cr6.eq) goto loc_825BB720;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d80e8
	ctx.lr = 0x825BB678;
	sub_825D80E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb700
	if (cr6.eq) goto loc_825BB700;
	// lbz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb69c
	if (!cr6.eq) goto loc_825BB69C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa080
	ctx.lr = 0x825BB69C;
	sub_825AA080(ctx, base);
loc_825BB69C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb6b8
	if (!cr6.eq) goto loc_825BB6B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_825BB6B8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a18ad8
	ctx.lr = 0x825BB6C8;
	sub_82A18AD8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb6e0
	if (cr6.eq) goto loc_825BB6E0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825a8ca0
	ctx.lr = 0x825BB6DC;
	sub_825A8CA0(ctx, base);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
loc_825BB6E0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830eab70
	ctx.lr = 0x825BB6FC;
	sub_830EAB70(ctx, base);
	// b 0x825bb70c
	goto loc_825BB70C;
loc_825BB700:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825d80e8
	ctx.lr = 0x825BB70C;
	sub_825D80E8(ctx, base);
loc_825BB70C:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825d80e8
	ctx.lr = 0x825BB718;
	sub_825D80E8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825d7f28
	ctx.lr = 0x825BB720;
	sub_825D7F28(ctx, base);
loc_825BB720:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(ctx.r29.u32, 6, xer);
	// blt cr6,0x825bb664
	if (cr6.lt) goto loc_825BB664;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BB738"))) PPC_WEAK_FUNC(sub_825BB738);
PPC_FUNC_IMPL(__imp__sub_825BB738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x825BB740;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce770
	ctx.lr = 0x825BB748;
	__savefpr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb774
	if (!cr6.eq) goto loc_825BB774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825aa080
	ctx.lr = 0x825BB774;
	sub_825AA080(ctx, base);
loc_825BB774:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bb790
	if (!cr6.eq) goto loc_825BB790;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825BB790:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825bb7b4
	if (cr6.eq) goto loc_825BB7B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da1d10
	ctx.lr = 0x825BB7A4;
	sub_82DA1D10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dad028
	ctx.lr = 0x825BB7B0;
	sub_82DAD028(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_825BB7B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a181b8
	ctx.lr = 0x825BB7BC;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f498
	ctx.lr = 0x825BB7C0;
	sub_82A2F498(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb7d4
	if (cr6.eq) goto loc_825BB7D4;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_825BB7D4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb858
	if (cr6.eq) goto loc_825BB858;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x825bb7f0
	if (cr6.eq) goto loc_825BB7F0;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x825bb858
	if (!cr6.eq) goto loc_825BB858;
loc_825BB7F0:
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r29,6
	ctx.r29.s64 = 6;
loc_825BB7F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb83c
	if (cr6.eq) goto loc_825BB83C;
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82595150
	ctx.lr = 0x825BB814;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825bb830
	if (cr6.eq) goto loc_825BB830;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d8040
	ctx.lr = 0x825BB828;
	sub_825D8040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x825BB830;
	sub_82416268(ctx, base);
loc_825BB830:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82595170
	ctx.lr = 0x825BB838;
	sub_82595170(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_825BB83C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb7f8
	if (!cr0.eq) goto loc_825BB7F8;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7bc
	ctx.lr = 0x825BB854;
	__restfpr_26(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_825BB858:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, xer);
	// beq cr6,0x825bb8bc
	if (cr6.eq) goto loc_825BB8BC;
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
	// li r29,6
	ctx.r29.s64 = 6;
loc_825BB86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bb8b0
	if (cr6.eq) goto loc_825BB8B0;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82595150
	ctx.lr = 0x825BB888;
	sub_82595150(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825bb8a4
	if (cr6.eq) goto loc_825BB8A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d8040
	ctx.lr = 0x825BB89C;
	sub_825D8040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x825BB8A4;
	sub_82416268(ctx, base);
loc_825BB8A4:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82595170
	ctx.lr = 0x825BB8AC;
	sub_82595170(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_825BB8B0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825bb86c
	if (!cr0.eq) goto loc_825BB86C;
loc_825BB8BC:
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_825BB8C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825bbd88
	if (!cr6.eq) goto loc_825BBD88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x825bb8c8
	if (cr6.lt) goto loc_825BB8C8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi r7,r11,8
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFFF;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r5,r9,8
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFFF;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// li r4,150
	ctx.r4.s64 = 150;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// oris r3,r7,5120
	ctx.r3.u64 = ctx.r7.u64 | 335544320;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,8976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8976);
	ctx.f27.f64 = double(temp.f32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// oris r10,r5,4352
	ctx.r10.u64 = ctx.r5.u64 | 285212672;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// beq cr6,0x825bba98
	if (cr6.eq) goto loc_825BBA98;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// bne cr6,0x825bbc08
	if (!cr6.eq) goto loc_825BBC08;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f27,132(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r6,r10,8
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFFFF;
	// oris r3,r5,513
	ctx.r3.u64 = ctx.r5.u64 | 33619968;
	// lfs f0,21708(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// oris r4,r6,3584
	ctx.r4.u64 = ctx.r6.u64 | 234881024;
	// lfs f13,9104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9104);
	ctx.f13.f64 = double(temp.f32);
	// li r31,32
	ctx.r31.s64 = 32;
	// lfs f12,-19992(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19992);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82595718
	ctx.lr = 0x825BB9A4;
	sub_82595718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r11,-20036
	ctx.r29.s64 = ctx.r11.s64 + -20036;
	// beq cr6,0x825bb9c4
	if (cr6.eq) goto loc_825BB9C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d8238
	ctx.lr = 0x825BB9C0;
	sub_825D8238(ctx, base);
	// b 0x825bb9c8
	goto loc_825BB9C8;
loc_825BB9C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BB9C8:
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BB9DC;
	sub_825D7E18(ctx, base);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82595718
	ctx.lr = 0x825BB9F0;
	sub_82595718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,-20080
	ctx.r30.s64 = ctx.r11.s64 + -20080;
	// beq cr6,0x825bba10
	if (cr6.eq) goto loc_825BBA10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d8238
	ctx.lr = 0x825BBA0C;
	sub_825D8238(ctx, base);
	// b 0x825bba14
	goto loc_825BBA14;
loc_825BBA10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BBA14:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r3,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BBA28;
	sub_825D7E18(ctx, base);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82595718
	ctx.lr = 0x825BBA3C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bba54
	if (cr6.eq) goto loc_825BBA54;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825d8238
	ctx.lr = 0x825BBA50;
	sub_825D8238(ctx, base);
	// b 0x825bba58
	goto loc_825BBA58;
loc_825BBA54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BBA58:
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r3,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BBA6C;
	sub_825D7E18(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82595718
	ctx.lr = 0x825BBA80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbbe8
	if (cr6.eq) goto loc_825BBBE8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825d8238
	ctx.lr = 0x825BBA94;
	sub_825D8238(ctx, base);
	// b 0x825bbbec
	goto loc_825BBBEC;
loc_825BBA98:
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stfs f27,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r27,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r6,r10,8
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFFFF;
	// oris r3,r5,513
	ctx.r3.u64 = ctx.r5.u64 | 33619968;
	// lfs f0,-7352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// oris r4,r6,3584
	ctx.r4.u64 = ctx.r6.u64 | 234881024;
	// lfs f13,-20084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20084);
	ctx.f13.f64 = double(temp.f32);
	// li r31,32
	ctx.r31.s64 = 32;
	// lfs f12,-20088(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20088);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82595718
	ctx.lr = 0x825BBAF4;
	sub_82595718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r11,-20136
	ctx.r29.s64 = ctx.r11.s64 + -20136;
	// beq cr6,0x825bbb14
	if (cr6.eq) goto loc_825BBB14;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d8238
	ctx.lr = 0x825BBB10;
	sub_825D8238(ctx, base);
	// b 0x825bbb18
	goto loc_825BBB18;
loc_825BBB14:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BBB18:
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BBB2C;
	sub_825D7E18(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82595718
	ctx.lr = 0x825BBB40;
	sub_82595718(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,-20184
	ctx.r30.s64 = ctx.r11.s64 + -20184;
	// beq cr6,0x825bbb60
	if (cr6.eq) goto loc_825BBB60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825d8238
	ctx.lr = 0x825BBB5C;
	sub_825D8238(ctx, base);
	// b 0x825bbb64
	goto loc_825BBB64;
loc_825BBB60:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BBB64:
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r3,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BBB78;
	sub_825D7E18(ctx, base);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82595718
	ctx.lr = 0x825BBB8C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbba4
	if (cr6.eq) goto loc_825BBBA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825d8238
	ctx.lr = 0x825BBBA0;
	sub_825D8238(ctx, base);
	// b 0x825bbba8
	goto loc_825BBBA8;
loc_825BBBA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BBBA8:
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r3,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BBBBC;
	sub_825D7E18(ctx, base);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82595718
	ctx.lr = 0x825BBBD0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bbbe8
	if (cr6.eq) goto loc_825BBBE8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825d8238
	ctx.lr = 0x825BBBE4;
	sub_825D8238(ctx, base);
	// b 0x825bbbec
	goto loc_825BBBEC;
loc_825BBBE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_825BBBEC:
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r3,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825d7e18
	ctx.lr = 0x825BBC00;
	sub_825D7E18(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_825BBC08:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f27,132(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f30,-20188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20188);
	ctx.f30.f64 = double(temp.f32);
	// li r3,39
	ctx.r3.s64 = 39;
	// lfs f28,-20192(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20192);
	ctx.f28.f64 = double(temp.f32);
	// oris r11,r5,3840
	ctx.r11.u64 = ctx.r5.u64 | 251658240;
	// lfs f0,-26260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,-20196(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -20196);
	ctx.f13.f64 = double(temp.f32);
	// oris r9,r4,514
	ctx.r9.u64 = ctx.r4.u64 | 33685504;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r25,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r25.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stb r10,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x835f6d58
	ctx.lr = 0x825BBC84;
	sub_835F6D58(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x835f81e8
	ctx.lr = 0x825BBC94;
	sub_835F81E8(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f30,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stfs f27,140(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lfs f26,-20200(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -20200);
	ctx.f26.f64 = double(temp.f32);
	// lfs f29,-20204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20204);
	ctx.f29.f64 = double(temp.f32);
	// stfs f26,132(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x835f6d58
	ctx.lr = 0x825BBCC8;
	sub_835F6D58(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x835f81e8
	ctx.lr = 0x825BBCD8;
	sub_835F81E8(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// li r4,41
	ctx.r4.s64 = 41;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lfs f0,-20208(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -20208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x835f6d58
	ctx.lr = 0x825BBCF8;
	sub_835F6D58(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x835f81e8
	ctx.lr = 0x825BBD08;
	sub_835F81E8(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stfs f26,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-20212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -20212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x835f6d58
	ctx.lr = 0x825BBD2C;
	sub_835F6D58(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x835f81e8
	ctx.lr = 0x825BBD3C;
	sub_835F81E8(ctx, base);
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-20216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20216);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f12,-20220(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20220);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-11416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11416);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x835f6d58
	ctx.lr = 0x825BBD78;
	sub_835F6D58(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x835f81e8
	ctx.lr = 0x825BBD88;
	sub_835F81E8(ctx, base);
loc_825BBD88:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7bc
	ctx.lr = 0x825BBD94;
	__restfpr_26(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BBD98"))) PPC_WEAK_FUNC(sub_825BBD98);
PPC_FUNC_IMPL(__imp__sub_825BBD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825BBDA0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,-19424
	ctx.r30.s64 = ctx.r11.s64 + -19424;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,-19352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19352);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,-25104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25104);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x825bbe48
	if (!cr6.eq) goto loc_825BBE48;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stfs f31,48(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f13,-19960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19960);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19964(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19964);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-19352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19352, ctx.r11.u32);
	// lfs f11,-25772(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25772);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-19968(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19968);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f12,20(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f13,28(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f10,32(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f11,40(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f10,44(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f31,56(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// stfs f31,60(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stfs f31,64(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// stfs f31,68(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
loc_825BBE48:
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r31,r9,-19496
	ctx.r31.s64 = ctx.r9.s64 + -19496;
	// bne cr6,0x825bbecc
	if (!cr6.eq) goto loc_825BBECC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,-19972(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19972);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19976);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-19352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19352, ctx.r11.u32);
	// lfs f11,-19980(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19980);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-19984(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19984);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_825BBECC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825bb738
	ctx.lr = 0x825BBED4;
	sub_825BB738(ctx, base);
	// lbz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 44);
	// addi r24,r27,40
	ctx.r24.s64 = ctx.r27.s64 + 40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bbeec
	if (!cr6.eq) goto loc_825BBEEC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825aa080
	ctx.lr = 0x825BBEEC;
	sub_825AA080(ctx, base);
loc_825BBEEC:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bbf08
	if (!cr6.eq) goto loc_825BBF08;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r10.u32);
loc_825BBF08:
	// lwz r25,12(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a181b8
	ctx.lr = 0x825BBF14;
	sub_82A181B8(ctx, base);
	// bl 0x82a2f498
	ctx.lr = 0x825BBF18;
	sub_82A2F498(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825bbf24
	if (!cr6.eq) goto loc_825BBF24;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_825BBF24:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// lfs f0,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x825bc024
	if (cr6.eq) goto loc_825BC024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f31,-19988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19988);
	ctx.f31.f64 = double(temp.f32);
loc_825BBF60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc010
	if (cr6.eq) goto loc_825BC010;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a183e8
	ctx.lr = 0x825BBF78;
	sub_82A183E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne cr6,0x825bbfac
	if (!cr6.eq) goto loc_825BBFAC;
	// stb r26,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r26.u8);
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// b 0x825bbfc8
	goto loc_825BBFC8;
loc_825BBFAC:
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
loc_825BBFC8:
	// stb r30,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r30.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// stb r30,48(r11)
	PPC_STORE_U8(ctx.r11.u32 + 48, ctx.r30.u8);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,76(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825BC010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BC010:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(ctx.r28.u32, 6, xer);
	// blt cr6,0x825bbf60
	if (cr6.lt) goto loc_825BBF60;
loc_825BC024:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc034
	if (cr6.eq) goto loc_825BC034;
	// stw r26,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r26.u32);
loc_825BC034:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BC040"))) PPC_WEAK_FUNC(sub_825BC040);
PPC_FUNC_IMPL(__imp__sub_825BC040) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bbd98
	sub_825BBD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BC044"))) PPC_WEAK_FUNC(sub_825BC044);
PPC_FUNC_IMPL(__imp__sub_825BC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC048"))) PPC_WEAK_FUNC(sub_825BC048);
PPC_FUNC_IMPL(__imp__sub_825BC048) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,-19916
	ctx.r11.s64 = ctx.r11.s64 + -19916;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f1,f0,f13
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fnmsubs f1,f0,f12,f1
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f1.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC08C"))) PPC_WEAK_FUNC(sub_825BC08C);
PPC_FUNC_IMPL(__imp__sub_825BC08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC090"))) PPC_WEAK_FUNC(sub_825BC090);
PPC_FUNC_IMPL(__imp__sub_825BC090) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,648
	ctx.r4.u64 = ctx.r4.u64 | 648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BC0C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bc0d0
	if (cr6.eq) goto loc_825BC0D0;
	// bl 0x825e57d0
	ctx.lr = 0x825BC0CC;
	sub_825E57D0(ctx, base);
	// b 0x825bc0d4
	goto loc_825BC0D4;
loc_825BC0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825BC0D4:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x82a12748
	ctx.lr = 0x825BC0E0;
	sub_82A12748(ctx, base);
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

__attribute__((alias("__imp__sub_825BC0F4"))) PPC_WEAK_FUNC(sub_825BC0F4);
PPC_FUNC_IMPL(__imp__sub_825BC0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC0F8"))) PPC_WEAK_FUNC(sub_825BC0F8);
PPC_FUNC_IMPL(__imp__sub_825BC0F8) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc158
	if (cr6.eq) goto loc_825BC158;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,292
	ctx.r4.s64 = ctx.r3.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18a78
	ctx.lr = 0x825BC12C;
	sub_82A18A78(ctx, base);
	// addi r30,r31,932
	ctx.r30.s64 = ctx.r31.s64 + 932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e91e8
	ctx.lr = 0x825BC138;
	sub_825E91E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d8948
	ctx.lr = 0x825BC148;
	sub_825D8948(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d8c58
	ctx.lr = 0x825BC150;
	sub_825D8C58(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d89c0
	ctx.lr = 0x825BC158;
	sub_825D89C0(ctx, base);
loc_825BC158:
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

__attribute__((alias("__imp__sub_825BC170"))) PPC_WEAK_FUNC(sub_825BC170);
PPC_FUNC_IMPL(__imp__sub_825BC170) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc1d8
	if (cr6.eq) goto loc_825BC1D8;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,292
	ctx.r4.s64 = ctx.r3.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18a78
	ctx.lr = 0x825BC1A4;
	sub_82A18A78(ctx, base);
	// addi r30,r31,932
	ctx.r30.s64 = ctx.r31.s64 + 932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e91e8
	ctx.lr = 0x825BC1B0;
	sub_825E91E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d8948
	ctx.lr = 0x825BC1C0;
	sub_825D8948(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d8ca8
	ctx.lr = 0x825BC1C8;
	sub_825D8CA8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d8898
	ctx.lr = 0x825BC1D0;
	sub_825D8898(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d89c0
	ctx.lr = 0x825BC1D8;
	sub_825D89C0(ctx, base);
loc_825BC1D8:
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

__attribute__((alias("__imp__sub_825BC1F0"))) PPC_WEAK_FUNC(sub_825BC1F0);
PPC_FUNC_IMPL(__imp__sub_825BC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,7140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7140);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x825d8cf8
	sub_825D8CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BC20C"))) PPC_WEAK_FUNC(sub_825BC20C);
PPC_FUNC_IMPL(__imp__sub_825BC20C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC210"))) PPC_WEAK_FUNC(sub_825BC210);
PPC_FUNC_IMPL(__imp__sub_825BC210) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825bc23c
	if (cr6.lt) goto loc_825BC23C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825bc240
	if (cr6.lt) goto loc_825BC240;
loc_825BC23C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BC240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc2d0
	if (cr6.eq) goto loc_825BC2D0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x825bc25c
	if (!cr6.lt) goto loc_825BC25C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825bc284
	goto loc_825BC284;
loc_825BC25C:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x825bc26c
	if (!cr6.lt) goto loc_825BC26C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825bc284
	goto loc_825BC284;
loc_825BC26C:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r8,r11,r4
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_825BC284:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a164c8
	ctx.lr = 0x825BC294;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x825BC298;
	sub_83102DB0(ctx, base);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// beq cr6,0x825bc2ac
	if (cr6.eq) goto loc_825BC2AC;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// bne cr6,0x825bc2d0
	if (!cr6.eq) goto loc_825BC2D0;
	// b 0x825bc2c4
	goto loc_825BC2C4;
loc_825BC2AC:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x825bc2d0
	if (cr6.lt) goto loc_825BC2D0;
loc_825BC2C4:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
loc_825BC2D0:
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

__attribute__((alias("__imp__sub_825BC2E4"))) PPC_WEAK_FUNC(sub_825BC2E4);
PPC_FUNC_IMPL(__imp__sub_825BC2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC2E8"))) PPC_WEAK_FUNC(sub_825BC2E8);
PPC_FUNC_IMPL(__imp__sub_825BC2E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825BC2F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825BC300:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_825BC308:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a19a28
	ctx.lr = 0x825BC314;
	sub_82A19A28(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x825bc334
	if (cr6.eq) goto loc_825BC334;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x825bc338
	if (!cr6.eq) goto loc_825BC338;
loc_825BC334:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825BC338:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bc354
	if (cr6.eq) goto loc_825BC354;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a16ab8
	ctx.lr = 0x825BC354;
	sub_82A16AB8(ctx, base);
loc_825BC354:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// blt cr6,0x825bc308
	if (cr6.lt) goto loc_825BC308;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x825bc300
	if (cr6.lt) goto loc_825BC300;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BC380"))) PPC_WEAK_FUNC(sub_825BC380);
PPC_FUNC_IMPL(__imp__sub_825BC380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,1044(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1044);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc3a0
	if (cr6.eq) goto loc_825BC3A0;
	// lwz r11,3092(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3092);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc3a0
	if (!cr6.lt) goto loc_825BC3A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3092(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3092, ctx.r11.u32);
loc_825BC3A0:
	// lbz r11,1088(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1088);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x825bc4a8
	if (cr6.gt) goto loc_825BC4A8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x825bc3ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC3EC;
	// bdzf 4*cr6+eq,0x825bc404
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC404;
	// bdzf 4*cr6+eq,0x825bc41c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC41C;
	// bdzf 4*cr6+eq,0x825bc434
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC434;
	// bdzf 4*cr6+eq,0x825bc44c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC44C;
	// bdzf 4*cr6+eq,0x825bc464
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC464;
	// bdzf 4*cr6+eq,0x825bc47c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825BC47C;
	// bne cr6,0x825bc494
	if (!cr6.eq) goto loc_825BC494;
	// lwz r11,3800(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3800);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3800(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3800, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC3EC:
	// lwz r11,3796(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3796);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3796(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3796, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC404:
	// lwz r11,3808(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3808);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3808(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3808, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC41C:
	// lwz r11,3776(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3776);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3776(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3776, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC434:
	// lwz r11,3804(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3804);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3804(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3804, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC44C:
	// lwz r11,3812(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3812);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3812(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3812, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC464:
	// lwz r11,3816(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3816);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3816(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3816, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC47C:
	// lwz r11,3820(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3820);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3820(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3820, ctx.r11.u32);
	// b 0x825bc4a8
	goto loc_825BC4A8;
loc_825BC494:
	// lwz r11,3824(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3824);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4a8
	if (!cr6.lt) goto loc_825BC4A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3824(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3824, ctx.r11.u32);
loc_825BC4A8:
	// lwz r11,1048(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1048);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825bc508
	if (!cr6.eq) goto loc_825BC508;
	// lwz r11,3096(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3096);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc4c8
	if (!cr6.lt) goto loc_825BC4C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3096(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3096, ctx.r11.u32);
loc_825BC4C8:
	// lwz r11,1052(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1052);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825bc4ec
	if (!cr6.eq) goto loc_825BC4EC;
	// lwz r11,3100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3100);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc508
	if (!cr6.lt) goto loc_825BC508;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3100, ctx.r11.u32);
	// b 0x825bc508
	goto loc_825BC508;
loc_825BC4EC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x825bc508
	if (!cr6.eq) goto loc_825BC508;
	// lwz r11,3104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3104);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc508
	if (!cr6.lt) goto loc_825BC508;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3104, ctx.r11.u32);
loc_825BC508:
	// lwz r11,1048(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1048);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825bc528
	if (!cr6.eq) goto loc_825BC528;
	// lwz r11,3108(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3108);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc528
	if (!cr6.lt) goto loc_825BC528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3108, ctx.r11.u32);
loc_825BC528:
	// lbz r11,4345(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4345);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc548
	if (cr6.eq) goto loc_825BC548;
	// lwz r11,3112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3112);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc548
	if (!cr6.lt) goto loc_825BC548;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3112, ctx.r11.u32);
loc_825BC548:
	// lbz r11,4346(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4346);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc568
	if (cr6.eq) goto loc_825BC568;
	// lwz r11,3116(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3116);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc568
	if (!cr6.lt) goto loc_825BC568;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3116, ctx.r11.u32);
loc_825BC568:
	// lbz r11,4347(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4347);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc588
	if (cr6.eq) goto loc_825BC588;
	// lwz r11,3120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3120);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc588
	if (!cr6.lt) goto loc_825BC588;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3120, ctx.r11.u32);
loc_825BC588:
	// lbz r11,614(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 614);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc5a8
	if (cr6.eq) goto loc_825BC5A8;
	// lwz r11,1224(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1224);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc5a8
	if (!cr6.lt) goto loc_825BC5A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1224(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1224, ctx.r11.u32);
loc_825BC5A8:
	// lbz r11,628(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 628);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bc5c8
	if (cr6.eq) goto loc_825BC5C8;
	// lwz r11,1328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1328);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x825bc5c8
	if (!cr6.lt) goto loc_825BC5C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1328(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1328, ctx.r11.u32);
loc_825BC5C8:
	// lbz r11,629(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 629);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,1324(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1324);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1324(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1324, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC5EC"))) PPC_WEAK_FUNC(sub_825BC5EC);
PPC_FUNC_IMPL(__imp__sub_825BC5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC5F0"))) PPC_WEAK_FUNC(sub_825BC5F0);
PPC_FUNC_IMPL(__imp__sub_825BC5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r9,68(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// lwz r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r6,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// lwz r5,84(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r5,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// lwz r9,92(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lwz r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r8,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r8.u32);
	// lwz r7,100(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r7,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r7.u32);
	// lwz r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r6,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// lwz r5,108(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r5,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r5.u32);
	// lwz r10,112(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r9,116(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// lwz r7,124(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r7,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r7.u32);
	// lwz r6,128(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// lwz r5,132(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r5,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// lwz r10,136(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// lwz r9,140(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// lwz r8,144(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r8,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r8.u32);
	// lwz r7,148(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// lwz r6,152(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r6,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r6.u32);
	// lwz r5,156(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// lwz r10,160(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r10,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// lwz r9,164(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// lwz r8,168(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r8,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r8.u32);
	// lwz r7,172(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r7,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r7.u32);
	// lwz r6,176(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r6,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r6.u32);
	// lwz r5,180(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r5,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r5.u32);
	// lwz r10,184(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r10,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r10.u32);
	// lwz r9,188(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r9,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// lwz r8,192(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r8,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// lwz r7,196(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r7,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r7.u32);
	// lwz r6,200(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// lwz r5,204(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// stw r5,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r5.u32);
	// lwz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// lwz r9,212(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// lwz r8,216(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r8,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r8.u32);
	// lwz r7,220(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC7B8"))) PPC_WEAK_FUNC(sub_825BC7B8);
PPC_FUNC_IMPL(__imp__sub_825BC7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r8,76(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// lwz r7,80(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// lwz r6,84(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// lwz r5,88(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// lwz r11,92(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// lwz r8,104(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r7,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r7.u32);
	// lwz r6,112(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// lwz r5,116(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// stw r5,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r5.u32);
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r10,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r10.u32);
	// lwz r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// lwz r8,132(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// stw r8,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r8.u32);
	// lwz r7,136(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// stw r7,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r7.u32);
	// lwz r6,140(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r6,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// lwz r5,144(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// stw r5,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r5.u32);
	// lwz r11,148(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// lwz r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// lwz r9,156(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lwz r8,160(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,164(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r7,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// lwz r6,168(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r6,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r6.u32);
	// lwz r5,172(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r5,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r5.u32);
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// lwz r10,180(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// lwz r9,184(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// stw r9,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r9.u32);
	// lwz r8,188(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// stw r8,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r8.u32);
	// lwz r7,192(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	// stw r7,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r7.u32);
	// lwz r6,196(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	// stw r6,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r6.u32);
	// lwz r5,200(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r5,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r5.u32);
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lwz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	// stw r10,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r10.u32);
	// lwz r9,212(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// lwz r8,216(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// stw r8,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r8.u32);
	// lwz r7,220(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// stw r7,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r7.u32);
	// lwz r6,224(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	// stw r6,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// lwz r5,228(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// stw r5,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r5.u32);
	// lwz r11,232(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// lwz r10,236(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// lwz r9,240(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// stw r9,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r9.u32);
	// lwz r8,244(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// stw r8,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r8.u32);
	// lwz r7,248(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// stw r7,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r7.u32);
	// lwz r6,252(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 252);
	// stw r6,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r6.u32);
	// lfs f12,256(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,256(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// lfs f11,260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,260(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// lfs f10,264(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,264(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f9,268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,268(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lfs f8,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,272(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// lfs f7,276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,276(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 276, temp.u32);
	// lfs f6,280(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,280(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BC9F4"))) PPC_WEAK_FUNC(sub_825BC9F4);
PPC_FUNC_IMPL(__imp__sub_825BC9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BC9F8"))) PPC_WEAK_FUNC(sub_825BC9F8);
PPC_FUNC_IMPL(__imp__sub_825BC9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f12,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f11,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f10,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f9,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,76(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f8,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f7,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,84(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f6,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,88(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f5,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,92(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f4,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,96(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r10,104(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BCAD4"))) PPC_WEAK_FUNC(sub_825BCAD4);
PPC_FUNC_IMPL(__imp__sub_825BCAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCAD8"))) PPC_WEAK_FUNC(sub_825BCAD8);
PPC_FUNC_IMPL(__imp__sub_825BCAD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,-19912
	ctx.r11.s64 = ctx.r11.s64 + -19912;
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x825bcb00
	if (!cr6.lt) goto loc_825BCB00;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x825bcb0c
	goto loc_825BCB0C;
loc_825BCB00:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x825bcb0c
	if (cr6.lt) goto loc_825BCB0C;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_825BCB0C:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f1,f13,f12
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fnmsubs f1,f13,f0,f1
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BCB40"))) PPC_WEAK_FUNC(sub_825BCB40);
PPC_FUNC_IMPL(__imp__sub_825BCB40) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825e5ec8
	ctx.lr = 0x825BCB64;
	sub_825E5EC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x825bcb90
	if (!cr6.eq) goto loc_825BCB90;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,5356(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5356);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bne cr6,0x825bcb90
	if (!cr6.eq) goto loc_825BCB90;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
loc_825BCB90:
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

__attribute__((alias("__imp__sub_825BCBA8"))) PPC_WEAK_FUNC(sub_825BCBA8);
PPC_FUNC_IMPL(__imp__sub_825BCBA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// b 0x829eeae0
	sub_829EEAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BCBB8"))) PPC_WEAK_FUNC(sub_825BCBB8);
PPC_FUNC_IMPL(__imp__sub_825BCBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825BCBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,261
	ctx.r10.s64 = 17104896;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,34
	ctx.r10.u64 = ctx.r10.u64 | 34;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825bcc90
	if (cr6.gt) goto loc_825BCC90;
	// beq cr6,0x825bcc28
	if (cr6.eq) goto loc_825BCC28;
	// addis r11,r11,-261
	ctx.r11.s64 = ctx.r11.s64 + -17104896;
	// addic. r11,r11,-25
	xer.ca = ctx.r11.u32 > 24;
	ctx.r11.s64 = ctx.r11.s64 + -25;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x825bcc10
	if (cr0.eq) goto loc_825BCC10;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x825bcc90
	if (!cr6.eq) goto loc_825BCC90;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bcc90
	if (cr6.eq) goto loc_825BCC90;
	// bl 0x825e88a0
	ctx.lr = 0x825BCC08;
	sub_825E88A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825BCC10:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bcc90
	if (cr6.eq) goto loc_825BCC90;
	// bl 0x825e4d68
	ctx.lr = 0x825BCC20;
	sub_825E4D68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825BCC28:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// bl 0x82da1d10
	ctx.lr = 0x825BCC38;
	sub_82DA1D10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bcc90
	if (cr6.eq) goto loc_825BCC90;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bcc90
	if (cr6.eq) goto loc_825BCC90;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// addi r4,r31,292
	ctx.r4.s64 = ctx.r31.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a18a78
	ctx.lr = 0x825BCC60;
	sub_82A18A78(ctx, base);
	// addi r30,r31,932
	ctx.r30.s64 = ctx.r31.s64 + 932;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e91e8
	ctx.lr = 0x825BCC6C;
	sub_825E91E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d8948
	ctx.lr = 0x825BCC7C;
	sub_825D8948(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825e97c0
	ctx.lr = 0x825BCC88;
	sub_825E97C0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825d89c0
	ctx.lr = 0x825BCC90;
	sub_825D89C0(ctx, base);
loc_825BCC90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BCC98"))) PPC_WEAK_FUNC(sub_825BCC98);
PPC_FUNC_IMPL(__imp__sub_825BCC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825BCCA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,32(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x825bcccc
	if (cr6.lt) goto loc_825BCCCC;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x825bccd0
	if (cr6.lt) goto loc_825BCCD0;
loc_825BCCCC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825BCCD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bcdac
	if (cr6.eq) goto loc_825BCDAC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x825bccec
	if (!cr6.lt) goto loc_825BCCEC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x825bcd14
	goto loc_825BCD14;
loc_825BCCEC:
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x825bccfc
	if (!cr6.lt) goto loc_825BCCFC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x825bcd14
	goto loc_825BCD14;
loc_825BCCFC:
	// li r11,22
	ctx.r11.s64 = 22;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// eqv r9,r11,r4
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r4.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_825BCD14:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82a164c8
	ctx.lr = 0x825BCD20;
	sub_82A164C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825BCD28;
	sub_82A16C18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bcdac
	if (cr6.eq) goto loc_825BCDAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83767d18
	ctx.lr = 0x825BCD3C;
	sub_83767D18(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825BCD4C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825bcd4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825BCD4C;
	// lbz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,25(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 25);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stb r5,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r5.u8);
	// bl 0x82a16290
	ctx.lr = 0x825BCDAC;
	sub_82A16290(ctx, base);
loc_825BCDAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,424(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a23768
	ctx.lr = 0x825BCDBC;
	sub_82A23768(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x825bce34
	if (cr6.eq) goto loc_825BCE34;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825bce34
	if (!cr6.eq) goto loc_825BCE34;
	// li r28,2
	ctx.r28.s64 = 2;
loc_825BCDD8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_825BCDDC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a16248
	ctx.lr = 0x825BCDE8;
	sub_82A16248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83767d18
	ctx.lr = 0x825BCDF0;
	sub_83767D18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_825BCE00:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825bce00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825BCE00;
	// stb r27,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16290
	ctx.lr = 0x825BCE1C;
	sub_82A16290(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// blt cr6,0x825bcddc
	if (cr6.lt) goto loc_825BCDDC;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x825bcdd8
	if (!cr0.eq) goto loc_825BCDD8;
loc_825BCE34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BCE3C"))) PPC_WEAK_FUNC(sub_825BCE3C);
PPC_FUNC_IMPL(__imp__sub_825BCE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCE40"))) PPC_WEAK_FUNC(sub_825BCE40);
PPC_FUNC_IMPL(__imp__sub_825BCE40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825BCE48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r25,292(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_825BCE60:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825BCE64:
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// bl 0x82a0c7b0
	ctx.lr = 0x825BCE70;
	sub_82A0C7B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a16490
	ctx.lr = 0x825BCE84;
	sub_82A16490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a16c18
	ctx.lr = 0x825BCE8C;
	sub_82A16C18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bcf10
	if (cr6.eq) goto loc_825BCF10;
	// lwz r11,4460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4460);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825bceb4
	if (!cr6.eq) goto loc_825BCEB4;
	// lbz r9,97(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825bcec8
	if (!cr6.eq) goto loc_825BCEC8;
loc_825BCEB4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825bcecc
	if (!cr6.eq) goto loc_825BCECC;
	// lwz r11,5388(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 5388);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825bcecc
	if (!cr6.eq) goto loc_825BCECC;
loc_825BCEC8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825BCECC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bcef0
	if (cr6.eq) goto loc_825BCEF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a36648
	ctx.lr = 0x825BCEE0;
	sub_82A36648(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83530640
	ctx.lr = 0x825BCEEC;
	sub_83530640(ctx, base);
	// stb r24,85(r3)
	PPC_STORE_U8(ctx.r3.u32 + 85, ctx.r24.u8);
loc_825BCEF0:
	// lwz r11,4460(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4460);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825bcf10
	if (cr6.eq) goto loc_825BCF10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,100(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bl 0x83530640
	ctx.lr = 0x825BCF08;
	sub_83530640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82927038
	ctx.lr = 0x825BCF10;
	sub_82927038(ctx, base);
loc_825BCF10:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// blt cr6,0x825bce64
	if (cr6.lt) goto loc_825BCE64;
	// addi r28,r28,11
	ctx.r28.s64 = ctx.r28.s64 + 11;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,22
	cr6.compare<int32_t>(ctx.r28.s32, 22, xer);
	// blt cr6,0x825bce60
	if (cr6.lt) goto loc_825BCE60;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BCF34"))) PPC_WEAK_FUNC(sub_825BCF34);
PPC_FUNC_IMPL(__imp__sub_825BCF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCF38"))) PPC_WEAK_FUNC(sub_825BCF38);
PPC_FUNC_IMPL(__imp__sub_825BCF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r7,r10,-4496
	ctx.r7.s64 = ctx.r10.s64 + -4496;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lfs f13,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
loc_825BCF60:
	// li r9,1114
	ctx.r9.s64 = 1114;
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// stfsu f13,4496(r7)
	ea = 4496 + ctx.r7.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f13,-20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// stfs f13,-16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// stfs f13,-12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
loc_825BCF94:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825bcf94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825BCF94;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,4496
	ctx.r11.s64 = ctx.r11.s64 + 4496;
	// bge 0x825bcf60
	if (!cr0.lt) goto loc_825BCF60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BCFAC"))) PPC_WEAK_FUNC(sub_825BCFAC);
PPC_FUNC_IMPL(__imp__sub_825BCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BCFB0"))) PPC_WEAK_FUNC(sub_825BCFB0);
PPC_FUNC_IMPL(__imp__sub_825BCFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,1100
	ctx.r31.s64 = ctx.r3.s64 + 1100;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825BCFCC:
	// addi r31,r31,-548
	ctx.r31.s64 = ctx.r31.s64 + -548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825BCFD8;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825bcfcc
	if (!cr0.lt) goto loc_825BCFCC;
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

__attribute__((alias("__imp__sub_825BCFF8"))) PPC_WEAK_FUNC(sub_825BCFF8);
PPC_FUNC_IMPL(__imp__sub_825BCFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,452
	ctx.r31.s64 = ctx.r3.s64 + 452;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825BD014:
	// addi r31,r31,-224
	ctx.r31.s64 = ctx.r31.s64 + -224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825BD020;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825bd014
	if (!cr0.lt) goto loc_825BD014;
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

__attribute__((alias("__imp__sub_825BD040"))) PPC_WEAK_FUNC(sub_825BD040);
PPC_FUNC_IMPL(__imp__sub_825BD040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,604
	ctx.r31.s64 = ctx.r3.s64 + 604;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825BD05C:
	// addi r31,r31,-300
	ctx.r31.s64 = ctx.r31.s64 + -300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825BD068;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825bd05c
	if (!cr0.lt) goto loc_825BD05C;
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

__attribute__((alias("__imp__sub_825BD088"))) PPC_WEAK_FUNC(sub_825BD088);
PPC_FUNC_IMPL(__imp__sub_825BD088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,572
	ctx.r31.s64 = ctx.r3.s64 + 572;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825BD0A4:
	// addi r31,r31,-284
	ctx.r31.s64 = ctx.r31.s64 + -284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825BD0B0;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825bd0a4
	if (!cr0.lt) goto loc_825BD0A4;
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

__attribute__((alias("__imp__sub_825BD0D0"))) PPC_WEAK_FUNC(sub_825BD0D0);
PPC_FUNC_IMPL(__imp__sub_825BD0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r3,220
	ctx.r31.s64 = ctx.r3.s64 + 220;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825BD0EC:
	// addi r31,r31,-108
	ctx.r31.s64 = ctx.r31.s64 + -108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x825BD0F8;
	sub_83102DB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x825bd0ec
	if (!cr0.lt) goto loc_825BD0EC;
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

__attribute__((alias("__imp__sub_825BD118"))) PPC_WEAK_FUNC(sub_825BD118);
PPC_FUNC_IMPL(__imp__sub_825BD118) {
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
	// li r9,11
	ctx.r9.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r4,-3
	ctx.r10.s64 = ctx.r4.s64 + -3;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825BD148:
	// lfs f0,3(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lfs f13,7(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// lfs f12,11(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f11,15(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lbz r9,19(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r9,-8(r11)
	PPC_STORE_U8(ctx.r11.u32 + -8, ctx.r9.u8);
	// lbz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// stb r7,-7(r11)
	PPC_STORE_U8(ctx.r11.u32 + -7, ctx.r7.u8);
	// lfs f10,23(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f9,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f8,31(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,35(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 35);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r6,39(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 39);
	// stb r6,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r6.u8);
	// lbzu r9,40(r10)
	ea = 40 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r9.u8);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bdnz 0x825bd148
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825BD148;
	// addi r4,r30,440
	ctx.r4.s64 = ctx.r30.s64 + 440;
	// addi r3,r31,440
	ctx.r3.s64 = ctx.r31.s64 + 440;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x831ce980
	ctx.lr = 0x825BD1C0;
	sub_831CE980(ctx, base);
	// lfs f0,504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,508(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// lfs f12,512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,512(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// lfs f11,516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,516(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// lfs f10,520(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,520(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lfs f9,528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,528(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lfs f8,532(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,532(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// lfs f7,536(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,536(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lfs f6,540(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,540(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// lfs f5,544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,544(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
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

__attribute__((alias("__imp__sub_825BD234"))) PPC_WEAK_FUNC(sub_825BD234);
PPC_FUNC_IMPL(__imp__sub_825BD234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD238"))) PPC_WEAK_FUNC(sub_825BD238);
PPC_FUNC_IMPL(__imp__sub_825BD238) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,304
	ctx.r4.s64 = ctx.r11.s64 + 304;
	// li r5,300
	ctx.r5.s64 = 300;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD24C"))) PPC_WEAK_FUNC(sub_825BD24C);
PPC_FUNC_IMPL(__imp__sub_825BD24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD250"))) PPC_WEAK_FUNC(sub_825BD250);
PPC_FUNC_IMPL(__imp__sub_825BD250) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// li r5,30936
	ctx.r5.s64 = 30936;
	// addi r4,r4,68
	ctx.r4.s64 = ctx.r4.s64 + 68;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r8,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r8.u8);
	// lfs f11,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,56(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// bl 0x831ce980
	ctx.lr = 0x825BD30C;
	sub_831CE980(ctx, base);
	// addi r3,r31,31004
	ctx.r3.s64 = ctx.r31.s64 + 31004;
	// li r5,30936
	ctx.r5.s64 = 30936;
	// addi r4,r30,31004
	ctx.r4.s64 = ctx.r30.s64 + 31004;
	// bl 0x831ce980
	ctx.lr = 0x825BD31C;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_825BD338"))) PPC_WEAK_FUNC(sub_825BD338);
PPC_FUNC_IMPL(__imp__sub_825BD338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,4500
	ctx.r3.s64 = ctx.r11.s64 + 4500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD344"))) PPC_WEAK_FUNC(sub_825BD344);
PPC_FUNC_IMPL(__imp__sub_825BD344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD348"))) PPC_WEAK_FUNC(sub_825BD348);
PPC_FUNC_IMPL(__imp__sub_825BD348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-3592
	ctx.r3.s64 = ctx.r3.s64 + -3592;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD358"))) PPC_WEAK_FUNC(sub_825BD358);
PPC_FUNC_IMPL(__imp__sub_825BD358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,552
	ctx.r3.s64 = ctx.r11.s64 + 552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD364"))) PPC_WEAK_FUNC(sub_825BD364);
PPC_FUNC_IMPL(__imp__sub_825BD364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD368"))) PPC_WEAK_FUNC(sub_825BD368);
PPC_FUNC_IMPL(__imp__sub_825BD368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,228
	ctx.r3.s64 = ctx.r11.s64 + 228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD374"))) PPC_WEAK_FUNC(sub_825BD374);
PPC_FUNC_IMPL(__imp__sub_825BD374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD378"))) PPC_WEAK_FUNC(sub_825BD378);
PPC_FUNC_IMPL(__imp__sub_825BD378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD384"))) PPC_WEAK_FUNC(sub_825BD384);
PPC_FUNC_IMPL(__imp__sub_825BD384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD388"))) PPC_WEAK_FUNC(sub_825BD388);
PPC_FUNC_IMPL(__imp__sub_825BD388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,288
	ctx.r3.s64 = ctx.r11.s64 + 288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD394"))) PPC_WEAK_FUNC(sub_825BD394);
PPC_FUNC_IMPL(__imp__sub_825BD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD398"))) PPC_WEAK_FUNC(sub_825BD398);
PPC_FUNC_IMPL(__imp__sub_825BD398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BD3A4"))) PPC_WEAK_FUNC(sub_825BD3A4);
PPC_FUNC_IMPL(__imp__sub_825BD3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD3A8"))) PPC_WEAK_FUNC(sub_825BD3A8);
PPC_FUNC_IMPL(__imp__sub_825BD3A8) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BD3C4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd3c4
	if (!cr0.eq) goto loc_825BD3C4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bd410
	if (!cr6.eq) goto loc_825BD410;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BD3F0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11720
	ctx.r5.s64 = ctx.r11.s64 + -11720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BD410;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BD410:
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

__attribute__((alias("__imp__sub_825BD428"))) PPC_WEAK_FUNC(sub_825BD428);
PPC_FUNC_IMPL(__imp__sub_825BD428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r8,4536(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4536);
	// addi r9,r3,4500
	ctx.r9.s64 = ctx.r3.s64 + 4500;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r4,r9,40
	ctx.r4.s64 = ctx.r9.s64 + 40;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// lfs f0,4500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4500);
	ctx.f0.f64 = double(temp.f32);
	// li r5,4456
	ctx.r5.s64 = 4456;
	// lfs f13,4504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4504);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4508);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4512);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4516);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4520);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4524);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4528);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4532);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stb r8,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r8.u8);
	// b 0x831cee08
	sub_831CEE08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD494"))) PPC_WEAK_FUNC(sub_825BD494);
PPC_FUNC_IMPL(__imp__sub_825BD494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD498"))) PPC_WEAK_FUNC(sub_825BD498);
PPC_FUNC_IMPL(__imp__sub_825BD498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,-3592
	ctx.r4.s64 = ctx.r4.s64 + -3592;
	// b 0x825bd250
	sub_825BD250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD4AC"))) PPC_WEAK_FUNC(sub_825BD4AC);
PPC_FUNC_IMPL(__imp__sub_825BD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD4B0"))) PPC_WEAK_FUNC(sub_825BD4B0);
PPC_FUNC_IMPL(__imp__sub_825BD4B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,228
	ctx.r4.s64 = ctx.r11.s64 + 228;
	// b 0x825bc5f0
	sub_825BC5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD4C0"))) PPC_WEAK_FUNC(sub_825BD4C0);
PPC_FUNC_IMPL(__imp__sub_825BD4C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// b 0x825bc7b8
	sub_825BC7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD4D0"))) PPC_WEAK_FUNC(sub_825BD4D0);
PPC_FUNC_IMPL(__imp__sub_825BD4D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// b 0x825bc9f8
	sub_825BC9F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD4E0"))) PPC_WEAK_FUNC(sub_825BD4E0);
PPC_FUNC_IMPL(__imp__sub_825BD4E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825BD4FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd4fc
	if (!cr0.eq) goto loc_825BD4FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825bd548
	if (!cr6.eq) goto loc_825BD548;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825bd548
	if (cr6.eq) goto loc_825BD548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bcfb0
	ctx.lr = 0x825BD534;
	sub_825BCFB0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BD548;
	sub_825952B8(ctx, base);
loc_825BD548:
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

__attribute__((alias("__imp__sub_825BD55C"))) PPC_WEAK_FUNC(sub_825BD55C);
PPC_FUNC_IMPL(__imp__sub_825BD55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD560"))) PPC_WEAK_FUNC(sub_825BD560);
PPC_FUNC_IMPL(__imp__sub_825BD560) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825BD57C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd57c
	if (!cr0.eq) goto loc_825BD57C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825bd5c8
	if (!cr6.eq) goto loc_825BD5C8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825bd5c8
	if (cr6.eq) goto loc_825BD5C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bcff8
	ctx.lr = 0x825BD5B4;
	sub_825BCFF8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BD5C8;
	sub_825952B8(ctx, base);
loc_825BD5C8:
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

__attribute__((alias("__imp__sub_825BD5DC"))) PPC_WEAK_FUNC(sub_825BD5DC);
PPC_FUNC_IMPL(__imp__sub_825BD5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD5E0"))) PPC_WEAK_FUNC(sub_825BD5E0);
PPC_FUNC_IMPL(__imp__sub_825BD5E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825BD5FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd5fc
	if (!cr0.eq) goto loc_825BD5FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825bd648
	if (!cr6.eq) goto loc_825BD648;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825bd648
	if (cr6.eq) goto loc_825BD648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bd040
	ctx.lr = 0x825BD634;
	sub_825BD040(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BD648;
	sub_825952B8(ctx, base);
loc_825BD648:
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

__attribute__((alias("__imp__sub_825BD65C"))) PPC_WEAK_FUNC(sub_825BD65C);
PPC_FUNC_IMPL(__imp__sub_825BD65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD660"))) PPC_WEAK_FUNC(sub_825BD660);
PPC_FUNC_IMPL(__imp__sub_825BD660) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825BD67C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd67c
	if (!cr0.eq) goto loc_825BD67C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825bd6c8
	if (!cr6.eq) goto loc_825BD6C8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825bd6c8
	if (cr6.eq) goto loc_825BD6C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bd088
	ctx.lr = 0x825BD6B4;
	sub_825BD088(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BD6C8;
	sub_825952B8(ctx, base);
loc_825BD6C8:
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

__attribute__((alias("__imp__sub_825BD6DC"))) PPC_WEAK_FUNC(sub_825BD6DC);
PPC_FUNC_IMPL(__imp__sub_825BD6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD6E0"))) PPC_WEAK_FUNC(sub_825BD6E0);
PPC_FUNC_IMPL(__imp__sub_825BD6E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwsync 
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825BD6FC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd6fc
	if (!cr0.eq) goto loc_825BD6FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x825bd748
	if (!cr6.eq) goto loc_825BD748;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825bd748
	if (cr6.eq) goto loc_825BD748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bd0d0
	ctx.lr = 0x825BD734;
	sub_825BD0D0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BD748;
	sub_825952B8(ctx, base);
loc_825BD748:
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

__attribute__((alias("__imp__sub_825BD75C"))) PPC_WEAK_FUNC(sub_825BD75C);
PPC_FUNC_IMPL(__imp__sub_825BD75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD760"))) PPC_WEAK_FUNC(sub_825BD760);
PPC_FUNC_IMPL(__imp__sub_825BD760) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bd3a8
	sub_825BD3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD764"))) PPC_WEAK_FUNC(sub_825BD764);
PPC_FUNC_IMPL(__imp__sub_825BD764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD768"))) PPC_WEAK_FUNC(sub_825BD768);
PPC_FUNC_IMPL(__imp__sub_825BD768) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BD784:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd784
	if (!cr0.eq) goto loc_825BD784;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bd7d0
	if (!cr6.eq) goto loc_825BD7D0;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BD7B0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11224
	ctx.r5.s64 = ctx.r11.s64 + -11224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BD7D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BD7D0:
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

__attribute__((alias("__imp__sub_825BD7E8"))) PPC_WEAK_FUNC(sub_825BD7E8);
PPC_FUNC_IMPL(__imp__sub_825BD7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825BD7F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825bd890
	if (cr6.eq) goto loc_825BD890;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bd884
	if (!cr6.eq) goto loc_825BD884;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,58348
	ctx.r4.u64 = ctx.r4.u64 | 58348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BD828;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bd864
	if (cr6.eq) goto loc_825BD864;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// ori r31,r11,61940
	ctx.r31.u64 = ctx.r11.u64 | 61940;
loc_825BD848:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a25148
	ctx.lr = 0x825BD850;
	sub_82A25148(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bge 0x825bd848
	if (!cr0.lt) goto loc_825BD848;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825bd868
	goto loc_825BD868;
loc_825BD864:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BD868:
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bd884
	if (!cr6.eq) goto loc_825BD884;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825BD884:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825BD890:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bd8a0
	if (cr6.eq) goto loc_825BD8A0;
	// bl 0x825df578
	ctx.lr = 0x825BD8A0;
	sub_825DF578(ctx, base);
loc_825BD8A0:
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,58348
	ctx.r4.u64 = ctx.r4.u64 | 58348;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BD8BC;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bd8f8
	if (cr6.eq) goto loc_825BD8F8;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// ori r31,r11,61940
	ctx.r31.u64 = ctx.r11.u64 | 61940;
loc_825BD8DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a25148
	ctx.lr = 0x825BD8E4;
	sub_82A25148(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bge 0x825bd8dc
	if (!cr0.lt) goto loc_825BD8DC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x825bd8fc
	goto loc_825BD8FC;
loc_825BD8F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825BD8FC:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lis r8,1536
	ctx.r8.s64 = 100663296;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r6,r8,3
	ctx.r6.u64 = ctx.r8.u64 | 3;
	// and r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 & ctx.r6.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BD91C"))) PPC_WEAK_FUNC(sub_825BD91C);
PPC_FUNC_IMPL(__imp__sub_825BD91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BD920"))) PPC_WEAK_FUNC(sub_825BD920);
PPC_FUNC_IMPL(__imp__sub_825BD920) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BD93C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bd93c
	if (!cr0.eq) goto loc_825BD93C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bd988
	if (!cr6.eq) goto loc_825BD988;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BD968;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11112
	ctx.r5.s64 = ctx.r11.s64 + -11112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BD988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BD988:
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

__attribute__((alias("__imp__sub_825BD9A0"))) PPC_WEAK_FUNC(sub_825BD9A0);
PPC_FUNC_IMPL(__imp__sub_825BD9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825BD9A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825bda38
	if (cr6.eq) goto loc_825BDA38;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bda2c
	if (!cr6.eq) goto loc_825BDA2C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1100
	ctx.r4.s64 = 1100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BD9DC;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bda0c
	if (cr6.eq) goto loc_825BDA0C;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BD9F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a36e18
	ctx.lr = 0x825BD9FC;
	sub_82A36E18(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// bge 0x825bd9f4
	if (!cr0.lt) goto loc_825BD9F4;
	// b 0x825bda10
	goto loc_825BDA10;
loc_825BDA0C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDA10:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825bda2c
	if (!cr6.eq) goto loc_825BDA2C;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDA2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDA38:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bda48
	if (cr6.eq) goto loc_825BDA48;
	// bl 0x825bd4e0
	ctx.lr = 0x825BDA48;
	sub_825BD4E0(ctx, base);
loc_825BDA48:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1100
	ctx.r4.s64 = 1100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BDA60;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bda90
	if (cr6.eq) goto loc_825BDA90;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDA78:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a36e18
	ctx.lr = 0x825BDA80;
	sub_82A36E18(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// bge 0x825bda78
	if (!cr0.lt) goto loc_825BDA78;
	// b 0x825bda94
	goto loc_825BDA94;
loc_825BDA90:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDA94:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BDAB4"))) PPC_WEAK_FUNC(sub_825BDAB4);
PPC_FUNC_IMPL(__imp__sub_825BDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDAB8"))) PPC_WEAK_FUNC(sub_825BDAB8);
PPC_FUNC_IMPL(__imp__sub_825BDAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825BDAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825bdb50
	if (cr6.eq) goto loc_825BDB50;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bdb44
	if (!cr6.eq) goto loc_825BDB44;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,452
	ctx.r4.s64 = 452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BDAF4;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdb24
	if (cr6.eq) goto loc_825BDB24;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDB0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a371b8
	ctx.lr = 0x825BDB14;
	sub_82A371B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// bge 0x825bdb0c
	if (!cr0.lt) goto loc_825BDB0C;
	// b 0x825bdb28
	goto loc_825BDB28;
loc_825BDB24:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDB28:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825bdb44
	if (!cr6.eq) goto loc_825BDB44;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDB44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDB50:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdb60
	if (cr6.eq) goto loc_825BDB60;
	// bl 0x825bd560
	ctx.lr = 0x825BDB60;
	sub_825BD560(ctx, base);
loc_825BDB60:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,452
	ctx.r4.s64 = 452;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BDB78;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdba8
	if (cr6.eq) goto loc_825BDBA8;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDB90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a371b8
	ctx.lr = 0x825BDB98;
	sub_82A371B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// bge 0x825bdb90
	if (!cr0.lt) goto loc_825BDB90;
	// b 0x825bdbac
	goto loc_825BDBAC;
loc_825BDBA8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDBAC:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BDBCC"))) PPC_WEAK_FUNC(sub_825BDBCC);
PPC_FUNC_IMPL(__imp__sub_825BDBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDBD0"))) PPC_WEAK_FUNC(sub_825BDBD0);
PPC_FUNC_IMPL(__imp__sub_825BDBD0) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BDBEC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bdbec
	if (!cr0.eq) goto loc_825BDBEC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bdc38
	if (!cr6.eq) goto loc_825BDC38;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BDC18;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11088
	ctx.r5.s64 = ctx.r11.s64 + -11088;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BDC38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BDC38:
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

__attribute__((alias("__imp__sub_825BDC50"))) PPC_WEAK_FUNC(sub_825BDC50);
PPC_FUNC_IMPL(__imp__sub_825BDC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825BDC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825bdce8
	if (cr6.eq) goto loc_825BDCE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bdcdc
	if (!cr6.eq) goto loc_825BDCDC;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,604
	ctx.r4.s64 = 604;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BDC8C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdcbc
	if (cr6.eq) goto loc_825BDCBC;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDCA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a379e0
	ctx.lr = 0x825BDCAC;
	sub_82A379E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,300
	ctx.r30.s64 = ctx.r30.s64 + 300;
	// bge 0x825bdca4
	if (!cr0.lt) goto loc_825BDCA4;
	// b 0x825bdcc0
	goto loc_825BDCC0;
loc_825BDCBC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDCC0:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825bdcdc
	if (!cr6.eq) goto loc_825BDCDC;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDCDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDCE8:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdcf8
	if (cr6.eq) goto loc_825BDCF8;
	// bl 0x825bd5e0
	ctx.lr = 0x825BDCF8;
	sub_825BD5E0(ctx, base);
loc_825BDCF8:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,604
	ctx.r4.s64 = 604;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BDD10;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdd40
	if (cr6.eq) goto loc_825BDD40;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDD28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a379e0
	ctx.lr = 0x825BDD30;
	sub_82A379E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,300
	ctx.r30.s64 = ctx.r30.s64 + 300;
	// bge 0x825bdd28
	if (!cr0.lt) goto loc_825BDD28;
	// b 0x825bdd44
	goto loc_825BDD44;
loc_825BDD40:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDD44:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BDD64"))) PPC_WEAK_FUNC(sub_825BDD64);
PPC_FUNC_IMPL(__imp__sub_825BDD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDD68"))) PPC_WEAK_FUNC(sub_825BDD68);
PPC_FUNC_IMPL(__imp__sub_825BDD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825BDD70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825bde00
	if (cr6.eq) goto loc_825BDE00;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bddf4
	if (!cr6.eq) goto loc_825BDDF4;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,572
	ctx.r4.s64 = 572;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BDDA4;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bddd4
	if (cr6.eq) goto loc_825BDDD4;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDDBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37eb0
	ctx.lr = 0x825BDDC4;
	sub_82A37EB0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,284
	ctx.r30.s64 = ctx.r30.s64 + 284;
	// bge 0x825bddbc
	if (!cr0.lt) goto loc_825BDDBC;
	// b 0x825bddd8
	goto loc_825BDDD8;
loc_825BDDD4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDDD8:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825bddf4
	if (!cr6.eq) goto loc_825BDDF4;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDDF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDE00:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bde10
	if (cr6.eq) goto loc_825BDE10;
	// bl 0x825bd660
	ctx.lr = 0x825BDE10;
	sub_825BD660(ctx, base);
loc_825BDE10:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,572
	ctx.r4.s64 = 572;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BDE28;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bde58
	if (cr6.eq) goto loc_825BDE58;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDE40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a37eb0
	ctx.lr = 0x825BDE48;
	sub_82A37EB0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,284
	ctx.r30.s64 = ctx.r30.s64 + 284;
	// bge 0x825bde40
	if (!cr0.lt) goto loc_825BDE40;
	// b 0x825bde5c
	goto loc_825BDE5C;
loc_825BDE58:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDE5C:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BDE7C"))) PPC_WEAK_FUNC(sub_825BDE7C);
PPC_FUNC_IMPL(__imp__sub_825BDE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDE80"))) PPC_WEAK_FUNC(sub_825BDE80);
PPC_FUNC_IMPL(__imp__sub_825BDE80) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BDE9C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bde9c
	if (!cr0.eq) goto loc_825BDE9C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bdee8
	if (!cr6.eq) goto loc_825BDEE8;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BDEC8;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11072
	ctx.r5.s64 = ctx.r11.s64 + -11072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BDEE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BDEE8:
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

__attribute__((alias("__imp__sub_825BDF00"))) PPC_WEAK_FUNC(sub_825BDF00);
PPC_FUNC_IMPL(__imp__sub_825BDF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825BDF08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// beq cr6,0x825bdf98
	if (cr6.eq) goto loc_825BDF98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bdf8c
	if (!cr6.eq) goto loc_825BDF8C;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,220
	ctx.r4.s64 = 220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BDF3C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdf6c
	if (cr6.eq) goto loc_825BDF6C;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDF54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38340
	ctx.lr = 0x825BDF5C;
	sub_82A38340(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bge 0x825bdf54
	if (!cr0.lt) goto loc_825BDF54;
	// b 0x825bdf70
	goto loc_825BDF70;
loc_825BDF6C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDF70:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x825bdf8c
	if (!cr6.eq) goto loc_825BDF8C;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDF8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_825BDF98:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdfa8
	if (cr6.eq) goto loc_825BDFA8;
	// bl 0x825bd6e0
	ctx.lr = 0x825BDFA8;
	sub_825BD6E0(ctx, base);
loc_825BDFA8:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,220
	ctx.r4.s64 = 220;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BDFC0;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdff0
	if (cr6.eq) goto loc_825BDFF0;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825BDFD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a38340
	ctx.lr = 0x825BDFE0;
	sub_82A38340(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bge 0x825bdfd8
	if (!cr0.lt) goto loc_825BDFD8;
	// b 0x825bdff4
	goto loc_825BDFF4;
loc_825BDFF0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_825BDFF4:
	// addic r11,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lis r9,1536
	ctx.r9.s64 = 100663296;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r7,r9,3
	ctx.r7.u64 = ctx.r9.u64 | 3;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE014"))) PPC_WEAK_FUNC(sub_825BE014);
PPC_FUNC_IMPL(__imp__sub_825BE014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE018"))) PPC_WEAK_FUNC(sub_825BE018);
PPC_FUNC_IMPL(__imp__sub_825BE018) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BE034:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825be034
	if (!cr0.eq) goto loc_825BE034;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825be080
	if (!cr6.eq) goto loc_825BE080;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BE060;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-11056
	ctx.r5.s64 = ctx.r11.s64 + -11056;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BE080;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BE080:
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

__attribute__((alias("__imp__sub_825BE098"))) PPC_WEAK_FUNC(sub_825BE098);
PPC_FUNC_IMPL(__imp__sub_825BE098) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r11,552
	ctx.r4.s64 = ctx.r11.s64 + 552;
	// b 0x825bd118
	sub_825BD118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE0A8"))) PPC_WEAK_FUNC(sub_825BE0A8);
PPC_FUNC_IMPL(__imp__sub_825BE0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825BE0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,6
	ctx.r29.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE0CC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be138
	if (cr6.eq) goto loc_825BE138;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-19508
	ctx.r10.s64 = ctx.r11.s64 + -19508;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be108
	if (cr6.eq) goto loc_825BE108;
	// bl 0x825df578
	ctx.lr = 0x825BE108;
	sub_825DF578(ctx, base);
loc_825BE108:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8996
	ctx.r4.s64 = 8996;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825BE11C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be144
	if (cr6.eq) goto loc_825BE144;
	// bl 0x825bcf38
	ctx.lr = 0x825BE128;
	sub_825BCF38(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825BE138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825BE144:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE158"))) PPC_WEAK_FUNC(sub_825BE158);
PPC_FUNC_IMPL(__imp__sub_825BE158) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE180;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be1d0
	if (cr6.eq) goto loc_825BE1D0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19464
	ctx.r8.s64 = ctx.r10.s64 + -19464;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825bd7e8
	ctx.lr = 0x825BE1B8;
	sub_825BD7E8(ctx, base);
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
loc_825BE1D0:
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

__attribute__((alias("__imp__sub_825BE1E8"))) PPC_WEAK_FUNC(sub_825BE1E8);
PPC_FUNC_IMPL(__imp__sub_825BE1E8) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE210;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be260
	if (cr6.eq) goto loc_825BE260;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19420
	ctx.r8.s64 = ctx.r10.s64 + -19420;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825bd9a0
	ctx.lr = 0x825BE248;
	sub_825BD9A0(ctx, base);
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
loc_825BE260:
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

__attribute__((alias("__imp__sub_825BE278"))) PPC_WEAK_FUNC(sub_825BE278);
PPC_FUNC_IMPL(__imp__sub_825BE278) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE2A0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be2f0
	if (cr6.eq) goto loc_825BE2F0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19376
	ctx.r8.s64 = ctx.r10.s64 + -19376;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825bdab8
	ctx.lr = 0x825BE2D8;
	sub_825BDAB8(ctx, base);
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
loc_825BE2F0:
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

__attribute__((alias("__imp__sub_825BE308"))) PPC_WEAK_FUNC(sub_825BE308);
PPC_FUNC_IMPL(__imp__sub_825BE308) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE330;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be380
	if (cr6.eq) goto loc_825BE380;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19332
	ctx.r8.s64 = ctx.r10.s64 + -19332;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825bdc50
	ctx.lr = 0x825BE368;
	sub_825BDC50(ctx, base);
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
loc_825BE380:
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

__attribute__((alias("__imp__sub_825BE398"))) PPC_WEAK_FUNC(sub_825BE398);
PPC_FUNC_IMPL(__imp__sub_825BE398) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE3C0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be410
	if (cr6.eq) goto loc_825BE410;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19288
	ctx.r8.s64 = ctx.r10.s64 + -19288;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825bdd68
	ctx.lr = 0x825BE3F8;
	sub_825BDD68(ctx, base);
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
loc_825BE410:
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

__attribute__((alias("__imp__sub_825BE428"))) PPC_WEAK_FUNC(sub_825BE428);
PPC_FUNC_IMPL(__imp__sub_825BE428) {
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
	// li r11,6
	ctx.r11.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825BE450;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be4a0
	if (cr6.eq) goto loc_825BE4A0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-19244
	ctx.r8.s64 = ctx.r10.s64 + -19244;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x825bdf00
	ctx.lr = 0x825BE488;
	sub_825BDF00(ctx, base);
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
loc_825BE4A0:
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

__attribute__((alias("__imp__sub_825BE4B8"))) PPC_WEAK_FUNC(sub_825BE4B8);
PPC_FUNC_IMPL(__imp__sub_825BE4B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bd768
	sub_825BD768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE4BC"))) PPC_WEAK_FUNC(sub_825BE4BC);
PPC_FUNC_IMPL(__imp__sub_825BE4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE4C0"))) PPC_WEAK_FUNC(sub_825BE4C0);
PPC_FUNC_IMPL(__imp__sub_825BE4C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bd920
	sub_825BD920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE4C4"))) PPC_WEAK_FUNC(sub_825BE4C4);
PPC_FUNC_IMPL(__imp__sub_825BE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE4C8"))) PPC_WEAK_FUNC(sub_825BE4C8);
PPC_FUNC_IMPL(__imp__sub_825BE4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bdbd0
	sub_825BDBD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE4CC"))) PPC_WEAK_FUNC(sub_825BE4CC);
PPC_FUNC_IMPL(__imp__sub_825BE4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE4D0"))) PPC_WEAK_FUNC(sub_825BE4D0);
PPC_FUNC_IMPL(__imp__sub_825BE4D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825bde80
	sub_825BDE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE4D4"))) PPC_WEAK_FUNC(sub_825BE4D4);
PPC_FUNC_IMPL(__imp__sub_825BE4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE4D8"))) PPC_WEAK_FUNC(sub_825BE4D8);
PPC_FUNC_IMPL(__imp__sub_825BE4D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825be018
	sub_825BE018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE4DC"))) PPC_WEAK_FUNC(sub_825BE4DC);
PPC_FUNC_IMPL(__imp__sub_825BE4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE4E0"))) PPC_WEAK_FUNC(sub_825BE4E0);
PPC_FUNC_IMPL(__imp__sub_825BE4E0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19508
	ctx.r10.s64 = ctx.r11.s64 + -19508;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be520
	if (cr6.eq) goto loc_825BE520;
	// bl 0x825df578
	ctx.lr = 0x825BE518;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE520:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be54c
	if (cr6.eq) goto loc_825BE54C;
	// bl 0x82595188
	ctx.lr = 0x825BE53C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE54C;
	sub_825952B8(ctx, base);
loc_825BE54C:
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

__attribute__((alias("__imp__sub_825BE568"))) PPC_WEAK_FUNC(sub_825BE568);
PPC_FUNC_IMPL(__imp__sub_825BE568) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19464
	ctx.r10.s64 = ctx.r11.s64 + -19464;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be5a8
	if (cr6.eq) goto loc_825BE5A8;
	// bl 0x825df578
	ctx.lr = 0x825BE5A0;
	sub_825DF578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE5A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be5d4
	if (cr6.eq) goto loc_825BE5D4;
	// bl 0x82595188
	ctx.lr = 0x825BE5C4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE5D4;
	sub_825952B8(ctx, base);
loc_825BE5D4:
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

__attribute__((alias("__imp__sub_825BE5F0"))) PPC_WEAK_FUNC(sub_825BE5F0);
PPC_FUNC_IMPL(__imp__sub_825BE5F0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19420
	ctx.r10.s64 = ctx.r11.s64 + -19420;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be630
	if (cr6.eq) goto loc_825BE630;
	// bl 0x825bd4e0
	ctx.lr = 0x825BE628;
	sub_825BD4E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE630:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be65c
	if (cr6.eq) goto loc_825BE65C;
	// bl 0x82595188
	ctx.lr = 0x825BE64C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE65C;
	sub_825952B8(ctx, base);
loc_825BE65C:
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

__attribute__((alias("__imp__sub_825BE678"))) PPC_WEAK_FUNC(sub_825BE678);
PPC_FUNC_IMPL(__imp__sub_825BE678) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19376
	ctx.r10.s64 = ctx.r11.s64 + -19376;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be6b8
	if (cr6.eq) goto loc_825BE6B8;
	// bl 0x825bd560
	ctx.lr = 0x825BE6B0;
	sub_825BD560(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE6B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be6e4
	if (cr6.eq) goto loc_825BE6E4;
	// bl 0x82595188
	ctx.lr = 0x825BE6D4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE6E4;
	sub_825952B8(ctx, base);
loc_825BE6E4:
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

__attribute__((alias("__imp__sub_825BE700"))) PPC_WEAK_FUNC(sub_825BE700);
PPC_FUNC_IMPL(__imp__sub_825BE700) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19332
	ctx.r10.s64 = ctx.r11.s64 + -19332;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be740
	if (cr6.eq) goto loc_825BE740;
	// bl 0x825bd5e0
	ctx.lr = 0x825BE738;
	sub_825BD5E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE740:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be76c
	if (cr6.eq) goto loc_825BE76C;
	// bl 0x82595188
	ctx.lr = 0x825BE75C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE76C;
	sub_825952B8(ctx, base);
loc_825BE76C:
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

__attribute__((alias("__imp__sub_825BE788"))) PPC_WEAK_FUNC(sub_825BE788);
PPC_FUNC_IMPL(__imp__sub_825BE788) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19288
	ctx.r10.s64 = ctx.r11.s64 + -19288;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be7c8
	if (cr6.eq) goto loc_825BE7C8;
	// bl 0x825bd660
	ctx.lr = 0x825BE7C0;
	sub_825BD660(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE7C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be7f4
	if (cr6.eq) goto loc_825BE7F4;
	// bl 0x82595188
	ctx.lr = 0x825BE7E4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE7F4;
	sub_825952B8(ctx, base);
loc_825BE7F4:
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

__attribute__((alias("__imp__sub_825BE810"))) PPC_WEAK_FUNC(sub_825BE810);
PPC_FUNC_IMPL(__imp__sub_825BE810) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-19244
	ctx.r10.s64 = ctx.r11.s64 + -19244;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825be850
	if (cr6.eq) goto loc_825BE850;
	// bl 0x825bd6e0
	ctx.lr = 0x825BE848;
	sub_825BD6E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_825BE850:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,-25192
	ctx.r9.s64 = ctx.r11.s64 + -25192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825be87c
	if (cr6.eq) goto loc_825BE87C;
	// bl 0x82595188
	ctx.lr = 0x825BE86C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BE87C;
	sub_825952B8(ctx, base);
loc_825BE87C:
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

__attribute__((alias("__imp__sub_825BE898"))) PPC_WEAK_FUNC(sub_825BE898);
PPC_FUNC_IMPL(__imp__sub_825BE898) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// li r9,1
	ctx.r9.s64 = 1;
loc_825BE8B4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r9,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825be8b4
	if (!cr0.eq) goto loc_825BE8B4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825be900
	if (!cr6.eq) goto loc_825BE900;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BE8E0;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-8040
	ctx.r5.s64 = ctx.r11.s64 + -8040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BE900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BE900:
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

__attribute__((alias("__imp__sub_825BE918"))) PPC_WEAK_FUNC(sub_825BE918);
PPC_FUNC_IMPL(__imp__sub_825BE918) {
	PPC_FUNC_PROLOGUE();
	// b 0x825be898
	sub_825BE898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BE91C"))) PPC_WEAK_FUNC(sub_825BE91C);
PPC_FUNC_IMPL(__imp__sub_825BE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE920"))) PPC_WEAK_FUNC(sub_825BE920);
PPC_FUNC_IMPL(__imp__sub_825BE920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19188
	ctx.r3.s64 = ctx.r11.s64 + -19188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE92C"))) PPC_WEAK_FUNC(sub_825BE92C);
PPC_FUNC_IMPL(__imp__sub_825BE92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE930"))) PPC_WEAK_FUNC(sub_825BE930);
PPC_FUNC_IMPL(__imp__sub_825BE930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19164
	ctx.r3.s64 = ctx.r11.s64 + -19164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE93C"))) PPC_WEAK_FUNC(sub_825BE93C);
PPC_FUNC_IMPL(__imp__sub_825BE93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE940"))) PPC_WEAK_FUNC(sub_825BE940);
PPC_FUNC_IMPL(__imp__sub_825BE940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19140
	ctx.r3.s64 = ctx.r11.s64 + -19140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE94C"))) PPC_WEAK_FUNC(sub_825BE94C);
PPC_FUNC_IMPL(__imp__sub_825BE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE950"))) PPC_WEAK_FUNC(sub_825BE950);
PPC_FUNC_IMPL(__imp__sub_825BE950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19104
	ctx.r3.s64 = ctx.r11.s64 + -19104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE95C"))) PPC_WEAK_FUNC(sub_825BE95C);
PPC_FUNC_IMPL(__imp__sub_825BE95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE960"))) PPC_WEAK_FUNC(sub_825BE960);
PPC_FUNC_IMPL(__imp__sub_825BE960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19076
	ctx.r3.s64 = ctx.r11.s64 + -19076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE96C"))) PPC_WEAK_FUNC(sub_825BE96C);
PPC_FUNC_IMPL(__imp__sub_825BE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE970"))) PPC_WEAK_FUNC(sub_825BE970);
PPC_FUNC_IMPL(__imp__sub_825BE970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19052
	ctx.r3.s64 = ctx.r11.s64 + -19052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE97C"))) PPC_WEAK_FUNC(sub_825BE97C);
PPC_FUNC_IMPL(__imp__sub_825BE97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE980"))) PPC_WEAK_FUNC(sub_825BE980);
PPC_FUNC_IMPL(__imp__sub_825BE980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-19028
	ctx.r3.s64 = ctx.r11.s64 + -19028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BE98C"))) PPC_WEAK_FUNC(sub_825BE98C);
PPC_FUNC_IMPL(__imp__sub_825BE98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE990"))) PPC_WEAK_FUNC(sub_825BE990);
PPC_FUNC_IMPL(__imp__sub_825BE990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825BE998;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,-3088
	ctx.r8.s64 = ctx.r11.s64 + -3088;
	// addi r7,r10,-19008
	ctx.r7.s64 = ctx.r10.s64 + -19008;
	// addi r6,r9,-19020
	ctx.r6.s64 = ctx.r9.s64 + -19020;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r29,r3,292
	ctx.r29.s64 = ctx.r3.s64 + 292;
	// stw r28,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825BE9D8;
	sub_82A0CC80(ctx, base);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825bea1c
	if (cr6.eq) goto loc_825BEA1C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825BE9F4;
	sub_82595150(ctx, base);
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825bea10
	if (cr6.eq) goto loc_825BEA10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e0ed8
	ctx.lr = 0x825BEA08;
	sub_825E0ED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x825BEA10;
	sub_82416268(ctx, base);
loc_825BEA10:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825BEA18;
	sub_82595170(ctx, base);
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
loc_825BEA1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0dc70
	ctx.lr = 0x825BEA24;
	sub_82A0DC70(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,272
	ctx.r31.s64 = ctx.r30.s64 + 272;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEA3C;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bea64
	if (cr6.eq) goto loc_825BEA64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEA60;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEA64:
	// addi r29,r30,272
	ctx.r29.s64 = ctx.r30.s64 + 272;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r27,r11,-24712
	ctx.r27.s64 = ctx.r11.s64 + -24712;
loc_825BEA78:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r27,-20(r29)
	ea = -20 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r29.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825beab0
	if (cr6.eq) goto loc_825BEAB0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825beab0
	if (cr6.eq) goto loc_825BEAB0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEAAC;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEAB0:
	// stb r28,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r28.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bead8
	if (cr6.eq) goto loc_825BEAD8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEAD4;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEAD8:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge 0x825bea78
	if (!cr0.lt) goto loc_825BEA78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,212
	ctx.r31.s64 = ctx.r30.s64 + 212;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEAF8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825beb20
	if (cr6.eq) goto loc_825BEB20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEB1C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEB20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,192
	ctx.r31.s64 = ctx.r30.s64 + 192;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEB38;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825beb60
	if (cr6.eq) goto loc_825BEB60;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEB5C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEB60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,172
	ctx.r31.s64 = ctx.r30.s64 + 172;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEB78;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825beba0
	if (cr6.eq) goto loc_825BEBA0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEB9C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEBA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEBB8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bebe0
	if (cr6.eq) goto loc_825BEBE0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEBDC;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEBE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,132
	ctx.r31.s64 = ctx.r30.s64 + 132;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEBF8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bec20
	if (cr6.eq) goto loc_825BEC20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEC1C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEC20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEC38;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bec60
	if (cr6.eq) goto loc_825BEC60;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEC5C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BEC60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,92
	ctx.r31.s64 = ctx.r30.s64 + 92;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BEC78;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825beca0
	if (cr6.eq) goto loc_825BECA0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BEC9C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BECA0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,72
	ctx.r31.s64 = ctx.r30.s64 + 72;
	// addi r10,r11,-9704
	ctx.r10.s64 = ctx.r11.s64 + -9704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BECB8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bece0
	if (cr6.eq) goto loc_825BECE0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BECDC;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BECE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// addi r10,r11,-24712
	ctx.r10.s64 = ctx.r11.s64 + -24712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// bl 0x825e0cf8
	ctx.lr = 0x825BECF8;
	sub_825E0CF8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825bed20
	if (cr6.eq) goto loc_825BED20;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825BED1C;
	sub_8353F3B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_825BED20:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r9,r11,32068
	ctx.r9.s64 = ctx.r11.s64 + 32068;
	// addi r8,r10,-32552
	ctx.r8.s64 = ctx.r10.s64 + -32552;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x83102db0
	ctx.lr = 0x825BED40;
	sub_83102DB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BED48"))) PPC_WEAK_FUNC(sub_825BED48);
PPC_FUNC_IMPL(__imp__sub_825BED48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825bf320
	sub_825BF320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BED50"))) PPC_WEAK_FUNC(sub_825BED50);
PPC_FUNC_IMPL(__imp__sub_825BED50) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bee30
	if (!cr6.eq) goto loc_825BEE30;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bed88
	if (!cr6.eq) goto loc_825BED88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BED88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825bedb8
	if (cr6.eq) goto loc_825BEDB8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BED9C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bed9c
	if (!cr6.eq) goto loc_825BED9C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BEDB8:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825bedc8
	if (!cr6.eq) goto loc_825BEDC8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BEDC8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825bedf4
	if (cr6.eq) goto loc_825BEDF4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BEDD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bedd8
	if (!cr6.eq) goto loc_825BEDD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BEDF4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-8024
	ctx.r8.s64 = ctx.r8.s64 + -8024;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BEE28;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BEE30:
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

__attribute__((alias("__imp__sub_825BEE44"))) PPC_WEAK_FUNC(sub_825BEE44);
PPC_FUNC_IMPL(__imp__sub_825BEE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BEE48"))) PPC_WEAK_FUNC(sub_825BEE48);
PPC_FUNC_IMPL(__imp__sub_825BEE48) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bef28
	if (!cr6.eq) goto loc_825BEF28;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bee80
	if (!cr6.eq) goto loc_825BEE80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BEE80:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825beeb0
	if (cr6.eq) goto loc_825BEEB0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BEE94:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bee94
	if (!cr6.eq) goto loc_825BEE94;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BEEB0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825beec0
	if (!cr6.eq) goto loc_825BEEC0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BEEC0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825beeec
	if (cr6.eq) goto loc_825BEEEC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BEED0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825beed0
	if (!cr6.eq) goto loc_825BEED0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BEEEC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-7704
	ctx.r8.s64 = ctx.r8.s64 + -7704;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BEF20;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BEF28:
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

__attribute__((alias("__imp__sub_825BEF3C"))) PPC_WEAK_FUNC(sub_825BEF3C);
PPC_FUNC_IMPL(__imp__sub_825BEF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BEF40"))) PPC_WEAK_FUNC(sub_825BEF40);
PPC_FUNC_IMPL(__imp__sub_825BEF40) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf020
	if (!cr6.eq) goto loc_825BF020;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bef78
	if (!cr6.eq) goto loc_825BEF78;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BEF78:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825befa8
	if (cr6.eq) goto loc_825BEFA8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BEF8C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bef8c
	if (!cr6.eq) goto loc_825BEF8C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BEFA8:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825befb8
	if (!cr6.eq) goto loc_825BEFB8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BEFB8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825befe4
	if (cr6.eq) goto loc_825BEFE4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BEFC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825befc8
	if (!cr6.eq) goto loc_825BEFC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BEFE4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-7560
	ctx.r8.s64 = ctx.r8.s64 + -7560;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BF018;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BF020:
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

__attribute__((alias("__imp__sub_825BF034"))) PPC_WEAK_FUNC(sub_825BF034);
PPC_FUNC_IMPL(__imp__sub_825BF034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF038"))) PPC_WEAK_FUNC(sub_825BF038);
PPC_FUNC_IMPL(__imp__sub_825BF038) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf118
	if (!cr6.eq) goto loc_825BF118;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bf070
	if (!cr6.eq) goto loc_825BF070;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BF070:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825bf0a0
	if (cr6.eq) goto loc_825BF0A0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BF084:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bf084
	if (!cr6.eq) goto loc_825BF084;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BF0A0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825bf0b0
	if (!cr6.eq) goto loc_825BF0B0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BF0B0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825bf0dc
	if (cr6.eq) goto loc_825BF0DC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BF0C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bf0c0
	if (!cr6.eq) goto loc_825BF0C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BF0DC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-7416
	ctx.r8.s64 = ctx.r8.s64 + -7416;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BF110;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BF118:
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

__attribute__((alias("__imp__sub_825BF12C"))) PPC_WEAK_FUNC(sub_825BF12C);
PPC_FUNC_IMPL(__imp__sub_825BF12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF130"))) PPC_WEAK_FUNC(sub_825BF130);
PPC_FUNC_IMPL(__imp__sub_825BF130) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf210
	if (!cr6.eq) goto loc_825BF210;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bf168
	if (!cr6.eq) goto loc_825BF168;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BF168:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825bf198
	if (cr6.eq) goto loc_825BF198;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BF17C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bf17c
	if (!cr6.eq) goto loc_825BF17C;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BF198:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825bf1a8
	if (!cr6.eq) goto loc_825BF1A8;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BF1A8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825bf1d4
	if (cr6.eq) goto loc_825BF1D4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BF1B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bf1b8
	if (!cr6.eq) goto loc_825BF1B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BF1D4:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-7272
	ctx.r8.s64 = ctx.r8.s64 + -7272;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BF208;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BF210:
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

__attribute__((alias("__imp__sub_825BF224"))) PPC_WEAK_FUNC(sub_825BF224);
PPC_FUNC_IMPL(__imp__sub_825BF224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF228"))) PPC_WEAK_FUNC(sub_825BF228);
PPC_FUNC_IMPL(__imp__sub_825BF228) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf308
	if (!cr6.eq) goto loc_825BF308;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bf260
	if (!cr6.eq) goto loc_825BF260;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BF260:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825bf290
	if (cr6.eq) goto loc_825BF290;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BF274:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bf274
	if (!cr6.eq) goto loc_825BF274;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BF290:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825bf2a0
	if (!cr6.eq) goto loc_825BF2A0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BF2A0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825bf2cc
	if (cr6.eq) goto loc_825BF2CC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BF2B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bf2b0
	if (!cr6.eq) goto loc_825BF2B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BF2CC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-7128
	ctx.r8.s64 = ctx.r8.s64 + -7128;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BF300;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BF308:
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

__attribute__((alias("__imp__sub_825BF31C"))) PPC_WEAK_FUNC(sub_825BF31C);
PPC_FUNC_IMPL(__imp__sub_825BF31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF320"))) PPC_WEAK_FUNC(sub_825BF320);
PPC_FUNC_IMPL(__imp__sub_825BF320) {
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
	// bl 0x825be990
	ctx.lr = 0x825BF340;
	sub_825BE990(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bf360
	if (cr6.eq) goto loc_825BF360;
	// bl 0x82595188
	ctx.lr = 0x825BF350;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825BF360;
	sub_825952B8(ctx, base);
loc_825BF360:
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

__attribute__((alias("__imp__sub_825BF37C"))) PPC_WEAK_FUNC(sub_825BF37C);
PPC_FUNC_IMPL(__imp__sub_825BF37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF380"))) PPC_WEAK_FUNC(sub_825BF380);
PPC_FUNC_IMPL(__imp__sub_825BF380) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf3e4
	if (!cr6.eq) goto loc_825BF3E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF3B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF3CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bed50
	ctx.lr = 0x825BF3DC;
	sub_825BED50(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF3E4:
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

__attribute__((alias("__imp__sub_825BF3FC"))) PPC_WEAK_FUNC(sub_825BF3FC);
PPC_FUNC_IMPL(__imp__sub_825BF3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF400"))) PPC_WEAK_FUNC(sub_825BF400);
PPC_FUNC_IMPL(__imp__sub_825BF400) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf464
	if (!cr6.eq) goto loc_825BF464;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF44C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bee48
	ctx.lr = 0x825BF45C;
	sub_825BEE48(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF464:
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

__attribute__((alias("__imp__sub_825BF47C"))) PPC_WEAK_FUNC(sub_825BF47C);
PPC_FUNC_IMPL(__imp__sub_825BF47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF480"))) PPC_WEAK_FUNC(sub_825BF480);
PPC_FUNC_IMPL(__imp__sub_825BF480) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf4e4
	if (!cr6.eq) goto loc_825BF4E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF4B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF4CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bef40
	ctx.lr = 0x825BF4DC;
	sub_825BEF40(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF4E4:
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

__attribute__((alias("__imp__sub_825BF4FC"))) PPC_WEAK_FUNC(sub_825BF4FC);
PPC_FUNC_IMPL(__imp__sub_825BF4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF500"))) PPC_WEAK_FUNC(sub_825BF500);
PPC_FUNC_IMPL(__imp__sub_825BF500) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf524
	if (!cr6.eq) goto loc_825BF524;
	// bl 0x825bf480
	ctx.lr = 0x825BF524;
	sub_825BF480(ctx, base);
loc_825BF524:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf540
	if (!cr6.eq) goto loc_825BF540;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,228
	ctx.r10.s64 = ctx.r11.s64 + 228;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825BF540:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825BF558"))) PPC_WEAK_FUNC(sub_825BF558);
PPC_FUNC_IMPL(__imp__sub_825BF558) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf5bc
	if (!cr6.eq) goto loc_825BF5BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF58C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF5A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bf038
	ctx.lr = 0x825BF5B4;
	sub_825BF038(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF5BC:
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

__attribute__((alias("__imp__sub_825BF5D4"))) PPC_WEAK_FUNC(sub_825BF5D4);
PPC_FUNC_IMPL(__imp__sub_825BF5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF5D8"))) PPC_WEAK_FUNC(sub_825BF5D8);
PPC_FUNC_IMPL(__imp__sub_825BF5D8) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf5fc
	if (!cr6.eq) goto loc_825BF5FC;
	// bl 0x825bf558
	ctx.lr = 0x825BF5FC;
	sub_825BF558(ctx, base);
loc_825BF5FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf618
	if (!cr6.eq) goto loc_825BF618;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825BF618:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825BF630"))) PPC_WEAK_FUNC(sub_825BF630);
PPC_FUNC_IMPL(__imp__sub_825BF630) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf694
	if (!cr6.eq) goto loc_825BF694;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF67C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bf130
	ctx.lr = 0x825BF68C;
	sub_825BF130(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF694:
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

__attribute__((alias("__imp__sub_825BF6AC"))) PPC_WEAK_FUNC(sub_825BF6AC);
PPC_FUNC_IMPL(__imp__sub_825BF6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF6B0"))) PPC_WEAK_FUNC(sub_825BF6B0);
PPC_FUNC_IMPL(__imp__sub_825BF6B0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf6d4
	if (!cr6.eq) goto loc_825BF6D4;
	// bl 0x825bf630
	ctx.lr = 0x825BF6D4;
	sub_825BF630(ctx, base);
loc_825BF6D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf6f0
	if (!cr6.eq) goto loc_825BF6F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825BF6F0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825BF708"))) PPC_WEAK_FUNC(sub_825BF708);
PPC_FUNC_IMPL(__imp__sub_825BF708) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf76c
	if (!cr6.eq) goto loc_825BF76C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF73C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bf228
	ctx.lr = 0x825BF764;
	sub_825BF228(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF76C:
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

__attribute__((alias("__imp__sub_825BF784"))) PPC_WEAK_FUNC(sub_825BF784);
PPC_FUNC_IMPL(__imp__sub_825BF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF788"))) PPC_WEAK_FUNC(sub_825BF788);
PPC_FUNC_IMPL(__imp__sub_825BF788) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf7ac
	if (!cr6.eq) goto loc_825BF7AC;
	// bl 0x825bf708
	ctx.lr = 0x825BF7AC;
	sub_825BF708(ctx, base);
loc_825BF7AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf7c8
	if (!cr6.eq) goto loc_825BF7C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825BF7C8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_825BF7E0"))) PPC_WEAK_FUNC(sub_825BF7E0);
PPC_FUNC_IMPL(__imp__sub_825BF7E0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf804
	if (!cr6.eq) goto loc_825BF804;
	// bl 0x825bf708
	ctx.lr = 0x825BF804;
	sub_825BF708(ctx, base);
loc_825BF804:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf820
	if (!cr6.eq) goto loc_825BF820;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825BF820:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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

__attribute__((alias("__imp__sub_825BF838"))) PPC_WEAK_FUNC(sub_825BF838);
PPC_FUNC_IMPL(__imp__sub_825BF838) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf918
	if (!cr6.eq) goto loc_825BF918;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r11,-22544
	ctx.r10.s64 = ctx.r11.s64 + -22544;
	// bne cr6,0x825bf870
	if (!cr6.eq) goto loc_825BF870;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_825BF870:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x825bf8a0
	if (cr6.eq) goto loc_825BF8A0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_825BF884:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825bf884
	if (!cr6.eq) goto loc_825BF884;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825BF8A0:
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x825bf8b0
	if (!cr6.eq) goto loc_825BF8B0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_825BF8B0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x825bf8dc
	if (cr6.eq) goto loc_825BF8DC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825BF8C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bf8c0
	if (!cr6.eq) goto loc_825BF8C0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_825BF8DC:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r6,-31913
	ctx.r6.s64 = -2091450368;
	// addi r10,r11,-704
	ctx.r10.s64 = ctx.r11.s64 + -704;
	// addi r9,r9,18120
	ctx.r9.s64 = ctx.r9.s64 + 18120;
	// addi r8,r8,-7848
	ctx.r8.s64 = ctx.r8.s64 + -7848;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r6,10584
	ctx.r6.s64 = ctx.r6.s64 + 10584;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8353f448
	ctx.lr = 0x825BF910;
	sub_8353F448(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r5.u8);
loc_825BF918:
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

__attribute__((alias("__imp__sub_825BF92C"))) PPC_WEAK_FUNC(sub_825BF92C);
PPC_FUNC_IMPL(__imp__sub_825BF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF930"))) PPC_WEAK_FUNC(sub_825BF930);
PPC_FUNC_IMPL(__imp__sub_825BF930) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf994
	if (!cr6.eq) goto loc_825BF994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BF964;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BF97C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bf838
	ctx.lr = 0x825BF98C;
	sub_825BF838(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825BF994:
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

__attribute__((alias("__imp__sub_825BF9AC"))) PPC_WEAK_FUNC(sub_825BF9AC);
PPC_FUNC_IMPL(__imp__sub_825BF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF9B0"))) PPC_WEAK_FUNC(sub_825BF9B0);
PPC_FUNC_IMPL(__imp__sub_825BF9B0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf9d4
	if (!cr6.eq) goto loc_825BF9D4;
	// bl 0x825bf930
	ctx.lr = 0x825BF9D4;
	sub_825BF930(ctx, base);
loc_825BF9D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bf9f0
	if (!cr6.eq) goto loc_825BF9F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825BF9F0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_825BFA08"))) PPC_WEAK_FUNC(sub_825BFA08);
PPC_FUNC_IMPL(__imp__sub_825BFA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x825BFA10;
	__savegprlr_18(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x83102db0
	ctx.lr = 0x825BFA20;
	sub_83102DB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r10,32068
	ctx.r7.s64 = ctx.r10.s64 + 32068;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r6,r9,-19008
	ctx.r6.s64 = ctx.r9.s64 + -19008;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r5,r8,-19020
	ctx.r5.s64 = ctx.r8.s64 + -19020;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r11,r4,-24692
	ctx.r11.s64 = ctx.r4.s64 + -24692;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r10,r3,-22844
	ctx.r10.s64 = ctx.r3.s64 + -22844;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r7,r9,-19200
	ctx.r7.s64 = ctx.r9.s64 + -19200;
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// addi r6,r8,-19176
	ctx.r6.s64 = ctx.r8.s64 + -19176;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r3,r5,-19152
	ctx.r3.s64 = ctx.r5.s64 + -19152;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// addi r9,r4,-19116
	ctx.r9.s64 = ctx.r4.s64 + -19116;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r4,r8,-19088
	ctx.r4.s64 = ctx.r8.s64 + -19088;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// addi r11,r5,-19064
	ctx.r11.s64 = ctx.r5.s64 + -19064;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r27,r31,72
	ctx.r27.s64 = ctx.r31.s64 + 72;
	// stb r30,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r30.u8);
	// addi r26,r31,92
	ctx.r26.s64 = ctx.r31.s64 + 92;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r25,r31,112
	ctx.r25.s64 = ctx.r31.s64 + 112;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r6,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r6.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stb r30,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r30.u8);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stb r30,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r30.u8);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r9,r10,-19040
	ctx.r9.s64 = ctx.r10.s64 + -19040;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// addi r6,r8,-22152
	ctx.r6.s64 = ctx.r8.s64 + -22152;
	// stb r30,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r30.u8);
	// addi r5,r7,-24656
	ctx.r5.s64 = ctx.r7.s64 + -24656;
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// addi r19,r31,292
	ctx.r19.s64 = ctx.r31.s64 + 292;
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r29,r31,272
	ctx.r29.s64 = ctx.r31.s64 + 272;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// addi r24,r31,132
	ctx.r24.s64 = ctx.r31.s64 + 132;
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// addi r23,r31,152
	ctx.r23.s64 = ctx.r31.s64 + 152;
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// addi r22,r31,172
	ctx.r22.s64 = ctx.r31.s64 + 172;
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// addi r21,r31,192
	ctx.r21.s64 = ctx.r31.s64 + 192;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r20,r31,212
	ctx.r20.s64 = ctx.r31.s64 + 212;
	// stb r30,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r30.u8);
	// stw r6,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r6.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r6,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r6.u32);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r5,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r5.u32);
	// bl 0x82a0db20
	ctx.lr = 0x825BFBF0;
	sub_82A0DB20(ctx, base);
	// addi r18,r31,932
	ctx.r18.s64 = ctx.r31.s64 + 932;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x825e9340
	ctx.lr = 0x825BFBFC;
	sub_825E9340(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x825BFC04;
	sub_825AB6C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b4878
	ctx.lr = 0x825BFC0C;
	sub_825B4878(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825bf400
	ctx.lr = 0x825BFC14;
	sub_825BF400(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825bf480
	ctx.lr = 0x825BFC1C;
	sub_825BF480(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825bf558
	ctx.lr = 0x825BFC24;
	sub_825BF558(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825bf708
	ctx.lr = 0x825BFC2C;
	sub_825BF708(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825bf630
	ctx.lr = 0x825BFC34;
	sub_825BF630(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825bf930
	ctx.lr = 0x825BFC3C;
	sub_825BF930(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825bf380
	ctx.lr = 0x825BFC44;
	sub_825BF380(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r26,r11,-25152
	ctx.r26.s64 = ctx.r11.s64 + -25152;
	// addi r24,r10,-25140
	ctx.r24.s64 = ctx.r10.s64 + -25140;
	// addi r23,r9,-25136
	ctx.r23.s64 = ctx.r9.s64 + -25136;
loc_825BFC64:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,232
	ctx.r28.s64 = ctx.r11.s64 + 232;
	// lbz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 236);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bfccc
	if (!cr6.eq) goto loc_825BFCCC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// beq cr6,0x825bfc94
	if (cr6.eq) goto loc_825BFC94;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_825BFC94:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0b08
	ctx.lr = 0x825BFCA4;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BFCB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825BFCC8;
	sub_825A93F0(ctx, base);
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
loc_825BFCCC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x825bfc64
	if (cr6.lt) goto loc_825BFC64;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfd24
	if (!cr6.eq) goto loc_825BFD24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BFCF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BFD10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825a9668
	ctx.lr = 0x825BFD20;
	sub_825A9668(ctx, base);
	// stb r25,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r25.u8);
loc_825BFD24:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a22560
	ctx.lr = 0x825BFD2C;
	sub_82A22560(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a22540
	ctx.lr = 0x825BFD34;
	sub_82A22540(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a125c8
	ctx.lr = 0x825BFD40;
	sub_82A125C8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r10,r11,-3088
	ctx.r10.s64 = ctx.r11.s64 + -3088;
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// bl 0x825e91e8
	ctx.lr = 0x825BFD58;
	sub_825E91E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BFD64"))) PPC_WEAK_FUNC(sub_825BFD64);
PPC_FUNC_IMPL(__imp__sub_825BFD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BFD68"))) PPC_WEAK_FUNC(sub_825BFD68);
PPC_FUNC_IMPL(__imp__sub_825BFD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825BFD70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r28,r3,52
	ctx.r28.s64 = ctx.r3.s64 + 52;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfd94
	if (!cr6.eq) goto loc_825BFD94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x825BFD94;
	sub_825AB6C8(ctx, base);
loc_825BFD94:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfdb0
	if (!cr6.eq) goto loc_825BFDB0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,8888
	ctx.r10.s64 = ctx.r11.s64 + 8888;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
loc_825BFDB0:
	// addi r31,r24,236
	ctx.r31.s64 = ctx.r24.s64 + 236;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r26,1
	ctx.r26.s64 = 1;
loc_825BFDBC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfe0c
	if (!cr6.eq) goto loc_825BFE0C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BFDE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BFDF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x825a93f0
	ctx.lr = 0x825BFE08;
	sub_825A93F0(ctx, base);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
loc_825BFE0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfe28
	if (!cr6.eq) goto loc_825BFE28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,6684
	ctx.r10.s64 = ctx.r11.s64 + 6684;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825BFE28:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x825bfdbc
	if (!cr0.eq) goto loc_825BFDBC;
	// lbz r11,276(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 276);
	// addi r27,r24,272
	ctx.r27.s64 = ctx.r24.s64 + 272;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfe84
	if (!cr6.eq) goto loc_825BFE84;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BFE58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825BFE70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825a9668
	ctx.lr = 0x825BFE80;
	sub_825A9668(ctx, base);
	// stb r26,4(r27)
	PPC_STORE_U8(ctx.r27.u32 + 4, ctx.r26.u8);
loc_825BFE84:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825bfea0
	if (!cr6.eq) goto loc_825BFEA0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,5544
	ctx.r10.s64 = ctx.r11.s64 + 5544;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
loc_825BFEA0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825BFEB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825bff20
	if (cr6.eq) goto loc_825BFF20;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_825BFED0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bfed0
	if (!cr0.eq) goto loc_825BFED0;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bff1c
	if (!cr6.eq) goto loc_825BFF1C;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BFEFC;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-30512
	ctx.r5.s64 = ctx.r11.s64 + -30512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BFF1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BFF1C:
	// stw r25,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r25.u32);
loc_825BFF20:
	// addi r31,r24,248
	ctx.r31.s64 = ctx.r24.s64 + 248;
	// li r29,2
	ctx.r29.s64 = 2;
loc_825BFF28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bff8c
	if (cr6.eq) goto loc_825BFF8C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825BFF3C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bff3c
	if (!cr0.eq) goto loc_825BFF3C;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bff88
	if (!cr6.eq) goto loc_825BFF88;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BFF68;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,18008
	ctx.r5.s64 = ctx.r11.s64 + 18008;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BFF88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BFF88:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_825BFF8C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x825bff28
	if (!cr0.eq) goto loc_825BFF28;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825bfffc
	if (cr6.eq) goto loc_825BFFFC;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_825BFFAC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825bffac
	if (!cr0.eq) goto loc_825BFFAC;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825bfff8
	if (!cr6.eq) goto loc_825BFFF8;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825BFFD8;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,29080
	ctx.r5.s64 = ctx.r11.s64 + 29080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825BFFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BFFF8:
	// stw r25,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r25.u32);
loc_825BFFFC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C0010;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C0018"))) PPC_WEAK_FUNC(sub_825C0018);
PPC_FUNC_IMPL(__imp__sub_825C0018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825C0020;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0054
	if (cr6.eq) goto loc_825C0054;
	// lwz r11,7140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7140);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x825c0054
	if (!cr6.eq) goto loc_825C0054;
	// bl 0x825d8d28
	ctx.lr = 0x825C0054;
	sub_825D8D28(ctx, base);
loc_825C0054:
	// lbz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 56);
	// addi r30,r26,52
	ctx.r30.s64 = ctx.r26.s64 + 52;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c006c
	if (!cr6.eq) goto loc_825C006C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ab6c8
	ctx.lr = 0x825C006C;
	sub_825AB6C8(ctx, base);
loc_825C006C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0088
	if (!cr6.eq) goto loc_825C0088;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_825C0088:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x825c00b8
	if (cr6.eq) goto loc_825C00B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,5356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lfs f1,4464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,4460(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	// lwz r5,4456(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	// bl 0x82a56c28
	ctx.lr = 0x825C00AC;
	sub_82A56C28(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,5086(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5086);
	// bl 0x82a56d90
	ctx.lr = 0x825C00B8;
	sub_82A56D90(ctx, base);
loc_825C00B8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c00cc
	if (cr6.eq) goto loc_825C00CC;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
loc_825C00CC:
	// lbz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 116);
	// addi r29,r26,112
	ctx.r29.s64 = ctx.r26.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c00e4
	if (!cr6.eq) goto loc_825C00E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825bf480
	ctx.lr = 0x825C00E4;
	sub_825BF480(ctx, base);
loc_825C00E4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0100
	if (!cr6.eq) goto loc_825C0100;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_825C0100:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lfs f30,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x825c0160
	if (cr6.eq) goto loc_825C0160;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825C0120:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82a37b48
	ctx.lr = 0x825C0140;
	sub_82A37B48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a56cd8
	ctx.lr = 0x825C0154;
	sub_82A56CD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x825c0120
	if (cr6.lt) goto loc_825C0120;
loc_825C0160:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0170
	if (cr6.eq) goto loc_825C0170;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
loc_825C0170:
	// lbz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 176);
	// addi r29,r26,172
	ctx.r29.s64 = ctx.r26.s64 + 172;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0188
	if (!cr6.eq) goto loc_825C0188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825bf630
	ctx.lr = 0x825C0188;
	sub_825BF630(ctx, base);
loc_825C0188:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c01a4
	if (!cr6.eq) goto loc_825C01A4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
loc_825C01A4:
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825c01f4
	if (cr6.eq) goto loc_825C01F4;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_825C01B4:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82a37b48
	ctx.lr = 0x825C01D4;
	sub_82A37B48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82a56d30
	ctx.lr = 0x825C01E8;
	sub_82A56D30(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// blt cr6,0x825c01b4
	if (cr6.lt) goto loc_825C01B4;
loc_825C01F4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0204
	if (cr6.eq) goto loc_825C0204;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
loc_825C0204:
	// lbz r11,156(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 156);
	// addi r31,r26,152
	ctx.r31.s64 = ctx.r26.s64 + 152;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0258
	if (!cr6.eq) goto loc_825C0258;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C0228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825C0240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825bf228
	ctx.lr = 0x825C0250;
	sub_825BF228(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
loc_825C0258:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0274
	if (!cr6.eq) goto loc_825C0274;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_825C0274:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x825c02e4
	if (cr6.eq) goto loc_825C02E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8337abc0
	ctx.lr = 0x825C0288;
	sub_8337ABC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83586030
	ctx.lr = 0x825C0294;
	sub_83586030(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x83102db0
	ctx.lr = 0x825C02A0;
	sub_83102DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83ac1d80
	ctx.lr = 0x825C02AC;
	sub_83AC1D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x838c21a0
	ctx.lr = 0x825C02B8;
	sub_838C21A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838cb0f0
	ctx.lr = 0x825C02C4;
	sub_838CB0F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a57790
	ctx.lr = 0x825C02E4;
	sub_82A57790(ctx, base);
loc_825C02E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c02f4
	if (cr6.eq) goto loc_825C02F4;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_825C02F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C0308"))) PPC_WEAK_FUNC(sub_825C0308);
PPC_FUNC_IMPL(__imp__sub_825C0308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x825C0310;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,292
	ctx.r23.s64 = ctx.r3.s64 + 292;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a18a78
	ctx.lr = 0x825C0330;
	sub_82A18A78(ctx, base);
	// addi r22,r30,932
	ctx.r22.s64 = ctx.r30.s64 + 932;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825e91e8
	ctx.lr = 0x825C033C;
	sub_825E91E8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x825d8948
	ctx.lr = 0x825C034C;
	sub_825D8948(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r4,424(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// stb r29,48(r30)
	PPC_STORE_U8(ctx.r30.u32 + 48, ctx.r29.u8);
	// bl 0x829eeae0
	ctx.lr = 0x825C0360;
	sub_829EEAE0(ctx, base);
	// lbz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// addi r31,r30,92
	ctx.r31.s64 = ctx.r30.s64 + 92;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0378
	if (!cr6.eq) goto loc_825C0378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf400
	ctx.lr = 0x825C0378;
	sub_825BF400(ctx, base);
loc_825C0378:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0394
	if (!cr6.eq) goto loc_825C0394;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,552
	ctx.r10.s64 = ctx.r11.s64 + 552;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825C0394:
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825c03c0
	if (cr6.eq) goto loc_825C03C0;
	// bl 0x830ff290
	ctx.lr = 0x825C03A4;
	sub_830FF290(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a36e10
	ctx.lr = 0x825C03B0;
	sub_82A36E10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x825C03C0;
	sub_83102DB0(ctx, base);
loc_825C03C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c03d8
	if (cr6.eq) goto loc_825C03D8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825be898
	ctx.lr = 0x825C03D4;
	sub_825BE898(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825C03D8:
	// lbz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c03f0
	if (!cr6.eq) goto loc_825C03F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf480
	ctx.lr = 0x825C03F0;
	sub_825BF480(ctx, base);
loc_825C03F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c040c
	if (!cr6.eq) goto loc_825C040C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,228
	ctx.r10.s64 = ctx.r11.s64 + 228;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825C040C:
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825c0428
	if (cr6.eq) goto loc_825C0428;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a37260
	ctx.lr = 0x825C0420;
	sub_82A37260(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a37008
	ctx.lr = 0x825C0428;
	sub_82A37008(ctx, base);
loc_825C0428:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0440
	if (cr6.eq) goto loc_825C0440;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bdbd0
	ctx.lr = 0x825C043C;
	sub_825BDBD0(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825C0440:
	// lbz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// addi r31,r30,132
	ctx.r31.s64 = ctx.r30.s64 + 132;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0458
	if (!cr6.eq) goto loc_825C0458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf558
	ctx.lr = 0x825C0458;
	sub_825BF558(ctx, base);
loc_825C0458:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0474
	if (!cr6.eq) goto loc_825C0474;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825C0474:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0484
	if (cr6.eq) goto loc_825C0484;
	// bl 0x82a37700
	ctx.lr = 0x825C0484;
	sub_82A37700(ctx, base);
loc_825C0484:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c049c
	if (cr6.eq) goto loc_825C049C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bd3a8
	ctx.lr = 0x825C0498;
	sub_825BD3A8(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825C049C:
	// lbz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// addi r31,r30,172
	ctx.r31.s64 = ctx.r30.s64 + 172;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c04b4
	if (!cr6.eq) goto loc_825C04B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf630
	ctx.lr = 0x825C04B4;
	sub_825BF630(ctx, base);
loc_825C04B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c04d0
	if (!cr6.eq) goto loc_825C04D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,288
	ctx.r10.s64 = ctx.r11.s64 + 288;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825C04D0:
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x825c04ec
	if (cr6.eq) goto loc_825C04EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a37f58
	ctx.lr = 0x825C04E4;
	sub_82A37F58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a37bf8
	ctx.lr = 0x825C04EC;
	sub_82A37BF8(ctx, base);
loc_825C04EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0504
	if (cr6.eq) goto loc_825C0504;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825bde80
	ctx.lr = 0x825C0500;
	sub_825BDE80(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825C0504:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c051c
	if (!cr6.eq) goto loc_825C051C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825bf708
	ctx.lr = 0x825C051C;
	sub_825BF708(ctx, base);
loc_825C051C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0538
	if (!cr6.eq) goto loc_825C0538;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825C0538:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c054c
	if (cr6.eq) goto loc_825C054C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82a38698
	ctx.lr = 0x825C054C;
	sub_82A38698(ctx, base);
loc_825C054C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0564
	if (cr6.eq) goto loc_825C0564;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825be018
	ctx.lr = 0x825C0560;
	sub_825BE018(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_825C0564:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,288(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x825e8978
	ctx.lr = 0x825C0574;
	sub_825E8978(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x825d89c0
	ctx.lr = 0x825C057C;
	sub_825D89C0(ctx, base);
	// lbz r11,1828(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1828);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0678
	if (cr6.eq) goto loc_825C0678;
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// addi r24,r30,72
	ctx.r24.s64 = ctx.r30.s64 + 72;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c05a0
	if (!cr6.eq) goto loc_825C05A0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x825b4878
	ctx.lr = 0x825C05A0;
	sub_825B4878(ctx, base);
loc_825C05A0:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c05bc
	if (!cr6.eq) goto loc_825C05BC;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r10.u32);
loc_825C05BC:
	// lwz r25,16(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x825c0660
	if (cr6.eq) goto loc_825C0660;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r27,r30,1832
	ctx.r27.s64 = ctx.r30.s64 + 1832;
loc_825C05D0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x825c05e0
	if (cr6.lt) goto loc_825C05E0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825C05E0:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// bge cr6,0x825c0650
	if (!cr6.lt) goto loc_825C0650;
	// li r4,2
	ctx.r4.s64 = 2;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x825c0618
	if (cr6.lt) goto loc_825C0618;
	// li r11,11
	ctx.r11.s64 = 11;
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addc r8,r9,r10
	temp.u8 = ctx.r9.u32 + ctx.r10.u32 < ctx.r9.u32;
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	xer.ca = temp.u8;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ctx.r4.u64;
loc_825C0618:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a504f0
	ctx.lr = 0x825C0620;
	sub_82A504F0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bge cr6,0x825c0638
	if (!cr6.lt) goto loc_825C0638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82583338
	ctx.lr = 0x825C0638;
	sub_82583338(ctx, base);
loc_825C0638:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a321c8
	ctx.lr = 0x825C0644;
	sub_82A321C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a24528
	ctx.lr = 0x825C0650;
	sub_82A24528(ctx, base);
loc_825C0650:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,24
	cr6.compare<uint32_t>(ctx.r26.u32, 24, xer);
	// blt cr6,0x825c05d0
	if (cr6.lt) goto loc_825C05D0;
loc_825C0660:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0678
	if (cr6.eq) goto loc_825C0678;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x825C0674;
	sub_825B3120(ctx, base);
	// stw r29,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r29.u32);
loc_825C0678:
	// lwz r11,936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x825c06b8
	if (!cr6.eq) goto loc_825C06B8;
	// addi r28,r31,5356
	ctx.r28.s64 = ctx.r31.s64 + 5356;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a19b88
	ctx.lr = 0x825C0694;
	sub_82A19B88(ctx, base);
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// bl 0x82a19c88
	ctx.lr = 0x825C069C;
	sub_82A19C88(ctx, base);
	// addi r3,r31,5464
	ctx.r3.s64 = ctx.r31.s64 + 5464;
	// bl 0x82a19d28
	ctx.lr = 0x825C06A4;
	sub_82A19D28(ctx, base);
	// addi r3,r31,5180
	ctx.r3.s64 = ctx.r31.s64 + 5180;
	// bl 0x82a19b58
	ctx.lr = 0x825C06AC;
	sub_82A19B58(ctx, base);
	// addi r3,r31,5192
	ctx.r3.s64 = ctx.r31.s64 + 5192;
	// bl 0x82a199d0
	ctx.lr = 0x825C06B4;
	sub_82A199D0(ctx, base);
	// b 0x825c098c
	goto loc_825C098C;
loc_825C06B8:
	// lwz r11,1928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// addi r26,r30,1928
	ctx.r26.s64 = ctx.r30.s64 + 1928;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825c0808
	if (cr6.eq) goto loc_825C0808;
	// lbz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 196);
	// addi r28,r30,192
	ctx.r28.s64 = ctx.r30.s64 + 192;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c06e4
	if (!cr6.eq) goto loc_825C06E4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825bf930
	ctx.lr = 0x825C06E4;
	sub_825BF930(ctx, base);
loc_825C06E4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c0700
	if (!cr6.eq) goto loc_825C0700;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
loc_825C0700:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0714
	if (cr6.eq) goto loc_825C0714;
	// bl 0x82a47d40
	ctx.lr = 0x825C0710;
	sub_82A47D40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_825C0714:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0724
	if (cr6.eq) goto loc_825C0724;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
loc_825C0724:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r28,r31,5356
	ctx.r28.s64 = ctx.r31.s64 + 5356;
	// bl 0x825d8b20
	ctx.lr = 0x825C0730;
	sub_825D8B20(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0754
	if (cr6.eq) goto loc_825C0754;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x825c0754
	if (cr6.eq) goto loc_825C0754;
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0760
	if (cr6.eq) goto loc_825C0760;
loc_825C0754:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a19bd0
	ctx.lr = 0x825C0760;
	sub_82A19BD0(ctx, base);
loc_825C0760:
	// addi r27,r31,5404
	ctx.r27.s64 = ctx.r31.s64 + 5404;
	// addi r4,r30,1976
	ctx.r4.s64 = ctx.r30.s64 + 1976;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x825C0774;
	sub_831CE980(ctx, base);
	// addi r28,r31,5464
	ctx.r28.s64 = ctx.r31.s64 + 5464;
	// addi r4,r30,2084
	ctx.r4.s64 = ctx.r30.s64 + 2084;
	// li r5,180
	ctx.r5.s64 = 180;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x825C0788;
	sub_831CE980(ctx, base);
	// lwz r11,5476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5476);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x825c07f8
	if (cr6.eq) goto loc_825C07F8;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x825c07f8
	if (cr6.eq) goto loc_825C07F8;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825c07f8
	if (cr6.eq) goto loc_825C07F8;
	// addi r27,r30,72
	ctx.r27.s64 = ctx.r30.s64 + 72;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b4950
	ctx.lr = 0x825C07B8;
	sub_825B4950(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c07e0
	if (cr6.eq) goto loc_825C07E0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x825c07d0
	if (cr6.lt) goto loc_825C07D0;
	// li r11,23
	ctx.r11.s64 = 23;
loc_825C07D0:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
loc_825C07E0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c07f8
	if (cr6.eq) goto loc_825C07F8;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x825b3120
	ctx.lr = 0x825C07F4;
	sub_825B3120(ctx, base);
	// stw r29,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r29.u32);
loc_825C07F8:
	// addi r4,r30,1668
	ctx.r4.s64 = ctx.r30.s64 + 1668;
	// addi r3,r31,5192
	ctx.r3.s64 = ctx.r31.s64 + 5192;
	// li r5,148
	ctx.r5.s64 = 148;
	// bl 0x831ce980
	ctx.lr = 0x825C0808;
	sub_831CE980(ctx, base);
loc_825C0808:
	// lbz r11,984(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0824
	if (cr6.eq) goto loc_825C0824;
	// addi r4,r30,1976
	ctx.r4.s64 = ctx.r30.s64 + 1976;
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x825C0824;
	sub_831CE980(ctx, base);
loc_825C0824:
	// lbz r11,1020(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0840
	if (cr6.eq) goto loc_825C0840;
	// addi r4,r30,1976
	ctx.r4.s64 = ctx.r30.s64 + 1976;
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x831ce980
	ctx.lr = 0x825C0840;
	sub_831CE980(ctx, base);
loc_825C0840:
	// lwz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x825c08e0
	if (!cr6.eq) goto loc_825C08E0;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,8144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825c088c
	if (!cr6.gt) goto loc_825C088C;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x825c08a0
	goto loc_825C08A0;
loc_825C088C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825c089c
	if (!cr6.lt) goto loc_825C089C;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x825c08a0
	goto loc_825C08A0;
loc_825C089C:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_825C08A0:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8152);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825c08c0
	if (!cr6.gt) goto loc_825C08C0;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x825c0968
	goto loc_825C0968;
loc_825C08C0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825c08d4
	if (!cr6.lt) goto loc_825C08D4;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x825c0968
	goto loc_825C0968;
loc_825C08D4:
	// stfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x825c0968
	goto loc_825C0968;
loc_825C08E0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825c0964
	if (!cr6.eq) goto loc_825C0964;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,6112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,8144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825c0934
	if (!cr6.gt) goto loc_825C0934;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,5372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x825c0968
	goto loc_825C0968;
loc_825C0934:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x825c0950
	if (!cr6.lt) goto loc_825C0950;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,5372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x825c0968
	goto loc_825C0968;
loc_825C0950:
	// stfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,5372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x825c0968
	goto loc_825C0968;
loc_825C0964:
	// addi r4,r31,5376
	ctx.r4.s64 = ctx.r31.s64 + 5376;
loc_825C0968:
	// addi r28,r31,5356
	ctx.r28.s64 = ctx.r31.s64 + 5356;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a19c68
	ctx.lr = 0x825C0974;
	sub_82A19C68(ctx, base);
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c098c
	if (cr6.eq) goto loc_825C098C;
	// addi r4,r30,1936
	ctx.r4.s64 = ctx.r30.s64 + 1936;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a19c30
	ctx.lr = 0x825C098C;
	sub_82A19C30(ctx, base);
loc_825C098C:
	// lwz r11,1960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x825c09a4
	if (!cr6.eq) goto loc_825C09A4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dab6e0
	ctx.lr = 0x825C09A4;
	sub_82DAB6E0(ctx, base);
loc_825C09A4:
	// lbz r11,5272(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a1a6f8
	ctx.lr = 0x825C09B8;
	sub_82A1A6F8(ctx, base);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lwz r3,-19692(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c09d4
	if (cr6.eq) goto loc_825C09D4;
	// addi r5,r31,5740
	ctx.r5.s64 = ctx.r31.s64 + 5740;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x825ada68
	ctx.lr = 0x825C09D4;
	sub_825ADA68(ctx, base);
loc_825C09D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,5328(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5328);
	// bl 0x82a1a710
	ctx.lr = 0x825C09E0;
	sub_82A1A710(ctx, base);
	// lwz r11,2036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2036);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r11.u32);
	// lwz r10,2040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2040);
	// stw r10,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r10.u32);
	// lwz r9,2044(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2044);
	// stw r9,5352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5352, ctx.r9.u32);
	// lfs f1,5324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a1a668
	ctx.lr = 0x825C0A04;
	sub_82A1A668(ctx, base);
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r30,944
	ctx.r11.s64 = ctx.r30.s64 + 944;
	// addi r10,r31,4468
	ctx.r10.s64 = ctx.r31.s64 + 4468;
	// stw r8,4456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4456, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// stw r7,4460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4460, ctx.r7.u32);
	// lwz r6,8(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// stw r6,4464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4464, ctx.r6.u32);
	// lwz r5,12(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// stw r5,4468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4468, ctx.r5.u32);
loc_825C0A34:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825c0a34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825C0A34;
	// addi r4,r30,972
	ctx.r4.s64 = ctx.r30.s64 + 972;
	// addi r3,r31,4496
	ctx.r3.s64 = ctx.r31.s64 + 4496;
	// bl 0x825a4738
	ctx.lr = 0x825C0A4C;
	sub_825A4738(ctx, base);
	// addi r11,r31,5116
	ctx.r11.s64 = ctx.r31.s64 + 5116;
	// addi r11,r30,1604
	ctx.r11.s64 = ctx.r30.s64 + 1604;
	// addi r4,r30,1032
	ctx.r4.s64 = ctx.r30.s64 + 1032;
	// addi r3,r31,4556
	ctx.r3.s64 = ctx.r31.s64 + 4556;
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r11,5116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5116, ctx.r11.u32);
	// lbz r10,1608(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1608);
	// stb r10,5120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5120, ctx.r10.u8);
	// lwz r9,1612(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r9,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r9.u32);
	// lwz r8,1616(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r8,5128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5128, ctx.r8.u32);
	// lwz r7,1620(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r7,5132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5132, ctx.r7.u32);
	// lwz r6,1624(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r6,5136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5136, ctx.r6.u32);
	// lwz r5,1628(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// stw r5,5140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5140, ctx.r5.u32);
	// lwz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r11,5144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5144, ctx.r11.u32);
	// lwz r10,1636(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// stw r10,5148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5148, ctx.r10.u32);
	// lfs f0,1640(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5152, temp.u32);
	// lfs f13,1644(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5156, temp.u32);
	// lfs f12,1648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,5160(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5160, temp.u32);
	// lbz r9,1652(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1652);
	// stb r9,5164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5164, ctx.r9.u8);
	// lbz r8,1653(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1653);
	// stb r8,5165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5165, ctx.r8.u8);
	// lfs f11,1656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,5168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5168, temp.u32);
	// lfs f10,1660(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,5172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5172, temp.u32);
	// lwz r7,1664(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r7,5176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5176, ctx.r7.u32);
	// bl 0x825a4838
	ctx.lr = 0x825C0AE8;
	sub_825A4838(ctx, base);
	// lwz r6,1816(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r27,r30,1816
	ctx.r27.s64 = ctx.r30.s64 + 1816;
	// stw r6,5340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5340, ctx.r6.u32);
loc_825C0AF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r5,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1a648
	ctx.lr = 0x825C0B08;
	sub_82A1A648(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x825c0af8
	if (cr6.lt) goto loc_825C0AF8;
	// addi r28,r30,5280
	ctx.r28.s64 = ctx.r30.s64 + 5280;
	// addi r27,r30,5302
	ctx.r27.s64 = ctx.r30.s64 + 5302;
loc_825C0B1C:
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a1a678
	ctx.lr = 0x825C0B34;
	sub_82A1A678(ctx, base);
	// lbzx r9,r27,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r5,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82a1a6b8
	ctx.lr = 0x825C0B4C;
	sub_82A1A6B8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// blt cr6,0x825c0b1c
	if (cr6.lt) goto loc_825C0B1C;
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// addi r4,r30,2264
	ctx.r4.s64 = ctx.r30.s64 + 2264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r11.u32);
	// lwz r10,1596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r10,5184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5184, ctx.r10.u32);
	// lwz r9,1600(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r9,5188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5188, ctx.r9.u32);
	// bl 0x82a1ba50
	ctx.lr = 0x825C0B7C;
	sub_82A1BA50(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc380
	ctx.lr = 0x825C0B8C;
	sub_825BC380(ctx, base);
	// addi r5,r30,1976
	ctx.r5.s64 = ctx.r30.s64 + 1976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,248(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x825bc210
	ctx.lr = 0x825C0BA8;
	sub_825BC210(ctx, base);
	// addi r5,r30,2048
	ctx.r5.s64 = ctx.r30.s64 + 2048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bcc98
	ctx.lr = 0x825C0BB8;
	sub_825BCC98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bce40
	ctx.lr = 0x825C0BC4;
	sub_825BCE40(ctx, base);
	// addi r5,r30,1668
	ctx.r5.s64 = ctx.r30.s64 + 1668;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bc2e8
	ctx.lr = 0x825C0BD4;
	sub_825BC2E8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C0BDC"))) PPC_WEAK_FUNC(sub_825C0BDC);
PPC_FUNC_IMPL(__imp__sub_825C0BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0BE0"))) PPC_WEAK_FUNC(sub_825C0BE0);
PPC_FUNC_IMPL(__imp__sub_825C0BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r31,2
	ctx.r31.s64 = 2;
loc_825C0BFC:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83102db0
	ctx.lr = 0x825C0C04;
	sub_83102DB0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x825c0bfc
	if (!cr0.eq) goto loc_825C0BFC;
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

__attribute__((alias("__imp__sub_825C0C24"))) PPC_WEAK_FUNC(sub_825C0C24);
PPC_FUNC_IMPL(__imp__sub_825C0C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0C28"))) PPC_WEAK_FUNC(sub_825C0C28);
PPC_FUNC_IMPL(__imp__sub_825C0C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x825C0C30;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3088
	ctx.r9.s64 = ctx.r11.s64 + -3088;
	// addi r8,r10,-18296
	ctx.r8.s64 = ctx.r10.s64 + -18296;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r29.u32);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c0ca0
	if (cr6.eq) goto loc_825C0CA0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C0C74;
	sub_82595150(ctx, base);
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0c94
	if (cr6.eq) goto loc_825C0C94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C0C94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C0C94:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C0C9C;
	sub_82595170(ctx, base);
	// stw r29,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r29.u32);
loc_825C0CA0:
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// li r30,2
	ctx.r30.s64 = 2;
loc_825C0CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0cf0
	if (cr6.eq) goto loc_825C0CF0;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C0CC4;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0ce4
	if (cr6.eq) goto loc_825C0CE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C0CE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C0CE4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C0CEC;
	sub_82595170(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825C0CF0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825c0ca8
	if (!cr0.eq) goto loc_825C0CA8;
	// addi r30,r26,756
	ctx.r30.s64 = ctx.r26.s64 + 756;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r28,r11,-24712
	ctx.r28.s64 = ctx.r11.s64 + -24712;
loc_825C0D10:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// stwu r28,-20(r30)
	ea = -20 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lbz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0d48
	if (cr6.eq) goto loc_825C0D48;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c0d48
	if (cr6.eq) goto loc_825C0D48;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825C0D44;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825C0D48:
	// stb r29,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r29.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c0d70
	if (cr6.eq) goto loc_825C0D70;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825C0D6C;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825C0D70:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge 0x825c0d10
	if (!cr0.lt) goto loc_825C0D10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,700(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 700);
	// addi r30,r26,696
	ctx.r30.s64 = ctx.r26.s64 + 696;
	// addi r9,r11,-9704
	ctx.r9.s64 = ctx.r11.s64 + -9704;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,696(r26)
	PPC_STORE_U32(ctx.r26.u32 + 696, ctx.r9.u32);
	// beq cr6,0x825c0dbc
	if (cr6.eq) goto loc_825C0DBC;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c0dbc
	if (cr6.eq) goto loc_825C0DBC;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825C0DB8;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825C0DBC:
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825c0de8
	if (cr6.eq) goto loc_825C0DE8;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8353f3b8
	ctx.lr = 0x825C0DE4;
	sub_8353F3B8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_825C0DE8:
	// addi r3,r26,56
	ctx.r3.s64 = ctx.r26.s64 + 56;
	// bl 0x82a0dc70
	ctx.lr = 0x825C0DF0;
	sub_82A0DC70(ctx, base);
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0e14
	if (cr6.eq) goto loc_825C0E14;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825c0e14
	if (cr6.eq) goto loc_825C0E14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82468ef8
	ctx.lr = 0x825C0E14;
	sub_82468EF8(ctx, base);
loc_825C0E14:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x825C0E20;
	sub_8241F040(ctx, base);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x825C0E28;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fa70
	ctx.lr = 0x825C0E34;
	sub_8241FA70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241fb00
	ctx.lr = 0x825C0E3C;
	sub_8241FB00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x825C0E48;
	sub_8241F040(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C0E5C"))) PPC_WEAK_FUNC(sub_825C0E5C);
PPC_FUNC_IMPL(__imp__sub_825C0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0E60"))) PPC_WEAK_FUNC(sub_825C0E60);
PPC_FUNC_IMPL(__imp__sub_825C0E60) {
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
	// bl 0x825c0c28
	ctx.lr = 0x825C0E80;
	sub_825C0C28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c0ea0
	if (cr6.eq) goto loc_825C0EA0;
	// bl 0x82595188
	ctx.lr = 0x825C0E90;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825C0EA0;
	sub_825952B8(ctx, base);
loc_825C0EA0:
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

__attribute__((alias("__imp__sub_825C0EBC"))) PPC_WEAK_FUNC(sub_825C0EBC);
PPC_FUNC_IMPL(__imp__sub_825C0EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0EC0"))) PPC_WEAK_FUNC(sub_825C0EC0);
PPC_FUNC_IMPL(__imp__sub_825C0EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825C0EC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-18296
	ctx.r10.s64 = ctx.r11.s64 + -18296;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x825C0EF8;
	sub_8241F040(ctx, base);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x8241fb80
	ctx.lr = 0x825C0F00;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241fa28
	ctx.lr = 0x825C0F0C;
	sub_8241FA28(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x825C0F1C;
	sub_8241F040(ctx, base);
	// bl 0x8241fb80
	ctx.lr = 0x825C0F20;
	sub_8241FB80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241fa70
	ctx.lr = 0x825C0F2C;
	sub_8241FA70(ctx, base);
	// addi r27,r31,56
	ctx.r27.s64 = ctx.r31.s64 + 56;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a0db20
	ctx.lr = 0x825C0F38;
	sub_82A0DB20(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stb r29,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r29.u8);
	// addi r7,r9,-22844
	ctx.r7.s64 = ctx.r9.s64 + -22844;
	// stw r29,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r29.u32);
	// stw r29,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r29.u32);
	// addi r6,r8,-22152
	ctx.r6.s64 = ctx.r8.s64 + -22152;
	// stw r29,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r7.u32);
	// addi r28,r31,696
	ctx.r28.s64 = ctx.r31.s64 + 696;
	// stb r29,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r29.u8);
	// stw r29,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r29.u32);
	// stw r29,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r29.u32);
	// stw r29,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r29.u32);
	// stw r6,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r6.u32);
	// stb r29,740(r31)
	PPC_STORE_U8(ctx.r31.u32 + 740, ctx.r29.u8);
	// stw r29,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r29.u32);
	// stw r29,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r29.u32);
	// stw r29,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r29.u32);
	// stw r6,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r6.u32);
	// bl 0x82a22560
	ctx.lr = 0x825C0F90;
	sub_82A22560(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22540
	ctx.lr = 0x825C0F98;
	sub_82A22540(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a125c8
	ctx.lr = 0x825C0FA4;
	sub_82A125C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a12748
	ctx.lr = 0x825C0FAC;
	sub_82A12748(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r26,32
	ctx.r26.s64 = 32;
	// li r25,1
	ctx.r25.s64 = 1;
loc_825C0FB8:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25860
	ctx.r4.s64 = 25860;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x825C0FCC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0fe0
	if (cr6.eq) goto loc_825C0FE0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82660a88
	ctx.lr = 0x825C0FDC;
	sub_82660A88(ctx, base);
	// b 0x825c0fe4
	goto loc_825C0FE4;
loc_825C0FE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825C0FE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c101c
	if (cr6.eq) goto loc_825C101C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// bl 0x82652130
	ctx.lr = 0x825C1018;
	sub_82652130(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825C101C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r30,r10,716
	ctx.r30.s64 = ctx.r10.s64 + 716;
	// lbz r9,720(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 720);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825c1074
	if (!cr6.eq) goto loc_825C1074;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C1050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a145d8
	ctx.lr = 0x825C105C;
	sub_82A145D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x825a9f08
	ctx.lr = 0x825C106C;
	sub_825A9F08(ctx, base);
	// stb r25,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825C1074:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x825c0fb8
	if (cr6.lt) goto loc_825C0FB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825C108C;
	sub_82A0CC80(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1376
	ctx.r4.s64 = 1376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x825C10A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c10b0
	if (cr6.eq) goto loc_825C10B0;
	// bl 0x825eb458
	ctx.lr = 0x825C10AC;
	sub_825EB458(ctx, base);
	// b 0x825c10b4
	goto loc_825C10B4;
loc_825C10B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825C10B4:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c1104
	if (!cr6.eq) goto loc_825C1104;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C10D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825C10F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825b4328
	ctx.lr = 0x825C1100;
	sub_825B4328(ctx, base);
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
loc_825C1104:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// stb r29,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3088
	ctx.r10.s64 = ctx.r11.s64 + -3088;
	// stw r31,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1124"))) PPC_WEAK_FUNC(sub_825C1124);
PPC_FUNC_IMPL(__imp__sub_825C1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1128"))) PPC_WEAK_FUNC(sub_825C1128);
PPC_FUNC_IMPL(__imp__sub_825C1128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x825C1130;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,56
	ctx.r24.s64 = ctx.r3.s64 + 56;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a12748
	ctx.lr = 0x825C1144;
	sub_82A12748(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// beq cr6,0x825c1360
	if (cr6.eq) goto loc_825C1360;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r25,r27,732
	ctx.r25.s64 = ctx.r27.s64 + 732;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// ori r28,r11,44768
	ctx.r28.u64 = ctx.r11.u64 | 44768;
loc_825C1178:
	// lbz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c118c
	if (!cr6.eq) goto loc_825C118C;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x825aa158
	ctx.lr = 0x825C118C;
	sub_825AA158(ctx, base);
loc_825C118C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c11a8
	if (!cr6.eq) goto loc_825C11A8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_825C11A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x825c1178
	if (!cr0.eq) goto loc_825C1178;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r30,r27,12
	ctx.r30.s64 = ctx.r27.s64 + 12;
	// li r29,2
	ctx.r29.s64 = 2;
loc_825C11C8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c11e0
	if (cr6.eq) goto loc_825C11E0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82662e40
	ctx.lr = 0x825C11E0;
	sub_82662E40(ctx, base);
loc_825C11E0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x825c11c8
	if (!cr0.eq) goto loc_825C11C8;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c12e8
	if (cr6.eq) goto loc_825C12E8;
	// lbz r11,700(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 700);
	// addi r31,r27,696
	ctx.r31.s64 = ctx.r27.s64 + 696;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c1254
	if (!cr6.eq) goto loc_825C1254;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C1228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825C1240;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x825b4328
	ctx.lr = 0x825C1250;
	sub_825B4328(ctx, base);
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
loc_825C1254:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c1270
	if (!cr6.eq) goto loc_825C1270;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r11,4336
	ctx.r10.s64 = ctx.r11.s64 + 4336;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_825C1270:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x825f6268
	ctx.lr = 0x825C1284;
	sub_825F6268(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c12e8
	if (cr6.eq) goto loc_825C12E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825C1298:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r28,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825c1298
	if (!cr0.eq) goto loc_825C1298;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c12e4
	if (!cr6.eq) goto loc_825C12E4;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825C12C4;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,12320
	ctx.r5.s64 = ctx.r11.s64 + 12320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825C12E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C12E4:
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_825C12E8:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r29,2
	ctx.r29.s64 = 2;
loc_825C12F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1354
	if (cr6.eq) goto loc_825C1354;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_825C1304:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r28,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x825c1304
	if (!cr0.eq) goto loc_825C1304;
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c1350
	if (!cr6.eq) goto loc_825C1350;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8353f380
	ctx.lr = 0x825C1330;
	sub_8353F380(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,29056
	ctx.r5.s64 = ctx.r11.s64 + 29056;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825C1350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C1350:
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_825C1354:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x825c12f0
	if (!cr0.eq) goto loc_825C12F0;
loc_825C1360:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825C1368;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1370"))) PPC_WEAK_FUNC(sub_825C1370);
PPC_FUNC_IMPL(__imp__sub_825C1370) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r9,-3088
	ctx.r7.s64 = ctx.r9.s64 + -3088;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-18056
	ctx.r8.s64 = ctx.r10.s64 + -18056;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1398"))) PPC_WEAK_FUNC(sub_825C1398);
PPC_FUNC_IMPL(__imp__sub_825C1398) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,-3088
	ctx.r9.s64 = ctx.r11.s64 + -3088;
	// addi r8,r10,-18056
	ctx.r8.s64 = ctx.r10.s64 + -18056;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r30.u32);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825c1418
	if (cr6.eq) goto loc_825C1418;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C13EC;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c140c
	if (cr6.eq) goto loc_825C140C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C140C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C140C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C1414;
	sub_82595170(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_825C1418:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,-32552
	ctx.r10.s64 = ctx.r11.s64 + -32552;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_825C143C"))) PPC_WEAK_FUNC(sub_825C143C);
PPC_FUNC_IMPL(__imp__sub_825C143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1440"))) PPC_WEAK_FUNC(sub_825C1440);
PPC_FUNC_IMPL(__imp__sub_825C1440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x825f7288
	sub_825F7288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1450"))) PPC_WEAK_FUNC(sub_825C1450);
PPC_FUNC_IMPL(__imp__sub_825C1450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1454"))) PPC_WEAK_FUNC(sub_825C1454);
PPC_FUNC_IMPL(__imp__sub_825C1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1458"))) PPC_WEAK_FUNC(sub_825C1458);
PPC_FUNC_IMPL(__imp__sub_825C1458) {
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
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x825C1484;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1494
	if (cr6.eq) goto loc_825C1494;
	// bl 0x825f73f0
	ctx.lr = 0x825C1490;
	sub_825F73F0(ctx, base);
	// b 0x825c1498
	goto loc_825C1498;
loc_825C1494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1498:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x825f7340
	ctx.lr = 0x825C14A0;
	sub_825F7340(ctx, base);
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

__attribute__((alias("__imp__sub_825C14B4"))) PPC_WEAK_FUNC(sub_825C14B4);
PPC_FUNC_IMPL(__imp__sub_825C14B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C14B8"))) PPC_WEAK_FUNC(sub_825C14B8);
PPC_FUNC_IMPL(__imp__sub_825C14B8) {
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
	// bl 0x825c1398
	ctx.lr = 0x825C14D8;
	sub_825C1398(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c14f8
	if (cr6.eq) goto loc_825C14F8;
	// bl 0x82595188
	ctx.lr = 0x825C14E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x825C14F8;
	sub_825952B8(ctx, base);
loc_825C14F8:
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

__attribute__((alias("__imp__sub_825C1514"))) PPC_WEAK_FUNC(sub_825C1514);
PPC_FUNC_IMPL(__imp__sub_825C1514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1518"))) PPC_WEAK_FUNC(sub_825C1518);
PPC_FUNC_IMPL(__imp__sub_825C1518) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82a55510
	ctx.lr = 0x825C1534;
	sub_82A55510(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1544
	if (cr6.eq) goto loc_825C1544;
	// bl 0x82a578c0
	ctx.lr = 0x825C1544;
	sub_82A578C0(ctx, base);
loc_825C1544:
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

__attribute__((alias("__imp__sub_825C1558"))) PPC_WEAK_FUNC(sub_825C1558);
PPC_FUNC_IMPL(__imp__sub_825C1558) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a59c60
	sub_82A59C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C155C"))) PPC_WEAK_FUNC(sub_825C155C);
PPC_FUNC_IMPL(__imp__sub_825C155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1560"))) PPC_WEAK_FUNC(sub_825C1560);
PPC_FUNC_IMPL(__imp__sub_825C1560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82a54f80
	sub_82A54F80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1574"))) PPC_WEAK_FUNC(sub_825C1574);
PPC_FUNC_IMPL(__imp__sub_825C1574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1578"))) PPC_WEAK_FUNC(sub_825C1578);
PPC_FUNC_IMPL(__imp__sub_825C1578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,624(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1584"))) PPC_WEAK_FUNC(sub_825C1584);
PPC_FUNC_IMPL(__imp__sub_825C1584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1588"))) PPC_WEAK_FUNC(sub_825C1588);
PPC_FUNC_IMPL(__imp__sub_825C1588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82a54fb0
	sub_82A54FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1598"))) PPC_WEAK_FUNC(sub_825C1598);
PPC_FUNC_IMPL(__imp__sub_825C1598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C159C"))) PPC_WEAK_FUNC(sub_825C159C);
PPC_FUNC_IMPL(__imp__sub_825C159C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C15A0"))) PPC_WEAK_FUNC(sub_825C15A0);
PPC_FUNC_IMPL(__imp__sub_825C15A0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c15d4
	if (cr6.eq) goto loc_825C15D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C15D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C15D4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c15f4
	if (cr6.eq) goto loc_825C15F4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825C15F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C15F4:
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

__attribute__((alias("__imp__sub_825C1608"))) PPC_WEAK_FUNC(sub_825C1608);
PPC_FUNC_IMPL(__imp__sub_825C1608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_825C1628"))) PPC_WEAK_FUNC(sub_825C1628);
PPC_FUNC_IMPL(__imp__sub_825C1628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C162C"))) PPC_WEAK_FUNC(sub_825C162C);
PPC_FUNC_IMPL(__imp__sub_825C162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1630"))) PPC_WEAK_FUNC(sub_825C1630);
PPC_FUNC_IMPL(__imp__sub_825C1630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C1658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1674"))) PPC_WEAK_FUNC(sub_825C1674);
PPC_FUNC_IMPL(__imp__sub_825C1674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1678"))) PPC_WEAK_FUNC(sub_825C1678);
PPC_FUNC_IMPL(__imp__sub_825C1678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_825C168C"))) PPC_WEAK_FUNC(sub_825C168C);
PPC_FUNC_IMPL(__imp__sub_825C168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1690"))) PPC_WEAK_FUNC(sub_825C1690);
PPC_FUNC_IMPL(__imp__sub_825C1690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x825C1698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// subf. r30,r11,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x825c1744
	if (!cr0.gt) goto loc_825C1744;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C16CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82a57cc0
	ctx.lr = 0x825C16D0;
	sub_82A57CC0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// ble cr6,0x825c16f0
	if (!cr6.gt) goto loc_825C16F0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
loc_825C16F0:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// ble cr6,0x825c170c
	if (!cr6.gt) goto loc_825C170C;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_825C170C:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1744
	if (cr6.eq) goto loc_825C1744;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C1738;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_825C1744:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1750"))) PPC_WEAK_FUNC(sub_825C1750);
PPC_FUNC_IMPL(__imp__sub_825C1750) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,34
	ctx.r30.s64 = 34;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c17b0
	if (cr6.eq) goto loc_825C17B0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C1788;
	sub_82595150(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c17a8
	if (cr6.eq) goto loc_825C17A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C17A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C17A8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C17B0;
	sub_82595170(ctx, base);
loc_825C17B0:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 712, ctx.r11.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c1800
	if (cr6.eq) goto loc_825C1800;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C17D8;
	sub_82595150(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c17f8
	if (cr6.eq) goto loc_825C17F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C17F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C17F8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C1800;
	sub_82595170(ctx, base);
loc_825C1800:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r11,756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 756, ctx.r11.u32);
	// bl 0x82a0dc70
	ctx.lr = 0x825C1814;
	sub_82A0DC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a59b98
	ctx.lr = 0x825C181C;
	sub_82A59B98(ctx, base);
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

__attribute__((alias("__imp__sub_825C1834"))) PPC_WEAK_FUNC(sub_825C1834);
PPC_FUNC_IMPL(__imp__sub_825C1834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1838"))) PPC_WEAK_FUNC(sub_825C1838);
PPC_FUNC_IMPL(__imp__sub_825C1838) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22560
	ctx.lr = 0x825C1858;
	sub_82A22560(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a22540
	ctx.lr = 0x825C1860;
	sub_82A22540(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a125c8
	ctx.lr = 0x825C186C;
	sub_82A125C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,34
	ctx.r30.s64 = 34;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c18b4
	if (cr6.eq) goto loc_825C18B4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C188C;
	sub_82595150(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c18ac
	if (cr6.eq) goto loc_825C18AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C18AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C18AC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C18B4;
	sub_82595170(ctx, base);
loc_825C18B4:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,744
	ctx.r4.s64 = 744;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x825C18C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c18d8
	if (cr6.eq) goto loc_825C18D8;
	// bl 0x82a56108
	ctx.lr = 0x825C18D4;
	sub_82A56108(ctx, base);
	// b 0x825c18dc
	goto loc_825C18DC;
loc_825C18D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C18DC:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r3,712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 712, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c192c
	if (cr6.eq) goto loc_825C192C;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x825C1904;
	sub_82595150(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1924
	if (cr6.eq) goto loc_825C1924;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825C1924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C1924:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x825C192C;
	sub_82595170(ctx, base);
loc_825C192C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-31763
	ctx.r9.s64 = -2081619968;
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// stw r11,-3088(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3088, ctx.r11.u32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lhz r6,666(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 666);
	// divw r5,r8,r6
	ctx.r5.s32 = PPCDivide(ctx.r8.s32, ctx.r6.s32);
	// andc r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// mullw r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// twllei r6,0
	// twlgei r4,-1
	// sth r11,664(r31)
	PPC_STORE_U16(ctx.r31.u32 + 664, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_825C197C"))) PPC_WEAK_FUNC(sub_825C197C);
PPC_FUNC_IMPL(__imp__sub_825C197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1980"))) PPC_WEAK_FUNC(sub_825C1980);
PPC_FUNC_IMPL(__imp__sub_825C1980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x825C1988;
	__savegprlr_21(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,24
	ctx.r23.s64 = ctx.r3.s64 + 24;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a12748
	ctx.lr = 0x825C199C;
	sub_82A12748(ctx, base);
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// lwz r25,156(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 156);
	// lwz r28,292(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22a50
	ctx.lr = 0x825C19B8;
	sub_82A22A50(ctx, base);
	// lwz r10,4460(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4460);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r27,23
	ctx.r27.s64 = 23;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r22,25
	ctx.r22.s64 = 25;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825c1bdc
	if (!cr6.eq) goto loc_825C1BDC;
	// lwz r11,5388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5388);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x825c1b68
	if (cr6.eq) goto loc_825C1B68;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x825c1b48
	if (cr6.eq) goto loc_825C1B48;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x825c1e5c
	if (!cr6.eq) goto loc_825C1E5C;
	// lwz r11,5408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5408);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne cr6,0x825c1ac0
	if (!cr6.eq) goto loc_825C1AC0;
	// lbz r11,5436(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 5436);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// bl 0x82a229e8
	ctx.lr = 0x825C1A34;
	sub_82A229E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x82a2b388
	ctx.lr = 0x825C1A44;
	sub_82A2B388(ctx, base);
	// ld r24,32(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_825C1A4C:
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// beq cr6,0x825c1a5c
	if (cr6.eq) goto loc_825C1A5C;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// bne cr6,0x825c1e60
	if (!cr6.eq) goto loc_825C1E60;
loc_825C1A5C:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a227f0
	ctx.lr = 0x825C1A68;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// bne cr6,0x825c1d64
	if (!cr6.eq) goto loc_825C1D64;
	// lwz r31,4472(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4472);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83740858
	ctx.lr = 0x825C1A84;
	sub_83740858(ctx, base);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x825c1d64
	if (!cr6.lt) goto loc_825C1D64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 28);
	// addi r30,r26,20
	ctx.r30.s64 = ctx.r26.s64 + 20;
	// bl 0x82a2b388
	ctx.lr = 0x825C1AA4;
	sub_82A2B388(ctx, base);
	// lbz r11,80(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 80);
	// ld r24,28(r26)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r26.u32 + 28);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1ca8
	if (cr6.eq) goto loc_825C1CA8;
	// li r27,10
	ctx.r27.s64 = 10;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1AC0:
	// bl 0x82a229e8
	ctx.lr = 0x825C1AC4;
	sub_82A229E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x82a2b388
	ctx.lr = 0x825C1AD4;
	sub_82A2B388(ctx, base);
	// lwz r11,5412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5412);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825c1b2c
	if (!cr6.eq) goto loc_825C1B2C;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a0c738
	ctx.lr = 0x825C1AFC;
	sub_82A0C738(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82a164c8
	ctx.lr = 0x825C1B04;
	sub_82A164C8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x825C1B08;
	sub_83102DB0(ctx, base);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// ld r24,32(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x825c1a4c
	goto loc_825C1A4C;
loc_825C1B2C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x825c1b38
	if (!cr6.eq) goto loc_825C1B38;
	// li r27,5
	ctx.r27.s64 = 5;
loc_825C1B38:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r24,32(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x825c1a4c
	goto loc_825C1A4C;
loc_825C1B48:
	// lwz r11,5356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5356);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x825c1b5c
	if (cr6.eq) goto loc_825C1B5C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x825c1e5c
	if (!cr6.eq) goto loc_825C1E5C;
loc_825C1B5C:
	// ld r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r27,6
	ctx.r27.s64 = 6;
	// b 0x825c1a5c
	goto loc_825C1A5C;
loc_825C1B68:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82a2b388
	ctx.lr = 0x825C1B78;
	sub_82A2B388(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// ld r24,296(r31)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825c1b9c
	if (!cr6.eq) goto loc_825C1B9C;
	// ld r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x825c1ba0
	goto loc_825C1BA0;
loc_825C1B9C:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_825C1BA0:
	// lbz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 334);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1bb4
	if (cr6.eq) goto loc_825C1BB4;
	// li r27,9
	ctx.r27.s64 = 9;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1BB4:
	// lbz r11,337(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 337);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1bc8
	if (cr6.eq) goto loc_825C1BC8;
	// li r27,11
	ctx.r27.s64 = 11;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1BC8:
	// lbz r11,335(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 335);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1a4c
	if (cr6.eq) goto loc_825C1A4C;
	// li r27,18
	ctx.r27.s64 = 18;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1BDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,156(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 156);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a22d18
	ctx.lr = 0x825C1BEC;
	sub_82A22D18(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x825c1c34
	if (!cr6.eq) goto loc_825C1C34;
	// lwz r31,4472(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4472);
	// bl 0x83935df8
	ctx.lr = 0x825C1C00;
	sub_83935DF8(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825c1c34
	if (cr6.gt) goto loc_825C1C34;
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x825C1C24;
	sub_82A2B388(ctx, base);
	// ld r24,196(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 196);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x825c1a5c
	goto loc_825C1A5C;
loc_825C1C34:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,156(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 156);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82a23008
	ctx.lr = 0x825C1C44;
	sub_82A23008(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x825c1c5c
	if (!cr6.gt) goto loc_825C1C5C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825c1c60
	if (!cr6.gt) goto loc_825C1C60;
loc_825C1C5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C1C60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1e5c
	if (cr6.eq) goto loc_825C1E5C;
	// lwz r31,4472(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4472);
	// bl 0x83935df8
	ctx.lr = 0x825C1C74;
	sub_83935DF8(ctx, base);
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x825c1e5c
	if (cr6.gt) goto loc_825C1E5C;
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82a2b388
	ctx.lr = 0x825C1C98;
	sub_82A2B388(ctx, base);
	// ld r24,292(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 292);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// b 0x825c1a5c
	goto loc_825C1A5C;
loc_825C1CA8:
	// lbz r11,77(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1ccc
	if (cr6.eq) goto loc_825C1CCC;
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// bne cr6,0x825c1cc4
	if (!cr6.eq) goto loc_825C1CC4;
	// li r27,20
	ctx.r27.s64 = 20;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1CC4:
	// li r27,26
	ctx.r27.s64 = 26;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1CCC:
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c1e3c
	if (!cr6.eq) goto loc_825C1E3C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825C1CE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22b40
	ctx.lr = 0x825C1CEC;
	sub_82A22B40(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x825c1d30
	if (!cr6.gt) goto loc_825C1D30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x825c1d1c
	if (!cr6.eq) goto loc_825C1D1C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825c1d2c
	if (cr6.eq) goto loc_825C1D2C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825c1d2c
	if (cr6.eq) goto loc_825C1D2C;
loc_825C1D1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x825c1ce0
	if (cr6.lt) goto loc_825C1CE0;
	// b 0x825c1d30
	goto loc_825C1D30;
loc_825C1D2C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_825C1D30:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c1e3c
	if (!cr6.eq) goto loc_825C1E3C;
	// lbz r11,63(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 63);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1d50
	if (cr6.eq) goto loc_825C1D50;
	// li r27,12
	ctx.r27.s64 = 12;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1D50:
	// lbz r11,61(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1e60
	if (cr6.eq) goto loc_825C1E60;
	// li r27,19
	ctx.r27.s64 = 19;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1D64:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,156(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 156);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a23008
	ctx.lr = 0x825C1D74;
	sub_82A23008(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x825c1d8c
	if (!cr6.gt) goto loc_825C1D8C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825c1d90
	if (!cr6.gt) goto loc_825C1D90;
loc_825C1D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C1D90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1e60
	if (cr6.eq) goto loc_825C1E60;
	// lwz r31,4472(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4472);
	// bl 0x83740858
	ctx.lr = 0x825C1DA4;
	sub_83740858(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x825c1e60
	if (!cr6.lt) goto loc_825C1E60;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// bl 0x82a2b388
	ctx.lr = 0x825C1DC4;
	sub_82A2B388(ctx, base);
	// lbz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// ld r24,100(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c1e3c
	if (!cr6.eq) goto loc_825C1E3C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825C1DE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a22b40
	ctx.lr = 0x825C1DEC;
	sub_82A22B40(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x825c1e30
	if (!cr6.gt) goto loc_825C1E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x825c1e1c
	if (!cr6.eq) goto loc_825C1E1C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x825c1e2c
	if (cr6.eq) goto loc_825C1E2C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x825c1e2c
	if (cr6.eq) goto loc_825C1E2C;
loc_825C1E1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,20
	cr6.compare<uint32_t>(ctx.r31.u32, 20, xer);
	// blt cr6,0x825c1de0
	if (cr6.lt) goto loc_825C1DE0;
	// b 0x825c1e30
	goto loc_825C1E30;
loc_825C1E2C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_825C1E30:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c1e54
	if (cr6.eq) goto loc_825C1E54;
loc_825C1E3C:
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(ctx.r27.s32, 6, xer);
	// bne cr6,0x825c1e4c
	if (!cr6.eq) goto loc_825C1E4C;
	// li r27,21
	ctx.r27.s64 = 21;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1E4C:
	// li r27,27
	ctx.r27.s64 = 27;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1E54:
	// li r27,6
	ctx.r27.s64 = 6;
	// b 0x825c1e60
	goto loc_825C1E60;
loc_825C1E5C:
	// ld r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_825C1E60:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// lwz r31,636(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// bl 0x83740858
	ctx.lr = 0x825C1E6C;
	sub_83740858(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a57150
	ctx.lr = 0x825C1E88;
	sub_82A57150(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825C1E90;
	sub_82A0CC80(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1E9C"))) PPC_WEAK_FUNC(sub_825C1E9C);
PPC_FUNC_IMPL(__imp__sub_825C1E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1EA0"))) PPC_WEAK_FUNC(sub_825C1EA0);
PPC_FUNC_IMPL(__imp__sub_825C1EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x825C1EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82a12748
	ctx.lr = 0x825C1EC0;
	sub_82A12748(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r29,292(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// bl 0x83572958
	ctx.lr = 0x825C1ED0;
	sub_83572958(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c1ee8
	if (!cr6.eq) goto loc_825C1EE8;
	// lbz r11,4496(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4496);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// bne cr6,0x825c1f24
	if (!cr6.eq) goto loc_825C1F24;
loc_825C1EE8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c1f24
	if (!cr6.eq) goto loc_825C1F24;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4472(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4472);
	// lwz r31,636(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82a59578
	ctx.lr = 0x825C1F10;
	sub_82A59578(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x825C1F24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825C1F24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cc80
	ctx.lr = 0x825C1F2C;
	sub_82A0CC80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1F34"))) PPC_WEAK_FUNC(sub_825C1F34);
PPC_FUNC_IMPL(__imp__sub_825C1F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1F38"))) PPC_WEAK_FUNC(sub_825C1F38);
PPC_FUNC_IMPL(__imp__sub_825C1F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c1838
	sub_825C1838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1F3C"))) PPC_WEAK_FUNC(sub_825C1F3C);
PPC_FUNC_IMPL(__imp__sub_825C1F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1F40"))) PPC_WEAK_FUNC(sub_825C1F40);
PPC_FUNC_IMPL(__imp__sub_825C1F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c1ea0
	sub_825C1EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C1F44"))) PPC_WEAK_FUNC(sub_825C1F44);
PPC_FUNC_IMPL(__imp__sub_825C1F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1F48"))) PPC_WEAK_FUNC(sub_825C1F48);
PPC_FUNC_IMPL(__imp__sub_825C1F48) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82a0db20
	ctx.lr = 0x825C1F7C;
	sub_82A0DB20(ctx, base);
	// bl 0x83935df8
	ctx.lr = 0x825C1F80;
	sub_83935DF8(ctx, base);
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r9,r10,r10
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r10.s32);
	// sth r10,666(r31)
	PPC_STORE_U16(ctx.r31.u32 + 666, ctx.r10.u16);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// andc r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// twllei r10,0
	// sth r7,664(r31)
	PPC_STORE_U16(ctx.r31.u32 + 664, ctx.r7.u16);
	// twlgei r4,-1
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

__attribute__((alias("__imp__sub_825C1FC8"))) PPC_WEAK_FUNC(sub_825C1FC8);
PPC_FUNC_IMPL(__imp__sub_825C1FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825C1FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
loc_825C1FE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825f7490
	ctx.lr = 0x825C1FEC;
	sub_825F7490(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x825c1fe0
	if (cr6.lt) goto loc_825C1FE0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C2004"))) PPC_WEAK_FUNC(sub_825C2004);
PPC_FUNC_IMPL(__imp__sub_825C2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2008"))) PPC_WEAK_FUNC(sub_825C2008);
PPC_FUNC_IMPL(__imp__sub_825C2008) {
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
	// li r30,2
	ctx.r30.s64 = 2;
loc_825C2024:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c2034
	if (cr6.eq) goto loc_825C2034;
	// bl 0x825f75d8
	ctx.lr = 0x825C2034;
	sub_825F75D8(ctx, base);
loc_825C2034:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825c2024
	if (!cr0.eq) goto loc_825C2024;
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

__attribute__((alias("__imp__sub_825C2058"))) PPC_WEAK_FUNC(sub_825C2058);
PPC_FUNC_IMPL(__imp__sub_825C2058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x825C2060;
	__savegprlr_29(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x837a5740
	ctx.lr = 0x825C2078;
	sub_837A5740(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c20d4
	if (cr6.eq) goto loc_825C20D4;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x825f77f0
	ctx.lr = 0x825C20B4;
	sub_825F77F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c20d4
	if (cr6.eq) goto loc_825C20D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_825C20D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C20E8"))) PPC_WEAK_FUNC(sub_825C20E8);
PPC_FUNC_IMPL(__imp__sub_825C20E8) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825c2164
	if (cr6.eq) goto loc_825C2164;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837a5740
	ctx.lr = 0x825C2118;
	sub_837A5740(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f1,-17668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17668);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x837a5900
	ctx.lr = 0x825C2158;
	sub_837A5900(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825c21a8
	goto loc_825C21A8;
loc_825C2164:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,30444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x825c2194
	if (cr6.lt) goto loc_825C2194;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,-7352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825c21ac
	if (!cr6.gt) goto loc_825C21AC;
loc_825C2194:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x837a5a28
	ctx.lr = 0x825C21A0;
	sub_837A5A28(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825C21A8:
	// bl 0x837a5a28
	ctx.lr = 0x825C21AC;
	sub_837A5A28(ctx, base);
loc_825C21AC:
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

__attribute__((alias("__imp__sub_825C21C4"))) PPC_WEAK_FUNC(sub_825C21C4);
PPC_FUNC_IMPL(__imp__sub_825C21C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

