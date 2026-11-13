#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83228FE8"))) PPC_WEAK_FUNC(sub_83228FE8);
PPC_FUNC_IMPL(__imp__sub_83228FE8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83209aa8
	ctx.lr = 0x83228FFC;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322902C"))) PPC_WEAK_FUNC(sub_8322902C);
PPC_FUNC_IMPL(__imp__sub_8322902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229030"))) PPC_WEAK_FUNC(sub_83229030);
PPC_FUNC_IMPL(__imp__sub_83229030) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1936
	cr6.compare<uint32_t>(ctx.r11.u32, 1936, xer);
	// beq cr6,0x83229058
	if (cr6.eq) goto loc_83229058;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832290b4
	goto loc_832290B4;
loc_83229058:
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83229070
	if (!cr6.eq) goto loc_83229070;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x8322906C;
	sub_83213150(ctx, base);
	// b 0x832290b0
	goto loc_832290B0;
loc_83229070:
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
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
	// beq cr6,0x8322909c
	if (cr6.eq) goto loc_8322909C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322909C;
	sub_83222030(ctx, base);
loc_8322909C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
loc_832290B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832290B4:
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

__attribute__((alias("__imp__sub_832290CC"))) PPC_WEAK_FUNC(sub_832290CC);
PPC_FUNC_IMPL(__imp__sub_832290CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832290D0"))) PPC_WEAK_FUNC(sub_832290D0);
PPC_FUNC_IMPL(__imp__sub_832290D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832290f8
	if (!cr6.eq) goto loc_832290F8;
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// blr 
	return;
loc_832290F8:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83229110
	if (cr6.eq) goto loc_83229110;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x832290f8
	if (!cr6.eq) goto loc_832290F8;
	// blr 
	return;
loc_83229110:
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83229118"))) PPC_WEAK_FUNC(sub_83229118);
PPC_FUNC_IMPL(__imp__sub_83229118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8322915c
	if (cr6.eq) goto loc_8322915C;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322913c
	if (cr6.eq) goto loc_8322913C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8322913C:
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83229148:
	// stw r3,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r3.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83229148
	if (!cr6.eq) goto loc_83229148;
	// blr 
	return;
loc_8322915C:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322916c
	if (!cr6.eq) goto loc_8322916C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8322916C:
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83229194
	if (cr6.eq) goto loc_83229194;
loc_83229180:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83229180
	if (!cr6.eq) goto loc_83229180;
loc_83229194:
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322919C"))) PPC_WEAK_FUNC(sub_8322919C);
PPC_FUNC_IMPL(__imp__sub_8322919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832291A0"))) PPC_WEAK_FUNC(sub_832291A0);
PPC_FUNC_IMPL(__imp__sub_832291A0) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832291d0
	if (!cr6.eq) goto loc_832291D0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322921c
	if (cr6.eq) goto loc_8322921C;
loc_832291D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832390b0
	ctx.lr = 0x832291DC;
	sub_832390B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83229220
	if (!cr6.eq) goto loc_83229220;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832291f8
	if (cr6.eq) goto loc_832291F8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x832291d0
	goto loc_832291D0;
loc_832291F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322921c
	if (cr6.eq) goto loc_8322921C;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832291d0
	if (!cr6.eq) goto loc_832291D0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832291d0
	if (!cr6.eq) goto loc_832291D0;
loc_8322921C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83229220:
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

__attribute__((alias("__imp__sub_83229238"))) PPC_WEAK_FUNC(sub_83229238);
PPC_FUNC_IMPL(__imp__sub_83229238) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83229268
	if (!cr6.eq) goto loc_83229268;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832292b4
	if (cr6.eq) goto loc_832292B4;
loc_83229268:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83239140
	ctx.lr = 0x83229274;
	sub_83239140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832292d0
	if (cr6.eq) goto loc_832292D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83229290
	if (cr6.eq) goto loc_83229290;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x83229268
	goto loc_83229268;
loc_83229290:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832292b4
	if (cr6.eq) goto loc_832292B4;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83229268
	if (!cr6.eq) goto loc_83229268;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83229268
	if (!cr6.eq) goto loc_83229268;
loc_832292B4:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_832292B8:
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
loc_832292D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832292b8
	goto loc_832292B8;
}

__attribute__((alias("__imp__sub_832292D8"))) PPC_WEAK_FUNC(sub_832292D8);
PPC_FUNC_IMPL(__imp__sub_832292D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832292E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x832293c0
	if (cr6.eq) goto loc_832293C0;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832264e0
	ctx.lr = 0x8322932C;
	sub_832264E0(ctx, base);
	// lhz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83229358
	if (!cr6.eq) goto loc_83229358;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x83229340;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83229358
	if (!cr6.eq) goto loc_83229358;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83229358:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83282e30
	ctx.lr = 0x83229360;
	sub_83282E30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832293b0
	if (cr6.eq) goto loc_832293B0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83229390
	if (!cr6.eq) goto loc_83229390;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x8322937C;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83229390
	if (!cr6.eq) goto loc_83229390;
	// bl 0x83227908
	ctx.lr = 0x8322938C;
	sub_83227908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83229390:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832291a0
	ctx.lr = 0x83229398;
	sub_832291A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832293bc
	if (cr6.eq) goto loc_832293BC;
	// li r5,55
	ctx.r5.s64 = 55;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83237b90
	ctx.lr = 0x832293B0;
	sub_83237B90(ctx, base);
loc_832293B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832293BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832293C0:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83229428
	if (cr6.eq) goto loc_83229428;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832293f0
	if (!cr6.eq) goto loc_832293F0;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x832293DC;
	sub_832277F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832293f0
	if (!cr6.eq) goto loc_832293F0;
	// bl 0x83227908
	ctx.lr = 0x832293EC;
	sub_83227908(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_832293F0:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r10,7848
	ctx.r5.s64 = ctx.r10.s64 + 7848;
	// li r6,1065
	ctx.r6.s64 = 1065;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83297a40
	ctx.lr = 0x8322940C;
	sub_83297A40(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83255a88
	ctx.lr = 0x83229414;
	sub_83255A88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83201af8
	ctx.lr = 0x8322941C;
	sub_83201AF8(ctx, base);
	// li r3,-1065
	ctx.r3.s64 = -1065;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83229428:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229434"))) PPC_WEAK_FUNC(sub_83229434);
PPC_FUNC_IMPL(__imp__sub_83229434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229438"))) PPC_WEAK_FUNC(sub_83229438);
PPC_FUNC_IMPL(__imp__sub_83229438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83229440;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2377
	cr6.compare<uint32_t>(ctx.r11.u32, 2377, xer);
	// beq cr6,0x8322951c
	if (cr6.eq) goto loc_8322951C;
	// cmplwi cr6,r11,2378
	cr6.compare<uint32_t>(ctx.r11.u32, 2378, xer);
	// beq cr6,0x8322946c
	if (cr6.eq) goto loc_8322946C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8322946C:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x83229498
	if (cr6.eq) goto loc_83229498;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83229498;
	sub_83222030(ctx, base);
loc_83229498:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x832294c4
	if (cr6.eq) goto loc_832294C4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,7828
	ctx.r3.s64 = ctx.r11.s64 + 7828;
	// bl 0x8320d088
	ctx.lr = 0x832294C4;
	sub_8320D088(ctx, base);
loc_832294C4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83229510
	if (!cr6.gt) goto loc_83229510;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832292d8
	ctx.lr = 0x832294FC;
	sub_832292D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// bl 0x8320cf60
	ctx.lr = 0x83229510;
	sub_8320CF60(ctx, base);
loc_83229510:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8322951C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83222030
	ctx.lr = 0x83229528;
	sub_83222030(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83229544
	if (cr6.eq) goto loc_83229544;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,7828
	ctx.r3.s64 = ctx.r11.s64 + 7828;
	// bl 0x8320d088
	ctx.lr = 0x83229544;
	sub_8320D088(ctx, base);
loc_83229544:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322956c
	if (!cr6.gt) goto loc_8322956C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
loc_8322956C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832292d8
	ctx.lr = 0x83229580;
	sub_832292D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229588"))) PPC_WEAK_FUNC(sub_83229588);
PPC_FUNC_IMPL(__imp__sub_83229588) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83229610
	if (cr6.eq) goto loc_83229610;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x832295bc
	if (!cr6.eq) goto loc_832295BC;
	// b 0x83229614
	goto loc_83229614;
loc_832295BC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832295d8
	if (cr6.eq) goto loc_832295D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83229588
	ctx.lr = 0x832295D0;
	sub_83229588(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83229614
	if (!cr6.eq) goto loc_83229614;
loc_832295D8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832295f4
	if (cr6.eq) goto loc_832295F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83229588
	ctx.lr = 0x832295EC;
	sub_83229588(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83229614
	if (!cr6.eq) goto loc_83229614;
loc_832295F4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83229610
	if (cr6.eq) goto loc_83229610;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83229588
	ctx.lr = 0x83229608;
	sub_83229588(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83229614
	if (!cr6.eq) goto loc_83229614;
loc_83229610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83229614:
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

__attribute__((alias("__imp__sub_8322962C"))) PPC_WEAK_FUNC(sub_8322962C);
PPC_FUNC_IMPL(__imp__sub_8322962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229630"))) PPC_WEAK_FUNC(sub_83229630);
PPC_FUNC_IMPL(__imp__sub_83229630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322964c
	if (cr6.eq) goto loc_8322964C;
	// addi r11,r11,316
	ctx.r11.s64 = ctx.r11.s64 + 316;
loc_8322964C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83229588
	sub_83229588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229654"))) PPC_WEAK_FUNC(sub_83229654);
PPC_FUNC_IMPL(__imp__sub_83229654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229658"))) PPC_WEAK_FUNC(sub_83229658);
PPC_FUNC_IMPL(__imp__sub_83229658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83229660;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1856
	ctx.r11.s64 = 1856;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// bl 0x8322ab20
	ctx.lr = 0x83229688;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832296f4
	if (!cr6.eq) goto loc_832296F4;
	// bl 0x83235198
	ctx.lr = 0x83229694;
	sub_83235198(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,198
	ctx.r10.s64 = 198;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// bl 0x8323dce0
	ctx.lr = 0x832296AC;
	sub_8323DCE0(ctx, base);
	// li r9,1858
	ctx.r9.s64 = 1858;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// li r5,126
	ctx.r5.s64 = 126;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8322c328
	ctx.lr = 0x832296D4;
	sub_8322C328(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322c4b8
	ctx.lr = 0x832296E8;
	sub_8322C4B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832296F4:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83221378
	ctx.lr = 0x83229700;
	sub_83221378(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229708"))) PPC_WEAK_FUNC(sub_83229708);
PPC_FUNC_IMPL(__imp__sub_83229708) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1856
	cr6.compare<uint32_t>(ctx.r11.u32, 1856, xer);
	// beq cr6,0x83229758
	if (cr6.eq) goto loc_83229758;
	// cmplwi cr6,r11,1927
	cr6.compare<uint32_t>(ctx.r11.u32, 1927, xer);
	// beq cr6,0x8322973c
	if (cr6.eq) goto loc_8322973C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832297a4
	goto loc_832297A4;
loc_8322973C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322df08
	ctx.lr = 0x83229744;
	sub_8322DF08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832297a0
	if (cr6.eq) goto loc_832297A0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83213150
	ctx.lr = 0x83229754;
	sub_83213150(ctx, base);
	// b 0x832297a0
	goto loc_832297A0;
loc_83229758:
	// bl 0x83229658
	ctx.lr = 0x8322975C;
	sub_83229658(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x8322978c
	if (cr6.eq) goto loc_8322978C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322978C;
	sub_83222030(ctx, base);
loc_8322978C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
loc_832297A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832297A4:
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

__attribute__((alias("__imp__sub_832297BC"))) PPC_WEAK_FUNC(sub_832297BC);
PPC_FUNC_IMPL(__imp__sub_832297BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832297C0"))) PPC_WEAK_FUNC(sub_832297C0);
PPC_FUNC_IMPL(__imp__sub_832297C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832297C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1213
	cr6.compare<uint32_t>(ctx.r11.u32, 1213, xer);
	// beq cr6,0x832298c4
	if (cr6.eq) goto loc_832298C4;
	// cmplwi cr6,r11,2433
	cr6.compare<uint32_t>(ctx.r11.u32, 2433, xer);
	// ble cr6,0x832298b8
	if (!cr6.gt) goto loc_832298B8;
	// cmplwi cr6,r11,2435
	cr6.compare<uint32_t>(ctx.r11.u32, 2435, xer);
	// bgt cr6,0x832298b8
	if (cr6.gt) goto loc_832298B8;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83229808
	if (cr6.eq) goto loc_83229808;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// bl 0x8320d088
	ctx.lr = 0x83229808;
	sub_8320D088(ctx, base);
loc_83229808:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r30,1927
	ctx.r30.s64 = 1927;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// sth r30,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r30.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r29,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r29.u8);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x8322df08
	ctx.lr = 0x83229844;
	sub_8322DF08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83229be4
	if (!cr6.eq) goto loc_83229BE4;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x832133d0
	ctx.lr = 0x83229858;
	sub_832133D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83229864;
	sub_83222030(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83229be4
	if (cr6.eq) goto loc_83229BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83227a68
	ctx.lr = 0x83229874;
	sub_83227A68(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r30,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r30.u16);
	// li r5,122
	ctx.r5.s64 = 122;
	// stb r29,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r29.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322c328
	ctx.lr = 0x83229898;
	sub_8322C328(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83229658
	ctx.lr = 0x832298A0;
	sub_83229658(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,41
	ctx.r4.s64 = 41;
	// bl 0x832664e8
	ctx.lr = 0x832298AC;
	sub_832664E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832298B8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832298C4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832298e8
	if (cr6.eq) goto loc_832298E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832298e8
	if (cr6.eq) goto loc_832298E8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,7584
	ctx.r3.s64 = ctx.r11.s64 + 7584;
	// bl 0x8320d088
	ctx.lr = 0x832298E8;
	sub_8320D088(ctx, base);
loc_832298E8:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83229be4
	if (cr6.lt) goto loc_83229BE4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x83229924;
	sub_83221378(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r25,r11,24688
	ctx.r25.s64 = ctx.r11.s64 + 24688;
	// bne cr6,0x83229954
	if (!cr6.eq) goto loc_83229954;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,7928
	ctx.r5.s64 = ctx.r11.s64 + 7928;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8320d428
	ctx.lr = 0x83229950;
	sub_8320D428(ctx, base);
	// b 0x83229a88
	goto loc_83229A88;
loc_83229954:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x8322ca20
	ctx.lr = 0x83229964;
	sub_8322CA20(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x83229998
	if (!cr6.eq) goto loc_83229998;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,7928
	ctx.r6.s64 = ctx.r11.s64 + 7928;
	// addi r5,r10,7916
	ctx.r5.s64 = ctx.r10.s64 + 7916;
	// addi r4,r9,7896
	ctx.r4.s64 = ctx.r9.s64 + 7896;
	// addi r3,r8,7608
	ctx.r3.s64 = ctx.r8.s64 + 7608;
	// bl 0x832085e8
	ctx.lr = 0x83229994;
	sub_832085E8(ctx, base);
	// b 0x83229a88
	goto loc_83229A88;
loc_83229998:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83229658
	ctx.lr = 0x832299A0;
	sub_83229658(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r10,1857
	ctx.r10.s64 = 1857;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// bne cr6,0x832299cc
	if (!cr6.eq) goto loc_832299CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x832299d4
	goto loc_832299D4;
loc_832299CC:
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
loc_832299D4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322c0a8
	ctx.lr = 0x832299E0;
	sub_8322C0A8(ctx, base);
	// lwz r8,24(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83229a28
	if (cr6.eq) goto loc_83229A28;
	// dcbt r0,r8
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lhz r11,14(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x83229a28
	if (!cr6.gt) goto loc_83229A28;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83229A08:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// beq cr6,0x83229a48
	if (cr6.eq) goto loc_83229A48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x83229a08
	if (cr6.lt) goto loc_83229A08;
loc_83229A28:
	// lhz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// sth r11,12(r28)
	PPC_STORE_U16(ctx.r28.u32 + 12, ctx.r11.u16);
	// bl 0x8322ad60
	ctx.lr = 0x83229A44;
	sub_8322AD60(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_83229A48:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x83223a60
	ctx.lr = 0x83229A54;
	sub_83223A60(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x83229A60;
	sub_8322B7D0(ctx, base);
	// li r11,422
	ctx.r11.s64 = 422;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322c328
	ctx.lr = 0x83229A88;
	sub_8322C328(ctx, base);
loc_83229A88:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83229b00
	if (cr6.lt) goto loc_83229B00;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// addi r5,r11,-163
	ctx.r5.s64 = ctx.r11.s64 + -163;
	// srw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srawi r3,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r9,r7
	ctx.r9.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83229b00
	if (!cr6.eq) goto loc_83229B00;
	// li r4,161
	ctx.r4.s64 = 161;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x83229AEC;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83229b54
	if (cr6.eq) goto loc_83229B54;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83229b94
	if (!cr6.eq) goto loc_83229B94;
loc_83229B00:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// beq cr6,0x83229b1c
	if (cr6.eq) goto loc_83229B1C;
	// addi r3,r11,316
	ctx.r3.s64 = ctx.r11.s64 + 316;
loc_83229B1C:
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83229588
	ctx.lr = 0x83229B24;
	sub_83229588(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83228fe8
	ctx.lr = 0x83229B2C;
	sub_83228FE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83229bb4
	if (cr6.eq) goto loc_83229BB4;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83229bb4
	if (cr6.eq) goto loc_83229BB4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83229b74
	if (!cr6.eq) goto loc_83229B74;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x83229bb4
	goto loc_83229BB4;
loc_83229B54:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,7888
	ctx.r5.s64 = ctx.r11.s64 + 7888;
	// li r6,161
	ctx.r6.s64 = 161;
	// li r3,126
	ctx.r3.s64 = 126;
	// bl 0x8320d428
	ctx.lr = 0x83229B70;
	sub_8320D428(ctx, base);
	// b 0x83229b00
	goto loc_83229B00;
loc_83229B74:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83229b8c
	if (cr6.eq) goto loc_83229B8C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x83229b74
	if (!cr6.eq) goto loc_83229B74;
	// b 0x83229bb4
	goto loc_83229BB4;
loc_83229B8C:
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// b 0x83229bb4
	goto loc_83229BB4;
loc_83229B94:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83229bb4
	if (cr6.eq) goto loc_83229BB4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83228fe8
	ctx.lr = 0x83229BA8;
	sub_83228FE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83229118
	ctx.lr = 0x83229BB4;
	sub_83229118(ctx, base);
loc_83229BB4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83229be4
	if (cr6.eq) goto loc_83229BE4;
	// li r11,1935
	ctx.r11.s64 = 1935;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// li r5,160
	ctx.r5.s64 = 160;
	// stb r29,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r29.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322c328
	ctx.lr = 0x83229BE4;
	sub_8322C328(ctx, base);
loc_83229BE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229BF0"))) PPC_WEAK_FUNC(sub_83229BF0);
PPC_FUNC_IMPL(__imp__sub_83229BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83229BF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83229c24
	if (cr6.eq) goto loc_83229C24;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83229c40
	if (!cr6.eq) goto loc_83229C40;
loc_83229C24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83229c40
	if (!cr6.eq) goto loc_83229C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83227a68
	ctx.lr = 0x83229C34;
	sub_83227A68(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83229C40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321b8f0
	ctx.lr = 0x83229C48;
	sub_8321B8F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832279c8
	ctx.lr = 0x83229C50;
	sub_832279C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83229d84
	if (cr6.eq) goto loc_83229D84;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83206de0
	ctx.lr = 0x83229C6C;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83229d5c
	if (!cr6.eq) goto loc_83229D5C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831fe540
	ctx.lr = 0x83229C80;
	sub_831FE540(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217e18
	ctx.lr = 0x83229C8C;
	sub_83217E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83229d48
	if (cr6.eq) goto loc_83229D48;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x83260348
	ctx.lr = 0x83229CAC;
	sub_83260348(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,268(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// ori r7,r9,16
	ctx.r7.u64 = ctx.r9.u64 | 16;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r8,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r8.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r6,3,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83229e18
	if (cr6.eq) goto loc_83229E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83261a40
	ctx.lr = 0x83229CD8;
	sub_83261A40(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r11,140
	ctx.r11.s64 = 140;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r9,1884
	ctx.r9.s64 = 1884;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r28,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r28.u8);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r9,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r9.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x83229D34;
	sub_8322DFB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83229D3C;
	sub_83222030(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83229D48:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,7992
	ctx.r4.s64 = ctx.r11.s64 + 7992;
	// addi r3,r10,7608
	ctx.r3.s64 = ctx.r10.s64 + 7608;
	// bl 0x83208568
	ctx.lr = 0x83229D5C;
	sub_83208568(ctx, base);
loc_83229D5C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,7960
	ctx.r4.s64 = ctx.r11.s64 + 7960;
	// addi r3,r10,7608
	ctx.r3.s64 = ctx.r10.s64 + 7608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x83229D74;
	sub_83208330(ctx, base);
	// li r28,-4
	ctx.r28.s64 = -4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83229D84:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83229da0
	if (!cr6.eq) goto loc_83229DA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832001a0
	ctx.lr = 0x83229D94;
	sub_832001A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83229dac
	if (cr6.eq) goto loc_83229DAC;
loc_83229DA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83200388
	ctx.lr = 0x83229DA8;
	sub_83200388(ctx, base);
	// b 0x83229db8
	goto loc_83229DB8;
loc_83229DAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83291390
	ctx.lr = 0x83229DB4;
	sub_83291390(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_83229DB8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83229dc4
	if (cr6.eq) goto loc_83229DC4;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
loc_83229DC4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83229de4
	if (cr6.eq) goto loc_83229DE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217288
	ctx.lr = 0x83229DD8;
	sub_83217288(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83229DE4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,7936
	ctx.r4.s64 = ctx.r11.s64 + 7936;
	// addi r3,r10,7608
	ctx.r3.s64 = ctx.r10.s64 + 7608;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x83229DFC;
	sub_83208330(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r9,0,11,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83229e14
	if (cr6.eq) goto loc_83229E14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832142b8
	ctx.lr = 0x83229E14;
	sub_832142B8(ctx, base);
loc_83229E14:
	// li r28,-4
	ctx.r28.s64 = -4;
loc_83229E18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229E24"))) PPC_WEAK_FUNC(sub_83229E24);
PPC_FUNC_IMPL(__imp__sub_83229E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83229E28"))) PPC_WEAK_FUNC(sub_83229E28);
PPC_FUNC_IMPL(__imp__sub_83229E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83229E30;
	__savegprlr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// beq cr6,0x83229e64
	if (cr6.eq) goto loc_83229E64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832279c8
	ctx.lr = 0x83229E60;
	sub_832279C8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_83229E64:
	// li r11,1935
	ctx.r11.s64 = 1935;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// sth r11,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r11.u16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322cb60
	ctx.lr = 0x83229E90;
	sub_8322CB60(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229bf0
	ctx.lr = 0x83229EA4;
	sub_83229BF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83229f88
	if (!cr6.eq) goto loc_83229F88;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// bne cr6,0x83229ed0
	if (!cr6.eq) goto loc_83229ED0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213048
	ctx.lr = 0x83229ED0;
	sub_83213048(ctx, base);
loc_83229ED0:
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83229ef8
	if (cr6.eq) goto loc_83229EF8;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x83212128
	ctx.lr = 0x83229EF8;
	sub_83212128(ctx, base);
loc_83229EF8:
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322c388
	ctx.lr = 0x83229F0C;
	sub_8322C388(ctx, base);
	// li r11,422
	ctx.r11.s64 = 422;
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
	// bl 0x8322c0e8
	ctx.lr = 0x83229F30;
	sub_8322C0E8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83229f64
	if (cr6.eq) goto loc_83229F64;
	// li r11,1927
	ctx.r11.s64 = 1927;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// bl 0x8322c328
	ctx.lr = 0x83229F64;
	sub_8322C328(ctx, base);
loc_83229F64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83228410
	ctx.lr = 0x83229F70;
	sub_83228410(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322bf60
	ctx.lr = 0x83229F80;
	sub_8322BF60(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83229F88:
	// li r11,2035
	ctx.r11.s64 = 2035;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r10,8036
	ctx.r5.s64 = ctx.r10.s64 + 8036;
	// li r6,2035
	ctx.r6.s64 = 2035;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83297a40
	ctx.lr = 0x83229FAC;
	sub_83297A40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83255a88
	ctx.lr = 0x83229FB4;
	sub_83255A88(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83266348
	ctx.lr = 0x83229FD0;
	sub_83266348(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83229FD8"))) PPC_WEAK_FUNC(sub_83229FD8);
PPC_FUNC_IMPL(__imp__sub_83229FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83229FE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,71
	ctx.r4.s64 = 71;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x83229FF8;
	sub_8322B7D0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322cac0
	ctx.lr = 0x8322A008;
	sub_8322CAC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322a104
	if (!cr6.eq) goto loc_8322A104;
	// li r11,1858
	ctx.r11.s64 = 1858;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r5,126
	ctx.r5.s64 = 126;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322cb60
	ctx.lr = 0x8322A03C;
	sub_8322CB60(ctx, base);
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// and r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x832279c8
	ctx.lr = 0x8322A054;
	sub_832279C8(ctx, base);
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322a090
	if (!cr6.eq) goto loc_8322A090;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322a078
	if (cr6.eq) goto loc_8322A078;
	// bl 0x8320a450
	ctx.lr = 0x8322A070;
	sub_8320A450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8322a084
	goto loc_8322A084;
loc_8322A078:
	// bl 0x83234de8
	ctx.lr = 0x8322A07C;
	sub_83234DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8321c750
	ctx.lr = 0x8322A084;
	sub_8321C750(ctx, base);
loc_8322A084:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320ad40
	ctx.lr = 0x8322A090;
	sub_8320AD40(ctx, base);
loc_8322A090:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83229e28
	ctx.lr = 0x8322A0A8;
	sub_83229E28(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322b7d0
	ctx.lr = 0x8322A0B4;
	sub_8322B7D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832356e0
	ctx.lr = 0x8322A0BC;
	sub_832356E0(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322a0d8
	if (!cr6.eq) goto loc_8322A0D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x8322a0f4
	goto loc_8322A0F4;
loc_8322A0D8:
	// addic. r3,r11,120
	xer.ca = ctx.r11.u32 > 4294967175;
	ctx.r3.s64 = ctx.r11.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8322a0f4
	if (cr0.eq) goto loc_8322A0F4;
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r28,r8,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_8322A0F4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322a104
	if (cr6.eq) goto loc_8322A104;
	// bl 0x8324ccf0
	ctx.lr = 0x8322A104;
	sub_8324CCF0(ctx, base);
loc_8322A104:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A10C"))) PPC_WEAK_FUNC(sub_8322A10C);
PPC_FUNC_IMPL(__imp__sub_8322A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A110"))) PPC_WEAK_FUNC(sub_8322A110);
PPC_FUNC_IMPL(__imp__sub_8322A110) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322a148
	if (cr6.eq) goto loc_8322A148;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x8322a188
	goto loc_8322A188;
loc_8322A148:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322a178
	if (cr6.eq) goto loc_8322A178;
	// bl 0x83228ef0
	ctx.lr = 0x8322A15C;
	sub_83228EF0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322a178
	if (!cr6.eq) goto loc_8322A178;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322a178
	if (cr6.eq) goto loc_8322A178;
	// bl 0x83209d68
	ctx.lr = 0x8322A174;
	sub_83209D68(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8322A178:
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8322A188:
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

__attribute__((alias("__imp__sub_8322A1A0"))) PPC_WEAK_FUNC(sub_8322A1A0);
PPC_FUNC_IMPL(__imp__sub_8322A1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8322A1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83209aa8
	ctx.lr = 0x8322A1B8;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322a208
	if (cr6.eq) goto loc_8322A208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322A208;
	sub_83222030(ctx, base);
loc_8322A208:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322a238
	if (cr6.eq) goto loc_8322A238;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8322a238
	if (cr6.eq) goto loc_8322A238;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320e738
	ctx.lr = 0x8322A238;
	sub_8320E738(ctx, base);
loc_8322A238:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8322a33c
	if (cr6.lt) goto loc_8322A33C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// srw r9,r9,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r3.u8 & 0x3F));
	// addi r8,r11,-163
	ctx.r8.s64 = ctx.r11.s64 + -163;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// cntlzw r5,r10
	ctx.r5.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// and r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8322a33c
	if (!cr6.eq) goto loc_8322A33C;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8322A2B4;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322a324
	if (cr6.eq) goto loc_8322A324;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322a2e4
	if (!cr6.eq) goto loc_8322A2E4;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8322A2E4:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322a30c
	if (cr6.eq) goto loc_8322A30C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x8322a2e4
	if (!cr6.eq) goto loc_8322A2E4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8322A30C:
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8322A324:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,1936
	ctx.r5.s64 = 1936;
	// li r4,160
	ctx.r4.s64 = 160;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d628
	ctx.lr = 0x8322A33C;
	sub_8320D628(ctx, base);
loc_8322A33C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A344"))) PPC_WEAK_FUNC(sub_8322A344);
PPC_FUNC_IMPL(__imp__sub_8322A344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A348"))) PPC_WEAK_FUNC(sub_8322A348);
PPC_FUNC_IMPL(__imp__sub_8322A348) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1934
	cr6.compare<uint32_t>(ctx.r11.u32, 1934, xer);
	// beq cr6,0x8322a374
	if (cr6.eq) goto loc_8322A374;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8322a3e4
	goto loc_8322A3E4;
loc_8322A374:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,24688
	ctx.r8.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322a394
	if (cr6.eq) goto loc_8322A394;
	// addi r3,r11,316
	ctx.r3.s64 = ctx.r11.s64 + 316;
loc_8322A394:
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x83229588
	ctx.lr = 0x8322A39C;
	sub_83229588(ctx, base);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
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
	// beq cr6,0x8322a3cc
	if (cr6.eq) goto loc_8322A3CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322A3CC;
	sub_83222030(ctx, base);
loc_8322A3CC:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,160
	ctx.r10.s64 = 160;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
loc_8322A3E4:
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

__attribute__((alias("__imp__sub_8322A3FC"))) PPC_WEAK_FUNC(sub_8322A3FC);
PPC_FUNC_IMPL(__imp__sub_8322A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A400"))) PPC_WEAK_FUNC(sub_8322A400);
PPC_FUNC_IMPL(__imp__sub_8322A400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,912
	cr6.compare<uint32_t>(ctx.r11.u32, 912, xer);
	// bne cr6,0x8322a414
	if (!cr6.eq) goto loc_8322A414;
	// li r3,343
	ctx.r3.s64 = 343;
	// blr 
	return;
loc_8322A414:
	// cmplwi cr6,r11,800
	cr6.compare<uint32_t>(ctx.r11.u32, 800, xer);
	// bne cr6,0x8322a424
	if (!cr6.eq) goto loc_8322A424;
	// li r3,338
	ctx.r3.s64 = 338;
	// blr 
	return;
loc_8322A424:
	// addi r11,r11,-853
	ctx.r11.s64 = ctx.r11.s64 + -853;
	// li r10,312
	ctx.r10.s64 = 312;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A43C"))) PPC_WEAK_FUNC(sub_8322A43C);
PPC_FUNC_IMPL(__imp__sub_8322A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A440"))) PPC_WEAK_FUNC(sub_8322A440);
PPC_FUNC_IMPL(__imp__sub_8322A440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r8,186
	ctx.r8.s64 = 186;
	// addi r11,r11,26256
	ctx.r11.s64 = ctx.r11.s64 + 26256;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8322A458:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8322a458
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8322A458;
	// li r10,193
	ctx.r10.s64 = 193;
	// sth r9,372(r11)
	PPC_STORE_U16(ctx.r11.u32 + 372, ctx.r9.u16);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// sth r9,374(r11)
	PPC_STORE_U16(ctx.r11.u32 + 374, ctx.r9.u16);
	// sth r9,376(r11)
	PPC_STORE_U16(ctx.r11.u32 + 376, ctx.r9.u16);
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r8,r8,8072
	ctx.r8.s64 = ctx.r8.s64 + 8072;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8322A480:
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322a4d0
	if (cr6.eq) goto loc_8322A4D0;
	// cmplwi cr6,r10,163
	cr6.compare<uint32_t>(ctx.r10.u32, 163, xer);
	// blt cr6,0x8322a4b0
	if (cr6.lt) goto loc_8322A4B0;
	// cmplwi cr6,r10,349
	cr6.compare<uint32_t>(ctx.r10.u32, 349, xer);
	// bge cr6,0x8322a4b8
	if (!cr6.lt) goto loc_8322A4B8;
	// addi r10,r10,-163
	ctx.r10.s64 = ctx.r10.s64 + -163;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u16);
	// b 0x8322a4d0
	goto loc_8322A4D0;
loc_8322A4B0:
	// cmplwi cr6,r10,349
	cr6.compare<uint32_t>(ctx.r10.u32, 349, xer);
	// blt cr6,0x8322a4d0
	if (cr6.lt) goto loc_8322A4D0;
loc_8322A4B8:
	// cmplwi cr6,r10,352
	cr6.compare<uint32_t>(ctx.r10.u32, 352, xer);
	// bge cr6,0x8322a4d0
	if (!cr6.lt) goto loc_8322A4D0;
	// addi r10,r10,-349
	ctx.r10.s64 = ctx.r10.s64 + -349;
	// addi r7,r11,372
	ctx.r7.s64 = ctx.r11.s64 + 372;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r9.u16);
loc_8322A4D0:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8322a480
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8322A480;
	// li r10,1959
	ctx.r10.s64 = 1959;
	// li r9,794
	ctx.r9.s64 = 794;
	// li r8,917
	ctx.r8.s64 = 917;
	// sth r10,374(r11)
	PPC_STORE_U16(ctx.r11.u32 + 374, ctx.r10.u16);
	// sth r9,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r9.u16);
	// sth r8,248(r11)
	PPC_STORE_U16(ctx.r11.u32 + 248, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A4F8"))) PPC_WEAK_FUNC(sub_8322A4F8);
PPC_FUNC_IMPL(__imp__sub_8322A4F8) {
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
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// cmpwi cr6,r3,175
	cr6.compare<int32_t>(ctx.r3.s32, 175, xer);
	// bne cr6,0x8322a524
	if (!cr6.eq) goto loc_8322A524;
	// li r3,1059
	ctx.r3.s64 = 1059;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A524:
	// cmpwi cr6,r3,163
	cr6.compare<int32_t>(ctx.r3.s32, 163, xer);
	// blt cr6,0x8322a558
	if (cr6.lt) goto loc_8322A558;
	// cmpwi cr6,r3,349
	cr6.compare<int32_t>(ctx.r3.s32, 349, xer);
	// bge cr6,0x8322a560
	if (!cr6.lt) goto loc_8322A560;
	// addi r11,r3,-163
	ctx.r11.s64 = ctx.r3.s64 + -163;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,26256
	ctx.r8.s64 = ctx.r10.s64 + 26256;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A558:
	// cmpwi cr6,r3,349
	cr6.compare<int32_t>(ctx.r3.s32, 349, xer);
	// blt cr6,0x8322a590
	if (cr6.lt) goto loc_8322A590;
loc_8322A560:
	// cmpwi cr6,r3,352
	cr6.compare<int32_t>(ctx.r3.s32, 352, xer);
	// bge cr6,0x8322a590
	if (!cr6.lt) goto loc_8322A590;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r3,-349
	ctx.r10.s64 = ctx.r3.s64 + -349;
	// addi r11,r11,26256
	ctx.r11.s64 = ctx.r11.s64 + 26256;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,372
	ctx.r8.s64 = ctx.r11.s64 + 372;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A590:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83221fc8
	ctx.lr = 0x8322A59C;
	sub_83221FC8(ctx, base);
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

__attribute__((alias("__imp__sub_8322A5B0"))) PPC_WEAK_FUNC(sub_8322A5B0);
PPC_FUNC_IMPL(__imp__sub_8322A5B0) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322a660
	if (cr6.eq) goto loc_8322A660;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322a5e0
	if (!cr6.eq) goto loc_8322A5E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8322a5e8
	goto loc_8322A5E8;
loc_8322A5E0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
loc_8322A5E8:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r9,r11,-349
	ctx.r9.s64 = ctx.r11.s64 + -349;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfic r7,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r7.s64 = 162 - ctx.r11.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8322a654
	if (cr6.eq) goto loc_8322A654;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322a62c
	if (!cr6.eq) goto loc_8322A62C;
	// li r3,163
	ctx.r3.s64 = 163;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A62C:
	// addi r11,r3,-163
	ctx.r11.s64 = ctx.r3.s64 + -163;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,8856
	ctx.r8.s64 = ctx.r10.s64 + 8856;
	// lhzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A654:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83221fc8
	ctx.lr = 0x8322A660;
	sub_83221FC8(ctx, base);
loc_8322A660:
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

__attribute__((alias("__imp__sub_8322A674"))) PPC_WEAK_FUNC(sub_8322A674);
PPC_FUNC_IMPL(__imp__sub_8322A674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A678"))) PPC_WEAK_FUNC(sub_8322A678);
PPC_FUNC_IMPL(__imp__sub_8322A678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8322a6e0
	if (cr6.eq) goto loc_8322A6E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r9,r11,8856
	ctx.r9.s64 = ctx.r11.s64 + 8856;
loc_8322A690:
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// beq cr6,0x8322a6e8
	if (cr6.eq) goto loc_8322A6E8;
	// addi r11,r4,-163
	ctx.r11.s64 = ctx.r4.s64 + -163;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322a6d0
	if (cr6.eq) goto loc_8322A6D0;
loc_8322A6B0:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8322a6e8
	if (cr6.eq) goto loc_8322A6E8;
	// addi r11,r11,-163
	ctx.r11.s64 = ctx.r11.s64 + -163;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8322a6b0
	if (!cr6.eq) goto loc_8322A6B0;
loc_8322A6D0:
	// lhzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8322a690
	if (!cr6.eq) goto loc_8322A690;
loc_8322A6E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322A6E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A6F0"))) PPC_WEAK_FUNC(sub_8322A6F0);
PPC_FUNC_IMPL(__imp__sub_8322A6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8322a7e4
	if (cr6.eq) goto loc_8322A7E4;
	// cmpwi cr6,r3,163
	cr6.compare<int32_t>(ctx.r3.s32, 163, xer);
	// beq cr6,0x8322a7f8
	if (cr6.eq) goto loc_8322A7F8;
	// cmpw cr6,r4,r3
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, xer);
	// beq cr6,0x8322a7f8
	if (cr6.eq) goto loc_8322A7F8;
	// cmpwi cr6,r3,322
	cr6.compare<int32_t>(ctx.r3.s32, 322, xer);
	// bne cr6,0x8322a744
	if (!cr6.eq) goto loc_8322A744;
	// li r11,190
	ctx.r11.s64 = 190;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// bl 0x8322a678
	ctx.lr = 0x8322A734;
	sub_8322A678(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A744:
	// cmpwi cr6,r3,310
	cr6.compare<int32_t>(ctx.r3.s32, 310, xer);
	// bne cr6,0x8322a7a4
	if (!cr6.eq) goto loc_8322A7A4;
	// li r11,277
	ctx.r11.s64 = 277;
	// li r10,280
	ctx.r10.s64 = 280;
	// li r9,278
	ctx.r9.s64 = 278;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// li r8,281
	ctx.r8.s64 = 281;
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// li r7,279
	ctx.r7.s64 = 279;
	// sth r9,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r9.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r8,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r8.u16);
	// li r6,283
	ctx.r6.s64 = 283;
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// li r5,282
	ctx.r5.s64 = 282;
	// sth r3,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r3.u16);
	// sth r6,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r6.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r5,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r5.u16);
	// bl 0x8322a678
	ctx.lr = 0x8322A794;
	sub_8322A678(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A7A4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r9,r4,-163
	ctx.r9.s64 = ctx.r4.s64 + -163;
	// addi r10,r11,8856
	ctx.r10.s64 = ctx.r11.s64 + 8856;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322a7e4
	if (cr6.eq) goto loc_8322A7E4;
loc_8322A7C4:
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x8322a7f8
	if (cr6.eq) goto loc_8322A7F8;
	// addi r11,r11,-163
	ctx.r11.s64 = ctx.r11.s64 + -163;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8322a7c4
	if (!cr6.eq) goto loc_8322A7C4;
loc_8322A7E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A7F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A80C"))) PPC_WEAK_FUNC(sub_8322A80C);
PPC_FUNC_IMPL(__imp__sub_8322A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A810"))) PPC_WEAK_FUNC(sub_8322A810);
PPC_FUNC_IMPL(__imp__sub_8322A810) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322a878
	if (cr6.eq) goto loc_8322A878;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r10,r11,-349
	ctx.r10.s64 = ctx.r11.s64 + -349;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subfic r8,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r8.s64 = 162 - ctx.r11.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322a86c
	if (cr6.eq) goto loc_8322A86C;
	// addi r11,r3,-163
	ctx.r11.s64 = ctx.r3.s64 + -163;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,9128
	ctx.r8.s64 = ctx.r10.s64 + 9128;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322A86C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83221fc8
	ctx.lr = 0x8322A878;
	sub_83221FC8(ctx, base);
loc_8322A878:
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

__attribute__((alias("__imp__sub_8322A88C"))) PPC_WEAK_FUNC(sub_8322A88C);
PPC_FUNC_IMPL(__imp__sub_8322A88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A890"))) PPC_WEAK_FUNC(sub_8322A890);
PPC_FUNC_IMPL(__imp__sub_8322A890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-122
	ctx.r10.s64 = ctx.r10.s64 + -122;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x8322a8b0
	if (cr6.lt) goto loc_8322A8B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322A8B0:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r10,8844
	ctx.r8.s64 = ctx.r10.s64 + 8844;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// and r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 & ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322A8C8"))) PPC_WEAK_FUNC(sub_8322A8C8);
PPC_FUNC_IMPL(__imp__sub_8322A8C8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322a978
	if (cr6.eq) goto loc_8322A978;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-2816
	ctx.r11.s64 = ctx.r11.s64 + -2816;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,193
	cr6.compare<uint32_t>(ctx.r11.u32, 193, xer);
	// bge cr6,0x8322a924
	if (!cr6.lt) goto loc_8322A924;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,8072
	ctx.r11.s64 = ctx.r10.s64 + 8072;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
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
loc_8322A924:
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-768
	ctx.r11.s64 = ctx.r11.s64 + -768;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,193
	cr6.compare<uint32_t>(ctx.r11.u32, 193, xer);
	// bge cr6,0x8322a9b4
	if (!cr6.lt) goto loc_8322A9B4;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,8072
	ctx.r8.s64 = ctx.r10.s64 + 8072;
	// lhzx r31,r9,r8
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322a810
	ctx.lr = 0x8322A950;
	sub_8322A810(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 & ctx.r31.u64;
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
loc_8322A978:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-768
	ctx.r10.s64 = ctx.r10.s64 + -768;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,193
	cr6.compare<uint32_t>(ctx.r11.u32, 193, xer);
	// bge cr6,0x8322a9b4
	if (!cr6.lt) goto loc_8322A9B4;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,8072
	ctx.r8.s64 = ctx.r10.s64 + 8072;
	// lhzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
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
loc_8322A9B4:
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

__attribute__((alias("__imp__sub_8322A9CC"))) PPC_WEAK_FUNC(sub_8322A9CC);
PPC_FUNC_IMPL(__imp__sub_8322A9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A9D0"))) PPC_WEAK_FUNC(sub_8322A9D0);
PPC_FUNC_IMPL(__imp__sub_8322A9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83263f38
	sub_83263F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A9D4"))) PPC_WEAK_FUNC(sub_8322A9D4);
PPC_FUNC_IMPL(__imp__sub_8322A9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A9D8"))) PPC_WEAK_FUNC(sub_8322A9D8);
PPC_FUNC_IMPL(__imp__sub_8322A9D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83263500
	sub_83263500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A9DC"))) PPC_WEAK_FUNC(sub_8322A9DC);
PPC_FUNC_IMPL(__imp__sub_8322A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A9E0"))) PPC_WEAK_FUNC(sub_8322A9E0);
PPC_FUNC_IMPL(__imp__sub_8322A9E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83264000
	sub_83264000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A9E4"))) PPC_WEAK_FUNC(sub_8322A9E4);
PPC_FUNC_IMPL(__imp__sub_8322A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A9E8"))) PPC_WEAK_FUNC(sub_8322A9E8);
PPC_FUNC_IMPL(__imp__sub_8322A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322A9F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322aa8c
	if (cr6.eq) goto loc_8322AA8C;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x8322AA0C;
	sub_83222030(ctx, base);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x8322aa3c
	if (!cr6.eq) goto loc_8322AA3C;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x8322AA28;
	sub_83222030(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8322aa6c
	if (cr6.eq) goto loc_8322AA6C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x8322AA38;
	sub_83209D68(ctx, base);
	// b 0x8322aa6c
	goto loc_8322AA6C;
loc_8322AA3C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322aa6c
	if (!cr6.eq) goto loc_8322AA6C;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322aa6c
	if (!cr6.eq) goto loc_8322AA6C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322aa6c
	if (cr6.eq) goto loc_8322AA6C;
	// bl 0x83209d68
	ctx.lr = 0x8322AA68;
	sub_83209D68(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8322AA6C:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_8322AA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AA94"))) PPC_WEAK_FUNC(sub_8322AA94);
PPC_FUNC_IMPL(__imp__sub_8322AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AA98"))) PPC_WEAK_FUNC(sub_8322AA98);
PPC_FUNC_IMPL(__imp__sub_8322AA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8322AAA0;
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
	// bl 0x8322a9e8
	ctx.lr = 0x8322AAB4;
	sub_8322A9E8(ctx, base);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322ab04
	if (cr6.eq) goto loc_8322AB04;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322ab00
	if (!cr6.eq) goto loc_8322AB00;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322aafc
	if (cr6.eq) goto loc_8322AAFC;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// b 0x8322ab00
	goto loc_8322AB00;
loc_8322AAFC:
	// bl 0x83209c20
	ctx.lr = 0x8322AB00;
	sub_83209C20(ctx, base);
loc_8322AB00:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8322AB04:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322AB14;
	sub_832240B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AB1C"))) PPC_WEAK_FUNC(sub_8322AB1C);
PPC_FUNC_IMPL(__imp__sub_8322AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AB20"))) PPC_WEAK_FUNC(sub_8322AB20);
PPC_FUNC_IMPL(__imp__sub_8322AB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322AB28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8322ac34
	if (cr6.eq) goto loc_8322AC34;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x8322abe0
	if (!cr6.lt) goto loc_8322ABE0;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8322ac34
	if (cr6.eq) goto loc_8322AC34;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322ac34
	if (cr6.eq) goto loc_8322AC34;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210848
	ctx.lr = 0x8322AB70;
	sub_83210848(ctx, base);
	// dcbt r0,r30
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8322ac34
	if (!cr6.gt) goto loc_8322AC34;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8322AB90:
	// add r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8322abb8
	if (!cr6.eq) goto loc_8322ABB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x83237ad0
	ctx.lr = 0x8322ABAC;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322abd4
	if (cr6.eq) goto loc_8322ABD4;
loc_8322ABB8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, xer);
	// blt cr6,0x8322ab90
	if (cr6.lt) goto loc_8322AB90;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322ABD4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322ABE0:
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// dcbt r0,r30
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8322ac34
	if (!cr6.gt) goto loc_8322AC34;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322AC14:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8322ac38
	if (cr6.eq) goto loc_8322AC38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8322ac14
	if (cr6.lt) goto loc_8322AC14;
loc_8322AC34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322AC38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AC40"))) PPC_WEAK_FUNC(sub_8322AC40);
PPC_FUNC_IMPL(__imp__sub_8322AC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322AC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8322ad54
	if (cr6.eq) goto loc_8322AD54;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x8322ad00
	if (!cr6.lt) goto loc_8322AD00;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8322ad54
	if (cr6.eq) goto loc_8322AD54;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322ad54
	if (cr6.eq) goto loc_8322AD54;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210848
	ctx.lr = 0x8322AC90;
	sub_83210848(ctx, base);
	// dcbt r0,r30
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// li r5,0
	ctx.r5.s64 = 0;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8322ad54
	if (!cr6.gt) goto loc_8322AD54;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8322ACB0:
	// add r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 + ctx.r30.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8322acd8
	if (!cr6.eq) goto loc_8322ACD8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x83237ad0
	ctx.lr = 0x8322ACCC;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322acf4
	if (cr6.eq) goto loc_8322ACF4;
loc_8322ACD8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, xer);
	// blt cr6,0x8322acb0
	if (cr6.lt) goto loc_8322ACB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322ACF4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322AD00:
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// dcbt r0,r30
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8322ad54
	if (!cr6.gt) goto loc_8322AD54;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322AD34:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8322ad58
	if (cr6.eq) goto loc_8322AD58;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8322ad34
	if (cr6.lt) goto loc_8322AD34;
loc_8322AD54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322AD58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AD60"))) PPC_WEAK_FUNC(sub_8322AD60);
PPC_FUNC_IMPL(__imp__sub_8322AD60) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322ad90
	if (cr6.eq) goto loc_8322AD90;
	// bl 0x832131b0
	ctx.lr = 0x8322AD88;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322adc0
	if (!cr6.eq) goto loc_8322ADC0;
loc_8322AD90:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322AD98;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322adb4
	if (!cr6.eq) goto loc_8322ADB4;
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
loc_8322ADB4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322ADC0:
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

__attribute__((alias("__imp__sub_8322ADD4"))) PPC_WEAK_FUNC(sub_8322ADD4);
PPC_FUNC_IMPL(__imp__sub_8322ADD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322ADD8"))) PPC_WEAK_FUNC(sub_8322ADD8);
PPC_FUNC_IMPL(__imp__sub_8322ADD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322ADE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r29,10(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322ae14
	if (!cr6.eq) goto loc_8322AE14;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x8322ae14
	if (!cr6.lt) goto loc_8322AE14;
loc_8322AE08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322AE14:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322ae34
	if (cr6.eq) goto loc_8322AE34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322AE2C;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322af00
	if (!cr6.eq) goto loc_8322AF00;
loc_8322AE34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322AE3C;
	sub_832895B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322ae08
	if (cr6.eq) goto loc_8322AE08;
	// li r27,1
	ctx.r27.s64 = 1;
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322ae68
	if (!cr6.eq) goto loc_8322AE68;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832277e8
	ctx.lr = 0x8322AE64;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_8322AE68:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r11
	ctx.r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// beq cr6,0x8322aea8
	if (cr6.eq) goto loc_8322AEA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// b 0x8322aec8
	goto loc_8322AEC8;
loc_8322AEA8:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322aec4
	if (!cr6.eq) goto loc_8322AEC4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83209c20
	ctx.lr = 0x8322AEBC;
	sub_83209C20(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x8322aec8
	goto loc_8322AEC8;
loc_8322AEC4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8322AEC8:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x8322aef0
	if (!cr6.lt) goto loc_8322AEF0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83210848
	ctx.lr = 0x8322AEE4;
	sub_83210848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322AEF0:
	// sth r29,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r29.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r28.u8);
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
loc_8322AF00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322AF08"))) PPC_WEAK_FUNC(sub_8322AF08);
PPC_FUNC_IMPL(__imp__sub_8322AF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322AF10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322af40
	if (!cr6.eq) goto loc_8322AF40;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x8322af40
	if (!cr6.lt) goto loc_8322AF40;
loc_8322AF34:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322AF40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322ac40
	ctx.lr = 0x8322AF4C;
	sub_8322AC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322b024
	if (!cr6.eq) goto loc_8322B024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322AF5C;
	sub_832895B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322af34
	if (cr6.eq) goto loc_8322AF34;
	// li r27,2
	ctx.r27.s64 = 2;
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322af88
	if (!cr6.eq) goto loc_8322AF88;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832277e8
	ctx.lr = 0x8322AF84;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_8322AF88:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 & ctx.r11.u64;
	// sth r29,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r29.u16);
	// lbz r7,10(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8322afc8
	if (cr6.eq) goto loc_8322AFC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// b 0x8322afe8
	goto loc_8322AFE8;
loc_8322AFC8:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322afe4
	if (!cr6.eq) goto loc_8322AFE4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83209c20
	ctx.lr = 0x8322AFDC;
	sub_83209C20(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x8322afe8
	goto loc_8322AFE8;
loc_8322AFE4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8322AFE8:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// bge cr6,0x8322b010
	if (!cr6.lt) goto loc_8322B010;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83210848
	ctx.lr = 0x8322B004;
	sub_83210848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322B010:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r28.u8);
	// stb r27,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r27.u8);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
loc_8322B024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B02C"))) PPC_WEAK_FUNC(sub_8322B02C);
PPC_FUNC_IMPL(__imp__sub_8322B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B030"))) PPC_WEAK_FUNC(sub_8322B030);
PPC_FUNC_IMPL(__imp__sub_8322B030) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322b054
	if (cr6.eq) goto loc_8322B054;
	// bl 0x83286150
	ctx.lr = 0x8322B054;
	sub_83286150(ctx, base);
loc_8322B054:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322b064
	if (cr6.eq) goto loc_8322B064;
	// bl 0x83286150
	ctx.lr = 0x8322B064;
	sub_83286150(ctx, base);
loc_8322B064:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8322B084"))) PPC_WEAK_FUNC(sub_8322B084);
PPC_FUNC_IMPL(__imp__sub_8322B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B088"))) PPC_WEAK_FUNC(sub_8322B088);
PPC_FUNC_IMPL(__imp__sub_8322B088) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8322B09C;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B0B8"))) PPC_WEAK_FUNC(sub_8322B0B8);
PPC_FUNC_IMPL(__imp__sub_8322B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
loc_8322B0C8:
	// lhz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// bne cr6,0x8322b0c8
	if (!cr6.eq) goto loc_8322B0C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B0FC"))) PPC_WEAK_FUNC(sub_8322B0FC);
PPC_FUNC_IMPL(__imp__sub_8322B0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B100"))) PPC_WEAK_FUNC(sub_8322B100);
PPC_FUNC_IMPL(__imp__sub_8322B100) {
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
	// rlwinm r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// beq cr6,0x8322b148
	if (cr6.eq) goto loc_8322B148;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322b148
	if (cr6.eq) goto loc_8322B148;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 65536;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_8322B148:
	// rlwinm r10,r4,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322b168
	if (cr6.eq) goto loc_8322B168;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322b168
	if (cr6.eq) goto loc_8322B168;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8322B168:
	// rlwinm r31,r4,0,21,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7F0;
	// rlwinm r31,r31,0,27,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFE1F;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8322b1d4
	if (cr6.eq) goto loc_8322B1D4;
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x8322a890
	ctx.lr = 0x8322B184;
	sub_8322A890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322b1d4
	if (cr6.eq) goto loc_8322B1D4;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322b1d4
	if (cr6.eq) goto loc_8322B1D4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_8322B1A4:
	// lhz r8,84(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 84);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x8322b1d4
	if (cr6.eq) goto loc_8322B1D4;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// bne cr6,0x8322b1a4
	if (!cr6.eq) goto loc_8322B1A4;
loc_8322B1D4:
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

__attribute__((alias("__imp__sub_8322B1EC"))) PPC_WEAK_FUNC(sub_8322B1EC);
PPC_FUNC_IMPL(__imp__sub_8322B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B1F0"))) PPC_WEAK_FUNC(sub_8322B1F0);
PPC_FUNC_IMPL(__imp__sub_8322B1F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8322b290
	if (cr6.eq) goto loc_8322B290;
	// dcbt r0,r7
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322b290
	if (!cr6.gt) goto loc_8322B290;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r11,9504
	ctx.r6.s64 = ctx.r11.s64 + 9504;
loc_8322B22C:
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8322b280
	if (!cr6.eq) goto loc_8322B280;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r11,-2688
	xer.ca = ctx.r11.u32 > 2687;
	ctx.r11.s64 = ctx.r11.s64 + -2688;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8322b260
	if (cr0.lt) goto loc_8322B260;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x8322b260
	if (!cr6.lt) goto loc_8322B260;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// b 0x8322b278
	goto loc_8322B278;
loc_8322B260:
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// bne cr6,0x8322b278
	if (!cr6.eq) goto loc_8322B278;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// bne cr6,0x8322b278
	if (!cr6.eq) goto loc_8322B278;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8322B278:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_8322B280:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// blt cr6,0x8322b22c
	if (cr6.lt) goto loc_8322B22C;
loc_8322B290:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// sth r4,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r4.u16);
	// b 0x8322b100
	sub_8322B100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B29C"))) PPC_WEAK_FUNC(sub_8322B29C);
PPC_FUNC_IMPL(__imp__sub_8322B29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B2A0"))) PPC_WEAK_FUNC(sub_8322B2A0);
PPC_FUNC_IMPL(__imp__sub_8322B2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322b2c4
	if (cr6.eq) goto loc_8322B2C4;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
loc_8322B2C4:
	// lis r12,0
	ctx.r12.s64 = 0;
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// ori r12,r12,65515
	ctx.r12.u64 = ctx.r12.u64 | 65515;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B2E0"))) PPC_WEAK_FUNC(sub_8322B2E0);
PPC_FUNC_IMPL(__imp__sub_8322B2E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322B2E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,-4
	ctx.r28.s64 = -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322b310
	if (!cr6.eq) goto loc_8322B310;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322B310:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322B31C;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322b344
	if (cr6.eq) goto loc_8322B344;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322B338;
	sub_832240B8(ctx, base);
loc_8322B338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322B344:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322b3e4
	if (cr6.eq) goto loc_8322B3E4;
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322b3e4
	if (cr6.eq) goto loc_8322B3E4;
	// cmplwi cr6,r11,163
	cr6.compare<uint32_t>(ctx.r11.u32, 163, xer);
	// beq cr6,0x8322b420
	if (cr6.eq) goto loc_8322B420;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// beq cr6,0x8322b3d0
	if (cr6.eq) goto loc_8322B3D0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8322b394
	if (cr6.eq) goto loc_8322B394;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322b39c
	if (!cr6.eq) goto loc_8322B39C;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322B38C;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322b398
	if (!cr6.eq) goto loc_8322B398;
loc_8322B394:
	// bl 0x83227908
	ctx.lr = 0x8322B398;
	sub_83227908(ctx, base);
loc_8322B398:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8322B39C:
	// lhz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// li r3,12
	ctx.r3.s64 = 12;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83221c30
	ctx.lr = 0x8322B3AC;
	sub_83221C30(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r10,9616
	ctx.r8.s64 = ctx.r10.s64 + 9616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,9568
	ctx.r4.s64 = ctx.r9.s64 + 9568;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322B3CC;
	sub_832085E8(ctx, base);
	// b 0x8322b3e4
	goto loc_8322B3E4;
loc_8322B3D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832173f0
	ctx.lr = 0x8322B3D8;
	sub_832173F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322b338
	if (cr6.eq) goto loc_8322B338;
loc_8322B3E4:
	// lhz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322b414
	if (cr6.eq) goto loc_8322B414;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83201b60
	ctx.lr = 0x8322B3FC;
	sub_83201B60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322b414
	if (cr6.eq) goto loc_8322B414;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8324cc60
	ctx.lr = 0x8322B410;
	sub_8324CC60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8322B414:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322B420:
	// li r28,-4
	ctx.r28.s64 = -4;
	// b 0x8322b3e4
	goto loc_8322B3E4;
}

__attribute__((alias("__imp__sub_8322B428"))) PPC_WEAK_FUNC(sub_8322B428);
PPC_FUNC_IMPL(__imp__sub_8322B428) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r11,6412
	ctx.r5.s64 = ctx.r11.s64 + 6412;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_8322B44C:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322b4e8
	if (!cr6.eq) goto loc_8322B4E8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322b47c
	if (!cr6.eq) goto loc_8322B47C;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x8322b4f0
	goto loc_8322B4F0;
loc_8322B47C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322b494
	if (!cr6.eq) goto loc_8322B494;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x8322b4f0
	goto loc_8322B4F0;
loc_8322B494:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x8322b4c8
	if (!cr0.eq) goto loc_8322B4C8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8322B4A8:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322b4d8
	if (cr6.eq) goto loc_8322B4D8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8322b4a8
	if (cr0.eq) goto loc_8322B4A8;
loc_8322B4C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x8322b4f0
	goto loc_8322B4F0;
loc_8322B4D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x8322b4f0
	goto loc_8322B4F0;
loc_8322B4E8:
	// lhz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
loc_8322B4F0:
	// bne cr6,0x8322b530
	if (!cr6.eq) goto loc_8322B530;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322b530
	if (cr6.eq) goto loc_8322B530;
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322b524
	if (!cr6.eq) goto loc_8322B524;
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// bl 0x83237ad0
	ctx.lr = 0x8322B518;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x8322b52c
	goto loc_8322B52C;
loc_8322B524:
	// lhz r10,66(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 66);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
loc_8322B52C:
	// beq cr6,0x8322b558
	if (cr6.eq) goto loc_8322B558;
loc_8322B530:
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// blt cr6,0x8322b44c
	if (cr6.lt) goto loc_8322B44C;
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
loc_8322B558:
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

__attribute__((alias("__imp__sub_8322B570"))) PPC_WEAK_FUNC(sub_8322B570);
PPC_FUNC_IMPL(__imp__sub_8322B570) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,29
	cr6.compare<int32_t>(ctx.r4.s32, 29, xer);
	// bge cr6,0x8322b5ac
	if (!cr6.lt) goto loc_8322B5AC;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// beq cr6,0x8322b598
	if (cr6.eq) goto loc_8322B598;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bne cr6,0x8322b6e8
	if (!cr6.eq) goto loc_8322B6E8;
loc_8322B598:
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
loc_8322B5AC:
	// cmpwi cr6,r4,134
	cr6.compare<int32_t>(ctx.r4.s32, 134, xer);
	// bge cr6,0x8322b5dc
	if (!cr6.lt) goto loc_8322B5DC;
	// cmpwi cr6,r4,55
	cr6.compare<int32_t>(ctx.r4.s32, 55, xer);
	// beq cr6,0x8322b598
	if (cr6.eq) goto loc_8322B598;
loc_8322B5BC:
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322B5DC:
	// cmpwi cr6,r4,163
	cr6.compare<int32_t>(ctx.r4.s32, 163, xer);
	// bge cr6,0x8322b6e0
	if (!cr6.lt) goto loc_8322B6E0;
	// addi r10,r4,-136
	ctx.r10.s64 = ctx.r4.s64 + -136;
	// cmplwi cr6,r10,26
	cr6.compare<uint32_t>(ctx.r10.u32, 26, xer);
	// bgt cr6,0x8322b6e8
	if (cr6.gt) goto loc_8322B6E8;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18936
	ctx.r12.s64 = ctx.r12.s64 + -18936;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8322B694;
	case 1:
		goto loc_8322B6E8;
	case 2:
		goto loc_8322B6B4;
	case 3:
		goto loc_8322B6B4;
	case 4:
		goto loc_8322B674;
	case 5:
		goto loc_8322B6B4;
	case 6:
		goto loc_8322B6C0;
	case 7:
		goto loc_8322B6B4;
	case 8:
		goto loc_8322B6B4;
	case 9:
		goto loc_8322B6B4;
	case 10:
		goto loc_8322B6E8;
	case 11:
		goto loc_8322B6B4;
	case 12:
		goto loc_8322B6B4;
	case 13:
		goto loc_8322B6B4;
	case 14:
		goto loc_8322B6E8;
	case 15:
		goto loc_8322B6B4;
	case 16:
		goto loc_8322B6E8;
	case 17:
		goto loc_8322B6E8;
	case 18:
		goto loc_8322B5BC;
	case 19:
		goto loc_8322B6B4;
	case 20:
		goto loc_8322B6E8;
	case 21:
		goto loc_8322B6B4;
	case 22:
		goto loc_8322B6B4;
	case 23:
		goto loc_8322B6B4;
	case 24:
		goto loc_8322B6B4;
	case 25:
		goto loc_8322B6B4;
	case 26:
		goto loc_8322B6B4;
	default:
		return;
	}
	// lwz r25,-18796(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18796);
	// lwz r25,-18712(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18712);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18828(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18828);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18752(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18752);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18712(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18712);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18712(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18712);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18712(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18712);
	// lwz r25,-18712(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18712);
	// lwz r25,-19012(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -19012);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18712(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18712);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
	// lwz r25,-18764(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -18764);
loc_8322B674:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8322B67C:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
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
loc_8322B694:
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322B6B4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8322b67c
	goto loc_8322B67C;
loc_8322B6C0:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322B6E0:
	// cmpwi cr6,r4,164
	cr6.compare<int32_t>(ctx.r4.s32, 164, xer);
	// beq cr6,0x8322b6f8
	if (cr6.eq) goto loc_8322B6F8;
loc_8322B6E8:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x83221fc8
	ctx.lr = 0x8322B6F8;
	sub_83221FC8(ctx, base);
loc_8322B6F8:
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

__attribute__((alias("__imp__sub_8322B70C"))) PPC_WEAK_FUNC(sub_8322B70C);
PPC_FUNC_IMPL(__imp__sub_8322B70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B710"))) PPC_WEAK_FUNC(sub_8322B710);
PPC_FUNC_IMPL(__imp__sub_8322B710) {
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
	// bl 0x8322ab20
	ctx.lr = 0x8322B728;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322b748
	if (!cr6.eq) goto loc_8322B748;
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
loc_8322B748:
	// bl 0x8322a9e8
	ctx.lr = 0x8322B74C;
	sub_8322A9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832899e8
	ctx.lr = 0x8322B754;
	sub_832899E8(ctx, base);
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

__attribute__((alias("__imp__sub_8322B76C"))) PPC_WEAK_FUNC(sub_8322B76C);
PPC_FUNC_IMPL(__imp__sub_8322B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B770"))) PPC_WEAK_FUNC(sub_8322B770);
PPC_FUNC_IMPL(__imp__sub_8322B770) {
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
	// bl 0x8322ac40
	ctx.lr = 0x8322B788;
	sub_8322AC40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322b7a8
	if (!cr6.eq) goto loc_8322B7A8;
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
loc_8322B7A8:
	// bl 0x8322a9e8
	ctx.lr = 0x8322B7AC;
	sub_8322A9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832899e8
	ctx.lr = 0x8322B7B4;
	sub_832899E8(ctx, base);
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

__attribute__((alias("__imp__sub_8322B7CC"))) PPC_WEAK_FUNC(sub_8322B7CC);
PPC_FUNC_IMPL(__imp__sub_8322B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B7D0"))) PPC_WEAK_FUNC(sub_8322B7D0);
PPC_FUNC_IMPL(__imp__sub_8322B7D0) {
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
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322b82c
	if (cr6.eq) goto loc_8322B82C;
	// dcbt r0,r9
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8322b82c
	if (!cr6.gt) goto loc_8322B82C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B80C:
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x8322b844
	if (cr6.eq) goto loc_8322B844;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8322b80c
	if (cr6.lt) goto loc_8322B80C;
loc_8322B82C:
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
loc_8322B844:
	// bl 0x8322a9e8
	ctx.lr = 0x8322B848;
	sub_8322A9E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832899e8
	ctx.lr = 0x8322B850;
	sub_832899E8(ctx, base);
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

__attribute__((alias("__imp__sub_8322B868"))) PPC_WEAK_FUNC(sub_8322B868);
PPC_FUNC_IMPL(__imp__sub_8322B868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322b880
	if (!cr6.eq) goto loc_8322B880;
	// blr 
	return;
loc_8322B880:
	// dcbt r0,r10
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8322B8A0:
	// lbz r9,5(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322b8b0
	if (cr6.eq) goto loc_8322B8B0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8322B8B0:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x8322b8a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8322B8A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B8C0"))) PPC_WEAK_FUNC(sub_8322B8C0);
PPC_FUNC_IMPL(__imp__sub_8322B8C0) {
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
	// bl 0x8322ab20
	ctx.lr = 0x8322B8D8;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322b8fc
	if (!cr6.eq) goto loc_8322B8FC;
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
loc_8322B8FC:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322B90C;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_8322B924"))) PPC_WEAK_FUNC(sub_8322B924);
PPC_FUNC_IMPL(__imp__sub_8322B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B928"))) PPC_WEAK_FUNC(sub_8322B928);
PPC_FUNC_IMPL(__imp__sub_8322B928) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322B94C;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x8322b968
	if (!cr6.eq) goto loc_8322B968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8322B964;
	sub_8320CF60(ctx, base);
	// b 0x8322b974
	goto loc_8322B974;
loc_8322B968:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322B974;
	sub_832240B8(ctx, base);
loc_8322B974:
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

__attribute__((alias("__imp__sub_8322B98C"))) PPC_WEAK_FUNC(sub_8322B98C);
PPC_FUNC_IMPL(__imp__sub_8322B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B990"))) PPC_WEAK_FUNC(sub_8322B990);
PPC_FUNC_IMPL(__imp__sub_8322B990) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322B9B4;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x8322b9d0
	if (!cr6.eq) goto loc_8322B9D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8322B9CC;
	sub_8322E5B0(ctx, base);
	// b 0x8322b9dc
	goto loc_8322B9DC;
loc_8322B9D0:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322B9DC;
	sub_832240B8(ctx, base);
loc_8322B9DC:
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

__attribute__((alias("__imp__sub_8322B9F4"))) PPC_WEAK_FUNC(sub_8322B9F4);
PPC_FUNC_IMPL(__imp__sub_8322B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B9F8"))) PPC_WEAK_FUNC(sub_8322B9F8);
PPC_FUNC_IMPL(__imp__sub_8322B9F8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322BA1C;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x8322ba38
	if (!cr6.eq) goto loc_8322BA38;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x83223c38
	ctx.lr = 0x8322BA34;
	sub_83223C38(ctx, base);
	// b 0x8322ba44
	goto loc_8322BA44;
loc_8322BA38:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322BA44;
	sub_832240B8(ctx, base);
loc_8322BA44:
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

__attribute__((alias("__imp__sub_8322BA5C"))) PPC_WEAK_FUNC(sub_8322BA5C);
PPC_FUNC_IMPL(__imp__sub_8322BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BA60"))) PPC_WEAK_FUNC(sub_8322BA60);
PPC_FUNC_IMPL(__imp__sub_8322BA60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322BA78;
	sub_8322AB20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322bad8
	if (!cr6.eq) goto loc_8322BAD8;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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
	// beq cr6,0x8322bab0
	if (cr6.eq) goto loc_8322BAB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322BAB0;
	sub_83222030(ctx, base);
loc_8322BAB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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
loc_8322BAD8:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322BAE8;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_8322BAFC"))) PPC_WEAK_FUNC(sub_8322BAFC);
PPC_FUNC_IMPL(__imp__sub_8322BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BB00"))) PPC_WEAK_FUNC(sub_8322BB00);
PPC_FUNC_IMPL(__imp__sub_8322BB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322BB08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x8322bd20
	if (!cr6.eq) goto loc_8322BD20;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8322bc78
	if (cr6.eq) goto loc_8322BC78;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x8322bd20
	if (!cr6.lt) goto loc_8322BD20;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,10000
	cr6.compare<uint32_t>(ctx.r11.u32, 10000, xer);
	// bge cr6,0x8322bd20
	if (!cr6.lt) goto loc_8322BD20;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83221440
	ctx.lr = 0x8322BB4C;
	sub_83221440(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322bd20
	if (cr6.eq) goto loc_8322BD20;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322bbe8
	if (cr6.eq) goto loc_8322BBE8;
	// dcbt r0,r11
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322bbe8
	if (!cr6.gt) goto loc_8322BBE8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8322BB98:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8322bbbc
	if (!cr6.eq) goto loc_8322BBBC;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x83264c10
	ctx.lr = 0x8322BBB8;
	sub_83264C10(ctx, base);
	// b 0x8322bbc4
	goto loc_8322BBC4;
loc_8322BBBC:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x8322bb00
	ctx.lr = 0x8322BBC4;
	sub_8322BB00(ctx, base);
loc_8322BBC4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322bc78
	if (!cr6.eq) goto loc_8322BC78;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8322bb98
	if (cr6.lt) goto loc_8322BB98;
loc_8322BBE8:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(ctx.r11.u32, 122, xer);
	// bgt cr6,0x8322bc8c
	if (cr6.gt) goto loc_8322BC8C;
	// beq cr6,0x8322bc94
	if (cr6.eq) goto loc_8322BC94;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// beq cr6,0x8322bc08
	if (cr6.eq) goto loc_8322BC08;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bne cr6,0x8322bd10
	if (!cr6.eq) goto loc_8322BD10;
loc_8322BC08:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322bc68
	if (!cr6.gt) goto loc_8322BC68;
loc_8322BC18:
	// srawi r11,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8322bb00
	ctx.lr = 0x8322BC4C;
	sub_8322BB00(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322bc84
	if (!cr6.eq) goto loc_8322BC84;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x8322bc18
	if (cr6.lt) goto loc_8322BC18;
loc_8322BC68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322BC6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322bd10
	if (cr6.eq) goto loc_8322BD10;
loc_8322BC78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322BC84:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8322bc6c
	goto loc_8322BC6C;
loc_8322BC8C:
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// bne cr6,0x8322bd10
	if (!cr6.eq) goto loc_8322BD10;
loc_8322BC94:
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8322bd00
	if (cr6.eq) goto loc_8322BD00;
	// li r30,13
	ctx.r30.s64 = 13;
loc_8322BCA4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322bcf4
	if (!cr6.eq) goto loc_8322BCF4;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// bl 0x8322bb00
	ctx.lr = 0x8322BCDC;
	sub_8322BB00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322BCE8;
	sub_83222030(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8322bd2c
	if (!cr6.eq) goto loc_8322BD2C;
loc_8322BCF4:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322bca4
	if (!cr6.eq) goto loc_8322BCA4;
loc_8322BD00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322BD04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322bc78
	if (!cr6.eq) goto loc_8322BC78;
loc_8322BD10:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
loc_8322BD20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322BD2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8322bd04
	goto loc_8322BD04;
}

__attribute__((alias("__imp__sub_8322BD34"))) PPC_WEAK_FUNC(sub_8322BD34);
PPC_FUNC_IMPL(__imp__sub_8322BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BD38"))) PPC_WEAK_FUNC(sub_8322BD38);
PPC_FUNC_IMPL(__imp__sub_8322BD38) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x8322bb00
	ctx.lr = 0x8322BD60;
	sub_8322BB00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322BD70"))) PPC_WEAK_FUNC(sub_8322BD70);
PPC_FUNC_IMPL(__imp__sub_8322BD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322BD78;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322BD90;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322bdb4
	if (!cr6.eq) goto loc_8322BDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322BDA0;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322bdc0
	if (cr6.eq) goto loc_8322BDC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322BDB4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322bdcc
	if (!cr6.eq) goto loc_8322BDCC;
loc_8322BDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8322BDCC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322BDDC;
	sub_832240B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322BDE8"))) PPC_WEAK_FUNC(sub_8322BDE8);
PPC_FUNC_IMPL(__imp__sub_8322BDE8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322add8
	ctx.lr = 0x8322BE08;
	sub_8322ADD8(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322be34
	if (cr6.eq) goto loc_8322BE34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322BE34;
	sub_83222030(ctx, base);
loc_8322BE34:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8322BE58"))) PPC_WEAK_FUNC(sub_8322BE58);
PPC_FUNC_IMPL(__imp__sub_8322BE58) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322BE7C;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322bea0
	if (!cr6.eq) goto loc_8322BEA0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322BE8C;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322bea0
	if (cr6.eq) goto loc_8322BEA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322BEA0:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322becc
	if (cr6.eq) goto loc_8322BECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322BECC;
	sub_83222030(ctx, base);
loc_8322BECC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8322BEF0"))) PPC_WEAK_FUNC(sub_8322BEF0);
PPC_FUNC_IMPL(__imp__sub_8322BEF0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322add8
	ctx.lr = 0x8322BF10;
	sub_8322ADD8(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322bf3c
	if (cr6.eq) goto loc_8322BF3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322BF3C;
	sub_83222030(ctx, base);
loc_8322BF3C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8322BF60"))) PPC_WEAK_FUNC(sub_8322BF60);
PPC_FUNC_IMPL(__imp__sub_8322BF60) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322BF84;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322bfa8
	if (!cr6.eq) goto loc_8322BFA8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322BF94;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322bfa8
	if (cr6.eq) goto loc_8322BFA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322BFA8:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322bfd4
	if (cr6.eq) goto loc_8322BFD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322BFD4;
	sub_83222030(ctx, base);
loc_8322BFD4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8322BFF8"))) PPC_WEAK_FUNC(sub_8322BFF8);
PPC_FUNC_IMPL(__imp__sub_8322BFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8322add8
	ctx.lr = 0x8322C014;
	sub_8322ADD8(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x8322C020;
	sub_832248D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322C034"))) PPC_WEAK_FUNC(sub_8322C034);
PPC_FUNC_IMPL(__imp__sub_8322C034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C038"))) PPC_WEAK_FUNC(sub_8322C038);
PPC_FUNC_IMPL(__imp__sub_8322C038) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C05C;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c080
	if (!cr6.eq) goto loc_8322C080;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C06C;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c080
	if (cr6.eq) goto loc_8322C080;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C080:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x832248d8
	ctx.lr = 0x8322C08C;
	sub_832248D8(ctx, base);
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

__attribute__((alias("__imp__sub_8322C0A4"))) PPC_WEAK_FUNC(sub_8322C0A4);
PPC_FUNC_IMPL(__imp__sub_8322C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C0A8"))) PPC_WEAK_FUNC(sub_8322C0A8);
PPC_FUNC_IMPL(__imp__sub_8322C0A8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322add8
	ctx.lr = 0x8322C0C4;
	sub_8322ADD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223a60
	ctx.lr = 0x8322C0D0;
	sub_83223A60(ctx, base);
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

__attribute__((alias("__imp__sub_8322C0E4"))) PPC_WEAK_FUNC(sub_8322C0E4);
PPC_FUNC_IMPL(__imp__sub_8322C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C0E8"))) PPC_WEAK_FUNC(sub_8322C0E8);
PPC_FUNC_IMPL(__imp__sub_8322C0E8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322add8
	ctx.lr = 0x8322C104;
	sub_8322ADD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223af0
	ctx.lr = 0x8322C110;
	sub_83223AF0(ctx, base);
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

__attribute__((alias("__imp__sub_8322C124"))) PPC_WEAK_FUNC(sub_8322C124);
PPC_FUNC_IMPL(__imp__sub_8322C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C128"))) PPC_WEAK_FUNC(sub_8322C128);
PPC_FUNC_IMPL(__imp__sub_8322C128) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C14C;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c170
	if (!cr6.eq) goto loc_8322C170;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C15C;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c170
	if (cr6.eq) goto loc_8322C170;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C170:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223a60
	ctx.lr = 0x8322C17C;
	sub_83223A60(ctx, base);
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

__attribute__((alias("__imp__sub_8322C194"))) PPC_WEAK_FUNC(sub_8322C194);
PPC_FUNC_IMPL(__imp__sub_8322C194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C198"))) PPC_WEAK_FUNC(sub_8322C198);
PPC_FUNC_IMPL(__imp__sub_8322C198) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C1BC;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c1e0
	if (!cr6.eq) goto loc_8322C1E0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C1CC;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c1e0
	if (cr6.eq) goto loc_8322C1E0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C1E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223af0
	ctx.lr = 0x8322C1EC;
	sub_83223AF0(ctx, base);
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

__attribute__((alias("__imp__sub_8322C204"))) PPC_WEAK_FUNC(sub_8322C204);
PPC_FUNC_IMPL(__imp__sub_8322C204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C208"))) PPC_WEAK_FUNC(sub_8322C208);
PPC_FUNC_IMPL(__imp__sub_8322C208) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C22C;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c250
	if (!cr6.eq) goto loc_8322C250;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C23C;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c250
	if (cr6.eq) goto loc_8322C250;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C250:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223bd0
	ctx.lr = 0x8322C25C;
	sub_83223BD0(ctx, base);
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

__attribute__((alias("__imp__sub_8322C274"))) PPC_WEAK_FUNC(sub_8322C274);
PPC_FUNC_IMPL(__imp__sub_8322C274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C278"))) PPC_WEAK_FUNC(sub_8322C278);
PPC_FUNC_IMPL(__imp__sub_8322C278) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8322add8
	ctx.lr = 0x8322C294;
	sub_8322ADD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223c38
	ctx.lr = 0x8322C2A0;
	sub_83223C38(ctx, base);
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

__attribute__((alias("__imp__sub_8322C2B4"))) PPC_WEAK_FUNC(sub_8322C2B4);
PPC_FUNC_IMPL(__imp__sub_8322C2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C2B8"))) PPC_WEAK_FUNC(sub_8322C2B8);
PPC_FUNC_IMPL(__imp__sub_8322C2B8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C2DC;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c300
	if (!cr6.eq) goto loc_8322C300;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C2EC;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c300
	if (cr6.eq) goto loc_8322C300;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r31,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r31.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C300:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83223d00
	ctx.lr = 0x8322C30C;
	sub_83223D00(ctx, base);
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

__attribute__((alias("__imp__sub_8322C324"))) PPC_WEAK_FUNC(sub_8322C324);
PPC_FUNC_IMPL(__imp__sub_8322C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C328"))) PPC_WEAK_FUNC(sub_8322C328);
PPC_FUNC_IMPL(__imp__sub_8322C328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8322C330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8322add8
	ctx.lr = 0x8322C344;
	sub_8322ADD8(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322c370
	if (cr6.eq) goto loc_8322C370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C370;
	sub_83222030(ctx, base);
loc_8322C370:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C388"))) PPC_WEAK_FUNC(sub_8322C388);
PPC_FUNC_IMPL(__imp__sub_8322C388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322C390;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C3AC;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c3d0
	if (!cr6.eq) goto loc_8322C3D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C3BC;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c3d0
	if (cr6.eq) goto loc_8322C3D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C3D0:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322c3fc
	if (cr6.eq) goto loc_8322C3FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C3FC;
	sub_83222030(ctx, base);
loc_8322C3FC:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C414"))) PPC_WEAK_FUNC(sub_8322C414);
PPC_FUNC_IMPL(__imp__sub_8322C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C418"))) PPC_WEAK_FUNC(sub_8322C418);
PPC_FUNC_IMPL(__imp__sub_8322C418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322C420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bgt cr6,0x8322c44c
	if (cr6.gt) goto loc_8322C44C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x832897b0
	ctx.lr = 0x8322C44C;
	sub_832897B0(ctx, base);
loc_8322C44C:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r5,r6,8400
	ctx.r5.u64 = ctx.r6.u64 | 8400;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lhz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sraw r11,r5,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r11.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322c49c
	if (cr6.eq) goto loc_8322C49C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C49C;
	sub_83222030(ctx, base);
loc_8322C49C:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C4B4"))) PPC_WEAK_FUNC(sub_8322C4B4);
PPC_FUNC_IMPL(__imp__sub_8322C4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C4B8"))) PPC_WEAK_FUNC(sub_8322C4B8);
PPC_FUNC_IMPL(__imp__sub_8322C4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8322C4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8322add8
	ctx.lr = 0x8322C4D4;
	sub_8322ADD8(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322c500
	if (cr6.eq) goto loc_8322C500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C500;
	sub_83222030(ctx, base);
loc_8322C500:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C524"))) PPC_WEAK_FUNC(sub_8322C524);
PPC_FUNC_IMPL(__imp__sub_8322C524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C528"))) PPC_WEAK_FUNC(sub_8322C528);
PPC_FUNC_IMPL(__imp__sub_8322C528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322C530;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8322af08
	ctx.lr = 0x8322C548;
	sub_8322AF08(ctx, base);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322c574
	if (cr6.eq) goto loc_8322C574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C574;
	sub_83222030(ctx, base);
loc_8322C574:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lhz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addic. r11,r7,-2688
	xer.ca = ctx.r7.u32 > 2687;
	ctx.r11.s64 = ctx.r7.s64 + -2688;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8322c5bc
	if (cr0.lt) goto loc_8322C5BC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x8322c5bc
	if (!cr6.lt) goto loc_8322C5BC;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r10,9504
	ctx.r8.s64 = ctx.r10.s64 + 9504;
	// lhzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// b 0x8322c5d4
	goto loc_8322C5D4;
loc_8322C5BC:
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// bne cr6,0x8322c5d4
	if (!cr6.eq) goto loc_8322C5D4;
	// lhz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// bne cr6,0x8322c5d4
	if (!cr6.eq) goto loc_8322C5D4;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8322C5D4:
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8322c5f4
	if (cr6.eq) goto loc_8322C5F4;
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// sth r10,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r10.u16);
	// bl 0x8322b100
	ctx.lr = 0x8322C5F4;
	sub_8322B100(ctx, base);
loc_8322C5F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C5FC"))) PPC_WEAK_FUNC(sub_8322C5FC);
PPC_FUNC_IMPL(__imp__sub_8322C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C600"))) PPC_WEAK_FUNC(sub_8322C600);
PPC_FUNC_IMPL(__imp__sub_8322C600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322C608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832131b0
	ctx.lr = 0x8322C624;
	sub_832131B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c648
	if (!cr6.eq) goto loc_8322C648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832895b0
	ctx.lr = 0x8322C634;
	sub_832895B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322c648
	if (cr6.eq) goto loc_8322C648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322C648:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x8322c674
	if (cr6.eq) goto loc_8322C674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C674;
	sub_83222030(ctx, base);
loc_8322C674:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C698"))) PPC_WEAK_FUNC(sub_8322C698);
PPC_FUNC_IMPL(__imp__sub_8322C698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322C6A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// bgt cr6,0x8322c6cc
	if (cr6.gt) goto loc_8322C6CC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x832897b0
	ctx.lr = 0x8322C6CC;
	sub_832897B0(ctx, base);
loc_8322C6CC:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r5,r6,8400
	ctx.r5.u64 = ctx.r6.u64 | 8400;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// stb r9,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r9.u8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lhz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sraw r11,r5,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r11.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322c71c
	if (cr6.eq) goto loc_8322C71C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C71C;
	sub_83222030(ctx, base);
loc_8322C71C:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r28,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r28.u16);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322C740"))) PPC_WEAK_FUNC(sub_8322C740);
PPC_FUNC_IMPL(__imp__sub_8322C740) {
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
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bgt cr6,0x8322c770
	if (cr6.gt) goto loc_8322C770;
	// bl 0x832897b0
	ctx.lr = 0x8322C770;
	sub_832897B0(ctx, base);
loc_8322C770:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,5
	ctx.r9.s64 = 5;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,8
	ctx.r3.s64 = 8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x83209aa8
	ctx.lr = 0x8322C79C;
	sub_83209AA8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r5,8400
	ctx.r4.u64 = ctx.r5.u64 | 8400;
	// lfs f0,9008(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sraw r10,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r10.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322c7dc
	if (cr6.eq) goto loc_8322C7DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322C7DC;
	sub_83222030(ctx, base);
loc_8322C7DC:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_8322C808"))) PPC_WEAK_FUNC(sub_8322C808);
PPC_FUNC_IMPL(__imp__sub_8322C808) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322C820;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c848
	if (!cr6.eq) goto loc_8322C848;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_8322C848:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83222578
	ctx.lr = 0x8322C850;
	sub_83222578(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8322C86C"))) PPC_WEAK_FUNC(sub_8322C86C);
PPC_FUNC_IMPL(__imp__sub_8322C86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C870"))) PPC_WEAK_FUNC(sub_8322C870);
PPC_FUNC_IMPL(__imp__sub_8322C870) {
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
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322c8cc
	if (cr6.eq) goto loc_8322C8CC;
	// dcbt r0,r9
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322c8cc
	if (!cr6.gt) goto loc_8322C8CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322C8AC:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr6,0x8322c8ec
	if (cr6.eq) goto loc_8322C8EC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322c8ac
	if (cr6.lt) goto loc_8322C8AC;
loc_8322C8CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_8322C8EC:
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x83222578
	ctx.lr = 0x8322C8F4;
	sub_83222578(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8322C910"))) PPC_WEAK_FUNC(sub_8322C910);
PPC_FUNC_IMPL(__imp__sub_8322C910) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322C930;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322c948
	if (!cr6.eq) goto loc_8322C948;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8322c960
	goto loc_8322C960;
loc_8322C948:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x83222be8
	ctx.lr = 0x8322C95C;
	sub_83222BE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322C960:
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

__attribute__((alias("__imp__sub_8322C978"))) PPC_WEAK_FUNC(sub_8322C978);
PPC_FUNC_IMPL(__imp__sub_8322C978) {
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
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322c9d8
	if (cr6.eq) goto loc_8322C9D8;
	// dcbt r0,r9
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322c9d8
	if (!cr6.gt) goto loc_8322C9D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322C9B8:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr6,0x8322c9f8
	if (cr6.eq) goto loc_8322C9F8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322c9b8
	if (cr6.lt) goto loc_8322C9B8;
loc_8322C9D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_8322C9F8:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x83222be8
	ctx.lr = 0x8322CA08;
	sub_83222BE8(ctx, base);
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

__attribute__((alias("__imp__sub_8322CA20"))) PPC_WEAK_FUNC(sub_8322CA20);
PPC_FUNC_IMPL(__imp__sub_8322CA20) {
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
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322ca7c
	if (cr6.eq) goto loc_8322CA7C;
	// dcbt r0,r9
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322ca7c
	if (!cr6.gt) goto loc_8322CA7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322CA5C:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr6,0x8322ca9c
	if (cr6.eq) goto loc_8322CA9C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322ca5c
	if (cr6.lt) goto loc_8322CA5C;
loc_8322CA7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_8322CA9C:
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x83220dc8
	ctx.lr = 0x8322CAA4;
	sub_83220DC8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8322CAC0"))) PPC_WEAK_FUNC(sub_8322CAC0);
PPC_FUNC_IMPL(__imp__sub_8322CAC0) {
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
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322cb1c
	if (cr6.eq) goto loc_8322CB1C;
	// dcbt r0,r9
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322cb1c
	if (!cr6.gt) goto loc_8322CB1C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322CAFC:
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr6,0x8322cb3c
	if (cr6.eq) goto loc_8322CB3C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322cafc
	if (cr6.lt) goto loc_8322CAFC;
loc_8322CB1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_8322CB3C:
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x83220e10
	ctx.lr = 0x8322CB44;
	sub_83220E10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8322CB60"))) PPC_WEAK_FUNC(sub_8322CB60);
PPC_FUNC_IMPL(__imp__sub_8322CB60) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322CB80;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322cb94
	if (!cr6.eq) goto loc_8322CB94;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8322cbec
	goto loc_8322CBEC;
loc_8322CB94:
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8322cbe4
	if (cr6.eq) goto loc_8322CBE4;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// not r11,r31
	ctx.r11.u64 = ~ctx.r31.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// xor r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r31.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// srawi r5,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322cbe4
	if (cr6.eq) goto loc_8322CBE4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8322cbe8
	goto loc_8322CBE8;
loc_8322CBE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322CBE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322CBEC:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8322CC08"))) PPC_WEAK_FUNC(sub_8322CC08);
PPC_FUNC_IMPL(__imp__sub_8322CC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322cc50
	if (cr6.eq) goto loc_8322CC50;
	// dcbt r0,r9
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322cc50
	if (!cr6.gt) goto loc_8322CC50;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322CC30:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x8322cc60
	if (cr6.eq) goto loc_8322CC60;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322cc30
	if (cr6.lt) goto loc_8322CC30;
loc_8322CC50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322CC60:
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8322ccb8
	if (cr6.eq) goto loc_8322CCB8;
	// lhz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// xor r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// srawi r3,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322ccb8
	if (cr6.eq) goto loc_8322CCB8;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322CCB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CCC8"))) PPC_WEAK_FUNC(sub_8322CCC8);
PPC_FUNC_IMPL(__imp__sub_8322CCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322cd34
	if (cr6.eq) goto loc_8322CD34;
	// lhz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// xor r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// srawi r3,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322cd34
	if (cr6.eq) goto loc_8322CD34;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322CD34:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CD44"))) PPC_WEAK_FUNC(sub_8322CD44);
PPC_FUNC_IMPL(__imp__sub_8322CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CD48"))) PPC_WEAK_FUNC(sub_8322CD48);
PPC_FUNC_IMPL(__imp__sub_8322CD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322cd90
	if (cr6.eq) goto loc_8322CD90;
	// dcbt r0,r9
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322cd90
	if (!cr6.gt) goto loc_8322CD90;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322CD70:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r3,5(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x8322cda0
	if (cr6.eq) goto loc_8322CDA0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322cd70
	if (cr6.lt) goto loc_8322CD70;
loc_8322CD90:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322CDA0:
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// bne cr6,0x8322cdec
	if (!cr6.eq) goto loc_8322CDEC;
	// lhz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// xor r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r4.u64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// srawi r3,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 31;
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322cdec
	if (cr6.eq) goto loc_8322CDEC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8322CDEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CDFC"))) PPC_WEAK_FUNC(sub_8322CDFC);
PPC_FUNC_IMPL(__imp__sub_8322CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CE00"))) PPC_WEAK_FUNC(sub_8322CE00);
PPC_FUNC_IMPL(__imp__sub_8322CE00) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322CE20;
	sub_8322AB20(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// andc r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// or r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_8322CE48"))) PPC_WEAK_FUNC(sub_8322CE48);
PPC_FUNC_IMPL(__imp__sub_8322CE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8322CE50;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8322ce80
	if (!cr6.eq) goto loc_8322CE80;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,9668
	ctx.r4.s64 = ctx.r11.s64 + 9668;
	// addi r3,r10,9616
	ctx.r3.s64 = ctx.r10.s64 + 9616;
	// bl 0x83208568
	ctx.lr = 0x8322CE80;
	sub_83208568(ctx, base);
loc_8322CE80:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83276bd8
	ctx.lr = 0x8322CE8C;
	sub_83276BD8(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// stb r30,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r30.u8);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r8,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r8.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322ced0
	if (cr6.eq) goto loc_8322CED0;
	// bl 0x83209c20
	ctx.lr = 0x8322CEC0;
	sub_83209C20(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r3,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r3.u32);
	// rlwinm r10,r11,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
loc_8322CED0:
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8322cf34
	if (cr6.eq) goto loc_8322CF34;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322cf34
	if (!cr6.eq) goto loc_8322CF34;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 42);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x8324c880
	ctx.lr = 0x8322CF14;
	sub_8324C880(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lbz r7,38(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r10,9632
	ctx.r4.s64 = ctx.r10.s64 + 9632;
	// addi r3,r9,9616
	ctx.r3.s64 = ctx.r9.s64 + 9616;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83208330
	ctx.lr = 0x8322CF34;
	sub_83208330(ctx, base);
loc_8322CF34:
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322cfec
	if (cr6.eq) goto loc_8322CFEC;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8322CF4C;
	sub_83209AA8(ctx, base);
	// stw r3,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r3.u32);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322cf98
	if (!cr6.gt) goto loc_8322CF98;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832240b8
	ctx.lr = 0x8322CF98;
	sub_832240B8(ctx, base);
loc_8322CF98:
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x8322cfec
	if (!cr6.gt) goto loc_8322CFEC;
	// li r28,8
	ctx.r28.s64 = 8;
loc_8322CFAC:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stwx r26,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r26.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// bge cr6,0x8322cfd8
	if (!cr6.lt) goto loc_8322CFD8;
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832240b8
	ctx.lr = 0x8322CFD8;
	sub_832240B8(ctx, base);
loc_8322CFD8:
	// lbz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 38);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8322cfac
	if (cr6.lt) goto loc_8322CFAC;
loc_8322CFEC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83273b48
	ctx.lr = 0x8322CFF4;
	sub_83273B48(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322d0b8
	if (!cr6.gt) goto loc_8322D0B8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322d014
	if (!cr6.eq) goto loc_8322D014;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8322d01c
	goto loc_8322D01C;
loc_8322D014:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322D01C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832240b8
	ctx.lr = 0x8322D04C;
	sub_832240B8(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// ble cr6,0x8322d0b8
	if (!cr6.gt) goto loc_8322D0B8;
loc_8322D05C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8322d06c
	if (!cr6.eq) goto loc_8322D06C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x8322d098
	goto loc_8322D098;
loc_8322D06C:
	// srawi r11,r30,3
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 3;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r30,3
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8322D098:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832240b8
	ctx.lr = 0x8322D0A8;
	sub_832240B8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8322d05c
	if (cr6.lt) goto loc_8322D05C;
loc_8322D0B8:
	// li r6,504
	ctx.r6.s64 = 504;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83271060
	ctx.lr = 0x8322D0CC;
	sub_83271060(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322d0f0
	if (cr6.eq) goto loc_8322D0F0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322d0f0
	if (cr6.eq) goto loc_8322D0F0;
	// lwz r4,88(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
loc_8322D0F0:
	// li r6,505
	ctx.r6.s64 = 505;
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83271060
	ctx.lr = 0x8322D100;
	sub_83271060(ctx, base);
	// stw r27,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320df88
	ctx.lr = 0x8322D114;
	sub_8320DF88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832356e0
	ctx.lr = 0x8322D120;
	sub_832356E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D12C"))) PPC_WEAK_FUNC(sub_8322D12C);
PPC_FUNC_IMPL(__imp__sub_8322D12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D130"))) PPC_WEAK_FUNC(sub_8322D130);
PPC_FUNC_IMPL(__imp__sub_8322D130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8322D138;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8322d170
	if (!cr6.eq) goto loc_8322D170;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,9708
	ctx.r4.s64 = ctx.r11.s64 + 9708;
	// addi r3,r10,9616
	ctx.r3.s64 = ctx.r10.s64 + 9616;
	// bl 0x83208568
	ctx.lr = 0x8322D170;
	sub_83208568(ctx, base);
loc_8322D170:
	// bl 0x832767b8
	ctx.lr = 0x8322D174;
	sub_832767B8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83277988
	ctx.lr = 0x8322D18C;
	sub_83277988(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8322d198
	if (cr6.eq) goto loc_8322D198;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
loc_8322D198:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lhz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// sth r10,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r10.u16);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322d1c8
	if (cr6.eq) goto loc_8322D1C8;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8322D1C8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327d408
	ctx.lr = 0x8322D1D8;
	sub_8327D408(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8320df88
	ctx.lr = 0x8322D1E8;
	sub_8320DF88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x8322d1fc
	if (!cr6.eq) goto loc_8322D1FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8322d214
	goto loc_8322D214;
loc_8322D1FC:
	// cmpwi cr6,r30,-1000
	cr6.compare<int32_t>(ctx.r30.s32, -1000, xer);
	// bgt cr6,0x8322d210
	if (cr6.gt) goto loc_8322D210;
	// cmpwi cr6,r30,-3000
	cr6.compare<int32_t>(ctx.r30.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8322d214
	if (cr6.gt) goto loc_8322D214;
loc_8322D210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322D214:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322d230
	if (!cr6.eq) goto loc_8322D230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,6(r25)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8327d7c8
	ctx.lr = 0x8322D230;
	sub_8327D7C8(ctx, base);
loc_8322D230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832356e0
	ctx.lr = 0x8322D238;
	sub_832356E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D244"))) PPC_WEAK_FUNC(sub_8322D244);
PPC_FUNC_IMPL(__imp__sub_8322D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D248"))) PPC_WEAK_FUNC(sub_8322D248);
PPC_FUNC_IMPL(__imp__sub_8322D248) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8322d130
	ctx.lr = 0x8322D284;
	sub_8322D130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322D290;
	sub_83222030(ctx, base);
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

__attribute__((alias("__imp__sub_8322D2A8"))) PPC_WEAK_FUNC(sub_8322D2A8);
PPC_FUNC_IMPL(__imp__sub_8322D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322D2B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8322d2dc
	if (cr6.eq) goto loc_8322D2DC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29404
	ctx.r3.s64 = ctx.r11.s64 + -29404;
	// bl 0x8320d088
	ctx.lr = 0x8322D2DC;
	sub_8320D088(ctx, base);
loc_8322D2DC:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8322d3a4
	if (cr6.lt) goto loc_8322D3A4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832264e0
	ctx.lr = 0x8322D330;
	sub_832264E0(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r8,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r8.u16);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// bl 0x8327ad20
	ctx.lr = 0x8322D37C;
	sub_8327AD20(ctx, base);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r5,r5,0,27,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// rlwinm r28,r6,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// sth r5,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r5.u16);
	// bl 0x83222030
	ctx.lr = 0x8322D39C;
	sub_83222030(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322D3A4;
	sub_83222030(ctx, base);
loc_8322D3A4:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
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
	// beq cr6,0x8322d3d0
	if (cr6.eq) goto loc_8322D3D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322D3D0;
	sub_83222030(ctx, base);
loc_8322D3D0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D3E8"))) PPC_WEAK_FUNC(sub_8322D3E8);
PPC_FUNC_IMPL(__imp__sub_8322D3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322D3F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8322d41c
	if (cr6.eq) goto loc_8322D41C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29404
	ctx.r3.s64 = ctx.r11.s64 + -29404;
	// bl 0x8320d088
	ctx.lr = 0x8322D41C;
	sub_8320D088(ctx, base);
loc_8322D41C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8322d48c
	if (cr6.lt) goto loc_8322D48C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832264e0
	ctx.lr = 0x8322D464;
	sub_832264E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322D470;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322d48c
	if (cr6.eq) goto loc_8322D48C;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322d48c
	if (!cr6.eq) goto loc_8322D48C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8322D48C:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
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
	// beq cr6,0x8322d4b8
	if (cr6.eq) goto loc_8322D4B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8322D4B8;
	sub_83222030(ctx, base);
loc_8322D4B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D4D0"))) PPC_WEAK_FUNC(sub_8322D4D0);
PPC_FUNC_IMPL(__imp__sub_8322D4D0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bgt cr6,0x8322d5ac
	if (cr6.gt) goto loc_8322D5AC;
	// beq cr6,0x8322d638
	if (cr6.eq) goto loc_8322D638;
	// addi r11,r11,-30
	ctx.r11.s64 = ctx.r11.s64 + -30;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bgt cr6,0x8322d608
	if (cr6.gt) goto loc_8322D608;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10980
	ctx.r12.s64 = ctx.r12.s64 + -10980;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8322D554;
	case 1:
		goto loc_8322D608;
	case 2:
		goto loc_8322D554;
	case 3:
		goto loc_8322D568;
	case 4:
		goto loc_8322D580;
	case 5:
		goto loc_8322D608;
	case 6:
		goto loc_8322D608;
	case 7:
		goto loc_8322D608;
	case 8:
		goto loc_8322D608;
	case 9:
		goto loc_8322D608;
	case 10:
		goto loc_8322D608;
	case 11:
		goto loc_8322D608;
	case 12:
		goto loc_8322D608;
	case 13:
		goto loc_8322D598;
	default:
		return;
	}
	// lwz r25,-10924(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10924);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10924(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10924);
	// lwz r25,-10904(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10904);
	// lwz r25,-10880(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10880);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10744(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10744);
	// lwz r25,-10856(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10856);
loc_8322D554:
	// bl 0x83270ad0
	ctx.lr = 0x8322D558;
	sub_83270AD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8322D564;
	sub_83223BD0(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D568:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// bl 0x8328cdc0
	ctx.lr = 0x8322D570;
	sub_8328CDC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8322D57C;
	sub_83223BD0(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D580:
	// li r4,1152
	ctx.r4.s64 = 1152;
	// bl 0x8328ceb8
	ctx.lr = 0x8322D588;
	sub_8328CEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8322D594;
	sub_83223BD0(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D598:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,9748
	ctx.r4.s64 = ctx.r11.s64 + 9748;
	// bl 0x83223a60
	ctx.lr = 0x8322D5A8;
	sub_83223A60(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D5AC:
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// bgt cr6,0x8322d5f8
	if (cr6.gt) goto loc_8322D5F8;
	// beq cr6,0x8322d638
	if (cr6.eq) goto loc_8322D638;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x8322d5dc
	if (cr6.eq) goto loc_8322D5DC;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// bne cr6,0x8322d608
	if (!cr6.eq) goto loc_8322D608;
	// bl 0x83273720
	ctx.lr = 0x8322D5CC;
	sub_83273720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8322D5D8;
	sub_83223BD0(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D5DC:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83237e70
	ctx.lr = 0x8322D5E8;
	sub_83237E70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x8322D5F4;
	sub_83223AF0(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D5F8:
	// cmplwi cr6,r11,74
	cr6.compare<uint32_t>(ctx.r11.u32, 74, xer);
	// beq cr6,0x8322d638
	if (cr6.eq) goto loc_8322D638;
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// beq cr6,0x8322d638
	if (cr6.eq) goto loc_8322D638;
loc_8322D608:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// li r5,64
	ctx.r5.s64 = 64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83220d30
	ctx.lr = 0x8322D628;
	sub_83220D30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223af0
	ctx.lr = 0x8322D634;
	sub_83223AF0(ctx, base);
	// b 0x8322d644
	goto loc_8322D644;
loc_8322D638:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83285b98
	ctx.lr = 0x8322D644;
	sub_83285B98(ctx, base);
loc_8322D644:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8322D65C"))) PPC_WEAK_FUNC(sub_8322D65C);
PPC_FUNC_IMPL(__imp__sub_8322D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D660"))) PPC_WEAK_FUNC(sub_8322D660);
PPC_FUNC_IMPL(__imp__sub_8322D660) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,2347
	cr6.compare<uint32_t>(ctx.r11.u32, 2347, xer);
	// bgt cr6,0x8322d6bc
	if (cr6.gt) goto loc_8322D6BC;
	// beq cr6,0x8322d6a4
	if (cr6.eq) goto loc_8322D6A4;
	// cmplwi cr6,r11,1152
	cr6.compare<uint32_t>(ctx.r11.u32, 1152, xer);
	// beq cr6,0x8322d6d8
	if (cr6.eq) goto loc_8322D6D8;
	// cmplwi cr6,r11,1250
	cr6.compare<uint32_t>(ctx.r11.u32, 1250, xer);
	// bne cr6,0x8322d6c4
	if (!cr6.eq) goto loc_8322D6C4;
	// bl 0x8322d2a8
	ctx.lr = 0x8322D690;
	sub_8322D2A8(ctx, base);
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
loc_8322D6A4:
	// bl 0x8322d3e8
	ctx.lr = 0x8322D6A8;
	sub_8322D3E8(ctx, base);
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
loc_8322D6BC:
	// cmplwi cr6,r11,2375
	cr6.compare<uint32_t>(ctx.r11.u32, 2375, xer);
	// beq cr6,0x8322d6d8
	if (cr6.eq) goto loc_8322D6D8;
loc_8322D6C4:
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
loc_8322D6D8:
	// bl 0x8322d4d0
	ctx.lr = 0x8322D6DC;
	sub_8322D4D0(ctx, base);
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

__attribute__((alias("__imp__sub_8322D6F0"))) PPC_WEAK_FUNC(sub_8322D6F0);
PPC_FUNC_IMPL(__imp__sub_8322D6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8322D6F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x8322d820
	if (!cr6.eq) goto loc_8322D820;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8322d730
	if (cr6.eq) goto loc_8322D730;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8322D730:
	// lhz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r9,r29,134
	ctx.r9.s64 = ctx.r29.s64 + 134;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lhz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,134
	ctx.r7.s64 = ctx.r11.s64 + 134;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x8320f818
	ctx.lr = 0x8322D768;
	sub_8320F818(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8322d7d8
	if (cr6.eq) goto loc_8322D7D8;
	// cmpwi cr6,r29,122
	cr6.compare<int32_t>(ctx.r29.s32, 122, xer);
	// beq cr6,0x8322d7c0
	if (cr6.eq) goto loc_8322D7C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8322D788;
	sub_83221C30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8322D794;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,9616
	ctx.r9.s64 = ctx.r11.s64 + 9616;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,9816
	ctx.r4.s64 = ctx.r10.s64 + 9816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322D7B4;
	sub_832085E8(ctx, base);
loc_8322D7B4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322D7C0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321c298
	ctx.lr = 0x8322D7D0;
	sub_8321C298(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322D7D8:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83221c30
	ctx.lr = 0x8322D7E8;
	sub_83221C30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8322D7F4;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r10,9616
	ctx.r8.s64 = ctx.r10.s64 + 9616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,9788
	ctx.r4.s64 = ctx.r9.s64 + 9788;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322D814;
	sub_832085E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322D820:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subfic r7,r10,162
	xer.ca = ctx.r10.u32 <= 162;
	ctx.r7.s64 = 162 - ctx.r10.s64;
	// addi r6,r10,-349
	ctx.r6.s64 = ctx.r10.s64 + -349;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// and r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 & ctx.r8.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322d7b4
	if (!cr6.eq) goto loc_8322D7B4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8324c880
	ctx.lr = 0x8322D874;
	sub_8324C880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8322D87C;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,9616
	ctx.r9.s64 = ctx.r11.s64 + 9616;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,9764
	ctx.r4.s64 = ctx.r10.s64 + 9764;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322D89C;
	sub_832085E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D8A8"))) PPC_WEAK_FUNC(sub_8322D8A8);
PPC_FUNC_IMPL(__imp__sub_8322D8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322D8B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r6,10(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,20(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,-4
	ctx.r29.s64 = -4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r4,44
	cr6.compare<uint32_t>(ctx.r4.u32, 44, xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r6,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r6.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// beq cr6,0x8322d948
	if (cr6.eq) goto loc_8322D948;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x8322b2e0
	ctx.lr = 0x8322D920;
	sub_8322B2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322d948
	if (!cr6.eq) goto loc_8322D948;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322d6f0
	ctx.lr = 0x8322D944;
	sub_8322D6F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8322D948:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322D950;
	sub_83222030(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D95C"))) PPC_WEAK_FUNC(sub_8322D95C);
PPC_FUNC_IMPL(__imp__sub_8322D95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D960"))) PPC_WEAK_FUNC(sub_8322D960);
PPC_FUNC_IMPL(__imp__sub_8322D960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8322D968;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r26,-4
	ctx.r26.s64 = -4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8322db1c
	if (cr6.eq) goto loc_8322DB1C;
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bne cr6,0x8322d9b0
	if (!cr6.eq) goto loc_8322D9B0;
	// lhz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// b 0x8322d9c8
	goto loc_8322D9C8;
loc_8322D9B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8322d9cc
	if (!cr6.eq) goto loc_8322D9CC;
loc_8322D9C8:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8322D9CC:
	// lhz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// beq cr6,0x8322da2c
	if (cr6.eq) goto loc_8322DA2C;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stb r29,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r29.u8);
loc_8322DA2C:
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r29,350
	cr6.compare<uint32_t>(ctx.r29.u32, 350, xer);
	// bne cr6,0x8322da54
	if (!cr6.eq) goto loc_8322DA54;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83278d88
	ctx.lr = 0x8322DA4C;
	sub_83278D88(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322DA54:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r3,r29,134
	ctx.r3.s64 = ctx.r29.s64 + 134;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r11,134
	ctx.r4.s64 = ctx.r11.s64 + 134;
	// bl 0x8322a6f0
	ctx.lr = 0x8322DA68;
	sub_8322A6F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322dad4
	if (cr6.eq) goto loc_8322DAD4;
	// addi r11,r29,-29
	ctx.r11.s64 = ctx.r29.s64 + -29;
	// cmplwi cr6,r11,105
	cr6.compare<uint32_t>(ctx.r11.u32, 105, xer);
	// bge cr6,0x8322daa8
	if (!cr6.lt) goto loc_8322DAA8;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,6528
	ctx.r8.s64 = ctx.r10.s64 + 6528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8322DAA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322DAA8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832277f8
	ctx.lr = 0x8322DAB0;
	sub_832277F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x8322DAC0;
	sub_83221C30(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,9940
	ctx.r4.s64 = ctx.r10.s64 + 9940;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x8322dc30
	goto loc_8322DC30;
loc_8322DAD4:
	// lhz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r3,12
	ctx.r3.s64 = 12;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83221c30
	ctx.lr = 0x8322DAE4;
	sub_83221C30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8322DAF0;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r10,9616
	ctx.r8.s64 = ctx.r10.s64 + 9616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r9,9908
	ctx.r4.s64 = ctx.r9.s64 + 9908;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322DB10;
	sub_832085E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322DB1C:
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,12288
	ctx.r8.s64 = 12288;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// xori r9,r11,142
	ctx.r9.u64 = ctx.r11.u64 ^ 142;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 & ctx.r6.u64;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8322dbd8
	if (cr6.eq) goto loc_8322DBD8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322dba0
	if (!cr6.eq) goto loc_8322DBA0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8322db7c
	if (cr6.eq) goto loc_8322DB7C;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322db84
	if (!cr6.eq) goto loc_8322DB84;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322DB74;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322db80
	if (!cr6.eq) goto loc_8322DB80;
loc_8322DB7C:
	// bl 0x83227908
	ctx.lr = 0x8322DB80;
	sub_83227908(ctx, base);
loc_8322DB80:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8322DB84:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832260e8
	ctx.lr = 0x8322DB8C;
	sub_832260E8(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,9884
	ctx.r4.s64 = ctx.r10.s64 + 9884;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x8322dc30
	goto loc_8322DC30;
loc_8322DBA0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322dbc0
	if (cr6.eq) goto loc_8322DBC0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322dbc0
	if (cr6.eq) goto loc_8322DBC0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8322DBC0:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8322d248
	ctx.lr = 0x8322DBD0;
	sub_8322D248(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8322DBD8:
	// subfic r9,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r9.s64 = 162 - ctx.r11.s64;
	// addi r7,r11,-349
	ctx.r7.s64 = ctx.r11.s64 + -349;
	// srawi r6,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// srawi r4,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 31;
	// srw r3,r8,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// and r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 & ctx.r4.u64;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8322dc40
	if (!cr6.eq) goto loc_8322DC40;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8324c880
	ctx.lr = 0x8322DC18;
	sub_8324C880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8322DC20;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,9856
	ctx.r4.s64 = ctx.r10.s64 + 9856;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_8322DC30:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r9,r11,9616
	ctx.r9.s64 = ctx.r11.s64 + 9616;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322DC40;
	sub_832085E8(ctx, base);
loc_8322DC40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322DC4C"))) PPC_WEAK_FUNC(sub_8322DC4C);
PPC_FUNC_IMPL(__imp__sub_8322DC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DC50"))) PPC_WEAK_FUNC(sub_8322DC50);
PPC_FUNC_IMPL(__imp__sub_8322DC50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8322DC58;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322dc78
	if (!cr6.eq) goto loc_8322DC78;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8322DC78:
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,3
	ctx.r31.s64 = 3;
	// lhz r30,8(r5)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r28,10(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// li r27,12
	ctx.r27.s64 = 12;
	// lwz r26,12(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lhz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// sth r30,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r30.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r28,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r28.u8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// sth r25,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r25.u16);
	// stb r29,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r29.u8);
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8322d130
	ctx.lr = 0x8322DCF0;
	sub_8322D130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322DCFC;
	sub_83222030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322DD08"))) PPC_WEAK_FUNC(sub_8322DD08);
PPC_FUNC_IMPL(__imp__sub_8322DD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322DD10;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322dd38
	if (!cr6.eq) goto loc_8322DD38;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322DD38:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r28,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r28.u16);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x8320db50
	ctx.lr = 0x8322DD7C;
	sub_8320DB50(ctx, base);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,2
	ctx.r5.s64 = 2;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x8322DDA0;
	sub_832240B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// sth r9,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r9.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r31,10(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// bl 0x8322d130
	ctx.lr = 0x8322DE18;
	sub_8322D130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322DE24;
	sub_83222030(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8322DE2C;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8322DE34;
	sub_83222030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322DE40"))) PPC_WEAK_FUNC(sub_8322DE40);
PPC_FUNC_IMPL(__imp__sub_8322DE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x8322defc
	if (cr6.gt) goto loc_8322DEFC;
	// lis r12,-31965
	ctx.r12.s64 = -2094858240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8604
	ctx.r12.s64 = ctx.r12.s64 + -8604;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8322DEA0;
	case 1:
		goto loc_8322DEA0;
	case 2:
		goto loc_8322DEA0;
	case 3:
		goto loc_8322DED0;
	case 4:
		goto loc_8322DED0;
	case 5:
		goto loc_8322DEFC;
	case 6:
		goto loc_8322DEFC;
	case 7:
		goto loc_8322DEA0;
	case 8:
		goto loc_8322DEA0;
	case 9:
		goto loc_8322DEA0;
	case 10:
		goto loc_8322DEA0;
	case 11:
		goto loc_8322DEA0;
	case 12:
		goto loc_8322DEA0;
	case 13:
		goto loc_8322DEA0;
	case 14:
		goto loc_8322DED0;
	default:
		return;
	}
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8496(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8496);
	// lwz r25,-8496(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8496);
	// lwz r25,-8452(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8452);
	// lwz r25,-8452(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8452);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8544(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8544);
	// lwz r25,-8496(r2)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r2.u32 + -8496);
loc_8322DEA0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322debc
	if (cr6.eq) goto loc_8322DEBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_8322DEBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322defc
	if (!cr6.eq) goto loc_8322DEFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8322DED0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322deec
	if (cr6.eq) goto loc_8322DEEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_8322DEEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8322DEFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322DF04"))) PPC_WEAK_FUNC(sub_8322DF04);
PPC_FUNC_IMPL(__imp__sub_8322DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DF08"))) PPC_WEAK_FUNC(sub_8322DF08);
PPC_FUNC_IMPL(__imp__sub_8322DF08) {
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
	// bl 0x8322ab20
	ctx.lr = 0x8322DF28;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322df90
	if (cr6.eq) goto loc_8322DF90;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,11
	ctx.r11.u64 = ctx.r8.u64 ^ 11;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322df7c
	if (cr6.eq) goto loc_8322DF7C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322dc50
	ctx.lr = 0x8322DF74;
	sub_8322DC50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322df94
	goto loc_8322DF94;
loc_8322DF7C:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832240b8
	ctx.lr = 0x8322DF88;
	sub_832240B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322df94
	goto loc_8322DF94;
loc_8322DF90:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8322DF94:
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

__attribute__((alias("__imp__sub_8322DFAC"))) PPC_WEAK_FUNC(sub_8322DFAC);
PPC_FUNC_IMPL(__imp__sub_8322DFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DFB0"))) PPC_WEAK_FUNC(sub_8322DFB0);
PPC_FUNC_IMPL(__imp__sub_8322DFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8322DFB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// beq cr6,0x8322e028
	if (cr6.eq) goto loc_8322E028;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83221440
	ctx.lr = 0x8322DFE8;
	sub_83221440(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e028
	if (cr6.eq) goto loc_8322E028;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// sth r25,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r25.u16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8322bb00
	ctx.lr = 0x8322E00C;
	sub_8322BB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e028
	if (cr6.eq) goto loc_8322E028;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r26,4
	ctx.r26.s64 = 4;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// sth r10,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r10.u16);
loc_8322E028:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e090
	if (cr6.eq) goto loc_8322E090;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322ab20
	ctx.lr = 0x8322E040;
	sub_8322AB20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e090
	if (cr6.eq) goto loc_8322E090;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r11,12288
	ctx.r11.s64 = 12288;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322e0d0
	if (cr6.eq) goto loc_8322E0D0;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r10,r8,11
	ctx.r10.u64 = ctx.r8.u64 ^ 11;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e0d0
	if (cr6.eq) goto loc_8322E0D0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8322E090:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322e160
	if (!cr6.eq) goto loc_8322E160;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322e154
	if (!cr6.eq) goto loc_8322E154;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322add8
	ctx.lr = 0x8322E0BC;
	sub_8322ADD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322e144
	if (!cr6.eq) goto loc_8322E144;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x8322e154
	goto loc_8322E154;
loc_8322E0D0:
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,11
	ctx.r11.u64 = ctx.r8.u64 ^ 11;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e11c
	if (cr6.eq) goto loc_8322E11C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8322dd08
	ctx.lr = 0x8322E110;
	sub_8322DD08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8322E11C:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322e160
	if (!cr6.eq) goto loc_8322E160;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832240b8
	ctx.lr = 0x8322E138;
	sub_832240B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8322E144:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x832240b8
	ctx.lr = 0x8322E154;
	sub_832240B8(ctx, base);
loc_8322E154:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// or r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 | ctx.r24.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_8322E160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E16C"))) PPC_WEAK_FUNC(sub_8322E16C);
PPC_FUNC_IMPL(__imp__sub_8322E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E170"))) PPC_WEAK_FUNC(sub_8322E170);
PPC_FUNC_IMPL(__imp__sub_8322E170) {
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
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322e298
	if (!cr6.eq) goto loc_8322E298;
	// bl 0x8322ab20
	ctx.lr = 0x8322E1A0;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e298
	if (cr6.eq) goto loc_8322E298;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r12,75
	ctx.r12.s64 = 75;
	// li r9,12288
	ctx.r9.s64 = 12288;
	// and r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e23c
	if (cr6.eq) goto loc_8322E23C;
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e1dc
	if (cr6.eq) goto loc_8322E1DC;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r8,r11,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8322e298
	if (!cr6.eq) goto loc_8322E298;
loc_8322E1DC:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e1f8
	if (cr6.eq) goto loc_8322E1F8;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8322e298
	if (!cr6.eq) goto loc_8322E298;
loc_8322E1F8:
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e230
	if (cr6.eq) goto loc_8322E230;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r11,r7,11
	ctx.r11.u64 = ctx.r7.u64 ^ 11;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8322e298
	if (!cr6.eq) goto loc_8322E298;
loc_8322E230:
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322e298
	if (!cr6.eq) goto loc_8322E298;
loc_8322E23C:
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r8,11
	ctx.r11.u64 = ctx.r8.u64 ^ 11;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322e284
	if (cr6.eq) goto loc_8322E284;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322dc50
	ctx.lr = 0x8322E27C;
	sub_8322DC50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322e29c
	goto loc_8322E29C;
loc_8322E284:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832240b8
	ctx.lr = 0x8322E290;
	sub_832240B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322e29c
	goto loc_8322E29C;
loc_8322E298:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8322E29C:
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

__attribute__((alias("__imp__sub_8322E2B4"))) PPC_WEAK_FUNC(sub_8322E2B4);
PPC_FUNC_IMPL(__imp__sub_8322E2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E2B8"))) PPC_WEAK_FUNC(sub_8322E2B8);
PPC_FUNC_IMPL(__imp__sub_8322E2B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e340
	if (cr6.eq) goto loc_8322E340;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8322e348
	if (!cr6.eq) goto loc_8322E348;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8322e314
	if (cr6.eq) goto loc_8322E314;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8322e31c
	if (!cr6.eq) goto loc_8322E31C;
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322E308;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322e31c
	if (!cr6.eq) goto loc_8322E31C;
loc_8322E314:
	// bl 0x83227908
	ctx.lr = 0x8322E318;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8322E31C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r11,10052
	ctx.r8.s64 = ctx.r11.s64 + 10052;
	// addi r4,r10,10000
	ctx.r4.s64 = ctx.r10.s64 + 10000;
	// addi r3,r9,9616
	ctx.r3.s64 = ctx.r9.s64 + 9616;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322E340;
	sub_832085E8(ctx, base);
loc_8322E340:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8322e3c4
	goto loc_8322E3C4;
loc_8322E348:
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// blt cr6,0x8322e390
	if (cr6.lt) goto loc_8322E390;
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bge cr6,0x8322e390
	if (!cr6.lt) goto loc_8322E390;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,7040
	ctx.r8.s64 = ctx.r10.s64 + 7040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8322E380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322e390
	if (!cr6.eq) goto loc_8322E390;
loc_8322E388:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322e3c4
	goto loc_8322E3C4;
loc_8322E390:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e170
	ctx.lr = 0x8322E39C;
	sub_8322E170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322e388
	if (cr6.eq) goto loc_8322E388;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x8322e340
	if (cr6.lt) goto loc_8322E340;
	// lhz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e340
	if (cr6.eq) goto loc_8322E340;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83287428
	ctx.lr = 0x8322E3C4;
	sub_83287428(ctx, base);
loc_8322E3C4:
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

__attribute__((alias("__imp__sub_8322E3DC"))) PPC_WEAK_FUNC(sub_8322E3DC);
PPC_FUNC_IMPL(__imp__sub_8322E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E3E0"))) PPC_WEAK_FUNC(sub_8322E3E0);
PPC_FUNC_IMPL(__imp__sub_8322E3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322E3E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,-4
	ctx.r30.s64 = -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322e464
	if (cr6.eq) goto loc_8322E464;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8322e470
	if (!cr6.eq) goto loc_8322E470;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8322e438
	if (cr6.eq) goto loc_8322E438;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8322e440
	if (!cr6.eq) goto loc_8322E440;
	// lhz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322E42C;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322e440
	if (!cr6.eq) goto loc_8322E440;
loc_8322E438:
	// bl 0x83227908
	ctx.lr = 0x8322E43C;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8322E440:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r11,10052
	ctx.r8.s64 = ctx.r11.s64 + 10052;
	// addi r4,r10,10060
	ctx.r4.s64 = ctx.r10.s64 + 10060;
	// addi r3,r9,9616
	ctx.r3.s64 = ctx.r9.s64 + 9616;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322E464;
	sub_832085E8(ctx, base);
loc_8322E464:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322E470:
	// addi r11,r11,-29
	ctx.r11.s64 = ctx.r11.s64 + -29;
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(ctx.r11.u32, 93, xer);
	// bge cr6,0x8322e4a8
	if (!cr6.lt) goto loc_8322E4A8;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,7424
	ctx.r8.s64 = ctx.r10.s64 + 7424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8322E49C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322e50c
	if (cr6.eq) goto loc_8322E50C;
loc_8322E4A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8322b428
	ctx.lr = 0x8322E4BC;
	sub_8322B428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e4cc
	if (cr6.eq) goto loc_8322E4CC;
	// li r27,4
	ctx.r27.s64 = 4;
loc_8322E4CC:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322e4e4
	if (!cr6.eq) goto loc_8322E4E4;
	// ori r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 | 32;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8322E4E4:
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322dfb0
	ctx.lr = 0x8322E4FC;
	sub_8322DFB0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
loc_8322E50C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E518"))) PPC_WEAK_FUNC(sub_8322E518);
PPC_FUNC_IMPL(__imp__sub_8322E518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8322E520;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r7,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r7.u16);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r5,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r5.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x8322e2b8
	ctx.lr = 0x8322E574;
	sub_8322E2B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322e598
	if (!cr6.eq) goto loc_8322E598;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322d960
	ctx.lr = 0x8322E594;
	sub_8322D960(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8322E598:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322E5A0;
	sub_83222030(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E5AC"))) PPC_WEAK_FUNC(sub_8322E5AC);
PPC_FUNC_IMPL(__imp__sub_8322E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E5B0"))) PPC_WEAK_FUNC(sub_8322E5B0);
PPC_FUNC_IMPL(__imp__sub_8322E5B0) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8322e5f0
	if (cr6.eq) goto loc_8322E5F0;
	// bl 0x83222030
	ctx.lr = 0x8322E5F0;
	sub_83222030(ctx, base);
loc_8322E5F0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8322E614"))) PPC_WEAK_FUNC(sub_8322E614);
PPC_FUNC_IMPL(__imp__sub_8322E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E618"))) PPC_WEAK_FUNC(sub_8322E618);
PPC_FUNC_IMPL(__imp__sub_8322E618) {
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
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,545
	cr6.compare<uint32_t>(ctx.r3.u32, 545, xer);
	// bne cr6,0x8322e648
	if (!cr6.eq) goto loc_8322E648;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8322e6a4
	goto loc_8322E6A4;
loc_8322E648:
	// cmplwi cr6,r3,1168
	cr6.compare<uint32_t>(ctx.r3.u32, 1168, xer);
	// beq cr6,0x8322e6a0
	if (cr6.eq) goto loc_8322E6A0;
	// cmplwi cr6,r3,546
	cr6.compare<uint32_t>(ctx.r3.u32, 546, xer);
	// bne cr6,0x8322e660
	if (!cr6.eq) goto loc_8322E660;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8322e6a4
	goto loc_8322E6A4;
loc_8322E660:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8322e684
	if (!cr6.eq) goto loc_8322E684;
	// bl 0x832277f8
	ctx.lr = 0x8322E670;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322e684
	if (!cr6.eq) goto loc_8322E684;
	// bl 0x83227908
	ctx.lr = 0x8322E680;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8322E684:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10204
	ctx.r4.s64 = ctx.r11.s64 + 10204;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322E6A0;
	sub_832085E8(ctx, base);
loc_8322E6A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322E6A4:
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

__attribute__((alias("__imp__sub_8322E6BC"))) PPC_WEAK_FUNC(sub_8322E6BC);
PPC_FUNC_IMPL(__imp__sub_8322E6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E6C0"))) PPC_WEAK_FUNC(sub_8322E6C0);
PPC_FUNC_IMPL(__imp__sub_8322E6C0) {
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
	// bl 0x83220448
	ctx.lr = 0x8322E6D0;
	sub_83220448(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// bge cr6,0x8322e70c
	if (!cr6.lt) goto loc_8322E70C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8322e710
	if (cr6.gt) goto loc_8322E710;
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
loc_8322E70C:
	// li r3,255
	ctx.r3.s64 = 255;
loc_8322E710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322E720"))) PPC_WEAK_FUNC(sub_8322E720);
PPC_FUNC_IMPL(__imp__sub_8322E720) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322e774
	if (cr6.eq) goto loc_8322E774;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x8322E760;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322e774
	if (!cr6.eq) goto loc_8322E774;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8322e790
	if (!cr6.eq) goto loc_8322E790;
loc_8322E774:
	// bl 0x8320cd50
	ctx.lr = 0x8322E778;
	sub_8320CD50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c600
	ctx.lr = 0x8322E790;
	sub_8322C600(ctx, base);
loc_8322E790:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lhz r10,82(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 82);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r11,16384
	ctx.r9.u64 = ctx.r11.u64 | 16384;
	// ori r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 1024;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// sth r8,82(r31)
	PPC_STORE_U16(ctx.r31.u32 + 82, ctx.r8.u16);
	// bl 0x8322b0b8
	ctx.lr = 0x8322E7B4;
	sub_8322B0B8(ctx, base);
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

__attribute__((alias("__imp__sub_8322E7D0"))) PPC_WEAK_FUNC(sub_8322E7D0);
PPC_FUNC_IMPL(__imp__sub_8322E7D0) {
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
	// beq cr6,0x8322e820
	if (cr6.eq) goto loc_8322E820;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8322cd48
	ctx.lr = 0x8322E804;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322e820
	if (!cr6.eq) goto loc_8322E820;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322e820
	if (cr6.eq) goto loc_8322E820;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8325dc38
	ctx.lr = 0x8322E820;
	sub_8325DC38(ctx, base);
loc_8322E820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322E830"))) PPC_WEAK_FUNC(sub_8322E830);
PPC_FUNC_IMPL(__imp__sub_8322E830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322E838;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x8322e8e4
	if (cr6.gt) goto loc_8322E8E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8322E870;
	sub_83209DF8(ctx, base);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, xer);
	// bgt cr6,0x8322e8d4
	if (cr6.gt) goto loc_8322E8D4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 2;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8322E89C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8325d990
	ctx.lr = 0x8322E8AC;
	sub_8325D990(ctx, base);
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// sth r11,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r11.u16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// ble cr6,0x8322e89c
	if (!cr6.gt) goto loc_8322E89C;
loc_8322E8D4:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
loc_8322E8E4:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322E900"))) PPC_WEAK_FUNC(sub_8322E900);
PPC_FUNC_IMPL(__imp__sub_8322E900) {
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
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322e938
	if (!cr6.eq) goto loc_8322E938;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bl 0x83209aa8
	ctx.lr = 0x8322E930;
	sub_83209AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x8322E938;
	sub_8325D650(ctx, base);
loc_8322E938:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
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

__attribute__((alias("__imp__sub_8322E96C"))) PPC_WEAK_FUNC(sub_8322E96C);
PPC_FUNC_IMPL(__imp__sub_8322E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E970"))) PPC_WEAK_FUNC(sub_8322E970);
PPC_FUNC_IMPL(__imp__sub_8322E970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8322E978;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322ea28
	if (!cr6.gt) goto loc_8322EA28;
	// bl 0x8322e830
	ctx.lr = 0x8322E9A0;
	sub_8322E830(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322ea28
	if (!cr6.gt) goto loc_8322EA28;
	// lhz r31,2(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// bl 0x8322e900
	ctx.lr = 0x8322E9B8;
	sub_8322E900(ctx, base);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r30,6(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r28,10(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322e9f0
	if (!cr6.gt) goto loc_8322E9F0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// lfs f31,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8322e9f8
	goto loc_8322E9F8;
loc_8322E9F0:
	// lfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
loc_8322E9F8:
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// sth r11,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r11.u16);
	// bl 0x8322e830
	ctx.lr = 0x8322EA08;
	sub_8322E830(ctx, base);
	// sth r31,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r31.u16);
	// bl 0x8322e900
	ctx.lr = 0x8322EA10;
	sub_8322E900(ctx, base);
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f30,16(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// sth r30,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r30.u16);
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r29.u16);
	// sth r28,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r28.u16);
loc_8322EA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322EA3C"))) PPC_WEAK_FUNC(sub_8322EA3C);
PPC_FUNC_IMPL(__imp__sub_8322EA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EA40"))) PPC_WEAK_FUNC(sub_8322EA40);
PPC_FUNC_IMPL(__imp__sub_8322EA40) {
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
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// beq cr6,0x8322eaf0
	if (cr6.eq) goto loc_8322EAF0;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322eab8
	if (!cr6.gt) goto loc_8322EAB8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322EA90:
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r5,r6,0,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8322eab8
	if (!cr6.eq) goto loc_8322EAB8;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x8322ea90
	if (cr6.lt) goto loc_8322EA90;
loc_8322EAB8:
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322eaf0
	if (cr6.lt) goto loc_8322EAF0;
	// bl 0x8325e2c8
	ctx.lr = 0x8322EAC4;
	sub_8325E2C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8322eaf4
	if (cr6.eq) goto loc_8322EAF4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8322EAF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322EAF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EB04"))) PPC_WEAK_FUNC(sub_8322EB04);
PPC_FUNC_IMPL(__imp__sub_8322EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EB08"))) PPC_WEAK_FUNC(sub_8322EB08);
PPC_FUNC_IMPL(__imp__sub_8322EB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322EB10;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8322e830
	ctx.lr = 0x8322EB2C;
	sub_8322E830(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322ea40
	ctx.lr = 0x8322EB3C;
	sub_8322EA40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r31,0
	ctx.r31.s64 = 0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// ble cr6,0x8322eba8
	if (!cr6.gt) goto loc_8322EBA8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// lhz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -20);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322eba0
	if (!cr6.gt) goto loc_8322EBA0;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lfs f31,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8322eba8
	goto loc_8322EBA8;
loc_8322EBA0:
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
loc_8322EBA8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bge cr6,0x8322ebc8
	if (!cr6.lt) goto loc_8322EBC8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322ebc0
	if (!cr6.eq) goto loc_8322EBC0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8322ebc8
	goto loc_8322EBC8;
loc_8322EBC0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
loc_8322EBC8:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x8322ebec
	if (!cr6.lt) goto loc_8322EBEC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8322ebe4
	if (!cr6.eq) goto loc_8322EBE4;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8322ec04
	goto loc_8322EC04;
loc_8322EBE4:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
loc_8322EBEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8322ec04
	if (cr6.eq) goto loc_8322EC04;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8322ec4c
	if (!cr6.gt) goto loc_8322EC4C;
loc_8322EC04:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209df8
	ctx.lr = 0x8322EC1C;
	sub_83209DF8(ctx, base);
	// lhz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d650
	ctx.lr = 0x8322EC40;
	sub_8325D650(ctx, base);
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r7.u16);
loc_8322EC4C:
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// sth r27,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r27.u16);
	// stfs f30,16(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// sth r28,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r28.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x8322ec74
	if (!cr6.gt) goto loc_8322EC74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8322EC74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322EC84"))) PPC_WEAK_FUNC(sub_8322EC84);
PPC_FUNC_IMPL(__imp__sub_8322EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EC88"))) PPC_WEAK_FUNC(sub_8322EC88);
PPC_FUNC_IMPL(__imp__sub_8322EC88) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8322eb08
	ctx.lr = 0x8322ECBC;
	sub_8322EB08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e830
	ctx.lr = 0x8322ECC4;
	sub_8322E830(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ea40
	ctx.lr = 0x8322ECD4;
	sub_8322EA40(ctx, base);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322ecf8
	if (!cr6.eq) goto loc_8322ECF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bl 0x83209aa8
	ctx.lr = 0x8322ECF0;
	sub_83209AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x8322ECF8;
	sub_8325D650(ctx, base);
loc_8322ECF8:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,-24
	ctx.r10.s64 = ctx.r11.s64 + -24;
	// lwz r9,-24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stfs f31,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f30,-8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stw r8,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_8322ED50"))) PPC_WEAK_FUNC(sub_8322ED50);
PPC_FUNC_IMPL(__imp__sub_8322ED50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322ED58;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce778
	ctx.lr = 0x8322ED60;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8322e830
	ctx.lr = 0x8322ED70;
	sub_8322E830(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8322f16c
	if (cr6.eq) goto loc_8322F16C;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8322f16c
	if (cr6.eq) goto loc_8322F16C;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8322eddc
	if (!cr6.gt) goto loc_8322EDDC;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r9,-16
	ctx.r8.s64 = ctx.r9.s64 + -16;
	// lfs f29,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8322ede4
	goto loc_8322EDE4;
loc_8322EDDC:
	// lfs f29,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
loc_8322EDE4:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// blt cr6,0x8322f078
	if (cr6.lt) goto loc_8322F078;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8322efec
	if (cr6.lt) goto loc_8322EFEC;
loc_8322EE00:
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8322ee74
	if (cr6.eq) goto loc_8322EE74;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8322ee40
	if (!cr6.eq) goto loc_8322EE40;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8322EE40:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8322ee60
	if (!cr6.eq) goto loc_8322EE60;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322EE60:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
loc_8322EE74:
	// lhz r10,-18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -18);
	// addi r9,r11,-24
	ctx.r9.s64 = ctx.r11.s64 + -24;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322eeec
	if (cr6.eq) goto loc_8322EEEC;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8322eeb8
	if (!cr6.eq) goto loc_8322EEB8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322EEB8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8322eed8
	if (!cr6.eq) goto loc_8322EED8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322EED8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f31,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
loc_8322EEEC:
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// lhz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322ef64
	if (cr6.eq) goto loc_8322EF64;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8322ef30
	if (!cr6.eq) goto loc_8322EF30;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322EF30:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8322ef50
	if (!cr6.eq) goto loc_8322EF50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322EF50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f31,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
loc_8322EF64:
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// lhz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lhz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322efdc
	if (cr6.eq) goto loc_8322EFDC;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8322efa8
	if (!cr6.eq) goto loc_8322EFA8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322EFA8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8322efc8
	if (!cr6.eq) goto loc_8322EFC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322EFC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f31,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
loc_8322EFDC:
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r11,r9,-24
	ctx.r11.s64 = ctx.r9.s64 + -24;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bge cr6,0x8322ee00
	if (!cr6.lt) goto loc_8322EE00;
loc_8322EFEC:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x8322f078
	if (cr6.lt) goto loc_8322F078;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_8322EFF8:
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322f06c
	if (cr6.eq) goto loc_8322F06C;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8322f038
	if (!cr6.eq) goto loc_8322F038;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322F038:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8322f058
	if (!cr6.eq) goto loc_8322F058;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322F058:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f078
	if (!cr6.eq) goto loc_8322F078;
	// lfs f31,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
loc_8322F06C:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
	// bge 0x8322eff8
	if (!cr0.lt) goto loc_8322EFF8;
loc_8322F078:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8322f088
	if (!cr6.eq) goto loc_8322F088;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322F088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f0b0
	if (!cr6.eq) goto loc_8322F0B0;
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8322f0a4
	if (!cr6.eq) goto loc_8322F0A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322F0A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322f16c
	if (cr6.eq) goto loc_8322F16C;
loc_8322F0B0:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// lhz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -20);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x8322F0DC;
	sub_83209DF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d628
	ctx.lr = 0x8322F0F8;
	sub_8325D628(ctx, base);
	// fadds f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// fadds f12,f30,f28
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// addi r4,r6,5696
	ctx.r4.s64 = ctx.r6.s64 + 5696;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// beq cr6,0x8322f160
	if (cr6.eq) goto loc_8322F160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x8322F15C;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322F160:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322ea40
	ctx.lr = 0x8322F16C;
	sub_8322EA40(ctx, base);
loc_8322F16C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x831ce7c4
	ctx.lr = 0x8322F17C;
	__restfpr_28(ctx, base);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322F180"))) PPC_WEAK_FUNC(sub_8322F180);
PPC_FUNC_IMPL(__imp__sub_8322F180) {
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
	// bl 0x831ce778
	ctx.lr = 0x8322F198;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x8322e830
	ctx.lr = 0x8322F1AC;
	sub_8322E830(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ea40
	ctx.lr = 0x8322F1BC;
	sub_8322EA40(ctx, base);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f1e0
	if (!cr6.eq) goto loc_8322F1E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bl 0x83209aa8
	ctx.lr = 0x8322F1D8;
	sub_83209AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x8322F1E0;
	sub_8325D650(ctx, base);
loc_8322F1E0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r31,r11,-24
	ctx.r31.s64 = ctx.r11.s64 + -24;
	// lhz r9,-18(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -18);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8322f224
	if (!cr6.eq) goto loc_8322F224;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f224
	if (!cr6.eq) goto loc_8322F224;
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f30,16(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x8322f2bc
	goto loc_8322F2BC;
loc_8322F224:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8322f240
	if (!cr6.eq) goto loc_8322F240;
	// lfs f29,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8322f254
	goto loc_8322F254;
loc_8322F240:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f29,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
loc_8322F254:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x8322F264;
	sub_83209DF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d628
	ctx.lr = 0x8322F280;
	sub_8325D628(ctx, base);
	// fadds f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// fadds f12,f28,f30
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// addi r7,r8,5696
	ctx.r7.s64 = ctx.r8.s64 + 5696;
	// lfs f0,148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r5.u16);
loc_8322F2BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x8322F2CC;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_8322F2E0"))) PPC_WEAK_FUNC(sub_8322F2E0);
PPC_FUNC_IMPL(__imp__sub_8322F2E0) {
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
	// bl 0x831ce778
	ctx.lr = 0x8322F2F8;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// bl 0x8322e830
	ctx.lr = 0x8322F314;
	sub_8322E830(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8322ea40
	ctx.lr = 0x8322F324;
	sub_8322EA40(ctx, base);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f348
	if (!cr6.eq) goto loc_8322F348;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bl 0x83209aa8
	ctx.lr = 0x8322F340;
	sub_83209AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x8322F348;
	sub_8325D650(ctx, base);
loc_8322F348:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,-18(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + -18);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8322f388
	if (!cr6.eq) goto loc_8322F388;
	// lhz r11,-14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f388
	if (!cr6.eq) goto loc_8322F388;
	// stfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// stfs f30,-8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// b 0x8322f3d8
	goto loc_8322F3D8;
loc_8322F388:
	// lhz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -20);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r10,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x83209df8
	ctx.lr = 0x8322F3A0;
	sub_83209DF8(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// lhz r9,-20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + -20);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d628
	ctx.lr = 0x8322F3BC;
	sub_8325D628(ctx, base);
	// stfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f28,4(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f30,12(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lhz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -20);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,-20(r31)
	PPC_STORE_U16(ctx.r31.u32 + -20, ctx.r6.u16);
loc_8322F3D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x8322F3E8;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_8322F3FC"))) PPC_WEAK_FUNC(sub_8322F3FC);
PPC_FUNC_IMPL(__imp__sub_8322F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F400"))) PPC_WEAK_FUNC(sub_8322F400);
PPC_FUNC_IMPL(__imp__sub_8322F400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8322F408;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322f710
	if (cr6.eq) goto loc_8322F710;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// addi r28,r3,12
	ctx.r28.s64 = ctx.r3.s64 + 12;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322f710
	if (!cr6.gt) goto loc_8322F710;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// ble cr6,0x8322f710
	if (!cr6.gt) goto loc_8322F710;
	// lwz r8,28(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8322F444:
	// lhzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8322f478
	if (!cr6.eq) goto loc_8322F478;
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x8322f444
	if (cr6.lt) goto loc_8322F444;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8322F478:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x8322f710
	if (!cr6.gt) goto loc_8322F710;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322ed50
	ctx.lr = 0x8322F494;
	sub_8322ED50(ctx, base);
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322f564
	if (!cr6.gt) goto loc_8322F564;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8322F4AC:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322f54c
	if (cr6.eq) goto loc_8322F54C;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8322f534
	if (!cr6.gt) goto loc_8322F534;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8322F4F0:
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8322f514
	if (!cr6.gt) goto loc_8322F514;
	// lhz r9,10(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bgt cr6,0x8322f530
	if (cr6.gt) goto loc_8322F530;
loc_8322F514:
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// blt cr6,0x8322f4f0
	if (cr6.lt) goto loc_8322F4F0;
	// b 0x8322f534
	goto loc_8322F534;
loc_8322F530:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8322F534:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322f54c
	if (cr6.eq) goto loc_8322F54C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8325ef98
	ctx.lr = 0x8322F54C;
	sub_8325EF98(ctx, base);
loc_8322F54C:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8322f4ac
	if (cr6.lt) goto loc_8322F4AC;
loc_8322F564:
	// addi r27,r28,12
	ctx.r27.s64 = ctx.r28.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325d2f8
	ctx.lr = 0x8322F574;
	sub_8325D2F8(ctx, base);
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322f5d8
	if (!cr6.gt) goto loc_8322F5D8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r29,r11,5696
	ctx.r29.s64 = ctx.r11.s64 + 5696;
loc_8322F594:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpw cr6,r6,r26
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r26.s32, xer);
	// blt cr6,0x8322f5c0
	if (cr6.lt) goto loc_8322F5C0;
	// lfs f2,132(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8325f4a8
	ctx.lr = 0x8322F5C0;
	sub_8325F4A8(ctx, base);
loc_8322F5C0:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8322f594
	if (cr6.lt) goto loc_8322F594;
loc_8322F5D8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322e830
	ctx.lr = 0x8322F5E0;
	sub_8322E830(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8322f62c
	if (cr6.eq) goto loc_8322F62C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8322f62c
	if (cr6.eq) goto loc_8322F62C;
	// lhz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -20);
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r8,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r7,-20(r11)
	PPC_STORE_U16(ctx.r11.u32 + -20, ctx.r7.u16);
loc_8322F62C:
	// lhz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x8322f6a4
	if (!cr6.lt) goto loc_8322F6A4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8322f6a4
	if (!cr6.gt) goto loc_8322F6A4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -18);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x8322f69c
	if (cr6.gt) goto loc_8322F69C;
	// lhz r11,-14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8322f6a4
	if (!cr6.gt) goto loc_8322F6A4;
loc_8322F69C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8322f6a8
	goto loc_8322F6A8;
loc_8322F6A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322F6A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322f708
	if (cr6.eq) goto loc_8322F708;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8322f6e8
	if (!cr6.gt) goto loc_8322F6E8;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8322F6C4:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x8325d9a8
	ctx.lr = 0x8322F6D0;
	sub_8325D9A8(ctx, base);
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8322f6c4
	if (cr6.lt) goto loc_8322F6C4;
loc_8322F6E8:
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83209d68
	ctx.lr = 0x8322F6F0;
	sub_83209D68(ctx, base);
	// stw r25,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r25.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r25,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r25.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8325d3b0
	ctx.lr = 0x8322F708;
	sub_8325D3B0(ctx, base);
loc_8322F708:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8325f908
	ctx.lr = 0x8322F710;
	sub_8325F908(ctx, base);
loc_8322F710:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322F718"))) PPC_WEAK_FUNC(sub_8322F718);
PPC_FUNC_IMPL(__imp__sub_8322F718) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322f75c
	if (cr6.eq) goto loc_8322F75C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_8322F75C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322f76c
	if (cr6.eq) goto loc_8322F76C;
	// bl 0x832356e0
	ctx.lr = 0x8322F76C;
	sub_832356E0(ctx, base);
loc_8322F76C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322f77c
	if (cr6.eq) goto loc_8322F77C;
	// bl 0x832356e0
	ctx.lr = 0x8322F77C;
	sub_832356E0(ctx, base);
loc_8322F77C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322f78c
	if (cr6.eq) goto loc_8322F78C;
	// bl 0x832356e0
	ctx.lr = 0x8322F78C;
	sub_832356E0(ctx, base);
loc_8322F78C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322f79c
	if (cr6.eq) goto loc_8322F79C;
	// bl 0x832356e0
	ctx.lr = 0x8322F79C;
	sub_832356E0(ctx, base);
loc_8322F79C:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8322F7AC;
	sub_83294018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,541
	ctx.r10.s64 = 541;
	// li r9,559
	ctx.r9.s64 = 559;
	// li r8,1800
	ctx.r8.s64 = 1800;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

__attribute__((alias("__imp__sub_8322F7E8"))) PPC_WEAK_FUNC(sub_8322F7E8);
PPC_FUNC_IMPL(__imp__sub_8322F7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8322F7F0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,542
	cr6.compare<uint32_t>(ctx.r11.u32, 542, xer);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r11,114
	ctx.r11.s64 = 114;
	// beq cr6,0x8322f818
	if (cr6.eq) goto loc_8322F818;
	// li r11,108
	ctx.r11.s64 = 108;
loc_8322F818:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// addi r5,r10,10284
	ctx.r5.s64 = ctx.r10.s64 + 10284;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322F830;
	sub_83297A40(ctx, base);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x8322f850
	if (cr6.eq) goto loc_8322F850;
	// lwz r24,36(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_8322F850:
	// addi r21,r24,-1
	ctx.r21.s64 = ctx.r24.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x8322f95c
	if (!cr6.gt) goto loc_8322F95C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r23,r11,10268
	ctx.r23.s64 = ctx.r11.s64 + 10268;
	// lfs f31,21588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
	ctx.f31.f64 = double(temp.f32);
loc_8322F870:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832710f0
	ctx.lr = 0x8322F880;
	sub_832710F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222578
	ctx.lr = 0x8322F888;
	sub_83222578(ctx, base);
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322f8a0
	if (!cr6.eq) goto loc_8322F8A0;
	// li r27,255
	ctx.r27.s64 = 255;
	// b 0x8322f8ec
	goto loc_8322F8EC;
loc_8322F8A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832710f0
	ctx.lr = 0x8322F8B0;
	sub_832710F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83220448
	ctx.lr = 0x8322F8B8;
	sub_83220448(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x8322f8e4
	if (!cr6.lt) goto loc_8322F8E4;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 != 0) | (xer.ca != 0);
	ctx.r8.s64 = ctx.r9.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// b 0x8322f8e8
	goto loc_8322F8E8;
loc_8322F8E4:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8322F8E8:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8322F8EC:
	// lwz r3,24(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322f910
	if (!cr6.eq) goto loc_8322F910;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x8322f928
	if (cr6.eq) goto loc_8322F928;
	// divwu r30,r28,r21
	ctx.r30.u32 = PPCDivide(ctx.r28.u32, ctx.r21.u32);
	// twllei r21,0
	// b 0x8322f928
	goto loc_8322F928;
loc_8322F910:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832710f0
	ctx.lr = 0x8322F91C;
	sub_832710F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222578
	ctx.lr = 0x8322F924;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8322F928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8322F930;
	sub_83296BA8(ctx, base);
	// subf r4,r3,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r3.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r7,r26,8
	ctx.r7.u64 = ctx.r26.u32 & 0xFFFFFF;
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322F94C;
	sub_83297A40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,255
	ctx.r28.s64 = ctx.r28.s64 + 255;
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// blt cr6,0x8322f870
	if (cr6.lt) goto loc_8322F870;
loc_8322F95C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8322F964;
	sub_83222030(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8322f9b4
	if (cr6.eq) goto loc_8322F9B4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f13,200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x83296ba8
	ctx.lr = 0x8322F99C;
	sub_83296BA8(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// subf r4,r3,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r3.s64;
	// clrlwi r6,r31,16
	ctx.r6.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r5,r9,10260
	ctx.r5.s64 = ctx.r9.s64 + 10260;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322F9B4;
	sub_83297A40(ctx, base);
loc_8322F9B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296ba8
	ctx.lr = 0x8322F9BC;
	sub_83296BA8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,13664
	ctx.r30.s64 = ctx.r11.s64 + 13664;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subf r4,r3,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r3.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,13508
	ctx.r6.s64 = ctx.r11.s64 + 13508;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322F9E0;
	sub_83297A40(ctx, base);
	// lhz r10,6(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 6);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,554
	cr6.compare<uint32_t>(ctx.r10.u32, 554, xer);
	// bne cr6,0x8322fa0c
	if (!cr6.eq) goto loc_8322FA0C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,10256
	ctx.r6.s64 = ctx.r11.s64 + 10256;
	// subf r4,r31,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r31.s64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322FA08;
	sub_83297A40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8322FA0C:
	// lhz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,552
	cr6.compare<uint32_t>(ctx.r11.u32, 552, xer);
	// bne cr6,0x8322fa24
	if (!cr6.eq) goto loc_8322FA24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r11,11072
	ctx.r6.s64 = ctx.r11.s64 + 11072;
	// b 0x8322fa34
	goto loc_8322FA34;
loc_8322FA24:
	// cmplwi cr6,r11,551
	cr6.compare<uint32_t>(ctx.r11.u32, 551, xer);
	// bne cr6,0x8322fa48
	if (!cr6.eq) goto loc_8322FA48;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r11,10252
	ctx.r6.s64 = ctx.r11.s64 + 10252;
loc_8322FA34:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r4,r31,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r31.s64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322FA44;
	sub_83297A40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8322FA48:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,10248
	ctx.r6.s64 = ctx.r11.s64 + 10248;
	// subf r4,r31,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r31.s64;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8322FA60;
	sub_83297A40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FA70"))) PPC_WEAK_FUNC(sub_8322FA70);
PPC_FUNC_IMPL(__imp__sub_8322FA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322FA78;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8322fae8
	if (!cr6.eq) goto loc_8322FAE8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322fac0
	if (cr6.eq) goto loc_8322FAC0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322faac
	if (cr6.eq) goto loc_8322FAAC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8322fac8
	goto loc_8322FAC8;
loc_8322FAAC:
	// lhz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322FAB4;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322fac8
	if (!cr6.eq) goto loc_8322FAC8;
loc_8322FAC0:
	// bl 0x83227908
	ctx.lr = 0x8322FAC4;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8322FAC8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10452
	ctx.r4.s64 = ctx.r11.s64 + 10452;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// bl 0x832085e8
	ctx.lr = 0x8322FADC;
	sub_832085E8(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322FAE8:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8322fb64
	if (cr6.eq) goto loc_8322FB64;
	// lwz r30,36(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// beq cr6,0x8322fb64
	if (cr6.eq) goto loc_8322FB64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322fb34
	if (cr6.eq) goto loc_8322FB34;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322fb20
	if (cr6.eq) goto loc_8322FB20;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8322fb3c
	goto loc_8322FB3C;
loc_8322FB20:
	// lhz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322FB28;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322fb3c
	if (!cr6.eq) goto loc_8322FB3C;
loc_8322FB34:
	// bl 0x83227908
	ctx.lr = 0x8322FB38;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8322FB3C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10408
	ctx.r4.s64 = ctx.r11.s64 + 10408;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322FB58;
	sub_832085E8(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322FB64:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322fbdc
	if (cr6.eq) goto loc_8322FBDC;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, xer);
	// beq cr6,0x8322fbdc
	if (cr6.eq) goto loc_8322FBDC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322fbac
	if (cr6.eq) goto loc_8322FBAC;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322fb98
	if (cr6.eq) goto loc_8322FB98;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8322fbb4
	goto loc_8322FBB4;
loc_8322FB98:
	// lhz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322FBA0;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322fbb4
	if (!cr6.eq) goto loc_8322FBB4;
loc_8322FBAC:
	// bl 0x83227908
	ctx.lr = 0x8322FBB0;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8322FBB4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10364
	ctx.r4.s64 = ctx.r11.s64 + 10364;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322FBD0;
	sub_832085E8(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322FBDC:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lhz r30,2(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// addi r27,r11,10116
	ctx.r27.s64 = ctx.r11.s64 + 10116;
	// cmpwi cr6,r30,541
	cr6.compare<int32_t>(ctx.r30.s32, 541, xer);
	// beq cr6,0x8322fc60
	if (cr6.eq) goto loc_8322FC60;
	// cmpwi cr6,r30,542
	cr6.compare<int32_t>(ctx.r30.s32, 542, xer);
	// bne cr6,0x8322fc10
	if (!cr6.eq) goto loc_8322FC10;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8322fc64
	goto loc_8322FC64;
loc_8322FC10:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8322fc34
	if (cr6.eq) goto loc_8322FC34;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8322fc3c
	if (!cr6.eq) goto loc_8322FC3C;
	// lhz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8322FC2C;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322fc38
	if (!cr6.eq) goto loc_8322FC38;
loc_8322FC34:
	// bl 0x83227908
	ctx.lr = 0x8322FC38;
	sub_83227908(ctx, base);
loc_8322FC38:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8322FC3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832277f8
	ctx.lr = 0x8322FC44;
	sub_832277F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,10132
	ctx.r4.s64 = ctx.r11.s64 + 10132;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322FC60;
	sub_832085E8(ctx, base);
loc_8322FC60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322FC64:
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83209aa8
	ctx.lr = 0x8322FC70;
	sub_83209AA8(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lfs f13,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8322fd38
	if (cr6.eq) goto loc_8322FD38;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83268b68
	ctx.lr = 0x8322FCB0;
	sub_83268B68(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lfs f0,10112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x831fc978
	ctx.lr = 0x8322FD04;
	sub_831FC978(ctx, base);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r9,5696
	ctx.r8.s64 = ctx.r9.s64 + 5696;
	// lfs f5,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x8322fd80
	goto loc_8322FD80;
loc_8322FD38:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// lfs f13,196(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,196(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f0,16(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
loc_8322FD80:
	// lhz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// cmpwi cr6,r30,559
	cr6.compare<int32_t>(ctx.r30.s32, 559, xer);
	// addi r29,r11,10340
	ctx.r29.s64 = ctx.r11.s64 + 10340;
	// beq cr6,0x8322fdd8
	if (cr6.eq) goto loc_8322FDD8;
	// cmpwi cr6,r30,552
	cr6.compare<int32_t>(ctx.r30.s32, 552, xer);
	// bne cr6,0x8322fda4
	if (!cr6.eq) goto loc_8322FDA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8322fddc
	goto loc_8322FDDC;
loc_8322FDA4:
	// cmpwi cr6,r30,551
	cr6.compare<int32_t>(ctx.r30.s32, 551, xer);
	// bne cr6,0x8322fdb4
	if (!cr6.eq) goto loc_8322FDB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8322fddc
	goto loc_8322FDDC;
loc_8322FDB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832277f8
	ctx.lr = 0x8322FDBC;
	sub_832277F8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,10168
	ctx.r4.s64 = ctx.r11.s64 + 10168;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8322FDD8;
	sub_832085E8(ctx, base);
loc_8322FDD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322FDDC:
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8322f7e8
	ctx.lr = 0x8322FDF0;
	sub_8322F7E8(ctx, base);
	// bl 0x8320ce58
	ctx.lr = 0x8322FDF4;
	sub_8320CE58(ctx, base);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206de0
	ctx.lr = 0x8322FE18;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8322fe50
	if (cr6.eq) goto loc_8322FE50;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83296ba8
	ctx.lr = 0x8322FE28;
	sub_83296BA8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stbx r10,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83206de0
	ctx.lr = 0x8322FE48;
	sub_83206DE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8322fe68
	if (!cr6.eq) goto loc_8322FE68;
loc_8322FE50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83261730
	ctx.lr = 0x8322FE5C;
	sub_83261730(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8322FE68:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,10292
	ctx.r4.s64 = ctx.r11.s64 + 10292;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x832085e8
	ctx.lr = 0x8322FE80;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d518
	ctx.lr = 0x8322FE88;
	sub_8325D518(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FE94"))) PPC_WEAK_FUNC(sub_8322FE94);
PPC_FUNC_IMPL(__imp__sub_8322FE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FE98"))) PPC_WEAK_FUNC(sub_8322FE98);
PPC_FUNC_IMPL(__imp__sub_8322FE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322FEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r11,-163
	ctx.r6.s64 = ctx.r11.s64 + -163;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srw r11,r10,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// and r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 & ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8322ff44
	if (!cr6.eq) goto loc_8322FF44;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8322ff24
	if (cr6.eq) goto loc_8322FF24;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8322FF18;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8322ff44
	if (!cr6.eq) goto loc_8322FF44;
loc_8322FF24:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r11,26812
	ctx.r5.s64 = ctx.r11.s64 + 26812;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x8322FF40;
	sub_8320D428(ctx, base);
	// li r28,-18
	ctx.r28.s64 = -18;
loc_8322FF44:
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8322ff54
	if (cr6.eq) goto loc_8322FF54;
	// bl 0x832356e0
	ctx.lr = 0x8322FF54;
	sub_832356E0(ctx, base);
loc_8322FF54:
	// stw r30,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x8322ff70
	if (cr6.eq) goto loc_8322FF70;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
loc_8322FF70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FF78"))) PPC_WEAK_FUNC(sub_8322FF78);
PPC_FUNC_IMPL(__imp__sub_8322FF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8322FF80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r6,r11,-163
	ctx.r6.s64 = ctx.r11.s64 + -163;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// srw r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r30,0
	ctx.r30.s64 = 0;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83230010
	if (!cr6.eq) goto loc_83230010;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x8322FFEC;
	sub_83221378(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83230010
	if (!cr6.eq) goto loc_83230010;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x83230010;
	sub_8320D428(ctx, base);
loc_83230010:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83230020
	if (cr6.eq) goto loc_83230020;
	// bl 0x832356e0
	ctx.lr = 0x83230020;
	sub_832356E0(ctx, base);
loc_83230020:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8323003c
	if (cr6.eq) goto loc_8323003C;
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
loc_8323003C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230044"))) PPC_WEAK_FUNC(sub_83230044);
PPC_FUNC_IMPL(__imp__sub_83230044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230048"))) PPC_WEAK_FUNC(sub_83230048);
PPC_FUNC_IMPL(__imp__sub_83230048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83230050;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x83230070;
	sub_83294018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,541
	ctx.r10.s64 = 541;
	// li r9,559
	ctx.r9.s64 = 559;
	// li r8,1800
	ctx.r8.s64 = 1800;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832264e0
	ctx.lr = 0x832300E0;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832300fc
	if (!cr6.eq) goto loc_832300FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x832300F4;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_832300FC:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,541
	cr6.compare<uint32_t>(ctx.r10.u32, 541, xer);
	// beq cr6,0x8323012c
	if (cr6.eq) goto loc_8323012C;
	// cmplwi cr6,r10,542
	cr6.compare<uint32_t>(ctx.r10.u32, 542, xer);
	// beq cr6,0x8323012c
	if (cr6.eq) goto loc_8323012C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1827
	ctx.r5.s64 = 1827;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d778
	ctx.lr = 0x83230124;
	sub_8320D778(ctx, base);
	// li r11,541
	ctx.r11.s64 = 541;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_8323012C:
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10472
	ctx.r5.s64 = ctx.r11.s64 + 10472;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8322ff78
	ctx.lr = 0x83230158;
	sub_8322FF78(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10480
	ctx.r5.s64 = ctx.r11.s64 + 10480;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8322ff78
	ctx.lr = 0x83230180;
	sub_8322FF78(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10488
	ctx.r5.s64 = ctx.r11.s64 + 10488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8322ff78
	ctx.lr = 0x832301A8;
	sub_8322FF78(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322fe98
	ctx.lr = 0x832301C8;
	sub_8322FE98(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// sth r29,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r29.u16);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r29,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832264e0
	ctx.lr = 0x83230200;
	sub_832264E0(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323021c
	if (!cr6.eq) goto loc_8323021C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x832277e8
	ctx.lr = 0x83230214;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_8323021C:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,559
	cr6.compare<uint32_t>(ctx.r10.u32, 559, xer);
	// beq cr6,0x83230254
	if (cr6.eq) goto loc_83230254;
	// cmplwi cr6,r10,552
	cr6.compare<uint32_t>(ctx.r10.u32, 552, xer);
	// beq cr6,0x83230254
	if (cr6.eq) goto loc_83230254;
	// cmplwi cr6,r10,551
	cr6.compare<uint32_t>(ctx.r10.u32, 551, xer);
	// beq cr6,0x83230254
	if (cr6.eq) goto loc_83230254;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,839
	ctx.r5.s64 = 839;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d778
	ctx.lr = 0x8323024C;
	sub_8320D778(ctx, base);
	// li r11,559
	ctx.r11.s64 = 559;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_83230254:
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// sth r29,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r29.u16);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r29,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r29.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832264e0
	ctx.lr = 0x8323028C;
	sub_832264E0(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832302a8
	if (!cr6.eq) goto loc_832302A8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x832277e8
	ctx.lr = 0x832302A0;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
loc_832302A8:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,553
	cr6.compare<uint32_t>(ctx.r10.u32, 553, xer);
	// beq cr6,0x832302e0
	if (cr6.eq) goto loc_832302E0;
	// cmplwi cr6,r10,1800
	cr6.compare<uint32_t>(ctx.r10.u32, 1800, xer);
	// beq cr6,0x832302e0
	if (cr6.eq) goto loc_832302E0;
	// cmplwi cr6,r10,554
	cr6.compare<uint32_t>(ctx.r10.u32, 554, xer);
	// beq cr6,0x832302e0
	if (cr6.eq) goto loc_832302E0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,840
	ctx.r5.s64 = 840;
	// li r4,144
	ctx.r4.s64 = 144;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8320d778
	ctx.lr = 0x832302D8;
	sub_8320D778(ctx, base);
	// li r11,1800
	ctx.r11.s64 = 1800;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
loc_832302E0:
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x832302fc
	if (cr6.lt) goto loc_832302FC;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x83220448
	ctx.lr = 0x832302F8;
	sub_83220448(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_832302FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230308"))) PPC_WEAK_FUNC(sub_83230308);
PPC_FUNC_IMPL(__imp__sub_83230308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83230310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8323032c
	if (cr6.lt) goto loc_8323032C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83230334
	if (!cr6.gt) goto loc_83230334;
loc_8323032C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320e738
	ctx.lr = 0x83230334;
	sub_8320E738(ctx, base);
loc_83230334:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83209aa8
	ctx.lr = 0x8323033C;
	sub_83209AA8(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8323034C;
	sub_83294018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,541
	ctx.r10.s64 = 541;
	// li r9,559
	ctx.r9.s64 = 559;
	// li r8,1800
	ctx.r8.s64 = 1800;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// ori r6,r7,8400
	ctx.r6.u64 = ctx.r7.u64 | 8400;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r3,r6,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r3.s64 = ctx.r6.s32 >> temp.u32;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323039c
	if (cr6.eq) goto loc_8323039C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8323039C;
	sub_83222030(ctx, base);
loc_8323039C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,144
	ctx.r10.s64 = 144;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230048
	ctx.lr = 0x832303BC;
	sub_83230048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832303C4"))) PPC_WEAK_FUNC(sub_832303C4);
PPC_FUNC_IMPL(__imp__sub_832303C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832303C8"))) PPC_WEAK_FUNC(sub_832303C8);
PPC_FUNC_IMPL(__imp__sub_832303C8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1882
	cr6.compare<uint32_t>(ctx.r11.u32, 1882, xer);
	// bgt cr6,0x832304d8
	if (cr6.gt) goto loc_832304D8;
	// beq cr6,0x83230494
	if (cr6.eq) goto loc_83230494;
	// cmplwi cr6,r11,494
	cr6.compare<uint32_t>(ctx.r11.u32, 494, xer);
	// beq cr6,0x83230440
	if (cr6.eq) goto loc_83230440;
	// cmplwi cr6,r11,1879
	cr6.compare<uint32_t>(ctx.r11.u32, 1879, xer);
	// bne cr6,0x832304e0
	if (!cr6.eq) goto loc_832304E0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832304f8
	if (cr6.eq) goto loc_832304F8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r11,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x83230534
	goto loc_83230534;
loc_83230440:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832304f8
	if (cr6.eq) goto loc_832304F8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r11,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8323048c
	if (cr6.eq) goto loc_8323048C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8323048C;
	sub_83222030(ctx, base);
loc_8323048C:
	// li r10,37
	ctx.r10.s64 = 37;
	// b 0x83230544
	goto loc_83230544;
loc_83230494:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832304f8
	if (cr6.eq) goto loc_832304F8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r11,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r11.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x83230534
	goto loc_83230534;
loc_832304D8:
	// cmplwi cr6,r11,1883
	cr6.compare<uint32_t>(ctx.r11.u32, 1883, xer);
	// beq cr6,0x832304e8
	if (cr6.eq) goto loc_832304E8;
loc_832304E0:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83230564
	goto loc_83230564;
loc_832304E8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83230504
	if (!cr6.eq) goto loc_83230504;
loc_832304F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213150
	ctx.lr = 0x83230500;
	sub_83213150(ctx, base);
	// b 0x83230560
	goto loc_83230560;
loc_83230504:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// lhz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r7.u16);
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sraw r3,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r3.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_83230534:
	// beq cr6,0x83230540
	if (cr6.eq) goto loc_83230540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83230540;
	sub_83222030(ctx, base);
loc_83230540:
	// li r10,32
	ctx.r10.s64 = 32;
loc_83230544:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_83230560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83230564:
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

__attribute__((alias("__imp__sub_8323057C"))) PPC_WEAK_FUNC(sub_8323057C);
PPC_FUNC_IMPL(__imp__sub_8323057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230580"))) PPC_WEAK_FUNC(sub_83230580);
PPC_FUNC_IMPL(__imp__sub_83230580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// li r9,846
	ctx.r9.s64 = 846;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// cmplwi cr6,r10,1882
	cr6.compare<uint32_t>(ctx.r10.u32, 1882, xer);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
	// bgt cr6,0x83230628
	if (cr6.gt) goto loc_83230628;
	// beq cr6,0x83230618
	if (cr6.eq) goto loc_83230618;
	// cmplwi cr6,r10,494
	cr6.compare<uint32_t>(ctx.r10.u32, 494, xer);
	// beq cr6,0x832305f8
	if (cr6.eq) goto loc_832305F8;
	// cmplwi cr6,r10,1879
	cr6.compare<uint32_t>(ctx.r10.u32, 1879, xer);
	// bne cr6,0x83230630
	if (!cr6.eq) goto loc_83230630;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r5,r11,10472
	ctx.r5.s64 = ctx.r11.s64 + 10472;
	// b 0x83230650
	goto loc_83230650;
loc_832305F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8322fe98
	ctx.lr = 0x83230604;
	sub_8322FE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83230618:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r5,r11,10480
	ctx.r5.s64 = ctx.r11.s64 + 10480;
	// b 0x83230650
	goto loc_83230650;
loc_83230628:
	// cmplwi cr6,r10,1883
	cr6.compare<uint32_t>(ctx.r10.u32, 1883, xer);
	// beq cr6,0x83230644
	if (cr6.eq) goto loc_83230644;
loc_83230630:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83230644:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r5,r11,10488
	ctx.r5.s64 = ctx.r11.s64 + 10488;
loc_83230650:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8322ff78
	ctx.lr = 0x8323065C;
	sub_8322FF78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230670"))) PPC_WEAK_FUNC(sub_83230670);
PPC_FUNC_IMPL(__imp__sub_83230670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83230678;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x83230698;
	sub_83294018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,541
	ctx.r10.s64 = 541;
	// li r9,559
	ctx.r9.s64 = 559;
	// li r8,1800
	ctx.r8.s64 = 1800;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// sth r8,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83230048
	ctx.lr = 0x832306C8;
	sub_83230048(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832306d4
	if (cr6.eq) goto loc_832306D4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832306D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322fa70
	ctx.lr = 0x832306E4;
	sub_8322FA70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832306f0
	if (cr6.eq) goto loc_832306F0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832306F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322f718
	ctx.lr = 0x832306F8;
	sub_8322F718(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230704"))) PPC_WEAK_FUNC(sub_83230704);
PPC_FUNC_IMPL(__imp__sub_83230704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230708"))) PPC_WEAK_FUNC(sub_83230708);
PPC_FUNC_IMPL(__imp__sub_83230708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83230710;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83230740
	if (!cr6.gt) goto loc_83230740;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83230740
	if (cr6.eq) goto loc_83230740;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
loc_83230738:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83230738
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83230738;
loc_83230740:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832307cc
	if (!cr6.gt) goto loc_832307CC;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x832307cc
	if (!cr6.gt) goto loc_832307CC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r26,r6,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_8323077C:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x832307cc
	if (!cr6.lt) goto loc_832307CC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832307a4
	if (cr6.eq) goto loc_832307A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x8323079C;
	sub_83220448(ctx, base);
	// stfsx f1,r26,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r30.u32, temp.u32);
	// b 0x832307b8
	goto loc_832307B8;
loc_832307A4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,134
	ctx.r3.s64 = 134;
	// lhz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// bl 0x8320d548
	ctx.lr = 0x832307B8;
	sub_8320D548(ctx, base);
loc_832307B8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// blt cr6,0x8323077c
	if (cr6.lt) goto loc_8323077C;
loc_832307CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832307D8"))) PPC_WEAK_FUNC(sub_832307D8);
PPC_FUNC_IMPL(__imp__sub_832307D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832307E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x83209aa8
	ctx.lr = 0x83230808;
	sub_83209AA8(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f13,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
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
	// blt cr6,0x83230864
	if (cr6.lt) goto loc_83230864;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_83230864:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x8323087c
	if (cr6.lt) goto loc_8323087C;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83220140
	ctx.lr = 0x83230878;
	sub_83220140(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8323087C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83230a1c
	if (cr6.eq) goto loc_83230A1C;
	// li r25,12288
	ctx.r25.s64 = 12288;
	// srw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83230a30
	if (cr6.eq) goto loc_83230A30;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// bne cr6,0x83230a30
	if (!cr6.eq) goto loc_83230A30;
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83261d70
	ctx.lr = 0x832308BC;
	sub_83261D70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832309d0
	if (cr6.eq) goto loc_832309D0;
	// lhz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lhz r9,30(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// srawi r6,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r11,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x831fc428
	ctx.lr = 0x83230924;
	sub_831FC428(ctx, base);
	// lhz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r31,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r31.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r10.u16);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// beq cr6,0x83230a74
	if (cr6.eq) goto loc_83230A74;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r10,-163
	ctx.r7.s64 = ctx.r10.s64 + -163;
	// cntlzw r6,r4
	ctx.r6.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// rlwinm r9,r6,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// srw r11,r25,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83230a74
	if (!cr6.eq) goto loc_83230A74;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83230a5c
	if (cr6.eq) goto loc_83230A5C;
	// cmpwi cr6,r10,37
	cr6.compare<int32_t>(ctx.r10.s32, 37, xer);
	// bne cr6,0x83230a5c
	if (!cr6.eq) goto loc_83230A5C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83268b68
	ctx.lr = 0x832309A8;
	sub_83268B68(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x831fc278
	ctx.lr = 0x832309B8;
	sub_831FC278(ctx, base);
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x831fc978
	ctx.lr = 0x832309C4;
	sub_831FC978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832309D0:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832309f4
	if (!cr6.eq) goto loc_832309F4;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x832309E4;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832309f0
	if (!cr6.eq) goto loc_832309F0;
	// bl 0x83227908
	ctx.lr = 0x832309F0;
	sub_83227908(ctx, base);
loc_832309F0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832309F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83261c90
	ctx.lr = 0x832309FC;
	sub_83261C90(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,10116
	ctx.r9.s64 = ctx.r11.s64 + 10116;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,10504
	ctx.r4.s64 = ctx.r10.s64 + 10504;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x83230A1C;
	sub_832085E8(ctx, base);
loc_83230A1C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8325d518
	ctx.lr = 0x83230A24;
	sub_8325D518(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83230A30:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,10496
	ctx.r5.s64 = ctx.r11.s64 + 10496;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d548
	ctx.lr = 0x83230A48;
	sub_8320D548(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8325d518
	ctx.lr = 0x83230A50;
	sub_8325D518(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83230A5C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,26812
	ctx.r5.s64 = ctx.r11.s64 + 26812;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d548
	ctx.lr = 0x83230A74;
	sub_8320D548(ctx, base);
loc_83230A74:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x831fc978
	ctx.lr = 0x83230A80;
	sub_831FC978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230A8C"))) PPC_WEAK_FUNC(sub_83230A8C);
PPC_FUNC_IMPL(__imp__sub_83230A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230A90"))) PPC_WEAK_FUNC(sub_83230A90);
PPC_FUNC_IMPL(__imp__sub_83230A90) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83230abc
	if (cr6.eq) goto loc_83230ABC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83230ABC;
	sub_8320D088(ctx, base);
loc_83230ABC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83230b04
	if (cr6.eq) goto loc_83230B04;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322cd48
	ctx.lr = 0x83230AE8;
	sub_8322CD48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83230b04
	if (!cr6.eq) goto loc_83230B04;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83230b04
	if (cr6.eq) goto loc_83230B04;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8325dc38
	ctx.lr = 0x83230B04;
	sub_8325DC38(ctx, base);
loc_83230B04:
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

__attribute__((alias("__imp__sub_83230B1C"))) PPC_WEAK_FUNC(sub_83230B1C);
PPC_FUNC_IMPL(__imp__sub_83230B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B20"))) PPC_WEAK_FUNC(sub_83230B20);
PPC_FUNC_IMPL(__imp__sub_83230B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83230B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322ed50
	ctx.lr = 0x83230B3C;
	sub_8322ED50(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r4,r10,28
	ctx.r4.s64 = ctx.r10.s64 * 28;
	// bl 0x83209df8
	ctx.lr = 0x83230B58;
	sub_83209DF8(ctx, base);
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// sth r6,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r6.u16);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d448
	ctx.lr = 0x83230B90;
	sub_8325D448(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230BA0"))) PPC_WEAK_FUNC(sub_83230BA0);
PPC_FUNC_IMPL(__imp__sub_83230BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83230BA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83230bd4
	if (cr6.eq) goto loc_83230BD4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83230bd4
	if (cr6.eq) goto loc_83230BD4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83230BD4;
	sub_8320D088(ctx, base);
loc_83230BD4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83230c6c
	if (cr6.lt) goto loc_83230C6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e720
	ctx.lr = 0x83230BE8;
	sub_8322E720(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83230b20
	ctx.lr = 0x83230C00;
	sub_83230B20(ctx, base);
	// li r31,255
	ctx.r31.s64 = 255;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222578
	ctx.lr = 0x83230C34;
	sub_83222578(ctx, base);
	// rlwimi r31,r3,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x83230c54
	if (cr6.lt) goto loc_83230C54;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8322e6c0
	ctx.lr = 0x83230C50;
	sub_8322E6C0(ctx, base);
	// stb r3,19(r29)
	PPC_STORE_U8(ctx.r29.u32 + 19, ctx.r3.u8);
loc_83230C54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322e970
	ctx.lr = 0x83230C5C;
	sub_8322E970(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8322eb08
	ctx.lr = 0x83230C6C;
	sub_8322EB08(ctx, base);
loc_83230C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230C78"))) PPC_WEAK_FUNC(sub_83230C78);
PPC_FUNC_IMPL(__imp__sub_83230C78) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x83230ca8
	if (cr6.lt) goto loc_83230CA8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83230ccc
	if (!cr6.gt) goto loc_83230CCC;
loc_83230CA8:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83230ccc
	if (cr6.eq) goto loc_83230CCC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83230CC0;
	sub_8320D088(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83230d54
	if (cr6.lt) goto loc_83230D54;
loc_83230CCC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8325d448
	ctx.lr = 0x83230CD4;
	sub_8325D448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83230670
	ctx.lr = 0x83230CE0;
	sub_83230670(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83230d4c
	if (!cr6.eq) goto loc_83230D4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e720
	ctx.lr = 0x83230CF0;
	sub_8322E720(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83230b20
	ctx.lr = 0x83230D08;
	sub_83230B20(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_83230D1C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83230d1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83230D1C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8325d448
	ctx.lr = 0x83230D30;
	sub_8325D448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e970
	ctx.lr = 0x83230D38;
	sub_8322E970(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8322eb08
	ctx.lr = 0x83230D48;
	sub_8322EB08(ctx, base);
	// b 0x83230d54
	goto loc_83230D54;
loc_83230D4C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8325d4b8
	ctx.lr = 0x83230D54;
	sub_8325D4B8(ctx, base);
loc_83230D54:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83230D70"))) PPC_WEAK_FUNC(sub_83230D70);
PPC_FUNC_IMPL(__imp__sub_83230D70) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83230da0
	if (cr6.lt) goto loc_83230DA0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x83230db0
	if (!cr6.gt) goto loc_83230DB0;
loc_83230DA0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83230DB0;
	sub_8320D088(ctx, base);
loc_83230DB0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83230e00
	if (cr6.lt) goto loc_83230E00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e720
	ctx.lr = 0x83230DC4;
	sub_8322E720(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83230b20
	ctx.lr = 0x83230DDC;
	sub_83230B20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832307d8
	ctx.lr = 0x83230DE8;
	sub_832307D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e970
	ctx.lr = 0x83230DF0;
	sub_8322E970(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8322eb08
	ctx.lr = 0x83230E00;
	sub_8322EB08(ctx, base);
loc_83230E00:
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

__attribute__((alias("__imp__sub_83230E1C"))) PPC_WEAK_FUNC(sub_83230E1C);
PPC_FUNC_IMPL(__imp__sub_83230E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230E20"))) PPC_WEAK_FUNC(sub_83230E20);
PPC_FUNC_IMPL(__imp__sub_83230E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83230E28;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83230e4c
	if (!cr6.gt) goto loc_83230E4C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83230E4C;
	sub_8320D088(ctx, base);
loc_83230E4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e720
	ctx.lr = 0x83230E54;
	sub_8322E720(ctx, base);
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83230e6c
	if (!cr6.eq) goto loc_83230E6C;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x832310a4
	goto loc_832310A4;
loc_83230E6C:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r27,r26,12
	ctx.r27.s64 = ctx.r26.s64 + 12;
	// lhz r8,14(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mulli r4,r6,28
	ctx.r4.s64 = ctx.r6.s64 * 28;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83209df8
	ctx.lr = 0x83230EA4;
	sub_83209DF8(ctx, base);
	// stw r3,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r3.u32);
	// lhz r10,14(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8325d448
	ctx.lr = 0x83230EC4;
	sub_8325D448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x83230ECC;
	sub_83220448(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83230eec
	if (!cr6.gt) goto loc_83230EEC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83230EEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83230f08
	if (cr6.eq) goto loc_83230F08;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_83230F08:
	// li r29,255
	ctx.r29.s64 = 255;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83230f4c
	if (cr6.lt) goto loc_83230F4C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83230F28;
	sub_83222578(ctx, base);
	// rlwimi r29,r3,8,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r3.u32, 8) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83230f4c
	if (cr6.lt) goto loc_83230F4C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e6c0
	ctx.lr = 0x83230F48;
	sub_8322E6C0(ctx, base);
	// stb r3,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r3.u8);
loc_83230F4C:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x83230f5c
	if (cr6.lt) goto loc_83230F5C;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_83230F5C:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x83230f68
	if (cr6.lt) goto loc_83230F68;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_83230F68:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x83231010
	if (cr6.lt) goto loc_83231010;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// sth r25,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r25.u16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r25,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r25.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832264e0
	ctx.lr = 0x83230F98;
	sub_832264E0(ctx, base);
	// lhz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83230fb4
	if (!cr6.eq) goto loc_83230FB4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x832277e8
	ctx.lr = 0x83230FAC;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_83230FB4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,523
	cr6.compare<uint32_t>(ctx.r11.u32, 523, xer);
	// beq cr6,0x83231010
	if (cr6.eq) goto loc_83231010;
	// cmplwi cr6,r11,543
	cr6.compare<uint32_t>(ctx.r11.u32, 543, xer);
	// bne cr6,0x83230fd4
	if (!cr6.eq) goto loc_83230FD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// b 0x83231010
	goto loc_83231010;
loc_83230FD4:
	// cmplwi cr6,r11,1168
	cr6.compare<uint32_t>(ctx.r11.u32, 1168, xer);
	// bne cr6,0x83230fe4
	if (!cr6.eq) goto loc_83230FE4;
	// stb r25,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// b 0x83231010
	goto loc_83231010;
loc_83230FE4:
	// cmplwi cr6,r11,544
	cr6.compare<uint32_t>(ctx.r11.u32, 544, xer);
	// bne cr6,0x83230ff8
	if (!cr6.eq) goto loc_83230FF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// b 0x83231010
	goto loc_83231010;
loc_83230FF8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,10552
	ctx.r5.s64 = ctx.r11.s64 + 10552;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d548
	ctx.lr = 0x83231010;
	sub_8320D548(ctx, base);
loc_83231010:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// blt cr6,0x83231080
	if (cr6.lt) goto loc_83231080;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// sth r25,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r25.u16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r25,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832264e0
	ctx.lr = 0x83231044;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83231060
	if (!cr6.eq) goto loc_83231060;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x83231058;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_83231060:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,523
	cr6.compare<uint32_t>(ctx.r11.u32, 523, xer);
	// beq cr6,0x83231080
	if (cr6.eq) goto loc_83231080;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,10540
	ctx.r4.s64 = ctx.r11.s64 + 10540;
	// bl 0x8322e618
	ctx.lr = 0x8323107C;
	sub_8322E618(ctx, base);
	// stb r3,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r3.u8);
loc_83231080:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x83231098
	if (cr6.lt) goto loc_83231098;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83220448
	ctx.lr = 0x83231094;
	sub_83220448(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_83231098:
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,2(r27)
	PPC_STORE_U16(ctx.r27.u32 + 2, ctx.r10.u16);
loc_832310A4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322eb08
	ctx.lr = 0x832310B4;
	sub_8322EB08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832310C0"))) PPC_WEAK_FUNC(sub_832310C0);
PPC_FUNC_IMPL(__imp__sub_832310C0) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x832310f0
	if (cr6.lt) goto loc_832310F0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// ble cr6,0x83231114
	if (!cr6.gt) goto loc_83231114;
loc_832310F0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83231114
	if (cr6.eq) goto loc_83231114;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83231108;
	sub_8320D088(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83231168
	if (cr6.lt) goto loc_83231168;
loc_83231114:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e720
	ctx.lr = 0x8323111C;
	sub_8322E720(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322e830
	ctx.lr = 0x83231124;
	sub_8322E830(ctx, base);
	// bl 0x8322e900
	ctx.lr = 0x83231128;
	sub_8322E900(ctx, base);
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83231150
	if (!cr6.eq) goto loc_83231150;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10564
	ctx.r4.s64 = ctx.r11.s64 + 10564;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// bl 0x832085e8
	ctx.lr = 0x8323114C;
	sub_832085E8(ctx, base);
	// b 0x83231168
	goto loc_83231168;
loc_83231150:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// bl 0x83230670
	ctx.lr = 0x83231168;
	sub_83230670(ctx, base);
loc_83231168:
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

__attribute__((alias("__imp__sub_83231184"))) PPC_WEAK_FUNC(sub_83231184);
PPC_FUNC_IMPL(__imp__sub_83231184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231188"))) PPC_WEAK_FUNC(sub_83231188);
PPC_FUNC_IMPL(__imp__sub_83231188) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832311b8
	if (cr6.eq) goto loc_832311B8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x832311B8;
	sub_8320D088(ctx, base);
loc_832311B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e720
	ctx.lr = 0x832311C0;
	sub_8322E720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8322ed50
	ctx.lr = 0x832311CC;
	sub_8322ED50(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322eb08
	ctx.lr = 0x832311DC;
	sub_8322EB08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83201670
	ctx.lr = 0x832311E4;
	sub_83201670(ctx, base);
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

__attribute__((alias("__imp__sub_83231200"))) PPC_WEAK_FUNC(sub_83231200);
PPC_FUNC_IMPL(__imp__sub_83231200) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83231234
	if (cr6.eq) goto loc_83231234;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83231234;
	sub_8320D088(ctx, base);
loc_83231234:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,7796
	ctx.r6.s64 = ctx.r11.s64 + 7796;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x8323124C;
	sub_83230708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e720
	ctx.lr = 0x83231254;
	sub_8322E720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322ed50
	ctx.lr = 0x83231260;
	sub_8322ED50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322ec88
	ctx.lr = 0x83231270;
	sub_8322EC88(ctx, base);
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

__attribute__((alias("__imp__sub_8323128C"))) PPC_WEAK_FUNC(sub_8323128C);
PPC_FUNC_IMPL(__imp__sub_8323128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231290"))) PPC_WEAK_FUNC(sub_83231290);
PPC_FUNC_IMPL(__imp__sub_83231290) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x832312c4
	if (cr6.eq) goto loc_832312C4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x832312C4;
	sub_8320D088(ctx, base);
loc_832312C4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,7804
	ctx.r6.s64 = ctx.r11.s64 + 7804;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x832312DC;
	sub_83230708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e720
	ctx.lr = 0x832312E4;
	sub_8322E720(ctx, base);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322f180
	ctx.lr = 0x832312F0;
	sub_8322F180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83201670
	ctx.lr = 0x832312F8;
	sub_83201670(ctx, base);
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

__attribute__((alias("__imp__sub_83231314"))) PPC_WEAK_FUNC(sub_83231314);
PPC_FUNC_IMPL(__imp__sub_83231314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231318"))) PPC_WEAK_FUNC(sub_83231318);
PPC_FUNC_IMPL(__imp__sub_83231318) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8323134c
	if (cr6.eq) goto loc_8323134C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x8323134C;
	sub_8320D088(ctx, base);
loc_8323134C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,7812
	ctx.r6.s64 = ctx.r11.s64 + 7812;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x83231364;
	sub_83230708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e720
	ctx.lr = 0x8323136C;
	sub_8322E720(ctx, base);
	// lfs f4,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322f2e0
	ctx.lr = 0x83231380;
	sub_8322F2E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83201670
	ctx.lr = 0x83231388;
	sub_83201670(ctx, base);
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

__attribute__((alias("__imp__sub_832313A4"))) PPC_WEAK_FUNC(sub_832313A4);
PPC_FUNC_IMPL(__imp__sub_832313A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832313A8"))) PPC_WEAK_FUNC(sub_832313A8);
PPC_FUNC_IMPL(__imp__sub_832313A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832313B0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce748
	ctx.lr = 0x832313B8;
	__savefpr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// fmr f23,f2
	ctx.f23.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// fmr f31,f4
	ctx.f31.f64 = ctx.f4.f64;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// fmr f29,f6
	ctx.f29.f64 = ctx.f6.f64;
	// bl 0x8322e720
	ctx.lr = 0x832313DC;
	sub_8322E720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322ed50
	ctx.lr = 0x832313E8;
	sub_8322ED50(ctx, base);
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x832313f8
	if (!cr6.lt) goto loc_832313F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832313F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83231410
	if (cr6.eq) goto loc_83231410;
	// fmr f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f30.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83231414
	goto loc_83231414;
loc_83231410:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83231414:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f30,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f24.f64 + ctx.f30.f64));
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// fcmpu cr6,f29,f31
	cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lfs f0,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f13,10700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10700);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10696);
	ctx.f12.f64 = double(temp.f32);
	// fadds f22,f11,f24
	ctx.f22.f64 = double(float(ctx.f11.f64 + ctx.f24.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fsubs f28,f30,f11
	ctx.f28.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fsubs f17,f22,f10
	ctx.f17.f64 = double(float(ctx.f22.f64 - ctx.f10.f64));
	// fsubs f16,f22,f9
	ctx.f16.f64 = double(float(ctx.f22.f64 - ctx.f9.f64));
	// fadds f19,f28,f9
	ctx.f19.f64 = double(float(ctx.f28.f64 + ctx.f9.f64));
	// fadds f18,f28,f10
	ctx.f18.f64 = double(float(ctx.f28.f64 + ctx.f10.f64));
	// bge cr6,0x83231464
	if (!cr6.lt) goto loc_83231464;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83231464:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323147c
	if (cr6.eq) goto loc_8323147C;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83231480
	goto loc_83231480;
loc_8323147C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83231480:
	// fmuls f0,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f31,f23,f31
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsubs f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fadds f27,f0,f23
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f23.f64));
	// fadds f25,f29,f13
	ctx.f25.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// fadds f26,f29,f12
	ctx.f26.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// fsubs f21,f27,f13
	ctx.f21.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// fsubs f20,f27,f12
	ctx.f20.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x8322ec88
	ctx.lr = 0x832314B8;
	sub_8322EC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f18
	ctx.f3.f64 = ctx.f18.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832314D0;
	sub_8322F2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832314E8;
	sub_8322F2E0(ctx, base);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83231504
	if (cr6.eq) goto loc_83231504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231504;
	sub_8322F180(ctx, base);
loc_83231504:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f17
	ctx.f3.f64 = ctx.f17.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x8323151C;
	sub_8322F2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231534;
	sub_8322F2E0(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83231550
	if (cr6.eq) goto loc_83231550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231550;
	sub_8322F180(ctx, base);
loc_83231550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f21
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f21.f64;
	// fmr f3,f17
	ctx.f3.f64 = ctx.f17.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231568;
	sub_8322F2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f23
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f23.f64;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231580;
	sub_8322F2E0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83231598
	if (cr6.eq) goto loc_83231598;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231598;
	sub_8322F180(ctx, base);
loc_83231598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f21
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f21.f64;
	// fmr f3,f18
	ctx.f3.f64 = ctx.f18.f64;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832315B0;
	sub_8322F2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832315C8;
	sub_8322F2E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832315e0
	if (cr6.eq) goto loc_832315E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8322f180
	ctx.lr = 0x832315E0;
	sub_8322F180(ctx, base);
loc_832315E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83201670
	ctx.lr = 0x832315E8;
	sub_83201670(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831ce794
	ctx.lr = 0x832315F8;
	__restfpr_16(ctx, base);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832315FC"))) PPC_WEAK_FUNC(sub_832315FC);
PPC_FUNC_IMPL(__imp__sub_832315FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231600"))) PPC_WEAK_FUNC(sub_83231600);
PPC_FUNC_IMPL(__imp__sub_83231600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83231608;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce740
	ctx.lr = 0x83231610;
	__savefpr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,444(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stfs f2,452(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// fmr f23,f1
	ctx.f23.f64 = ctx.f1.f64;
	// fmr f22,f2
	ctx.f22.f64 = ctx.f2.f64;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// fmr f30,f7
	ctx.f30.f64 = ctx.f7.f64;
	// fmr f29,f8
	ctx.f29.f64 = ctx.f8.f64;
	// bl 0x8322e720
	ctx.lr = 0x83231644;
	sub_8322E720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8322ed50
	ctx.lr = 0x83231650;
	sub_8322ED50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f13.f64 = double(temp.f32);
loc_8323165C:
	// fadds f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x83231674
	if (cr6.eq) goto loc_83231674;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83231674:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83231688
	if (cr6.eq) goto loc_83231688;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x832316bc
	goto loc_832316BC;
loc_83231688:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83231698
	if (cr6.gt) goto loc_83231698;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83231698:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832316b8
	if (cr6.eq) goto loc_832316B8;
	// fmuls f31,f27,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// b 0x832316bc
	goto loc_832316BC;
loc_832316B8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_832316BC:
	// fadds f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x832316d0
	if (cr6.eq) goto loc_832316D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832316D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832316e4
	if (cr6.eq) goto loc_832316E4;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x83231718
	goto loc_83231718;
loc_832316E4:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x832316f4
	if (cr6.gt) goto loc_832316F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832316F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83231714
	if (cr6.eq) goto loc_83231714;
	// fmuls f29,f26,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// b 0x83231718
	goto loc_83231718;
loc_83231714:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83231718:
	// fadds f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x8323172c
	if (cr6.eq) goto loc_8323172C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8323172C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83231740
	if (cr6.eq) goto loc_83231740;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83231774
	goto loc_83231774;
loc_83231740:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83231750
	if (cr6.gt) goto loc_83231750;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83231750:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83231770
	if (cr6.eq) goto loc_83231770;
	// fmuls f30,f27,f13
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x83231774
	goto loc_83231774;
loc_83231770:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83231774:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x83231788
	if (cr6.eq) goto loc_83231788;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83231788:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323179c
	if (cr6.eq) goto loc_8323179C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832317d0
	goto loc_832317D0;
loc_8323179C:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x832317ac
	if (cr6.gt) goto loc_832317AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832317AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832317cc
	if (cr6.eq) goto loc_832317CC;
	// fmuls f31,f26,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x832317d0
	goto loc_832317D0;
loc_832317CC:
	// li r31,1
	ctx.r31.s64 = 1;
loc_832317D0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832317e8
	if (cr6.eq) goto loc_832317E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x8323165c
	if (cr6.lt) goto loc_8323165C;
loc_832317E8:
	// fadds f25,f23,f27
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f23.f64 + ctx.f27.f64));
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// fadds f27,f22,f26
	ctx.f27.f64 = double(float(ctx.f22.f64 + ctx.f26.f64));
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// fadds f24,f23,f31
	ctx.f24.f64 = double(float(ctx.f23.f64 + ctx.f31.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fadds f26,f23,f30
	ctx.f26.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// fadds f23,f22,f31
	ctx.f23.f64 = double(float(ctx.f22.f64 + ctx.f31.f64));
	// lfs f0,10700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10700);
	ctx.f0.f64 = double(temp.f32);
	// fadds f22,f22,f28
	ctx.f22.f64 = double(float(ctx.f22.f64 + ctx.f28.f64));
	// lfs f13,10696(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10696);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f10,f30,f0
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f9,f30,f13
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// fmuls f8,f29,f13
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f7,f29,f0
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fsubs f31,f27,f29
	ctx.f31.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fsubs f17,f25,f29
	ctx.f17.f64 = double(float(ctx.f25.f64 - ctx.f29.f64));
	// fsubs f30,f27,f30
	ctx.f30.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// fmuls f6,f28,f13
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fsubs f29,f25,f28
	ctx.f29.f64 = double(float(ctx.f25.f64 - ctx.f28.f64));
	// fmuls f5,f28,f0
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fsubs f1,f23,f11
	ctx.f1.f64 = double(float(ctx.f23.f64 - ctx.f11.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f3,f24,f11
	ctx.f3.f64 = double(float(ctx.f24.f64 - ctx.f11.f64));
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f21,f26,f10
	ctx.f21.f64 = double(float(ctx.f26.f64 - ctx.f10.f64));
	// fsubs f2,f23,f12
	ctx.f2.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f24,f12
	ctx.f4.f64 = double(float(ctx.f24.f64 - ctx.f12.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f19,f25
	ctx.f19.f64 = ctx.f25.f64;
	// fadds f11,f10,f30
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f22,f6
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f6.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f10,f6,f29
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f13,f22,f5
	ctx.f13.f64 = double(float(ctx.f22.f64 - ctx.f5.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f9,f30
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f6,f5,f29
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f18,f27
	ctx.f18.f64 = ctx.f27.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fadds f28,f8,f17
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f17.f64));
	// fadds f16,f7,f17
	ctx.f16.f64 = double(float(ctx.f7.f64 + ctx.f17.f64));
	// fsubs f20,f26,f9
	ctx.f20.f64 = double(float(ctx.f26.f64 - ctx.f9.f64));
	// fadds f15,f8,f31
	ctx.f15.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// fadds f14,f7,f31
	ctx.f14.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8322ec88
	ctx.lr = 0x832318C0;
	sub_8322EC88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f4,f14
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f14.f64;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// fmr f2,f15
	ctx.f2.f64 = ctx.f15.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832318D8;
	sub_8322F2E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f17
	ctx.f3.f64 = ctx.f17.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832318F0;
	sub_8322F2E0(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8323190c
	if (cr6.eq) goto loc_8323190C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x8322f180
	ctx.lr = 0x8323190C;
	sub_8322F180(ctx, base);
loc_8323190C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231924;
	sub_8322F2E0(ctx, base);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lfs f30,444(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231940;
	sub_8322F2E0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8323195c
	if (cr6.eq) goto loc_8323195C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8322f180
	ctx.lr = 0x8323195C;
	sub_8322F180(ctx, base);
loc_8323195C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8322f2e0
	ctx.lr = 0x83231974;
	sub_8322F2E0(ctx, base);
	// lfs f30,452(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231990;
	sub_8322F2E0(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832319ac
	if (cr6.eq) goto loc_832319AC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8322f180
	ctx.lr = 0x832319AC;
	sub_8322F180(ctx, base);
loc_832319AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f4,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f1,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322f2e0
	ctx.lr = 0x832319C4;
	sub_8322F2E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f22
	ctx.f4.f64 = ctx.f22.f64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x832319DC;
	sub_8322F2E0(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832319f8
	if (cr6.eq) goto loc_832319F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x8322f180
	ctx.lr = 0x832319F8;
	sub_8322F180(ctx, base);
loc_832319F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83201670
	ctx.lr = 0x83231A00;
	sub_83201670(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce78c
	ctx.lr = 0x83231A10;
	__restfpr_14(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83231A14"))) PPC_WEAK_FUNC(sub_83231A14);
PPC_FUNC_IMPL(__imp__sub_83231A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231A18"))) PPC_WEAK_FUNC(sub_83231A18);
PPC_FUNC_IMPL(__imp__sub_83231A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83231A20;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r15,0
	ctx.r15.s64 = 0;
	// beq cr6,0x83231a54
	if (cr6.eq) goto loc_83231A54;
	// lwz r15,36(r4)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
loc_83231A54:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// li r18,0
	ctx.r18.s64 = 0;
	// beq cr6,0x83231a64
	if (cr6.eq) goto loc_83231A64;
	// lwz r18,36(r26)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
loc_83231A64:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(ctx.r15.s32, 0, xer);
	// ble cr6,0x83231d3c
	if (!cr6.gt) goto loc_83231D3C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// li r29,3
	ctx.r29.s64 = 3;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r27,4
	ctx.r27.s64 = 4;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r21,r11,10116
	ctx.r21.s64 = ctx.r11.s64 + 10116;
	// addi r20,r10,10748
	ctx.r20.s64 = ctx.r10.s64 + 10748;
	// addi r19,r9,10740
	ctx.r19.s64 = ctx.r9.s64 + 10740;
loc_83231A98:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83272c38
	ctx.lr = 0x83231AA4;
	sub_83272C38(ctx, base);
	// bl 0x83222578
	ctx.lr = 0x83231AA8;
	sub_83222578(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x83231cd8
	if (cr6.gt) goto loc_83231CD8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83231cf4
	if (cr6.eq) goto loc_83231CF4;
	// bdz 0x83231adc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83231ADC;
	// bdz 0x83231b48
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83231B48;
	// bdz 0x83231b9c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83231B9C;
	// bdz 0x83231c20
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83231C20;
	// b 0x83231c84
	goto loc_83231C84;
loc_83231ADC:
	// cmpw cr6,r31,r18
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, xer);
	// bgt cr6,0x83231b40
	if (cr6.gt) goto loc_83231B40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83272c38
	ctx.lr = 0x83231AF0;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231AF4;
	sub_83220448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231B04;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231B08;
	sub_83220448(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8322ed50
	ctx.lr = 0x83231B18;
	sub_8322ED50(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322ec88
	ctx.lr = 0x83231B28;
	sub_8322EC88(ctx, base);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x83231cf4
	goto loc_83231CF4;
loc_83231B40:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x83231cf4
	goto loc_83231CF4;
loc_83231B48:
	// cmpw cr6,r31,r18
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, xer);
	// bgt cr6,0x83231b40
	if (cr6.gt) goto loc_83231B40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83272c38
	ctx.lr = 0x83231B5C;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231B60;
	sub_83220448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231B70;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231B74;
	sub_83220448(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231B84;
	sub_8322F180(ctx, base);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x83231cf4
	goto loc_83231CF4;
loc_83231B9C:
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r18.s32, xer);
	// bgt cr6,0x83231b40
	if (cr6.gt) goto loc_83231B40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83272c38
	ctx.lr = 0x83231BB0;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231BB4;
	sub_83220448(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231BC4;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231BC8;
	sub_83220448(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231BD8;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231BDC;
	sub_83220448(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231BEC;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231BF0;
	sub_83220448(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322f2e0
	ctx.lr = 0x83231C08;
	sub_8322F2E0(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83231cf4
	goto loc_83231CF4;
loc_83231C20:
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r18.s32, xer);
	// bgt cr6,0x83231b40
	if (cr6.gt) goto loc_83231B40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83272c38
	ctx.lr = 0x83231C34;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231C38;
	sub_83220448(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231C48;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231C4C;
	sub_83220448(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8322ed50
	ctx.lr = 0x83231C5C;
	sub_8322ED50(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322ec88
	ctx.lr = 0x83231C6C;
	sub_8322EC88(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83231cf4
	goto loc_83231CF4;
loc_83231C84:
	// cmpw cr6,r27,r18
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r18.s32, xer);
	// bgt cr6,0x83231b40
	if (cr6.gt) goto loc_83231B40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83272c38
	ctx.lr = 0x83231C98;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231C9C;
	sub_83220448(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x83272c38
	ctx.lr = 0x83231CAC;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83231CB0;
	sub_83220448(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231CC0;
	sub_8322F180(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83231cf4
	goto loc_83231CF4;
loc_83231CD8:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x832085e8
	ctx.lr = 0x83231CF0;
	sub_832085E8(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
loc_83231CF4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83231d1c
	if (!cr6.eq) goto loc_83231D1C;
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83231d3c
	if (!cr6.eq) goto loc_83231D3C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r15
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r15.s32, xer);
	// blt cr6,0x83231a98
	if (cr6.lt) goto loc_83231A98;
	// b 0x83231d3c
	goto loc_83231D3C;
loc_83231D1C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r6,r11,10732
	ctx.r6.s64 = ctx.r11.s64 + 10732;
	// addi r4,r10,10712
	ctx.r4.s64 = ctx.r10.s64 + 10712;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x832085e8
	ctx.lr = 0x83231D3C;
	sub_832085E8(ctx, base);
loc_83231D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83231D54"))) PPC_WEAK_FUNC(sub_83231D54);
PPC_FUNC_IMPL(__imp__sub_83231D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231D58"))) PPC_WEAK_FUNC(sub_83231D58);
PPC_FUNC_IMPL(__imp__sub_83231D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83231D60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83231d8c
	if (cr6.eq) goto loc_83231D8C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83231d8c
	if (cr6.eq) goto loc_83231D8C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83231D8C;
	sub_8320D088(ctx, base);
loc_83231D8C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x83231e5c
	if (cr6.lt) goto loc_83231E5C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,30
	ctx.r4.s64 = 30;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x83231DC0;
	sub_83221378(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83231df4
	if (!cr6.eq) goto loc_83231DF4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,10792
	ctx.r5.s64 = ctx.r11.s64 + 10792;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x83231DE8;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83231DF4:
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83221378
	ctx.lr = 0x83231E04;
	sub_83221378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83231e38
	if (!cr6.eq) goto loc_83231E38;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r11,10732
	ctx.r5.s64 = ctx.r11.s64 + 10732;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x83231E2C;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83231E38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322e720
	ctx.lr = 0x83231E40;
	sub_8322E720(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r11,10772
	ctx.r6.s64 = ctx.r11.s64 + 10772;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83231a18
	ctx.lr = 0x83231E54;
	sub_83231A18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83201670
	ctx.lr = 0x83231E5C;
	sub_83201670(ctx, base);
loc_83231E5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83231E68"))) PPC_WEAK_FUNC(sub_83231E68);
PPC_FUNC_IMPL(__imp__sub_83231E68) {
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
	// bl 0x831ce778
	ctx.lr = 0x83231E80;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83231ea4
	if (cr6.eq) goto loc_83231EA4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83231EA4;
	sub_8320D088(ctx, base);
loc_83231EA4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,7856
	ctx.r6.s64 = ctx.r11.s64 + 7856;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x83231EBC;
	sub_83230708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e720
	ctx.lr = 0x83231EC4;
	sub_8322E720(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8322ed50
	ctx.lr = 0x83231ED0;
	sub_8322ED50(ctx, base);
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f28,f13,f30
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322ec88
	ctx.lr = 0x83231EF8;
	sub_8322EC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231F08;
	sub_8322F180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231F18;
	sub_8322F180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231F28;
	sub_8322F180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322f180
	ctx.lr = 0x83231F38;
	sub_8322F180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83201670
	ctx.lr = 0x83231F40;
	sub_83201670(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x83231F50;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_83231F64"))) PPC_WEAK_FUNC(sub_83231F64);
PPC_FUNC_IMPL(__imp__sub_83231F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231F68"))) PPC_WEAK_FUNC(sub_83231F68);
PPC_FUNC_IMPL(__imp__sub_83231F68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83231F70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8322e830
	ctx.lr = 0x83231F88;
	sub_8322E830(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83231fb0
	if (!cr6.eq) goto loc_83231FB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,24
	ctx.r3.s64 = 24;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// bl 0x83209aa8
	ctx.lr = 0x83231FA8;
	sub_83209AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x83231FB0;
	sub_8325D650(ctx, base);
loc_83231FB0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,-18(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -18);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge 0x83231fec
	if (!cr0.lt) goto loc_83231FEC;
	// lhz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8323201c
	if (cr0.lt) goto loc_8323201C;
loc_83231FEC:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x8323201c
	if (cr6.lt) goto loc_8323201C;
	// beq cr6,0x83232018
	if (cr6.eq) goto loc_83232018;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10968
	ctx.r4.s64 = ctx.r11.s64 + 10968;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// bl 0x83208568
	ctx.lr = 0x83232018;
	sub_83208568(ctx, base);
loc_83232018:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8323201C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323204c
	if (!cr6.eq) goto loc_8323204C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r6,r11,10960
	ctx.r6.s64 = ctx.r11.s64 + 10960;
	// addi r4,r10,10940
	ctx.r4.s64 = ctx.r10.s64 + 10940;
	// addi r3,r9,10116
	ctx.r3.s64 = ctx.r9.s64 + 10116;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x832085e8
	ctx.lr = 0x83232048;
	sub_832085E8(ctx, base);
	// li r28,-18
	ctx.r28.s64 = -18;
loc_8323204C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83232058"))) PPC_WEAK_FUNC(sub_83232058);
PPC_FUNC_IMPL(__imp__sub_83232058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83232060;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce76c
	ctx.lr = 0x83232068;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// bne cr6,0x832320d8
	if (!cr6.eq) goto loc_832320D8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r6,r11,11152
	ctx.r6.s64 = ctx.r11.s64 + 11152;
	// addi r4,r10,-32516
	ctx.r4.s64 = ctx.r10.s64 + -32516;
	// addi r3,r9,10116
	ctx.r3.s64 = ctx.r9.s64 + 10116;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bl 0x832085e8
	ctx.lr = 0x832320C4;
	sub_832085E8(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b8
	ctx.lr = 0x832320D4;
	__restfpr_25(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_832320D8:
	// lwz r17,36(r30)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r3,r17,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x832320E4;
	sub_83209AA8(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(ctx.r17.s32, 0, xer);
	// ble cr6,0x83232118
	if (!cr6.gt) goto loc_83232118;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_832320F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83272c38
	ctx.lr = 0x83232104;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x83232108;
	sub_83220448(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmpw cr6,r31,r17
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, xer);
	// blt cr6,0x832320f8
	if (cr6.lt) goto loc_832320F8;
loc_83232118:
	// srawi r10,r17,1
	xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 1;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r19,-18
	ctx.r19.s64 = -18;
	// subf. r7,r8,r17
	ctx.r7.s64 = ctx.r17.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r20,r11,10116
	ctx.r20.s64 = ctx.r11.s64 + 10116;
	// addi r25,r10,11152
	ctx.r25.s64 = ctx.r10.s64 + 11152;
	// beq 0x83232160
	if (cr0.eq) goto loc_83232160;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,11124
	ctx.r4.s64 = ctx.r11.s64 + 11124;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x8323215C;
	sub_832085E8(ctx, base);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_83232160:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832321b0
	if (cr6.eq) goto loc_832321B0;
	// lwz r27,36(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x83232174;
	sub_83209AA8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x832321ac
	if (!cr6.gt) goto loc_832321AC;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_8323218C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83272c38
	ctx.lr = 0x83232198;
	sub_83272C38(ctx, base);
	// bl 0x83222578
	ctx.lr = 0x8323219C;
	sub_83222578(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x8323218c
	if (cr6.lt) goto loc_8323218C;
loc_832321AC:
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_832321B0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83232248
	if (cr6.eq) goto loc_83232248;
	// lwz r30,36(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209aa8
	ctx.lr = 0x832321C4;
	sub_83209AA8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832321f8
	if (!cr6.gt) goto loc_832321F8;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_832321D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83272c38
	ctx.lr = 0x832321E4;
	sub_83272C38(ctx, base);
	// bl 0x83220448
	ctx.lr = 0x832321E8;
	sub_83220448(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x832321d8
	if (cr6.lt) goto loc_832321D8;
loc_832321F8:
	// cmpw cr6,r30,r17
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r17.s32, xer);
	// beq cr6,0x8323222c
	if (cr6.eq) goto loc_8323222C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r8,r11,10960
	ctx.r8.s64 = ctx.r11.s64 + 10960;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r10,11076
	ctx.r4.s64 = ctx.r10.s64 + 11076;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x83232228;
	sub_832085E8(ctx, base);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
loc_8323222C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83231f68
	ctx.lr = 0x83232238;
	sub_83231F68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83232248
	if (!cr6.eq) goto loc_83232248;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_83232248:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x832322a4
	if (!cr6.eq) goto loc_832322A4;
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// srawi r10,r17,1
	xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r17.s32 >> 1;
	// ori r9,r11,43691
	ctx.r9.u64 = ctx.r11.u64 | 43691;
	// addze r16,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r16.s64 = temp.s64;
	// mulhw r11,r17,r9
	ctx.r11.s64 = (int64_t(ctx.r17.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r17
	ctx.r6.s64 = ctx.r17.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x832322f4
	if (cr0.eq) goto loc_832322F4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,11048
	ctx.r4.s64 = ctx.r11.s64 + 11048;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x8323229C;
	sub_832085E8(ctx, base);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// b 0x83232638
	goto loc_83232638;
loc_832322A4:
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// mulhw r11,r27,r10
	ctx.r11.s64 = (int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x832322f4
	if (cr0.eq) goto loc_832322F4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r6,r11,10932
	ctx.r6.s64 = ctx.r11.s64 + 10932;
	// addi r4,r10,11020
	ctx.r4.s64 = ctx.r10.s64 + 11020;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x832322EC;
	sub_832085E8(ctx, base);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// b 0x83232638
	goto loc_83232638;
loc_832322F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83232638
	if (!cr6.eq) goto loc_83232638;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322ed50
	ctx.lr = 0x8323230C;
	sub_8322ED50(ctx, base);
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// ble cr6,0x83232630
	if (!cr6.gt) goto loc_83232630;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r19,r21,8
	ctx.r19.s64 = ctx.r21.s64 + 8;
	// li r27,2
	ctx.r27.s64 = 2;
	// lfs f25,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f25.f64 = double(temp.f32);
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r26,r11,10908
	ctx.r26.s64 = ctx.r11.s64 + 10908;
	// addi r25,r10,10932
	ctx.r25.s64 = ctx.r10.s64 + 10932;
loc_83232338:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83232354
	if (!cr6.eq) goto loc_83232354;
	// addi r31,r27,-2
	ctx.r31.s64 = ctx.r27.s64 + -2;
	// addi r30,r27,-1
	ctx.r30.s64 = ctx.r27.s64 + -1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x83232420
	goto loc_83232420;
loc_83232354:
	// lwz r31,-8(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + -8);
	// lwz r30,-4(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + -4);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,0(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// blt cr6,0x83232390
	if (cr6.lt) goto loc_83232390;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r27,-2
	ctx.r7.s64 = ctx.r27.s64 + -2;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x83232388;
	sub_832085E8(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x83232394
	goto loc_83232394;
loc_83232390:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83232394:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83232618
	if (!cr6.eq) goto loc_83232618;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// blt cr6,0x832323d0
	if (cr6.lt) goto loc_832323D0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r27,-1
	ctx.r7.s64 = ctx.r27.s64 + -1;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x832323C8;
	sub_832085E8(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x832323d4
	goto loc_832323D4;
loc_832323D0:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_832323D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83232618
	if (!cr6.eq) goto loc_83232618;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r17
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, xer);
	// blt cr6,0x83232410
	if (cr6.lt) goto loc_83232410;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x832085e8
	ctx.lr = 0x83232408;
	sub_832085E8(ctx, base);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// b 0x83232414
	goto loc_83232414;
loc_83232410:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_83232414:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83232618
	if (!cr6.eq) goto loc_83232618;
loc_83232420:
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r22
	ctx.r10.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r9,r29,r22
	ctx.r9.u64 = ctx.r29.u64 + ctx.r22.u64;
	// add r8,r28,r22
	ctx.r8.u64 = ctx.r28.u64 + ctx.r22.u64;
	// lfsx f31,r31,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	ctx.f31.f64 = double(temp.f32);
	// clrlwi r11,r14,16
	ctx.r11.u64 = ctx.r14.u32 & 0xFFFF;
	// lfsx f29,r29,r22
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	ctx.f29.f64 = double(temp.f32);
	// lfsx f28,r28,r22
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,562
	cr6.compare<uint32_t>(ctx.r11.u32, 562, xer);
	// lfs f27,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x83232484
	if (!cr6.eq) goto loc_83232484;
	// fsubs f0,f27,f30
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// fsubs f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f12,f26,f30
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// fsubs f11,f29,f31
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f9,f12,f11,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f25
	cr6.compare(ctx.f9.f64, ctx.f25.f64);
	// ble cr6,0x832324b4
	if (!cr6.gt) goto loc_832324B4;
	// b 0x832324b0
	goto loc_832324B0;
loc_83232484:
	// cmplwi cr6,r11,563
	cr6.compare<uint32_t>(ctx.r11.u32, 563, xer);
	// bne cr6,0x832324c0
	if (!cr6.eq) goto loc_832324C0;
	// fsubs f0,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// fsubs f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f12,f26,f30
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// fsubs f11,f29,f31
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f9,f12,f11,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f9,f25
	cr6.compare(ctx.f9.f64, ctx.f25.f64);
	// bge cr6,0x832324b4
	if (!cr6.lt) goto loc_832324B4;
loc_832324B0:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_832324B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83232618
	if (!cr6.eq) goto loc_83232618;
loc_832324C0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322ec88
	ctx.lr = 0x832324D0;
	sub_8322EC88(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8322f180
	ctx.lr = 0x832324E0;
	sub_8322F180(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8322f180
	ctx.lr = 0x832324F0;
	sub_8322F180(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8322f180
	ctx.lr = 0x83232500;
	sub_8322F180(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322e830
	ctx.lr = 0x83232508;
	sub_8322E830(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8323252c
	if (!cr6.eq) goto loc_8323252C;
	// sth r21,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r21.u16);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83209aa8
	ctx.lr = 0x83232524;
	sub_83209AA8(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x8323252C;
	sub_8325D650(ctx, base);
loc_8323252C:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,-24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r8,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// bl 0x8322ed50
	ctx.lr = 0x83232560;
	sub_8322ED50(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83232618
	if (cr6.eq) goto loc_83232618;
	// add r30,r31,r23
	ctx.r30.u64 = ctx.r31.u64 + ctx.r23.u64;
	// lfsx f1,r31,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8322ec88
	ctx.lr = 0x8323257C;
	sub_8322EC88(ctx, base);
	// add r11,r29,r23
	ctx.r11.u64 = ctx.r29.u64 + ctx.r23.u64;
	// lfsx f1,r29,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8322f180
	ctx.lr = 0x83232590;
	sub_8322F180(ctx, base);
	// add r11,r28,r23
	ctx.r11.u64 = ctx.r28.u64 + ctx.r23.u64;
	// lfsx f1,r28,r23
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8322f180
	ctx.lr = 0x832325A4;
	sub_8322F180(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r31,r23
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322f180
	ctx.lr = 0x832325B4;
	sub_8322F180(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322e830
	ctx.lr = 0x832325BC;
	sub_8322E830(ctx, base);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832325e0
	if (!cr6.eq) goto loc_832325E0;
	// sth r21,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r21.u16);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83209aa8
	ctx.lr = 0x832325D8;
	sub_83209AA8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bl 0x8325d650
	ctx.lr = 0x832325E0;
	sub_8325D650(ctx, base);
loc_832325E0:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,-24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// sth r15,-14(r11)
	PPC_STORE_U16(ctx.r11.u32 + -14, ctx.r15.u16);
	// ori r8,r9,24
	ctx.r8.u64 = ctx.r9.u64 | 24;
	// stw r8,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// bl 0x8322ed50
	ctx.lr = 0x83232618;
	sub_8322ED50(ctx, base);
loc_83232618:
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r19,r19,12
	ctx.r19.s64 = ctx.r19.s64 + 12;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// cmpw cr6,r11,r16
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, xer);
	// blt cr6,0x83232338
	if (cr6.lt) goto loc_83232338;
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83232630:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8322e970
	ctx.lr = 0x83232638;
	sub_8322E970(ctx, base);
loc_83232638:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83232648
	if (cr6.eq) goto loc_83232648;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83209d68
	ctx.lr = 0x83232648;
	sub_83209D68(ctx, base);
loc_83232648:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83232658
	if (cr6.eq) goto loc_83232658;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83209d68
	ctx.lr = 0x83232658;
	sub_83209D68(ctx, base);
loc_83232658:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83232668
	if (cr6.eq) goto loc_83232668;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83209d68
	ctx.lr = 0x83232668;
	sub_83209D68(ctx, base);
loc_83232668:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7b8
	ctx.lr = 0x83232678;
	__restfpr_25(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323267C"))) PPC_WEAK_FUNC(sub_8323267C);
PPC_FUNC_IMPL(__imp__sub_8323267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232680"))) PPC_WEAK_FUNC(sub_83232680);
PPC_FUNC_IMPL(__imp__sub_83232680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83232688;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// blt cr6,0x832326c4
	if (cr6.lt) goto loc_832326C4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x832326d4
	if (!cr6.gt) goto loc_832326D4;
loc_832326C4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x832326D4;
	sub_8320D088(ctx, base);
loc_832326D4:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bge cr6,0x832326ec
	if (!cr6.lt) goto loc_832326EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832326EC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,30
	ctx.r4.s64 = 30;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x83232714;
	sub_83221378(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83232748
	if (!cr6.eq) goto loc_83232748;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,11152
	ctx.r5.s64 = ctx.r11.s64 + 11152;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x8323273C;
	sub_8320D428(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83232748:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r29,12288
	ctx.r29.s64 = 12288;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x832327e0
	if (cr6.lt) goto loc_832327E0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-163
	ctx.r7.s64 = ctx.r11.s64 + -163;
	// srw r6,r29,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832327e0
	if (!cr6.eq) goto loc_832327E0;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x832327AC;
	sub_83221378(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832327e0
	if (!cr6.eq) goto loc_832327E0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,10932
	ctx.r5.s64 = ctx.r11.s64 + 10932;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x832327D4;
	sub_8320D428(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832327E0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x83232874
	if (cr6.lt) goto loc_83232874;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-163
	ctx.r7.s64 = ctx.r11.s64 + -163;
	// srw r6,r29,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83232874
	if (!cr6.eq) goto loc_83232874;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x83232840;
	sub_83221378(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83232874
	if (!cr6.eq) goto loc_83232874;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,10960
	ctx.r5.s64 = ctx.r11.s64 + 10960;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x83232868;
	sub_8320D428(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83232874:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x832328f0
	if (cr6.lt) goto loc_832328F0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832264e0
	ctx.lr = 0x83232898;
	sub_832264E0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832328b4
	if (!cr6.eq) goto loc_832328B4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832277e8
	ctx.lr = 0x832328AC;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
loc_832328B4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,543
	cr6.compare<uint32_t>(ctx.r11.u32, 543, xer);
	// beq cr6,0x832328f0
	if (cr6.eq) goto loc_832328F0;
	// cmplwi cr6,r11,562
	cr6.compare<uint32_t>(ctx.r11.u32, 562, xer);
	// beq cr6,0x832328f0
	if (cr6.eq) goto loc_832328F0;
	// cmplwi cr6,r11,563
	cr6.compare<uint32_t>(ctx.r11.u32, 563, xer);
	// beq cr6,0x832328f0
	if (cr6.eq) goto loc_832328F0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,11188
	ctx.r5.s64 = ctx.r11.s64 + 11188;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d548
	ctx.lr = 0x832328E8;
	sub_8320D548(ctx, base);
	// li r10,543
	ctx.r10.s64 = 543;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
loc_832328F0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8322e720
	ctx.lr = 0x832328F8;
	sub_8322E720(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r8,r11,11164
	ctx.r8.s64 = ctx.r11.s64 + 11164;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83232058
	ctx.lr = 0x83232914;
	sub_83232058(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323291C"))) PPC_WEAK_FUNC(sub_8323291C);
PPC_FUNC_IMPL(__imp__sub_8323291C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232920"))) PPC_WEAK_FUNC(sub_83232920);
PPC_FUNC_IMPL(__imp__sub_83232920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83232928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8323294c
	if (cr6.eq) goto loc_8323294C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x8323294C;
	sub_8320D088(ctx, base);
loc_8323294C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832329f0
	if (cr6.lt) goto loc_832329F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322e7d0
	ctx.lr = 0x83232960;
	sub_8322E7D0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,134
	ctx.r4.s64 = 134;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83221378
	ctx.lr = 0x8323298C;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832329bc
	if (!cr6.eq) goto loc_832329BC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,11196
	ctx.r5.s64 = ctx.r11.s64 + 11196;
	// li r6,134
	ctx.r6.s64 = 134;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x832329B0;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832329BC:
	// bl 0x8325d0f8
	ctx.lr = 0x832329C0;
	sub_8325D0F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832329f0
	if (cr6.eq) goto loc_832329F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322e720
	ctx.lr = 0x832329D4;
	sub_8322E720(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x832329f0
	if (cr6.eq) goto loc_832329F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8320cde0
	ctx.lr = 0x832329E8;
	sub_8320CDE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322f400
	ctx.lr = 0x832329F0;
	sub_8322F400(ctx, base);
loc_832329F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832329FC"))) PPC_WEAK_FUNC(sub_832329FC);
PPC_FUNC_IMPL(__imp__sub_832329FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232A00"))) PPC_WEAK_FUNC(sub_83232A00);
PPC_FUNC_IMPL(__imp__sub_83232A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x83232a50
	if (!cr6.lt) goto loc_83232A50;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83232a54
	if (cr6.gt) goto loc_83232A54;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r11.u8);
	// blr 
	return;
loc_83232A50:
	// li r11,255
	ctx.r11.s64 = 255;
loc_83232A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83232A60"))) PPC_WEAK_FUNC(sub_83232A60);
PPC_FUNC_IMPL(__imp__sub_83232A60) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x83209aa8
	ctx.lr = 0x83232A94;
	sub_83209AA8(ctx, base);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lfs f13,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83232ad4
	if (cr6.eq) goto loc_83232AD4;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83268b68
	ctx.lr = 0x83232AD4;
	sub_83268B68(ctx, base);
loc_83232AD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83232b94
	if (cr6.eq) goto loc_83232B94;
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// bl 0x83261d70
	ctx.lr = 0x83232AE8;
	sub_83261D70(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83232b70
	if (cr6.eq) goto loc_83232B70;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// lhz r9,30(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lhz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r7,34(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lhz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// srawi r4,r5,1
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addze r9,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// bl 0x831fc428
	ctx.lr = 0x83232B6C;
	sub_831FC428(ctx, base);
	// b 0x83232b94
	goto loc_83232B94;
loc_83232B70:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,11212
	ctx.r4.s64 = ctx.r10.s64 + 11212;
	// addi r3,r9,10116
	ctx.r3.s64 = ctx.r9.s64 + 10116;
	// bl 0x832085e8
	ctx.lr = 0x83232B8C;
	sub_832085E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d518
	ctx.lr = 0x83232B94;
	sub_8325D518(ctx, base);
loc_83232B94:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x831fc978
	ctx.lr = 0x83232BA0;
	sub_831FC978(ctx, base);
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

__attribute__((alias("__imp__sub_83232BBC"))) PPC_WEAK_FUNC(sub_83232BBC);
PPC_FUNC_IMPL(__imp__sub_83232BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232BC0"))) PPC_WEAK_FUNC(sub_83232BC0);
PPC_FUNC_IMPL(__imp__sub_83232BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83232BC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// li r23,12288
	ctx.r23.s64 = 12288;
	// lhz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-163
	ctx.r7.s64 = ctx.r11.s64 + -163;
	// srw r6,r23,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r26,r4,16
	ctx.r26.s64 = ctx.r4.s64 + 16;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83232c3c
	if (cr6.eq) goto loc_83232C3C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_83232C24:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8322eb08
	ctx.lr = 0x83232C30;
	sub_8322EB08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83232C3C:
	// lhz r11,14(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 14);
	// addi r29,r25,12
	ctx.r29.s64 = ctx.r25.s64 + 12;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r4,r10,28
	ctx.r4.s64 = ctx.r10.s64 * 28;
	// bl 0x83209df8
	ctx.lr = 0x83232C58;
	sub_83209DF8(ctx, base);
	// stw r3,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r3.u32);
	// lhz r9,14(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 14);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d448
	ctx.lr = 0x83232C78;
	sub_8325D448(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83232c9c
	if (!cr6.gt) goto loc_83232C9C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83232C9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83232cb8
	if (cr6.eq) goto loc_83232CB8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f0,132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_83232CB8:
	// li r24,255
	ctx.r24.s64 = 255;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// addi r27,r11,11340
	ctx.r27.s64 = ctx.r11.s64 + 11340;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8322e618
	ctx.lr = 0x83232CE8;
	sub_8322E618(ctx, base);
	// stb r3,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r7.u16);
	// lhz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srw r3,r23,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83232de8
	if (cr6.eq) goto loc_83232DE8;
	// lhz r11,18(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 18);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,143
	cr6.compare<uint32_t>(ctx.r11.u32, 143, xer);
	// beq cr6,0x83232dc4
	if (cr6.eq) goto loc_83232DC4;
	// cmplwi cr6,r11,144
	cr6.compare<uint32_t>(ctx.r11.u32, 144, xer);
	// beq cr6,0x83232d7c
	if (cr6.eq) goto loc_83232D7C;
	// cmplwi cr6,r11,145
	cr6.compare<uint32_t>(ctx.r11.u32, 145, xer);
	// beq cr6,0x83232d68
	if (cr6.eq) goto loc_83232D68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83225c80
	ctx.lr = 0x83232D40;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r11,10116
	ctx.r8.s64 = ctx.r11.s64 + 10116;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r10,11332
	ctx.r6.s64 = ctx.r10.s64 + 11332;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r9,11308
	ctx.r4.s64 = ctx.r9.s64 + 11308;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83208568
	ctx.lr = 0x83232D68;
	sub_83208568(ctx, base);
loc_83232D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x83232a00
	ctx.lr = 0x83232D74;
	sub_83232A00(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// b 0x83232c24
	goto loc_83232C24;
loc_83232D7C:
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r30,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stb r9,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r9.u8);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x8322fa70
	ctx.lr = 0x83232DC0;
	sub_8322FA70(ctx, base);
	// b 0x83232dd0
	goto loc_83232DD0;
loc_83232DC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x83232a60
	ctx.lr = 0x83232DD0;
	sub_83232A60(ctx, base);
loc_83232DD0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83232de0
	if (cr6.eq) goto loc_83232DE0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
loc_83232DE0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// b 0x83232c24
	goto loc_83232C24;
loc_83232DE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83225c80
	ctx.lr = 0x83232DF0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r11,10116
	ctx.r8.s64 = ctx.r11.s64 + 10116;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r10,11332
	ctx.r6.s64 = ctx.r10.s64 + 11332;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r9,11308
	ctx.r4.s64 = ctx.r9.s64 + 11308;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83208568
	ctx.lr = 0x83232E18;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83232E18"))) PPC_WEAK_FUNC(sub_83232E18);
PPC_FUNC_IMPL(__imp__sub_83232E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83232E20;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r16,r11,10528
	ctx.r16.s64 = ctx.r11.s64 + 10528;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83232e4c
	if (cr6.eq) goto loc_83232E4C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8320d088
	ctx.lr = 0x83232E4C;
	sub_8320D088(ctx, base);
loc_83232E4C:
	// lwz r10,28(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83233180
	if (cr6.lt) goto loc_83233180;
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// li r4,30
	ctx.r4.s64 = 30;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221378
	ctx.lr = 0x83232E80;
	sub_83221378(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83232eb8
	if (!cr6.eq) goto loc_83232EB8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r20.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r5,r11,11408
	ctx.r5.s64 = ctx.r11.s64 + 11408;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r3,134
	ctx.r3.s64 = 134;
	// bl 0x8320d428
	ctx.lr = 0x83232EA8;
	sub_8320D428(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83232EB8:
	// lwz r18,36(r17)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x83233180
	if (!cr6.gt) goto loc_83233180;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8322e720
	ctx.lr = 0x83232ECC;
	sub_8322E720(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble cr6,0x83233178
	if (!cr6.gt) goto loc_83233178;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lfs f31,21588(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21588);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// li r19,12288
	ctx.r19.s64 = 12288;
	// addi r21,r11,11284
	ctx.r21.s64 = ctx.r11.s64 + 11284;
	// addi r24,r10,11232
	ctx.r24.s64 = ctx.r10.s64 + 11232;
	// addi r23,r9,10732
	ctx.r23.s64 = ctx.r9.s64 + 10732;
	// addi r27,r8,11268
	ctx.r27.s64 = ctx.r8.s64 + 11268;
	// addi r26,r7,11248
	ctx.r26.s64 = ctx.r7.s64 + 11248;
	// addi r25,r6,10792
	ctx.r25.s64 = ctx.r6.s64 + 10792;
	// addi r28,r5,10116
	ctx.r28.s64 = ctx.r5.s64 + 10116;
loc_83232F24:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83272c38
	ctx.lr = 0x83232F30;
	sub_83272C38(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srw r8,r19,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832331c8
	if (cr6.eq) goto loc_832331C8;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r10,r10,-143
	ctx.r10.s64 = ctx.r10.s64 + -143;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x83233190
	if (cr6.gt) goto loc_83233190;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83232ff4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83232FF4;
	// bdzf 4*cr6+eq,0x832330bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832330BC;
	// bdzf 4*cr6+eq,0x83232fd4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83232FD4;
	// bdzf 4*cr6+eq,0x83233050
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83233050;
	// bdzf 4*cr6+eq,0x8323314c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8323314C;
	// bne cr6,0x8323313c
	if (!cr6.eq) goto loc_8323313C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x83230b20
	ctx.lr = 0x83232F94;
	sub_83230B20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83232a60
	ctx.lr = 0x83232FA4;
	sub_83232A60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83232fb8
	if (cr6.eq) goto loc_83232FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d448
	ctx.lr = 0x83232FB4;
	sub_8325D448(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_83232FB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e970
	ctx.lr = 0x83232FC0;
	sub_8322E970(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8322eb08
	ctx.lr = 0x83232FD0;
	sub_8322EB08(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_83232FD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322ed50
	ctx.lr = 0x83232FE0;
	sub_8322ED50(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322eb08
	ctx.lr = 0x83232FF0;
	sub_8322EB08(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_83232FF4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x83230b20
	ctx.lr = 0x8323300C;
	sub_83230B20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322fa70
	ctx.lr = 0x83233020;
	sub_8322FA70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83233034
	if (cr6.eq) goto loc_83233034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8325d448
	ctx.lr = 0x83233030;
	sub_8325D448(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_83233034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e970
	ctx.lr = 0x8323303C;
	sub_8322E970(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8322eb08
	ctx.lr = 0x8323304C;
	sub_8322EB08(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_83233050:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8323307c
	if (!cr6.eq) goto loc_8323307C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83233078;
	sub_832085E8(ctx, base);
	// li r11,-18
	ctx.r11.s64 = -18;
loc_8323307C:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832330a0
	if (!cr6.eq) goto loc_832330A0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x8323309C;
	sub_832085E8(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_832330A0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8323316c
	if (!cr6.eq) goto loc_8323316C;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231a18
	ctx.lr = 0x832330B8;
	sub_83231A18(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_832330BC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x83230b20
	ctx.lr = 0x832330D4;
	sub_83230B20(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,255
	ctx.r11.s64 = 255;
	// rlwimi r11,r9,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x83233118
	if (!cr6.lt) goto loc_83233118;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r7.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// b 0x8323311c
	goto loc_8323311C;
loc_83233118:
	// li r11,255
	ctx.r11.s64 = 255;
loc_8323311C:
	// stb r11,19(r10)
	PPC_STORE_U8(ctx.r10.u32 + 19, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e970
	ctx.lr = 0x83233128;
	sub_8322E970(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8322eb08
	ctx.lr = 0x83233138;
	sub_8322EB08(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_8323313C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83232bc0
	ctx.lr = 0x83233148;
	sub_83232BC0(ctx, base);
	// b 0x8323316c
	goto loc_8323316C;
loc_8323314C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83232058
	ctx.lr = 0x8323316C;
	sub_83232058(ctx, base);
loc_8323316C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r18
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r18.s32, xer);
	// blt cr6,0x83232f24
	if (cr6.lt) goto loc_83232F24;
loc_83233178:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83201670
	ctx.lr = 0x83233180;
	sub_83201670(ctx, base);
loc_83233180:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83233190:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83225c80
	ctx.lr = 0x83233198;
	sub_83225C80(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r6,r9,11388
	ctx.r6.s64 = ctx.r9.s64 + 11388;
	// addi r4,r8,11356
	ctx.r4.s64 = ctx.r8.s64 + 11356;
	// addi r7,r11,11408
	ctx.r7.s64 = ctx.r11.s64 + 11408;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83208568
	ctx.lr = 0x832331C8;
	sub_83208568(ctx, base);
loc_832331C8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83225c80
	ctx.lr = 0x832331D0;
	sub_83225C80(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r6,r9,11388
	ctx.r6.s64 = ctx.r9.s64 + 11388;
	// addi r4,r8,11356
	ctx.r4.s64 = ctx.r8.s64 + 11356;
	// addi r7,r11,11408
	ctx.r7.s64 = ctx.r11.s64 + 11408;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83208568
	ctx.lr = 0x83233200;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_83233200"))) PPC_WEAK_FUNC(sub_83233200);
PPC_FUNC_IMPL(__imp__sub_83233200) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1121
	cr6.compare<uint32_t>(ctx.r11.u32, 1121, xer);
	// bgt cr6,0x83233300
	if (cr6.gt) goto loc_83233300;
	// beq cr6,0x832332f0
	if (cr6.eq) goto loc_832332F0;
	// addi r11,r11,-1106
	ctx.r11.s64 = ctx.r11.s64 + -1106;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8323356c
	if (cr6.gt) goto loc_8323356C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832332a0
	if (cr6.eq) goto loc_832332A0;
	// bdz 0x832332b0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832332B0;
	// bdz 0x83233270
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83233270;
	// bdz 0x83233280
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83233280;
	// bdz 0x83233290
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83233290;
	// bdz 0x832332c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832332C0;
	// bdz 0x832332d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832332D0;
	// bdz 0x832332e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832332E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230a90
	ctx.lr = 0x8323326C;
	sub_83230A90(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233270:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230ba0
	ctx.lr = 0x8323327C;
	sub_83230BA0(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233280:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230d70
	ctx.lr = 0x8323328C;
	sub_83230D70(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233290:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231188
	ctx.lr = 0x8323329C;
	sub_83231188(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832332A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230e20
	ctx.lr = 0x832332AC;
	sub_83230E20(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832332B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832310c0
	ctx.lr = 0x832332BC;
	sub_832310C0(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832332C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231200
	ctx.lr = 0x832332CC;
	sub_83231200(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832332D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231290
	ctx.lr = 0x832332DC;
	sub_83231290(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832332E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231318
	ctx.lr = 0x832332EC;
	sub_83231318(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832332F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230c78
	ctx.lr = 0x832332FC;
	sub_83230C78(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233300:
	// cmplwi cr6,r11,2353
	cr6.compare<uint32_t>(ctx.r11.u32, 2353, xer);
	// bgt cr6,0x832334b4
	if (cr6.gt) goto loc_832334B4;
	// beq cr6,0x832334a4
	if (cr6.eq) goto loc_832334A4;
	// cmplwi cr6,r11,2350
	cr6.compare<uint32_t>(ctx.r11.u32, 2350, xer);
	// bgt cr6,0x83233474
	if (cr6.gt) goto loc_83233474;
	// beq cr6,0x8323341c
	if (cr6.eq) goto loc_8323341C;
	// cmplwi cr6,r11,1136
	cr6.compare<uint32_t>(ctx.r11.u32, 1136, xer);
	// beq cr6,0x83233394
	if (cr6.eq) goto loc_83233394;
	// cmplwi cr6,r11,2349
	cr6.compare<uint32_t>(ctx.r11.u32, 2349, xer);
	// bne cr6,0x8323356c
	if (!cr6.eq) goto loc_8323356C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83233344
	if (cr6.eq) goto loc_83233344;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83233344;
	sub_8320D088(ctx, base);
loc_83233344:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,7828
	ctx.r6.s64 = ctx.r11.s64 + 7828;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x8323335C;
	sub_83230708(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,-10804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x832313a8
	ctx.lr = 0x83233390;
	sub_832313A8(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233394:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832333a8
	if (cr6.lt) goto loc_832333A8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x832333b8
	if (!cr6.gt) goto loc_832333B8;
loc_832333A8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x832333B8;
	sub_8320D088(ctx, base);
loc_832333B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832335d0
	if (cr6.lt) goto loc_832335D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e720
	ctx.lr = 0x832333CC;
	sub_8322E720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8322e830
	ctx.lr = 0x832333D4;
	sub_8322E830(ctx, base);
	// bl 0x8322e900
	ctx.lr = 0x832333D8;
	sub_8322E900(ctx, base);
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83233400
	if (!cr6.eq) goto loc_83233400;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,10612
	ctx.r4.s64 = ctx.r11.s64 + 10612;
	// addi r3,r10,10116
	ctx.r3.s64 = ctx.r10.s64 + 10116;
	// bl 0x832085e8
	ctx.lr = 0x832333FC;
	sub_832085E8(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233400:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// bl 0x832307d8
	ctx.lr = 0x83233418;
	sub_832307D8(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_8323341C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83233438
	if (cr6.eq) goto loc_83233438;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83233438;
	sub_8320D088(ctx, base);
loc_83233438:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,7840
	ctx.r6.s64 = ctx.r11.s64 + 7840;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x83233450;
	sub_83230708(ctx, base);
	// lfs f6,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// bl 0x832313a8
	ctx.lr = 0x83233470;
	sub_832313A8(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233474:
	// cmplwi cr6,r11,2351
	cr6.compare<uint32_t>(ctx.r11.u32, 2351, xer);
	// beq cr6,0x83233494
	if (cr6.eq) goto loc_83233494;
	// cmplwi cr6,r11,2352
	cr6.compare<uint32_t>(ctx.r11.u32, 2352, xer);
	// bne cr6,0x8323356c
	if (!cr6.eq) goto loc_8323356C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231d58
	ctx.lr = 0x83233490;
	sub_83231D58(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233494:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232e18
	ctx.lr = 0x832334A0;
	sub_83232E18(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832334A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231e68
	ctx.lr = 0x832334B0;
	sub_83231E68(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832334B4:
	// cmplwi cr6,r11,2356
	cr6.compare<uint32_t>(ctx.r11.u32, 2356, xer);
	// bgt cr6,0x83233564
	if (cr6.gt) goto loc_83233564;
	// beq cr6,0x83233554
	if (cr6.eq) goto loc_83233554;
	// cmplwi cr6,r11,2354
	cr6.compare<uint32_t>(ctx.r11.u32, 2354, xer);
	// beq cr6,0x832334e0
	if (cr6.eq) goto loc_832334E0;
	// cmplwi cr6,r11,2355
	cr6.compare<uint32_t>(ctx.r11.u32, 2355, xer);
	// bne cr6,0x8323356c
	if (!cr6.eq) goto loc_8323356C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232680
	ctx.lr = 0x832334DC;
	sub_83232680(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_832334E0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x832334f4
	if (cr6.lt) goto loc_832334F4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// ble cr6,0x83233504
	if (!cr6.gt) goto loc_83233504;
loc_832334F4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83233504;
	sub_8320D088(ctx, base);
loc_83233504:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,7872
	ctx.r6.s64 = ctx.r11.s64 + 7872;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x8323351C;
	sub_83230708(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f5,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bge cr6,0x83233534
	if (!cr6.lt) goto loc_83233534;
	// fmr f6,f5
	ctx.f6.f64 = ctx.f5.f64;
	// b 0x83233538
	goto loc_83233538;
loc_83233534:
	// lfs f6,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
loc_83233538:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x832313a8
	ctx.lr = 0x83233550;
	sub_832313A8(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233554:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83232920
	ctx.lr = 0x83233560;
	sub_83232920(ctx, base);
	// b 0x832335d0
	goto loc_832335D0;
loc_83233564:
	// cmplwi cr6,r11,2388
	cr6.compare<uint32_t>(ctx.r11.u32, 2388, xer);
	// beq cr6,0x83233574
	if (cr6.eq) goto loc_83233574;
loc_8323356C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x832335d4
	goto loc_832335D4;
loc_83233574:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83233590
	if (cr6.eq) goto loc_83233590;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,10528
	ctx.r3.s64 = ctx.r11.s64 + 10528;
	// bl 0x8320d088
	ctx.lr = 0x83233590;
	sub_8320D088(ctx, base);
loc_83233590:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,7896
	ctx.r6.s64 = ctx.r11.s64 + 7896;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230708
	ctx.lr = 0x832335A8;
	sub_83230708(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f8,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83231600
	ctx.lr = 0x832335D0;
	sub_83231600(ctx, base);
loc_832335D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832335D4:
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

__attribute__((alias("__imp__sub_832335EC"))) PPC_WEAK_FUNC(sub_832335EC);
PPC_FUNC_IMPL(__imp__sub_832335EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832335F0"))) PPC_WEAK_FUNC(sub_832335F0);
PPC_FUNC_IMPL(__imp__sub_832335F0) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83233634
	if (cr6.eq) goto loc_83233634;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// li r3,-6
	ctx.r3.s64 = -6;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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
loc_83233634:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83222030
	ctx.lr = 0x8323363C;
	sub_83222030(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8323364C;
	sub_83294018(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1168
	ctx.r10.s64 = 1168;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,152(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83233688"))) PPC_WEAK_FUNC(sub_83233688);
PPC_FUNC_IMPL(__imp__sub_83233688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83233690;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832336ac
	if (cr6.lt) goto loc_832336AC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x832336b4
	if (!cr6.gt) goto loc_832336B4;
loc_832336AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320e738
	ctx.lr = 0x832336B4;
	sub_8320E738(ctx, base);
loc_832336B4:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x83209aa8
	ctx.lr = 0x832336BC;
	sub_83209AA8(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832336CC;
	sub_83294018(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,1168
	ctx.r10.s64 = 1168;
	// addi r9,r11,5696
	ctx.r9.s64 = ctx.r11.s64 + 5696;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// lfs f0,152(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8323371c
	if (cr6.eq) goto loc_8323371C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8323371C;
	sub_83222030(ctx, base);
loc_8323371C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// li r10,149
	ctx.r10.s64 = 149;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8323376c
	if (cr6.lt) goto loc_8323376C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x8323376c
	if (cr6.eq) goto loc_8323376C;
	// bl 0x83220448
	ctx.lr = 0x83233768;
	sub_83220448(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8323376C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83233774"))) PPC_WEAK_FUNC(sub_83233774);
PPC_FUNC_IMPL(__imp__sub_83233774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

