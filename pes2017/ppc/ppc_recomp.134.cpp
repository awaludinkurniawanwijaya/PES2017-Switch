#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B64B24"))) PPC_WEAK_FUNC(sub_82B64B24);
PPC_FUNC_IMPL(__imp__sub_82B64B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64B28"))) PPC_WEAK_FUNC(sub_82B64B28);
PPC_FUNC_IMPL(__imp__sub_82B64B28) {
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
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x82B64B4C;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// blt cr6,0x82b64b70
	if (cr6.lt) goto loc_82B64B70;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82B64B70;
	sub_8257FB60(ctx, base);
loc_82B64B70:
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

__attribute__((alias("__imp__sub_82B64B84"))) PPC_WEAK_FUNC(sub_82B64B84);
PPC_FUNC_IMPL(__imp__sub_82B64B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64B88"))) PPC_WEAK_FUNC(sub_82B64B88);
PPC_FUNC_IMPL(__imp__sub_82B64B88) {
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
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq cr6,0x82b64be4
	if (cr6.eq) goto loc_82B64BE4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B64BC0;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b64be4
	if (cr6.lt) goto loc_82B64BE4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82B64BE4;
	sub_8257FB60(ctx, base);
loc_82B64BE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82B64C00"))) PPC_WEAK_FUNC(sub_82B64C00);
PPC_FUNC_IMPL(__imp__sub_82B64C00) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,25536
	ctx.r10.s64 = ctx.r11.s64 + 25536;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831cf100
	ctx.lr = 0x82B64C30;
	sub_831CF100(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b64c48
	if (cr6.eq) goto loc_82B64C48;
	// bl 0x82416268
	ctx.lr = 0x82B64C44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B64C48:
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

__attribute__((alias("__imp__sub_82B64C60"))) PPC_WEAK_FUNC(sub_82B64C60);
PPC_FUNC_IMPL(__imp__sub_82B64C60) {
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
	// bl 0x830ff290
	ctx.lr = 0x82B64C74;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x830ff290
	ctx.lr = 0x82B64C7C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B64C80;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82b64ca4
	if (cr6.eq) goto loc_82B64CA4;
	// cmplwi cr6,r31,54
	cr6.compare<uint32_t>(ctx.r31.u32, 54, xer);
	// beq cr6,0x82b64ca4
	if (cr6.eq) goto loc_82B64CA4;
	// cmplwi cr6,r31,55
	cr6.compare<uint32_t>(ctx.r31.u32, 55, xer);
	// beq cr6,0x82b64ca4
	if (cr6.eq) goto loc_82B64CA4;
	// cmplwi cr6,r31,56
	cr6.compare<uint32_t>(ctx.r31.u32, 56, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82b64ca8
	if (!cr6.eq) goto loc_82B64CA8;
loc_82B64CA4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B64CA8:
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

__attribute__((alias("__imp__sub_82B64CBC"))) PPC_WEAK_FUNC(sub_82B64CBC);
PPC_FUNC_IMPL(__imp__sub_82B64CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64CC0"))) PPC_WEAK_FUNC(sub_82B64CC0);
PPC_FUNC_IMPL(__imp__sub_82B64CC0) {
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
	// bl 0x830ff290
	ctx.lr = 0x82B64CD4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B64CD8;
	sub_830FFAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B64CE0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B64CE4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b64cf8
	if (cr6.eq) goto loc_82B64CF8;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b64cfc
	if (!cr6.eq) goto loc_82B64CFC;
loc_82B64CF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B64CFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b64d14
	if (!cr6.eq) goto loc_82B64D14;
	// cmplwi cr6,r31,26
	cr6.compare<uint32_t>(ctx.r31.u32, 26, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82b64d18
	if (!cr6.eq) goto loc_82B64D18;
loc_82B64D14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B64D18:
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

__attribute__((alias("__imp__sub_82B64D2C"))) PPC_WEAK_FUNC(sub_82B64D2C);
PPC_FUNC_IMPL(__imp__sub_82B64D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64D30"))) PPC_WEAK_FUNC(sub_82B64D30);
PPC_FUNC_IMPL(__imp__sub_82B64D30) {
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
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b64db8
	if (!cr6.eq) goto loc_82B64DB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,201(r3)
	PPC_STORE_U8(ctx.r3.u32 + 201, ctx.r11.u8);
	// bl 0x82c38170
	ctx.lr = 0x82B64D60;
	sub_82C38170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B64D68;
	sub_82D19A68(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,7528(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7528);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B64D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64D94;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64DA4;
	sub_82D19788(ctx, base);
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
loc_82B64DB8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19858
	ctx.lr = 0x82B64DC0;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82B64DD4"))) PPC_WEAK_FUNC(sub_82B64DD4);
PPC_FUNC_IMPL(__imp__sub_82B64DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64DD8"))) PPC_WEAK_FUNC(sub_82B64DD8);
PPC_FUNC_IMPL(__imp__sub_82B64DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B64DE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B64DF0;
	sub_82D17DA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B64DF8;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B64E08;
	sub_82D46928(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B64E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B64E2C;
	sub_82D199D0(ctx, base);
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r10,202(r30)
	PPC_STORE_U8(ctx.r30.u32 + 202, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B64E3C"))) PPC_WEAK_FUNC(sub_82B64E3C);
PPC_FUNC_IMPL(__imp__sub_82B64E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64E40"))) PPC_WEAK_FUNC(sub_82B64E40);
PPC_FUNC_IMPL(__imp__sub_82B64E40) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-8
	xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82b64e9c
	if (cr0.eq) goto loc_82B64E9C;
	// cmplwi cr6,r11,12281
	cr6.compare<uint32_t>(ctx.r11.u32, 12281, xer);
	// bne cr6,0x82b64f18
	if (!cr6.eq) goto loc_82B64F18;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b64f18
	if (cr6.eq) goto loc_82B64F18;
	// bl 0x82c3a610
	ctx.lr = 0x82B64E88;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b64f18
	if (!cr6.eq) goto loc_82B64F18;
	// bl 0x82c3a540
	ctx.lr = 0x82B64E98;
	sub_82C3A540(ctx, base);
	// b 0x82b64f18
	goto loc_82B64F18;
loc_82B64E9C:
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b64ef4
	if (!cr6.eq) goto loc_82B64EF4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64EB8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64EC8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64ED8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B64EE8;
	sub_82D19788(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// b 0x82b64f18
	goto loc_82B64F18;
loc_82B64EF4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b64f18
	if (cr6.eq) goto loc_82B64F18;
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b64f18
	if (!cr6.eq) goto loc_82B64F18;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
loc_82B64F18:
	// lbz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
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

__attribute__((alias("__imp__sub_82B64F34"))) PPC_WEAK_FUNC(sub_82B64F34);
PPC_FUNC_IMPL(__imp__sub_82B64F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64F38"))) PPC_WEAK_FUNC(sub_82B64F38);
PPC_FUNC_IMPL(__imp__sub_82B64F38) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// ble cr6,0x82b64f6c
	if (!cr6.gt) goto loc_82B64F6C;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r11,7648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7648);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82b64f98
	goto loc_82B64F98;
loc_82B64F6C:
	// bl 0x831156e8
	ctx.lr = 0x82B64F70;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,5
	ctx.r4.s64 = ctx.r10.s64 + 327680;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// bl 0x831239e0
	ctx.lr = 0x82B64F8C;
	sub_831239E0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82B64F98:
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

__attribute__((alias("__imp__sub_82B64FB4"))) PPC_WEAK_FUNC(sub_82B64FB4);
PPC_FUNC_IMPL(__imp__sub_82B64FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B64FB8"))) PPC_WEAK_FUNC(sub_82B64FB8);
PPC_FUNC_IMPL(__imp__sub_82B64FB8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B64FD0;
	sub_831156E8(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r10,255
	ctx.r10.s64 = 255;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addis r11,r9,6
	ctx.r11.s64 = ctx.r9.s64 + 393216;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// beq cr6,0x82b64ffc
	if (cr6.eq) goto loc_82B64FFC;
	// lbz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// stb r9,169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 169, ctx.r9.u8);
	// b 0x82b65000
	goto loc_82B65000;
loc_82B64FFC:
	// stb r10,169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 169, ctx.r10.u8);
loc_82B65000:
	// lwz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b65014
	if (cr6.eq) goto loc_82B65014;
	// lbz r10,337(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 337);
loc_82B65014:
	// stb r10,170(r11)
	PPC_STORE_U8(ctx.r11.u32 + 170, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82B6502C"))) PPC_WEAK_FUNC(sub_82B6502C);
PPC_FUNC_IMPL(__imp__sub_82B6502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B65030"))) PPC_WEAK_FUNC(sub_82B65030);
PPC_FUNC_IMPL(__imp__sub_82B65030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B65038;
	__savegprlr_25(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65070
	if (cr6.eq) goto loc_82B65070;
	// bl 0x82b64c60
	ctx.lr = 0x82B6504C;
	sub_82B64C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6518c
	if (!cr6.eq) goto loc_82B6518C;
	// bl 0x82d8a698
	ctx.lr = 0x82B6505C;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65080
	if (cr6.eq) goto loc_82B65080;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B65070:
	// bl 0x82b64cc0
	ctx.lr = 0x82B65074;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6518c
	if (cr6.eq) goto loc_82B6518C;
loc_82B65080:
	// bl 0x831156e8
	ctx.lr = 0x82B65084;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B6508C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r25,r11,5
	ctx.r25.s64 = ctx.r11.s64 + 327680;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r25,r25,14904
	ctx.r25.s64 = ctx.r25.s64 + 14904;
	// addi r28,r11,7600
	ctx.r28.s64 = ctx.r11.s64 + 7600;
loc_82B650A4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831239e0
	ctx.lr = 0x82B650B4;
	sub_831239E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8311c148
	ctx.lr = 0x82B650C0;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82B650D0;
	sub_831CE980(ctx, base);
	// lwz r11,904(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r30,r11,16,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7F;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b65180
	if (cr6.eq) goto loc_82B65180;
	// addi r29,r1,344
	ctx.r29.s64 = ctx.r1.s64 + 344;
loc_82B650E8:
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bge cr6,0x82b65100
	if (!cr6.lt) goto loc_82B65100;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
loc_82B65100:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6511c
	if (!cr6.eq) goto loc_82B6511C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b65148
	goto loc_82B65148;
loc_82B6511C:
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82b65140
	if (!cr6.eq) goto loc_82B65140;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b65144
	if (cr6.eq) goto loc_82B65144;
loc_82B65140:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B65144:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B65148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b65170
	if (!cr6.eq) goto loc_82B65170;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311bd68
	ctx.lr = 0x82B6515C;
	sub_8311BD68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b65170
	if (cr6.eq) goto loc_82B65170;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,95
	ctx.r4.s64 = 95;
	// bl 0x83121088
	ctx.lr = 0x82B65170;
	sub_83121088(ctx, base);
loc_82B65170:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b650e8
	if (cr6.lt) goto loc_82B650E8;
loc_82B65180:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// blt cr6,0x82b650a4
	if (cr6.lt) goto loc_82B650A4;
loc_82B6518C:
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B65194"))) PPC_WEAK_FUNC(sub_82B65194);
PPC_FUNC_IMPL(__imp__sub_82B65194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B65198"))) PPC_WEAK_FUNC(sub_82B65198);
PPC_FUNC_IMPL(__imp__sub_82B65198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B651A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b651c0
	if (!cr6.eq) goto loc_82B651C0;
	// lbz r10,205(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82b65264
	if (cr6.eq) goto loc_82B65264;
loc_82B651C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b651d8
	if (!cr6.eq) goto loc_82B651D8;
	// bl 0x82b64cc0
	ctx.lr = 0x82B651CC;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65264
	if (cr6.eq) goto loc_82B65264;
loc_82B651D8:
	// bl 0x831156e8
	ctx.lr = 0x82B651DC;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B651E0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// addi r30,r27,318
	ctx.r30.s64 = ctx.r27.s64 + 318;
	// addi r28,r28,14904
	ctx.r28.s64 = ctx.r28.s64 + 14904;
loc_82B651F4:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82b6520c
	if (cr6.eq) goto loc_82B6520C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B6520C:
	// bl 0x831239a8
	ctx.lr = 0x82B65210;
	sub_831239A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b6522c
	if (cr6.eq) goto loc_82B6522C;
	// li r29,1
	ctx.r29.s64 = 1;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
loc_82B6522C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65258
	if (cr6.eq) goto loc_82B65258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x82B65248;
	sub_831239E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r5,343(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 343);
	// lbzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x83151b08
	ctx.lr = 0x82B65258;
	sub_83151B08(ctx, base);
loc_82B65258:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82b651f4
	if (cr6.lt) goto loc_82B651F4;
loc_82B65264:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6526C"))) PPC_WEAK_FUNC(sub_82B6526C);
PPC_FUNC_IMPL(__imp__sub_82B6526C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B65270"))) PPC_WEAK_FUNC(sub_82B65270);
PPC_FUNC_IMPL(__imp__sub_82B65270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b65284
	if (!cr6.eq) goto loc_82B65284;
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfe r3,r11,r4
	temp.u8 = (~ctx.r11.u32 + ctx.r4.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82B65284:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b65294
	if (!cr6.eq) goto loc_82B65294;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82B65294:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B652A4"))) PPC_WEAK_FUNC(sub_82B652A4);
PPC_FUNC_IMPL(__imp__sub_82B652A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B652A8"))) PPC_WEAK_FUNC(sub_82B652A8);
PPC_FUNC_IMPL(__imp__sub_82B652A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,205(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b652c0
	if (!cr6.eq) goto loc_82B652C0;
loc_82B652B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B652C0:
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b652b8
	if (cr6.eq) goto loc_82B652B8;
	// lbz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 292);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b652ec
	if (!cr6.eq) goto loc_82B652EC;
	// lwz r10,620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b652b8
	if (cr6.eq) goto loc_82B652B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,292(r11)
	PPC_STORE_U8(ctx.r11.u32 + 292, ctx.r10.u8);
loc_82B652EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B652F4"))) PPC_WEAK_FUNC(sub_82B652F4);
PPC_FUNC_IMPL(__imp__sub_82B652F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B652F8"))) PPC_WEAK_FUNC(sub_82B652F8);
PPC_FUNC_IMPL(__imp__sub_82B652F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B65300;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65458
	if (cr6.eq) goto loc_82B65458;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d199d0
	ctx.lr = 0x82B6531C;
	sub_82D199D0(ctx, base);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r30.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r11,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// beq cr6,0x82b65400
	if (cr6.eq) goto loc_82B65400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831030c0
	ctx.lr = 0x82B65340;
	sub_831030C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65400
	if (cr6.eq) goto loc_82B65400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38118
	ctx.lr = 0x82B65354;
	sub_82C38118(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x82b6536c
	if (!cr6.eq) goto loc_82B6536C;
	// bl 0x8399f8b8
	ctx.lr = 0x82B65360;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6536c
	if (cr6.eq) goto loc_82B6536C;
	// bl 0x839a0648
	ctx.lr = 0x82B6536C;
	sub_839A0648(ctx, base);
loc_82B6536C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38118
	ctx.lr = 0x82B65374;
	sub_82C38118(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x82b6538c
	if (cr6.eq) goto loc_82B6538C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38118
	ctx.lr = 0x82B65384;
	sub_82C38118(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x82b653bc
	if (!cr6.eq) goto loc_82B653BC;
loc_82B6538C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// addi r29,r11,21716
	ctx.r29.s64 = ctx.r11.s64 + 21716;
	// ori r9,r10,20480
	ctx.r9.u64 = ctx.r10.u64 | 20480;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831036c0
	ctx.lr = 0x82B653B8;
	sub_831036C0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_82B653BC:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B653D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B653DC;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b653f0
	if (cr6.eq) goto loc_82B653F0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B653F0;
	sub_82D2AEC8(ctx, base);
loc_82B653F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38178
	ctx.lr = 0x82B65400;
	sub_82C38178(ctx, base);
loc_82B65400:
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b6542c
	if (cr6.eq) goto loc_82B6542C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831030c0
	ctx.lr = 0x82B65414;
	sub_831030C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65428
	if (cr6.eq) goto loc_82B65428;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82d29e18
	ctx.lr = 0x82B65428;
	sub_82D29E18(ctx, base);
loc_82B65428:
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
loc_82B6542C:
	// lwz r4,280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b65458
	if (cr6.eq) goto loc_82B65458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831030c0
	ctx.lr = 0x82B65440;
	sub_831030C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65454
	if (cr6.eq) goto loc_82B65454;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d29e18
	ctx.lr = 0x82B65454;
	sub_82D29E18(ctx, base);
loc_82B65454:
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_82B65458:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B65460"))) PPC_WEAK_FUNC(sub_82B65460);
PPC_FUNC_IMPL(__imp__sub_82B65460) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,25292
	ctx.r3.s64 = ctx.r11.s64 + 25292;
	// bl 0x83523fd8
	ctx.lr = 0x82B65484;
	sub_83523FD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b654bc
	if (!cr6.eq) goto loc_82B654BC;
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// lwz r11,9264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9264);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// bne cr6,0x82b654bc
	if (!cr6.eq) goto loc_82B654BC;
	// bl 0x82c37ff8
	ctx.lr = 0x82B654A8;
	sub_82C37FF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82B654BC;
	sub_83103100(ctx, base);
loc_82B654BC:
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

__attribute__((alias("__imp__sub_82B654D0"))) PPC_WEAK_FUNC(sub_82B654D0);
PPC_FUNC_IMPL(__imp__sub_82B654D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B654D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B654E4;
	sub_82D19A78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b655a8
	if (cr6.eq) goto loc_82B655A8;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6550c
	if (cr6.eq) goto loc_82B6550C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B6550C:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6551c
	if (cr6.eq) goto loc_82B6551C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B6551C:
	// bl 0x82d95fe0
	ctx.lr = 0x82B65520;
	sub_82D95FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b65534
	if (!cr6.eq) goto loc_82B65534;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B65534:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// addi r28,r11,7464
	ctx.r28.s64 = ctx.r11.s64 + 7464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7464);
	// bl 0x82d2e228
	ctx.lr = 0x82B6554C;
	sub_82D2E228(ctx, base);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B6555C;
	sub_82D2E228(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r9,8004
	ctx.r31.s64 = ctx.r9.s64 + 8004;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r7,72(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r8,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B65588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B655A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B655A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B655B0"))) PPC_WEAK_FUNC(sub_82B655B0);
PPC_FUNC_IMPL(__imp__sub_82B655B0) {
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
	// cmplwi cr6,r4,11
	cr6.compare<uint32_t>(ctx.r4.u32, 11, xer);
	// bne cr6,0x82b65608
	if (!cr6.eq) goto loc_82B65608;
	// bl 0x82b64cc0
	ctx.lr = 0x82B655D0;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b65608
	if (!cr6.eq) goto loc_82B65608;
	// bl 0x8314ee28
	ctx.lr = 0x82B655E0;
	sub_8314EE28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82b655f0
	if (cr6.eq) goto loc_82B655F0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b65608
	if (!cr6.eq) goto loc_82B65608;
loc_82B655F0:
	// li r3,31
	ctx.r3.s64 = 31;
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
loc_82B65608:
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

__attribute__((alias("__imp__sub_82B65620"))) PPC_WEAK_FUNC(sub_82B65620);
PPC_FUNC_IMPL(__imp__sub_82B65620) {
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
	// bl 0x831c4008
	ctx.lr = 0x82B65634;
	sub_831C4008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65680
	if (cr6.eq) goto loc_82B65680;
	// bl 0x830ff290
	ctx.lr = 0x82B65644;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82B65648;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65680
	if (cr6.eq) goto loc_82B65680;
	// bl 0x831156e8
	ctx.lr = 0x82B65658;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r31,r9,222
	ctx.r31.s64 = ctx.r9.s64 + 14548992;
	// addi r31,r31,-12208
	ctx.r31.s64 = ctx.r31.s64 + -12208;
	// bl 0x83151438
	ctx.lr = 0x82B65670;
	sub_83151438(ctx, base);
	// stw r3,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83151438
	ctx.lr = 0x82B6567C;
	sub_83151438(ctx, base);
	// stw r3,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r3.u32);
loc_82B65680:
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

__attribute__((alias("__imp__sub_82B65694"))) PPC_WEAK_FUNC(sub_82B65694);
PPC_FUNC_IMPL(__imp__sub_82B65694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B65698"))) PPC_WEAK_FUNC(sub_82B65698);
PPC_FUNC_IMPL(__imp__sub_82B65698) {
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
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// lis r9,238
	ctx.r9.s64 = 15597568;
	// ori r8,r11,7644
	ctx.r8.u64 = ctx.r11.u64 | 7644;
	// ori r7,r10,12256
	ctx.r7.u64 = ctx.r10.u64 | 12256;
	// ori r6,r9,12257
	ctx.r6.u64 = ctx.r9.u64 | 12257;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r31,r3,238
	ctx.r31.s64 = ctx.r3.s64 + 15597568;
	// li r30,32
	ctx.r30.s64 = 32;
	// stbx r11,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u8);
	// addi r31,r31,7648
	ctx.r31.s64 = ctx.r31.s64 + 7648;
	// stbx r11,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r11,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u8);
loc_82B656E0:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-2308
	ctx.r3.s64 = ctx.r31.s64 + -2308;
	// bl 0x831cdcf0
	ctx.lr = 0x82B656F0;
	sub_831CDCF0(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82B65700;
	sub_831CDCF0(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2304
	ctx.r3.s64 = ctx.r31.s64 + 2304;
	// bl 0x831cdcf0
	ctx.lr = 0x82B65710;
	sub_831CDCF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x82b656e0
	if (!cr0.eq) goto loc_82B656E0;
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

__attribute__((alias("__imp__sub_82B65734"))) PPC_WEAK_FUNC(sub_82B65734);
PPC_FUNC_IMPL(__imp__sub_82B65734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B65738"))) PPC_WEAK_FUNC(sub_82B65738);
PPC_FUNC_IMPL(__imp__sub_82B65738) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82B65758;
	sub_82DA8D18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6576C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r11.u8);
	// bl 0x82da8e68
	ctx.lr = 0x82B65784;
	sub_82DA8E68(ctx, base);
	// lbz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
	// lbz r8,49(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r8,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82B657B0"))) PPC_WEAK_FUNC(sub_82B657B0);
PPC_FUNC_IMPL(__imp__sub_82B657B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B657B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82B657C0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,0
	ctx.r29.s64 = 0;
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// addi r30,r30,-28082
	ctx.r30.s64 = ctx.r30.s64 + -28082;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6584c
	if (cr6.eq) goto loc_82B6584C;
	// bl 0x82aacdd8
	ctx.lr = 0x82B657E4;
	sub_82AACDD8(ctx, base);
	// bl 0x837cb078
	ctx.lr = 0x82B657E8;
	sub_837CB078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65804
	if (cr6.eq) goto loc_82B65804;
	// bl 0x82aacdd8
	ctx.lr = 0x82B657F8;
	sub_82AACDD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837cb100
	ctx.lr = 0x82B65800;
	sub_837CB100(ctx, base);
	// b 0x82b6584c
	goto loc_82B6584C;
loc_82B65804:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8379f080
	ctx.lr = 0x82B6580C;
	sub_8379F080(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r31,-8888(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8888);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b6584c
	if (cr6.eq) goto loc_82B6584C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82B6582C;
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
	ctx.lr = 0x82B65844;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82B6584C;
	sub_82595170(ctx, base);
loc_82B6584C:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f0ad0
	ctx.lr = 0x82B65860;
	sub_830F0AD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6586C"))) PPC_WEAK_FUNC(sub_82B6586C);
PPC_FUNC_IMPL(__imp__sub_82B6586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B65870"))) PPC_WEAK_FUNC(sub_82B65870);
PPC_FUNC_IMPL(__imp__sub_82B65870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B65878;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r26,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r26.u32);
	// beq cr6,0x82b658fc
	if (cr6.eq) goto loc_82B658FC;
	// stw r26,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r26.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B6589C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82b65b14
	if (!cr6.eq) goto loc_82B65B14;
	// bl 0x831156e8
	ctx.lr = 0x82B658AC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,255
	ctx.r29.s64 = 255;
	// addis r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 393216;
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// stb r29,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r29.u8);
	// lbz r11,169(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 169);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// lbz r10,170(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 170);
	// beq cr6,0x82b658e8
	if (cr6.eq) goto loc_82B658E8;
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stb r11,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r11.u8);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// b 0x82b65b14
	goto loc_82B65B14;
loc_82B658E8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82b65b14
	if (cr6.eq) goto loc_82B65B14;
	// stb r10,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r10.u8);
	// b 0x82b65b08
	goto loc_82B65B08;
loc_82B658FC:
	// bl 0x831156e8
	ctx.lr = 0x82B65900;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,255
	ctx.r29.s64 = 255;
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
	// addi r30,r30,-30316
	ctx.r30.s64 = ctx.r30.s64 + -30316;
	// stb r29,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r29.u8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
loc_82B6592C:
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b65950
	if (!cr6.eq) goto loc_82B65950;
	// lbz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82b6596c
	if (!cr6.eq) goto loc_82B6596C;
	// stb r11,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r11.u8);
	// b 0x82b6596c
	goto loc_82B6596C;
loc_82B65950:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b6596c
	if (!cr6.eq) goto loc_82B6596C;
	// lbz r10,337(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 337);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82b6596c
	if (!cr6.eq) goto loc_82B6596C;
	// stb r11,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r11.u8);
loc_82B6596C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82b6592c
	if (cr6.lt) goto loc_82B6592C;
	// bl 0x830ff290
	ctx.lr = 0x82B65988;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6598C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b659a0
	if (cr6.eq) goto loc_82B659A0;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82b659a4
	if (!cr6.eq) goto loc_82B659A4;
loc_82B659A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B659A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b65a2c
	if (!cr6.eq) goto loc_82B65A2C;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// bne cr6,0x82b659c8
	if (!cr6.eq) goto loc_82B659C8;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// b 0x82b659cc
	goto loc_82B659CC;
loc_82B659C8:
	// stb r29,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r29.u8);
loc_82B659CC:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bne cr6,0x82b659e4
	if (!cr6.eq) goto loc_82B659E4;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// b 0x82b659e8
	goto loc_82B659E8;
loc_82B659E4:
	// stb r29,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r29.u8);
loc_82B659E8:
	// lbz r10,169(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 169);
	// lbz r11,170(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82b65a14
	if (cr6.eq) goto loc_82B65A14;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b65a14
	if (cr6.eq) goto loc_82B65A14;
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
loc_82B65A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82b65b14
	if (cr6.eq) goto loc_82B65B14;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// b 0x82b65b00
	goto loc_82B65B00;
loc_82B65A2C:
	// stw r26,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r26.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B65A34;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B65A38;
	sub_830FFAA8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B65A3C;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B65A44;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r30,r10,14904
	ctx.r30.u64 = ctx.r10.u64 | 14904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B65A64;
	sub_831239E0(ctx, base);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831156e8
	ctx.lr = 0x82B65A6C;
	sub_831156E8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B65A84;
	sub_831239E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82B65A98;
	sub_8311C148(ctx, base);
	// lwz r5,788(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r4,r5,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x82b65ad0
	if (cr6.eq) goto loc_82B65AD0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B65AB4;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b65ad0
	if (cr6.eq) goto loc_82B65AD0;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
loc_82B65AD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B65ADC;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82b65b14
	if (cr6.eq) goto loc_82B65B14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c148
	ctx.lr = 0x82B65AF8;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
loc_82B65B00:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b65b14
	if (cr6.eq) goto loc_82B65B14;
loc_82B65B08:
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
loc_82B65B14:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65b50
	if (cr6.eq) goto loc_82B65B50;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B65B30;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,39
	ctx.r5.u64 = ctx.r5.u64 | 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B65B50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B65B50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B65B58"))) PPC_WEAK_FUNC(sub_82B65B58);
PPC_FUNC_IMPL(__imp__sub_82B65B58) {
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
	// lbz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b65b84
	if (!cr6.eq) goto loc_82B65B84;
	// bl 0x82b65460
	ctx.lr = 0x82B65B7C;
	sub_82B65460(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
loc_82B65B84:
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

__attribute__((alias("__imp__sub_82B65B98"))) PPC_WEAK_FUNC(sub_82B65B98);
PPC_FUNC_IMPL(__imp__sub_82B65B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B65BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c38118
	ctx.lr = 0x82B65BAC;
	sub_82C38118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B65BB8;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x82b65f88
	if (cr6.gt) goto loc_82B65F88;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x82b65ed0
	if (cr6.eq) goto loc_82B65ED0;
	// bdz 0x82b65f10
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B65F10;
	// bdz 0x82b65be0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B65BE0;
	// bdz 0x82b65e90
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B65E90;
	// b 0x82b65f50
	goto loc_82B65F50;
loc_82B65BE0:
	// bl 0x830ff290
	ctx.lr = 0x82B65BE4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// li r4,116
	ctx.r4.s64 = 116;
	// beq cr6,0x82b65bfc
	if (cr6.eq) goto loc_82B65BFC;
	// li r4,21
	ctx.r4.s64 = 21;
loc_82B65BFC:
	// bl 0x82d17da0
	ctx.lr = 0x82B65C00;
	sub_82D17DA0(ctx, base);
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65c74
	if (cr6.eq) goto loc_82B65C74;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38170
	ctx.lr = 0x82B65C24;
	sub_82C38170(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r4,7524(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7524);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B65C44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19648
	ctx.lr = 0x82B65C50;
	sub_82D19648(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B65C60;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B65C70;
	sub_82D19788(ctx, base);
	// b 0x82b65ca8
	goto loc_82B65CA8;
loc_82B65C74:
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B65C80;
	sub_82D46928(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B65C98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B65CA4;
	sub_82D199D0(ctx, base);
	// stb r28,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r28.u8);
loc_82B65CA8:
	// bl 0x830ff290
	ctx.lr = 0x82B65CAC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B65CB0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x82b65cf0
	if (cr6.eq) goto loc_82B65CF0;
	// cmplwi cr6,r3,26
	cr6.compare<uint32_t>(ctx.r3.u32, 26, xer);
	// bne cr6,0x82b65e80
	if (!cr6.eq) goto loc_82B65E80;
loc_82B65CF0:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stb r28,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r28.u8);
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,7648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 7648);
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r8,r11,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r8,r5,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r7,r4,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFC0000;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bgt cr6,0x82b65e64
	if (cr6.gt) goto loc_82B65E64;
	// lis r12,-32074
	ctx.r12.s64 = -2102001664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23948
	ctx.r12.s64 = ctx.r12.s64 + 23948;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B65DE0;
	case 1:
		goto loc_82B65E64;
	case 2:
		goto loc_82B65E64;
	case 3:
		goto loc_82B65E64;
	case 4:
		goto loc_82B65E64;
	case 5:
		goto loc_82B65E64;
	case 6:
		goto loc_82B65E64;
	case 7:
		goto loc_82B65E64;
	case 8:
		goto loc_82B65E64;
	case 9:
		goto loc_82B65E64;
	case 10:
		goto loc_82B65E58;
	case 11:
		goto loc_82B65E58;
	case 12:
		goto loc_82B65E58;
	case 13:
		goto loc_82B65E58;
	case 14:
		goto loc_82B65E50;
	case 15:
		goto loc_82B65E48;
	case 16:
		goto loc_82B65E64;
	case 17:
		goto loc_82B65E64;
	case 18:
		goto loc_82B65E64;
	case 19:
		goto loc_82B65E64;
	case 20:
		goto loc_82B65DE0;
	default:
		return;
	}
	// lwz r21,24032(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24152(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24152);
	// lwz r21,24152(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24152);
	// lwz r21,24152(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24152);
	// lwz r21,24152(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24152);
	// lwz r21,24144(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24144);
	// lwz r21,24136(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24136);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24164(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24164);
	// lwz r21,24032(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
loc_82B65DE0:
	// bl 0x831156e8
	ctx.lr = 0x82B65DE4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r30,r10,14904
	ctx.r30.u64 = ctx.r10.u64 | 14904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B65E04;
	sub_831239E0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r8,14
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B65E14;
	sub_831156E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + ctx.r30.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B65E2C;
	sub_831239E0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r3,14
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFF;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x830ff290
	ctx.lr = 0x82B65E3C;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82b65e64
	goto loc_82B65E64;
loc_82B65E48:
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x82b65e60
	goto loc_82B65E60;
loc_82B65E50:
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x82b65e60
	goto loc_82B65E60;
loc_82B65E58:
	// bl 0x830ff290
	ctx.lr = 0x82B65E5C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_82B65E60:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82B65E64:
	// bl 0x831156e8
	ctx.lr = 0x82B65E68;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-20656
	ctx.r3.s64 = ctx.r3.s64 + -20656;
	// bl 0x83126148
	ctx.lr = 0x82B65E80;
	sub_83126148(ctx, base);
loc_82B65E80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65620
	ctx.lr = 0x82B65E88;
	sub_82B65620(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B65E90:
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B65E9C;
	sub_82D46928(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B65EB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B65EC0;
	sub_82D199D0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B65ED0:
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B65EDC;
	sub_82D46928(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B65EF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B65F00;
	sub_82D199D0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B65F10:
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B65F1C;
	sub_82D46928(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B65F34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B65F40;
	sub_82D199D0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B65F50:
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B65F5C;
	sub_82D46928(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B65F74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B65F80;
	sub_82D199D0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
loc_82B65F88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B65F90"))) PPC_WEAK_FUNC(sub_82B65F90);
PPC_FUNC_IMPL(__imp__sub_82B65F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B65F98;
	__savegprlr_22(ctx, base);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82b64cc0
	ctx.lr = 0x82B65FAC;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b65fbc
	if (cr6.eq) goto loc_82B65FBC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82B65FBC:
	// bl 0x830ff290
	ctx.lr = 0x82B65FC0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B65FC4;
	sub_830FFAA8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82b65ff8
	if (cr6.eq) goto loc_82B65FF8;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82b65ff8
	if (cr6.eq) goto loc_82B65FF8;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82b65ff8
	if (cr6.eq) goto loc_82B65FF8;
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// beq cr6,0x82b65ff8
	if (cr6.eq) goto loc_82B65FF8;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// beq cr6,0x82b65ff8
	if (cr6.eq) goto loc_82B65FF8;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b65ffc
	if (!cr6.eq) goto loc_82B65FFC;
loc_82B65FF8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B65FFC:
	// bl 0x831156e8
	ctx.lr = 0x82B66000;
	sub_831156E8(ctx, base);
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B66008;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// addis r23,r11,5
	ctx.r23.s64 = ctx.r11.s64 + 327680;
	// addi r29,r29,32692
	ctx.r29.s64 = ctx.r29.s64 + 32692;
	// addis r27,r11,6
	ctx.r27.s64 = ctx.r11.s64 + 393216;
	// addis r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 65536;
	// addi r23,r23,14904
	ctx.r23.s64 = ctx.r23.s64 + 14904;
	// addi r24,r29,11428
	ctx.r24.s64 = ctx.r29.s64 + 11428;
	// addi r27,r27,-30316
	ctx.r27.s64 = ctx.r27.s64 + -30316;
	// addi r25,r25,24160
	ctx.r25.s64 = ctx.r25.s64 + 24160;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6635c
	if (cr6.eq) goto loc_82B6635C;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
loc_82B66044:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x82B66054;
	sub_831239E0(ctx, base);
	// lbzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b66070
	if (cr6.eq) goto loc_82B66070;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311eab0
	ctx.lr = 0x82B66070;
	sub_8311EAB0(ctx, base);
loc_82B66070:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82b66044
	if (cr6.lt) goto loc_82B66044;
	// lbz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bge cr6,0x82b6609c
	if (!cr6.lt) goto loc_82B6609C;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
loc_82B6609C:
	// lbz r11,1(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// cmplwi cr6,r26,26
	cr6.compare<uint32_t>(ctx.r26.u32, 26, xer);
	// stb r11,1(r24)
	PPC_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
	// bne cr6,0x82b660bc
	if (!cr6.eq) goto loc_82B660BC;
	// lhz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,48(r24)
	PPC_STORE_U16(ctx.r24.u32 + 48, ctx.r11.u16);
	// b 0x82b660c8
	goto loc_82B660C8;
loc_82B660BC:
	// lhz r11,2(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,2(r24)
	PPC_STORE_U16(ctx.r24.u32 + 2, ctx.r11.u16);
loc_82B660C8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,15392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15392);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b66100
	if (!cr6.eq) goto loc_82B66100;
	// cmplwi cr6,r26,26
	cr6.compare<uint32_t>(ctx.r26.u32, 26, xer);
	// bne cr6,0x82b660f4
	if (!cr6.eq) goto loc_82B660F4;
	// lhz r11,50(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 50);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,50(r24)
	PPC_STORE_U16(ctx.r24.u32 + 50, ctx.r11.u16);
	// b 0x82b66100
	goto loc_82B66100;
loc_82B660F4:
	// lhz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4, ctx.r11.u16);
loc_82B66100:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82B6610C:
	// addi r10,r11,254
	ctx.r10.s64 = ctx.r11.s64 + 254;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,45(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b6612c
	if (!cr6.eq) goto loc_82B6612C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b66138
	goto loc_82B66138;
loc_82B6612C:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b66138
	if (!cr6.eq) goto loc_82B66138;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B66138:
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,45(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b66158
	if (!cr6.eq) goto loc_82B66158;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b66164
	goto loc_82B66164;
loc_82B66158:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b66164
	if (!cr6.eq) goto loc_82B66164;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B66164:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,45(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b66180
	if (!cr6.eq) goto loc_82B66180;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b6618c
	goto loc_82B6618C;
loc_82B66180:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b6618c
	if (!cr6.eq) goto loc_82B6618C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B6618C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,45(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b661ac
	if (!cr6.eq) goto loc_82B661AC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b661b8
	goto loc_82B661B8;
loc_82B661AC:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b661b8
	if (!cr6.eq) goto loc_82B661B8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B661B8:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,45(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b661d8
	if (!cr6.eq) goto loc_82B661D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b661e4
	goto loc_82B661E4;
loc_82B661D8:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b661e4
	if (!cr6.eq) goto loc_82B661E4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B661E4:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbz r10,45(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 45);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b66204
	if (!cr6.eq) goto loc_82B66204;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82b66210
	goto loc_82B66210;
loc_82B66204:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82b66210
	if (!cr6.eq) goto loc_82B66210;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82B66210:
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r10,24
	cr6.compare<uint32_t>(ctx.r10.u32, 24, xer);
	// blt cr6,0x82b6610c
	if (cr6.lt) goto loc_82B6610C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b66234
	if (cr6.eq) goto loc_82B66234;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b66238
	if (!cr6.eq) goto loc_82B66238;
loc_82B66234:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B66238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6624c
	if (cr6.eq) goto loc_82B6624C;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
loc_82B6624C:
	// bl 0x831156e8
	ctx.lr = 0x82B66250;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r31,r11,35265
	ctx.r31.u64 = ctx.r11.u64 | 35265;
loc_82B66264:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x82B66274;
	sub_831239E0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82B66280;
	sub_8311C148(ctx, base);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// blt cr6,0x82b66290
	if (cr6.lt) goto loc_82B66290;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b662f0
	goto loc_82B662F0;
loc_82B66290:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82b662ac
	if (cr6.lt) goto loc_82B662AC;
	// bne cr6,0x82b662b0
	if (!cr6.eq) goto loc_82B662B0;
	// li r8,2
	ctx.r8.s64 = 2;
	// b 0x82b662b0
	goto loc_82B662B0;
loc_82B662AC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82B662B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82B662BC:
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82b662d4
	if (!cr6.eq) goto loc_82B662D4;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
loc_82B662D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82b662bc
	if (cr6.lt) goto loc_82B662BC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82B662F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82b6630c
	if (!cr6.lt) goto loc_82B6630C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82b66264
	if (cr6.lt) goto loc_82B66264;
	// b 0x82b66310
	goto loc_82B66310;
loc_82B6630C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B66310:
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b66328
	if (cr6.eq) goto loc_82B66328;
	// lhz r11,6(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 6);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,6(r24)
	PPC_STORE_U16(ctx.r24.u32 + 6, ctx.r11.u16);
loc_82B66328:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312ae08
	ctx.lr = 0x82B66334;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b663c4
	if (cr6.eq) goto loc_82B663C4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b663c4
	if (cr6.eq) goto loc_82B663C4;
	// lhz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,8(r24)
	PPC_STORE_U16(ctx.r24.u32 + 8, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82B6635C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b663c4
	if (cr6.eq) goto loc_82B663C4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B6636C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x82B6637C;
	sub_831239E0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82B66388;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82B66398;
	sub_831CE980(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82b663b8
	if (cr6.eq) goto loc_82B663B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311eab0
	ctx.lr = 0x82B663B8;
	sub_8311EAB0(ctx, base);
loc_82B663B8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82b6636c
	if (cr6.lt) goto loc_82B6636C;
loc_82B663C4:
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B663CC"))) PPC_WEAK_FUNC(sub_82B663CC);
PPC_FUNC_IMPL(__imp__sub_82B663CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B663D0"))) PPC_WEAK_FUNC(sub_82B663D0);
PPC_FUNC_IMPL(__imp__sub_82B663D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B663D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,203(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 203);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b664c4
	if (!cr6.eq) goto loc_82B664C4;
	// lbz r11,209(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 209);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b664c4
	if (!cr6.eq) goto loc_82B664C4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r27,r3,210
	ctx.r27.s64 = ctx.r3.s64 + 210;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_82B66410:
	// lbzx r11,r27,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6646c
	if (!cr6.eq) goto loc_82B6646C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b64f38
	ctx.lr = 0x82B6642C;
	sub_82B64F38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stb r31,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r31.u8);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// sth r29,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r29.u16);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82b34ac8
	ctx.lr = 0x82B66460;
	sub_82B34AC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d41ac0
	ctx.lr = 0x82B66468;
	sub_82D41AC0(ctx, base);
	// stbx r3,r27,r30
	PPC_STORE_U8(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u8);
loc_82B6646C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82b66410
	if (cr6.lt) goto loc_82B66410;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b664c4
	if (cr6.eq) goto loc_82B664C4;
	// lbz r11,211(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 211);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b664c4
	if (cr6.eq) goto loc_82B664C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,209(r26)
	PPC_STORE_U8(ctx.r26.u32 + 209, ctx.r11.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82B664A0;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b664c4
	if (cr6.eq) goto loc_82B664C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,7520(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7520);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B664C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B664C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B664CC"))) PPC_WEAK_FUNC(sub_82B664CC);
PPC_FUNC_IMPL(__imp__sub_82B664CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B664D0"))) PPC_WEAK_FUNC(sub_82B664D0);
PPC_FUNC_IMPL(__imp__sub_82B664D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B664D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r23,r3,210
	ctx.r23.s64 = ctx.r3.s64 + 210;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r29,r3,212
	ctx.r29.s64 = ctx.r3.s64 + 212;
	// ori r25,r11,14904
	ctx.r25.u64 = ctx.r11.u64 | 14904;
	// li r26,2
	ctx.r26.s64 = 2;
	// lis r24,-31777
	ctx.r24.s64 = -2082537472;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
loc_82B66504:
	// lbzx r11,r23,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66534
	if (cr6.eq) goto loc_82B66534;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b66524
	if (cr6.lt) goto loc_82B66524;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82b66528
	goto loc_82B66528;
loc_82B66524:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82B66528:
	// bl 0x83816968
	ctx.lr = 0x82B6652C;
	sub_83816968(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83816378
	ctx.lr = 0x82B66534;
	sub_83816378(ctx, base);
loc_82B66534:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// ble cr6,0x82b66544
	if (!cr6.gt) goto loc_82B66544;
	// lwz r11,7648(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7648);
	// b 0x82b66564
	goto loc_82B66564;
loc_82B66544:
	// bl 0x831156e8
	ctx.lr = 0x82B66548;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B66560;
	sub_831239E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B66564:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stb r31,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r31.u8);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// sth r27,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r27.u16);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x82B66594;
	sub_82B34AC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d418e0
	ctx.lr = 0x82B6659C;
	sub_82D418E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82b66504
	if (cr6.lt) goto loc_82B66504;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B665B4"))) PPC_WEAK_FUNC(sub_82B665B4);
PPC_FUNC_IMPL(__imp__sub_82B665B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B665B8"))) PPC_WEAK_FUNC(sub_82B665B8);
PPC_FUNC_IMPL(__imp__sub_82B665B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r8,180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r7,r10
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b66614
	if (cr0.eq) goto loc_82B66614;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b66600
	if (!cr6.gt) goto loc_82B66600;
loc_82B665E0:
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b6660c
	if (cr6.eq) goto loc_82B6660C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b665e0
	if (cr6.gt) goto loc_82B665E0;
	// b 0x82b66614
	goto loc_82B66614;
loc_82B66600:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82B6660C:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82b6662c
	if (!cr6.eq) goto loc_82B6662C;
loc_82B66614:
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b66628
	if (!cr6.eq) goto loc_82B66628;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82B66628:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82B6662C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B66634"))) PPC_WEAK_FUNC(sub_82B66634);
PPC_FUNC_IMPL(__imp__sub_82B66634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B66638"))) PPC_WEAK_FUNC(sub_82B66638);
PPC_FUNC_IMPL(__imp__sub_82B66638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B66640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b6672c
	if (!cr6.eq) goto loc_82B6672C;
	// bl 0x82d19a78
	ctx.lr = 0x82B6665C;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6672c
	if (cr6.eq) goto loc_82B6672C;
	// lis r29,-31777
	ctx.r29.s64 = -2082537472;
	// addi r11,r29,7492
	ctx.r11.s64 = ctx.r29.s64 + 7492;
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d2f098
	ctx.lr = 0x82B66674;
	sub_82D2F098(ctx, base);
	// stw r31,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,7492(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7492);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B66694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d39d50
	ctx.lr = 0x82B666A0;
	sub_82D39D50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d39cd0
	ctx.lr = 0x82B666A8;
	sub_82D39CD0(ctx, base);
	// lwz r10,180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b666d4
	if (cr6.gt) goto loc_82B666D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B666D4;
	sub_831CC188(ctx, base);
loc_82B666D4:
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r7,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw r4,r5,r8
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r8.s32);
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b6670c
	if (cr6.gt) goto loc_82B6670C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6670C;
	sub_831CC188(ctx, base);
loc_82B6670C:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b66724
	if (!cr6.eq) goto loc_82B66724;
	// li r11,253
	ctx.r11.s64 = 253;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
loc_82B66724:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
loc_82B6672C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B66734"))) PPC_WEAK_FUNC(sub_82B66734);
PPC_FUNC_IMPL(__imp__sub_82B66734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B66738"))) PPC_WEAK_FUNC(sub_82B66738);
PPC_FUNC_IMPL(__imp__sub_82B66738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B66740;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,25548
	ctx.r10.s64 = ctx.r11.s64 + 25548;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b6676c
	if (cr6.lt) goto loc_82B6676C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82B6676C;
	sub_8386D088(ctx, base);
loc_82B6676C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b66798
	if (cr6.lt) goto loc_82B66798;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82B66798;
	sub_8386D088(ctx, base);
loc_82B66798:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b667bc
	if (cr6.lt) goto loc_82B667BC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82B667BC;
	sub_8386D088(ctx, base);
loc_82B667BC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B667D0"))) PPC_WEAK_FUNC(sub_82B667D0);
PPC_FUNC_IMPL(__imp__sub_82B667D0) {
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
	// bl 0x82b66738
	ctx.lr = 0x82B667F0;
	sub_82B66738(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66808
	if (cr6.eq) goto loc_82B66808;
	// bl 0x82416268
	ctx.lr = 0x82B66804;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B66808:
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

__attribute__((alias("__imp__sub_82B66820"))) PPC_WEAK_FUNC(sub_82B66820);
PPC_FUNC_IMPL(__imp__sub_82B66820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b6683c
	if (cr6.lt) goto loc_82B6683C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b66840
	goto loc_82B66840;
loc_82B6683C:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82B66840:
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// ble cr6,0x82b66878
	if (!cr6.gt) goto loc_82B66878;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82B6685C:
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b6685c
	if (cr6.lt) goto loc_82B6685C;
loc_82B66878:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82b668a8
	if (!cr6.gt) goto loc_82B668A8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82B6688C:
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b6688c
	if (cr6.lt) goto loc_82B6688C;
loc_82B668A8:
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82B668BC:
	// lwz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r11,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82b668bc
	if (cr6.lt) goto loc_82B668BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B668DC"))) PPC_WEAK_FUNC(sub_82B668DC);
PPC_FUNC_IMPL(__imp__sub_82B668DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B668E0"))) PPC_WEAK_FUNC(sub_82B668E0);
PPC_FUNC_IMPL(__imp__sub_82B668E0) {
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
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6690c
	if (cr6.eq) goto loc_82B6690C;
	// bl 0x82e744c8
	ctx.lr = 0x82B6690C;
	sub_82E744C8(ctx, base);
loc_82B6690C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66928
	if (cr6.eq) goto loc_82B66928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e74468
	ctx.lr = 0x82B66924;
	sub_82E74468(ctx, base);
	// b 0x82b6692c
	goto loc_82B6692C;
loc_82B66928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B6692C:
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

__attribute__((alias("__imp__sub_82B66944"))) PPC_WEAK_FUNC(sub_82B66944);
PPC_FUNC_IMPL(__imp__sub_82B66944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B66948"))) PPC_WEAK_FUNC(sub_82B66948);
PPC_FUNC_IMPL(__imp__sub_82B66948) {
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
	// lwz r11,564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b66978
	if (!cr6.eq) goto loc_82B66978;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b66998
	goto loc_82B66998;
loc_82B66978:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6698c
	if (cr6.eq) goto loc_82B6698C;
	// bl 0x82e744f8
	ctx.lr = 0x82B6698C;
	sub_82E744F8(ctx, base);
loc_82B6698C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82B66998;
	sub_82E744B0(ctx, base);
loc_82B66998:
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

__attribute__((alias("__imp__sub_82B669B0"))) PPC_WEAK_FUNC(sub_82B669B0);
PPC_FUNC_IMPL(__imp__sub_82B669B0) {
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
	// bl 0x82b664d0
	ctx.lr = 0x82B669C8;
	sub_82B664D0(ctx, base);
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b669ec
	if (cr6.eq) goto loc_82B669EC;
	// bl 0x82d47978
	ctx.lr = 0x82B669D8;
	sub_82D47978(ctx, base);
	// bl 0x82c3a610
	ctx.lr = 0x82B669DC;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b669ec
	if (cr6.eq) goto loc_82B669EC;
	// bl 0x82c3a5a8
	ctx.lr = 0x82B669EC;
	sub_82C3A5A8(ctx, base);
loc_82B669EC:
	// bl 0x831156e8
	ctx.lr = 0x82B669F0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 393216;
	// addi r8,r8,-28082
	ctx.r8.s64 = ctx.r8.s64 + -28082;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r6,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_82B66A24"))) PPC_WEAK_FUNC(sub_82B66A24);
PPC_FUNC_IMPL(__imp__sub_82B66A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B66A28"))) PPC_WEAK_FUNC(sub_82B66A28);
PPC_FUNC_IMPL(__imp__sub_82B66A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B66A30;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66c14
	if (cr6.eq) goto loc_82B66C14;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66c14
	if (cr6.eq) goto loc_82B66C14;
	// lbz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b66c14
	if (!cr6.eq) goto loc_82B66C14;
	// lbz r10,600(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b66c14
	if (cr6.eq) goto loc_82B66C14;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,600(r11)
	PPC_STORE_U8(ctx.r11.u32 + 600, ctx.r10.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r11,296(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 296);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x831ce980
	ctx.lr = 0x82B66A84;
	sub_831CE980(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B66A88;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B66A8C;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addis r31,r8,5
	ctx.r31.s64 = ctx.r8.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// bl 0x82b665b8
	ctx.lr = 0x82B66AAC;
	sub_82B665B8(ctx, base);
	// stw r3,164(r22)
	PPC_STORE_U32(ctx.r22.u32 + 164, ctx.r3.u32);
	// li r7,36
	ctx.r7.s64 = 36;
	// lwz r11,180(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 180);
	// lwz r6,184(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 184);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw r4,r5,r7
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r7.s32);
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b66ad8
	if (cr6.gt) goto loc_82B66AD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B66AD8;
	sub_831CC188(ctx, base);
loc_82B66AD8:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r9,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r24,r30
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b66af4
	if (cr6.eq) goto loc_82B66AF4;
	// li r24,254
	ctx.r24.s64 = 254;
loc_82B66AF4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82b66b08
	if (cr6.lt) goto loc_82B66B08;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82B66B08:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82b66b1c
	if (cr6.lt) goto loc_82B66B1C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82B66B1C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// and r26,r6,r11
	ctx.r26.u64 = ctx.r6.u64 & ctx.r11.u64;
	// blt cr6,0x82b66b44
	if (cr6.lt) goto loc_82B66B44;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82B66B44:
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x82b66b54
	if (cr6.lt) goto loc_82B66B54;
	// li r28,3
	ctx.r28.s64 = 3;
loc_82B66B54:
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x82b66b64
	if (cr6.lt) goto loc_82B66B64;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82B66B64:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x831156e8
	ctx.lr = 0x82B66B6C;
	sub_831156E8(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c4e0
	ctx.lr = 0x82B66B78;
	sub_8311C4E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b66b88
	if (!cr6.eq) goto loc_82B66B88;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,65534
	ctx.r30.u64 = ctx.r30.u64 | 65534;
loc_82B66B88:
	// clrlwi r4,r24,24
	ctx.r4.u64 = ctx.r24.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82B66B94;
	sub_83123890(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47360
	ctx.lr = 0x82B66BA0;
	sub_82A47360(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82B66BAC;
	sub_831340B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df36c8
	ctx.lr = 0x82B66BB8;
	sub_82DF36C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a8
	ctx.lr = 0x82B66BC4;
	sub_831238A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82B66BD0;
	sub_82583318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82B66BDC;
	sub_82583320(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82B66BE8;
	sub_83123898(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_82B66BF0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123900
	ctx.lr = 0x82B66C00;
	sub_83123900(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82b66bf0
	if (cr6.lt) goto loc_82B66BF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,200(r22)
	PPC_STORE_U8(ctx.r22.u32 + 200, ctx.r11.u8);
loc_82B66C14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B66C1C"))) PPC_WEAK_FUNC(sub_82B66C1C);
PPC_FUNC_IMPL(__imp__sub_82B66C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B66C20"))) PPC_WEAK_FUNC(sub_82B66C20);
PPC_FUNC_IMPL(__imp__sub_82B66C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B66C28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b66ca0
	if (cr6.eq) goto loc_82B66CA0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B66C44:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b66c90
	if (cr6.eq) goto loc_82B66C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82B66C54;
	sub_82DA8D18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B66C68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r29,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,49
	ctx.r11.s64 = ctx.r31.s64 + 49;
	// bl 0x82da8e68
	ctx.lr = 0x82B66C80;
	sub_82DA8E68(ctx, base);
	// lbz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
	// lbz r8,49(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r8,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r8.u8);
loc_82B66C90:
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b66c44
	if (!cr6.eq) goto loc_82B66C44;
loc_82B66CA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B66CAC"))) PPC_WEAK_FUNC(sub_82B66CAC);
PPC_FUNC_IMPL(__imp__sub_82B66CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B66CB0"))) PPC_WEAK_FUNC(sub_82B66CB0);
PPC_FUNC_IMPL(__imp__sub_82B66CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B66CB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66ec8
	if (cr6.eq) goto loc_82B66EC8;
	// bl 0x82d19a78
	ctx.lr = 0x82B66CD0;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b66ec8
	if (cr6.eq) goto loc_82B66EC8;
	// lbz r11,202(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 202);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b66ec8
	if (cr6.eq) goto loc_82B66EC8;
	// lwz r11,308(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b66da8
	if (cr6.eq) goto loc_82B66DA8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b66ec8
	if (cr6.gt) goto loc_82B66EC8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b66d40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B66D40;
	// bdzf 4*cr6+eq,0x82b66d5c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B66D5C;
	// bne cr6,0x82b66d8c
	if (!cr6.eq) goto loc_82B66D8C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,7480
	ctx.r9.s64 = ctx.r11.s64 + 7480;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B66D30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 308, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B66D40:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,312(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// bl 0x82c37d38
	ctx.lr = 0x82B66D4C;
	sub_82C37D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 308, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B66D5C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r11,7480
	ctx.r9.s64 = ctx.r11.s64 + 7480;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B66D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r7,308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 308, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B66D8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,312(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// bl 0x82c37d38
	ctx.lr = 0x82B66D98;
	sub_82C37D38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,308(r27)
	PPC_STORE_U32(ctx.r27.u32 + 308, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B66DA8:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,7480
	ctx.r29.s64 = ctx.r11.s64 + 7480;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r25,r3,100
	ctx.r25.s64 = ctx.r3.s64 + 100;
	// addi r26,r29,-8
	ctx.r26.s64 = ctx.r29.s64 + -8;
	// addi r24,r11,22858
	ctx.r24.s64 = ctx.r11.s64 + 22858;
loc_82B66DC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82d2e228
	ctx.lr = 0x82B66DD0;
	sub_82D2E228(ctx, base);
	// lwz r11,312(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b66eb8
	if (!cr6.eq) goto loc_82B66EB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B66E00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,312(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// lwz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lbz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b66eb8
	if (cr6.eq) goto loc_82B66EB8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c37700
	ctx.lr = 0x82B66E20;
	sub_82C37700(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82450880
	ctx.lr = 0x82B66E2C;
	sub_82450880(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b66eb0
	if (!cr6.eq) goto loc_82B66EB0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B66E50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8337f1e0
	ctx.lr = 0x82B66E5C;
	sub_8337F1E0(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83545640
	ctx.lr = 0x82B66E68;
	sub_83545640(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b66e7c
	if (!cr6.lt) goto loc_82B66E7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B66E7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B66E94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B66EB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B66EB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B66EB8;
	sub_8387E8E0(ctx, base);
loc_82B66EB8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82b66dc4
	if (cr6.lt) goto loc_82B66DC4;
loc_82B66EC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B66ED0"))) PPC_WEAK_FUNC(sub_82B66ED0);
PPC_FUNC_IMPL(__imp__sub_82B66ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82B66ED8;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B66EE4;
	sub_82DAD2E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b67038
	if (cr6.eq) goto loc_82B67038;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82B66F00:
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b66fbc
	if (cr6.lt) goto loc_82B66FBC;
	// bne cr6,0x82b67024
	if (!cr6.eq) goto loc_82B67024;
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b67024
	if (!cr6.eq) goto loc_82B67024;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// lwz r8,356(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// lwz r7,360(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r6,364(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// addi r3,r30,620
	ctx.r3.s64 = ctx.r30.s64 + 620;
	// lwz r5,368(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r4,372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// lwz r31,376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// lwz r23,380(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// lwz r22,384(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// stw r25,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r25.u32);
	// stw r25,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r25.u32);
	// lwz r21,620(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r25,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r25.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bne cr6,0x82b66fb4
	if (!cr6.eq) goto loc_82B66FB4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82B66FB0;
	sub_831CE980(ctx, base);
	// stb r27,600(r30)
	PPC_STORE_U8(ctx.r30.u32 + 600, ctx.r27.u8);
loc_82B66FB4:
	// stwx r27,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x82b67024
	goto loc_82B67024;
loc_82B66FBC:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b67024
	if (cr6.eq) goto loc_82B67024;
	// bl 0x82e744f8
	ctx.lr = 0x82B66FD8;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82B66FEC;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b66948
	ctx.lr = 0x82B66FF8;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b67014
	if (cr6.eq) goto loc_82B67014;
	// bl 0x8259b510
	ctx.lr = 0x82B67014;
	sub_8259B510(ctx, base);
loc_82B67014:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67024
	if (!cr6.eq) goto loc_82B67024;
	// stwx r24,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r24.u32);
loc_82B67024:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// blt cr6,0x82b66f00
	if (cr6.lt) goto loc_82B66F00;
loc_82B67038:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B67040"))) PPC_WEAK_FUNC(sub_82B67040);
PPC_FUNC_IMPL(__imp__sub_82B67040) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b67078
	if (cr6.eq) goto loc_82B67078;
loc_82B67064:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82B6706C;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b67064
	if (!cr6.eq) goto loc_82B67064;
loc_82B67078:
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

__attribute__((alias("__imp__sub_82B67090"))) PPC_WEAK_FUNC(sub_82B67090);
PPC_FUNC_IMPL(__imp__sub_82B67090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blt cr6,0x82b670d0
	if (cr6.lt) goto loc_82B670D0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82B670D0:
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stb r9,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r9.u8);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, ctx.r11.u8);
	// stb r11,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r11.u8);
	// stb r11,51(r3)
	PPC_STORE_U8(ctx.r3.u32 + 51, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B670F8"))) PPC_WEAK_FUNC(sub_82B670F8);
PPC_FUNC_IMPL(__imp__sub_82B670F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B67100;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,7565(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7565);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b671cc
	if (!cr6.eq) goto loc_82B671CC;
	// bl 0x831156e8
	ctx.lr = 0x82B67120;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r31,r10,14904
	ctx.r31.u64 = ctx.r10.u64 | 14904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B67140;
	sub_831239E0(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r7,r8,14
	ctx.r7.u64 = ctx.r8.u32 & 0x3FFFF;
	// cmplwi cr6,r7,45
	cr6.compare<uint32_t>(ctx.r7.u32, 45, xer);
	// beq cr6,0x82b6717c
	if (cr6.eq) goto loc_82B6717C;
	// bl 0x831156e8
	ctx.lr = 0x82B67154;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B6716C;
	sub_831239E0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,45
	cr6.compare<uint32_t>(ctx.r8.u32, 45, xer);
	// bne cr6,0x82b671cc
	if (!cr6.eq) goto loc_82B671CC;
loc_82B6717C:
	// lbz r11,205(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b671c4
	if (cr6.eq) goto loc_82B671C4;
	// bl 0x830ff290
	ctx.lr = 0x82B6718C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x82b671b4
	if (cr6.eq) goto loc_82B671B4;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82b671b4
	if (cr6.eq) goto loc_82B671B4;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// beq cr6,0x82b671b4
	if (cr6.eq) goto loc_82B671B4;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82b671b8
	if (!cr6.eq) goto loc_82B671B8;
loc_82B671B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B671B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b671cc
	if (cr6.eq) goto loc_82B671CC;
loc_82B671C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b671d0
	goto loc_82B671D0;
loc_82B671CC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82B671D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6722c
	if (cr6.eq) goto loc_82B6722C;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x82f04c50
	ctx.lr = 0x82B671F8;
	sub_82F04C50(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b67220
	if (cr6.eq) goto loc_82B67220;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b67214
	if (cr6.eq) goto loc_82B67214;
	// bl 0x82416268
	ctx.lr = 0x82B67214;
	sub_82416268(ctx, base);
loc_82B67214:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B67220:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6722c
	if (cr6.eq) goto loc_82B6722C;
	// bl 0x82416268
	ctx.lr = 0x82B6722C;
	sub_82416268(ctx, base);
loc_82B6722C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B67238"))) PPC_WEAK_FUNC(sub_82B67238);
PPC_FUNC_IMPL(__imp__sub_82B67238) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,21
	ctx.r3.s64 = 21;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x82f04c50
	ctx.lr = 0x82B6726C;
	sub_82F04C50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b6729c
	if (cr6.eq) goto loc_82B6729C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi. r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82b67294
	if (!cr0.eq) goto loc_82B67294;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B67294;
	sub_831CC188(ctx, base);
loc_82B67294:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_82B6729C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b672a8
	if (cr6.eq) goto loc_82B672A8;
	// bl 0x82416268
	ctx.lr = 0x82B672A8;
	sub_82416268(ctx, base);
loc_82B672A8:
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

__attribute__((alias("__imp__sub_82B672C0"))) PPC_WEAK_FUNC(sub_82B672C0);
PPC_FUNC_IMPL(__imp__sub_82B672C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B672C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B672D4;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B672D8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// bl 0x82b670f8
	ctx.lr = 0x82B672F0;
	sub_82B670F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b67340
	if (cr6.eq) goto loc_82B67340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b67238
	ctx.lr = 0x82B67304;
	sub_82B67238(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b6735c
	if (cr6.eq) goto loc_82B6735C;
	// lhz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b6732c
	if (!cr6.eq) goto loc_82B6732C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B67328;
	sub_83A76F48(ctx, base);
	// sth r3,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r3.u16);
loc_82B6732C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123898
	ctx.lr = 0x82B67338;
	sub_83123898(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B67340:
	// lhz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82b6735c
	if (cr6.eq) goto loc_82B6735C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123898
	ctx.lr = 0x82B67354;
	sub_83123898(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
loc_82B6735C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B67364"))) PPC_WEAK_FUNC(sub_82B67364);
PPC_FUNC_IMPL(__imp__sub_82B67364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B67368"))) PPC_WEAK_FUNC(sub_82B67368);
PPC_FUNC_IMPL(__imp__sub_82B67368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B67370;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6737C;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b673b0
	if (cr6.eq) goto loc_82B673B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82b668e0
	ctx.lr = 0x82B6739C;
	sub_82B668E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b673bc
	if (!cr6.eq) goto loc_82B673BC;
loc_82B673A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82B673B0;
	sub_82F73D60(ctx, base);
loc_82B673B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B673BC:
	// lwz r11,680(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 680);
	// lwz r10,676(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 676);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b6741c
	if (!cr6.eq) goto loc_82B6741C;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82b6741c
	if (cr6.eq) goto loc_82B6741C;
	// lwz r30,608(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 608);
	// addi r29,r29,604
	ctx.r29.s64 = ctx.r29.s64 + 604;
loc_82B673EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83571120
	ctx.lr = 0x82B67404;
	sub_83571120(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b673a8
	if (cr6.eq) goto loc_82B673A8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b673ec
	if (!cr6.eq) goto loc_82B673EC;
loc_82B6741C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82B67424;
	sub_82F73D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B67430"))) PPC_WEAK_FUNC(sub_82B67430);
PPC_FUNC_IMPL(__imp__sub_82B67430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B67438;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stb r25,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r25.u8);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r25.u8);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stb r25,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r25.u8);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stb r25,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r25.u8);
	// stb r25,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r25.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B6746C;
	sub_830FF290(ctx, base);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x830ff290
	ctx.lr = 0x82B67474;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B67478;
	sub_830FFAA8(ctx, base);
	// lbz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6758c
	if (cr6.eq) goto loc_82B6758C;
	// lbz r11,205(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 205);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6755c
	if (cr6.eq) goto loc_82B6755C;
	// cmplwi cr6,r28,61
	cr6.compare<uint32_t>(ctx.r28.u32, 61, xer);
	// bne cr6,0x82b674c4
	if (!cr6.eq) goto loc_82B674C4;
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
	// bl 0x82d8a898
	ctx.lr = 0x82B674B0;
	sub_82D8A898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 & ctx.r27.u64;
	// stb r27,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r27.u8);
loc_82B674C4:
	// lbz r11,206(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b674e0
	if (cr6.eq) goto loc_82B674E0;
	// bl 0x82b64c60
	ctx.lr = 0x82B674D4;
	sub_82B64C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b674ec
	if (cr6.eq) goto loc_82B674EC;
loc_82B674E0:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
loc_82B674EC:
	// lbz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 276);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r24,r8,r24
	ctx.r24.u64 = ctx.r8.u64 & ctx.r24.u64;
	// stb r24,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r24.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B67504;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x82b6752c
	if (cr6.eq) goto loc_82B6752C;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82b6752c
	if (cr6.eq) goto loc_82B6752C;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// beq cr6,0x82b6752c
	if (cr6.eq) goto loc_82B6752C;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x82b67530
	if (!cr6.eq) goto loc_82B67530;
loc_82B6752C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82B67530:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67540
	if (!cr6.eq) goto loc_82B67540;
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
loc_82B67540:
	// bl 0x830ff290
	ctx.lr = 0x82B67544;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x82b67734
	if (!cr6.eq) goto loc_82B67734;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// b 0x82b67734
	goto loc_82B67734;
loc_82B6755C:
	// bl 0x831156e8
	ctx.lr = 0x82B67560;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,53328
	ctx.r9.u64 = ctx.r11.u64 | 53328;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82b67580
	if (cr6.eq) goto loc_82B67580;
	// cmplwi cr6,r28,59
	cr6.compare<uint32_t>(ctx.r28.u32, 59, xer);
	// bne cr6,0x82b67734
	if (!cr6.eq) goto loc_82B67734;
loc_82B67580:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// b 0x82b67730
	goto loc_82B67730;
loc_82B6758C:
	// addi r11,r29,-7
	ctx.r11.s64 = ctx.r29.s64 + -7;
	// cmplwi cr6,r28,68
	cr6.compare<uint32_t>(ctx.r28.u32, 68, xer);
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 & ctx.r23.u64;
	// stb r23,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r23.u8);
	// bne cr6,0x82b67608
	if (!cr6.eq) goto loc_82B67608;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// bl 0x82f04c50
	ctx.lr = 0x82B675D0;
	sub_82F04C50(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x82b675ec
	if (cr6.gt) goto loc_82B675EC;
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
loc_82B675EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b675f8
	if (cr6.eq) goto loc_82B675F8;
	// bl 0x82416268
	ctx.lr = 0x82B675F8;
	sub_82416268(ctx, base);
loc_82B675F8:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// b 0x82b6771c
	goto loc_82B6771C;
loc_82B67608:
	// bl 0x82b64cc0
	ctx.lr = 0x82B6760C;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b676d4
	if (!cr6.eq) goto loc_82B676D4;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// beq cr6,0x82b67650
	if (cr6.eq) goto loc_82B67650;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// beq cr6,0x82b67650
	if (cr6.eq) goto loc_82B67650;
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// beq cr6,0x82b67650
	if (cr6.eq) goto loc_82B67650;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// bne cr6,0x82b6771c
	if (!cr6.eq) goto loc_82B6771C;
loc_82B67650:
	// bl 0x831156e8
	ctx.lr = 0x82B67654;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B6765C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r29,r10,14904
	ctx.r29.u64 = ctx.r10.u64 | 14904;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B6767C;
	sub_831239E0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82B6768C;
	sub_8311C148(ctx, base);
	// lwz r7,788(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r6,r7,15,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b6771c
	if (!cr6.eq) goto loc_82B6771C;
	// bl 0x831156e8
	ctx.lr = 0x82B676A0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82B676AC;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831bc350
	ctx.lr = 0x82B676BC;
	sub_831BC350(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b6771c
	if (!cr6.eq) goto loc_82B6771C;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stb r25,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r25.u8);
	// b 0x82b6771c
	goto loc_82B6771C;
loc_82B676D4:
	// bl 0x8314ee28
	ctx.lr = 0x82B676D8;
	sub_8314EE28(ctx, base);
	// bl 0x82f047e0
	ctx.lr = 0x82B676DC;
	sub_82F047E0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x82f04c50
	ctx.lr = 0x82B676F8;
	sub_82F04C50(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bgt cr6,0x82b67714
	if (cr6.gt) goto loc_82B67714;
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
loc_82B67714:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d9af88
	ctx.lr = 0x82B6771C;
	sub_82D9AF88(ctx, base);
loc_82B6771C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b670f8
	ctx.lr = 0x82B67724;
	sub_82B670F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b67734
	if (cr6.eq) goto loc_82B67734;
loc_82B67730:
	// stb r31,341(r30)
	PPC_STORE_U8(ctx.r30.u32 + 341, ctx.r31.u8);
loc_82B67734:
	// lbz r11,341(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 341);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b67754
	if (!cr6.eq) goto loc_82B67754;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67750
	if (!cr6.eq) goto loc_82B67750;
	// stb r25,342(r30)
	PPC_STORE_U8(ctx.r30.u32 + 342, ctx.r25.u8);
loc_82B67750:
	// stb r25,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r25.u8);
loc_82B67754:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_82B67758:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c389c8
	ctx.lr = 0x82B67768;
	sub_82C389C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(ctx.r31.u32, 5, xer);
	// blt cr6,0x82b67758
	if (cr6.lt) goto loc_82B67758;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// stb r27,340(r30)
	PPC_STORE_U8(ctx.r30.u32 + 340, ctx.r27.u8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b677a0
	if (!cr6.eq) goto loc_82B677A0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c38178
	ctx.lr = 0x82B67798;
	sub_82C38178(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B677A0:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82b677b4
	if (cr6.eq) goto loc_82B677B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B677B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c38178
	ctx.lr = 0x82B677C0;
	sub_82C38178(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B677C8"))) PPC_WEAK_FUNC(sub_82B677C8);
PPC_FUNC_IMPL(__imp__sub_82B677C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B677D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B677DC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r10,204(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 204);
	// addi r9,r11,-11
	ctx.r9.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r8,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b67810
	if (cr6.eq) goto loc_82B67810;
	// bl 0x82b64c60
	ctx.lr = 0x82B677FC;
	sub_82B64C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b679ec
	if (!cr6.eq) goto loc_82B679EC;
	// lbz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 340);
	// b 0x82b67818
	goto loc_82B67818;
loc_82B67810:
	// bl 0x82b64cc0
	ctx.lr = 0x82B67814;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_82B67818:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b679ec
	if (cr6.eq) goto loc_82B679EC;
	// bl 0x831156e8
	ctx.lr = 0x82B67824;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// bl 0x831156e8
	ctx.lr = 0x82B67834;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 65536;
	// addi r29,r29,24160
	ctx.r29.s64 = ctx.r29.s64 + 24160;
	// bl 0x8314ee28
	ctx.lr = 0x82B67844;
	sub_8314EE28(ctx, base);
	// lwz r9,184(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r10,180(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 180);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b67874
	if (cr6.gt) goto loc_82B67874;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B67874;
	sub_831CC188(ctx, base);
loc_82B67874:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r26,r29
	ctx.r30.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r8.u8);
	// bl 0x824ce1d8
	ctx.lr = 0x82B67894;
	sub_824CE1D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,102(r30)
	PPC_STORE_U8(ctx.r30.u32 + 102, ctx.r6.u8);
	// bl 0x831238a0
	ctx.lr = 0x82B678A4;
	sub_831238A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r5,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r5.u8);
	// bl 0x8253f910
	ctx.lr = 0x82B678B4;
	sub_8253F910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,122(r30)
	PPC_STORE_U8(ctx.r30.u32 + 122, ctx.r4.u8);
	// bl 0x8353c978
	ctx.lr = 0x82B678C4;
	sub_8353C978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,132(r30)
	PPC_STORE_U8(ctx.r30.u32 + 132, ctx.r11.u8);
	// bl 0x831238b0
	ctx.lr = 0x82B678D4;
	sub_831238B0(ctx, base);
	// stb r3,142(r30)
	PPC_STORE_U8(ctx.r30.u32 + 142, ctx.r3.u8);
	// lbz r9,204(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 204);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b679ec
	if (!cr6.eq) goto loc_82B679EC;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67914
	if (!cr6.eq) goto loc_82B67914;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab678
	ctx.lr = 0x82B678F8;
	sub_82DAB678(ctx, base);
	// stb r3,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123830
	ctx.lr = 0x82B67904;
	sub_83123830(ctx, base);
	// stb r3,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123858
	ctx.lr = 0x82B67910;
	sub_83123858(ctx, base);
	// stb r3,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r3.u8);
loc_82B67914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x82B6791C;
	sub_825832F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// bl 0x82dab6b8
	ctx.lr = 0x82B6792C;
	sub_82DAB6B8(ctx, base);
	// stb r3,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123868
	ctx.lr = 0x82B67938;
	sub_83123868(ctx, base);
	// stb r3,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123878
	ctx.lr = 0x82B67944;
	sub_83123878(ctx, base);
	// stb r3,9(r29)
	PPC_STORE_U8(ctx.r29.u32 + 9, ctx.r3.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239a8
	ctx.lr = 0x82B67954;
	sub_831239A8(ctx, base);
	// stb r3,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r3.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239a8
	ctx.lr = 0x82B67964;
	sub_831239A8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r9.u8);
	// bl 0x831237f8
	ctx.lr = 0x82B67974;
	sub_831237F8(ctx, base);
	// stb r3,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82b67238
	ctx.lr = 0x82B67984;
	sub_82B67238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b670f8
	ctx.lr = 0x82B67990;
	sub_82B670F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b679c8
	if (cr6.eq) goto loc_82B679C8;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b679c8
	if (cr6.eq) goto loc_82B679C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B679B0;
	sub_83A76F48(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b67238
	ctx.lr = 0x82B679BC;
	sub_82B67238(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b679cc
	if (cr6.eq) goto loc_82B679CC;
loc_82B679C8:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82B679CC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b679ec
	if (!cr6.eq) goto loc_82B679EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B679E0;
	sub_83A76F48(ctx, base);
	// addi r11,r26,76
	ctx.r11.s64 = ctx.r26.s64 + 76;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r10,r29
	PPC_STORE_U16(ctx.r10.u32 + ctx.r29.u32, ctx.r3.u16);
loc_82B679EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B679F4"))) PPC_WEAK_FUNC(sub_82B679F4);
PPC_FUNC_IMPL(__imp__sub_82B679F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B679F8"))) PPC_WEAK_FUNC(sub_82B679F8);
PPC_FUNC_IMPL(__imp__sub_82B679F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B67A00;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 204);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67a34
	if (!cr6.eq) goto loc_82B67A34;
	// bl 0x830ff290
	ctx.lr = 0x82B67A18;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x82b67a34
	if (cr6.eq) goto loc_82B67A34;
	// bl 0x82b64cc0
	ctx.lr = 0x82B67A28;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b67e6c
	if (cr6.eq) goto loc_82B67E6C;
loc_82B67A34:
	// bl 0x831156e8
	ctx.lr = 0x82B67A38;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B67A3C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// bl 0x831156e8
	ctx.lr = 0x82B67A4C;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r14,0
	ctx.r14.s64 = 0;
	// addis r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 65536;
	// addi r30,r30,24160
	ctx.r30.s64 = ctx.r30.s64 + 24160;
	// bl 0x830ff290
	ctx.lr = 0x82B67A60;
	sub_830FF290(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r9,68
	cr6.compare<uint32_t>(ctx.r9.u32, 68, xer);
	// beq cr6,0x82b67a74
	if (cr6.eq) goto loc_82B67A74;
	// bl 0x8314ee28
	ctx.lr = 0x82B67A70;
	sub_8314EE28(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_82B67A74:
	// add r29,r14,r30
	ctx.r29.u64 = ctx.r14.u64 + ctx.r30.u64;
	// lbz r28,92(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// cmplwi cr6,r28,254
	cr6.compare<uint32_t>(ctx.r28.u32, 254, xer);
	// beq cr6,0x82b67aa8
	if (cr6.eq) goto loc_82B67AA8;
	// cmplwi cr6,r28,253
	cr6.compare<uint32_t>(ctx.r28.u32, 253, xer);
	// beq cr6,0x82b67aa8
	if (cr6.eq) goto loc_82B67AA8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f04f00
	ctx.lr = 0x82B67A98;
	sub_82F04F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67aa8
	if (!cr6.eq) goto loc_82B67AA8;
	// li r28,254
	ctx.r28.s64 = 254;
loc_82B67AA8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b655b0
	ctx.lr = 0x82B67AB4;
	sub_82B655B0(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r27,102(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 102);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r26,112(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 112);
	// lbz r25,122(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 122);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lbz r24,132(r29)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r29.u32 + 132);
	// lbz r29,142(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 142);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lbz r23,1(r30)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r22,0(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r10,7(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lbz r6,204(r15)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r15.u32 + 204);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lbz r19,8(r30)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lbz r18,9(r30)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// cntlzw r3,r7
	ctx.r3.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lbz r17,3(r30)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lbz r16,4(r30)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// rlwinm r21,r3,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b67c28
	if (cr6.eq) goto loc_82B67C28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123888
	ctx.lr = 0x82B67B40;
	sub_83123888(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x82B67B4C;
	sub_824CE1D8(ctx, base);
	// clrlwi r27,r3,24
	ctx.r27.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a0
	ctx.lr = 0x82B67B58;
	sub_831238A0(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f910
	ctx.lr = 0x82B67B64;
	sub_8253F910(ctx, base);
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82B67B70;
	sub_8353C978(ctx, base);
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238b0
	ctx.lr = 0x82B67B7C;
	sub_831238B0(ctx, base);
	// clrlwi r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab678
	ctx.lr = 0x82B67B88;
	sub_82DAB678(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f0
	ctx.lr = 0x82B67B94;
	sub_825832F0(ctx, base);
	// clrlwi r22,r3,24
	ctx.r22.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dab6b8
	ctx.lr = 0x82B67BA0;
	sub_82DAB6B8(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123830
	ctx.lr = 0x82B67BAC;
	sub_83123830(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123858
	ctx.lr = 0x82B67BB8;
	sub_83123858(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123868
	ctx.lr = 0x82B67BC4;
	sub_83123868(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123878
	ctx.lr = 0x82B67BD0;
	sub_83123878(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239a8
	ctx.lr = 0x82B67BE0;
	sub_831239A8(ctx, base);
	// clrlwi r17,r3,24
	ctx.r17.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239a8
	ctx.lr = 0x82B67BF0;
	sub_831239A8(ctx, base);
	// clrlwi r16,r3,24
	ctx.r16.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831237f8
	ctx.lr = 0x82B67BFC;
	sub_831237F8(ctx, base);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B67C04;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x82b67c28
	if (!cr6.eq) goto loc_82B67C28;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B67C28:
	// bl 0x830ff290
	ctx.lr = 0x82B67C2C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// beq cr6,0x82b67c54
	if (cr6.eq) goto loc_82B67C54;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x82b67c54
	if (cr6.eq) goto loc_82B67C54;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82b67c54
	if (cr6.eq) goto loc_82B67C54;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b67c58
	if (!cr6.eq) goto loc_82B67C58;
loc_82B67C54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B67C58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67ca8
	if (!cr6.eq) goto loc_82B67CA8;
	// bl 0x830ff290
	ctx.lr = 0x82B67C68;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// beq cr6,0x82b67c98
	if (cr6.eq) goto loc_82B67C98;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82b67c98
	if (cr6.eq) goto loc_82B67C98;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// beq cr6,0x82b67c98
	if (cr6.eq) goto loc_82B67C98;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// beq cr6,0x82b67c98
	if (cr6.eq) goto loc_82B67C98;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b67c9c
	if (!cr6.eq) goto loc_82B67C9C;
loc_82B67C98:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B67C9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b67cac
	if (cr6.eq) goto loc_82B67CAC;
loc_82B67CA8:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82B67CAC:
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82B67CB8;
	sub_83123890(ctx, base);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47360
	ctx.lr = 0x82B67CC4;
	sub_82A47360(ctx, base);
	// clrlwi r4,r26,24
	ctx.r4.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82B67CD0;
	sub_831340B8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df36c8
	ctx.lr = 0x82B67CDC;
	sub_82DF36C8(ctx, base);
	// clrlwi r4,r25,24
	ctx.r4.u64 = ctx.r25.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a8
	ctx.lr = 0x82B67CE8;
	sub_831238A8(ctx, base);
	// clrlwi r4,r24,24
	ctx.r4.u64 = ctx.r24.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82B67CF4;
	sub_82583318(ctx, base);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82B67D00;
	sub_82583320(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e07e8
	ctx.lr = 0x82B67D0C;
	sub_839E07E8(ctx, base);
	// clrlwi r4,r22,24
	ctx.r4.u64 = ctx.r22.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583338
	ctx.lr = 0x82B67D18;
	sub_82583338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831237d0
	ctx.lr = 0x82B67D24;
	sub_831237D0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123838
	ctx.lr = 0x82B67D30;
	sub_83123838(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123860
	ctx.lr = 0x82B67D3C;
	sub_83123860(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123870
	ctx.lr = 0x82B67D48;
	sub_83123870(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82B67D54;
	sub_83123880(ctx, base);
	// clrlwi r5,r17,24
	ctx.r5.u64 = ctx.r17.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239c8
	ctx.lr = 0x82B67D64;
	sub_831239C8(ctx, base);
	// clrlwi r5,r16,24
	ctx.r5.u64 = ctx.r16.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239c8
	ctx.lr = 0x82B67D74;
	sub_831239C8(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123800
	ctx.lr = 0x82B67D80;
	sub_83123800(ctx, base);
	// addi r11,r14,76
	ctx.r11.s64 = ctx.r14.s64 + 76;
	// stw r28,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r28.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r10,r30
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// bne cr6,0x82b67d9c
	if (!cr6.eq) goto loc_82B67D9C;
	// li r30,-2
	ctx.r30.s64 = -2;
loc_82B67D9C:
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r4,65534
	cr6.compare<uint32_t>(ctx.r4.u32, 65534, xer);
	// beq cr6,0x82b67dc0
	if (cr6.eq) goto loc_82B67DC0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82f04d98
	ctx.lr = 0x82B67DB0;
	sub_82F04D98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67dc0
	if (!cr6.eq) goto loc_82B67DC0;
	// li r30,-2
	ctx.r30.s64 = -2;
loc_82B67DC0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b670f8
	ctx.lr = 0x82B67DC8;
	sub_82B670F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b67df0
	if (cr6.eq) goto loc_82B67DF0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b67238
	ctx.lr = 0x82B67DDC;
	sub_82B67238(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b67df0
	if (cr6.eq) goto loc_82B67DF0;
	// sth r30,268(r15)
	PPC_STORE_U16(ctx.r15.u32 + 268, ctx.r30.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B67DF0:
	// lbz r11,205(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 205);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b67e44
	if (!cr6.eq) goto loc_82B67E44;
	// bl 0x830ff290
	ctx.lr = 0x82B67E00;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(ctx.r11.u32, 44, xer);
	// beq cr6,0x82b67e28
	if (cr6.eq) goto loc_82B67E28;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82b67e28
	if (cr6.eq) goto loc_82B67E28;
	// cmplwi cr6,r11,51
	cr6.compare<uint32_t>(ctx.r11.u32, 51, xer);
	// beq cr6,0x82b67e28
	if (cr6.eq) goto loc_82B67E28;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b67e2c
	if (!cr6.eq) goto loc_82B67E2C;
loc_82B67E28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B67E2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67e44
	if (!cr6.eq) goto loc_82B67E44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B67E40;
	sub_83A76F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B67E44:
	// bl 0x830ff290
	ctx.lr = 0x82B67E48;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// bne cr6,0x82b67e60
	if (!cr6.eq) goto loc_82B67E60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B67E5C;
	sub_83A76F48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B67E60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82B67E6C;
	sub_83123898(ctx, base);
loc_82B67E6C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B67E74"))) PPC_WEAK_FUNC(sub_82B67E74);
PPC_FUNC_IMPL(__imp__sub_82B67E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B67E78"))) PPC_WEAK_FUNC(sub_82B67E78);
PPC_FUNC_IMPL(__imp__sub_82B67E78) {
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
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b67f44
	if (cr6.eq) goto loc_82B67F44;
	// lbz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67f44
	if (!cr6.eq) goto loc_82B67F44;
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b67f44
	if (!cr6.eq) goto loc_82B67F44;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bgt cr6,0x82b67f44
	if (cr6.gt) goto loc_82B67F44;
	// bl 0x82dad2e0
	ctx.lr = 0x82B67EC4;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b67f44
	if (cr6.eq) goto loc_82B67F44;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82db0a88
	ctx.lr = 0x82B67ED8;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b67f44
	if (cr6.eq) goto loc_82B67F44;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B67EF8;
	sub_82DB0A88(ctx, base);
	// stb r3,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b67430
	ctx.lr = 0x82B67F04;
	sub_82B67430(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r10,25272
	ctx.r3.s64 = ctx.r10.s64 + 25272;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B67F1C;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b67f44
	if (cr6.eq) goto loc_82B67F44;
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// ori r4,r4,121
	ctx.r4.u64 = ctx.r4.u64 | 121;
	// bl 0x82d2ada8
	ctx.lr = 0x82B67F38;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B67F44;
	sub_83103100(ctx, base);
loc_82B67F44:
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

__attribute__((alias("__imp__sub_82B67F5C"))) PPC_WEAK_FUNC(sub_82B67F5C);
PPC_FUNC_IMPL(__imp__sub_82B67F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B67F60"))) PPC_WEAK_FUNC(sub_82B67F60);
PPC_FUNC_IMPL(__imp__sub_82B67F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B67F68;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1170
	ctx.r11.s64 = 76677120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,18724
	ctx.r10.u64 = ctx.r11.u64 | 18724;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b67f8c
	if (!cr6.gt) goto loc_82B67F8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B67F8C;
	sub_831CC150(ctx, base);
loc_82B67F8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,56
	ctx.r26.s64 = 56;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b68030
	if (!cr6.lt) goto loc_82B68030;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,56
	ctx.r28.s64 = ctx.r4.s64 * 56;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B67FC4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b66c20
	ctx.lr = 0x82B67FE8;
	sub_82B66C20(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x82b68018
	if (cr6.eq) goto loc_82B68018;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82b67040
	ctx.lr = 0x82B68008;
	sub_82B67040(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B68018;
	sub_825952B8(ctx, base);
loc_82B68018:
	// mulli r11,r26,56
	ctx.r11.s64 = ctx.r26.s64 * 56;
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
loc_82B68030:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B68038"))) PPC_WEAK_FUNC(sub_82B68038);
PPC_FUNC_IMPL(__imp__sub_82B68038) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82B68084;
	sub_8259CB28(ctx, base);
	// lbz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_82B680A8"))) PPC_WEAK_FUNC(sub_82B680A8);
PPC_FUNC_IMPL(__imp__sub_82B680A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B680E4;
	sub_8259CB28(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// ld r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lbz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r6,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_82B68120"))) PPC_WEAK_FUNC(sub_82B68120);
PPC_FUNC_IMPL(__imp__sub_82B68120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,56
	ctx.r9.s64 = 56;
	// ori r8,r10,18724
	ctx.r8.u64 = ctx.r10.u64 | 18724;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b68154
	if (!cr6.lt) goto loc_82B68154;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B68154:
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
	// blt cr6,0x82b68184
	if (cr6.lt) goto loc_82B68184;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B68184:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b68190
	if (!cr6.lt) goto loc_82B68190;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B68190:
	// b 0x82b67f60
	sub_82B67F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B68194"))) PPC_WEAK_FUNC(sub_82B68194);
PPC_FUNC_IMPL(__imp__sub_82B68194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B68198"))) PPC_WEAK_FUNC(sub_82B68198);
PPC_FUNC_IMPL(__imp__sub_82B68198) {
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
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b681c8
	if (cr6.eq) goto loc_82B681C8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B681C8;
	sub_825952B8(ctx, base);
loc_82B681C8:
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

__attribute__((alias("__imp__sub_82B681EC"))) PPC_WEAK_FUNC(sub_82B681EC);
PPC_FUNC_IMPL(__imp__sub_82B681EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B681F0"))) PPC_WEAK_FUNC(sub_82B681F0);
PPC_FUNC_IMPL(__imp__sub_82B681F0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68230
	if (cr6.eq) goto loc_82B68230;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b67040
	ctx.lr = 0x82B6821C;
	sub_82B67040(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B68230;
	sub_825952B8(ctx, base);
loc_82B68230:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B68254"))) PPC_WEAK_FUNC(sub_82B68254);
PPC_FUNC_IMPL(__imp__sub_82B68254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B68258"))) PPC_WEAK_FUNC(sub_82B68258);
PPC_FUNC_IMPL(__imp__sub_82B68258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B68260;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B68270;
	sub_82D17DA0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B68274;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x82b68294
	if (cr6.eq) goto loc_82B68294;
	// bl 0x830ff290
	ctx.lr = 0x82B68284;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b68298
	if (!cr6.eq) goto loc_82B68298;
loc_82B68294:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B68298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6836c
	if (!cr6.eq) goto loc_82B6836C;
	// bl 0x830ff290
	ctx.lr = 0x82B682A8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b6836c
	if (!cr6.eq) goto loc_82B6836C;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82B682C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b682f8
	if (cr6.eq) goto loc_82B682F8;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82b682f8
	if (cr6.eq) goto loc_82B682F8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b682f8
	if (cr6.eq) goto loc_82B682F8;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b682c8
	if (!cr6.eq) goto loc_82B682C8;
loc_82B682F8:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b68310
	if (cr6.eq) goto loc_82B68310;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b654d0
	ctx.lr = 0x82B68308;
	sub_82B654D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B68310:
	// bl 0x830ff290
	ctx.lr = 0x82B68314;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82b6843c
	if (!cr6.eq) goto loc_82B6843C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B68328;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B68338;
	sub_82D46928(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B68350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6835C;
	sub_82D199D0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// stb r10,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6836C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B68374;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B68384;
	sub_82D46928(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B6839C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B683A8;
	sub_82D199D0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B683AC;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// beq cr6,0x82b683cc
	if (cr6.eq) goto loc_82B683CC;
	// bl 0x830ff290
	ctx.lr = 0x82B683BC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b683d0
	if (!cr6.eq) goto loc_82B683D0;
loc_82B683CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B683D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b68434
	if (cr6.eq) goto loc_82B68434;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6841c
	if (!cr6.eq) goto loc_82B6841C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24596
	ctx.r4.s64 = ctx.r11.s64 + 24596;
	// bl 0x837b0c10
	ctx.lr = 0x82B683F8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d894e0
	ctx.lr = 0x82B68404;
	sub_82D894E0(ctx, base);
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B68410;
	sub_8387E8E0(ctx, base);
	// lwz r9,324(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r10,204(r9)
	PPC_STORE_U32(ctx.r9.u32 + 204, ctx.r10.u32);
loc_82B6841C:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b68434
	if (cr6.eq) goto loc_82B68434;
	// li r3,248
	ctx.r3.s64 = 248;
	// bl 0x82d84728
	ctx.lr = 0x82B68434;
	sub_82D84728(ctx, base);
loc_82B68434:
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
loc_82B6843C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B68444"))) PPC_WEAK_FUNC(sub_82B68444);
PPC_FUNC_IMPL(__imp__sub_82B68444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B68448"))) PPC_WEAK_FUNC(sub_82B68448);
PPC_FUNC_IMPL(__imp__sub_82B68448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B68450;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B6845C;
	sub_82D19A78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68574
	if (cr6.eq) goto loc_82B68574;
	// bl 0x831156e8
	ctx.lr = 0x82B6846C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B68474;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,5
	ctx.r4.s64 = ctx.r10.s64 + 327680;
	// addi r4,r4,14904
	ctx.r4.s64 = ctx.r4.s64 + 14904;
	// bl 0x831239e0
	ctx.lr = 0x82B68490;
	sub_831239E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82B6849C;
	sub_8311C148(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,7532
	ctx.r30.s64 = ctx.r11.s64 + 7532;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r30,-68
	ctx.r8.s64 = ctx.r30.s64 + -68;
	// addi r3,r28,100
	ctx.r3.s64 = ctx.r28.s64 + 100;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82d2e228
	ctx.lr = 0x82B684BC;
	sub_82D2E228(ctx, base);
	// lwz r6,100(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r7,25068
	ctx.r4.s64 = ctx.r7.s64 + 25068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82B684DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B684EC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B68500;
	sub_82D291E0(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82b68520
	if (cr6.lt) goto loc_82B68520;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B68520;
	sub_825952B8(ctx, base);
loc_82B68520:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6854C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82b68564
	if (cr6.eq) goto loc_82B68564;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B68564:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82B68574;
	sub_82D329F8(ctx, base);
loc_82B68574:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6857C"))) PPC_WEAK_FUNC(sub_82B6857C);
PPC_FUNC_IMPL(__imp__sub_82B6857C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B68580"))) PPC_WEAK_FUNC(sub_82B68580);
PPC_FUNC_IMPL(__imp__sub_82B68580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B68588;
	__savegprlr_14(ctx, base);
	// stwu r1,-1600(r1)
	ea = -1600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B68594;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68b60
	if (cr6.eq) goto loc_82B68B60;
	// bl 0x831156e8
	ctx.lr = 0x82B685A4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r20,r11,5
	ctx.r20.s64 = ctx.r11.s64 + 327680;
	// addi r20,r20,14904
	ctx.r20.s64 = ctx.r20.s64 + 14904;
	// bl 0x831156e8
	ctx.lr = 0x82B685B4;
	sub_831156E8(ctx, base);
	// lwz r10,368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b685e8
	if (!cr6.eq) goto loc_82B685E8;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// lwz r4,7560(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7560);
	// bl 0x837b0c10
	ctx.lr = 0x82B685D4;
	sub_837B0C10(ctx, base);
	// lis r5,300
	ctx.r5.s64 = 19660800;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,556
	ctx.r5.u64 = ctx.r5.u64 | 556;
	// bl 0x82a69a28
	ctx.lr = 0x82B685E8;
	sub_82A69A28(ctx, base);
loc_82B685E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r21,r11,25188
	ctx.r21.s64 = ctx.r11.s64 + 25188;
	// addi r4,r21,-108
	ctx.r4.s64 = ctx.r21.s64 + -108;
	// bl 0x82d2f098
	ctx.lr = 0x82B685FC;
	sub_82D2F098(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B68618;
	sub_82D20F50(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lbz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r9,101
	ctx.r9.s64 = 6619136;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// ori r15,r9,1
	ctx.r15.u64 = ctx.r9.u64 | 1;
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r19,r11,8020
	ctx.r19.s64 = ctx.r11.s64 + 8020;
	// li r16,2
	ctx.r16.s64 = 2;
	// addi r18,r10,8012
	ctx.r18.s64 = ctx.r10.s64 + 8012;
loc_82B68648:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,360
	ctx.r11.s64 = ctx.r1.s64 + 360;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B68654:
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x82b68654
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B68654;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,380
	ctx.r11.s64 = ctx.r1.s64 + 380;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B68674:
	// stw r31,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r31.u32);
	// stb r31,-24(r11)
	PPC_STORE_U8(ctx.r11.u32 + -24, ctx.r31.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// blt cr6,0x82b68694
	if (cr6.lt) goto loc_82B68694;
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// b 0x82b68698
	goto loc_82B68698;
loc_82B68694:
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
loc_82B68698:
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bdnz 0x82b68674
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B68674;
	// bl 0x8399f8b8
	ctx.lr = 0x82B686A8;
	sub_8399F8B8(ctx, base);
	// mulli r11,r22,532
	ctx.r11.s64 = ctx.r22.s64 * 532;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r5,532
	ctx.r5.s64 = 532;
	// bl 0x831ce980
	ctx.lr = 0x82B686C0;
	sub_831CE980(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x8399edb0
	ctx.lr = 0x82B686D0;
	sub_8399EDB0(ctx, base);
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83123a08
	ctx.lr = 0x82B686E0;
	sub_83123A08(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83123ad8
	ctx.lr = 0x82B686F4;
	sub_83123AD8(ctx, base);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x8399ea70
	ctx.lr = 0x82B686FC;
	sub_8399EA70(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r27,r1,356
	ctx.r27.s64 = ctx.r1.s64 + 356;
loc_82B68708:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x8399ea10
	ctx.lr = 0x82B68714;
	sub_8399EA10(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82b68730
	if (!cr6.lt) goto loc_82B68730;
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// lbzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82b68734
	goto loc_82B68734;
loc_82B68730:
	// li r29,13
	ctx.r29.s64 = 13;
loc_82B68734:
	// lhz r11,808(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b6874c
	if (!cr6.lt) goto loc_82B6874C;
	// add r11,r30,r24
	ctx.r11.u64 = ctx.r30.u64 + ctx.r24.u64;
	// lbz r17,512(r11)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
loc_82B6874C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83123ba8
	ctx.lr = 0x82B68764;
	sub_83123BA8(ctx, base);
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_82B68784:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b68784
	if (!cr6.eq) goto loc_82B68784;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B687A8;
	sub_8259CC28(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bne cr6,0x82b687cc
	if (!cr6.eq) goto loc_82B687CC;
	// addi r4,r21,-24
	ctx.r4.s64 = ctx.r21.s64 + -24;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x82B687CC;
	sub_8259CC28(ctx, base);
loc_82B687CC:
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bne cr6,0x82b68854
	if (!cr6.eq) goto loc_82B68854;
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82d04220
	ctx.lr = 0x82B687F8;
	sub_82D04220(ctx, base);
	// addi r4,r21,-20
	ctx.r4.s64 = ctx.r21.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B68808;
	sub_8259CC28(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82B6881C;
	sub_825A1DA8(ctx, base);
	// addi r4,r21,-16
	ctx.r4.s64 = ctx.r21.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82B6882C;
	sub_825A1EB8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b68848
	if (cr6.lt) goto loc_82B68848;
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82B68848;
	sub_825952B8(ctx, base);
loc_82B68848:
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_82B68854:
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// bne cr6,0x82b688c4
	if (!cr6.eq) goto loc_82B688C4;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6888c
	if (cr6.eq) goto loc_82B6888C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B6887C;
	sub_825A1DA8(ctx, base);
	// addi r4,r21,-12
	ctx.r4.s64 = ctx.r21.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B6888C;
	sub_825A1EB8(ctx, base);
loc_82B6888C:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b688bc
	if (cr6.eq) goto loc_82B688BC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B688AC;
	sub_825A1DA8(ctx, base);
	// addi r4,r21,-8
	ctx.r4.s64 = ctx.r21.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B688BC;
	sub_825A1EB8(ctx, base);
loc_82B688BC:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// b 0x82b68928
	goto loc_82B68928;
loc_82B688C4:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B688D8;
	sub_8259CB28(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b68908
	if (cr6.eq) goto loc_82B68908;
	// addi r4,r21,-4
	ctx.r4.s64 = ctx.r21.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B688F4;
	sub_825A1EB8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B68908;
	sub_825A1DA8(ctx, base);
loc_82B68908:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b68938
	if (cr6.eq) goto loc_82B68938;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82B68924;
	sub_825A1EB8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82B68928:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B68938;
	sub_825A1DA8(ctx, base);
loc_82B68938:
	// stw r29,-4(r27)
	PPC_STORE_U32(ctx.r27.u32 + -4, ctx.r29.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stb r17,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r17.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B68954;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b68970
	if (cr6.lt) goto loc_82B68970;
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B68970;
	sub_825952B8(ctx, base);
loc_82B68970:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82b68998
	if (cr6.lt) goto loc_82B68998;
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B68998;
	sub_825952B8(ctx, base);
loc_82B68998:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x82b689c0
	if (cr6.lt) goto loc_82B689C0;
	// stw r16,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r16.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B689C0;
	sub_825952B8(ctx, base);
loc_82B689C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r25,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r25.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x82b689e8
	if (cr6.lt) goto loc_82B689E8;
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B689E8;
	sub_825952B8(ctx, base);
loc_82B689E8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// blt cr6,0x82b68708
	if (cr6.lt) goto loc_82B68708;
	// lis r11,-32074
	ctx.r11.s64 = -2102001664;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r6,r11,21104
	ctx.r6.s64 = ctx.r11.s64 + 21104;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x831d88b0
	ctx.lr = 0x82B68A1C;
	sub_831D88B0(ctx, base);
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// addi r30,r1,360
	ctx.r30.s64 = ctx.r1.s64 + 360;
loc_82B68A28:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B68A34;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r3,100
	ctx.r28.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82b68a48
	if (!cr6.eq) goto loc_82B68A48;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B68A48:
	// lwzx r4,r26,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r18.u32);
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82B68A5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b68a5c
	if (!cr6.eq) goto loc_82B68A5C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B68A80;
	sub_8259CC28(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + -4);
	// bl 0x82a6a1b8
	ctx.lr = 0x82B68A90;
	sub_82A6A1B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b68aa0
	if (!cr6.eq) goto loc_82B68AA0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82B68AA0:
	// stw r25,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r25.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cb28
	ctx.lr = 0x82B68AC0;
	sub_8259CB28(ctx, base);
	// lwzx r4,r26,r19
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r19.u32);
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82B68AD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b68ad4
	if (!cr6.eq) goto loc_82B68AD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B68AF8;
	sub_8259CC28(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B68B08;
	sub_82A69AD0(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// blt cr6,0x82b68a28
	if (cr6.lt) goto loc_82B68A28;
	// li r29,10
	ctx.r29.s64 = 10;
	// addi r30,r1,756
	ctx.r30.s64 = ctx.r1.s64 + 756;
loc_82B68B20:
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b68b40
	if (cr6.lt) goto loc_82B68B40;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r16,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B68B40;
	sub_825952B8(ctx, base);
loc_82B68B40:
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bge 0x82b68b20
	if (!cr0.lt) goto loc_82B68B20;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(ctx.r22.u32, 2, xer);
	// blt cr6,0x82b68648
	if (cr6.lt) goto loc_82B68648;
loc_82B68B60:
	// addi r1,r1,1600
	ctx.r1.s64 = ctx.r1.s64 + 1600;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B68B68"))) PPC_WEAK_FUNC(sub_82B68B68);
PPC_FUNC_IMPL(__imp__sub_82B68B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B68B70;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce774
	ctx.lr = 0x82B68B78;
	__savefpr_27(ctx, base);
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B68B84;
	sub_82D19A78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69084
	if (cr6.eq) goto loc_82B69084;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,7560
	ctx.r31.s64 = ctx.r11.s64 + 7560;
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// bl 0x82d2f098
	ctx.lr = 0x82B68BA0;
	sub_82D2F098(ctx, base);
	// lwz r11,368(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b68bd4
	if (!cr6.eq) goto loc_82B68BD4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B68BC0;
	sub_837B0C10(ctx, base);
	// lis r5,60
	ctx.r5.s64 = 3932160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x82a69a28
	ctx.lr = 0x82B68BD4;
	sub_82A69A28(ctx, base);
loc_82B68BD4:
	// bl 0x831156e8
	ctx.lr = 0x82B68BD8;
	sub_831156E8(ctx, base);
	// lwz r16,48(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82B68BE0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lbz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addis r20,r11,5
	ctx.r20.s64 = ctx.r11.s64 + 327680;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f28,25552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25552);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,11796(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11796);
	ctx.f29.f64 = double(temp.f32);
	// addi r22,r27,396
	ctx.r22.s64 = ctx.r27.s64 + 396;
	// lfs f27,21700(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21700);
	ctx.f27.f64 = double(temp.f32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// addi r20,r20,14904
	ctx.r20.s64 = ctx.r20.s64 + 14904;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// li r17,15
	ctx.r17.s64 = 15;
	// li r15,27
	ctx.r15.s64 = 27;
	// addi r23,r11,25220
	ctx.r23.s64 = ctx.r11.s64 + 25220;
loc_82B68C2C:
	// bl 0x8399f8b8
	ctx.lr = 0x82B68C30;
	sub_8399F8B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// add r11,r19,r11
	ctx.r11.u64 = ctx.r19.u64 + ctx.r11.u64;
	// li r5,532
	ctx.r5.s64 = 532;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x82B68C48;
	sub_831CE980(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831239e0
	ctx.lr = 0x82B68C58;
	sub_831239E0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8311c148
	ctx.lr = 0x82B68C64;
	sub_8311C148(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83123ad8
	ctx.lr = 0x82B68C78;
	sub_83123AD8(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82B68C7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8399ea10
	ctx.lr = 0x82B68C88;
	sub_8399EA10(ctx, base);
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b68ca0
	if (!cr6.lt) goto loc_82B68CA0;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbz r21,512(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
loc_82B68CA0:
	// add r4,r18,r30
	ctx.r4.u64 = ctx.r18.u64 + ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B68CAC;
	sub_82D33DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68ce8
	if (cr6.eq) goto loc_82B68CE8;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// addi r4,r23,-28
	ctx.r4.s64 = ctx.r23.s64 + -28;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// li r5,13
	ctx.r5.s64 = 13;
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,100
	ctx.r31.s64 = ctx.r11.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B68CD8;
	sub_8259CC28(ctx, base);
	// clrlwi r5,r21,24
	ctx.r5.u64 = ctx.r21.u32 & 0xFF;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B68CE8;
	sub_82A6A1B8(ctx, base);
loc_82B68CE8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82b68c7c
	if (cr6.lt) goto loc_82B68C7C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314f868
	ctx.lr = 0x82B68CFC;
	sub_8314F868(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83123968
	ctx.lr = 0x82B68D08;
	sub_83123968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82b68d24
	if (cr6.lt) goto loc_82B68D24;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82b68d3c
	goto loc_82B68D3C;
loc_82B68D24:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,1209
	ctx.r10.s64 = ctx.r11.s64 + 1209;
	// lbz r10,1211(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1211);
	// lbz r9,1212(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1212);
	// lbz r11,1213(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1213);
loc_82B68D3C:
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,372(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f3,f6,f27
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f5,f8,f27
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f4,f7,f27
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bne cr6,0x82b68e38
	if (!cr6.eq) goto loc_82B68E38;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82B68DB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68dc8
	if (cr6.eq) goto loc_82B68DC8;
	// addi r4,r23,-12
	ctx.r4.s64 = ctx.r23.s64 + -12;
	// bl 0x83815d38
	ctx.lr = 0x82B68DC4;
	sub_83815D38(ctx, base);
	// b 0x82b68dcc
	goto loc_82B68DCC;
loc_82B68DC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82B68DCC:
	// stw r3,372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 372, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68e8c
	if (cr6.eq) goto loc_82B68E8C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r28,r27,376
	ctx.r28.s64 = ctx.r27.s64 + 376;
	// bl 0x83815b28
	ctx.lr = 0x82B68DE4;
	sub_83815B28(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r3,376(r27)
	PPC_STORE_U32(ctx.r27.u32 + 376, ctx.r3.u32);
	// addi r29,r27,376
	ctx.r29.s64 = ctx.r27.s64 + 376;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// li r31,3
	ctx.r31.s64 = 3;
loc_82B68DF8:
	// lfsu f1,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// lwz r3,372(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// bl 0x83815b68
	ctx.lr = 0x82B68E04;
	sub_83815B68(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x82b68df8
	if (!cr0.eq) goto loc_82B68DF8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82B68E18:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b68e8c
	if (cr6.eq) goto loc_82B68E8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82b68e18
	if (cr6.lt) goto loc_82B68E18;
	// b 0x82b68e90
	goto loc_82B68E90;
loc_82B68E38:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,376(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 376);
	// bl 0x83815bc8
	ctx.lr = 0x82B68E44;
	sub_83815BC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82b68e50
	if (!cr6.lt) goto loc_82B68E50;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82B68E50:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// addi r31,r1,104
	ctx.r31.s64 = ctx.r1.s64 + 104;
	// addi r30,r27,380
	ctx.r30.s64 = ctx.r27.s64 + 380;
loc_82B68E5C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,372(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// bl 0x83815be8
	ctx.lr = 0x82B68E6C;
	sub_83815BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82b68e8c
	if (cr6.lt) goto loc_82B68E8C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82b68e5c
	if (cr6.lt) goto loc_82B68E5C;
	// b 0x82b68e90
	goto loc_82B68E90;
loc_82B68E8C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82B68E90:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b68eb8
	if (!cr6.eq) goto loc_82B68EB8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B68EA4;
	sub_82D19A68(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68eb8
	if (cr6.eq) goto loc_82B68EB8;
	// lwz r4,372(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// bl 0x838153c8
	ctx.lr = 0x82B68EB8;
	sub_838153C8(ctx, base);
loc_82B68EB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x8399edb0
	ctx.lr = 0x82B68ECC;
	sub_8399EDB0(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82B68ED4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82b68ef0
	if (!cr6.lt) goto loc_82B68EF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,203
	ctx.r11.s64 = ctx.r1.s64 + 203;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b68ef4
	goto loc_82B68EF4;
loc_82B68EF0:
	// addi r11,r1,203
	ctx.r11.s64 = ctx.r1.s64 + 203;
loc_82B68EF4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fmuls f30,f9,f28
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f10,f29
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// bne cr6,0x82b68fcc
	if (!cr6.eq) goto loc_82B68FCC;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82B68F44;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b68f58
	if (cr6.eq) goto loc_82B68F58;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83815d38
	ctx.lr = 0x82B68F54;
	sub_83815D38(ctx, base);
	// b 0x82b68f5c
	goto loc_82B68F5C;
loc_82B68F58:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82B68F5C:
	// stw r3,392(r27)
	PPC_STORE_U32(ctx.r27.u32 + 392, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b68f70
	if (!cr6.eq) goto loc_82B68F70;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82b68fac
	goto loc_82B68FAC;
loc_82B68F70:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83815b28
	ctx.lr = 0x82B68F78;
	sub_83815B28(ctx, base);
	// stw r3,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// bl 0x83815b28
	ctx.lr = 0x82B68F88;
	sub_83815B28(ctx, base);
	// stw r3,400(r27)
	PPC_STORE_U32(ctx.r27.u32 + 400, ctx.r3.u32);
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B68F98;
	sub_83815B68(ctx, base);
	// stw r3,404(r27)
	PPC_STORE_U32(ctx.r27.u32 + 404, ctx.r3.u32);
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x83815b68
	ctx.lr = 0x82B68FA8;
	sub_83815B68(ctx, base);
	// stw r3,408(r27)
	PPC_STORE_U32(ctx.r27.u32 + 408, ctx.r3.u32);
loc_82B68FAC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B68FB4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b69034
	if (cr6.eq) goto loc_82B69034;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82b68fb4
	if (cr6.lt) goto loc_82B68FB4;
	// b 0x82b69038
	goto loc_82B69038;
loc_82B68FCC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x83815bc8
	ctx.lr = 0x82B68FD8;
	sub_83815BC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82b68fe4
	if (!cr6.lt) goto loc_82B68FE4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B68FE4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,400(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 400);
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// bl 0x83815bc8
	ctx.lr = 0x82B68FF4;
	sub_83815BC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82b69000
	if (!cr6.lt) goto loc_82B69000;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B69000:
	// lwz r4,404(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 404);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// bl 0x83815be8
	ctx.lr = 0x82B69010;
	sub_83815BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82b6901c
	if (!cr6.lt) goto loc_82B6901C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B6901C:
	// lwz r4,408(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 408);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,392(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// bl 0x83815be8
	ctx.lr = 0x82B6902C;
	sub_83815BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82b69038
	if (!cr6.lt) goto loc_82B69038;
loc_82B69034:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B69038:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b69060
	if (!cr6.eq) goto loc_82B69060;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6904C;
	sub_82D19A68(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69060
	if (cr6.eq) goto loc_82B69060;
	// lwz r4,392(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// bl 0x838153c8
	ctx.lr = 0x82B69060;
	sub_838153C8(ctx, base);
loc_82B69060:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82b68ed4
	if (cr6.lt) goto loc_82B68ED4;
	// addi r19,r19,532
	ctx.r19.s64 = ctx.r19.s64 + 532;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r18,r18,11
	ctx.r18.s64 = ctx.r18.s64 + 11;
	// cmplwi cr6,r19,1064
	cr6.compare<uint32_t>(ctx.r19.u32, 1064, xer);
	// blt cr6,0x82b68c2c
	if (cr6.lt) goto loc_82B68C2C;
loc_82B69084:
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c0
	ctx.lr = 0x82B69090;
	__restfpr_27(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69094"))) PPC_WEAK_FUNC(sub_82B69094);
PPC_FUNC_IMPL(__imp__sub_82B69094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69098"))) PPC_WEAK_FUNC(sub_82B69098);
PPC_FUNC_IMPL(__imp__sub_82B69098) {
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
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b69144
	if (!cr6.lt) goto loc_82B69144;
	// bl 0x82d19a78
	ctx.lr = 0x82B690BC;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69144
	if (cr6.eq) goto loc_82B69144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r10,8028
	ctx.r8.s64 = ctx.r10.s64 + 8028;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B690EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b6913c
	if (cr6.lt) goto loc_82B6913C;
	// beq cr6,0x82b69120
	if (cr6.eq) goto loc_82B69120;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b69144
	if (!cr6.lt) goto loc_82B69144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68b68
	ctx.lr = 0x82B6910C;
	sub_82B68B68(ctx, base);
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
loc_82B69120:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
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
loc_82B6913C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68580
	ctx.lr = 0x82B69144;
	sub_82B68580(ctx, base);
loc_82B69144:
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

__attribute__((alias("__imp__sub_82B69158"))) PPC_WEAK_FUNC(sub_82B69158);
PPC_FUNC_IMPL(__imp__sub_82B69158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B69160;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6916C;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69190
	if (cr6.eq) goto loc_82B69190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,7516(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7516);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B69190;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B69190:
	// lbz r11,203(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 203);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6928c
	if (!cr6.eq) goto loc_82B6928C;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r24,r29,210
	ctx.r24.s64 = ctx.r29.s64 + 210;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r29,r29,212
	ctx.r29.s64 = ctx.r29.s64 + 212;
	// ori r23,r11,14904
	ctx.r23.u64 = ctx.r11.u64 | 14904;
	// li r28,2
	ctx.r28.s64 = 2;
	// lis r22,-31777
	ctx.r22.s64 = -2082537472;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r25,15
	ctx.r25.s64 = 15;
loc_82B691CC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// ble cr6,0x82b691dc
	if (!cr6.gt) goto loc_82B691DC;
	// lwz r11,7648(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 7648);
	// b 0x82b691fc
	goto loc_82B691FC;
loc_82B691DC:
	// bl 0x831156e8
	ctx.lr = 0x82B691E0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + ctx.r23.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B691F8;
	sub_831239E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B691FC:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r31.u8);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stb r31,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r31.u8);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// sth r27,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r27.u16);
	// stb r31,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r31.u8);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// bl 0x82b34ac8
	ctx.lr = 0x82B6922C;
	sub_82B34AC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d41e60
	ctx.lr = 0x82B6923C;
	sub_82D41E60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B69250;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6926c
	if (cr6.lt) goto loc_82B6926C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B6926C;
	sub_825952B8(ctx, base);
loc_82B6926C:
	// stbx r31,r24,r30
	PPC_STORE_U8(ctx.r24.u32 + ctx.r30.u32, ctx.r31.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82b691cc
	if (cr6.lt) goto loc_82B691CC;
loc_82B6928C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69294"))) PPC_WEAK_FUNC(sub_82B69294);
PPC_FUNC_IMPL(__imp__sub_82B69294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69298"))) PPC_WEAK_FUNC(sub_82B69298);
PPC_FUNC_IMPL(__imp__sub_82B69298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B692A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B692B0;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69478
	if (cr6.eq) goto loc_82B69478;
	// lwz r10,368(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// addi r30,r11,7500
	ctx.r30.s64 = ctx.r11.s64 + 7500;
	// bne cr6,0x82b692f4
	if (!cr6.eq) goto loc_82B692F4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B692E0;
	sub_837B0C10(ctx, base);
	// lis r5,38
	ctx.r5.s64 = 2490368;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// bl 0x82a69a28
	ctx.lr = 0x82B692F4;
	sub_82A69A28(ctx, base);
loc_82B692F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82d2f098
	ctx.lr = 0x82B69300;
	sub_82D2F098(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6931C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,-4416
	ctx.r4.s64 = -4416;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x83545640
	ctx.lr = 0x82B69328;
	sub_83545640(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6932C;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r27,r9,5
	ctx.r27.s64 = ctx.r9.s64 + 327680;
	// addi r27,r27,14904
	ctx.r27.s64 = ctx.r27.s64 + 14904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831238a0
	ctx.lr = 0x82B69340;
	sub_831238A0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r3,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r6,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// subfe r11,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// addi r9,r4,8052
	ctx.r9.s64 = ctx.r4.s64 + 8052;
	// and r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 & ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82B69380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x82B69388;
	sub_824CE1D8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r3,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r4,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// subfe r9,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r8,72(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// addi r7,r10,8040
	ctx.r7.s64 = ctx.r10.s64 + 8040;
	// and r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 & ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x82B693C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B693E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,184(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// li r8,36
	ctx.r8.s64 = 36;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r8.s32);
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, xer);
	// bgt cr6,0x82b6940c
	if (cr6.gt) goto loc_82B6940C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6940C;
	sub_831CC188(ctx, base);
loc_82B6940C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// add r7,r28,r10
	ctx.r7.u64 = ctx.r28.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B69444;
	sub_8259CB28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B69458;
	sub_82D291E0(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82b69478
	if (cr6.lt) goto loc_82B69478;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B69478;
	sub_825952B8(ctx, base);
loc_82B69478:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69480"))) PPC_WEAK_FUNC(sub_82B69480);
PPC_FUNC_IMPL(__imp__sub_82B69480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82B69488;
	__savegprlr_18(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82b677c8
	ctx.lr = 0x82B69494;
	sub_82B677C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B69498;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r31,r10,5
	ctx.r31.s64 = ctx.r10.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83123918
	ctx.lr = 0x82B694B4;
	sub_83123918(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82B694BC;
	sub_830FF290(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r9,68
	cr6.compare<uint32_t>(ctx.r9.u32, 68, xer);
	// beq cr6,0x82b694d0
	if (cr6.eq) goto loc_82B694D0;
	// bl 0x8314ee28
	ctx.lr = 0x82B694CC;
	sub_8314EE28(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
loc_82B694D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123888
	ctx.lr = 0x82B694D8;
	sub_83123888(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f910
	ctx.lr = 0x82B694E4;
	sub_8253F910(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ce1d8
	ctx.lr = 0x82B694F0;
	sub_824CE1D8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a0
	ctx.lr = 0x82B694FC;
	sub_831238A0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x82B69508;
	sub_8395B0F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238b0
	ctx.lr = 0x82B69510;
	sub_831238B0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82B6951C;
	sub_8353C978(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B69528;
	sub_83A76F48(ctx, base);
	// clrlwi r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	// lwz r30,180(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r28,-253
	ctx.r11.s64 = ctx.r28.s64 + -253;
	// lwz r10,184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stb r7,259(r1)
	PPC_STORE_U8(ctx.r1.u32 + 259, ctx.r7.u8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b695a0
	if (cr6.eq) goto loc_82B695A0;
loc_82B69568:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,253
	cr6.compare<uint32_t>(ctx.r11.u32, 253, xer);
	// beq cr6,0x82b69588
	if (cr6.eq) goto loc_82B69588;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(ctx.r11.u32, 254, xer);
	// beq cr6,0x82b69588
	if (cr6.eq) goto loc_82B69588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B69588;
	sub_835977D8(ctx, base);
loc_82B69588:
	// lwz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b69568
	if (!cr6.eq) goto loc_82B69568;
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B695A0:
	// subf r11,r25,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r25.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b695cc
	if (!cr6.eq) goto loc_82B695CC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B695C4;
	sub_835977D8(ctx, base);
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B695CC:
	// cmplwi cr6,r28,253
	cr6.compare<uint32_t>(ctx.r28.u32, 253, xer);
	// bne cr6,0x82b69608
	if (!cr6.eq) goto loc_82B69608;
	// bl 0x831156e8
	ctx.lr = 0x82B695D8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x831239e0
	ctx.lr = 0x82B695F0;
	sub_831239E0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82B69600;
	sub_8311C148(ctx, base);
	// lbz r29,790(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 790);
	// b 0x82b69670
	goto loc_82B69670;
loc_82B69608:
	// cmplwi cr6,r28,254
	cr6.compare<uint32_t>(ctx.r28.u32, 254, xer);
	// bne cr6,0x82b69670
	if (!cr6.eq) goto loc_82B69670;
	// lbz r11,205(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b69660
	if (cr6.eq) goto loc_82B69660;
	// subf r11,r25,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// srawi r30,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	// bl 0x82a672c8
	ctx.lr = 0x82B6962C;
	sub_82A672C8(ctx, base);
	// divwu r10,r3,r30
	ctx.r10.u32 = PPCDivide(ctx.r3.u32, ctx.r30.u32);
	// twllei r30,0
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b69650
	if (cr6.gt) goto loc_82B69650;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B69650;
	sub_831CC188(ctx, base);
loc_82B69650:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// b 0x82b69670
	goto loc_82B69670;
loc_82B69660:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82f04858
	ctx.lr = 0x82B69668;
	sub_82F04858(ctx, base);
	// bl 0x82f04b48
	ctx.lr = 0x82B6966C;
	sub_82F04B48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82B69670:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82b696e8
	if (!cr6.eq) goto loc_82B696E8;
	// bl 0x830ff290
	ctx.lr = 0x82B69684;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B69688;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B69690;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B69694;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b696a8
	if (cr6.eq) goto loc_82B696A8;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b696ac
	if (!cr6.eq) goto loc_82B696AC;
loc_82B696A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B696AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b696c0
	if (!cr6.eq) goto loc_82B696C0;
	// cmplwi cr6,r30,26
	cr6.compare<uint32_t>(ctx.r30.u32, 26, xer);
	// bne cr6,0x82b696c4
	if (!cr6.eq) goto loc_82B696C4;
loc_82B696C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B696C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b696e8
	if (!cr6.eq) goto loc_82B696E8;
	// bl 0x8314ee28
	ctx.lr = 0x82B696D4;
	sub_8314EE28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82b696e4
	if (cr6.eq) goto loc_82B696E4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82b696e8
	if (!cr6.eq) goto loc_82B696E8;
loc_82B696E4:
	// li r29,31
	ctx.r29.s64 = 31;
loc_82B696E8:
	// lbz r11,205(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 205);
	// clrlwi r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6972c
	if (cr6.eq) goto loc_82B6972C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// beq cr6,0x82b69744
	if (cr6.eq) goto loc_82B69744;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
loc_82B69708:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b69724
	if (cr6.eq) goto loc_82B69724;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b69708
	if (!cr6.eq) goto loc_82B69708;
	// b 0x82b69744
	goto loc_82B69744;
loc_82B69724:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// b 0x82b69740
	goto loc_82B69740;
loc_82B6972C:
	// bl 0x831156e8
	ctx.lr = 0x82B69730;
	sub_831156E8(ctx, base);
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c448
	ctx.lr = 0x82B6973C;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
loc_82B69740:
	// bne cr6,0x82b69748
	if (!cr6.eq) goto loc_82B69748;
loc_82B69744:
	// li r28,29
	ctx.r28.s64 = 29;
loc_82B69748:
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(ctx.r19.s32, 2, xer);
	// blt cr6,0x82b69768
	if (cr6.lt) goto loc_82B69768;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82a672c8
	ctx.lr = 0x82B69758;
	sub_82A672C8(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r9,r3
	ctx.r19.s64 = ctx.r3.s64 - ctx.r9.s64;
loc_82B69768:
	// bl 0x830ff290
	ctx.lr = 0x82B6976C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,21
	cr6.compare<uint32_t>(ctx.r11.u32, 21, xer);
	// beq cr6,0x82b69794
	if (cr6.eq) goto loc_82B69794;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x82b69794
	if (cr6.eq) goto loc_82B69794;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82b69794
	if (cr6.eq) goto loc_82B69794;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b69798
	if (!cr6.eq) goto loc_82B69798;
loc_82B69794:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B69798:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b697e8
	if (!cr6.eq) goto loc_82B697E8;
	// bl 0x830ff290
	ctx.lr = 0x82B697A8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// beq cr6,0x82b697d8
	if (cr6.eq) goto loc_82B697D8;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82b697d8
	if (cr6.eq) goto loc_82B697D8;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// beq cr6,0x82b697d8
	if (cr6.eq) goto loc_82B697D8;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// beq cr6,0x82b697d8
	if (cr6.eq) goto loc_82B697D8;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b697dc
	if (!cr6.eq) goto loc_82B697DC;
loc_82B697D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B697DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b697f0
	if (cr6.eq) goto loc_82B697F0;
loc_82B697E8:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82b69810
	goto loc_82B69810;
loc_82B697F0:
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(ctx.r21.s32, 2, xer);
	// blt cr6,0x82b69810
	if (cr6.lt) goto loc_82B69810;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82a672c8
	ctx.lr = 0x82B69800;
	sub_82A672C8(ctx, base);
	// srawi r11,r3,1
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r21,r9,r3
	ctx.r21.s64 = ctx.r3.s64 - ctx.r9.s64;
loc_82B69810:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// ori r30,r10,21846
	ctx.r30.u64 = ctx.r10.u64 | 21846;
	// beq cr6,0x82b698ac
	if (cr6.eq) goto loc_82B698AC;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82b698ac
	if (cr6.eq) goto loc_82B698AC;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x82b698b0
	if (cr6.eq) goto loc_82B698B0;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// bne cr6,0x82b69848
	if (!cr6.eq) goto loc_82B69848;
	// li r29,2
	ctx.r29.s64 = 2;
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x82b698dc
	goto loc_82B698DC;
loc_82B69848:
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82a672c8
	ctx.lr = 0x82B69850;
	sub_82A672C8(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// mulhw r9,r3,r10
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r7,r8,100
	ctx.r7.s64 = ctx.r8.s64 * 100;
	// subf r6,r7,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r7.s64;
	// cmplwi cr6,r6,70
	cr6.compare<uint32_t>(ctx.r6.u32, 70, xer);
	// blt cr6,0x82b698ac
	if (cr6.lt) goto loc_82B698AC;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// li r24,1
	ctx.r24.s64 = 1;
	// bl 0x82a672c8
	ctx.lr = 0x82B69884;
	sub_82A672C8(ctx, base);
	// mulhw r11,r3,r30
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r11,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x82b698b4
	if (!cr6.eq) goto loc_82B698B4;
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x82b698dc
	goto loc_82B698DC;
loc_82B698AC:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82B698B0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B698B4:
	// cmpwi cr6,r23,3
	cr6.compare<int32_t>(ctx.r23.s32, 3, xer);
	// blt cr6,0x82b698dc
	if (cr6.lt) goto loc_82B698DC;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82a672c8
	ctx.lr = 0x82B698C4;
	sub_82A672C8(ctx, base);
	// mulhw r11,r3,r30
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r23,r11,r3
	ctx.r23.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82B698DC:
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(ctx.r22.s32, 3, xer);
	// blt cr6,0x82b69904
	if (cr6.lt) goto loc_82B69904;
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82a672c8
	ctx.lr = 0x82B698EC;
	sub_82A672C8(ctx, base);
	// mulhw r11,r3,r30
	ctx.r11.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r22,r11,r3
	ctx.r22.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82B69904:
	// clrlwi r11,r20,16
	ctx.r11.u64 = ctx.r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// bne cr6,0x82b69920
	if (!cr6.eq) goto loc_82B69920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82f047e0
	ctx.lr = 0x82B69918;
	sub_82F047E0(ctx, base);
	// bl 0x82f04a40
	ctx.lr = 0x82B6991C;
	sub_82F04A40(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_82B69920:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82B6992C;
	sub_83123890(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47360
	ctx.lr = 0x82B69938;
	sub_82A47360(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a8
	ctx.lr = 0x82B69944;
	sub_831238A8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82B69950;
	sub_831340B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82df36c8
	ctx.lr = 0x82B6995C;
	sub_82DF36C8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82B69968;
	sub_82583320(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82B69974;
	sub_82583318(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82B69980;
	sub_83123898(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123950
	ctx.lr = 0x82B6998C;
	sub_83123950(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b699a8
	if (cr6.eq) goto loc_82B699A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82B699A8;
	sub_825952B8(ctx, base);
loc_82B699A8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B699B0"))) PPC_WEAK_FUNC(sub_82B699B0);
PPC_FUNC_IMPL(__imp__sub_82B699B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B699B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82b69a20
	if (cr6.eq) goto loc_82B69A20;
loc_82B699E0:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r4,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// srawi r3,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// bge cr6,0x82b69a0c
	if (!cr6.lt) goto loc_82B69A0C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82B69A0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82B69A14;
	sub_83456C38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b699e0
	if (!cr6.eq) goto loc_82B699E0;
loc_82B69A20:
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B69A2C;
	sub_82A8E3A8(ctx, base);
	// lwz r11,608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 608);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82b69acc
	if (cr6.eq) goto loc_82B69ACC;
loc_82B69A48:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b69ab0
	if (cr6.eq) goto loc_82B69AB0;
loc_82B69A54:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b69a88
	if (cr6.eq) goto loc_82B69A88;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82B69A68:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b69a80
	if (cr6.eq) goto loc_82B69A80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b69a68
	if (!cr6.eq) goto loc_82B69A68;
loc_82B69A80:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b69aa4
	if (!cr6.eq) goto loc_82B69AA4;
loc_82B69A88:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r4,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r4.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x82B69AA0;
	sub_831CE420(ctx, base);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82B69AA4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b69a54
	if (!cr6.eq) goto loc_82B69A54;
loc_82B69AB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82B69AB8;
	sub_83456C38(ctx, base);
	// lwz r11,608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 608);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b69a48
	if (!cr6.eq) goto loc_82B69A48;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_82B69ACC:
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b69af4
	if (!cr6.eq) goto loc_82B69AF4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B69AF0;
	sub_835977D8(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B69AF4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a120f0
	ctx.lr = 0x82B69B00;
	sub_82A120F0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b69b1c
	if (cr6.eq) goto loc_82B69B1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B69B1C;
	sub_825952B8(ctx, base);
loc_82B69B1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69B24"))) PPC_WEAK_FUNC(sub_82B69B24);
PPC_FUNC_IMPL(__imp__sub_82B69B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69B28"))) PPC_WEAK_FUNC(sub_82B69B28);
PPC_FUNC_IMPL(__imp__sub_82B69B28) {
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
	// bge cr6,0x82b69b60
	if (!cr6.lt) goto loc_82B69B60;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b69b64
	if (!cr6.gt) goto loc_82B69B64;
loc_82B69B60:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B69B64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b69bb4
	if (cr6.eq) goto loc_82B69BB4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,56
	ctx.r9.s64 = 56;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b69b98
	if (!cr6.eq) goto loc_82B69B98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68120
	ctx.lr = 0x82B69B98;
	sub_82B68120(ctx, base);
loc_82B69B98:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69be0
	if (cr6.eq) goto loc_82B69BE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 * 56;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b69bdc
	goto loc_82B69BDC;
loc_82B69BB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b69bcc
	if (!cr6.eq) goto loc_82B69BCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68120
	ctx.lr = 0x82B69BCC;
	sub_82B68120(ctx, base);
loc_82B69BCC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b69be0
	if (cr6.eq) goto loc_82B69BE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B69BDC:
	// bl 0x82b65738
	ctx.lr = 0x82B69BE0;
	sub_82B65738(ctx, base);
loc_82B69BE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
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

__attribute__((alias("__imp__sub_82B69C04"))) PPC_WEAK_FUNC(sub_82B69C04);
PPC_FUNC_IMPL(__imp__sub_82B69C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69C08"))) PPC_WEAK_FUNC(sub_82B69C08);
PPC_FUNC_IMPL(__imp__sub_82B69C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B69C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b69c64
	if (cr6.eq) goto loc_82B69C64;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82B69C2C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B69C4C;
	sub_8259CB28(ctx, base);
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// stb r9,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r9.u8);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne cr6,0x82b69c2c
	if (!cr6.eq) goto loc_82B69C2C;
loc_82B69C64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69C70"))) PPC_WEAK_FUNC(sub_82B69C70);
PPC_FUNC_IMPL(__imp__sub_82B69C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B69C78;
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
	// beq cr6,0x82b69cdc
	if (cr6.eq) goto loc_82B69CDC;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82B69C94:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B69CA8;
	sub_8259CB28(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r9.u32);
	// lbz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// stb r8,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r8.u8);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r7,r31,-32
	ctx.r7.s64 = ctx.r31.s64 + -32;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b69c94
	if (!cr6.eq) goto loc_82B69C94;
loc_82B69CDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69CE8"))) PPC_WEAK_FUNC(sub_82B69CE8);
PPC_FUNC_IMPL(__imp__sub_82B69CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B69CF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b69d68
	if (cr6.eq) goto loc_82B69D68;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r5,4
	ctx.r31.s64 = ctx.r5.s64 + 4;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82B69D18:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b69d54
	if (cr6.eq) goto loc_82B69D54;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82B69D4C;
	sub_8259CB28(ctx, base);
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
loc_82B69D54:
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b69d18
	if (!cr6.eq) goto loc_82B69D18;
loc_82B69D68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69D74"))) PPC_WEAK_FUNC(sub_82B69D74);
PPC_FUNC_IMPL(__imp__sub_82B69D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69D78"))) PPC_WEAK_FUNC(sub_82B69D78);
PPC_FUNC_IMPL(__imp__sub_82B69D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r6,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r6.u32);
	// b 0x82b69098
	sub_82B69098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69DA4"))) PPC_WEAK_FUNC(sub_82B69DA4);
PPC_FUNC_IMPL(__imp__sub_82B69DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69DA8"))) PPC_WEAK_FUNC(sub_82B69DA8);
PPC_FUNC_IMPL(__imp__sub_82B69DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r6,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r6.u32);
	// b 0x82b69098
	sub_82B69098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B69DD4"))) PPC_WEAK_FUNC(sub_82B69DD4);
PPC_FUNC_IMPL(__imp__sub_82B69DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B69DD8"))) PPC_WEAK_FUNC(sub_82B69DD8);
PPC_FUNC_IMPL(__imp__sub_82B69DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B69DE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B69DEC;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B69DF0;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lbz r10,205(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 205);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r28,r11,14904
	ctx.r28.u64 = ctx.r11.u64 | 14904;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 + ctx.r28.u64;
	// beq cr6,0x82b69eb4
	if (cr6.eq) goto loc_82B69EB4;
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// bl 0x831ce980
	ctx.lr = 0x82B69E24;
	sub_831CE980(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123890
	ctx.lr = 0x82B69E34;
	sub_83123890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82a47360
	ctx.lr = 0x82B69E40;
	sub_82A47360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x831340b8
	ctx.lr = 0x82B69E4C;
	sub_831340B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82df36c8
	ctx.lr = 0x82B69E58;
	sub_82DF36C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x831238a8
	ctx.lr = 0x82B69E64;
	sub_831238A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82583318
	ctx.lr = 0x82B69E70;
	sub_82583318(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82583320
	ctx.lr = 0x82B69E7C;
	sub_82583320(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83123898
	ctx.lr = 0x82B69E8C;
	sub_83123898(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
loc_82B69E94:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123900
	ctx.lr = 0x82B69EA4;
	sub_83123900(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82b69e94
	if (cr6.lt) goto loc_82B69E94;
	// b 0x82b69fb8
	goto loc_82B69FB8;
loc_82B69EB4:
	// lbz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b69ecc
	if (cr6.eq) goto loc_82B69ECC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b64fb8
	ctx.lr = 0x82B69EC8;
	sub_82B64FB8(ctx, base);
	// b 0x82b69fb0
	goto loc_82B69FB0;
loc_82B69ECC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83123918
	ctx.lr = 0x82B69ED8;
	sub_83123918(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b64fb8
	ctx.lr = 0x82B69EE0;
	sub_82B64FB8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B69EE4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B69EE8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82b69f08
	if (cr6.eq) goto loc_82B69F08;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82b69f08
	if (cr6.eq) goto loc_82B69F08;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82b69f08
	if (cr6.eq) goto loc_82B69F08;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b69f6c
	if (!cr6.eq) goto loc_82B69F6C;
loc_82B69F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82B69F10;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82b69f28
	if (!cr6.eq) goto loc_82B69F28;
	// bl 0x82a672c8
	ctx.lr = 0x82B69F1C;
	sub_82A672C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82B69F28;
	sub_82583318(ctx, base);
loc_82B69F28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238b0
	ctx.lr = 0x82B69F30;
	sub_831238B0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82b69f48
	if (!cr6.eq) goto loc_82B69F48;
	// bl 0x82a672c8
	ctx.lr = 0x82B69F3C;
	sub_82A672C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82B69F48;
	sub_82583320(ctx, base);
loc_82B69F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82B69F50;
	sub_8353C978(ctx, base);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238b0
	ctx.lr = 0x82B69F5C;
	sub_831238B0(ctx, base);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123950
	ctx.lr = 0x82B69F6C;
	sub_83123950(ctx, base);
loc_82B69F6C:
	// bl 0x830ff290
	ctx.lr = 0x82B69F70;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// beq cr6,0x82b69f8c
	if (cr6.eq) goto loc_82B69F8C;
	// bl 0x82b64cc0
	ctx.lr = 0x82B69F80;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6a180
	if (cr6.eq) goto loc_82B6A180;
loc_82B69F8C:
	// bl 0x831156e8
	ctx.lr = 0x82B69F90;
	sub_831156E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ori r9,r11,24332
	ctx.r9.u64 = ctx.r11.u64 | 24332;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r27,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u8);
	// bl 0x83129790
	ctx.lr = 0x82B69FB0;
	sub_83129790(ctx, base);
loc_82B69FB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b69480
	ctx.lr = 0x82B69FB8;
	sub_82B69480(ctx, base);
loc_82B69FB8:
	// bl 0x831156e8
	ctx.lr = 0x82B69FBC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B69FD4;
	sub_831239E0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B69FE0;
	sub_831156E8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// add r4,r7,r28
	ctx.r4.u64 = ctx.r7.u64 + ctx.r28.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B69FF8;
	sub_831239E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// bl 0x83123888
	ctx.lr = 0x82B6A00C;
	sub_83123888(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x824ce1d8
	ctx.lr = 0x82B6A01C;
	sub_824CE1D8(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f910
	ctx.lr = 0x82B6A028;
	sub_8253F910(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a0
	ctx.lr = 0x82B6A034;
	sub_831238A0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8395b0f8
	ctx.lr = 0x82B6A040;
	sub_8395B0F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82B6A048;
	sub_8353C978(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238b0
	ctx.lr = 0x82B6A054;
	sub_831238B0(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B6A060;
	sub_83A76F48(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B6A064;
	sub_830FF290(ctx, base);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x830ff290
	ctx.lr = 0x82B6A06C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6A070;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82b6a094
	if (cr6.eq) goto loc_82B6A094;
	// cmplwi cr6,r31,54
	cr6.compare<uint32_t>(ctx.r31.u32, 54, xer);
	// beq cr6,0x82b6a094
	if (cr6.eq) goto loc_82B6A094;
	// cmplwi cr6,r31,55
	cr6.compare<uint32_t>(ctx.r31.u32, 55, xer);
	// beq cr6,0x82b6a094
	if (cr6.eq) goto loc_82B6A094;
	// cmplwi cr6,r31,56
	cr6.compare<uint32_t>(ctx.r31.u32, 56, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b6a098
	if (!cr6.eq) goto loc_82B6A098;
loc_82B6A094:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6A098:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6a0b8
	if (cr6.eq) goto loc_82B6A0B8;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82db3df8
	ctx.lr = 0x82B6A0B0;
	sub_82DB3DF8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B6A0B8:
	// bl 0x82d8a820
	ctx.lr = 0x82B6A0BC;
	sub_82D8A820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6a130
	if (!cr6.eq) goto loc_82B6A130;
	// bl 0x82d8a900
	ctx.lr = 0x82B6A0CC;
	sub_82D8A900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6a130
	if (!cr6.eq) goto loc_82B6A130;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x83154470
	ctx.lr = 0x82B6A128;
	sub_83154470(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B6A130:
	// bl 0x82d8ab68
	ctx.lr = 0x82B6A134;
	sub_82D8AB68(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x83154470
	ctx.lr = 0x82B6A180;
	sub_83154470(ctx, base);
loc_82B6A180:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A188"))) PPC_WEAK_FUNC(sub_82B6A188);
PPC_FUNC_IMPL(__imp__sub_82B6A188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6A190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6a1bc
	if (!cr6.eq) goto loc_82B6A1BC;
	// lwz r4,164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// bl 0x82b69298
	ctx.lr = 0x82B6A1AC;
	sub_82B69298(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b672c0
	ctx.lr = 0x82B6A1B4;
	sub_82B672C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
loc_82B6A1BC:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b6a1e8
	if (!cr6.eq) goto loc_82B6A1E8;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b6a1e8
	if (cr6.eq) goto loc_82B6A1E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b66638
	ctx.lr = 0x82B6A1E0;
	sub_82B66638(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6A1E8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b6a294
	if (cr6.lt) goto loc_82B6A294;
	// beq cr6,0x82b6a270
	if (cr6.eq) goto loc_82B6A270;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b6a2b4
	if (!cr6.lt) goto loc_82B6A2B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B6A204;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6a2b4
	if (cr6.eq) goto loc_82B6A2B4;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// addi r11,r30,7492
	ctx.r11.s64 = ctx.r30.s64 + 7492;
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d2f098
	ctx.lr = 0x82B6A21C;
	sub_82D2F098(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,7492(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7492);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6A238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bdf720
	ctx.lr = 0x82B6A248;
	sub_82BDF720(ctx, base);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B6A260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6A270:
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x82bdf6a0
	ctx.lr = 0x82B6A278;
	sub_82BDF6A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6a2b4
	if (cr6.eq) goto loc_82B6A2B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6A294:
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// bl 0x82be0218
	ctx.lr = 0x82B6A2A0;
	sub_82BE0218(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6a2b4
	if (cr6.eq) goto loc_82B6A2B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_82B6A2B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A2BC"))) PPC_WEAK_FUNC(sub_82B6A2BC);
PPC_FUNC_IMPL(__imp__sub_82B6A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A2C0"))) PPC_WEAK_FUNC(sub_82B6A2C0);
PPC_FUNC_IMPL(__imp__sub_82B6A2C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6A2C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B6A2EC;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r10.u8);
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// beq 0x82b6a330
	if (cr0.eq) goto loc_82B6A330;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a8e3a8
	ctx.lr = 0x82B6A330;
	sub_82A8E3A8(ctx, base);
loc_82B6A330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A33C"))) PPC_WEAK_FUNC(sub_82B6A33C);
PPC_FUNC_IMPL(__imp__sub_82B6A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A340"))) PPC_WEAK_FUNC(sub_82B6A340);
PPC_FUNC_IMPL(__imp__sub_82B6A340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6A348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 360);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6a394
	if (!cr6.eq) goto loc_82B6A394;
	// lwz r3,312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6a38c
	if (cr6.eq) goto loc_82B6A38C;
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b6a38c
	if (!cr6.eq) goto loc_82B6A38C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6A388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r29.u32);
loc_82B6A38C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r11.u8);
loc_82B6A394:
	// bl 0x831156e8
	ctx.lr = 0x82B6A398;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 393216;
	// addi r30,r30,-28082
	ctx.r30.s64 = ctx.r30.s64 + -28082;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// lbz r8,201(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// bne cr6,0x82b6a414
	if (!cr6.eq) goto loc_82B6A414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b69dd8
	ctx.lr = 0x82B6A3C4;
	sub_82B69DD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65f90
	ctx.lr = 0x82B6A3CC;
	sub_82B65F90(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6A3D0;
	sub_831156E8(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6a3e4
	if (cr6.eq) goto loc_82B6A3E4;
	// bl 0x831156e8
	ctx.lr = 0x82B6A3E0;
	sub_831156E8(ctx, base);
	// bl 0x83115b80
	ctx.lr = 0x82B6A3E4;
	sub_83115B80(ctx, base);
loc_82B6A3E4:
	// bl 0x82b64cc0
	ctx.lr = 0x82B6A3E8;
	sub_82B64CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6a464
	if (!cr6.eq) goto loc_82B6A464;
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6a464
	if (!cr6.eq) goto loc_82B6A464;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,15392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15392);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// b 0x82b6a464
	goto loc_82B6A464;
loc_82B6A414:
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6a428
	if (!cr6.eq) goto loc_82B6A428;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b677c8
	ctx.lr = 0x82B6A428;
	sub_82B677C8(ctx, base);
loc_82B6A428:
	// bl 0x839a04b8
	ctx.lr = 0x82B6A42C;
	sub_839A04B8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6A430;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82b65698
	ctx.lr = 0x82B6A438;
	sub_82B65698(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82b6a460
	if (cr6.eq) goto loc_82B6A460;
	// bl 0x831156e8
	ctx.lr = 0x82B6A448;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123890
	ctx.lr = 0x82B6A460;
	sub_83123890(ctx, base);
loc_82B6A460:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
loc_82B6A464:
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b6a474
	if (!cr6.eq) goto loc_82B6A474;
	// bl 0x833ca308
	ctx.lr = 0x82B6A474;
	sub_833CA308(ctx, base);
loc_82B6A474:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A480"))) PPC_WEAK_FUNC(sub_82B6A480);
PPC_FUNC_IMPL(__imp__sub_82B6A480) {
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
	// bl 0x82b6a188
	ctx.lr = 0x82B6A498;
	sub_82B6A188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b66cb0
	ctx.lr = 0x82B6A4A0;
	sub_82B66CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b663d0
	ctx.lr = 0x82B6A4A8;
	sub_82B663D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b67e78
	ctx.lr = 0x82B6A4B0;
	sub_82B67E78(ctx, base);
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

__attribute__((alias("__imp__sub_82B6A4C4"))) PPC_WEAK_FUNC(sub_82B6A4C4);
PPC_FUNC_IMPL(__imp__sub_82B6A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A4C8"))) PPC_WEAK_FUNC(sub_82B6A4C8);
PPC_FUNC_IMPL(__imp__sub_82B6A4C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82b6a2c0
	ctx.lr = 0x82B6A4F0;
	sub_82B6A2C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82c1e3f0
	ctx.lr = 0x82B6A504;
	sub_82C1E3F0(ctx, base);
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

__attribute__((alias("__imp__sub_82B6A520"))) PPC_WEAK_FUNC(sub_82B6A520);
PPC_FUNC_IMPL(__imp__sub_82B6A520) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// addi r10,r11,25556
	ctx.r10.s64 = ctx.r11.s64 + 25556;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82535aa0
	ctx.lr = 0x82B6A550;
	sub_82535AA0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82545e60
	ctx.lr = 0x82B6A558;
	sub_82545E60(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82450e18
	ctx.lr = 0x82B6A560;
	sub_82450E18(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6a578
	if (cr6.eq) goto loc_82B6A578;
	// bl 0x82416268
	ctx.lr = 0x82B6A574;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6A578:
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

__attribute__((alias("__imp__sub_82B6A590"))) PPC_WEAK_FUNC(sub_82B6A590);
PPC_FUNC_IMPL(__imp__sub_82B6A590) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r8,r11,25580
	ctx.r8.s64 = ctx.r11.s64 + 25580;
	// addi r7,r10,25568
	ctx.r7.s64 = ctx.r10.s64 + 25568;
	// addi r6,r9,17172
	ctx.r6.s64 = ctx.r9.s64 + 17172;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,216
	ctx.r3.s64 = ctx.r3.s64 + 216;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// bl 0x82b66738
	ctx.lr = 0x82B6A5D0;
	sub_82B66738(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r5,25536
	ctx.r4.s64 = ctx.r5.s64 + 25536;
	// stw r4,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r4.u32);
	// bl 0x831cf100
	ctx.lr = 0x82B6A5E4;
	sub_831CF100(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r10,r11,25556
	ctx.r10.s64 = ctx.r11.s64 + 25556;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82535aa0
	ctx.lr = 0x82B6A5F8;
	sub_82535AA0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82545e60
	ctx.lr = 0x82B6A600;
	sub_82545E60(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82450e18
	ctx.lr = 0x82B6A608;
	sub_82450E18(ctx, base);
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

__attribute__((alias("__imp__sub_82B6A61C"))) PPC_WEAK_FUNC(sub_82B6A61C);
PPC_FUNC_IMPL(__imp__sub_82B6A61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A620"))) PPC_WEAK_FUNC(sub_82B6A620);
PPC_FUNC_IMPL(__imp__sub_82B6A620) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b6a630
	sub_82B6A630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A628"))) PPC_WEAK_FUNC(sub_82B6A628);
PPC_FUNC_IMPL(__imp__sub_82B6A628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b6a630
	sub_82B6A630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A630"))) PPC_WEAK_FUNC(sub_82B6A630);
PPC_FUNC_IMPL(__imp__sub_82B6A630) {
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
	// bl 0x82b6a590
	ctx.lr = 0x82B6A650;
	sub_82B6A590(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6a668
	if (cr6.eq) goto loc_82B6A668;
	// bl 0x82416268
	ctx.lr = 0x82B6A664;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6A668:
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

__attribute__((alias("__imp__sub_82B6A680"))) PPC_WEAK_FUNC(sub_82B6A680);
PPC_FUNC_IMPL(__imp__sub_82B6A680) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,25612
	ctx.r8.s64 = ctx.r11.s64 + 25612;
	// addi r7,r10,25600
	ctx.r7.s64 = ctx.r10.s64 + 25600;
	// addi r6,r9,25596
	ctx.r6.s64 = ctx.r9.s64 + 25596;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// bl 0x824238b8
	ctx.lr = 0x82B6A6C0;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B6A6C8;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82B6A6DC"))) PPC_WEAK_FUNC(sub_82B6A6DC);
PPC_FUNC_IMPL(__imp__sub_82B6A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A6E0"))) PPC_WEAK_FUNC(sub_82B6A6E0);
PPC_FUNC_IMPL(__imp__sub_82B6A6E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b6a6f0
	sub_82B6A6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A6E8"))) PPC_WEAK_FUNC(sub_82B6A6E8);
PPC_FUNC_IMPL(__imp__sub_82B6A6E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b6a6f0
	sub_82B6A6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A6F0"))) PPC_WEAK_FUNC(sub_82B6A6F0);
PPC_FUNC_IMPL(__imp__sub_82B6A6F0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,25612
	ctx.r8.s64 = ctx.r11.s64 + 25612;
	// addi r7,r10,25600
	ctx.r7.s64 = ctx.r10.s64 + 25600;
	// addi r6,r9,25596
	ctx.r6.s64 = ctx.r9.s64 + 25596;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824238b8
	ctx.lr = 0x82B6A738;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B6A740;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b6a758
	if (cr6.eq) goto loc_82B6A758;
	// bl 0x82416268
	ctx.lr = 0x82B6A754;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6A758:
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

__attribute__((alias("__imp__sub_82B6A770"))) PPC_WEAK_FUNC(sub_82B6A770);
PPC_FUNC_IMPL(__imp__sub_82B6A770) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,25652
	ctx.r8.s64 = ctx.r11.s64 + 25652;
	// addi r7,r10,25640
	ctx.r7.s64 = ctx.r10.s64 + 25640;
	// addi r6,r9,25636
	ctx.r6.s64 = ctx.r9.s64 + 25636;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// bl 0x824238b8
	ctx.lr = 0x82B6A7B0;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B6A7B8;
	sub_82B6A590(ctx, base);
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

__attribute__((alias("__imp__sub_82B6A7CC"))) PPC_WEAK_FUNC(sub_82B6A7CC);
PPC_FUNC_IMPL(__imp__sub_82B6A7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6A7D0"))) PPC_WEAK_FUNC(sub_82B6A7D0);
PPC_FUNC_IMPL(__imp__sub_82B6A7D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b6a7e0
	sub_82B6A7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A7D8"))) PPC_WEAK_FUNC(sub_82B6A7D8);
PPC_FUNC_IMPL(__imp__sub_82B6A7D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b6a7e0
	sub_82B6A7E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A7E0"))) PPC_WEAK_FUNC(sub_82B6A7E0);
PPC_FUNC_IMPL(__imp__sub_82B6A7E0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,25652
	ctx.r8.s64 = ctx.r11.s64 + 25652;
	// addi r7,r10,25640
	ctx.r7.s64 = ctx.r10.s64 + 25640;
	// addi r6,r9,25636
	ctx.r6.s64 = ctx.r9.s64 + 25636;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824238b8
	ctx.lr = 0x82B6A828;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B6A830;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b6a848
	if (cr6.eq) goto loc_82B6A848;
	// bl 0x82416268
	ctx.lr = 0x82B6A844;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6A848:
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

__attribute__((alias("__imp__sub_82B6A860"))) PPC_WEAK_FUNC(sub_82B6A860);
PPC_FUNC_IMPL(__imp__sub_82B6A860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B6A868;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r3,240
	ctx.r29.s64 = ctx.r3.s64 + 240;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6a894
	if (cr6.lt) goto loc_82B6A894;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6A894;
	sub_825952B8(ctx, base);
loc_82B6A894:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r27,212
	ctx.r30.s64 = ctx.r27.s64 + 212;
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6a8c8
	if (cr6.lt) goto loc_82B6A8C8;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6A8C8;
	sub_825952B8(ctx, base);
loc_82B6A8C8:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// addi r29,r27,184
	ctx.r29.s64 = ctx.r27.s64 + 184;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6a8f4
	if (cr6.lt) goto loc_82B6A8F4;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6A8F4;
	sub_825952B8(ctx, base);
loc_82B6A8F4:
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// addi r30,r27,168
	ctx.r30.s64 = ctx.r27.s64 + 168;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r3,168(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6a930
	if (cr6.eq) goto loc_82B6A930;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82ca39a0
	ctx.lr = 0x82B6A920;
	sub_82CA39A0(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6A930;
	sub_825952B8(ctx, base);
loc_82B6A930:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r28,r27,124
	ctx.r28.s64 = ctx.r27.s64 + 124;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6a95c
	if (cr6.lt) goto loc_82B6A95C;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6A95C;
	sub_825952B8(ctx, base);
loc_82B6A95C:
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// addi r29,r27,96
	ctx.r29.s64 = ctx.r27.s64 + 96;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,116(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6a988
	if (cr6.lt) goto loc_82B6A988;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6A988;
	sub_825952B8(ctx, base);
loc_82B6A988:
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x82B6A9A0;
	sub_824238B8(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x82B6A9A8;
	sub_824238B8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x82B6A9B0;
	sub_824238B8(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6a9c4
	if (cr6.lt) goto loc_82B6A9C4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82B6A9C4;
	sub_8386D088(ctx, base);
loc_82B6A9C4:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6A9D8"))) PPC_WEAK_FUNC(sub_82B6A9D8);
PPC_FUNC_IMPL(__imp__sub_82B6A9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B6A9E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6abb4
	if (cr6.eq) goto loc_82B6ABB4;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6A9FC;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6abb4
	if (cr6.eq) goto loc_82B6ABB4;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6abb4
	if (cr6.eq) goto loc_82B6ABB4;
	// lbz r11,206(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6abb4
	if (cr6.eq) goto loc_82B6ABB4;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e75970
	ctx.lr = 0x82B6AA2C;
	sub_82E75970(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6AA30;
	sub_831156E8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6AA34;
	sub_831156E8(ctx, base);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// clrlwi r30,r31,24
	ctx.r30.u64 = ctx.r31.u32 & 0xFF;
	// addis r31,r9,5
	ctx.r31.s64 = ctx.r9.s64 + 327680;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82b6aa80
	if (cr6.eq) goto loc_82B6AA80;
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6aa80
	if (!cr6.eq) goto loc_82B6AA80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b69480
	ctx.lr = 0x82B6AA80;
	sub_82B69480(ctx, base);
loc_82B6AA80:
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x83123888
	ctx.lr = 0x82B6AA94;
	sub_83123888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824ce1d8
	ctx.lr = 0x82B6AAA8;
	sub_824CE1D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831238a0
	ctx.lr = 0x82B6AABC;
	sub_831238A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8395b0f8
	ctx.lr = 0x82B6AAD0;
	sub_8395B0F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8253f910
	ctx.lr = 0x82B6AAE4;
	sub_8253F910(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8353c978
	ctx.lr = 0x82B6AAF8;
	sub_8353C978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x831238b0
	ctx.lr = 0x82B6AB0C;
	sub_831238B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x83a76f48
	ctx.lr = 0x82B6AB20;
	sub_83A76F48(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r29,r1,116
	ctx.r29.s64 = ctx.r1.s64 + 116;
	// stw r11,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r11.u32);
loc_82B6AB34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238d8
	ctx.lr = 0x82B6AB40;
	sub_831238D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82437de0
	ctx.lr = 0x82B6AB54;
	sub_82437DE0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82b6ab34
	if (cr6.lt) goto loc_82B6AB34;
	// lwz r3,564(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6ab78
	if (cr6.eq) goto loc_82B6AB78;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82e74498
	ctx.lr = 0x82B6AB78;
	sub_82E74498(ctx, base);
loc_82B6AB78:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6abac
	if (cr6.eq) goto loc_82B6ABAC;
	// lwz r31,296(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6abac
	if (!cr6.eq) goto loc_82B6ABAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831ce980
	ctx.lr = 0x82B6ABA4;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r11.u8);
loc_82B6ABAC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b6a680
	ctx.lr = 0x82B6ABB4;
	sub_82B6A680(ctx, base);
loc_82B6ABB4:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6ABBC"))) PPC_WEAK_FUNC(sub_82B6ABBC);
PPC_FUNC_IMPL(__imp__sub_82B6ABBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ABC0"))) PPC_WEAK_FUNC(sub_82B6ABC0);
PPC_FUNC_IMPL(__imp__sub_82B6ABC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B6ABC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// addi r29,r3,604
	ctx.r29.s64 = ctx.r3.s64 + 604;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x83571120
	ctx.lr = 0x82B6ABF4;
	sub_83571120(ctx, base);
	// lwz r11,680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 680);
	// lwz r10,676(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 676);
	// addi r3,r30,676
	ctx.r3.s64 = ctx.r30.s64 + 676;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b6ac28
	if (cr0.eq) goto loc_82B6AC28;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b6aca8
	if (cr6.eq) goto loc_82B6ACA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82b6aca4
	goto loc_82B6ACA4;
loc_82B6AC28:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82b6ac50
	if (!cr6.eq) goto loc_82B6AC50;
	// lwz r11,608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b6ac64
	if (cr6.eq) goto loc_82B6AC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f73d60
	ctx.lr = 0x82B6AC48;
	sub_82F73D60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B6AC50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a120f0
	ctx.lr = 0x82B6AC58;
	sub_82A120F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ff6920
	ctx.lr = 0x82B6AC60;
	sub_82FF6920(ctx, base);
	// b 0x82b6ac8c
	goto loc_82B6AC8C;
loc_82B6AC64:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B6AC74;
	sub_82A8E3A8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b6a4c8
	ctx.lr = 0x82B6AC84;
	sub_82B6A4C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e638
	ctx.lr = 0x82B6AC8C;
	sub_8387E638(ctx, base);
loc_82B6AC8C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b6aca8
	if (cr6.eq) goto loc_82B6ACA8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82B6ACA4:
	// bl 0x825952b8
	ctx.lr = 0x82B6ACA8;
	sub_825952B8(ctx, base);
loc_82B6ACA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6ACC0"))) PPC_WEAK_FUNC(sub_82B6ACC0);
PPC_FUNC_IMPL(__imp__sub_82B6ACC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B6ACC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r31,368(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r9,360(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// lbz r27,345(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 345);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b6ad3c
	if (cr6.eq) goto loc_82B6AD3C;
loc_82B6AD0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B6AD18;
	sub_835977D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,368(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b6ad0c
	if (!cr6.eq) goto loc_82B6AD0C;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B6AD3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B6AD48;
	sub_82A8E3A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// bl 0x82b6abc0
	ctx.lr = 0x82B6AD60;
	sub_82B6ABC0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b6ad7c
	if (cr6.eq) goto loc_82B6AD7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B6AD7C;
	sub_825952B8(ctx, base);
loc_82B6AD7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6AD84"))) PPC_WEAK_FUNC(sub_82B6AD84);
PPC_FUNC_IMPL(__imp__sub_82B6AD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AD88"))) PPC_WEAK_FUNC(sub_82B6AD88);
PPC_FUNC_IMPL(__imp__sub_82B6AD88) {
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
	// beq cr6,0x82b6add4
	if (cr6.eq) goto loc_82B6ADD4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b69c70
	ctx.lr = 0x82B6ADBC;
	sub_82B69C70(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca39a0
	ctx.lr = 0x82B6ADD0;
	sub_82CA39A0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82B6ADD4:
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

__attribute__((alias("__imp__sub_82B6ADEC"))) PPC_WEAK_FUNC(sub_82B6ADEC);
PPC_FUNC_IMPL(__imp__sub_82B6ADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ADF0"))) PPC_WEAK_FUNC(sub_82B6ADF0);
PPC_FUNC_IMPL(__imp__sub_82B6ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B6ADF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,29127
	ctx.r10.u64 = ctx.r11.u64 | 29127;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b6ae1c
	if (!cr6.gt) goto loc_82B6AE1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B6AE1C;
	sub_831CC150(ctx, base);
loc_82B6AE1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,36
	ctx.r27.s64 = 36;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b6aed4
	if (!cr6.lt) goto loc_82B6AED4;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82B6AE5C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b69ce8
	ctx.lr = 0x82B6AE80;
	sub_82B69CE8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x82b6aeb4
	if (cr6.eq) goto loc_82B6AEB4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bb49f0
	ctx.lr = 0x82B6AEA4;
	sub_82BB49F0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6AEB4;
	sub_825952B8(ctx, base);
loc_82B6AEB4:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82B6AED4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6AEDC"))) PPC_WEAK_FUNC(sub_82B6AEDC);
PPC_FUNC_IMPL(__imp__sub_82B6AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6AEE0"))) PPC_WEAK_FUNC(sub_82B6AEE0);
PPC_FUNC_IMPL(__imp__sub_82B6AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6AEE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82b66820
	ctx.lr = 0x82B6AF00;
	sub_82B66820(ctx, base);
	// std r30,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r30.u64);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b6af20
	if (cr6.lt) goto loc_82B6AF20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b6af24
	goto loc_82B6AF24;
loc_82B6AF20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82B6AF24:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// blt cr6,0x82b6af40
	if (cr6.lt) goto loc_82B6AF40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B6AF40:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r30,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r30.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// addi r29,r31,168
	ctx.r29.s64 = ctx.r31.s64 + 168;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b6af94
	if (cr6.eq) goto loc_82B6AF94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b69c70
	ctx.lr = 0x82B6AF7C;
	sub_82B69C70(ctx, base);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82ca39a0
	ctx.lr = 0x82B6AF90;
	sub_82CA39A0(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82B6AF94:
	// stb r30,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r30.u8);
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// stb r30,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r30.u8);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b6afb8
	if (cr6.lt) goto loc_82B6AFB8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82b6afbc
	goto loc_82B6AFBC;
loc_82B6AFB8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82B6AFBC:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b6afd8
	if (cr6.lt) goto loc_82B6AFD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B6AFD8:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// blt cr6,0x82b6affc
	if (cr6.lt) goto loc_82B6AFFC;
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B6AFFC:
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B008"))) PPC_WEAK_FUNC(sub_82B6B008);
PPC_FUNC_IMPL(__imp__sub_82B6B008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B6B010;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,25680
	ctx.r8.s64 = ctx.r11.s64 + 25680;
	// addi r7,r9,25676
	ctx.r7.s64 = ctx.r9.s64 + 25676;
	// lwz r10,372(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 372);
	// addi r3,r3,372
	ctx.r3.s64 = ctx.r3.s64 + 372;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r7.u32);
	// beq cr6,0x82b6b044
	if (cr6.eq) goto loc_82B6B044;
	// bl 0x82b35560
	ctx.lr = 0x82B6B044;
	sub_82B35560(ctx, base);
loc_82B6B044:
	// lwz r11,392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// addi r3,r27,392
	ctx.r3.s64 = ctx.r27.s64 + 392;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b058
	if (cr6.eq) goto loc_82B6B058;
	// bl 0x82b35560
	ctx.lr = 0x82B6B058;
	sub_82B35560(ctx, base);
loc_82B6B058:
	// addi r31,r27,268
	ctx.r31.s64 = ctx.r27.s64 + 268;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82B6B06C:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6b08c
	if (cr6.lt) goto loc_82B6B08C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B6B08C;
	sub_825952B8(ctx, base);
loc_82B6B08C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bge 0x82b6b06c
	if (!cr0.lt) goto loc_82B6B06C;
	// lwz r3,180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 180);
	// addi r31,r27,180
	ctx.r31.s64 = ctx.r27.s64 + 180;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b0d0
	if (cr6.eq) goto loc_82B6B0D0;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bb49f0
	ctx.lr = 0x82B6B0C0;
	sub_82BB49F0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82B6B0D0;
	sub_825952B8(ctx, base);
loc_82B6B0D0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82c38c18
	ctx.lr = 0x82B6B0E4;
	sub_82C38C18(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B0EC"))) PPC_WEAK_FUNC(sub_82B6B0EC);
PPC_FUNC_IMPL(__imp__sub_82B6B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B0F0"))) PPC_WEAK_FUNC(sub_82B6B0F0);
PPC_FUNC_IMPL(__imp__sub_82B6B0F0) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B6B11C;
	sub_82595718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b138
	if (cr6.eq) goto loc_82B6B138;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,25976
	ctx.r10.s64 = ctx.r11.s64 + 25976;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82b6b13c
	goto loc_82B6B13C;
loc_82B6B138:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B6B13C:
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
	// bl 0x83878e28
	ctx.lr = 0x82B6B158;
	sub_83878E28(ctx, base);
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

__attribute__((alias("__imp__sub_82B6B170"))) PPC_WEAK_FUNC(sub_82B6B170);
PPC_FUNC_IMPL(__imp__sub_82B6B170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B6B178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6B184;
	sub_82D19A68(ctx, base);
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// beq cr6,0x82b6b1b0
	if (cr6.eq) goto loc_82B6B1B0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6B1B0;
	sub_82D2AEC8(ctx, base);
loc_82B6B1B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c38118
	ctx.lr = 0x82B6B1B8;
	sub_82C38118(ctx, base);
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r28,r10,14904
	ctx.r28.u64 = ctx.r10.u64 | 14904;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b6b1f8
	if (!cr6.eq) goto loc_82B6B1F8;
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B1E4;
	sub_82D199D0(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x82B6B1E8;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b350
	if (cr6.eq) goto loc_82B6B350;
	// bl 0x839a0648
	ctx.lr = 0x82B6B1F4;
	sub_839A0648(ctx, base);
	// b 0x82b6b350
	goto loc_82B6B350;
loc_82B6B1F8:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82b6b214
	if (!cr6.eq) goto loc_82B6B214;
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B210;
	sub_82D199D0(ctx, base);
	// b 0x82b6b358
	goto loc_82B6B358;
loc_82B6B214:
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bne cr6,0x82b6b230
	if (!cr6.eq) goto loc_82B6B230;
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B22C;
	sub_82D199D0(ctx, base);
	// b 0x82b6b358
	goto loc_82B6B358;
loc_82B6B230:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x82b6b24c
	if (!cr6.eq) goto loc_82B6B24C;
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B248;
	sub_82D199D0(ctx, base);
	// b 0x82b6b358
	goto loc_82B6B358;
loc_82B6B24C:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82b6b2b8
	if (!cr6.eq) goto loc_82B6B2B8;
	// bl 0x831156e8
	ctx.lr = 0x82B6B258;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x83123888
	ctx.lr = 0x82B6B264;
	sub_83123888(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b665b8
	ctx.lr = 0x82B6B270;
	sub_82B665B8(ctx, base);
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// stb r27,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B288;
	sub_82D199D0(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B6B294;
	sub_82D46928(ctx, base);
	// lwz r10,76(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6B2AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a188
	ctx.lr = 0x82B6B2B4;
	sub_82B6A188(ctx, base);
	// b 0x82b6b37c
	goto loc_82B6B37C;
loc_82B6B2B8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82b6b340
	if (cr6.eq) goto loc_82B6B340;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b6b340
	if (cr6.eq) goto loc_82B6B340;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x82b6b340
	if (cr6.eq) goto loc_82B6B340;
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b6b328
	if (!cr6.eq) goto loc_82B6B328;
	// stb r29,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B2EC;
	sub_82D199D0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6B2F0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,338(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 338);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 393216;
	// addi r8,r8,-30316
	ctx.r8.s64 = ctx.r8.s64 + -30316;
	// stb r10,169(r8)
	PPC_STORE_U8(ctx.r8.u32 + 169, ctx.r10.u8);
	// lbz r7,339(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 339);
	// stb r7,170(r8)
	PPC_STORE_U8(ctx.r8.u32 + 170, ctx.r7.u8);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B6B31C;
	sub_82D46928(ctx, base);
	// lwz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// b 0x82b6b36c
	goto loc_82B6B36C;
loc_82B6B328:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,7412(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7412);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x82b6b370
	goto loc_82B6B370;
loc_82B6B340:
	// stb r29,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6B350;
	sub_82D199D0(ctx, base);
loc_82B6B350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68b68
	ctx.lr = 0x82B6B358;
	sub_82B68B68(ctx, base);
loc_82B6B358:
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B6B364;
	sub_82D46928(ctx, base);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82B6B36C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B6B370:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B6B37C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B6B37C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68580
	ctx.lr = 0x82B6B384;
	sub_82B68580(ctx, base);
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// bne cr6,0x82b6b3a8
	if (!cr6.eq) goto loc_82B6B3A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65198
	ctx.lr = 0x82B6B394;
	sub_82B65198(ctx, base);
	// bl 0x839a1610
	ctx.lr = 0x82B6B398;
	sub_839A1610(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b3c0
	if (cr6.eq) goto loc_82B6B3C0;
	// bl 0x839a1ec8
	ctx.lr = 0x82B6B3A4;
	sub_839A1EC8(ctx, base);
	// b 0x82b6b3c0
	goto loc_82B6B3C0;
loc_82B6B3A8:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x82b6b3b8
	if (!cr6.eq) goto loc_82B6B3B8;
	// stw r27,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r27.u32);
	// b 0x82b6b44c
	goto loc_82B6B44C;
loc_82B6B3B8:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x82b6b44c
	if (!cr6.eq) goto loc_82B6B44C;
loc_82B6B3C0:
	// bl 0x831156e8
	ctx.lr = 0x82B6B3C4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(ctx.r26.s32, 4, xer);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x82b6b444
	if (cr6.eq) goto loc_82B6B444;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x82b6b44c
	if (!cr6.eq) goto loc_82B6B44C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b670f8
	ctx.lr = 0x82B6B3E4;
	sub_82B670F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b430
	if (cr6.eq) goto loc_82B6B430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b67238
	ctx.lr = 0x82B6B3F8;
	sub_82B67238(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b6b44c
	if (cr6.eq) goto loc_82B6B44C;
	// lhz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b6b420
	if (!cr6.eq) goto loc_82B6B420;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a76f48
	ctx.lr = 0x82B6B41C;
	sub_83A76F48(ctx, base);
	// sth r3,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r3.u16);
loc_82B6B420:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123898
	ctx.lr = 0x82B6B42C;
	sub_83123898(ctx, base);
	// b 0x82b6b44c
	goto loc_82B6B44C;
loc_82B6B430:
	// lhz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 268);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82b6b44c
	if (cr6.eq) goto loc_82B6B44C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123898
	ctx.lr = 0x82B6B444;
	sub_83123898(ctx, base);
loc_82B6B444:
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r11.u16);
loc_82B6B44C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a9d8
	ctx.lr = 0x82B6B458;
	sub_82B6A9D8(ctx, base);
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b478
	if (cr6.eq) goto loc_82B6B478;
	// bl 0x82c3a610
	ctx.lr = 0x82B6B468;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b478
	if (cr6.eq) goto loc_82B6B478;
	// bl 0x82c3a5a8
	ctx.lr = 0x82B6B478;
	sub_82C3A5A8(ctx, base);
loc_82B6B478:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b48c
	if (cr6.eq) goto loc_82B6B48C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c37528
	ctx.lr = 0x82B6B48C;
	sub_82C37528(ctx, base);
loc_82B6B48C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B494"))) PPC_WEAK_FUNC(sub_82B6B494);
PPC_FUNC_IMPL(__imp__sub_82B6B494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B498"))) PPC_WEAK_FUNC(sub_82B6B498);
PPC_FUNC_IMPL(__imp__sub_82B6B498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B6B4A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b5c0
	if (cr6.eq) goto loc_82B6B5C0;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6B4BC;
	sub_82DAD2E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b5c0
	if (cr6.eq) goto loc_82B6B5C0;
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b5c0
	if (cr6.eq) goto loc_82B6B5C0;
	// bl 0x83a7d958
	ctx.lr = 0x82B6B4D8;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B6B4DC;
	sub_83524138(ctx, base);
	// ld r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 432);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// blt cr6,0x82b6b5c0
	if (cr6.lt) goto loc_82B6B5C0;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e763a0
	ctx.lr = 0x82B6B4FC;
	sub_82E763A0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// beq cr6,0x82b6b52c
	if (cr6.eq) goto loc_82B6B52C;
	// lbz r11,206(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b52c
	if (cr6.eq) goto loc_82B6B52C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
loc_82B6B52C:
	// lwz r31,180(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b6b564
	if (cr6.eq) goto loc_82B6B564;
loc_82B6B53C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82B6B548;
	sub_835977D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82437de0
	ctx.lr = 0x82B6B554;
	sub_82437DE0(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b6b53c
	if (!cr6.eq) goto loc_82B6B53C;
loc_82B6B564:
	// lwz r3,564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b6b578
	if (!cr6.eq) goto loc_82B6B578;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82b6b580
	goto loc_82B6B580;
loc_82B6B578:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74498
	ctx.lr = 0x82B6B580;
	sub_82E74498(ctx, base);
loc_82B6B580:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b5b0
	if (cr6.eq) goto loc_82B6B5B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a8e3a8
	ctx.lr = 0x82B6B598;
	sub_82A8E3A8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,60(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// lwz r3,296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// bl 0x82b6abc0
	ctx.lr = 0x82B6B5AC;
	sub_82B6ABC0(ctx, base);
	// std r27,432(r30)
	PPC_STORE_U64(ctx.r30.u32 + 432, ctx.r27.u64);
loc_82B6B5B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82B6B5B8;
	sub_82F73D60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b6a770
	ctx.lr = 0x82B6B5C0;
	sub_82B6A770(ctx, base);
loc_82B6B5C0:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B5C8"))) PPC_WEAK_FUNC(sub_82B6B5C8);
PPC_FUNC_IMPL(__imp__sub_82B6B5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B6B5D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6B5DC;
	sub_82DAD2E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b6b4
	if (cr6.eq) goto loc_82B6B6B4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82B6B5F4:
	// addi r11,r29,106
	ctx.r11.s64 = ctx.r29.s64 + 106;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b6b638
	if (cr6.lt) goto loc_82B6B638;
	// bne cr6,0x82b6b6a0
	if (!cr6.eq) goto loc_82B6B6A0;
	// addi r11,r29,31
	ctx.r11.s64 = ctx.r29.s64 + 31;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r9,344(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 344);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b6b6a0
	if (!cr6.eq) goto loc_82B6B6A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b6acc0
	ctx.lr = 0x82B6B630;
	sub_82B6ACC0(ctx, base);
	// stwx r26,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r26.u32);
	// b 0x82b6b6a0
	goto loc_82B6B6A0;
loc_82B6B638:
	// addi r11,r29,31
	ctx.r11.s64 = ctx.r29.s64 + 31;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b6a0
	if (cr6.eq) goto loc_82B6B6A0;
	// bl 0x82e744f8
	ctx.lr = 0x82B6B654;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82B6B668;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b66948
	ctx.lr = 0x82B6B674;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b6b690
	if (cr6.eq) goto loc_82B6B690;
	// bl 0x8259b510
	ctx.lr = 0x82B6B690;
	sub_8259B510(ctx, base);
loc_82B6B690:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6b6a0
	if (!cr6.eq) goto loc_82B6B6A0;
	// stwx r25,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r25.u32);
loc_82B6B6A0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// blt cr6,0x82b6b5f4
	if (cr6.lt) goto loc_82B6B5F4;
loc_82B6B6B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B6BC"))) PPC_WEAK_FUNC(sub_82B6B6BC);
PPC_FUNC_IMPL(__imp__sub_82B6B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B6C0"))) PPC_WEAK_FUNC(sub_82B6B6C0);
PPC_FUNC_IMPL(__imp__sub_82B6B6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,36
	ctx.r9.s64 = 36;
	// ori r8,r10,29127
	ctx.r8.u64 = ctx.r10.u64 | 29127;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b6b6f4
	if (!cr6.lt) goto loc_82B6B6F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B6B6F4:
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
	// blt cr6,0x82b6b724
	if (cr6.lt) goto loc_82B6B724;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B6B724:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b6b730
	if (!cr6.lt) goto loc_82B6B730;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B6B730:
	// b 0x82b6adf0
	sub_82B6ADF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6B734"))) PPC_WEAK_FUNC(sub_82B6B734);
PPC_FUNC_IMPL(__imp__sub_82B6B734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B6B738"))) PPC_WEAK_FUNC(sub_82B6B738);
PPC_FUNC_IMPL(__imp__sub_82B6B738) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x835fe558
	ctx.lr = 0x82B6B754;
	sub_835FE558(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stb r11,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r11.u8);
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stb r11,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r11.u8);
	// bl 0x82b6aee0
	ctx.lr = 0x82B6B7AC;
	sub_82B6AEE0(ctx, base);
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

__attribute__((alias("__imp__sub_82B6B7C4"))) PPC_WEAK_FUNC(sub_82B6B7C4);
PPC_FUNC_IMPL(__imp__sub_82B6B7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6B7C8"))) PPC_WEAK_FUNC(sub_82B6B7C8);
PPC_FUNC_IMPL(__imp__sub_82B6B7C8) {
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
	// bl 0x82b6b008
	ctx.lr = 0x82B6B7E8;
	sub_82B6B008(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b800
	if (cr6.eq) goto loc_82B6B800;
	// bl 0x82416268
	ctx.lr = 0x82B6B7FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6B800:
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

__attribute__((alias("__imp__sub_82B6B818"))) PPC_WEAK_FUNC(sub_82B6B818);
PPC_FUNC_IMPL(__imp__sub_82B6B818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B6B820;
	__savegprlr_20(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82B6B828;
	sub_82D86078(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b6b840
	if (!cr6.eq) goto loc_82B6B840;
loc_82B6B834:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B6B840:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r3,52(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// li r6,200
	ctx.r6.s64 = 200;
	// addi r5,r11,25420
	ctx.r5.s64 = ctx.r11.s64 + 25420;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da9890
	ctx.lr = 0x82B6B858;
	sub_82DA9890(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B6B85C;
	sub_82DAD2E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6b834
	if (cr6.eq) goto loc_82B6B834;
	// lwz r21,368(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r23,24
	ctx.r23.s64 = 24;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r22,2
	ctx.r22.s64 = 2;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82b6b9a8
	if (cr6.eq) goto loc_82B6B9A8;
loc_82B6B890:
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r24,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r24.u8);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stb r31,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r31.u8);
	// stb r31,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r31.u8);
	// stb r31,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r31.u8);
	// bl 0x82db1298
	ctx.lr = 0x82B6B8D0;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6b908
	if (!cr6.eq) goto loc_82B6B908;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6b8f8
	if (cr6.lt) goto loc_82B6B8F8;
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x825952b8
	ctx.lr = 0x82B6B8F8;
	sub_825952B8(ctx, base);
loc_82B6B8F8:
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// b 0x82b6b99c
	goto loc_82B6B99C;
loc_82B6B908:
	// lbz r10,211(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 211);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6b994
	if (!cr6.eq) goto loc_82B6B994;
	// lbz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82b6b994
	if (cr6.eq) goto loc_82B6B994;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b6b738
	ctx.lr = 0x82B6B928;
	sub_82B6B738(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82db29e0
	ctx.lr = 0x82B6B938;
	sub_82DB29E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6b98c
	if (cr6.eq) goto loc_82B6B98C;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b5e118
	ctx.lr = 0x82B6B94C;
	sub_82B5E118(ctx, base);
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,540
	ctx.r4.s64 = ctx.r1.s64 + 540;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B6B968;
	sub_8259CB28(ctx, base);
	// ld r10,504(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stb r31,289(r1)
	PPC_STORE_U8(ctx.r1.u32 + 289, ctx.r31.u8);
	// std r10,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r10.u64);
	// lwz r3,52(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82B6B984;
	sub_82DA9740(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82da8c38
	ctx.lr = 0x82B6B98C;
	sub_82DA8C38(ctx, base);
loc_82B6B98C:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b6a860
	ctx.lr = 0x82B6B994;
	sub_82B6A860(ctx, base);
loc_82B6B994:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c644a0
	ctx.lr = 0x82B6B99C;
	sub_82C644A0(ctx, base);
loc_82B6B99C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r21
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, xer);
	// blt cr6,0x82b6b890
	if (cr6.lt) goto loc_82B6B890;
loc_82B6B9A8:
	// bl 0x82dd3a30
	ctx.lr = 0x82B6B9AC;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6bba8
	if (cr6.eq) goto loc_82B6BBA8;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82b6bb4c
	if (cr6.eq) goto loc_82B6BB4C;
	// li r28,48
	ctx.r28.s64 = 48;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B6B9E0:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// stb r24,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r24.u8);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stb r31,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r31.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// stb r31,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r31.u8);
	// bl 0x82db1298
	ctx.lr = 0x82B6BA20;
	sub_82DB1298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6ba58
	if (!cr6.eq) goto loc_82B6BA58;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6ba48
	if (cr6.lt) goto loc_82B6BA48;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825952b8
	ctx.lr = 0x82B6BA48;
	sub_825952B8(ctx, base);
loc_82B6BA48:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// b 0x82b6bb38
	goto loc_82B6BB38;
loc_82B6BA58:
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b6ba90
	if (!cr6.eq) goto loc_82B6BA90;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6ba80
	if (cr6.lt) goto loc_82B6BA80;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825952b8
	ctx.lr = 0x82B6BA80;
	sub_825952B8(ctx, base);
loc_82B6BA80:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// b 0x82b6bb38
	goto loc_82B6BB38;
loc_82B6BA90:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b6b738
	ctx.lr = 0x82B6BA98;
	sub_82B6B738(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82db29e0
	ctx.lr = 0x82B6BAA8;
	sub_82DB29E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6bb28
	if (cr6.eq) goto loc_82B6BB28;
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r4,584(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw. r9,r10,r28
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b6bb28
	if (cr0.eq) goto loc_82B6BB28;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82b680a8
	ctx.lr = 0x82B6BAD0;
	sub_82B680A8(ctx, base);
	// lbz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 348);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6bb20
	if (!cr6.eq) goto loc_82B6BB20;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82b5e118
	ctx.lr = 0x82B6BAE4;
	sub_82B5E118(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// bl 0x8259cb28
	ctx.lr = 0x82B6BAF8;
	sub_8259CB28(ctx, base);
	// ld r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lbz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 348);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// stb r10,401(r1)
	PPC_STORE_U8(ctx.r1.u32 + 401, ctx.r10.u8);
	// bl 0x82b69b28
	ctx.lr = 0x82B6BB18;
	sub_82B69B28(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82da8c38
	ctx.lr = 0x82B6BB20;
	sub_82DA8C38(ctx, base);
loc_82B6BB20:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6BB28;
	sub_8387E8E0(ctx, base);
loc_82B6BB28:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b6a860
	ctx.lr = 0x82B6BB30;
	sub_82B6A860(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c644a0
	ctx.lr = 0x82B6BB38;
	sub_82C644A0(ctx, base);
loc_82B6BB38:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r21
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, xer);
	// blt cr6,0x82b6b9e0
	if (cr6.lt) goto loc_82B6B9E0;
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_82B6BB4C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b6bb70
	if (cr6.eq) goto loc_82B6BB70;
loc_82B6BB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,52(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82B6BB64;
	sub_82DA9740(ctx, base);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b6bb58
	if (!cr6.eq) goto loc_82B6BB58;
loc_82B6BB70:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82b6bba8
	if (cr6.eq) goto loc_82B6BBA8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b6bb98
	if (cr6.eq) goto loc_82B6BB98;
loc_82B6BB84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82B6BB8C;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b6bb84
	if (!cr6.eq) goto loc_82B6BB84;
loc_82B6BB98:
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82B6BBA8;
	sub_825952B8(ctx, base);
loc_82B6BBA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6BBB4"))) PPC_WEAK_FUNC(sub_82B6BBB4);
PPC_FUNC_IMPL(__imp__sub_82B6BBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BBB8"))) PPC_WEAK_FUNC(sub_82B6BBB8);
PPC_FUNC_IMPL(__imp__sub_82B6BBB8) {
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
	// bl 0x82b6b5c8
	ctx.lr = 0x82B6BBD0;
	sub_82B6B5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b66ed0
	ctx.lr = 0x82B6BBD8;
	sub_82B66ED0(ctx, base);
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6bc3c
	if (!cr6.eq) goto loc_82B6BC3C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82B6BBE8:
	// addi r9,r11,106
	ctx.r9.s64 = ctx.r11.s64 + 106;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b6bc24
	if (cr6.eq) goto loc_82B6BC24;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b6bc24
	if (cr6.eq) goto loc_82B6BC24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// blt cr6,0x82b6bbe8
	if (cr6.lt) goto loc_82B6BBE8;
	// b 0x82b6bc28
	goto loc_82B6BC28;
loc_82B6BC24:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B6BC28:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6bc3c
	if (cr6.eq) goto loc_82B6BC3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
loc_82B6BC3C:
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

__attribute__((alias("__imp__sub_82B6BC50"))) PPC_WEAK_FUNC(sub_82B6BC50);
PPC_FUNC_IMPL(__imp__sub_82B6BC50) {
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
	// bge cr6,0x82b6bc88
	if (!cr6.lt) goto loc_82B6BC88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b6bc8c
	if (!cr6.gt) goto loc_82B6BC8C;
loc_82B6BC88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B6BC8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6bce4
	if (cr6.eq) goto loc_82B6BCE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b6bcc0
	if (!cr6.eq) goto loc_82B6BCC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6b6c0
	ctx.lr = 0x82B6BCC0;
	sub_82B6B6C0(ctx, base);
loc_82B6BCC0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6bd10
	if (cr6.eq) goto loc_82B6BD10;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b6bd0c
	goto loc_82B6BD0C;
loc_82B6BCE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b6bcfc
	if (!cr6.eq) goto loc_82B6BCFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6b6c0
	ctx.lr = 0x82B6BCFC;
	sub_82B6B6C0(ctx, base);
loc_82B6BCFC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6bd10
	if (cr6.eq) goto loc_82B6BD10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B6BD0C:
	// bl 0x82b68038
	ctx.lr = 0x82B6BD10;
	sub_82B68038(ctx, base);
loc_82B6BD10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
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

__attribute__((alias("__imp__sub_82B6BD34"))) PPC_WEAK_FUNC(sub_82B6BD34);
PPC_FUNC_IMPL(__imp__sub_82B6BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6BD38"))) PPC_WEAK_FUNC(sub_82B6BD38);
PPC_FUNC_IMPL(__imp__sub_82B6BD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82B6BD40;
	__savegprlr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B6BD50;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r23,r18,180
	ctx.r23.s64 = ctx.r18.s64 + 180;
	// lwz r5,180(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 180);
	// lwz r4,184(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 184);
	// addis r17,r11,5
	ctx.r17.s64 = ctx.r11.s64 + 327680;
	// addi r17,r17,14904
	ctx.r17.s64 = ctx.r17.s64 + 14904;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b6bd94
	if (cr6.eq) goto loc_82B6BD94;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b69c08
	ctx.lr = 0x82B6BD7C;
	sub_82B69C08(ctx, base);
	// addi r5,r23,12
	ctx.r5.s64 = ctx.r23.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82bb49f0
	ctx.lr = 0x82B6BD90;
	sub_82BB49F0(ctx, base);
	// stw r31,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r31.u32);
loc_82B6BD94:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B6BDA0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6BDA4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82b6bdc4
	if (cr6.eq) goto loc_82B6BDC4;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// beq cr6,0x82b6bdc4
	if (cr6.eq) goto loc_82B6BDC4;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82b6bdc4
	if (cr6.eq) goto loc_82B6BDC4;
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82b6bddc
	if (!cr6.eq) goto loc_82B6BDDC;
loc_82B6BDC4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83129788
	ctx.lr = 0x82B6BDCC;
	sub_83129788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6bddc
	if (!cr6.eq) goto loc_82B6BDDC;
	// li r19,1
	ctx.r19.s64 = 1;
loc_82B6BDDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831239e0
	ctx.lr = 0x82B6BDEC;
	sub_831239E0(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r20,r1,84
	ctx.r20.s64 = ctx.r1.s64 + 84;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b6bf6c
	if (cr0.eq) goto loc_82B6BF6C;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r21,2
	ctx.r21.s64 = 2;
	// addi r24,r9,22827
	ctx.r24.s64 = ctx.r9.s64 + 22827;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b6bfb4
	if (!cr6.gt) goto loc_82B6BFB4;
loc_82B6BE28:
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8259cc28
	ctx.lr = 0x82B6BE4C;
	sub_8259CC28(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r30,253
	cr6.compare<uint32_t>(ctx.r30.u32, 253, xer);
	// bne cr6,0x82b6be78
	if (!cr6.eq) goto loc_82B6BE78;
	// lbz r11,204(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6be78
	if (cr6.eq) goto loc_82B6BE78;
	// lis r4,38
	ctx.r4.s64 = 2490368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,54
	ctx.r4.u64 = ctx.r4.u64 | 54;
	// bl 0x82d04220
	ctx.lr = 0x82B6BE74;
	sub_82D04220(ctx, base);
	// b 0x82b6bec8
	goto loc_82B6BEC8;
loc_82B6BE78:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04940
	ctx.lr = 0x82B6BE8C;
	sub_82F04940(ctx, base);
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6bec8
	if (!cr6.eq) goto loc_82B6BEC8;
	// bl 0x831156e8
	ctx.lr = 0x82B6BE9C;
	sub_831156E8(ctx, base);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B6BEA8;
	sub_8311C148(ctx, base);
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b6bec8
	if (cr6.eq) goto loc_82B6BEC8;
	// lbz r11,790(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 790);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b6bec8
	if (!cr6.eq) goto loc_82B6BEC8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B6BEC8:
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82B6BEEC;
	sub_8259CB28(ctx, base);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b6bc50
	ctx.lr = 0x82B6BEFC;
	sub_82B6BC50(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6bf18
	if (cr6.lt) goto loc_82B6BF18;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x82B6BF18;
	sub_825952B8(ctx, base);
loc_82B6BF18:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// blt cr6,0x82b6bf40
	if (cr6.lt) goto loc_82B6BF40;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B6BF40;
	sub_825952B8(ctx, base);
loc_82B6BF40:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bgt cr6,0x82b6be28
	if (cr6.gt) goto loc_82B6BE28;
loc_82B6BF6C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r31,164(r18)
	PPC_STORE_U32(ctx.r18.u32 + 164, ctx.r31.u32);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,160(r18)
	PPC_STORE_U32(ctx.r18.u32 + 160, ctx.r7.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82b6bfac
	if (cr6.lt) goto loc_82B6BFAC;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83123888
	ctx.lr = 0x82B6BF9C;
	sub_83123888(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82b665b8
	ctx.lr = 0x82B6BFA8;
	sub_82B665B8(ctx, base);
	// stw r3,164(r18)
	PPC_STORE_U32(ctx.r18.u32 + 164, ctx.r3.u32);
loc_82B6BFAC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_82B6BFB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6BFC0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B6BFC0"))) PPC_WEAK_FUNC(sub_82B6BFC0);
PPC_FUNC_IMPL(__imp__sub_82B6BFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6BFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6BFD4;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c1d0
	if (cr6.eq) goto loc_82B6C1D0;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b6bff4
	if (!cr6.eq) goto loc_82B6BFF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b6bff8
	goto loc_82B6BFF8;
loc_82B6BFF4:
	// bl 0x82e744e0
	ctx.lr = 0x82B6BFF8;
	sub_82E744E0(ctx, base);
loc_82B6BFF8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6c1d0
	if (!cr6.eq) goto loc_82B6C1D0;
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b6c1c0
	if (cr6.gt) goto loc_82B6C1C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b6c090
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6C090;
	// bdzf 4*cr6+eq,0x82b6c0f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6C0F4;
	// bdzf 4*cr6+eq,0x82b6c128
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6C128;
	// bne cr6,0x82b6c1d0
	if (!cr6.eq) goto loc_82B6C1D0;
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c1c0
	if (cr6.eq) goto loc_82B6C1C0;
	// lwz r11,692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6c1c0
	if (cr6.eq) goto loc_82B6C1C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82B6C05C;
	sub_82DAFAB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82B6C06C;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c1c0
	if (cr6.eq) goto loc_82B6C1C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
	// bl 0x82d48260
	ctx.lr = 0x82B6C084;
	sub_82D48260(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C090:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b6b498
	ctx.lr = 0x82B6C09C;
	sub_82B6B498(ctx, base);
	// lwz r3,296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// bl 0x82b67368
	ctx.lr = 0x82B6C0A4;
	sub_82B67368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c1c0
	if (cr6.eq) goto loc_82B6C1C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82B6C0C0;
	sub_82DAFAB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82B6C0D0;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c1c0
	if (cr6.eq) goto loc_82B6C1C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
	// bl 0x82d48260
	ctx.lr = 0x82B6C0E8;
	sub_82D48260(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C0F4:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,296(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82b699b0
	ctx.lr = 0x82B6C110;
	sub_82B699B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b6bd38
	ctx.lr = 0x82B6C11C;
	sub_82B6BD38(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// std r31,432(r30)
	PPC_STORE_U64(ctx.r30.u32 + 432, ctx.r31.u64);
	// b 0x82b6c1b4
	goto loc_82B6C1B4;
loc_82B6C128:
	// lbz r11,206(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 206);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c140
	if (cr6.eq) goto loc_82B6C140;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b6b498
	ctx.lr = 0x82B6C140;
	sub_82B6B498(ctx, base);
loc_82B6C140:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r11,676
	ctx.r4.s64 = ctx.r11.s64 + 676;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x82a120f0
	ctx.lr = 0x82B6C160;
	sub_82A120F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82b6c1b8
	if (cr6.eq) goto loc_82B6C1B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82B6C188;
	sub_82DAFAB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82B6C198;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c1b8
	if (cr6.eq) goto loc_82B6C1B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b6bd38
	ctx.lr = 0x82B6C1B0;
	sub_82B6BD38(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B6C1B4:
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
loc_82B6C1B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82B6C1C0;
	sub_82F73D60(ctx, base);
loc_82B6C1C0:
	// bl 0x82d48260
	ctx.lr = 0x82B6C1C4;
	sub_82D48260(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6C1D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6C1DC"))) PPC_WEAK_FUNC(sub_82B6C1DC);
PPC_FUNC_IMPL(__imp__sub_82B6C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C1E0"))) PPC_WEAK_FUNC(sub_82B6C1E0);
PPC_FUNC_IMPL(__imp__sub_82B6C1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6C1E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c218
	if (cr6.eq) goto loc_82B6C218;
	// bl 0x82b6bfc0
	ctx.lr = 0x82B6C200;
	sub_82B6BFC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6c218
	if (!cr6.eq) goto loc_82B6C218;
loc_82B6C20C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B6C218:
	// bl 0x8378cba8
	ctx.lr = 0x82B6C21C;
	sub_8378CBA8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8378cc08
	ctx.lr = 0x82B6C224;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c20c
	if (cr6.eq) goto loc_82B6C20C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6C240;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6C250;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B6C258;
	sub_82D19A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b67430
	ctx.lr = 0x82B6C264;
	sub_82B67430(ctx, base);
	// bl 0x82bdfa98
	ctx.lr = 0x82B6C268;
	sub_82BDFA98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c280
	if (cr6.eq) goto loc_82B6C280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C280;
	sub_83103100(ctx, base);
loc_82B6C280:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bl 0x82d33600
	ctx.lr = 0x82B6C29C;
	sub_82D33600(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b6c2ac
	if (!cr6.eq) goto loc_82B6C2AC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82B6C2AC:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82B6C2CC;
	sub_8259CB28(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r11,24576
	ctx.r30.s64 = ctx.r11.s64 + 24576;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// bl 0x837b0c10
	ctx.lr = 0x82B6C2E0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x82a69ad0
	ctx.lr = 0x82B6C2F0;
	sub_82A69AD0(ctx, base);
	// bl 0x82d26640
	ctx.lr = 0x82B6C2F4;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82B6C2F8;
	sub_82D25AB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68448
	ctx.lr = 0x82B6C304;
	sub_82B68448(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68448
	ctx.lr = 0x82B6C310;
	sub_82B68448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b69158
	ctx.lr = 0x82B6C318;
	sub_82B69158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65870
	ctx.lr = 0x82B6C320;
	sub_82B65870(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b654d0
	ctx.lr = 0x82B6C328;
	sub_82B654D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b69098
	ctx.lr = 0x82B6C330;
	sub_82B69098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a188
	ctx.lr = 0x82B6C338;
	sub_82B6A188(ctx, base);
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c390
	if (cr6.eq) goto loc_82B6C390;
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6c36c
	if (!cr6.eq) goto loc_82B6C36C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839a43b0
	ctx.lr = 0x82B6C358;
	sub_839A43B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C36C;
	sub_83103100(ctx, base);
loc_82B6C36C:
	// bl 0x831156e8
	ctx.lr = 0x82B6C370;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83124200
	ctx.lr = 0x82B6C384;
	sub_83124200(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x82d47a58
	ctx.lr = 0x82B6C38C;
	sub_82D47A58(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B6C390;
	sub_82D476F0(ctx, base);
loc_82B6C390:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6C398;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6C3A4"))) PPC_WEAK_FUNC(sub_82B6C3A4);
PPC_FUNC_IMPL(__imp__sub_82B6C3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6C3A8"))) PPC_WEAK_FUNC(sub_82B6C3A8);
PPC_FUNC_IMPL(__imp__sub_82B6C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B6C3B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,205(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 205);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6c904
	if (!cr6.eq) goto loc_82B6C904;
	// lbz r11,201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 201);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b6c408
	if (!cr6.eq) goto loc_82B6C408;
	// bl 0x831156e8
	ctx.lr = 0x82B6C3D4;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37447
	ctx.r8.u64 = ctx.r11.u64 | 37447;
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// lwz r5,7552(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 7552);
	// bl 0x82d20da8
	ctx.lr = 0x82B6C3FC;
	sub_82D20DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C408:
	// lbz r10,202(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6c41c
	if (!cr6.eq) goto loc_82B6C41C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6cedc
	if (!cr6.eq) goto loc_82B6CEDC;
loc_82B6C41C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6C424;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82d46928
	ctx.lr = 0x82B6C430;
	sub_82D46928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82B6C43C;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x82b6c848
	if (cr6.gt) goto loc_82B6C848;
	// lis r12,-32073
	ctx.r12.s64 = -2101936128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15248
	ctx.r12.s64 = ctx.r12.s64 + -15248;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B6C4A4;
	case 1:
		goto loc_82B6C848;
	case 2:
		goto loc_82B6C4F8;
	case 3:
		goto loc_82B6C848;
	case 4:
		goto loc_82B6C56C;
	case 5:
		goto loc_82B6C848;
	case 6:
		goto loc_82B6C5CC;
	case 7:
		goto loc_82B6C848;
	case 8:
		goto loc_82B6C70C;
	case 9:
		goto loc_82B6C848;
	case 10:
		goto loc_82B6C7F0;
	case 11:
		goto loc_82B6C848;
	case 12:
		goto loc_82B6C788;
	default:
		return;
	}
	// lwz r21,-15196(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -15196);
	// lwz r21,-14264(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14264);
	// lwz r21,-15112(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -15112);
	// lwz r21,-14264(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14264);
	// lwz r21,-14996(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14996);
	// lwz r21,-14264(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14264);
	// lwz r21,-14900(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14900);
	// lwz r21,-14264(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14264);
	// lwz r21,-14580(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14580);
	// lwz r21,-14264(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14264);
	// lwz r21,-14352(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14352);
	// lwz r21,-14264(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14264);
	// lwz r21,-14456(r22)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r22.u32 + -14456);
loc_82B6C4A4:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c4b8
	if (cr6.eq) goto loc_82B6C4B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C4B8;
	sub_82C37528(ctx, base);
loc_82B6C4B8:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r10,25048
	ctx.r11.s64 = ctx.r10.s64 + 25048;
	// addi r3,r11,-428
	ctx.r3.s64 = ctx.r11.s64 + -428;
	// bl 0x8399cff0
	ctx.lr = 0x82B6C4D4;
	sub_8399CFF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C4EC;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C4F8:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c50c
	if (cr6.eq) goto loc_82B6C50C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C50C;
	sub_82C37528(ctx, base);
loc_82B6C50C:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-404
	ctx.r4.s64 = ctx.r11.s64 + -404;
	// bl 0x837b0c10
	ctx.lr = 0x82B6C530;
	sub_837B0C10(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82c42678
	ctx.lr = 0x82B6C53C;
	sub_82C42678(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6C548;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C560;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C56C:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// bl 0x837b0c10
	ctx.lr = 0x82B6C590;
	sub_837B0C10(ctx, base);
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c421e8
	ctx.lr = 0x82B6C59C;
	sub_82C421E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6C5A8;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C5C0;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C5CC:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c5e0
	if (cr6.eq) goto loc_82B6C5E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C5E0;
	sub_82C37528(ctx, base);
loc_82B6C5E0:
	// bl 0x831156e8
	ctx.lr = 0x82B6C5E4;
	sub_831156E8(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r28,36
	ctx.r28.s64 = 36;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addis r3,r7,5
	ctx.r3.s64 = ctx.r7.s64 + 327680;
	// divw r6,r8,r28
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b6c620
	if (cr6.gt) goto loc_82B6C620;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6C620;
	sub_831CC188(ctx, base);
loc_82B6C620:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x83123890
	ctx.lr = 0x82B6C638;
	sub_83123890(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// stb r7,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r7.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// divw. r10,r5,r28
	ctx.r10.s32 = PPCDivide(ctx.r5.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// beq 0x82b6c6a0
	if (cr0.eq) goto loc_82B6C6A0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b6c700
	if (!cr6.gt) goto loc_82B6C700;
loc_82B6C674:
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x82B6C680;
	sub_82AB5F20(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b6c674
	if (cr6.gt) goto loc_82B6C674;
loc_82B6C6A0:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r4,r11,-352
	ctx.r4.s64 = ctx.r11.s64 + -352;
	// bl 0x837b0c10
	ctx.lr = 0x82B6C6B8;
	sub_837B0C10(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c41520
	ctx.lr = 0x82B6C6C8;
	sub_82C41520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6C6D4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9af88
	ctx.lr = 0x82B6C6DC;
	sub_82D9AF88(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C6F4;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C700:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6C70C;
	sub_831CC188(ctx, base);
loc_82B6C70C:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c720
	if (cr6.eq) goto loc_82B6C720;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C720;
	sub_82C37528(ctx, base);
loc_82B6C720:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-324
	ctx.r4.s64 = ctx.r11.s64 + -324;
	// bl 0x837b0c10
	ctx.lr = 0x82B6C744;
	sub_837B0C10(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lbz r6,342(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 342);
	// lbz r5,341(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 341);
	// bl 0x82c3f8f8
	ctx.lr = 0x82B6C758;
	sub_82C3F8F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6C764;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C77C;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C788:
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// bl 0x82b6b818
	ctx.lr = 0x82B6C798;
	sub_82B6B818(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-292
	ctx.r4.s64 = ctx.r11.s64 + -292;
	// bl 0x837b0c10
	ctx.lr = 0x82B6C7B4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b801f0
	ctx.lr = 0x82B6C7C0;
	sub_82B801F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6C7CC;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C7E4;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C7F0:
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c804
	if (cr6.eq) goto loc_82B6C804;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C804;
	sub_82C37528(ctx, base);
loc_82B6C804:
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r10,25048
	ctx.r11.s64 = ctx.r10.s64 + 25048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-276
	ctx.r3.s64 = ctx.r11.s64 + -276;
	// bl 0x82bc2cb0
	ctx.lr = 0x82B6C824;
	sub_82BC2CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// stw r3,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C83C;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C848:
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6cedc
	if (!cr6.eq) goto loc_82B6CEDC;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// beq cr6,0x82b6c870
	if (cr6.eq) goto loc_82B6C870;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C870;
	sub_82C37528(ctx, base);
loc_82B6C870:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6C880;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B6C884;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x82B6C890;
	sub_8312AE08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c8bc
	if (cr6.eq) goto loc_82B6C8BC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b9d548
	ctx.lr = 0x82B6C8B8;
	sub_82B9D548(ctx, base);
	// b 0x82b6c8e4
	goto loc_82B6C8E4;
loc_82B6C8BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b64fb8
	ctx.lr = 0x82B6C8C4;
	sub_82B64FB8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-236
	ctx.r3.s64 = ctx.r11.s64 + -236;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b9b808
	ctx.lr = 0x82B6C8E4;
	sub_82B9B808(ctx, base);
loc_82B6C8E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6C8F8;
	sub_83103100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6C904:
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6c940
	if (cr6.eq) goto loc_82B6C940;
	// bl 0x830fe8a0
	ctx.lr = 0x82B6C914;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x82B6C918;
	sub_835240D8(ctx, base);
	// ld r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 416);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpldi cr6,r10,500
	cr6.compare<uint64_t>(ctx.r10.u64, 500, xer);
	// blt cr6,0x82b6c940
	if (cr6.lt) goto loc_82B6C940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68580
	ctx.lr = 0x82B6C934;
	sub_82B68580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b68b68
	ctx.lr = 0x82B6C93C;
	sub_82B68B68(ctx, base);
	// std r30,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r30.u64);
loc_82B6C940:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b6cedc
	if (cr6.gt) goto loc_82B6CEDC;
	// li r25,1
	ctx.r25.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b6c978
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6C978;
	// bdzf 4*cr6+eq,0x82b6ce3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6CE3C;
	// bdzf 4*cr6+eq,0x82b6cedc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B6CEDC;
	// bne cr6,0x82b6cec0
	if (!cr6.eq) goto loc_82B6CEC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a9d8
	ctx.lr = 0x82B6C974;
	sub_82B6A9D8(ctx, base);
	// stw r25,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
loc_82B6C978:
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,4
	ctx.r24.s64 = 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6c998
	if (!cr6.eq) goto loc_82B6C998;
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6ccfc
	if (!cr6.eq) goto loc_82B6CCFC;
loc_82B6C998:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6C9A0;
	sub_82D19A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82d46928
	ctx.lr = 0x82B6C9AC;
	sub_82D46928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82B6C9B8;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6ccfc
	if (cr6.eq) goto loc_82B6CCFC;
	// lwz r3,312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6c9ec
	if (cr6.eq) goto loc_82B6C9EC;
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82b6c9ec
	if (cr6.eq) goto loc_82B6C9EC;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82b6c9ec
	if (cr6.eq) goto loc_82B6C9EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37528
	ctx.lr = 0x82B6C9EC;
	sub_82C37528(ctx, base);
loc_82B6C9EC:
	// lbz r11,202(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6ca14
	if (!cr6.eq) goto loc_82B6CA14;
	// stb r23,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r23.u8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r3,r11,-216
	ctx.r3.s64 = ctx.r11.s64 + -216;
	// bl 0x8399cff0
	ctx.lr = 0x82B6CA10;
	sub_8399CFF0(ctx, base);
	// b 0x82b6cce0
	goto loc_82B6CCE0;
loc_82B6CA14:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82b6ca58
	if (!cr6.eq) goto loc_82B6CA58;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r24,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r24.u8);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r10,25048
	ctx.r11.s64 = ctx.r10.s64 + 25048;
	// addi r4,r11,-192
	ctx.r4.s64 = ctx.r11.s64 + -192;
	// bl 0x837b0c10
	ctx.lr = 0x82B6CA3C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82c42678
	ctx.lr = 0x82B6CA48;
	sub_82C42678(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6CA54;
	sub_8387E8E0(ctx, base);
	// b 0x82b6cce4
	goto loc_82B6CCE4;
loc_82B6CA58:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82b6caa0
	if (!cr6.eq) goto loc_82B6CAA0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-168
	ctx.r4.s64 = ctx.r11.s64 + -168;
	// bl 0x837b0c10
	ctx.lr = 0x82B6CA84;
	sub_837B0C10(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82c421e8
	ctx.lr = 0x82B6CA90;
	sub_82C421E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6CA9C;
	sub_8387E8E0(ctx, base);
	// b 0x82b6cce4
	goto loc_82B6CCE4;
loc_82B6CAA0:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x82b6cbb4
	if (!cr6.eq) goto loc_82B6CBB4;
	// bl 0x831156e8
	ctx.lr = 0x82B6CAAC;
	sub_831156E8(ctx, base);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r28,36
	ctx.r28.s64 = 36;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r30,r31,180
	ctx.r30.s64 = ctx.r31.s64 + 180;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addis r3,r7,5
	ctx.r3.s64 = ctx.r7.s64 + 327680;
	// divw r6,r8,r28
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r28.s32);
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b6cae8
	if (cr6.gt) goto loc_82B6CAE8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6CAE8;
	sub_831CC188(ctx, base);
loc_82B6CAE8:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// bl 0x83123890
	ctx.lr = 0x82B6CB00;
	sub_83123890(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// stb r7,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r7.u8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// divw. r10,r5,r28
	ctx.r10.s32 = PPCDivide(ctx.r5.s32, ctx.r28.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82b6cb68
	if (cr0.eq) goto loc_82B6CB68;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// ble cr6,0x82b6cba8
	if (!cr6.gt) goto loc_82B6CBA8;
loc_82B6CB3C:
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ab5f20
	ctx.lr = 0x82B6CB48;
	sub_82AB5F20(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r28
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bgt cr6,0x82b6cb3c
	if (cr6.gt) goto loc_82B6CB3C;
loc_82B6CB68:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x837b0c10
	ctx.lr = 0x82B6CB80;
	sub_837B0C10(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82c41520
	ctx.lr = 0x82B6CB90;
	sub_82C41520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6CB9C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d9af88
	ctx.lr = 0x82B6CBA4;
	sub_82D9AF88(ctx, base);
	// b 0x82b6cce4
	goto loc_82B6CCE4;
loc_82B6CBA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B6CBB4;
	sub_831CC188(ctx, base);
loc_82B6CBB4:
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bne cr6,0x82b6cc04
	if (!cr6.eq) goto loc_82B6CC04;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x837b0c10
	ctx.lr = 0x82B6CBE0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r6,342(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 342);
	// lbz r5,341(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 341);
	// bl 0x82c3f8f8
	ctx.lr = 0x82B6CBF4;
	sub_82C3F8F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6CC00;
	sub_8387E8E0(ctx, base);
	// b 0x82b6cce4
	goto loc_82B6CCE4;
loc_82B6CC04:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// bne cr6,0x82b6cc54
	if (!cr6.eq) goto loc_82B6CC54;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// bl 0x82b6b818
	ctx.lr = 0x82B6CC1C;
	sub_82B6B818(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r9,25048
	ctx.r11.s64 = ctx.r9.s64 + 25048;
	// addi r4,r11,-80
	ctx.r4.s64 = ctx.r11.s64 + -80;
	// bl 0x837b0c10
	ctx.lr = 0x82B6CC38;
	sub_837B0C10(ctx, base);
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b801f0
	ctx.lr = 0x82B6CC44;
	sub_82B801F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B6CC50;
	sub_8387E8E0(ctx, base);
	// b 0x82b6cce4
	goto loc_82B6CCE4;
loc_82B6CC54:
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x82b6ccfc
	if (!cr6.eq) goto loc_82B6CCFC;
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r11,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B6CC68;
	sub_830FF290(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// beq cr6,0x82b6cc88
	if (cr6.eq) goto loc_82B6CC88;
	// bl 0x830ff290
	ctx.lr = 0x82B6CC78;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82b6cc8c
	if (!cr6.eq) goto loc_82B6CC8C;
loc_82B6CC88:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82B6CC8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6ccb0
	if (cr6.eq) goto loc_82B6CCB0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x82c3eec0
	ctx.lr = 0x82B6CCAC;
	sub_82C3EEC0(ctx, base);
	// b 0x82b6cce0
	goto loc_82B6CCE0;
loc_82B6CCB0:
	// bl 0x830ff290
	ctx.lr = 0x82B6CCB4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6ccfc
	if (cr6.eq) goto loc_82B6CCFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82c3e850
	ctx.lr = 0x82B6CCE0;
	sub_82C3E850(ctx, base);
loc_82B6CCE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B6CCE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b6ccfc
	if (cr6.eq) goto loc_82B6CCFC;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6CCFC;
	sub_83103100(ctx, base);
loc_82B6CCFC:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6cd50
	if (!cr6.eq) goto loc_82B6CD50;
	// bl 0x82d478c8
	ctx.lr = 0x82B6CD0C;
	sub_82D478C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cd50
	if (cr6.eq) goto loc_82B6CD50;
	// stb r25,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r25.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b652f8
	ctx.lr = 0x82B6CD24;
	sub_82B652F8(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B6CD30;
	sub_82D17DA0(ctx, base);
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cd50
	if (cr6.eq) goto loc_82B6CD50;
	// bl 0x82c3a610
	ctx.lr = 0x82B6CD40;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cd50
	if (cr6.eq) goto loc_82B6CD50;
	// bl 0x82c3a5a8
	ctx.lr = 0x82B6CD50;
	sub_82C3A5A8(ctx, base);
loc_82B6CD50:
	// bl 0x82dad2e0
	ctx.lr = 0x82B6CD54;
	sub_82DAD2E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6cdb0
	if (cr6.eq) goto loc_82B6CDB0;
	// lbz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cd80
	if (cr6.eq) goto loc_82B6CD80;
	// lbz r11,201(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 201);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b6cd84
	goto loc_82B6CD84;
loc_82B6CD80:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82B6CD84:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dafab0
	ctx.lr = 0x82B6CD90;
	sub_82DAFAB0(ctx, base);
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6cdb0
	if (!cr6.eq) goto loc_82B6CDB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82B6CDAC;
	sub_82DAFAF8(ctx, base);
	// stb r3,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r3.u8);
loc_82B6CDB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b66a28
	ctx.lr = 0x82B6CDB8;
	sub_82B66A28(ctx, base);
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cdd0
	if (cr6.eq) goto loc_82B6CDD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6a9d8
	ctx.lr = 0x82B6CDD0;
	sub_82B6A9D8(ctx, base);
loc_82B6CDD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b652a8
	ctx.lr = 0x82B6CDD8;
	sub_82B652A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6cedc
	if (cr6.eq) goto loc_82B6CEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b652f8
	ctx.lr = 0x82B6CDEC;
	sub_82B652F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82B6CDF8;
	sub_82D199D0(ctx, base);
	// bl 0x82d47978
	ctx.lr = 0x82B6CDFC;
	sub_82D47978(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B6CE00;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6CE04;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82b6ce2c
	if (!cr6.eq) goto loc_82B6CE2C;
	// bl 0x83a7d958
	ctx.lr = 0x82B6CE10;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B6CE14;
	sub_83524138(ctx, base);
	// addi r11,r3,2000
	ctx.r11.s64 = ctx.r3.s64 + 2000;
	// stw r23,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6CE2C:
	// stw r24,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6CE3C:
	// bl 0x83a7d958
	ctx.lr = 0x82B6CE40;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B6CE44;
	sub_83524138(ctx, base);
	// ld r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 352);
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// bge cr6,0x82b6cedc
	if (!cr6.lt) goto loc_82B6CEDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6CE58;
	sub_82D19A68(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6CE64;
	sub_82D2AEC8(ctx, base);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6ce88
	if (cr6.eq) goto loc_82B6CE88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6CE80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r9.u32);
loc_82B6CE88:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// bl 0x82c3d640
	ctx.lr = 0x82B6CE98;
	sub_82C3D640(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6CEAC;
	sub_83103100(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r9.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82B6CEC0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,7552(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7552);
	// bl 0x82d20da8
	ctx.lr = 0x82B6CED4;
	sub_82D20DA8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r10.u32);
loc_82B6CEDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6CEE8"))) PPC_WEAK_FUNC(sub_82B6CEE8);
PPC_FUNC_IMPL(__imp__sub_82B6CEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82B6CEF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,25428
	ctx.r4.s64 = ctx.r11.s64 + 25428;
	// bl 0x83103328
	ctx.lr = 0x82B6CF04;
	sub_83103328(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r8,r9,25984
	ctx.r8.s64 = ctx.r9.s64 + 25984;
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B6CF20:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stwu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b6cf20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B6CF20;
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B6CF38:
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stwu r27,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b6cf38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B6CF38;
	// stb r27,600(r30)
	PPC_STORE_U8(ctx.r30.u32 + 600, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,604
	ctx.r3.s64 = ctx.r30.s64 + 604;
	// bl 0x82b629b0
	ctx.lr = 0x82B6CF58;
	sub_82B629B0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 620, ctx.r27.u32);
	// ori r8,r10,65534
	ctx.r8.u64 = ctx.r10.u64 | 65534;
	// stw r11,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r11.u32);
	// addi r10,r30,620
	ctx.r10.s64 = ctx.r30.s64 + 620;
	// stw r11,628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 628, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r11.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r11,636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 636, ctx.r11.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r11,640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 640, ctx.r11.u32);
	// li r23,29
	ctx.r23.s64 = 29;
	// stw r11,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r11.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r11,648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 648, ctx.r11.u32);
	// addi r24,r9,17524
	ctx.r24.s64 = ctx.r9.s64 + 17524;
	// stw r8,652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 652, ctx.r8.u32);
	// stw r11,656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 656, ctx.r11.u32);
	// stw r11,660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 660, ctx.r11.u32);
	// stw r11,664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 664, ctx.r11.u32);
	// stw r11,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r11.u32);
	// stw r11,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r11.u32);
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r27,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r27.u32);
	// stw r27,680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 680, ctx.r27.u32);
	// addi r22,r10,272
	ctx.r22.s64 = ctx.r10.s64 + 272;
	// stw r27,684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 684, ctx.r27.u32);
	// addi r21,r11,272
	ctx.r21.s64 = ctx.r11.s64 + 272;
	// stw r27,692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 692, ctx.r27.u32);
loc_82B6CFDC:
	// addi r11,r26,106
	ctx.r11.s64 = ctx.r26.s64 + 106;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stwx r27,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r27.u32);
	// bl 0x82595718
	ctx.lr = 0x82B6CFFC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d014
	if (cr6.eq) goto loc_82B6D014;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82e76460
	ctx.lr = 0x82B6D00C;
	sub_82E76460(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82b6d018
	goto loc_82B6D018;
loc_82B6D014:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82B6D018:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82B6D02C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d058
	if (cr6.eq) goto loc_82B6D058;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82B6D048;
	sub_8257FA88(ctx, base);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// b 0x82b6d05c
	goto loc_82B6D05C;
loc_82B6D058:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B6D05C:
	// addi r11,r26,31
	ctx.r11.s64 = ctx.r26.s64 + 31;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b6d0cc
	if (cr6.eq) goto loc_82B6D0CC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b6d0b8
	if (cr6.eq) goto loc_82B6D0B8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B6D090;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b6d0b8
	if (cr6.lt) goto loc_82B6D0B8;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x82B6D0B4;
	sub_8257FB60(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
loc_82B6D0B8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d0c8
	if (cr6.eq) goto loc_82B6D0C8;
	// bl 0x8259b510
	ctx.lr = 0x82B6D0C8;
	sub_8259B510(ctx, base);
loc_82B6D0C8:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82B6D0CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b6d0dc
	if (cr6.eq) goto loc_82B6D0DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82B6D0DC;
	sub_8259B510(ctx, base);
loc_82B6D0DC:
	// addi r11,r26,128
	ctx.r11.s64 = ctx.r26.s64 + 128;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stwx r27,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r27.u32);
	// bl 0x82595718
	ctx.lr = 0x82B6D0FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d114
	if (cr6.eq) goto loc_82B6D114;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82e75a50
	ctx.lr = 0x82B6D10C;
	sub_82E75A50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82b6d118
	goto loc_82B6D118;
loc_82B6D114:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82B6D118:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82B6D12C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d158
	if (cr6.eq) goto loc_82B6D158;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82B6D148;
	sub_8257FA88(ctx, base);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// b 0x82b6d15c
	goto loc_82B6D15C;
loc_82B6D158:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B6D15C:
	// addi r11,r26,9
	ctx.r11.s64 = ctx.r26.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b6d1cc
	if (cr6.eq) goto loc_82B6D1CC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b6d1b8
	if (cr6.eq) goto loc_82B6D1B8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B6D190;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b6d1b8
	if (cr6.lt) goto loc_82B6D1B8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8257fb60
	ctx.lr = 0x82B6D1B4;
	sub_8257FB60(ctx, base);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
loc_82B6D1B8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d1c8
	if (cr6.eq) goto loc_82B6D1C8;
	// bl 0x8259b510
	ctx.lr = 0x82B6D1C8;
	sub_8259B510(ctx, base);
loc_82B6D1C8:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_82B6D1CC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b6d1dc
	if (cr6.eq) goto loc_82B6D1DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259b510
	ctx.lr = 0x82B6D1DC;
	sub_8259B510(ctx, base);
loc_82B6D1DC:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// blt cr6,0x82b6cfdc
	if (cr6.lt) goto loc_82B6CFDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6D1FC"))) PPC_WEAK_FUNC(sub_82B6D1FC);
PPC_FUNC_IMPL(__imp__sub_82B6D1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6D200"))) PPC_WEAK_FUNC(sub_82B6D200);
PPC_FUNC_IMPL(__imp__sub_82B6D200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6D208;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,25984
	ctx.r10.s64 = ctx.r11.s64 + 25984;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,676(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b6d238
	if (cr6.eq) goto loc_82B6D238;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B6D238;
	sub_825952B8(ctx, base);
loc_82B6D238:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,604
	ctx.r4.s64 = ctx.r31.s64 + 604;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e5a698
	ctx.lr = 0x82B6D25C;
	sub_82E5A698(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// bl 0x825952b8
	ctx.lr = 0x82B6D26C;
	sub_825952B8(ctx, base);
	// addi r11,r31,424
	ctx.r11.s64 = ctx.r31.s64 + 424;
	// li r29,21
	ctx.r29.s64 = 21;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82B6D278:
	// lwzu r3,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d288
	if (cr6.eq) goto loc_82B6D288;
	// bl 0x8259b510
	ctx.lr = 0x82B6D288;
	sub_8259B510(ctx, base);
loc_82B6D288:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82b6d278
	if (!cr0.lt) goto loc_82B6D278;
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// li r29,21
	ctx.r29.s64 = 21;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_82B6D29C:
	// lwzu r3,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d2ac
	if (cr6.eq) goto loc_82B6D2AC;
	// bl 0x8259b510
	ctx.lr = 0x82B6D2AC;
	sub_8259B510(ctx, base);
loc_82B6D2AC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x82b6d29c
	if (!cr0.lt) goto loc_82B6D29C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82B6D2BC;
	sub_831032A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6D2C4"))) PPC_WEAK_FUNC(sub_82B6D2C4);
PPC_FUNC_IMPL(__imp__sub_82B6D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6D2C8"))) PPC_WEAK_FUNC(sub_82B6D2C8);
PPC_FUNC_IMPL(__imp__sub_82B6D2C8) {
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
	// bl 0x82b6d200
	ctx.lr = 0x82B6D2E8;
	sub_82B6D200(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6d300
	if (cr6.eq) goto loc_82B6D300;
	// bl 0x82416268
	ctx.lr = 0x82B6D2FC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6D300:
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

__attribute__((alias("__imp__sub_82B6D318"))) PPC_WEAK_FUNC(sub_82B6D318);
PPC_FUNC_IMPL(__imp__sub_82B6D318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6D320;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82b6d370
	if (cr6.eq) goto loc_82B6D370;
loc_82B6D350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B6D35C;
	sub_835977D8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b6d350
	if (!cr6.eq) goto loc_82B6D350;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82B6D370:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b6bd38
	ctx.lr = 0x82B6D37C;
	sub_82B6BD38(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b6d398
	if (cr6.eq) goto loc_82B6D398;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B6D398;
	sub_825952B8(ctx, base);
loc_82B6D398:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6D3A0"))) PPC_WEAK_FUNC(sub_82B6D3A0);
PPC_FUNC_IMPL(__imp__sub_82B6D3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6D3A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B6D3C4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// bl 0x830ff290
	ctx.lr = 0x82B6D3D4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6D3D8;
	sub_830FFAA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,14
	cr6.compare<uint32_t>(ctx.r3.u32, 14, xer);
	// bne cr6,0x82b6d3fc
	if (!cr6.eq) goto loc_82B6D3FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04858
	ctx.lr = 0x82B6D3EC;
	sub_82F04858(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04dc0
	ctx.lr = 0x82B6D3F8;
	sub_82F04DC0(ctx, base);
	// b 0x82b6d484
	goto loc_82B6D484;
loc_82B6D3FC:
	// bl 0x8314ee28
	ctx.lr = 0x82B6D400;
	sub_8314EE28(ctx, base);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// beq cr6,0x82b6d444
	if (cr6.eq) goto loc_82B6D444;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// beq cr6,0x82b6d444
	if (cr6.eq) goto loc_82B6D444;
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// beq cr6,0x82b6d444
	if (cr6.eq) goto loc_82B6D444;
	// cmplwi cr6,r30,9
	cr6.compare<uint32_t>(ctx.r30.u32, 9, xer);
	// beq cr6,0x82b6d444
	if (cr6.eq) goto loc_82B6D444;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// beq cr6,0x82b6d444
	if (cr6.eq) goto loc_82B6D444;
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(ctx.r30.u32, 13, xer);
	// beq cr6,0x82b6d444
	if (cr6.eq) goto loc_82B6D444;
	// bl 0x82f04858
	ctx.lr = 0x82B6D434;
	sub_82F04858(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82f04dc0
	ctx.lr = 0x82B6D440;
	sub_82F04DC0(ctx, base);
	// b 0x82b6d484
	goto loc_82B6D484;
loc_82B6D444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123888
	ctx.lr = 0x82B6D44C;
	sub_83123888(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B6D458;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c448
	ctx.lr = 0x82B6D464;
	sub_8311C448(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b6d484
	if (!cr6.eq) goto loc_82B6D484;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x82B6D484;
	sub_82AB5F20(ctx, base);
loc_82B6D484:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b6d4b0
	if (!cr6.eq) goto loc_82B6D4B0;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x82B6D4B0;
	sub_82AB5F20(ctx, base);
loc_82B6D4B0:
	// bl 0x82c403d0
	ctx.lr = 0x82B6D4B4;
	sub_82C403D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6d4d4
	if (cr6.eq) goto loc_82B6D4D4;
	// li r11,253
	ctx.r11.s64 = 253;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x82B6D4D4;
	sub_82AB5F20(ctx, base);
loc_82B6D4D4:
	// cmplwi cr6,r30,19
	cr6.compare<uint32_t>(ctx.r30.u32, 19, xer);
	// bne cr6,0x82b6d50c
	if (!cr6.eq) goto loc_82B6D50C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b6d4fc
	if (cr6.eq) goto loc_82B6D4FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ce420
	ctx.lr = 0x82B6D4F8;
	sub_831CE420(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82B6D4FC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24120
	ctx.r4.s64 = ctx.r11.s64 + 24120;
	// bl 0x82ab5f20
	ctx.lr = 0x82B6D50C;
	sub_82AB5F20(ctx, base);
loc_82B6D50C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b6d318
	ctx.lr = 0x82B6D518;
	sub_82B6D318(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d528
	if (cr6.eq) goto loc_82B6D528;
	// bl 0x82416268
	ctx.lr = 0x82B6D528;
	sub_82416268(ctx, base);
loc_82B6D528:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6D530"))) PPC_WEAK_FUNC(sub_82B6D530);
PPC_FUNC_IMPL(__imp__sub_82B6D530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82B6D538;
	__savegprlr_21(ctx, base);
	// stwu r1,-2640(r1)
	ea = -2640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r6,r11,7704
	ctx.r6.s64 = ctx.r11.s64 + 7704;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c38d98
	ctx.lr = 0x82B6D554;
	sub_82C38D98(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r8,r10,25680
	ctx.r8.s64 = ctx.r10.s64 + 25680;
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// addi r7,r9,25676
	ctx.r7.s64 = ctx.r9.s64 + 25676;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r25,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r25.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stw r25,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r25.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// ori r24,r6,65535
	ctx.r24.u64 = ctx.r6.u64 | 65535;
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stb r27,200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 200, ctx.r27.u8);
	// stb r30,201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 201, ctx.r30.u8);
	// stb r30,202(r31)
	PPC_STORE_U8(ctx.r31.u32 + 202, ctx.r30.u8);
	// stb r30,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r30.u8);
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// stb r30,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r30.u8);
	// stb r30,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r30.u8);
	// stb r30,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r30.u8);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stb r30,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r30.u8);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stb r30,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r30.u8);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// addi r11,r31,212
	ctx.r11.s64 = ctx.r31.s64 + 212;
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stb r30,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r30.u8);
	// sth r24,268(r31)
	PPC_STORE_U16(ctx.r31.u32 + 268, ctx.r24.u16);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stb r27,340(r31)
	PPC_STORE_U8(ctx.r31.u32 + 340, ctx.r27.u8);
	// stb r27,341(r31)
	PPC_STORE_U8(ctx.r31.u32 + 341, ctx.r27.u8);
	// stb r30,342(r31)
	PPC_STORE_U8(ctx.r31.u32 + 342, ctx.r30.u8);
	// stb r30,343(r31)
	PPC_STORE_U8(ctx.r31.u32 + 343, ctx.r30.u8);
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// stb r30,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r30.u8);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// std r30,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r30.u64);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// std r30,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r30.u64);
	// bl 0x830fe8a0
	ctx.lr = 0x82B6D66C;
	sub_830FE8A0(ctx, base);
	// bl 0x835240d8
	ctx.lr = 0x82B6D670;
	sub_835240D8(ctx, base);
	// std r3,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r3.u64);
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r5,r28,7400
	ctx.r5.s64 = ctx.r28.s64 + 7400;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// addi r11,r31,376
	ctx.r11.s64 = ctx.r31.s64 + 376;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r10,r31,396
	ctx.r10.s64 = ctx.r31.s64 + 396;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// lwz r4,-4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// bl 0x82d20ae0
	ctx.lr = 0x82B6D6B0;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7400(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7400);
	// bl 0x82d23390
	ctx.lr = 0x82B6D6C0;
	sub_82D23390(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x82B6D6C4;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d6d0
	if (cr6.eq) goto loc_82B6D6D0;
	// bl 0x839a04b8
	ctx.lr = 0x82B6D6D0;
	sub_839A04B8(ctx, base);
loc_82B6D6D0:
	// bl 0x831156e8
	ctx.lr = 0x82B6D6D4;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r22,52(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// ori r9,r11,37454
	ctx.r9.u64 = ctx.r11.u64 | 37454;
	// stbx r27,r22,r9
	PPC_STORE_U8(ctx.r22.u32 + ctx.r9.u32, ctx.r27.u8);
	// lwz r11,15392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15392);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stb r8,343(r31)
	PPC_STORE_U8(ctx.r31.u32 + 343, ctx.r8.u8);
	// bne cr6,0x82b6d710
	if (!cr6.eq) goto loc_82B6D710;
	// bl 0x831156e8
	ctx.lr = 0x82B6D700;
	sub_831156E8(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6d710
	if (!cr6.eq) goto loc_82B6D710;
	// stb r30,343(r31)
	PPC_STORE_U8(ctx.r31.u32 + 343, ctx.r30.u8);
loc_82B6D710:
	// bl 0x830ff290
	ctx.lr = 0x82B6D714;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x82B6D718;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6d950
	if (cr6.eq) goto loc_82B6D950;
	// stb r27,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r27.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B6D730;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B6D734;
	sub_830FF988(ctx, base);
	// stb r3,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r3.u8);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// bl 0x82e765e8
	ctx.lr = 0x82B6D748;
	sub_82E765E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e76b28
	ctx.lr = 0x82B6D750;
	sub_82E76B28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6D760;
	sub_82D19788(ctx, base);
	// lbz r11,205(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 205);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6d984
	if (cr6.eq) goto loc_82B6D984;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6D77C;
	sub_82D19788(ctx, base);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82B6D790;
	sub_82D20EB8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B6D794;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x82b6d7b4
	if (cr6.eq) goto loc_82B6D7B4;
	// bl 0x830ff290
	ctx.lr = 0x82B6D7A4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6d7b8
	if (!cr6.eq) goto loc_82B6D7B8;
loc_82B6D7B4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6D7B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6d7e0
	if (!cr6.eq) goto loc_82B6D7E0;
	// bl 0x830ff290
	ctx.lr = 0x82B6D7C8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6d804
	if (cr6.eq) goto loc_82B6D804;
loc_82B6D7E0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6D7F0;
	sub_82D19788(ctx, base);
	// lis r5,49
	ctx.r5.s64 = 3211264;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,47
	ctx.r5.u64 = ctx.r5.u64 | 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82B6D804;
	sub_82D20EB8(ctx, base);
loc_82B6D804:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,696
	ctx.r4.s64 = 696;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B6D81C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d830
	if (cr6.eq) goto loc_82B6D830;
	// bl 0x82b6cee8
	ctx.lr = 0x82B6D828;
	sub_82B6CEE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82b6d834
	goto loc_82B6D834;
loc_82B6D830:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B6D834:
	// stw r4,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b6d848
	if (cr6.eq) goto loc_82B6D848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6D848;
	sub_83103100(ctx, base);
loc_82B6D848:
	// bl 0x82dad2e0
	ctx.lr = 0x82B6D84C;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d8e0
	if (cr6.eq) goto loc_82B6D8E0;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r4,9
	ctx.r4.s64 = 9;
	// ori r28,r11,37856
	ctx.r28.u64 = ctx.r11.u64 | 37856;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82dae510
	ctx.lr = 0x82B6D86C;
	sub_82DAE510(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dae510
	ctx.lr = 0x82B6D87C;
	sub_82DAE510(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dae510
	ctx.lr = 0x82B6D88C;
	sub_82DAE510(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dae510
	ctx.lr = 0x82B6D89C;
	sub_82DAE510(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B6D8A8;
	sub_82DB0A88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6d8e0
	if (cr6.eq) goto loc_82B6D8E0;
	// stb r27,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B6D8C4;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6d8dc
	if (!cr6.eq) goto loc_82B6D8DC;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// bne cr6,0x82b6d8e0
	if (!cr6.eq) goto loc_82B6D8E0;
loc_82B6D8DC:
	// stb r27,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r27.u8);
loc_82B6D8E0:
	// bl 0x82d86078
	ctx.lr = 0x82B6D8E4;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82a47dc0
	ctx.lr = 0x82B6D8F0;
	sub_82A47DC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6d984
	if (cr6.eq) goto loc_82B6D984;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82daa490
	ctx.lr = 0x82B6D904;
	sub_82DAA490(ctx, base);
	// lbz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6d984
	if (cr6.eq) goto loc_82B6D984;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,24548
	ctx.r3.s64 = ctx.r11.s64 + 24548;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B6D928;
	sub_82D2FA90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6d984
	if (cr6.eq) goto loc_82B6D984;
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,559
	ctx.r4.u64 = ctx.r4.u64 | 559;
	// bl 0x82d2ada8
	ctx.lr = 0x82B6D940;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x83103100
	ctx.lr = 0x82B6D94C;
	sub_83103100(ctx, base);
	// b 0x82b6d984
	goto loc_82B6D984;
loc_82B6D950:
	// bl 0x830ff290
	ctx.lr = 0x82B6D954;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82b6d984
	if (!cr6.eq) goto loc_82B6D984;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6D970;
	sub_82D19788(ctx, base);
	// lis r5,49
	ctx.r5.s64 = 3211264;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,47
	ctx.r5.u64 = ctx.r5.u64 | 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82B6D984;
	sub_82D20EB8(ctx, base);
loc_82B6D984:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r31,318
	ctx.r9.s64 = ctx.r31.s64 + 318;
	// li r26,255
	ctx.r26.s64 = 255;
loc_82B6D998:
	// stbx r26,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b6d998
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B6D998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9a8
	ctx.lr = 0x82B6D9AC;
	sub_82D1A9A8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stb r30,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r30.u8);
	// stb r30,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r30.u8);
	// lwz r11,32492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32492);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82b6d9c8
	if (cr6.eq) goto loc_82B6D9C8;
	// stb r27,203(r31)
	PPC_STORE_U8(ctx.r31.u32 + 203, ctx.r27.u8);
loc_82B6D9C8:
	// bl 0x831156e8
	ctx.lr = 0x82B6D9CC;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r29,r11,14904
	ctx.r29.u64 = ctx.r11.u64 | 14904;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B6D9E0;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// add r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B6D9F8;
	sub_831239E0(ctx, base);
	// lwz r21,0(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831156e8
	ctx.lr = 0x82B6DA00;
	sub_831156E8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,52(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// add r4,r6,r29
	ctx.r4.u64 = ctx.r6.u64 + ctx.r29.u64;
	// bl 0x831239e0
	ctx.lr = 0x82B6DA18;
	sub_831239E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x83170118
	ctx.lr = 0x82B6DA28;
	sub_83170118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b679f8
	ctx.lr = 0x82B6DA30;
	sub_82B679F8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82B6DA34;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DA38;
	sub_830FFAA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B6DA40;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DA44;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b6da58
	if (cr6.eq) goto loc_82B6DA58;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6da5c
	if (!cr6.eq) goto loc_82B6DA5C;
loc_82B6DA58:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DA5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6da74
	if (!cr6.eq) goto loc_82B6DA74;
	// cmplwi cr6,r29,26
	cr6.compare<uint32_t>(ctx.r29.u32, 26, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6da78
	if (!cr6.eq) goto loc_82B6DA78;
loc_82B6DA74:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DA78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6dad4
	if (!cr6.eq) goto loc_82B6DAD4;
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6dae0
	if (cr6.eq) goto loc_82B6DAE0;
	// bl 0x830ff290
	ctx.lr = 0x82B6DA94;
	sub_830FF290(ctx, base);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x830ff290
	ctx.lr = 0x82B6DA9C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DAA0;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x82b6dac4
	if (cr6.eq) goto loc_82B6DAC4;
	// cmplwi cr6,r29,54
	cr6.compare<uint32_t>(ctx.r29.u32, 54, xer);
	// beq cr6,0x82b6dac4
	if (cr6.eq) goto loc_82B6DAC4;
	// cmplwi cr6,r29,55
	cr6.compare<uint32_t>(ctx.r29.u32, 55, xer);
	// beq cr6,0x82b6dac4
	if (cr6.eq) goto loc_82B6DAC4;
	// cmplwi cr6,r29,56
	cr6.compare<uint32_t>(ctx.r29.u32, 56, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6dac8
	if (!cr6.eq) goto loc_82B6DAC8;
loc_82B6DAC4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DAC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6dae0
	if (!cr6.eq) goto loc_82B6DAE0;
loc_82B6DAD4:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831be7b8
	ctx.lr = 0x82B6DAE0;
	sub_831BE7B8(ctx, base);
loc_82B6DAE0:
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6db40
	if (!cr6.eq) goto loc_82B6DB40;
	// bl 0x830ff290
	ctx.lr = 0x82B6DAF0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DAF4;
	sub_830FFAA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B6DAFC;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DB00;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b6db14
	if (cr6.eq) goto loc_82B6DB14;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6db18
	if (!cr6.eq) goto loc_82B6DB18;
loc_82B6DB14:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DB18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6db30
	if (!cr6.eq) goto loc_82B6DB30;
	// cmplwi cr6,r29,26
	cr6.compare<uint32_t>(ctx.r29.u32, 26, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6db34
	if (!cr6.eq) goto loc_82B6DB34;
loc_82B6DB30:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DB34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6db60
	if (cr6.eq) goto loc_82B6DB60;
loc_82B6DB40:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831238c8
	ctx.lr = 0x82B6DB50;
	sub_831238C8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831238c8
	ctx.lr = 0x82B6DB60;
	sub_831238C8(ctx, base);
loc_82B6DB60:
	// lbz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6db78
	if (cr6.eq) goto loc_82B6DB78;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82b6db94
	goto loc_82B6DB94;
loc_82B6DB78:
	// bl 0x830ff290
	ctx.lr = 0x82B6DB7C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DB80;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82b6db90
	if (cr6.eq) goto loc_82B6DB90;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bne cr6,0x82b6db94
	if (!cr6.eq) goto loc_82B6DB94;
loc_82B6DB90:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82B6DB94:
	// bl 0x831156e8
	ctx.lr = 0x82B6DB98;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bge cr6,0x82b6dbb0
	if (!cr6.lt) goto loc_82B6DBB0;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// ori r9,r11,37448
	ctx.r9.u64 = ctx.r11.u64 | 37448;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
loc_82B6DBB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65198
	ctx.lr = 0x82B6DBB8;
	sub_82B65198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65030
	ctx.lr = 0x82B6DBC0;
	sub_82B65030(ctx, base);
	// bl 0x839a1610
	ctx.lr = 0x82B6DBC4;
	sub_839A1610(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6dbe0
	if (cr6.eq) goto loc_82B6DBE0;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// bl 0x839a1ec8
	ctx.lr = 0x82B6DBD8;
	sub_839A1EC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x839a0648
	ctx.lr = 0x82B6DBE0;
	sub_839A0648(ctx, base);
loc_82B6DBE0:
	// addis r11,r22,6
	ctx.r11.s64 = ctx.r22.s64 + 393216;
	// stb r26,337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 337, ctx.r26.u8);
	// stb r26,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r26.u8);
	// addi r11,r11,-30316
	ctx.r11.s64 = ctx.r11.s64 + -30316;
	// lbz r10,169(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 169);
	// stb r10,338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 338, ctx.r10.u8);
	// lbz r9,170(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 170);
	// stb r9,339(r31)
	PPC_STORE_U8(ctx.r31.u32 + 339, ctx.r9.u8);
	// bl 0x830ff290
	ctx.lr = 0x82B6DC04;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DC08;
	sub_830FFAA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B6DC10;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B6DC14;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82b6dc28
	if (cr6.eq) goto loc_82B6DC28;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6dc2c
	if (!cr6.eq) goto loc_82B6DC2C;
loc_82B6DC28:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DC2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6dc44
	if (!cr6.eq) goto loc_82B6DC44;
	// cmplwi cr6,r29,26
	cr6.compare<uint32_t>(ctx.r29.u32, 26, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82b6dc48
	if (!cr6.eq) goto loc_82B6DC48;
loc_82B6DC44:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B6DC48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6dca4
	if (cr6.eq) goto loc_82B6DCA4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r27,r31,344
	ctx.r27.s64 = ctx.r31.s64 + 344;
	// ori r28,r11,19020
	ctx.r28.u64 = ctx.r11.u64 | 19020;
loc_82B6DC64:
	// bl 0x82f00728
	ctx.lr = 0x82B6DC68;
	sub_82F00728(ctx, base);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82b6dc78
	if (cr6.lt) goto loc_82B6DC78;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82b6dc80
	goto loc_82B6DC80;
loc_82B6DC78:
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
loc_82B6DC80:
	// stbx r11,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82b6dc64
	if (cr6.lt) goto loc_82B6DC64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6d3a0
	ctx.lr = 0x82B6DC98;
	sub_82B6D3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2640
	ctx.r1.s64 = ctx.r1.s64 + 2640;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82B6DCA4:
	// stb r30,345(r31)
	PPC_STORE_U8(ctx.r31.u32 + 345, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// bl 0x82b6d3a0
	ctx.lr = 0x82B6DCB4;
	sub_82B6D3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2640
	ctx.r1.s64 = ctx.r1.s64 + 2640;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6DCC0"))) PPC_WEAK_FUNC(sub_82B6DCC0);
PPC_FUNC_IMPL(__imp__sub_82B6DCC0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6dce8
	if (cr6.lt) goto loc_82B6DCE8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b6dcec
	goto loc_82B6DCEC;
loc_82B6DCE8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B6DCEC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,440
	ctx.r4.s64 = 440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B6DD08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6dd24
	if (cr6.eq) goto loc_82B6DD24;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b6d530
	ctx.lr = 0x82B6DD1C;
	sub_82B6D530(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b6dd28
	if (!cr6.eq) goto loc_82B6DD28;
loc_82B6DD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B6DD28:
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

__attribute__((alias("__imp__sub_82B6DD40"))) PPC_WEAK_FUNC(sub_82B6DD40);
PPC_FUNC_IMPL(__imp__sub_82B6DD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6DD48;
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
	// bl 0x8308e078
	ctx.lr = 0x82B6DD60;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B6DD78;
	sub_82D253F8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,26880
	ctx.r8.s64 = ctx.r10.s64 + 26880;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// lwz r4,8064(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8064);
	// bl 0x82d20ae0
	ctx.lr = 0x82B6DDB4;
	sub_82D20AE0(ctx, base);
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8068(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8068);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B6DDC8;
	sub_82D23390(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8072(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	// bl 0x82d20ae0
	ctx.lr = 0x82B6DDD8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6DDE4"))) PPC_WEAK_FUNC(sub_82B6DDE4);
PPC_FUNC_IMPL(__imp__sub_82B6DDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6DDE8"))) PPC_WEAK_FUNC(sub_82B6DDE8);
PPC_FUNC_IMPL(__imp__sub_82B6DDE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82B6DE00;
	sub_82DA8D18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6DE1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8216);
	// rlwimi r11,r7,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,8216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8216);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82B6DE58"))) PPC_WEAK_FUNC(sub_82B6DE58);
PPC_FUNC_IMPL(__imp__sub_82B6DE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6DE60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82B6DE74;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b6de8c
	if (!cr6.eq) goto loc_82B6DE8C;
loc_82B6DE80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B6DE8C:
	// bl 0x830ff290
	ctx.lr = 0x82B6DE90;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6de80
	if (cr6.eq) goto loc_82B6DE80;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82b6dedc
	if (cr6.eq) goto loc_82B6DEDC;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x82b6dedc
	if (cr6.eq) goto loc_82B6DEDC;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B6DEC4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6df3c
	if (cr6.eq) goto loc_82B6DF3C;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da2a60
	ctx.lr = 0x82B6DED8;
	sub_82DA2A60(ctx, base);
	// b 0x82b6df1c
	goto loc_82B6DF1C;
loc_82B6DEDC:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82db4e20
	ctx.lr = 0x82B6DEE4;
	sub_82DB4E20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6df40
	if (cr6.eq) goto loc_82B6DF40;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B6DF08;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6df3c
	if (cr6.eq) goto loc_82B6DF3C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x83815cb0
	ctx.lr = 0x82B6DF1C;
	sub_83815CB0(ctx, base);
loc_82B6DF1C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6dd40
	ctx.lr = 0x82B6DF30;
	sub_82B6DD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B6DF3C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B6DF40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6DF4C"))) PPC_WEAK_FUNC(sub_82B6DF4C);
PPC_FUNC_IMPL(__imp__sub_82B6DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6DF50"))) PPC_WEAK_FUNC(sub_82B6DF50);
PPC_FUNC_IMPL(__imp__sub_82B6DF50) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,26880
	ctx.r9.s64 = ctx.r11.s64 + 26880;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B6DF88;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b6dfa0
	if (cr6.eq) goto loc_82B6DFA0;
	// bl 0x82416268
	ctx.lr = 0x82B6DF9C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6DFA0:
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

__attribute__((alias("__imp__sub_82B6DFB8"))) PPC_WEAK_FUNC(sub_82B6DFB8);
PPC_FUNC_IMPL(__imp__sub_82B6DFB8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B6DFD4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e028
	if (cr6.eq) goto loc_82B6E028;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8d18
	ctx.lr = 0x82B6DFE8;
	sub_82DA8D18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6DFFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// bl 0x82da8e68
	ctx.lr = 0x82B6E014;
	sub_82DA8E68(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82da9740
	ctx.lr = 0x82B6E020;
	sub_82DA9740(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82B6E028;
	sub_82DA8C38(ctx, base);
loc_82B6E028:
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

__attribute__((alias("__imp__sub_82B6E040"))) PPC_WEAK_FUNC(sub_82B6E040);
PPC_FUNC_IMPL(__imp__sub_82B6E040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6e050
	if (cr6.lt) goto loc_82B6E050;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82B6E050:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82b6de58
	sub_82B6DE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6E058"))) PPC_WEAK_FUNC(sub_82B6E058);
PPC_FUNC_IMPL(__imp__sub_82B6E058) {
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
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blt cr6,0x82b6e098
	if (cr6.lt) goto loc_82B6E098;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82B6E098:
	// li r9,19
	ctx.r9.s64 = 19;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B6E0EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// lwz r6,136(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lwz r11,8216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r6.u32);
	// lwz r11,8216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B6E124;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// lwz r11,8216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82B6E15C"))) PPC_WEAK_FUNC(sub_82B6E15C);
PPC_FUNC_IMPL(__imp__sub_82B6E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6E160"))) PPC_WEAK_FUNC(sub_82B6E160);
PPC_FUNC_IMPL(__imp__sub_82B6E160) {
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
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// bl 0x82da8c38
	ctx.lr = 0x82B6E17C;
	sub_82DA8C38(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82da8c38
	ctx.lr = 0x82B6E184;
	sub_82DA8C38(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6e1a8
	if (cr6.lt) goto loc_82B6E1A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B6E1A8;
	sub_825952B8(ctx, base);
loc_82B6E1A8:
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

__attribute__((alias("__imp__sub_82B6E1D0"))) PPC_WEAK_FUNC(sub_82B6E1D0);
PPC_FUNC_IMPL(__imp__sub_82B6E1D0) {
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
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x82b6dde8
	ctx.lr = 0x82B6E200;
	sub_82B6DDE8(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82b6dde8
	ctx.lr = 0x82B6E208;
	sub_82B6DDE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6e058
	ctx.lr = 0x82B6E210;
	sub_82B6E058(ctx, base);
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

__attribute__((alias("__imp__sub_82B6E228"))) PPC_WEAK_FUNC(sub_82B6E228);
PPC_FUNC_IMPL(__imp__sub_82B6E228) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82b6e2a8
	if (!cr6.eq) goto loc_82B6E2A8;
	// bl 0x82d19cd0
	ctx.lr = 0x82B6E24C;
	sub_82D19CD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82b6dde8
	ctx.lr = 0x82B6E26C;
	sub_82B6DDE8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b6dde8
	ctx.lr = 0x82B6E274;
	sub_82B6DDE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6e058
	ctx.lr = 0x82B6E27C;
	sub_82B6E058(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82db6788
	ctx.lr = 0x82B6E28C;
	sub_82DB6788(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6e2a4
	if (cr6.eq) goto loc_82B6E2A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82B6E2A4:
	// bl 0x82b6e160
	ctx.lr = 0x82B6E2A8;
	sub_82B6E160(ctx, base);
loc_82B6E2A8:
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

__attribute__((alias("__imp__sub_82B6E2C0"))) PPC_WEAK_FUNC(sub_82B6E2C0);
PPC_FUNC_IMPL(__imp__sub_82B6E2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B6E2C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82db6558
	ctx.lr = 0x82B6E2D8;
	sub_82DB6558(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x82b6e328
	if (!cr6.eq) goto loc_82B6E328;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,26780
	ctx.r5.s64 = ctx.r11.s64 + 26780;
	// bl 0x82d20da8
	ctx.lr = 0x82B6E2F8;
	sub_82D20DA8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6E300;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6E30C;
	sub_82D2AEC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B6E314;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82B6E318;
	sub_83574C00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82B6E320;
	sub_82D44FA8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B6E328:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19cd0
	ctx.lr = 0x82B6E330;
	sub_82D19CD0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, xer);
	// blt cr6,0x82b6e340
	if (cr6.lt) goto loc_82B6E340;
	// addi r24,r25,-1
	ctx.r24.s64 = ctx.r25.s64 + -1;
loc_82B6E340:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// beq cr6,0x82b6e480
	if (cr6.eq) goto loc_82B6E480;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r30,-31777
	ctx.r30.s64 = -2082537472;
	// li r26,15
	ctx.r26.s64 = 15;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
loc_82B6E360:
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// bl 0x82da8d18
	ctx.lr = 0x82B6E374;
	sub_82DA8D18(ctx, base);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// stw r8,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B6E398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// bl 0x82da8d18
	ctx.lr = 0x82B6E3B4;
	sub_82DA8D18(ctx, base);
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// oris r11,r5,65532
	ctx.r11.u64 = ctx.r5.u64 | 4294705152;
	// or r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stw r10,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6E3D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// bl 0x82b6e058
	ctx.lr = 0x82B6E3F4;
	sub_82B6E058(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,112(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// bl 0x82db6788
	ctx.lr = 0x82B6E404;
	sub_82DB6788(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b6e438
	if (cr6.eq) goto loc_82B6E438;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b6e478
	if (cr6.eq) goto loc_82B6E478;
	// bl 0x82b6e160
	ctx.lr = 0x82B6E428;
	sub_82B6E160(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x82b6e360
	if (cr6.lt) goto loc_82B6E360;
	// b 0x82b6e480
	goto loc_82B6E480;
loc_82B6E438:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r11,108(r27)
	PPC_STORE_U8(ctx.r27.u32 + 108, ctx.r11.u8);
	// bl 0x82da8c38
	ctx.lr = 0x82B6E448;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82da8c38
	ctx.lr = 0x82B6E450;
	sub_82DA8C38(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b6e4b8
	if (cr6.lt) goto loc_82B6E4B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B6E470;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B6E478:
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// bl 0x82b6e160
	ctx.lr = 0x82B6E480;
	sub_82B6E160(ctx, base);
loc_82B6E480:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B6E498;
	sub_82D20F50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82B6E4B8;
	sub_82D1EBF8(ctx, base);
loc_82B6E4B8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6E4C0"))) PPC_WEAK_FUNC(sub_82B6E4C0);
PPC_FUNC_IMPL(__imp__sub_82B6E4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6E4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82B6E4D8;
	sub_82D19CD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B6E4E0;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e544
	if (cr6.eq) goto loc_82B6E544;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// bl 0x82b6dde8
	ctx.lr = 0x82B6E508;
	sub_82B6DDE8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b6dde8
	ctx.lr = 0x82B6E510;
	sub_82B6DDE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6e058
	ctx.lr = 0x82B6E518;
	sub_82B6E058(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82db6788
	ctx.lr = 0x82B6E528;
	sub_82DB6788(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b6e550
	if (!cr6.eq) goto loc_82B6E550;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// bl 0x82b6e160
	ctx.lr = 0x82B6E544;
	sub_82B6E160(ctx, base);
loc_82B6E544:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6E550:
	// bl 0x830ff290
	ctx.lr = 0x82B6E554;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b6e570
	if (!cr6.eq) goto loc_82B6E570;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6e160
	ctx.lr = 0x82B6E564;
	sub_82B6E160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6E570:
	// li r30,9
	ctx.r30.s64 = 9;
	// bl 0x82db7350
	ctx.lr = 0x82B6E578;
	sub_82DB7350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6e588
	if (cr6.eq) goto loc_82B6E588;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82B6E588:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,52(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82da9f18
	ctx.lr = 0x82B6E594;
	sub_82DA9F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// bl 0x82da9890
	ctx.lr = 0x82B6E5A8;
	sub_82DA9890(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6dfb8
	ctx.lr = 0x82B6E5B4;
	sub_82B6DFB8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6dfb8
	ctx.lr = 0x82B6E5C0;
	sub_82B6DFB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6e160
	ctx.lr = 0x82B6E5C8;
	sub_82B6E160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6E5D4"))) PPC_WEAK_FUNC(sub_82B6E5D4);
PPC_FUNC_IMPL(__imp__sub_82B6E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6E5D8"))) PPC_WEAK_FUNC(sub_82B6E5D8);
PPC_FUNC_IMPL(__imp__sub_82B6E5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6E5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B6E5EC;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e720
	if (cr6.eq) goto loc_82B6E720;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r29,r11,26756
	ctx.r29.s64 = ctx.r11.s64 + 26756;
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B6E618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e720
	if (cr6.eq) goto loc_82B6E720;
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x825832d8
	ctx.lr = 0x82B6E62C;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82b6e648
	if (!cr6.eq) goto loc_82B6E648;
	// lis r4,505
	ctx.r4.s64 = 33095680;
	// ori r4,r4,131
	ctx.r4.u64 = ctx.r4.u64 | 131;
	// b 0x82b6e650
	goto loc_82B6E650;
loc_82B6E648:
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,120
	ctx.r4.u64 = ctx.r4.u64 | 120;
loc_82B6E650:
	// bl 0x82d30340
	ctx.lr = 0x82B6E654;
	sub_82D30340(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B6E660;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e720
	if (cr6.eq) goto loc_82B6E720;
	// bl 0x82d33c10
	ctx.lr = 0x82B6E66C;
	sub_82D33C10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e6cc
	if (cr6.eq) goto loc_82B6E6CC;
loc_82B6E67C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82B6E68C;
	sub_82D19AA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e6c0
	if (cr6.eq) goto loc_82B6E6C0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6E6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e6c0
	if (cr6.eq) goto loc_82B6E6C0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6E6C0;
	sub_82D2AEC8(ctx, base);
loc_82B6E6C0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b6e67c
	if (cr6.lt) goto loc_82B6E67C;
loc_82B6E6CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6E6EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B6E6F4;
	sub_82D199F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6e70c
	if (cr6.eq) goto loc_82B6E70C;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r10.u32);
loc_82B6E70C:
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// bl 0x82b6e2c0
	ctx.lr = 0x82B6E720;
	sub_82B6E2C0(ctx, base);
loc_82B6E720:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6E72C"))) PPC_WEAK_FUNC(sub_82B6E72C);
PPC_FUNC_IMPL(__imp__sub_82B6E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6E730"))) PPC_WEAK_FUNC(sub_82B6E730);
PPC_FUNC_IMPL(__imp__sub_82B6E730) {
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
	// lbz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6e768
	if (cr6.eq) goto loc_82B6E768;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,26788
	ctx.r5.s64 = ctx.r11.s64 + 26788;
	// bl 0x82d20da8
	ctx.lr = 0x82B6E764;
	sub_82D20DA8(ctx, base);
	// b 0x82b6e78c
	goto loc_82B6E78C;
loc_82B6E768:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x83a577b0
	ctx.lr = 0x82B6E770;
	sub_83A577B0(ctx, base);
	// ld r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpld cr6,r11,r3
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, xer);
	// beq cr6,0x82b6e78c
	if (cr6.eq) goto loc_82B6E78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6e2c0
	ctx.lr = 0x82B6E788;
	sub_82B6E2C0(ctx, base);
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
loc_82B6E78C:
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

__attribute__((alias("__imp__sub_82B6E7A4"))) PPC_WEAK_FUNC(sub_82B6E7A4);
PPC_FUNC_IMPL(__imp__sub_82B6E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6E7A8"))) PPC_WEAK_FUNC(sub_82B6E7A8);
PPC_FUNC_IMPL(__imp__sub_82B6E7A8) {
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
	// bl 0x82b6e4c0
	ctx.lr = 0x82B6E7C0;
	sub_82B6E4C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6e7f0
	if (cr6.eq) goto loc_82B6E7F0;
	// bl 0x82d86078
	ctx.lr = 0x82B6E7D0;
	sub_82D86078(ctx, base);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,26772
	ctx.r5.s64 = ctx.r11.s64 + 26772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82B6E7F0;
	sub_82D20DA8(ctx, base);
loc_82B6E7F0:
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

__attribute__((alias("__imp__sub_82B6E804"))) PPC_WEAK_FUNC(sub_82B6E804);
PPC_FUNC_IMPL(__imp__sub_82B6E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6E808"))) PPC_WEAK_FUNC(sub_82B6E808);
PPC_FUNC_IMPL(__imp__sub_82B6E808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6E810;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b6e9a8
	if (cr6.eq) goto loc_82B6E9A8;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6e838
	if (cr6.lt) goto loc_82B6E838;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82b6e83c
	goto loc_82B6E83C;
loc_82B6E838:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82B6E83C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r5,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x837b0c10
	ctx.lr = 0x82B6E848;
	sub_837B0C10(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,8108
	ctx.r10.s64 = ctx.r11.s64 + 8108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82B6E860;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B6E870;
	sub_82A69AD0(ctx, base);
	// bl 0x82d860f0
	ctx.lr = 0x82B6E874;
	sub_82D860F0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r7,r8,8116
	ctx.r7.s64 = ctx.r8.s64 + 8116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B6E898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r5,2
	ctx.r5.s64 = 2;
	// subf r11,r28,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r28.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6E8B0;
	sub_82D2AEC8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,8084
	ctx.r8.s64 = ctx.r9.s64 + 8084;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B6E8D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e8e0
	if (cr6.eq) goto loc_82B6E8E0;
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82d294d0
	ctx.lr = 0x82B6E8E0;
	sub_82D294D0(ctx, base);
loc_82B6E8E0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r28,32(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r10,r11,8100
	ctx.r10.s64 = ctx.r11.s64 + 8100;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82B6E8F8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B6E908;
	sub_82A6A1B8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,8092
	ctx.r8.s64 = ctx.r9.s64 + 8092;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B6E928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6e9a8
	if (cr6.eq) goto loc_82B6E9A8;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6e998
	if (cr6.eq) goto loc_82B6E998;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b6e998
	if (cr6.eq) goto loc_82B6E998;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
	// beq cr6,0x82b6e970
	if (cr6.eq) goto loc_82B6E970;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B6E970:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82B6E980;
	sub_82D329F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6E990;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B6E998:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B6E9A8;
	sub_82D2AEC8(ctx, base);
loc_82B6E9A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6E9B0"))) PPC_WEAK_FUNC(sub_82B6E9B0);
PPC_FUNC_IMPL(__imp__sub_82B6E9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82B6E9B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b6ecec
	if (!cr6.eq) goto loc_82B6ECEC;
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x82db6558
	ctx.lr = 0x82B6E9D8;
	sub_82DB6558(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b6ecec
	if (!cr6.gt) goto loc_82B6ECEC;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b6e1d0
	ctx.lr = 0x82B6E9E8;
	sub_82B6E1D0(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,112(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 112);
	// bl 0x82db6788
	ctx.lr = 0x82B6E9F8;
	sub_82DB6788(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6ea1c
	if (!cr6.eq) goto loc_82B6EA1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r11,108(r23)
	PPC_STORE_U8(ctx.r23.u32 + 108, ctx.r11.u8);
	// bl 0x82b6e160
	ctx.lr = 0x82B6EA14;
	sub_82B6E160(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_82B6EA1C:
	// lwz r3,112(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 112);
	// bl 0x825832d8
	ctx.lr = 0x82B6EA24;
	sub_825832D8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r24,r11,26764
	ctx.r24.s64 = ctx.r11.s64 + 26764;
	// bne cr6,0x82b6ea7c
	if (!cr6.eq) goto loc_82B6EA7C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b6ea48
	if (!cr6.eq) goto loc_82B6EA48;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82B6EA48:
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292a3f8
	ctx.lr = 0x82B6EA54;
	sub_8292A3F8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,8132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8132);
	// bl 0x837b0c10
	ctx.lr = 0x82B6EA68;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B6EA78;
	sub_82A69AD0(ctx, base);
	// b 0x82b6eae4
	goto loc_82B6EAE4;
loc_82B6EA7C:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r10,r24,-112
	ctx.r10.s64 = ctx.r24.s64 + -112;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x83572958
	ctx.lr = 0x82B6EA90;
	sub_83572958(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b6eab0
	if (cr6.eq) goto loc_82B6EAB0;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b6eab0
	if (!cr6.eq) goto loc_82B6EAB0;
	// lis r28,930
	ctx.r28.s64 = 60948480;
	// ori r28,r28,25
	ctx.r28.u64 = ctx.r28.u64 | 25;
loc_82B6EAB0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b6eac4
	if (!cr6.eq) goto loc_82B6EAC4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82B6EAC4:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8132);
	// bl 0x837b0c10
	ctx.lr = 0x82B6EAD4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B6EAE4;
	sub_82A69A28(ctx, base);
loc_82B6EAE4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r30,r29,100
	ctx.r30.s64 = ctx.r29.s64 + 100;
	// bne cr6,0x82b6eaf4
	if (!cr6.eq) goto loc_82B6EAF4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82B6EAF4:
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r9,r24,-84
	ctx.r9.s64 = ctx.r24.s64 + -84;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8124);
	// lwzx r28,r8,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82B6EB14;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B6EB24;
	sub_82A69A28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r6,296(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 296);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// beq cr6,0x82b6eb50
	if (cr6.eq) goto loc_82B6EB50;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r4,8076(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8076);
	// b 0x82b6eb58
	goto loc_82B6EB58;
loc_82B6EB50:
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r4,8080(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8080);
loc_82B6EB58:
	// bctrl 
	ctx.lr = 0x82B6EB5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r4,r1,348
	ctx.r4.s64 = ctx.r1.s64 + 348;
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r28,308(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r27,328(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r25,312(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// add r28,r25,r11
	ctx.r28.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82B6EBD8;
	sub_8259CB28(ctx, base);
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,376(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,392(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// addi r4,r1,404
	ctx.r4.s64 = ctx.r1.s64 + 404;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82B6EC14;
	sub_8259CB28(ctx, base);
	// lwz r6,336(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// addi r4,r24,-706
	ctx.r4.s64 = ctx.r24.s64 + -706;
	// lwz r10,448(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r28,r29,100
	ctx.r28.s64 = ctx.r29.s64 + 100;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82B6EC50;
	sub_8259CC28(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B6EC6C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B6EC7C;
	sub_82A69AD0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b6e808
	ctx.lr = 0x82B6EC90;
	sub_82B6E808(ctx, base);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b6e808
	ctx.lr = 0x82B6ECA4;
	sub_82B6E808(ctx, base);
	// addi r29,r1,216
	ctx.r29.s64 = ctx.r1.s64 + 216;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82B6ECB0:
	// addi r29,r29,-44
	ctx.r29.s64 = ctx.r29.s64 + -44;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b6ecd0
	if (cr6.lt) goto loc_82B6ECD0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B6ECD0;
	sub_825952B8(ctx, base);
loc_82B6ECD0:
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bge 0x82b6ecb0
	if (!cr0.lt) goto loc_82B6ECB0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b6e160
	ctx.lr = 0x82B6ECEC;
	sub_82B6E160(ctx, base);
loc_82B6ECEC:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6ECF4"))) PPC_WEAK_FUNC(sub_82B6ECF4);
PPC_FUNC_IMPL(__imp__sub_82B6ECF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6ECF8"))) PPC_WEAK_FUNC(sub_82B6ECF8);
PPC_FUNC_IMPL(__imp__sub_82B6ECF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B6ED00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B6ED0C;
	sub_831156E8(ctx, base);
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r7,r11,61764
	ctx.r7.u64 = ctx.r11.u64 | 61764;
	// lwz r10,8372(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8372);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// xor r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82b6ed48
	if (!cr6.eq) goto loc_82B6ED48;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6ed4c
	if (cr6.eq) goto loc_82B6ED4C;
loc_82B6ED48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B6ED4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
loc_82B6ED64:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c42df8
	ctx.lr = 0x82B6ED74;
	sub_82C42DF8(ctx, base);
	// lwz r11,8332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8332);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b6eda0
	if (!cr6.eq) goto loc_82B6EDA0;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6eda4
	if (cr6.eq) goto loc_82B6EDA4;
loc_82B6EDA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B6EDA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r5,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82b6edc8
	if (!cr6.eq) goto loc_82B6EDC8;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6edf8
	if (cr6.eq) goto loc_82B6EDF8;
loc_82B6EDC8:
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x82b6ede0
	if (!cr6.eq) goto loc_82B6EDE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831c5dd0
	ctx.lr = 0x82B6EDDC;
	sub_831C5DD0(ctx, base);
	// b 0x82b6edf8
	goto loc_82B6EDF8;
loc_82B6EDE0:
	// lbz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6edf8
	if (cr6.eq) goto loc_82B6EDF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83156d28
	ctx.lr = 0x82B6EDF8;
	sub_83156D28(ctx, base);
loc_82B6EDF8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x82b6ed64
	if (cr6.lt) goto loc_82B6ED64;
	// bl 0x82d47978
	ctx.lr = 0x82B6EE10;
	sub_82D47978(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6EE1C"))) PPC_WEAK_FUNC(sub_82B6EE1C);
PPC_FUNC_IMPL(__imp__sub_82B6EE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6EE20"))) PPC_WEAK_FUNC(sub_82B6EE20);
PPC_FUNC_IMPL(__imp__sub_82B6EE20) {
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
	// bl 0x82d47978
	ctx.lr = 0x82B6EE30;
	sub_82D47978(ctx, base);
	// bl 0x82c3a610
	ctx.lr = 0x82B6EE34;
	sub_82C3A610(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6ee44
	if (cr6.eq) goto loc_82B6EE44;
	// bl 0x82c3a5a8
	ctx.lr = 0x82B6EE44;
	sub_82C3A5A8(ctx, base);
loc_82B6EE44:
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

__attribute__((alias("__imp__sub_82B6EE58"))) PPC_WEAK_FUNC(sub_82B6EE58);
PPC_FUNC_IMPL(__imp__sub_82B6EE58) {
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
	// bl 0x82d273d8
	ctx.lr = 0x82B6EE70;
	sub_82D273D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6ef88
	if (cr6.eq) goto loc_82B6EF88;
	// bl 0x82d27440
	ctx.lr = 0x82B6EE7C;
	sub_82D27440(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6ee9c
	if (cr6.eq) goto loc_82B6EE9C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b6ee9c
	if (cr6.eq) goto loc_82B6EE9C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b6ef88
	if (!cr6.eq) goto loc_82B6EF88;
loc_82B6EE9C:
	// lbz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6eee0
	if (!cr6.eq) goto loc_82B6EEE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EEB8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EEC8;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EED8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b6ef7c
	goto loc_82B6EF7C;
loc_82B6EEE0:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6ef04
	if (cr6.eq) goto loc_82B6EF04;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B6EEFC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82b6ef5c
	goto loc_82B6EF5C;
loc_82B6EF04:
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82c430b0
	ctx.lr = 0x82B6EF0C;
	sub_82C430B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82b6ef50
	if (cr6.eq) goto loc_82B6EF50;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF28;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF38;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF48;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b6ef7c
	goto loc_82B6EF7C;
loc_82B6EF50:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF58;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82B6EF5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF68;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF78;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_82B6EF7C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6EF88;
	sub_82D19788(ctx, base);
loc_82B6EF88:
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

__attribute__((alias("__imp__sub_82B6EF9C"))) PPC_WEAK_FUNC(sub_82B6EF9C);
PPC_FUNC_IMPL(__imp__sub_82B6EF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6EFA0"))) PPC_WEAK_FUNC(sub_82B6EFA0);
PPC_FUNC_IMPL(__imp__sub_82B6EFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B6EFA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B6EFBC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x82b6efcc
	if (cr6.eq) goto loc_82B6EFCC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82B6EFCC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c42ea0
	ctx.lr = 0x82B6EFDC;
	sub_82C42EA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c43088
	ctx.lr = 0x82B6EFEC;
	sub_82C43088(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c43038
	ctx.lr = 0x82B6EFFC;
	sub_82C43038(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82b6efbc
	if (cr6.lt) goto loc_82B6EFBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c432b0
	ctx.lr = 0x82B6F014;
	sub_82C432B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6F01C"))) PPC_WEAK_FUNC(sub_82B6F01C);
PPC_FUNC_IMPL(__imp__sub_82B6F01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F020"))) PPC_WEAK_FUNC(sub_82B6F020);
PPC_FUNC_IMPL(__imp__sub_82B6F020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B6F028;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f194
	if (cr6.eq) goto loc_82B6F194;
	// lbz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f194
	if (!cr6.eq) goto loc_82B6F194;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r28,288
	ctx.r28.s64 = 288;
	// addi r25,r3,-136
	ctx.r25.s64 = ctx.r3.s64 + -136;
loc_82B6F060:
	// lwzx r11,r25,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f184
	if (!cr6.eq) goto loc_82B6F184;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,277(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 277);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f184
	if (cr6.eq) goto loc_82B6F184;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r26,277(r11)
	PPC_STORE_U8(ctx.r11.u32 + 277, ctx.r26.u8);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,281(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6f0e4
	if (cr6.eq) goto loc_82B6F0E4;
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82c42d90
	ctx.lr = 0x82B6F0B0;
	sub_82C42D90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f0d0
	if (cr6.eq) goto loc_82B6F0D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42dd8
	ctx.lr = 0x82B6F0C8;
	sub_82C42DD8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b6f184
	if (cr6.eq) goto loc_82B6F184;
loc_82B6F0D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42e70
	ctx.lr = 0x82B6F0E0;
	sub_82C42E70(ctx, base);
	// b 0x82b6f184
	goto loc_82B6F184;
loc_82B6F0E4:
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c42d90
	ctx.lr = 0x82B6F0F0;
	sub_82C42D90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6f14c
	if (!cr6.eq) goto loc_82B6F14C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// bl 0x82c42df8
	ctx.lr = 0x82B6F110;
	sub_82C42DF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b6f138
	if (!cr6.eq) goto loc_82B6F138;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f13c
	if (cr6.eq) goto loc_82B6F13C;
loc_82B6F138:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B6F13C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82b6f150
	if (!cr6.eq) goto loc_82B6F150;
loc_82B6F14C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B6F150:
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b6f164
	if (cr6.eq) goto loc_82B6F164;
	// rlwinm r27,r27,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
loc_82B6F164:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f184
	if (cr6.eq) goto loc_82B6F184;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42ea0
	ctx.lr = 0x82B6F184;
	sub_82C42EA0(ctx, base);
loc_82B6F184:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r28,296
	cr6.compare<int32_t>(ctx.r28.s32, 296, xer);
	// blt cr6,0x82b6f060
	if (cr6.lt) goto loc_82B6F060;
loc_82B6F194:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6F19C"))) PPC_WEAK_FUNC(sub_82B6F19C);
PPC_FUNC_IMPL(__imp__sub_82B6F19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F1A0"))) PPC_WEAK_FUNC(sub_82B6F1A0);
PPC_FUNC_IMPL(__imp__sub_82B6F1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B6F1A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f334
	if (cr6.eq) goto loc_82B6F334;
	// lbz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f334
	if (!cr6.eq) goto loc_82B6F334;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r28,288
	ctx.r28.s64 = 288;
	// addi r25,r3,-136
	ctx.r25.s64 = ctx.r3.s64 + -136;
loc_82B6F1E0:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,279(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 279);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f324
	if (cr6.eq) goto loc_82B6F324;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stb r26,279(r11)
	PPC_STORE_U8(ctx.r11.u32 + 279, ctx.r26.u8);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,281(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 281);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6f258
	if (cr6.eq) goto loc_82B6F258;
	// lwzx r29,r28,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82c42d90
	ctx.lr = 0x82B6F224;
	sub_82C42D90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f244
	if (cr6.eq) goto loc_82B6F244;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42dd8
	ctx.lr = 0x82B6F23C;
	sub_82C42DD8(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b6f2f8
	if (cr6.eq) goto loc_82B6F2F8;
loc_82B6F244:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42e70
	ctx.lr = 0x82B6F254;
	sub_82C42E70(ctx, base);
	// b 0x82b6f2f8
	goto loc_82B6F2F8;
loc_82B6F258:
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c42d90
	ctx.lr = 0x82B6F264;
	sub_82C42D90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6f2c0
	if (!cr6.eq) goto loc_82B6F2C0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// bl 0x82c42df8
	ctx.lr = 0x82B6F284;
	sub_82C42DF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82b6f2ac
	if (!cr6.eq) goto loc_82B6F2AC;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f2b0
	if (cr6.eq) goto loc_82B6F2B0;
loc_82B6F2AC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B6F2B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82b6f2c4
	if (!cr6.eq) goto loc_82B6F2C4;
loc_82B6F2C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B6F2C4:
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b6f2d8
	if (cr6.eq) goto loc_82B6F2D8;
	// rlwinm r27,r27,0,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
loc_82B6F2D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f2f8
	if (cr6.eq) goto loc_82B6F2F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42ea0
	ctx.lr = 0x82B6F2F8;
	sub_82C42EA0(ctx, base);
loc_82B6F2F8:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,283(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 283);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stwx r10,r25,r28
	PPC_STORE_U32(ctx.r25.u32 + ctx.r28.u32, ctx.r10.u32);
	// beq cr6,0x82b6f318
	if (cr6.eq) goto loc_82B6F318;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B6F318:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43088
	ctx.lr = 0x82B6F324;
	sub_82C43088(ctx, base);
loc_82B6F324:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r28,296
	cr6.compare<int32_t>(ctx.r28.s32, 296, xer);
	// blt cr6,0x82b6f1e0
	if (cr6.lt) goto loc_82B6F1E0;
loc_82B6F334:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6F33C"))) PPC_WEAK_FUNC(sub_82B6F33C);
PPC_FUNC_IMPL(__imp__sub_82B6F33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F340"))) PPC_WEAK_FUNC(sub_82B6F340);
PPC_FUNC_IMPL(__imp__sub_82B6F340) {
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
	// lwz r11,188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f38c
	if (cr6.eq) goto loc_82B6F38C;
	// lbz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b6f38c
	if (!cr6.eq) goto loc_82B6F38C;
	// lbz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 276);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f38c
	if (cr6.eq) goto loc_82B6F38C;
	// lwz r4,296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// lwz r5,300(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// bl 0x82b6efa0
	ctx.lr = 0x82B6F384;
	sub_82B6EFA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
loc_82B6F38C:
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

__attribute__((alias("__imp__sub_82B6F3A0"))) PPC_WEAK_FUNC(sub_82B6F3A0);
PPC_FUNC_IMPL(__imp__sub_82B6F3A0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6F3C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B6F3D0;
	sub_82D17DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82B6F3E4"))) PPC_WEAK_FUNC(sub_82B6F3E4);
PPC_FUNC_IMPL(__imp__sub_82B6F3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F3E8"))) PPC_WEAK_FUNC(sub_82B6F3E8);
PPC_FUNC_IMPL(__imp__sub_82B6F3E8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28024
	ctx.r9.s64 = ctx.r11.s64 + 28024;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d25548
	ctx.lr = 0x82B6F420;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b6f438
	if (cr6.eq) goto loc_82B6F438;
	// bl 0x82416268
	ctx.lr = 0x82B6F434;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6F438:
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

__attribute__((alias("__imp__sub_82B6F450"))) PPC_WEAK_FUNC(sub_82B6F450);
PPC_FUNC_IMPL(__imp__sub_82B6F450) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B6F470;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82B6F480;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d19788
	ctx.lr = 0x82B6F490;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B6F4A0;
	sub_82D19788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6F4C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82B6F4D8"))) PPC_WEAK_FUNC(sub_82B6F4D8);
PPC_FUNC_IMPL(__imp__sub_82B6F4D8) {
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
	// bl 0x82c3a740
	ctx.lr = 0x82B6F4F0;
	sub_82C3A740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f52c
	if (!cr6.eq) goto loc_82B6F52C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,14
	ctx.r8.u64 = ctx.r10.u64 | 14;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103068
	ctx.lr = 0x82B6F52C;
	sub_83103068(ctx, base);
loc_82B6F52C:
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

__attribute__((alias("__imp__sub_82B6F540"))) PPC_WEAK_FUNC(sub_82B6F540);
PPC_FUNC_IMPL(__imp__sub_82B6F540) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,27696
	ctx.r9.s64 = ctx.r11.s64 + 27696;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c42d70
	ctx.lr = 0x82B6F578;
	sub_82C42D70(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b6f590
	if (cr6.eq) goto loc_82B6F590;
	// bl 0x82416268
	ctx.lr = 0x82B6F58C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B6F590:
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

__attribute__((alias("__imp__sub_82B6F5A8"))) PPC_WEAK_FUNC(sub_82B6F5A8);
PPC_FUNC_IMPL(__imp__sub_82B6F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6F5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d48260
	ctx.lr = 0x82B6F5BC;
	sub_82D48260(ctx, base);
	// bl 0x82dad2e0
	ctx.lr = 0x82B6F5C0;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6f818
	if (cr6.eq) goto loc_82B6F818;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f818
	if (cr6.eq) goto loc_82B6F818;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6f818
	if (cr6.eq) goto loc_82B6F818;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82dafab0
	ctx.lr = 0x82B6F5FC;
	sub_82DAFAB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dafaf8
	ctx.lr = 0x82B6F60C;
	sub_82DAFAF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f818
	if (cr6.eq) goto loc_82B6F818;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x82db0a88
	ctx.lr = 0x82B6F62C;
	sub_82DB0A88(ctx, base);
	// stb r3,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a70
	ctx.lr = 0x82B6F638;
	sub_82DB0A70(ctx, base);
	// stb r3,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82db0c60
	ctx.lr = 0x82B6F648;
	sub_82DB0C60(ctx, base);
	// lbz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f670
	if (cr6.eq) goto loc_82B6F670;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x82b6f670
	if (!cr6.gt) goto loc_82B6F670;
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,121
	ctx.r4.u64 = ctx.r4.u64 | 121;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82B6F670;
	sub_82D21730(ctx, base);
loc_82B6F670:
	// lbz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f6a4
	if (cr6.eq) goto loc_82B6F6A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B6F688;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f6a4
	if (cr6.eq) goto loc_82B6F6A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42f20
	ctx.lr = 0x82B6F6A0;
	sub_82C42F20(ctx, base);
	// b 0x82b6f704
	goto loc_82B6F704;
loc_82B6F6A4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B6F6A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B6F6B4;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f6f8
	if (!cr6.eq) goto loc_82B6F6F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42ff0
	ctx.lr = 0x82B6F6D0;
	sub_82C42FF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82db0a88
	ctx.lr = 0x82B6F6DC;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f6f8
	if (!cr6.eq) goto loc_82B6F6F8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43060
	ctx.lr = 0x82B6F6F8;
	sub_82C43060(ctx, base);
loc_82B6F6F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82b6f6a8
	if (cr6.lt) goto loc_82B6F6A8;
loc_82B6F704:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82b6f758
	if (!cr6.eq) goto loc_82B6F758;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0a88
	ctx.lr = 0x82B6F71C;
	sub_82DB0A88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b6f758
	if (!cr6.eq) goto loc_82B6F758;
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f758
	if (cr6.eq) goto loc_82B6F758;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82c42ea0
	ctx.lr = 0x82B6F748;
	sub_82C42EA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82c42db0
	ctx.lr = 0x82B6F758;
	sub_82C42DB0(ctx, base);
loc_82B6F758:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43290
	ctx.lr = 0x82B6F768;
	sub_82C43290(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43290
	ctx.lr = 0x82B6F778;
	sub_82C43290(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,35
	ctx.r5.u64 = ctx.r5.u64 | 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6F798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,40
	ctx.r5.u64 = ctx.r5.u64 | 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B6F7B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,211
	ctx.r5.u64 = ctx.r5.u64 | 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B6F7D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 | 58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B6F7F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6ee58
	ctx.lr = 0x82B6F800;
	sub_82B6EE58(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82d47a58
	ctx.lr = 0x82B6F808;
	sub_82D47A58(ctx, base);
	// bl 0x82d476f0
	ctx.lr = 0x82B6F80C;
	sub_82D476F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6F818:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6F824"))) PPC_WEAK_FUNC(sub_82B6F824);
PPC_FUNC_IMPL(__imp__sub_82B6F824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F828"))) PPC_WEAK_FUNC(sub_82B6F828);
PPC_FUNC_IMPL(__imp__sub_82B6F828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6F830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B6F854;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6f8a8
	if (cr6.eq) goto loc_82B6F8A8;
	// bl 0x8308e078
	ctx.lr = 0x82B6F864;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B6F87C;
	sub_82D253F8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,28024
	ctx.r9.s64 = ctx.r11.s64 + 28024;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82d191f8
	ctx.lr = 0x82B6F89C;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6F8A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6F8B4"))) PPC_WEAK_FUNC(sub_82B6F8B4);
PPC_FUNC_IMPL(__imp__sub_82B6F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F8B8"))) PPC_WEAK_FUNC(sub_82B6F8B8);
PPC_FUNC_IMPL(__imp__sub_82B6F8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6F8C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b6f968
	if (cr6.eq) goto loc_82B6F968;
	// lbz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f91c
	if (!cr6.eq) goto loc_82B6F91C;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f91c
	if (!cr6.eq) goto loc_82B6F91C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,144(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x82c42ff0
	ctx.lr = 0x82B6F8F8;
	sub_82C42FF0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,27528
	ctx.r3.s64 = ctx.r11.s64 + 27528;
	// bl 0x82b6f828
	ctx.lr = 0x82B6F908;
	sub_82B6F828(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x82B6F91C;
	sub_83103100(ctx, base);
loc_82B6F91C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B6F924;
	sub_82D19A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d46928
	ctx.lr = 0x82B6F934;
	sub_82D46928(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B6F94C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82c3a610
	ctx.lr = 0x82B6F950;
	sub_82C3A610(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6f960
	if (cr6.eq) goto loc_82B6F960;
	// bl 0x82c3a5a8
	ctx.lr = 0x82B6F960;
	sub_82C3A5A8(ctx, base);
loc_82B6F960:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
loc_82B6F968:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B6F96C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c43018
	ctx.lr = 0x82B6F978;
	sub_82C43018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6f9a0
	if (!cr6.eq) goto loc_82B6F9A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x82b6f96c
	if (cr6.lt) goto loc_82B6F96C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6ee58
	ctx.lr = 0x82B6F998;
	sub_82B6EE58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B6F9A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42f00
	ctx.lr = 0x82B6F9AC;
	sub_82C42F00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6ee58
	ctx.lr = 0x82B6F9B4;
	sub_82B6EE58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6F9BC"))) PPC_WEAK_FUNC(sub_82B6F9BC);
PPC_FUNC_IMPL(__imp__sub_82B6F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6F9C0"))) PPC_WEAK_FUNC(sub_82B6F9C0);
PPC_FUNC_IMPL(__imp__sub_82B6F9C0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B6F9E8;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// addi r7,r7,24112
	ctx.r7.s64 = ctx.r7.s64 + 24112;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r9,r6,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r9.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// lwz r11,8372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8372);
	// rlwinm r3,r11,14,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r9,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bne cr6,0x82b6fa44
	if (!cr6.eq) goto loc_82B6FA44;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6fa48
	if (cr6.eq) goto loc_82B6FA48;
loc_82B6FA44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B6FA48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6fab0
	if (!cr6.eq) goto loc_82B6FAB0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b6fab0
	if (cr6.eq) goto loc_82B6FAB0;
loc_82B6FA64:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r11,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b6fa88
	if (!cr6.eq) goto loc_82B6FA88;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b6fa8c
	if (cr6.eq) goto loc_82B6FA8C;
loc_82B6FA88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B6FA8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6faa8
	if (!cr6.eq) goto loc_82B6FAA8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b6fa64
	if (!cr6.eq) goto loc_82B6FA64;
	// b 0x82b6fab0
	goto loc_82B6FAB0;
loc_82B6FAA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r11.u8);
loc_82B6FAB0:
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

__attribute__((alias("__imp__sub_82B6FAC8"))) PPC_WEAK_FUNC(sub_82B6FAC8);
PPC_FUNC_IMPL(__imp__sub_82B6FAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B6FAD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6FADC;
	sub_82DAD2E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6fd38
	if (cr6.eq) goto loc_82B6FD38;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,8372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8372);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// clrlwi r8,r3,14
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFF;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r3,r6,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// li r27,0
	ctx.r27.s64 = 0;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// li r26,1
	ctx.r26.s64 = 1;
	// stb r27,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r27.u8);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stb r27,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r27.u8);
	// stb r27,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r27.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_82B6FB84:
	// addi r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 + 52;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b6fc10
	if (cr6.lt) goto loc_82B6FC10;
	// bne cr6,0x82b6fc78
	if (!cr6.eq) goto loc_82B6FC78;
	// addi r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6fc78
	if (cr6.eq) goto loc_82B6FC78;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r6,360(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// lwz r3,368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,372(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// stwx r26,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r26.u32);
	// addi r23,r1,104
	ctx.r23.s64 = ctx.r1.s64 + 104;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,113
	ctx.r29.s64 = ctx.r1.s64 + 113;
	// clrlwi r9,r9,14
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFF;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r4,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u32);
	// stwx r3,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r3.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// stbx r26,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u8);
	// stbx r7,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u8);
	// b 0x82b6fc78
	goto loc_82B6FC78;
loc_82B6FC10:
	// addi r11,r28,9
	ctx.r11.s64 = ctx.r28.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6fc78
	if (cr6.eq) goto loc_82B6FC78;
	// bl 0x82e744f8
	ctx.lr = 0x82B6FC2C;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82B6FC40;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b66948
	ctx.lr = 0x82B6FC4C;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b6fc68
	if (cr6.eq) goto loc_82B6FC68;
	// bl 0x8259b510
	ctx.lr = 0x82B6FC68;
	sub_8259B510(ctx, base);
loc_82B6FC68:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6fc78
	if (!cr6.eq) goto loc_82B6FC78;
	// stwx r24,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r24.u32);
loc_82B6FC78:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x82b6fb84
	if (cr6.lt) goto loc_82B6FB84;
	// lbz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6fd38
	if (!cr6.eq) goto loc_82B6FD38;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
loc_82B6FCA0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6fd24
	if (cr6.eq) goto loc_82B6FD24;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r8,283(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 283);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b6fd24
	if (!cr6.eq) goto loc_82B6FD24;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b6fd24
	if (!cr6.eq) goto loc_82B6FD24;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r3,r11,74
	ctx.r3.s64 = ctx.r11.s64 + 74;
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// lwzx r30,r10,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r3,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// subfe r7,r3,r30
	temp.u8 = (~ctx.r3.u32 + ctx.r30.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r3,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// stb r7,281(r9)
	PPC_STORE_U8(ctx.r9.u32 + 281, ctx.r7.u8);
	// subfe r8,r3,r8
	temp.u8 = (~ctx.r3.u32 + ctx.r8.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// stb r8,283(r9)
	PPC_STORE_U8(ctx.r9.u32 + 283, ctx.r8.u8);
	// stb r26,277(r9)
	PPC_STORE_U8(ctx.r9.u32 + 277, ctx.r26.u8);
loc_82B6FD24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b6fca0
	if (cr6.lt) goto loc_82B6FCA0;
loc_82B6FD38:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6FD40"))) PPC_WEAK_FUNC(sub_82B6FD40);
PPC_FUNC_IMPL(__imp__sub_82B6FD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B6FD48;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6FD54;
	sub_82DAD2E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6ff9c
	if (cr6.eq) goto loc_82B6FF9C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// oris r7,r10,65532
	ctx.r7.u64 = ctx.r10.u64 | 4294705152;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// oris r4,r9,65532
	ctx.r4.u64 = ctx.r9.u64 | 4294705152;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,8372(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8372);
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r9,r11,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// clrlwi r7,r10,14
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFFF;
	// clrlwi r8,r3,14
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFF;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// rlwinm r3,r6,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// rlwinm r11,r5,0,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// li r27,0
	ctx.r27.s64 = 0;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// li r26,1
	ctx.r26.s64 = 1;
	// stb r27,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r27.u8);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stb r27,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r27.u8);
	// stb r27,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r27.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_82B6FDFC:
	// addi r11,r28,60
	ctx.r11.s64 = ctx.r28.s64 + 60;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b6fe88
	if (cr6.lt) goto loc_82B6FE88;
	// bne cr6,0x82b6fef0
	if (!cr6.eq) goto loc_82B6FEF0;
	// addi r11,r28,17
	ctx.r11.s64 = ctx.r28.s64 + 17;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b6fef0
	if (cr6.eq) goto loc_82B6FEF0;
	// lwz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r6,360(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,364(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// lwz r3,368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// addi r30,r1,100
	ctx.r30.s64 = ctx.r1.s64 + 100;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,372(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// stwx r26,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r26.u32);
	// addi r23,r1,104
	ctx.r23.s64 = ctx.r1.s64 + 104;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,113
	ctx.r29.s64 = ctx.r1.s64 + 113;
	// clrlwi r9,r9,14
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFF;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r4,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u32);
	// stwx r3,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r3.u32);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// stbx r26,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u8);
	// stbx r7,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u8);
	// b 0x82b6fef0
	goto loc_82B6FEF0;
loc_82B6FE88:
	// addi r11,r28,17
	ctx.r11.s64 = ctx.r28.s64 + 17;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b6fef0
	if (cr6.eq) goto loc_82B6FEF0;
	// bl 0x82e744f8
	ctx.lr = 0x82B6FEA4;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82B6FEB8;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b66948
	ctx.lr = 0x82B6FEC4;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b6fee0
	if (cr6.eq) goto loc_82B6FEE0;
	// bl 0x8259b510
	ctx.lr = 0x82B6FEE0;
	sub_8259B510(ctx, base);
loc_82B6FEE0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6fef0
	if (!cr6.eq) goto loc_82B6FEF0;
	// stwx r24,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r24.u32);
loc_82B6FEF0:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// blt cr6,0x82b6fdfc
	if (cr6.lt) goto loc_82B6FDFC;
	// lbz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b6ff9c
	if (!cr6.eq) goto loc_82B6FF9C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
loc_82B6FF18:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b6ff88
	if (cr6.eq) goto loc_82B6FF88;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r5,r11,72
	ctx.r5.s64 = ctx.r11.s64 + 72;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r3,r11,74
	ctx.r3.s64 = ctx.r11.s64 + 74;
	// lwzx r30,r10,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic r7,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// lwzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r8,r7,r4
	temp.u8 = (~ctx.r7.u32 + ctx.r4.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic r4,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// stb r8,281(r9)
	PPC_STORE_U8(ctx.r9.u32 + 281, ctx.r8.u8);
	// subfe r3,r4,r30
	temp.u8 = (~ctx.r4.u32 + ctx.r30.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// stwx r6,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u32);
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// stb r3,283(r9)
	PPC_STORE_U8(ctx.r9.u32 + 283, ctx.r3.u8);
	// stb r26,279(r9)
	PPC_STORE_U8(ctx.r9.u32 + 279, ctx.r26.u8);
loc_82B6FF88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x82b6ff18
	if (cr6.lt) goto loc_82B6FF18;
loc_82B6FF9C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B6FFA4"))) PPC_WEAK_FUNC(sub_82B6FFA4);
PPC_FUNC_IMPL(__imp__sub_82B6FFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B6FFA8"))) PPC_WEAK_FUNC(sub_82B6FFA8);
PPC_FUNC_IMPL(__imp__sub_82B6FFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B6FFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82B6FFBC;
	sub_82DAD2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b700b0
	if (cr6.eq) goto loc_82B700B0;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b7004c
	if (cr6.eq) goto loc_82B7004C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82b700b0
	if (!cr6.eq) goto loc_82B700B0;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b700b0
	if (cr6.eq) goto loc_82B700B0;
	// lwz r9,356(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,360(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r6,r9,14
	ctx.r6.u64 = ctx.r9.u32 & 0x3FFFF;
	// clrlwi r5,r7,14
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFFF;
	// stw r6,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r6.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r9,r31,277
	ctx.r9.s64 = ctx.r31.s64 + 277;
	// stw r5,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r5.u32);
	// addi r8,r31,279
	ctx.r8.s64 = ctx.r31.s64 + 279;
	// addi r7,r31,283
	ctx.r7.s64 = ctx.r31.s64 + 283;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B70024:
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// stbx r6,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82b70024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B70024;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r6,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r6.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B7004C:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r30,r31,200
	ctx.r30.s64 = ctx.r31.s64 + 200;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b700b0
	if (cr6.eq) goto loc_82B700B0;
	// bl 0x82e744f8
	ctx.lr = 0x82B70060;
	sub_82E744F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82B70074;
	sub_82B64B88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b66948
	ctx.lr = 0x82B70080;
	sub_82B66948(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b7009c
	if (cr6.eq) goto loc_82B7009C;
	// bl 0x8259b510
	ctx.lr = 0x82B7009C;
	sub_8259B510(ctx, base);
loc_82B7009C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b700b0
	if (!cr6.eq) goto loc_82B700B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
loc_82B700B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B700B8"))) PPC_WEAK_FUNC(sub_82B700B8);
PPC_FUNC_IMPL(__imp__sub_82B700B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B700C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27592
	ctx.r4.s64 = ctx.r11.s64 + 27592;
	// bl 0x83103328
	ctx.lr = 0x82B700D4;
	sub_83103328(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,28312
	ctx.r9.s64 = ctx.r10.s64 + 28312;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r20,r31,200
	ctx.r20.s64 = ctx.r31.s64 + 200;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r26,1
	ctx.r26.s64 = 1;
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
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stb r30,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r30.u8);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// stw r8,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r8.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
loc_82B70198:
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// addi r7,r11,74
	ctx.r7.s64 = ctx.r11.s64 + 74;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stb r26,281(r10)
	PPC_STORE_U8(ctx.r10.u32 + 281, ctx.r26.u8);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r7,8372(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8372);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r4,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r7,8372(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8372);
	// rlwimi r3,r7,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u32);
	// stb r30,283(r10)
	PPC_STORE_U8(ctx.r10.u32 + 283, ctx.r30.u8);
	// stb r30,277(r10)
	PPC_STORE_U8(ctx.r10.u32 + 277, ctx.r30.u8);
	// stb r30,279(r10)
	PPC_STORE_U8(ctx.r10.u32 + 279, ctx.r30.u8);
	// blt cr6,0x82b70198
	if (cr6.lt) goto loc_82B70198;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r23,29
	ctx.r23.s64 = 29;
	// addi r22,r10,272
	ctx.r22.s64 = ctx.r10.s64 + 272;
	// addi r24,r9,17524
	ctx.r24.s64 = ctx.r9.s64 + 17524;
	// addi r21,r11,272
	ctx.r21.s64 = ctx.r11.s64 + 272;
loc_82B70210:
	// addi r11,r25,52
	ctx.r11.s64 = ctx.r25.s64 + 52;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x82B70230;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70248
	if (cr6.eq) goto loc_82B70248;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82e77650
	ctx.lr = 0x82B70240;
	sub_82E77650(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82b7024c
	goto loc_82B7024C;
loc_82B70248:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82B7024C:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82B70260;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b7028c
	if (cr6.eq) goto loc_82B7028C;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82B7027C;
	sub_8257FA88(ctx, base);
	// stw r27,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r27.u32);
	// stw r26,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r26.u32);
	// stw r21,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r21.u32);
	// b 0x82b70290
	goto loc_82B70290;
loc_82B7028C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82B70290:
	// addi r11,r25,9
	ctx.r11.s64 = ctx.r25.s64 + 9;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b70300
	if (cr6.eq) goto loc_82B70300;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b702ec
	if (cr6.eq) goto loc_82B702EC;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B702C4;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b702ec
	if (cr6.lt) goto loc_82B702EC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8257fb60
	ctx.lr = 0x82B702E8;
	sub_8257FB60(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
loc_82B702EC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b702fc
	if (cr6.eq) goto loc_82B702FC;
	// bl 0x8259b510
	ctx.lr = 0x82B702FC;
	sub_8259B510(ctx, base);
loc_82B702FC:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_82B70300:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b70310
	if (cr6.eq) goto loc_82B70310;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b510
	ctx.lr = 0x82B70310;
	sub_8259B510(ctx, base);
loc_82B70310:
	// addi r11,r25,60
	ctx.r11.s64 = ctx.r25.s64 + 60;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stwx r30,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u32);
	// bl 0x82595718
	ctx.lr = 0x82B70330;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70348
	if (cr6.eq) goto loc_82B70348;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82e78060
	ctx.lr = 0x82B70340;
	sub_82E78060(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82b7034c
	goto loc_82B7034C;
loc_82B70348:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82B7034C:
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82B70360;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b7038c
	if (cr6.eq) goto loc_82B7038C;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82B7037C;
	sub_8257FA88(ctx, base);
	// stw r27,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r27.u32);
	// stw r26,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r26.u32);
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// b 0x82b70390
	goto loc_82B70390;
loc_82B7038C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82B70390:
	// addi r11,r25,17
	ctx.r11.s64 = ctx.r25.s64 + 17;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b70400
	if (cr6.eq) goto loc_82B70400;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b703ec
	if (cr6.eq) goto loc_82B703EC;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B703C4;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b703ec
	if (cr6.lt) goto loc_82B703EC;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8257fb60
	ctx.lr = 0x82B703E8;
	sub_8257FB60(ctx, base);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_82B703EC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b703fc
	if (cr6.eq) goto loc_82B703FC;
	// bl 0x8259b510
	ctx.lr = 0x82B703FC;
	sub_8259B510(ctx, base);
loc_82B703FC:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_82B70400:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b70410
	if (cr6.eq) goto loc_82B70410;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b510
	ctx.lr = 0x82B70410;
	sub_8259B510(ctx, base);
loc_82B70410:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82b70210
	if (cr6.lt) goto loc_82B70210;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// li r4,368
	ctx.r4.s64 = 368;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82B7043C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70454
	if (cr6.eq) goto loc_82B70454;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82e78860
	ctx.lr = 0x82B7044C;
	sub_82E78860(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82b70458
	goto loc_82B70458;
loc_82B70454:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82B70458:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82B7046C;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b704a0
	if (cr6.eq) goto loc_82B704A0;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// bl 0x8257fa88
	ctx.lr = 0x82B70488;
	sub_8257FA88(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r28,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r28.u32);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// stw r26,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r26.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82b704a4
	goto loc_82B704A4;
loc_82B704A0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82B704A4:
	// stw r28,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b70508
	if (cr6.eq) goto loc_82B70508;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b704f4
	if (cr6.eq) goto loc_82B704F4;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x82B704CC;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82b704f4
	if (cr6.lt) goto loc_82B704F4;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8257fb60
	ctx.lr = 0x82B704F0;
	sub_8257FB60(ctx, base);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
loc_82B704F4:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70504
	if (cr6.eq) goto loc_82B70504;
	// bl 0x8259b510
	ctx.lr = 0x82B70504;
	sub_8259B510(ctx, base);
loc_82B70504:
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
loc_82B70508:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b70518
	if (cr6.eq) goto loc_82B70518;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259b510
	ctx.lr = 0x82B70518;
	sub_8259B510(ctx, base);
loc_82B70518:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70524"))) PPC_WEAK_FUNC(sub_82B70524);
PPC_FUNC_IMPL(__imp__sub_82B70524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B70528"))) PPC_WEAK_FUNC(sub_82B70528);
PPC_FUNC_IMPL(__imp__sub_82B70528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B70530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,28312
	ctx.r10.s64 = ctx.r11.s64 + 28312;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70554
	if (cr6.eq) goto loc_82B70554;
	// bl 0x8259b510
	ctx.lr = 0x82B70554;
	sub_8259B510(ctx, base);
loc_82B70554:
	// addi r11,r29,200
	ctx.r11.s64 = ctx.r29.s64 + 200;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82B70560:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70570
	if (cr6.eq) goto loc_82B70570;
	// bl 0x8259b510
	ctx.lr = 0x82B70570;
	sub_8259B510(ctx, base);
loc_82B70570:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82b70560
	if (!cr0.lt) goto loc_82B70560;
	// addi r11,r29,136
	ctx.r11.s64 = ctx.r29.s64 + 136;
	// li r30,7
	ctx.r30.s64 = 7;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82B70584:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70594
	if (cr6.eq) goto loc_82B70594;
	// bl 0x8259b510
	ctx.lr = 0x82B70594;
	sub_8259B510(ctx, base);
loc_82B70594:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x82b70584
	if (!cr0.lt) goto loc_82B70584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831032a0
	ctx.lr = 0x82B705A4;
	sub_831032A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B705AC"))) PPC_WEAK_FUNC(sub_82B705AC);
PPC_FUNC_IMPL(__imp__sub_82B705AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B705B0"))) PPC_WEAK_FUNC(sub_82B705B0);
PPC_FUNC_IMPL(__imp__sub_82B705B0) {
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
	// bl 0x82b70528
	ctx.lr = 0x82B705D0;
	sub_82B70528(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b705e8
	if (cr6.eq) goto loc_82B705E8;
	// bl 0x82416268
	ctx.lr = 0x82B705E4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B705E8:
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

__attribute__((alias("__imp__sub_82B70600"))) PPC_WEAK_FUNC(sub_82B70600);
PPC_FUNC_IMPL(__imp__sub_82B70600) {
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
	// bl 0x82b6fac8
	ctx.lr = 0x82B70618;
	sub_82B6FAC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6fd40
	ctx.lr = 0x82B70620;
	sub_82B6FD40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6ffa8
	ctx.lr = 0x82B70628;
	sub_82B6FFA8(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b7069c
	if (!cr6.eq) goto loc_82B7069C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82B70638:
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b70674
	if (cr6.eq) goto loc_82B70674;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b70674
	if (cr6.eq) goto loc_82B70674;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82b70638
	if (cr6.lt) goto loc_82B70638;
	// b 0x82b70678
	goto loc_82B70678;
loc_82B70674:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B70678:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b7069c
	if (cr6.eq) goto loc_82B7069C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_82B7069C:
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

__attribute__((alias("__imp__sub_82B706B0"))) PPC_WEAK_FUNC(sub_82B706B0);
PPC_FUNC_IMPL(__imp__sub_82B706B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B706B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c42948
	ctx.lr = 0x82B706C4;
	sub_82C42948(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,27696
	ctx.r8.s64 = ctx.r11.s64 + 27696;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// li r6,27
	ctx.r6.s64 = 27;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r30.u8);
	// li r4,308
	ctx.r4.s64 = 308;
	// stb r30,150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 150, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r30.u64);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stb r30,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r30.u8);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lwz r11,8372(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8372);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stb r28,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r28.u8);
	// bl 0x82595718
	ctx.lr = 0x82B7073C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70764
	if (cr6.eq) goto loc_82B70764;
	// bl 0x82b700b8
	ctx.lr = 0x82B70748;
	sub_82B700B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70764
	if (cr6.eq) goto loc_82B70764;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B70760;
	sub_83103100(ctx, base);
	// stw r29,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
loc_82B70764:
	// bl 0x830ff290
	ctx.lr = 0x82B70768;
	sub_830FF290(ctx, base);
	// bl 0x830ff988
	ctx.lr = 0x82B7076C;
	sub_830FF988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b70794
	if (cr6.eq) goto loc_82B70794;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82e765e8
	ctx.lr = 0x82B7078C;
	sub_82E765E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e76b28
	ctx.lr = 0x82B70794;
	sub_82E76B28(ctx, base);
loc_82B70794:
	// bl 0x82dad2e0
	ctx.lr = 0x82B70798;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b707b0
	if (cr6.eq) goto loc_82B707B0;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,37856
	ctx.r5.u64 = ctx.r5.u64 | 37856;
	// bl 0x82dae510
	ctx.lr = 0x82B707B0;
	sub_82DAE510(ctx, base);
loc_82B707B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B707BC"))) PPC_WEAK_FUNC(sub_82B707BC);
PPC_FUNC_IMPL(__imp__sub_82B707BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B707C0"))) PPC_WEAK_FUNC(sub_82B707C0);
PPC_FUNC_IMPL(__imp__sub_82B707C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B707C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82dad2e0
	ctx.lr = 0x82B707DC;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b7081c
	if (cr6.eq) goto loc_82B7081C;
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// bne cr6,0x82b7081c
	if (!cr6.eq) goto loc_82B7081C;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82B7081C:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B70834;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b70868
	if (cr6.eq) goto loc_82B70868;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b70850
	if (cr6.lt) goto loc_82B70850;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b70854
	goto loc_82B70854;
loc_82B70850:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82B70854:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x82b706b0
	ctx.lr = 0x82B70860;
	sub_82B706B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b7086c
	if (!cr6.eq) goto loc_82B7086C;
loc_82B70868:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B7086C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70874"))) PPC_WEAK_FUNC(sub_82B70874);
PPC_FUNC_IMPL(__imp__sub_82B70874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B70878"))) PPC_WEAK_FUNC(sub_82B70878);
PPC_FUNC_IMPL(__imp__sub_82B70878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b70888
	sub_82B70888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70880"))) PPC_WEAK_FUNC(sub_82B70880);
PPC_FUNC_IMPL(__imp__sub_82B70880) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b70888
	sub_82B70888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70888"))) PPC_WEAK_FUNC(sub_82B70888);
PPC_FUNC_IMPL(__imp__sub_82B70888) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,28352
	ctx.r8.s64 = ctx.r11.s64 + 28352;
	// addi r7,r10,28340
	ctx.r7.s64 = ctx.r10.s64 + 28340;
	// addi r6,r9,28336
	ctx.r6.s64 = ctx.r9.s64 + 28336;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B708CC;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b708e4
	if (cr6.eq) goto loc_82B708E4;
	// bl 0x82416268
	ctx.lr = 0x82B708E0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B708E4:
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

__attribute__((alias("__imp__sub_82B708FC"))) PPC_WEAK_FUNC(sub_82B708FC);
PPC_FUNC_IMPL(__imp__sub_82B708FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B70900"))) PPC_WEAK_FUNC(sub_82B70900);
PPC_FUNC_IMPL(__imp__sub_82B70900) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b70910
	sub_82B70910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70908"))) PPC_WEAK_FUNC(sub_82B70908);
PPC_FUNC_IMPL(__imp__sub_82B70908) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b70910
	sub_82B70910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70910"))) PPC_WEAK_FUNC(sub_82B70910);
PPC_FUNC_IMPL(__imp__sub_82B70910) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r8,r11,28392
	ctx.r8.s64 = ctx.r11.s64 + 28392;
	// addi r7,r10,28380
	ctx.r7.s64 = ctx.r10.s64 + 28380;
	// addi r6,r9,28376
	ctx.r6.s64 = ctx.r9.s64 + 28376;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82b6a590
	ctx.lr = 0x82B70954;
	sub_82B6A590(ctx, base);
	// clrlwi r5,r30,31
	ctx.r5.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82b7096c
	if (cr6.eq) goto loc_82B7096C;
	// bl 0x82416268
	ctx.lr = 0x82B70968;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B7096C:
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

__attribute__((alias("__imp__sub_82B70984"))) PPC_WEAK_FUNC(sub_82B70984);
PPC_FUNC_IMPL(__imp__sub_82B70984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B70988"))) PPC_WEAK_FUNC(sub_82B70988);
PPC_FUNC_IMPL(__imp__sub_82B70988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82b70998
	sub_82B70998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B70990"))) PPC_WEAK_FUNC(sub_82B70990);
PPC_FUNC_IMPL(__imp__sub_82B70990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82b70998
	sub_82B70998(ctx, base);
	return;
}

