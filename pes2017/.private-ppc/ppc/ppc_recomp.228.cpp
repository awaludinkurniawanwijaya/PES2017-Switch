#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EC5B50"))) PPC_WEAK_FUNC(sub_82EC5B50);
PPC_FUNC_IMPL(__imp__sub_82EC5B50) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec5b80
	if (cr6.eq) goto loc_82EC5B80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82e93fd0
	ctx.lr = 0x82EC5B78;
	sub_82E93FD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EC5B80:
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

__attribute__((alias("__imp__sub_82EC5B94"))) PPC_WEAK_FUNC(sub_82EC5B94);
PPC_FUNC_IMPL(__imp__sub_82EC5B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5B98"))) PPC_WEAK_FUNC(sub_82EC5B98);
PPC_FUNC_IMPL(__imp__sub_82EC5B98) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ec5bd8
	if (!cr6.eq) goto loc_82EC5BD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
loc_82EC5BD8:
	// bl 0x82ec54e8
	ctx.lr = 0x82EC5BDC;
	sub_82EC54E8(ctx, base);
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

__attribute__((alias("__imp__sub_82EC5BF4"))) PPC_WEAK_FUNC(sub_82EC5BF4);
PPC_FUNC_IMPL(__imp__sub_82EC5BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5BF8"))) PPC_WEAK_FUNC(sub_82EC5BF8);
PPC_FUNC_IMPL(__imp__sub_82EC5BF8) {
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
	// addi r30,r3,152
	ctx.r30.s64 = ctx.r3.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC5C1C;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82597088
	ctx.lr = 0x82EC5C28;
	sub_82597088(ctx, base);
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bgt cr6,0x82ec5cf8
	if (cr6.gt) goto loc_82EC5CF8;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ec5c60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5C60;
	// bdzf 4*cr6+eq,0x82ec5c60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5C60;
	// bdzf 4*cr6+eq,0x82ec5c60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5C60;
	// bdzf 4*cr6+eq,0x82ec5c60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5C60;
	// bdzf 4*cr6+eq,0x82ec5c68
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5C68;
	// bdzf 4*cr6+eq,0x82ec5c8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5C8C;
	// bdzf 4*cr6+eq,0x82ec5cb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5CB0;
	// bne cr6,0x82ec5cd4
	if (!cr6.eq) goto loc_82EC5CD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ec5cfc
	goto loc_82EC5CFC;
loc_82EC5C60:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ec5cfc
	goto loc_82EC5CFC;
loc_82EC5C68:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5c84
	if (cr6.eq) goto loc_82EC5C84;
	// bl 0x82ec59f8
	ctx.lr = 0x82EC5C78;
	sub_82EC59F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec5ca8
	if (cr6.eq) goto loc_82EC5CA8;
loc_82EC5C84:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82ec5cfc
	goto loc_82EC5CFC;
loc_82EC5C8C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5cf8
	if (cr6.eq) goto loc_82EC5CF8;
	// bl 0x82ec59f8
	ctx.lr = 0x82EC5C9C;
	sub_82EC59F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ec5cf8
	if (!cr6.eq) goto loc_82EC5CF8;
loc_82EC5CA8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ec5cfc
	goto loc_82EC5CFC;
loc_82EC5CB0:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5ccc
	if (cr6.eq) goto loc_82EC5CCC;
	// bl 0x82ec59f8
	ctx.lr = 0x82EC5CC0;
	sub_82EC59F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec5ca8
	if (cr6.eq) goto loc_82EC5CA8;
loc_82EC5CCC:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82ec5cfc
	goto loc_82EC5CFC;
loc_82EC5CD4:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5cf0
	if (cr6.eq) goto loc_82EC5CF0;
	// bl 0x82ec59f8
	ctx.lr = 0x82EC5CE4;
	sub_82EC59F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec5ca8
	if (cr6.eq) goto loc_82EC5CA8;
loc_82EC5CF0:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82ec5cfc
	goto loc_82EC5CFC;
loc_82EC5CF8:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82EC5CFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC5D14"))) PPC_WEAK_FUNC(sub_82EC5D14);
PPC_FUNC_IMPL(__imp__sub_82EC5D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5D18"))) PPC_WEAK_FUNC(sub_82EC5D18);
PPC_FUNC_IMPL(__imp__sub_82EC5D18) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5d94
	if (cr6.eq) goto loc_82EC5D94;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EC5D48;
	sub_82595150(ctx, base);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec5d84
	if (cr6.eq) goto loc_82EC5D84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,92
	ctx.r4.s64 = ctx.r11.s64 + 92;
	// bl 0x82b80748
	ctx.lr = 0x82EC5D64;
	sub_82B80748(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5d74
	if (cr6.eq) goto loc_82EC5D74;
	// bl 0x82e78e28
	ctx.lr = 0x82EC5D74;
	sub_82E78E28(ctx, base);
loc_82EC5D74:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5d84
	if (cr6.eq) goto loc_82EC5D84;
	// bl 0x8259b510
	ctx.lr = 0x82EC5D84;
	sub_8259B510(ctx, base);
loc_82EC5D84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EC5D8C;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EC5D94;
	sub_82595170(ctx, base);
loc_82EC5D94:
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

__attribute__((alias("__imp__sub_82EC5DA8"))) PPC_WEAK_FUNC(sub_82EC5DA8);
PPC_FUNC_IMPL(__imp__sub_82EC5DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec5dbc
	if (!cr6.eq) goto loc_82EC5DBC;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82EC5DBC:
	// b 0x82ec5bf8
	sub_82EC5BF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC5DC0"))) PPC_WEAK_FUNC(sub_82EC5DC0);
PPC_FUNC_IMPL(__imp__sub_82EC5DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC5DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,152
	ctx.r30.s64 = ctx.r3.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC5DDC;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec5bf8
	ctx.lr = 0x82EC5DE4;
	sub_82EC5BF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ec5e00
	if (cr6.eq) goto loc_82EC5E00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC5DF4;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EC5E00:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC5E0C;
	sub_82596FE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// bl 0x82597088
	ctx.lr = 0x82EC5E1C;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC5E24;
	sub_82597088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835242e8
	ctx.lr = 0x82EC5E30;
	sub_835242E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC5E38;
	sub_82596FE8(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// bl 0x82597088
	ctx.lr = 0x82EC5E48;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC5E54"))) PPC_WEAK_FUNC(sub_82EC5E54);
PPC_FUNC_IMPL(__imp__sub_82EC5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5E58"))) PPC_WEAK_FUNC(sub_82EC5E58);
PPC_FUNC_IMPL(__imp__sub_82EC5E58) {
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
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5ed4
	if (cr6.eq) goto loc_82EC5ED4;
	// bl 0x82ec59f8
	ctx.lr = 0x82EC5E80;
	sub_82EC59F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ec5ed4
	if (!cr6.eq) goto loc_82EC5ED4;
	// lwz r30,184(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec59f8
	ctx.lr = 0x82EC5E98;
	sub_82EC59F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82ec5eac
	if (!cr6.eq) goto loc_82EC5EAC;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
loc_82EC5EAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ec5f00
	if (!cr6.eq) goto loc_82EC5F00;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82ec58e0
	ctx.lr = 0x82EC5EC0;
	sub_82EC58E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ec5ef0
	if (!cr6.eq) goto loc_82EC5EF0;
loc_82EC5ECC:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// bl 0x82ec5988
	ctx.lr = 0x82EC5ED4;
	sub_82EC5988(ctx, base);
loc_82EC5ED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EC5ED8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EC5EF0:
	// bl 0x83a7d958
	ctx.lr = 0x82EC5EF4;
	sub_83A7D958(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ec5ed8
	goto loc_82EC5ED8;
loc_82EC5F00:
	// bl 0x83a7d958
	ctx.lr = 0x82EC5F04;
	sub_83A7D958(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subf. r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82ec5f20
	if (!cr0.gt) goto loc_82EC5F20;
	// bl 0x83524128
	ctx.lr = 0x82EC5F14;
	sub_83524128(ctx, base);
	// ld r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpld cr6,r3,r11
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, xer);
	// bge cr6,0x82ec5ecc
	if (!cr6.lt) goto loc_82EC5ECC;
loc_82EC5F20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ec5ed8
	goto loc_82EC5ED8;
}

__attribute__((alias("__imp__sub_82EC5F28"))) PPC_WEAK_FUNC(sub_82EC5F28);
PPC_FUNC_IMPL(__imp__sub_82EC5F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec5f38
	if (!cr6.eq) goto loc_82EC5F38;
	// blr 
	return;
loc_82EC5F38:
	// b 0x82ec5dc0
	sub_82EC5DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC5F3C"))) PPC_WEAK_FUNC(sub_82EC5F3C);
PPC_FUNC_IMPL(__imp__sub_82EC5F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC5F40"))) PPC_WEAK_FUNC(sub_82EC5F40);
PPC_FUNC_IMPL(__imp__sub_82EC5F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC5F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC5F5C;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC5F64;
	sub_82596FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,128(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// bl 0x82597088
	ctx.lr = 0x82EC5F70;
	sub_82597088(ctx, base);
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ec601c
	if (cr6.gt) goto loc_82EC601C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ec5fbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5FBC;
	// bdzf 4*cr6+eq,0x82ec5fdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5FDC;
	// bdzf 4*cr6+eq,0x82ec5ffc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5FFC;
	// bdzf 4*cr6+eq,0x82ec5ffc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5FFC;
	// bdzf 4*cr6+eq,0x82ec5ffc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EC5FFC;
	// bne cr6,0x82ec5ffc
	if (!cr6.eq) goto loc_82EC5FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec5568
	ctx.lr = 0x82EC5FA4;
	sub_82EC5568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC5FB0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EC5FBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec5348
	ctx.lr = 0x82EC5FC4;
	sub_82EC5348(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC5FD0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EC5FDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec5738
	ctx.lr = 0x82EC5FE4;
	sub_82EC5738(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC5FF0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EC5FFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ec5e58
	ctx.lr = 0x82EC6004;
	sub_82EC5E58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC6010;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EC601C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC6024;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6030"))) PPC_WEAK_FUNC(sub_82EC6030);
PPC_FUNC_IMPL(__imp__sub_82EC6030) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec6088
	if (cr6.eq) goto loc_82EC6088;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x82ec6070
	if (cr6.eq) goto loc_82EC6070;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec606c
	if (cr6.eq) goto loc_82EC606C;
loc_82EC6068:
	// bl 0x82ec5d18
	ctx.lr = 0x82EC606C;
	sub_82EC5D18(ctx, base);
loc_82EC606C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82EC6070:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EC6088:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec6070
	if (cr6.eq) goto loc_82EC6070;
	// b 0x82ec6068
	goto loc_82EC6068;
}

__attribute__((alias("__imp__sub_82EC6094"))) PPC_WEAK_FUNC(sub_82EC6094);
PPC_FUNC_IMPL(__imp__sub_82EC6094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6098"))) PPC_WEAK_FUNC(sub_82EC6098);
PPC_FUNC_IMPL(__imp__sub_82EC6098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82EC60A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,152
	ctx.r29.s64 = ctx.r3.s64 + 152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC60B8;
	sub_82596FE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x82597088
	ctx.lr = 0x82EC60C4;
	sub_82597088(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82ec6198
	if (!cr6.eq) goto loc_82EC6198;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC60D4;
	sub_82596FE8(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r25,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r25.u32);
	// bl 0x82597088
	ctx.lr = 0x82EC60E4;
	sub_82597088(ctx, base);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC60F0;
	sub_82596FE8(ctx, base);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC60FC;
	sub_82597088(ctx, base);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC6108;
	sub_82596FE8(ctx, base);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC6114;
	sub_82597088(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r4,r9,-11484
	ctx.r4.s64 = ctx.r9.s64 + -11484;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82EC614C;
	sub_8259CC28(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r28,6
	ctx.r28.s64 = 6;
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// std r24,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r24.u64);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82588ff8
	ctx.lr = 0x82EC6170;
	sub_82588FF8(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82ec61a4
	if (cr6.eq) goto loc_82EC61A4;
loc_82EC617C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EC6180:
	// bl 0x82596fe8
	ctx.lr = 0x82EC6184;
	sub_82596FE8(ctx, base);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC6190;
	sub_82597088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82EC6198;
	sub_8387E8E0(ctx, base);
loc_82EC6198:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82EC61A4:
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r26,r31,184
	ctx.r26.s64 = ctx.r31.s64 + 184;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ec617c
	if (!cr6.eq) goto loc_82EC617C;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EC61C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec61e4
	if (cr6.eq) goto loc_82EC61E4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// b 0x82ec61e8
	goto loc_82EC61E8;
loc_82EC61E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82EC61E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ec6030
	ctx.lr = 0x82EC61F0;
	sub_82EC6030(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec617c
	if (cr6.eq) goto loc_82EC617C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82ec5840
	ctx.lr = 0x82EC6204;
	sub_82EC5840(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec6180
	if (cr6.eq) goto loc_82EC6180;
	// bl 0x82596fe8
	ctx.lr = 0x82EC6218;
	sub_82596FE8(ctx, base);
	// stw r24,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r24.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC6224;
	sub_82597088(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835249e8
	ctx.lr = 0x82EC6230;
	sub_835249E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec617c
	if (!cr6.eq) goto loc_82EC617C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC6240;
	sub_82596FE8(ctx, base);
	// stb r25,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r25.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC624C;
	sub_82597088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82EC6254;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6260"))) PPC_WEAK_FUNC(sub_82EC6260);
PPC_FUNC_IMPL(__imp__sub_82EC6260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EC6268;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,84
	ctx.r29.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x82589098
	ctx.lr = 0x82EC6288;
	sub_82589098(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ec62b8
	if (cr6.eq) goto loc_82EC62B8;
	// addi r30,r31,152
	ctx.r30.s64 = ctx.r31.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC62A0;
	sub_82596FE8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EC62B0;
	sub_82597088(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82ec6328
	goto loc_82EC6328;
loc_82EC62B8:
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC62C4;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// bl 0x82597088
	ctx.lr = 0x82EC62D0;
	sub_82597088(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ec6328
	if (!cr6.eq) goto loc_82EC6328;
	// li r28,1000
	ctx.r28.s64 = 1000;
loc_82EC62DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ec5f40
	ctx.lr = 0x82EC62E4;
	sub_82EC5F40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec6328
	if (cr6.eq) goto loc_82EC6328;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// divwu r5,r28,r11
	ctx.r5.u32 = PPCDivide(ctx.r28.u32, ctx.r11.u32);
	// twllei r11,0
	// bl 0x82588f90
	ctx.lr = 0x82EC6308;
	sub_82588F90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC6310;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r25,48(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// bl 0x82597088
	ctx.lr = 0x82EC631C;
	sub_82597088(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82ec62dc
	if (cr6.eq) goto loc_82EC62DC;
loc_82EC6328:
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC6334;
	sub_82596FE8(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec6350
	if (cr6.eq) goto loc_82EC6350;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82ec52e8
	ctx.lr = 0x82EC634C;
	sub_82EC52E8(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82EC6350:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec6364
	if (cr6.eq) goto loc_82EC6364;
	// bl 0x82ec5d18
	ctx.lr = 0x82EC6360;
	sub_82EC5D18(ctx, base);
	// stw r27,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r27.u32);
loc_82EC6364:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EC6370;
	sub_82596FE8(ctx, base);
	// stb r27,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r27.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC637C;
	sub_82597088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82EC6384;
	sub_82597088(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6390"))) PPC_WEAK_FUNC(sub_82EC6390);
PPC_FUNC_IMPL(__imp__sub_82EC6390) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec63b8
	if (!cr6.eq) goto loc_82EC63B8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EC63B8:
	// bl 0x82ec6098
	ctx.lr = 0x82EC63BC;
	sub_82EC6098(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_82EC63D8"))) PPC_WEAK_FUNC(sub_82EC63D8);
PPC_FUNC_IMPL(__imp__sub_82EC63D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EC63E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x835242a0
	ctx.lr = 0x82EC63F4;
	sub_835242A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,-11372
	ctx.r10.s64 = ctx.r11.s64 + -11372;
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82EC6410;
	sub_82596FA8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stb r9,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r9.u8);
	// bl 0x82596fa8
	ctx.lr = 0x82EC6420;
	sub_82596FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82588f18
	ctx.lr = 0x82EC6430;
	sub_82588F18(ctx, base);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// beq cr6,0x82ec6454
	if (cr6.eq) goto loc_82EC6454;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82EC6454;
	sub_825749E0(ctx, base);
loc_82EC6454:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EC6464:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ec6464
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EC6464;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stb r29,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r29.u8);
	// stw r29,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r29.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82EC648C;
	sub_82596FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC649C"))) PPC_WEAK_FUNC(sub_82EC649C);
PPC_FUNC_IMPL(__imp__sub_82EC649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC64A0"))) PPC_WEAK_FUNC(sub_82EC64A0);
PPC_FUNC_IMPL(__imp__sub_82EC64A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC64A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-11372
	ctx.r10.s64 = ctx.r11.s64 + -11372;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ec5258
	ctx.lr = 0x82EC64C0;
	sub_82EC5258(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec64d8
	if (cr6.eq) goto loc_82EC64D8;
	// bl 0x82ec5d18
	ctx.lr = 0x82EC64D4;
	sub_82EC5D18(ctx, base);
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
loc_82EC64D8:
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x82596f90
	ctx.lr = 0x82EC64E0;
	sub_82596F90(ctx, base);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r30,r31,136
	ctx.r30.s64 = ctx.r31.s64 + 136;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec64fc
	if (cr6.eq) goto loc_82EC64FC;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82ec52e8
	ctx.lr = 0x82EC64F8;
	sub_82EC52E8(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82EC64FC:
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ec652c
	if (cr6.eq) goto loc_82EC652C;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82EC6510;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ec652c
	if (!cr6.eq) goto loc_82EC652C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EC652C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC652C:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82588f78
	ctx.lr = 0x82EC6534;
	sub_82588F78(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82596f90
	ctx.lr = 0x82EC653C;
	sub_82596F90(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82596f90
	ctx.lr = 0x82EC6544;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83524210
	ctx.lr = 0x82EC654C;
	sub_83524210(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6554"))) PPC_WEAK_FUNC(sub_82EC6554);
PPC_FUNC_IMPL(__imp__sub_82EC6554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6558"))) PPC_WEAK_FUNC(sub_82EC6558);
PPC_FUNC_IMPL(__imp__sub_82EC6558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC6560;
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EC6588;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec65b0
	if (cr6.eq) goto loc_82EC65B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ec63d8
	ctx.lr = 0x82EC659C;
	sub_82EC63D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EC65B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC65C4"))) PPC_WEAK_FUNC(sub_82EC65C4);
PPC_FUNC_IMPL(__imp__sub_82EC65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC65C8"))) PPC_WEAK_FUNC(sub_82EC65C8);
PPC_FUNC_IMPL(__imp__sub_82EC65C8) {
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
	// bl 0x82ec64a0
	ctx.lr = 0x82EC65E8;
	sub_82EC64A0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec6608
	if (cr6.eq) goto loc_82EC6608;
	// bl 0x82595188
	ctx.lr = 0x82EC65F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EC6608;
	sub_825952B8(ctx, base);
loc_82EC6608:
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

__attribute__((alias("__imp__sub_82EC6624"))) PPC_WEAK_FUNC(sub_82EC6624);
PPC_FUNC_IMPL(__imp__sub_82EC6624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC6628"))) PPC_WEAK_FUNC(sub_82EC6628);
PPC_FUNC_IMPL(__imp__sub_82EC6628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC6630;
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
	ctx.lr = 0x82EC6644;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec6658
	if (cr6.lt) goto loc_82EC6658;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EC6658:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82EC6664;
	sub_825346C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-11188
	ctx.r31.s64 = ctx.r11.s64 + -11188;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82EC6678;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82EC6680;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EC6688;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82EC6694;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EC66A0;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82EC66A8;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EC66B0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC66BC"))) PPC_WEAK_FUNC(sub_82EC66BC);
PPC_FUNC_IMPL(__imp__sub_82EC66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC66C0"))) PPC_WEAK_FUNC(sub_82EC66C0);
PPC_FUNC_IMPL(__imp__sub_82EC66C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC66C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,-11016
	ctx.r29.s64 = ctx.r11.s64 + -11016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82EC66E8;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EC66EC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EC66F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec66f4
	if (!cr6.eq) goto loc_82EC66F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC6718;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EC6724;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EC6728;
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

__attribute__((alias("__imp__sub_82EC6738"))) PPC_WEAK_FUNC(sub_82EC6738);
PPC_FUNC_IMPL(__imp__sub_82EC6738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EC6740;
	__savegprlr_25(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,138
	ctx.r11.s64 = 138;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x82ec6780
	if (!cr6.lt) goto loc_82EC6780;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EC6780;
	sub_82E745E0(ctx, base);
loc_82EC6780:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r26,r11,-11084
	ctx.r26.s64 = ctx.r11.s64 + -11084;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r26,-96
	ctx.r4.s64 = ctx.r26.s64 + -96;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC67C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC67D4;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82ec67e8
	if (cr6.lt) goto loc_82EC67E8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82EC67E8;
	sub_82416268(ctx, base);
loc_82EC67E8:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r4,r25,20
	ctx.r4.s64 = ctx.r25.s64 + 20;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x82ec6808
	if (cr6.lt) goto loc_82EC6808;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC6808:
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_82EC6818:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec6818
	if (!cr6.eq) goto loc_82EC6818;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC683C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6848;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec685c
	if (cr6.lt) goto loc_82EC685C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x82EC685C;
	sub_82416268(ctx, base);
loc_82EC685C:
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6884;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6890;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec68a4
	if (cr6.lt) goto loc_82EC68A4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82EC68A4;
	sub_82416268(ctx, base);
loc_82EC68A4:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82EC68BC;
	sub_82E746C0(ctx, base);
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// addi r4,r26,-80
	ctx.r4.s64 = ctx.r26.s64 + -80;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82472fc0
	ctx.lr = 0x82EC68D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC68E4;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec68f8
	if (cr6.lt) goto loc_82EC68F8;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82EC68F8;
	sub_82416268(ctx, base);
loc_82EC68F8:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,116(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82EC6910;
	sub_82E746C0(ctx, base);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x82EC692C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6938;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec694c
	if (cr6.lt) goto loc_82EC694C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82EC694C;
	sub_82416268(ctx, base);
loc_82EC694C:
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// ld r4,120(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 120);
	// bl 0x82ead258
	ctx.lr = 0x82EC6964;
	sub_82EAD258(ctx, base);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x82EC6980;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC698C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec69a0
	if (cr6.lt) goto loc_82EC69A0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82EC69A0;
	sub_82416268(ctx, base);
loc_82EC69A0:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,128(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// bl 0x82e746c0
	ctx.lr = 0x82EC69B8;
	sub_82E746C0(ctx, base);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x82EC69D4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC69E0;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec69f4
	if (cr6.lt) goto loc_82EC69F4;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82EC69F4;
	sub_82416268(ctx, base);
loc_82EC69F4:
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// addi r4,r25,132
	ctx.r4.s64 = ctx.r25.s64 + 132;
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x82ec6a14
	if (cr6.lt) goto loc_82EC6A14;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC6A14:
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_82EC6A24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec6a24
	if (!cr6.eq) goto loc_82EC6A24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6A48;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6A54;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec6a68
	if (cr6.lt) goto loc_82EC6A68;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82EC6A68;
	sub_82416268(ctx, base);
loc_82EC6A68:
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6A90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6A9C;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec6ab0
	if (cr6.lt) goto loc_82EC6AB0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82EC6AB0;
	sub_82416268(ctx, base);
loc_82EC6AB0:
	// lwz r11,180(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 180);
	// addi r4,r25,160
	ctx.r4.s64 = ctx.r25.s64 + 160;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x82ec6ad0
	if (cr6.lt) goto loc_82EC6AD0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC6AD0:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_82EC6AE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec6ae0
	if (!cr6.eq) goto loc_82EC6AE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6B04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6B10;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec6b24
	if (cr6.lt) goto loc_82EC6B24;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x82EC6B24;
	sub_82416268(ctx, base);
loc_82EC6B24:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// addi r4,r26,-28
	ctx.r4.s64 = ctx.r26.s64 + -28;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6B4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC6B58;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec6b6c
	if (cr6.lt) goto loc_82EC6B6C;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x82EC6B6C;
	sub_82416268(ctx, base);
loc_82EC6B6C:
	// stw r27,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// addi r28,r25,192
	ctx.r28.s64 = ctx.r25.s64 + 192;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// lwz r4,192(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// bl 0x82e749f8
	ctx.lr = 0x82EC6B88;
	sub_82E749F8(ctx, base);
	// lwz r11,192(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// lwz r10,200(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ec6bcc
	if (cr6.eq) goto loc_82EC6BCC;
loc_82EC6BA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e746c0
	ctx.lr = 0x82EC6BB0;
	sub_82E746C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ec6ba4
	if (!cr6.eq) goto loc_82EC6BA4;
loc_82EC6BCC:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x82EC6BE8;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82e74890
	ctx.lr = 0x82EC6BF4;
	sub_82E74890(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x82ec6c10
	if (!cr6.lt) goto loc_82EC6C10;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
loc_82EC6C10:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ec6c2c
	if (!cr6.lt) goto loc_82EC6C2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EC6C2C;
	sub_82E745E0(ctx, base);
loc_82EC6C2C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC6C44;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec6c64
	if (cr6.lt) goto loc_82EC6C64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82EC6C64;
	sub_82416268(ctx, base);
loc_82EC6C64:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r28,r25,208
	ctx.r28.s64 = ctx.r25.s64 + 208;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,208(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// bl 0x82e749f8
	ctx.lr = 0x82EC6C80;
	sub_82E749F8(ctx, base);
	// lwz r11,208(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// lwz r10,216(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 216);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r29,r10
	ctx.r29.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ec6cc4
	if (cr6.eq) goto loc_82EC6CC4;
loc_82EC6C9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82e746c0
	ctx.lr = 0x82EC6CA8;
	sub_82E746C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ec6c9c
	if (!cr6.eq) goto loc_82EC6C9C;
loc_82EC6CC4:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x82EC6CE0;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x82EC6CEC;
	sub_82E74890(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x82ec6d08
	if (!cr6.lt) goto loc_82EC6D08;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
loc_82EC6D08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec6d60
	if (!cr6.lt) goto loc_82EC6D60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec6d2c
	if (!cr6.eq) goto loc_82EC6D2C;
	// li r29,8192
	ctx.r29.s64 = 8192;
loc_82EC6D2C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec6d4c
	if (!cr6.lt) goto loc_82EC6D4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EC6D40:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec6d40
	if (cr6.lt) goto loc_82EC6D40;
loc_82EC6D4C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC6D58;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82EC6D60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC6D78;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec6d98
	if (cr6.lt) goto loc_82EC6D98;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82EC6D98;
	sub_82416268(ctx, base);
loc_82EC6D98:
	// lwz r11,244(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// addi r4,r25,224
	ctx.r4.s64 = ctx.r25.s64 + 224;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x82ec6db8
	if (cr6.lt) goto loc_82EC6DB8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC6DB8:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82EC6DC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec6dc8
	if (!cr6.eq) goto loc_82EC6DC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6DEC;
	sub_82472FC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x82EC6DF8;
	sub_82E74890(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x82ec6e14
	if (!cr6.lt) goto loc_82EC6E14;
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
loc_82EC6E14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec6e6c
	if (!cr6.lt) goto loc_82EC6E6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec6e38
	if (!cr6.eq) goto loc_82EC6E38;
	// li r31,8192
	ctx.r31.s64 = 8192;
loc_82EC6E38:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec6e58
	if (!cr6.lt) goto loc_82EC6E58;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EC6E4C:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec6e4c
	if (cr6.lt) goto loc_82EC6E4C;
loc_82EC6E58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC6E64;
	sub_831D3198(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_82EC6E6C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC6E84;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec6ea4
	if (cr6.lt) goto loc_82EC6EA4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82EC6EA4;
	sub_82416268(ctx, base);
loc_82EC6EA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC6EB0"))) PPC_WEAK_FUNC(sub_82EC6EB0);
PPC_FUNC_IMPL(__imp__sub_82EC6EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82EC6EB8;
	__savegprlr_16(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
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
	// stw r24,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r24.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83691bb8
	ctx.lr = 0x82EC6EE0;
	sub_83691BB8(ctx, base);
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec7620
	if (!cr6.lt) goto loc_82EC7620;
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r18,15
	ctx.r18.s64 = 15;
	// li r25,4
	ctx.r25.s64 = 4;
	// ori r20,r8,1
	ctx.r20.u64 = ctx.r8.u64 | 1;
	// addi r17,r11,-10912
	ctx.r17.s64 = ctx.r11.s64 + -10912;
	// addi r21,r10,8980
	ctx.r21.s64 = ctx.r10.s64 + 8980;
	// addi r22,r9,26164
	ctx.r22.s64 = ctx.r9.s64 + 26164;
loc_82EC6F34:
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
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
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6F68;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-96
	ctx.r6.s64 = ctx.r17.s64 + -96;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC6F80;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec7014
	if (!cr6.eq) goto loc_82EC7014;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,568(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// bl 0x82472fc0
	ctx.lr = 0x82EC6FB8;
	sub_82472FC0(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ec6fcc
	if (!cr6.lt) goto loc_82EC6FCC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82EC6FCC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC6FD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec6fd0
	if (!cr6.eq) goto loc_82EC6FD0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,20
	ctx.r3.s64 = ctx.r19.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC6FF4;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec7008
	if (cr6.lt) goto loc_82EC7008;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82EC7008;
	sub_82416268(ctx, base);
loc_82EC7008:
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
loc_82EC7014:
	// addi r6,r17,-88
	ctx.r6.s64 = ctx.r17.s64 + -88;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC702C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec7068
	if (!cr6.eq) goto loc_82EC7068;
	// ld r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,464(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82ec7060
	if (!cr6.eq) goto loc_82EC7060;
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec7064
	goto loc_82EC7064;
loc_82EC7060:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82EC7064:
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
loc_82EC7068:
	// addi r6,r17,-80
	ctx.r6.s64 = ctx.r17.s64 + -80;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC7080;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec70bc
	if (!cr6.eq) goto loc_82EC70BC;
	// ld r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,528(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82ec70b4
	if (!cr6.eq) goto loc_82EC70B4;
	// ld r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec70b8
	goto loc_82EC70B8;
loc_82EC70B4:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82EC70B8:
	// stw r11,156(r19)
	PPC_STORE_U32(ctx.r19.u32 + 156, ctx.r11.u32);
loc_82EC70BC:
	// addi r6,r17,-76
	ctx.r6.s64 = ctx.r17.s64 + -76;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC70D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec7108
	if (!cr6.eq) goto loc_82EC7108;
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r8,496(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// ld r11,504(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 504);
	// beq cr6,0x82ec7104
	if (cr6.eq) goto loc_82EC7104;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82EC7104:
	// std r11,160(r19)
	PPC_STORE_U64(ctx.r19.u32 + 160, ctx.r11.u64);
loc_82EC7108:
	// addi r6,r17,-60
	ctx.r6.s64 = ctx.r17.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC7120;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec715c
	if (!cr6.eq) goto loc_82EC715C;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,432(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82ec7154
	if (!cr6.eq) goto loc_82EC7154;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec7158
	goto loc_82EC7158;
loc_82EC7154:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82EC7158:
	// stw r11,168(r19)
	PPC_STORE_U32(ctx.r19.u32 + 168, ctx.r11.u32);
loc_82EC715C:
	// addi r6,r17,-48
	ctx.r6.s64 = ctx.r17.s64 + -48;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC7174;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec7208
	if (!cr6.eq) goto loc_82EC7208;
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,456(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r4,460(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82472fc0
	ctx.lr = 0x82EC71AC;
	sub_82472FC0(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ec71c0
	if (!cr6.lt) goto loc_82EC71C0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82EC71C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC71C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec71c4
	if (!cr6.eq) goto loc_82EC71C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,172
	ctx.r3.s64 = ctx.r19.s64 + 172;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC71E8;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec71fc
	if (cr6.lt) goto loc_82EC71FC;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82EC71FC;
	sub_82416268(ctx, base);
loc_82EC71FC:
	// stw r18,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r18.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82EC7208:
	// addi r6,r17,-40
	ctx.r6.s64 = ctx.r17.s64 + -40;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC7220;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec72b4
	if (!cr6.eq) goto loc_82EC72B4;
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r4,492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7258;
	sub_82472FC0(ctx, base);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ec726c
	if (!cr6.lt) goto loc_82EC726C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_82EC726C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC7270:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec7270
	if (!cr6.eq) goto loc_82EC7270;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,200
	ctx.r3.s64 = ctx.r19.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC7294;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec72a8
	if (cr6.lt) goto loc_82EC72A8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82EC72A8;
	sub_82416268(ctx, base);
loc_82EC72A8:
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stb r24,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r24.u8);
loc_82EC72B4:
	// addi r6,r17,-28
	ctx.r6.s64 = ctx.r17.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC72CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec73fc
	if (!cr6.eq) goto loc_82EC73FC;
	// addi r31,r19,232
	ctx.r31.s64 = ctx.r19.s64 + 232;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r25,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r25.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r29,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82EC7304;
	sub_8247B7D8(ctx, base);
	// lwz r3,240(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 240);
	// stw r24,232(r19)
	PPC_STORE_U32(ctx.r19.u32 + 232, ctx.r24.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec7324
	if (cr6.eq) goto loc_82EC7324;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8247b268
	ctx.lr = 0x82EC731C;
	sub_8247B268(ctx, base);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_82EC7324:
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// lwz r28,12(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x82ec73fc
	if (!cr6.lt) goto loc_82EC73FC;
loc_82EC7340:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82ec736c
	if (!cr6.eq) goto loc_82EC736C;
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec7370
	goto loc_82EC7370;
loc_82EC736C:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82EC7370:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ec73cc
	if (cr6.lt) goto loc_82EC73CC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ec73bc
	if (!cr6.gt) goto loc_82EC73BC;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r25,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r25.u32);
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x82EC73B4;
	sub_8247B270(ctx, base);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// b 0x82ec73c0
	goto loc_82EC73C0;
loc_82EC73BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC73C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec73f0
	if (cr6.eq) goto loc_82EC73F0;
loc_82EC73CC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ec73e4
	if (cr0.eq) goto loc_82EC73E4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82EC73E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EC73F0:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82ec7340
	if (cr6.lt) goto loc_82EC7340;
loc_82EC73FC:
	// addi r6,r17,-16
	ctx.r6.s64 = ctx.r17.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC7414;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec7548
	if (!cr6.eq) goto loc_82EC7548;
	// addi r31,r19,248
	ctx.r31.s64 = ctx.r19.s64 + 248;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r25,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r25.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82EC744C;
	sub_8247B7D8(ctx, base);
	// lwz r3,256(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// stw r24,248(r19)
	PPC_STORE_U32(ctx.r19.u32 + 248, ctx.r24.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec746c
	if (cr6.eq) goto loc_82EC746C;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8247b268
	ctx.lr = 0x82EC7464;
	sub_8247B268(ctx, base);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_82EC746C:
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x82ec7548
	if (!cr6.lt) goto loc_82EC7548;
loc_82EC748C:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,544
	ctx.r10.s64 = ctx.r1.s64 + 544;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,544(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82ec74b8
	if (!cr6.eq) goto loc_82EC74B8;
	// ld r11,552(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 552);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec74bc
	goto loc_82EC74BC;
loc_82EC74B8:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_82EC74BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ec7518
	if (cr6.lt) goto loc_82EC7518;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ec7508
	if (!cr6.gt) goto loc_82EC7508;
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r25,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r25.u32);
	// stw r25,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r25.u32);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x82EC7500;
	sub_8247B270(ctx, base);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// b 0x82ec750c
	goto loc_82EC750C;
loc_82EC7508:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC750C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec753c
	if (cr6.eq) goto loc_82EC753C;
loc_82EC7518:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ec7530
	if (cr0.eq) goto loc_82EC7530;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82EC7530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EC753C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x82ec748c
	if (cr6.lt) goto loc_82EC748C;
loc_82EC7548:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EC7560;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec75f4
	if (!cr6.eq) goto loc_82EC75F4;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7598;
	sub_82472FC0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ec75ac
	if (!cr6.lt) goto loc_82EC75AC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82EC75AC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC75B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec75b0
	if (!cr6.eq) goto loc_82EC75B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,264
	ctx.r3.s64 = ctx.r19.s64 + 264;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC75D4;
	sub_824208C8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec75e8
	if (cr6.lt) goto loc_82EC75E8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82EC75E8;
	sub_82416268(ctx, base);
loc_82EC75E8:
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
loc_82EC75F4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7608
	if (cr6.lt) goto loc_82EC7608;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82EC7608;
	sub_82416268(ctx, base);
loc_82EC7608:
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// bne 0x82ec6f34
	if (!cr0.eq) goto loc_82EC6F34;
loc_82EC7620:
	// lwz r31,400(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ec763c
	if (cr6.eq) goto loc_82EC763C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EC7634;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EC763C;
	sub_82416268(ctx, base);
loc_82EC763C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7648"))) PPC_WEAK_FUNC(sub_82EC7648);
PPC_FUNC_IMPL(__imp__sub_82EC7648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EC7650;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d95768
	ctx.lr = 0x82EC7660;
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
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r5,-11264
	ctx.r29.s64 = ctx.r5.s64 + -11264;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82EC769C;
	sub_824208C8(ctx, base);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r4,11776
	ctx.r10.s64 = ctx.r4.s64 + 11776;
	// addi r9,r3,11764
	ctx.r9.s64 = ctx.r3.s64 + 11764;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// addi r8,r11,11760
	ctx.r8.s64 = ctx.r11.s64 + 11760;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// stw r8,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r8.u32);
	// addi r3,r31,332
	ctx.r3.s64 = ctx.r31.s64 + 332;
	// std r30,320(r31)
	PPC_STORE_U64(ctx.r31.u32 + 320, ctx.r30.u64);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r28,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r28.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stb r30,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82EC76F0;
	sub_824208C8(ctx, base);
	// stw r28,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stb r30,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC770C;
	sub_824208C8(ctx, base);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// std r30,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r30.u64);
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x82423930
	ctx.lr = 0x82EC7724;
	sub_82423930(ctx, base);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// std r30,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r30.u64);
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x82423930
	ctx.lr = 0x82EC773C;
	sub_82423930(ctx, base);
	// stw r28,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r28.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// stb r30,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC7758;
	sub_824208C8(ctx, base);
	// stw r27,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7768"))) PPC_WEAK_FUNC(sub_82EC7768);
PPC_FUNC_IMPL(__imp__sub_82EC7768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EC7770;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82e75880
	ctx.lr = 0x82EC7780;
	sub_82E75880(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r29,r11,-11264
	ctx.r29.s64 = ctx.r11.s64 + -11264;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82EC7798;
	sub_824208C8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r8,-10816
	ctx.r5.s64 = ctx.r8.s64 + -10816;
	// addi r7,r10,-10800
	ctx.r7.s64 = ctx.r10.s64 + -10800;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// addi r6,r9,-10812
	ctx.r6.s64 = ctx.r9.s64 + -10812;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// addi r4,r29,192
	ctx.r4.s64 = ctx.r29.s64 + 192;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82EC77EC;
	sub_824208C8(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stb r30,400(r31)
	PPC_STORE_U8(ctx.r31.u32 + 400, ctx.r30.u8);
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC7808;
	sub_824208C8(ctx, base);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// std r30,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r30.u64);
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x82423930
	ctx.lr = 0x82EC7820;
	sub_82423930(ctx, base);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// std r30,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r30.u64);
	// li r4,200
	ctx.r4.s64 = 200;
	// bl 0x82423930
	ctx.lr = 0x82EC7838;
	sub_82423930(ctx, base);
	// stw r28,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r28.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stb r30,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r30.u8);
	// addi r4,r29,224
	ctx.r4.s64 = ctx.r29.s64 + 224;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC7854;
	sub_824208C8(ctx, base);
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7864"))) PPC_WEAK_FUNC(sub_82EC7864);
PPC_FUNC_IMPL(__imp__sub_82EC7864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7868"))) PPC_WEAK_FUNC(sub_82EC7868);
PPC_FUNC_IMPL(__imp__sub_82EC7868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82ec7968
	sub_82EC7968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7870"))) PPC_WEAK_FUNC(sub_82EC7870);
PPC_FUNC_IMPL(__imp__sub_82EC7870) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82ec7968
	sub_82EC7968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7878"))) PPC_WEAK_FUNC(sub_82EC7878);
PPC_FUNC_IMPL(__imp__sub_82EC7878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EC7880;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,-10800
	ctx.r8.s64 = ctx.r11.s64 + -10800;
	// addi r7,r10,-10812
	ctx.r7.s64 = ctx.r10.s64 + -10812;
	// addi r6,r9,-10816
	ctx.r6.s64 = ctx.r9.s64 + -10816;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,464
	ctx.r29.s64 = ctx.r3.s64 + 464;
	// lwz r5,484(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82ec78c4
	if (cr6.lt) goto loc_82EC78C4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EC78C4;
	sub_8386D088(ctx, base);
loc_82EC78C4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x824238b8
	ctx.lr = 0x82EC78E0;
	sub_824238B8(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// bl 0x824238b8
	ctx.lr = 0x82EC78E8;
	sub_824238B8(ctx, base);
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// addi r28,r31,400
	ctx.r28.s64 = ctx.r31.s64 + 400;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7900
	if (cr6.lt) goto loc_82EC7900;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EC7900;
	sub_8386D088(ctx, base);
loc_82EC7900:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r31,372
	ctx.r29.s64 = ctx.r31.s64 + 372;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7924
	if (cr6.lt) goto loc_82EC7924;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EC7924;
	sub_8386D088(ctx, base);
loc_82EC7924:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r31,312
	ctx.r28.s64 = ctx.r31.s64 + 312;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7948
	if (cr6.lt) goto loc_82EC7948;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EC7948;
	sub_8386D088(ctx, base);
loc_82EC7948:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x82EC795C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7964"))) PPC_WEAK_FUNC(sub_82EC7964);
PPC_FUNC_IMPL(__imp__sub_82EC7964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7968"))) PPC_WEAK_FUNC(sub_82EC7968);
PPC_FUNC_IMPL(__imp__sub_82EC7968) {
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
	// bl 0x82ec7878
	ctx.lr = 0x82EC7988;
	sub_82EC7878(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec79a0
	if (cr6.eq) goto loc_82EC79A0;
	// bl 0x82416268
	ctx.lr = 0x82EC799C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EC79A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC79B8"))) PPC_WEAK_FUNC(sub_82EC79B8);
PPC_FUNC_IMPL(__imp__sub_82EC79B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC79C0;
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
	ctx.lr = 0x82EC79D4;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec79e8
	if (cr6.lt) goto loc_82EC79E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EC79E8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82EC79F4;
	sub_825346C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-10524
	ctx.r31.s64 = ctx.r11.s64 + -10524;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82EC7A08;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82EC7A10;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EC7A18;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82EC7A24;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EC7A30;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82EC7A38;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EC7A40;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC7A4C"))) PPC_WEAK_FUNC(sub_82EC7A4C);
PPC_FUNC_IMPL(__imp__sub_82EC7A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC7A50"))) PPC_WEAK_FUNC(sub_82EC7A50);
PPC_FUNC_IMPL(__imp__sub_82EC7A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EC7A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,-10148
	ctx.r29.s64 = ctx.r11.s64 + -10148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82EC7A78;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EC7A7C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EC7A84:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec7a84
	if (!cr6.eq) goto loc_82EC7A84;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC7AA8;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EC7AB4;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EC7AB8;
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

__attribute__((alias("__imp__sub_82EC7AC8"))) PPC_WEAK_FUNC(sub_82EC7AC8);
PPC_FUNC_IMPL(__imp__sub_82EC7AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82EC7AD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,222
	ctx.r11.s64 = 222;
	// li r10,17
	ctx.r10.s64 = 17;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// sth r10,101(r1)
	PPC_STORE_U16(ctx.r1.u32 + 101, ctx.r10.u16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82e74660
	ctx.lr = 0x82EC7B08;
	sub_82E74660(ctx, base);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r26,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r26.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// addi r24,r11,-10296
	ctx.r24.s64 = ctx.r11.s64 + -10296;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r24,-220
	ctx.r4.s64 = ctx.r24.s64 + -220;
	// bl 0x82472fc0
	ctx.lr = 0x82EC7B30;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7B3C;
	sub_82E74C08(ctx, base);
	// lwz r9,852(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82ec7b50
	if (cr6.lt) goto loc_82EC7B50;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x82EC7B50;
	sub_82416268(ctx, base);
loc_82EC7B50:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// addi r4,r25,20
	ctx.r4.s64 = ctx.r25.s64 + 20;
	// stw r26,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r26.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// blt cr6,0x82ec7b70
	if (cr6.lt) goto loc_82EC7B70;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC7B70:
	// stw r26,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
loc_82EC7B80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec7b80
	if (!cr6.eq) goto loc_82EC7B80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7BA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7BB0;
	sub_82E74C08(ctx, base);
	// lwz r10,724(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec7bc4
	if (cr6.lt) goto loc_82EC7BC4;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x82EC7BC4;
	sub_82416268(ctx, base);
loc_82EC7BC4:
	// stw r26,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r26.u32);
	// addi r4,r24,-212
	ctx.r4.s64 = ctx.r24.s64 + -212;
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r26,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r26.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7BEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7BF8;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7c0c
	if (cr6.lt) goto loc_82EC7C0C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x82EC7C0C;
	sub_82416268(ctx, base);
loc_82EC7C0C:
	// stw r26,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,48(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x82EC7C24;
	sub_82E746C0(ctx, base);
	// stw r26,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r26.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// addi r4,r24,-204
	ctx.r4.s64 = ctx.r24.s64 + -204;
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82472fc0
	ctx.lr = 0x82EC7C40;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7C4C;
	sub_82E74C08(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7c60
	if (cr6.lt) goto loc_82EC7C60;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x82EC7C60;
	sub_82416268(ctx, base);
loc_82EC7C60:
	// stw r26,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// lwz r4,116(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// bl 0x82e746c0
	ctx.lr = 0x82EC7C78;
	sub_82E746C0(ctx, base);
	// stw r26,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r26.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r4,r24,-200
	ctx.r4.s64 = ctx.r24.s64 + -200;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82472fc0
	ctx.lr = 0x82EC7C94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7CA0;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7cb4
	if (cr6.lt) goto loc_82EC7CB4;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x82EC7CB4;
	sub_82416268(ctx, base);
loc_82EC7CB4:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r26,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r26.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x82EC7CC8;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r30,131
	ctx.r30.s64 = 131;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r23,8192
	ctx.r23.s64 = 8192;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r24,-192
	ctx.r4.s64 = ctx.r24.s64 + -192;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7D20;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7D2C;
	sub_82E74C08(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82ec7d40
	if (cr6.lt) goto loc_82EC7D40;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82EC7D40;
	sub_82416268(ctx, base);
loc_82EC7D40:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r26,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r26.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x82EC7D54;
	sub_831D2BF8(ctx, base);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r4,r24,-184
	ctx.r4.s64 = ctx.r24.s64 + -184;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r26,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r26.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7DA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7DB0;
	sub_82E74C08(ctx, base);
	// lwz r5,628(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82ec7dc4
	if (cr6.lt) goto loc_82EC7DC4;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x82EC7DC4;
	sub_82416268(ctx, base);
loc_82EC7DC4:
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// addi r4,r25,120
	ctx.r4.s64 = ctx.r25.s64 + 120;
	// stw r26,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r26.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// blt cr6,0x82ec7de4
	if (cr6.lt) goto loc_82EC7DE4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC7DE4:
	// stw r26,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
loc_82EC7DF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec7df4
	if (!cr6.eq) goto loc_82EC7DF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7E18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7E24;
	sub_82E74C08(ctx, base);
	// lwz r10,756(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec7e38
	if (cr6.lt) goto loc_82EC7E38;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x82EC7E38;
	sub_82416268(ctx, base);
loc_82EC7E38:
	// stw r26,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r26.u32);
	// addi r4,r24,-176
	ctx.r4.s64 = ctx.r24.s64 + -176;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r26,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r26.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC7E60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7E6C;
	sub_82E74C08(ctx, base);
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7e80
	if (cr6.lt) goto loc_82EC7E80;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x82EC7E80;
	sub_82416268(ctx, base);
loc_82EC7E80:
	// stw r26,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// lwz r4,148(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// bl 0x82e97d90
	ctx.lr = 0x82EC7E98;
	sub_82E97D90(ctx, base);
	// stw r26,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r26.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// addi r4,r24,-168
	ctx.r4.s64 = ctx.r24.s64 + -168;
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82472fc0
	ctx.lr = 0x82EC7EB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82e74c08
	ctx.lr = 0x82EC7EC0;
	sub_82E74C08(ctx, base);
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec7ed4
	if (cr6.lt) goto loc_82EC7ED4;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x82EC7ED4;
	sub_82416268(ctx, base);
loc_82EC7ED4:
	// stw r26,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// addi r29,r25,152
	ctx.r29.s64 = ctx.r25.s64 + 152;
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// lwz r4,152(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// bl 0x82e749f8
	ctx.lr = 0x82EC7EF0;
	sub_82E749F8(ctx, base);
	// lwz r10,152(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// lwz r11,160(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ec7f34
	if (cr6.eq) goto loc_82EC7F34;
loc_82EC7F0C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x82EC7F18;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ec7f0c
	if (!cr6.eq) goto loc_82EC7F0C;
loc_82EC7F34:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82e74890
	ctx.lr = 0x82EC7F40;
	sub_82E74890(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bge cr6,0x82ec7f68
	if (!cr6.lt) goto loc_82EC7F68;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e745e0
	ctx.lr = 0x82EC7F68;
	sub_82E745E0(ctx, base);
loc_82EC7F68:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC7F80;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r4,r24,-160
	ctx.r4.s64 = ctx.r24.s64 + -160;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x82EC7FA8;
	sub_82472FC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82e74890
	ctx.lr = 0x82EC7FB4;
	sub_82E74890(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bge cr6,0x82ec7fd0
	if (!cr6.lt) goto loc_82EC7FD0;
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
loc_82EC7FD0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ec7fec
	if (!cr6.lt) goto loc_82EC7FEC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e745e0
	ctx.lr = 0x82EC7FEC;
	sub_82E745E0(ctx, base);
loc_82EC7FEC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC8004;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// add r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x82ec8024
	if (cr6.lt) goto loc_82EC8024;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82EC8024;
	sub_82416268(ctx, base);
loc_82EC8024:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r29,r25,168
	ctx.r29.s64 = ctx.r25.s64 + 168;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,168(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// bl 0x82e749f8
	ctx.lr = 0x82EC8040;
	sub_82E749F8(ctx, base);
	// lwz r10,168(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 168);
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ec8084
	if (cr6.eq) goto loc_82EC8084;
loc_82EC805C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x82EC8068;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ec805c
	if (!cr6.eq) goto loc_82EC805C;
loc_82EC8084:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r4,r24,-156
	ctx.r4.s64 = ctx.r24.s64 + -156;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x82EC80A0;
	sub_82472FC0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x82EC80AC;
	sub_82E74890(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x82ec80c8
	if (!cr6.lt) goto loc_82EC80C8;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
loc_82EC80C8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ec811c
	if (!cr6.lt) goto loc_82EC811C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec80ec
	if (!cr6.eq) goto loc_82EC80EC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC80EC:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec8104
	if (!cr6.lt) goto loc_82EC8104;
loc_82EC80F8:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec80f8
	if (cr6.lt) goto loc_82EC80F8;
loc_82EC8104:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831d3198
	ctx.lr = 0x82EC8110;
	sub_831D3198(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_82EC811C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC8130;
	sub_831CE980(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// blt cr6,0x82ec8150
	if (cr6.lt) goto loc_82EC8150;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82EC8150;
	sub_82416268(ctx, base);
loc_82EC8150:
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r29,r25,184
	ctx.r29.s64 = ctx.r25.s64 + 184;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,184(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// bl 0x82e749f8
	ctx.lr = 0x82EC816C;
	sub_82E749F8(ctx, base);
	// lwz r11,184(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 184);
	// lwz r10,192(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ec81b0
	if (cr6.eq) goto loc_82EC81B0;
loc_82EC8188:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e97d90
	ctx.lr = 0x82EC8194;
	sub_82E97D90(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ec8188
	if (!cr6.eq) goto loc_82EC8188;
loc_82EC81B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e74890
	ctx.lr = 0x82EC81BC;
	sub_82E74890(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bge cr6,0x82ec8220
	if (!cr6.lt) goto loc_82EC8220;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec81ec
	if (!cr6.eq) goto loc_82EC81EC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC81EC:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec820c
	if (!cr6.lt) goto loc_82EC820C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EC8200:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec8200
	if (cr6.lt) goto loc_82EC8200;
loc_82EC820C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC8218;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC8220:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC8238;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r24,-144
	ctx.r4.s64 = ctx.r24.s64 + -144;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8260;
	sub_82472FC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82e74890
	ctx.lr = 0x82EC826C;
	sub_82E74890(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// lwz r27,320(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bge cr6,0x82ec8288
	if (!cr6.lt) goto loc_82EC8288;
	// addi r27,r1,320
	ctx.r27.s64 = ctx.r1.s64 + 320;
loc_82EC8288:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec82e0
	if (!cr6.lt) goto loc_82EC82E0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec82ac
	if (!cr6.eq) goto loc_82EC82AC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC82AC:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec82cc
	if (!cr6.lt) goto loc_82EC82CC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EC82C0:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec82c0
	if (cr6.lt) goto loc_82EC82C0;
loc_82EC82CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC82D8;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC82E0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC82F8;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec8318
	if (cr6.lt) goto loc_82EC8318;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82EC8318;
	sub_82416268(ctx, base);
loc_82EC8318:
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// ld r4,200(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 200);
	// bl 0x82ead258
	ctx.lr = 0x82EC8330;
	sub_82EAD258(ctx, base);
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r24,-136
	ctx.r4.s64 = ctx.r24.s64 + -136;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x82EC834C;
	sub_82472FC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82e74890
	ctx.lr = 0x82EC8358;
	sub_82E74890(ctx, base);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,256(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bge cr6,0x82ec8374
	if (!cr6.lt) goto loc_82EC8374;
	// addi r27,r1,256
	ctx.r27.s64 = ctx.r1.s64 + 256;
loc_82EC8374:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec83cc
	if (!cr6.lt) goto loc_82EC83CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec8398
	if (!cr6.eq) goto loc_82EC8398;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC8398:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec83b8
	if (!cr6.lt) goto loc_82EC83B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC83AC:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec83ac
	if (cr6.lt) goto loc_82EC83AC;
loc_82EC83B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC83C4;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC83CC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC83E4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec8404
	if (cr6.lt) goto loc_82EC8404;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82EC8404;
	sub_82416268(ctx, base);
loc_82EC8404:
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// addi r4,r25,208
	ctx.r4.s64 = ctx.r25.s64 + 208;
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x82ec8424
	if (cr6.lt) goto loc_82EC8424;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC8424:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_82EC8434:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec8434
	if (!cr6.eq) goto loc_82EC8434;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8458;
	sub_82472FC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x82EC8464;
	sub_82E74890(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bge cr6,0x82ec8480
	if (!cr6.lt) goto loc_82EC8480;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
loc_82EC8480:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec84d8
	if (!cr6.lt) goto loc_82EC84D8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec84a4
	if (!cr6.eq) goto loc_82EC84A4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC84A4:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec84c4
	if (!cr6.lt) goto loc_82EC84C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC84B8:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec84b8
	if (cr6.lt) goto loc_82EC84B8;
loc_82EC84C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC84D0;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC84D8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC84F0;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec8510
	if (cr6.lt) goto loc_82EC8510;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82EC8510;
	sub_82416268(ctx, base);
loc_82EC8510:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r4,r24,-124
	ctx.r4.s64 = ctx.r24.s64 + -124;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8538;
	sub_82472FC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82e74890
	ctx.lr = 0x82EC8544;
	sub_82E74890(ctx, base);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,224(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bge cr6,0x82ec8560
	if (!cr6.lt) goto loc_82EC8560;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
loc_82EC8560:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec85b8
	if (!cr6.lt) goto loc_82EC85B8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec8584
	if (!cr6.eq) goto loc_82EC8584;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC8584:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec85a4
	if (!cr6.lt) goto loc_82EC85A4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC8598:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec8598
	if (cr6.lt) goto loc_82EC8598;
loc_82EC85A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC85B0;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC85B8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC85D0;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec85f0
	if (cr6.lt) goto loc_82EC85F0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82EC85F0;
	sub_82416268(ctx, base);
loc_82EC85F0:
	// lwz r11,256(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 256);
	// addi r4,r25,236
	ctx.r4.s64 = ctx.r25.s64 + 236;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x82ec8610
	if (cr6.lt) goto loc_82EC8610;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC8610:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82EC8620:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec8620
	if (!cr6.eq) goto loc_82EC8620;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8644;
	sub_82472FC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82e74890
	ctx.lr = 0x82EC8650;
	sub_82E74890(ctx, base);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// lwz r27,288(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bge cr6,0x82ec866c
	if (!cr6.lt) goto loc_82EC866C;
	// addi r27,r1,288
	ctx.r27.s64 = ctx.r1.s64 + 288;
loc_82EC866C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec86c4
	if (!cr6.lt) goto loc_82EC86C4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec8690
	if (!cr6.eq) goto loc_82EC8690;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC8690:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec86b0
	if (!cr6.lt) goto loc_82EC86B0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC86A4:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec86a4
	if (cr6.lt) goto loc_82EC86A4;
loc_82EC86B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC86BC;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC86C4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC86DC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec86fc
	if (cr6.lt) goto loc_82EC86FC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82EC86FC;
	sub_82416268(ctx, base);
loc_82EC86FC:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// addi r4,r24,-116
	ctx.r4.s64 = ctx.r24.s64 + -116;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8724;
	sub_82472FC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82e74890
	ctx.lr = 0x82EC8730;
	sub_82E74890(ctx, base);
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r27,352(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bge cr6,0x82ec874c
	if (!cr6.lt) goto loc_82EC874C;
	// addi r27,r1,352
	ctx.r27.s64 = ctx.r1.s64 + 352;
loc_82EC874C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec87a4
	if (!cr6.lt) goto loc_82EC87A4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82ec8770
	if (!cr6.eq) goto loc_82EC8770;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82EC8770:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ec8790
	if (!cr6.lt) goto loc_82EC8790;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82EC8784:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ec8784
	if (cr6.lt) goto loc_82EC8784;
loc_82EC8790:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831d3198
	ctx.lr = 0x82EC879C;
	sub_831D3198(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
loc_82EC87A4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EC87BC;
	sub_831CE980(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec87dc
	if (cr6.lt) goto loc_82EC87DC;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82EC87DC;
	sub_82416268(ctx, base);
loc_82EC87DC:
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,264(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// bl 0x82e746c0
	ctx.lr = 0x82EC87F4;
	sub_82E746C0(ctx, base);
	// stw r26,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r26.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// addi r4,r24,-108
	ctx.r4.s64 = ctx.r24.s64 + -108;
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82472fc0
	ctx.lr = 0x82EC8810;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC881C;
	sub_82E74C08(ctx, base);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8830
	if (cr6.lt) goto loc_82EC8830;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x82EC8830;
	sub_82416268(ctx, base);
loc_82EC8830:
	// lwz r11,288(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	// addi r4,r25,268
	ctx.r4.s64 = ctx.r25.s64 + 268;
	// stw r26,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r26.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// blt cr6,0x82ec8850
	if (cr6.lt) goto loc_82EC8850;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC8850:
	// stw r26,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
loc_82EC8860:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec8860
	if (!cr6.eq) goto loc_82EC8860;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8884;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8890;
	sub_82E74C08(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec88a4
	if (cr6.lt) goto loc_82EC88A4;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x82EC88A4;
	sub_82416268(ctx, base);
loc_82EC88A4:
	// stw r26,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r26.u32);
	// addi r4,r24,-96
	ctx.r4.s64 = ctx.r24.s64 + -96;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r26,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r26.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC88CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC88D8;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec88ec
	if (cr6.lt) goto loc_82EC88EC;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82EC88EC;
	sub_82416268(ctx, base);
loc_82EC88EC:
	// lwz r11,316(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 316);
	// addi r4,r25,296
	ctx.r4.s64 = ctx.r25.s64 + 296;
	// stw r26,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r26.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x82ec890c
	if (cr6.lt) goto loc_82EC890C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EC890C:
	// stw r26,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_82EC891C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec891c
	if (!cr6.eq) goto loc_82EC891C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8940;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC894C;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec8960
	if (cr6.lt) goto loc_82EC8960;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x82EC8960;
	sub_82416268(ctx, base);
loc_82EC8960:
	// stw r26,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r26.u32);
	// addi r4,r24,-88
	ctx.r4.s64 = ctx.r24.s64 + -88;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r26,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r26.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8988;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8994;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec89a8
	if (cr6.lt) goto loc_82EC89A8;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x82EC89A8;
	sub_82416268(ctx, base);
loc_82EC89A8:
	// lwz r10,344(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 344);
	// addi r11,r25,324
	ctx.r11.s64 = ctx.r25.s64 + 324;
	// stw r26,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r26.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x82ec89c8
	if (cr6.lt) goto loc_82EC89C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EC89C8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82475d40
	ctx.lr = 0x82EC89D4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC89E0;
	sub_82E74C08(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec89f4
	if (cr6.lt) goto loc_82EC89F4;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x82EC89F4;
	sub_82416268(ctx, base);
loc_82EC89F4:
	// stw r26,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r26.u32);
	// addi r4,r24,-76
	ctx.r4.s64 = ctx.r24.s64 + -76;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x82EC8A0C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8A18;
	sub_82E74C08(ctx, base);
	// lwz r11,948(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8a2c
	if (cr6.lt) goto loc_82EC8A2C;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x82EC8A2C;
	sub_82416268(ctx, base);
loc_82EC8A2C:
	// lwz r10,372(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 372);
	// addi r11,r25,352
	ctx.r11.s64 = ctx.r25.s64 + 352;
	// stw r26,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r26.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// blt cr6,0x82ec8a4c
	if (cr6.lt) goto loc_82EC8A4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EC8A4C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x82EC8A58;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8A64;
	sub_82E74C08(ctx, base);
	// lwz r11,1076(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8a78
	if (cr6.lt) goto loc_82EC8A78;
	// lwz r3,1056(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// bl 0x82416268
	ctx.lr = 0x82EC8A78;
	sub_82416268(ctx, base);
loc_82EC8A78:
	// stw r26,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r26.u32);
	// addi r4,r24,-56
	ctx.r4.s64 = ctx.r24.s64 + -56;
	// stw r31,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r31.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// stb r31,1056(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1056, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x82EC8A90;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8A9C;
	sub_82E74C08(ctx, base);
	// lwz r11,1012(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8ab0
	if (cr6.lt) goto loc_82EC8AB0;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x82EC8AB0;
	sub_82416268(ctx, base);
loc_82EC8AB0:
	// stw r26,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// ld r4,384(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 384);
	// bl 0x82ead258
	ctx.lr = 0x82EC8AC8;
	sub_82EAD258(ctx, base);
	// addi r4,r24,-44
	ctx.r4.s64 = ctx.r24.s64 + -44;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82475d40
	ctx.lr = 0x82EC8AD4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8AE0;
	sub_82E74C08(ctx, base);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8af4
	if (cr6.lt) goto loc_82EC8AF4;
	// lwz r3,1120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// bl 0x82416268
	ctx.lr = 0x82EC8AF4;
	sub_82416268(ctx, base);
loc_82EC8AF4:
	// lwz r10,412(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 412);
	// addi r11,r25,392
	ctx.r11.s64 = ctx.r25.s64 + 392;
	// stw r26,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r26.u32);
	// stw r31,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,1120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1120, ctx.r31.u8);
	// blt cr6,0x82ec8b14
	if (cr6.lt) goto loc_82EC8B14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EC8B14:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82475d40
	ctx.lr = 0x82EC8B20;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8B2C;
	sub_82E74C08(ctx, base);
	// lwz r11,916(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8b40
	if (cr6.lt) goto loc_82EC8B40;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x82EC8B40;
	sub_82416268(ctx, base);
loc_82EC8B40:
	// stw r26,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r26.u32);
	// addi r4,r24,-28
	ctx.r4.s64 = ctx.r24.s64 + -28;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x82EC8B58;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8B64;
	sub_82E74C08(ctx, base);
	// lwz r11,980(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8b78
	if (cr6.lt) goto loc_82EC8B78;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x82EC8B78;
	sub_82416268(ctx, base);
loc_82EC8B78:
	// lwz r10,440(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 440);
	// addi r11,r25,420
	ctx.r11.s64 = ctx.r25.s64 + 420;
	// stw r26,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r26.u32);
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// blt cr6,0x82ec8b98
	if (cr6.lt) goto loc_82EC8B98;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EC8B98:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82475d40
	ctx.lr = 0x82EC8BA4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8BB0;
	sub_82E74C08(ctx, base);
	// lwz r11,1044(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8bc4
	if (cr6.lt) goto loc_82EC8BC4;
	// lwz r3,1024(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// bl 0x82416268
	ctx.lr = 0x82EC8BC4;
	sub_82416268(ctx, base);
loc_82EC8BC4:
	// stw r26,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r26.u32);
	// addi r4,r24,-16
	ctx.r4.s64 = ctx.r24.s64 + -16;
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// bl 0x82475d40
	ctx.lr = 0x82EC8BDC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8BE8;
	sub_82E74C08(ctx, base);
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8bfc
	if (cr6.lt) goto loc_82EC8BFC;
	// lwz r3,1088(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// bl 0x82416268
	ctx.lr = 0x82EC8BFC;
	sub_82416268(ctx, base);
loc_82EC8BFC:
	// stw r26,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r31.u32);
	// stb r31,1088(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1088, ctx.r31.u8);
	// lwz r4,448(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 448);
	// bl 0x82e746c0
	ctx.lr = 0x82EC8C14;
	sub_82E746C0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82475d40
	ctx.lr = 0x82EC8C20;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x82EC8C2C;
	sub_82E74C08(ctx, base);
	// lwz r11,1172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec8c40
	if (cr6.lt) goto loc_82EC8C40;
	// lwz r3,1152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// bl 0x82416268
	ctx.lr = 0x82EC8C40;
	sub_82416268(ctx, base);
loc_82EC8C40:
	// stw r26,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r31.u32);
	// stb r31,1152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1152, ctx.r31.u8);
	// lwz r4,452(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 452);
	// bl 0x82e746c0
	ctx.lr = 0x82EC8C58;
	sub_82E746C0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x831cf100
	ctx.lr = 0x82EC8C60;
	sub_831CF100(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831cf100
	ctx.lr = 0x82EC8C68;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC8C74"))) PPC_WEAK_FUNC(sub_82EC8C74);
PPC_FUNC_IMPL(__imp__sub_82EC8C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC8C78"))) PPC_WEAK_FUNC(sub_82EC8C78);
PPC_FUNC_IMPL(__imp__sub_82EC8C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82EC8C80;
	__savegprlr_14(ctx, base);
	// stwu r1,-1376(r1)
	ea = -1376 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r23,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r23.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x83691bb8
	ctx.lr = 0x82EC8CA8;
	sub_83691BB8(ctx, base);
	// lwz r10,872(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r11,876(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec9cec
	if (!cr6.lt) goto loc_82EC9CEC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r31,r11,-9920
	ctx.r31.s64 = ctx.r11.s64 + -9920;
	// li r15,15
	ctx.r15.s64 = 15;
	// li r22,4
	ctx.r22.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r19,r8,1
	ctx.r19.u64 = ctx.r8.u64 | 1;
	// addi r20,r10,8980
	ctx.r20.s64 = ctx.r10.s64 + 8980;
	// addi r21,r9,26164
	ctx.r21.s64 = ctx.r9.s64 + 26164;
	// b 0x82ec8cfc
	goto loc_82EC8CFC;
loc_82EC8CF8:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EC8CFC:
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// ld r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r14.u32 + 8);
	// ld r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,952(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r4,956(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8D2C;
	sub_82472FC0(ctx, base);
	// addi r6,r31,-220
	ctx.r6.s64 = ctx.r31.s64 + -220;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC8D44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec8ddc
	if (!cr6.eq) goto loc_82EC8DDC;
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// stw r15,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r15.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// lwz r5,1144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8D80;
	sub_82472FC0(ctx, base);
	// lwz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec8d94
	if (!cr6.lt) goto loc_82EC8D94;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_82EC8D94:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC8D98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec8d98
	if (!cr6.eq) goto loc_82EC8D98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,20
	ctx.r3.s64 = ctx.r17.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC8DBC;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec8dd0
	if (cr6.lt) goto loc_82EC8DD0;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x82EC8DD0;
	sub_82416268(ctx, base);
loc_82EC8DD0:
	// stw r15,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r15.u32);
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
loc_82EC8DDC:
	// addi r6,r31,-212
	ctx.r6.s64 = ctx.r31.s64 + -212;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC8DF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec8e34
	if (!cr6.eq) goto loc_82EC8E34;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82ec8e2c
	if (!cr6.eq) goto loc_82EC8E2C;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec8e30
	goto loc_82EC8E30;
loc_82EC8E2C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC8E30:
	// stw r11,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r11.u32);
loc_82EC8E34:
	// addi r6,r31,-204
	ctx.r6.s64 = ctx.r31.s64 + -204;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC8E4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec8e8c
	if (!cr6.eq) goto loc_82EC8E8C;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82ec8e84
	if (!cr6.eq) goto loc_82EC8E84;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec8e88
	goto loc_82EC8E88;
loc_82EC8E84:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC8E88:
	// stw r11,156(r17)
	PPC_STORE_U32(ctx.r17.u32 + 156, ctx.r11.u32);
loc_82EC8E8C:
	// addi r6,r31,-200
	ctx.r6.s64 = ctx.r31.s64 + -200;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC8EA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9590
	if (!cr6.eq) goto loc_82EC9590;
	// stw r23,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r23.u32);
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r4,28(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x82EC8EC8;
	sub_83691BB8(ctx, base);
	// lwz r10,824(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r11,828(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec9574
	if (!cr6.lt) goto loc_82EC9574;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r18,r11,28
	ctx.r18.s64 = ctx.r11.s64 + 28;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r16,r11,1
	ctx.r16.s64 = ctx.r11.s64 + 1;
loc_82EC8EF4:
	// stw r15,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r15.u32);
	// addi r11,r1,928
	ctx.r11.s64 = ctx.r1.s64 + 928;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r23,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r23.u8);
	// addi r10,r18,-28
	ctx.r10.s64 = ctx.r18.s64 + -28;
	// ld r9,-28(r18)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r18.u32 + -28);
	// ld r8,-20(r18)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r18.u32 + -20);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,936(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 936);
	// lwz r4,940(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 940);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8F28;
	sub_82472FC0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r6,r6,-192
	ctx.r6.s64 = ctx.r6.s64 + -192;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x82EC8F44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9288
	if (!cr6.eq) goto loc_82EC9288;
	// stw r23,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r23.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r23,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r23.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// lwz r5,-4(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x82EC8F68;
	sub_83691BB8(ctx, base);
	// lwz r10,776(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r11,780(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ec926c
	if (!cr6.lt) goto loc_82EC926C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
loc_82EC8F94:
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// addi r11,r1,1184
	ctx.r11.s64 = ctx.r1.s64 + 1184;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// addi r10,r25,-16
	ctx.r10.s64 = ctx.r25.s64 + -16;
	// ld r9,-16(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + -16);
	// ld r8,-8(r25)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r25.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1196);
	// lwz r5,1192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1192);
	// bl 0x82472fc0
	ctx.lr = 0x82EC8FC8;
	sub_82472FC0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r6,r31,-184
	ctx.r6.s64 = ctx.r31.s64 + -184;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x82EC8FE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9078
	if (!cr6.eq) goto loc_82EC9078;
	// stw r15,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r15.u32);
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// ld r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,968(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 968);
	// lwz r4,972(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 972);
	// bl 0x82472fc0
	ctx.lr = 0x82EC901C;
	sub_82472FC0(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ec9030
	if (!cr6.lt) goto loc_82EC9030;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82EC9030:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9034:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9034
	if (!cr6.eq) goto loc_82EC9034;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,160
	ctx.r3.s64 = ctx.r17.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC9058;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec906c
	if (cr6.lt) goto loc_82EC906C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82EC906C;
	sub_82416268(ctx, base);
loc_82EC906C:
	// stw r15,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r15.u32);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
loc_82EC9078:
	// addi r6,r31,-176
	ctx.r6.s64 = ctx.r31.s64 + -176;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x82EC9090;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec90e0
	if (!cr6.eq) goto loc_82EC90E0;
	// ld r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// ld r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r11,800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ec90c4
	if (!cr6.eq) goto loc_82EC90C4;
	// ld r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec90dc
	goto loc_82EC90DC;
loc_82EC90C4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82ec90d8
	if (!cr6.eq) goto loc_82EC90D8;
	// ld r11,808(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 808);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x82ec90dc
	goto loc_82EC90DC;
loc_82EC90D8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC90DC:
	// stw r11,188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 188, ctx.r11.u32);
loc_82EC90E0:
	// addi r6,r31,-168
	ctx.r6.s64 = ctx.r31.s64 + -168;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x82EC90F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9240
	if (!cr6.eq) goto loc_82EC9240;
	// addi r31,r17,192
	ctx.r31.s64 = ctx.r17.s64 + 192;
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// stw r22,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r22.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r22,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r22.u32);
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stw r29,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82EC9130;
	sub_8247B7D8(ctx, base);
	// lwz r3,200(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 200);
	// stw r23,192(r17)
	PPC_STORE_U32(ctx.r17.u32 + 192, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec9150
	if (cr6.eq) goto loc_82EC9150;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82EC9148;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82EC9150:
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x82ec9240
	if (!cr6.lt) goto loc_82EC9240;
loc_82EC9170:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,736
	ctx.r10.s64 = ctx.r1.s64 + 736;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,736(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ec919c
	if (!cr6.eq) goto loc_82EC919C;
	// ld r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec91b4
	goto loc_82EC91B4;
loc_82EC919C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82ec91b0
	if (!cr6.eq) goto loc_82EC91B0;
	// ld r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x82ec91b4
	goto loc_82EC91B4;
loc_82EC91B0:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82EC91B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ec9210
	if (cr6.lt) goto loc_82EC9210;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ec9200
	if (!cr6.gt) goto loc_82EC9200;
	// stw r30,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r31,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r29.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stw r22,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r22.u32);
	// stw r22,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r22.u32);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82EC91F8;
	sub_8247B270(ctx, base);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// b 0x82ec9204
	goto loc_82EC9204;
loc_82EC9200:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC9204:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec9234
	if (cr6.eq) goto loc_82EC9234;
loc_82EC9210:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ec9228
	if (cr0.eq) goto loc_82EC9228;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82EC9228:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EC9234:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x82ec9170
	if (cr6.lt) goto loc_82EC9170;
loc_82EC9240:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec9254
	if (cr6.lt) goto loc_82EC9254;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82EC9254;
	sub_82416268(ctx, base);
loc_82EC9254:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// bne 0x82ec8f94
	if (!cr0.eq) goto loc_82EC8F94;
loc_82EC926C:
	// lwz r31,784(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ec9288
	if (cr6.eq) goto loc_82EC9288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EC9280;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EC9288;
	sub_82416268(ctx, base);
loc_82EC9288:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r6,r11,-160
	ctx.r6.s64 = ctx.r11.s64 + -160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x82EC92A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec93e8
	if (!cr6.eq) goto loc_82EC93E8;
	// addi r31,r17,208
	ctx.r31.s64 = ctx.r17.s64 + 208;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r22,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r22.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r22,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r22.u32);
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r29,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82EC92DC;
	sub_8247B7D8(ctx, base);
	// lwz r3,216(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 216);
	// stw r23,208(r17)
	PPC_STORE_U32(ctx.r17.u32 + 208, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec92fc
	if (cr6.eq) goto loc_82EC92FC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82EC92F4;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82EC92FC:
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x82ec93e8
	if (!cr6.lt) goto loc_82EC93E8;
loc_82EC9318:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,752(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ec9344
	if (!cr6.eq) goto loc_82EC9344;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec935c
	goto loc_82EC935C;
loc_82EC9344:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82ec9358
	if (!cr6.eq) goto loc_82EC9358;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// b 0x82ec935c
	goto loc_82EC935C;
loc_82EC9358:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82EC935C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ec93b8
	if (cr6.lt) goto loc_82EC93B8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ec93a8
	if (!cr6.gt) goto loc_82EC93A8;
	// stw r30,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// stw r31,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r29.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r22,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r22.u32);
	// stw r22,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r22.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82EC93A0;
	sub_8247B270(ctx, base);
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// b 0x82ec93ac
	goto loc_82EC93AC;
loc_82EC93A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC93AC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec93dc
	if (cr6.eq) goto loc_82EC93DC;
loc_82EC93B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ec93d0
	if (cr0.eq) goto loc_82EC93D0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82EC93D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EC93DC:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82ec9318
	if (cr6.lt) goto loc_82EC9318;
loc_82EC93E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r6,r11,-156
	ctx.r6.s64 = ctx.r11.s64 + -156;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x82EC9404;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9548
	if (!cr6.eq) goto loc_82EC9548;
	// addi r31,r17,224
	ctx.r31.s64 = ctx.r17.s64 + 224;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r21.u32);
	// stw r22,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r22.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r22,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r22.u32);
	// stw r30,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r30.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r29,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x82EC943C;
	sub_8247B7D8(ctx, base);
	// lwz r3,232(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 232);
	// stw r23,224(r17)
	PPC_STORE_U32(ctx.r17.u32 + 224, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec945c
	if (cr6.eq) goto loc_82EC945C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x82EC9454;
	sub_8247B268(ctx, base);
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82EC945C:
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// lwz r28,0(r18)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,-4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x82ec9548
	if (!cr6.lt) goto loc_82EC9548;
loc_82EC9478:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,848(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82ec94a4
	if (!cr6.eq) goto loc_82EC94A4;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec94bc
	goto loc_82EC94BC;
loc_82EC94A4:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82ec94b8
	if (!cr6.eq) goto loc_82EC94B8;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// extsw r27,r11
	ctx.r27.s64 = ctx.r11.s32;
	// b 0x82ec94bc
	goto loc_82EC94BC;
loc_82EC94B8:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82EC94BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ec9518
	if (cr6.lt) goto loc_82EC9518;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ec9508
	if (!cr6.gt) goto loc_82EC9508;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r31,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r31.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r29,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r29.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r22,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r22.u32);
	// stw r22,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r22.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x82EC9500;
	sub_8247B270(ctx, base);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// b 0x82ec950c
	goto loc_82EC950C;
loc_82EC9508:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EC950C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ec953c
	if (cr6.eq) goto loc_82EC953C;
loc_82EC9518:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ec9530
	if (cr0.eq) goto loc_82EC9530;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82EC9530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EC953C:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82ec9478
	if (cr6.lt) goto loc_82EC9478;
loc_82EC9548:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec955c
	if (cr6.lt) goto loc_82EC955C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82EC955C;
	sub_82416268(ctx, base);
loc_82EC955C:
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r15,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r15.u32);
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r18,r18,32
	ctx.r18.s64 = ctx.r18.s64 + 32;
	// stb r23,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r23.u8);
	// bne 0x82ec8ef4
	if (!cr0.eq) goto loc_82EC8EF4;
loc_82EC9574:
	// lwz r31,832(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ec9590
	if (cr6.eq) goto loc_82EC9590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EC9588;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EC9590;
	sub_82416268(ctx, base);
loc_82EC9590:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r31,-144
	ctx.r6.s64 = ctx.r31.s64 + -144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC95AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec95e4
	if (!cr6.eq) goto loc_82EC95E4;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1088(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x82ec95e0
	if (cr6.eq) goto loc_82EC95E0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC95E0:
	// std r11,240(r17)
	PPC_STORE_U64(ctx.r17.u32 + 240, ctx.r11.u64);
loc_82EC95E4:
	// addi r6,r31,-136
	ctx.r6.s64 = ctx.r31.s64 + -136;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC95FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9694
	if (!cr6.eq) goto loc_82EC9694;
	// stw r15,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r15.u32);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// stw r23,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r23.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r23,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1000(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// bl 0x82472fc0
	ctx.lr = 0x82EC9638;
	sub_82472FC0(ctx, base);
	// lwz r7,500(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec964c
	if (!cr6.lt) goto loc_82EC964C;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
loc_82EC964C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9650:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9650
	if (!cr6.eq) goto loc_82EC9650;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,248
	ctx.r3.s64 = ctx.r17.s64 + 248;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC9674;
	sub_824208C8(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec9688
	if (cr6.lt) goto loc_82EC9688;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x82EC9688;
	sub_82416268(ctx, base);
loc_82EC9688:
	// stw r15,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r15.u32);
	// stw r23,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r23.u32);
	// stb r23,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r23.u8);
loc_82EC9694:
	// addi r6,r31,-124
	ctx.r6.s64 = ctx.r31.s64 + -124;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC96AC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9744
	if (!cr6.eq) goto loc_82EC9744;
	// stw r15,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r15.u32);
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// stw r23,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r23,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r8,16(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// lwz r4,1164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1164);
	// bl 0x82472fc0
	ctx.lr = 0x82EC96E8;
	sub_82472FC0(ctx, base);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec96fc
	if (!cr6.lt) goto loc_82EC96FC;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82EC96FC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9700:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9700
	if (!cr6.eq) goto loc_82EC9700;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,276
	ctx.r3.s64 = ctx.r17.s64 + 276;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC9724;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec9738
	if (cr6.lt) goto loc_82EC9738;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82EC9738;
	sub_82416268(ctx, base);
loc_82EC9738:
	// stw r15,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r15.u32);
	// stw r23,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// stb r23,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r23.u8);
loc_82EC9744:
	// addi r6,r31,-116
	ctx.r6.s64 = ctx.r31.s64 + -116;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC975C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec979c
	if (!cr6.eq) goto loc_82EC979C;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1024(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82ec9794
	if (!cr6.eq) goto loc_82EC9794;
	// ld r11,1032(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1032);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec9798
	goto loc_82EC9798;
loc_82EC9794:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC9798:
	// stw r11,304(r17)
	PPC_STORE_U32(ctx.r17.u32 + 304, ctx.r11.u32);
loc_82EC979C:
	// addi r6,r31,-108
	ctx.r6.s64 = ctx.r31.s64 + -108;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC97B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec984c
	if (!cr6.eq) goto loc_82EC984C;
	// stw r15,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r15.u32);
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// lwz r4,1132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// bl 0x82472fc0
	ctx.lr = 0x82EC97F0;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec9804
	if (!cr6.lt) goto loc_82EC9804;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82EC9804:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9808:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9808
	if (!cr6.eq) goto loc_82EC9808;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,308
	ctx.r3.s64 = ctx.r17.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC982C;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec9840
	if (cr6.lt) goto loc_82EC9840;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x82EC9840;
	sub_82416268(ctx, base);
loc_82EC9840:
	// stw r15,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r15.u32);
	// stw r23,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// stb r23,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r23.u8);
loc_82EC984C:
	// addi r6,r31,-96
	ctx.r6.s64 = ctx.r31.s64 + -96;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9864;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec98fc
	if (!cr6.eq) goto loc_82EC98FC;
	// stw r15,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r15.u32);
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r23,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1064(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r4,1068(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// bl 0x82472fc0
	ctx.lr = 0x82EC98A0;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec98b4
	if (!cr6.lt) goto loc_82EC98B4;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_82EC98B4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC98B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec98b8
	if (!cr6.eq) goto loc_82EC98B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,336
	ctx.r3.s64 = ctx.r17.s64 + 336;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC98DC;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec98f0
	if (cr6.lt) goto loc_82EC98F0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82EC98F0;
	sub_82416268(ctx, base);
loc_82EC98F0:
	// stw r15,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r15.u32);
	// stw r23,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r23.u32);
	// stb r23,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r23.u8);
loc_82EC98FC:
	// addi r6,r31,-88
	ctx.r6.s64 = ctx.r31.s64 + -88;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9914;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec99ac
	if (!cr6.eq) goto loc_82EC99AC;
	// stw r15,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r15.u32);
	// addi r11,r1,912
	ctx.r11.s64 = ctx.r1.s64 + 912;
	// stw r23,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r23.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r23,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,920(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 920);
	// lwz r4,924(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// bl 0x82472fc0
	ctx.lr = 0x82EC9950;
	sub_82472FC0(ctx, base);
	// lwz r7,468(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec9964
	if (!cr6.lt) goto loc_82EC9964;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_82EC9964:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9968:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9968
	if (!cr6.eq) goto loc_82EC9968;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,364
	ctx.r3.s64 = ctx.r17.s64 + 364;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC998C;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec99a0
	if (cr6.lt) goto loc_82EC99A0;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x82EC99A0;
	sub_82416268(ctx, base);
loc_82EC99A0:
	// stw r15,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r15.u32);
	// stw r23,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r23.u32);
	// stb r23,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r23.u8);
loc_82EC99AC:
	// addi r6,r31,-76
	ctx.r6.s64 = ctx.r31.s64 + -76;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC99C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9a5c
	if (!cr6.eq) goto loc_82EC9A5C;
	// stw r15,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r15.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r23,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r23.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r23,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// bl 0x82472fc0
	ctx.lr = 0x82EC9A00;
	sub_82472FC0(ctx, base);
	// lwz r7,532(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec9a14
	if (!cr6.lt) goto loc_82EC9A14;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
loc_82EC9A14:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9A18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9a18
	if (!cr6.eq) goto loc_82EC9A18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,392
	ctx.r3.s64 = ctx.r17.s64 + 392;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC9A3C;
	sub_824208C8(ctx, base);
	// lwz r10,532(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec9a50
	if (cr6.lt) goto loc_82EC9A50;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x82EC9A50;
	sub_82416268(ctx, base);
loc_82EC9A50:
	// stw r15,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r15.u32);
	// stw r23,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r23.u32);
	// stb r23,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r23.u8);
loc_82EC9A5C:
	// addi r6,r31,-56
	ctx.r6.s64 = ctx.r31.s64 + -56;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9A74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9aac
	if (!cr6.eq) goto loc_82EC9AAC;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,976(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x82ec9aa8
	if (cr6.eq) goto loc_82EC9AA8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC9AA8:
	// std r11,424(r17)
	PPC_STORE_U64(ctx.r17.u32 + 424, ctx.r11.u64);
loc_82EC9AAC:
	// addi r6,r31,-44
	ctx.r6.s64 = ctx.r31.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9AC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9b5c
	if (!cr6.eq) goto loc_82EC9B5C;
	// stw r15,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r15.u32);
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r23,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1016(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// lwz r4,1020(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// bl 0x82472fc0
	ctx.lr = 0x82EC9B00;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec9b14
	if (!cr6.lt) goto loc_82EC9B14;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_82EC9B14:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9B18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9b18
	if (!cr6.eq) goto loc_82EC9B18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,432
	ctx.r3.s64 = ctx.r17.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC9B3C;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec9b50
	if (cr6.lt) goto loc_82EC9B50;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x82EC9B50;
	sub_82416268(ctx, base);
loc_82EC9B50:
	// stw r15,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r15.u32);
	// stw r23,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r23.u32);
	// stb r23,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r23.u8);
loc_82EC9B5C:
	// addi r6,r31,-28
	ctx.r6.s64 = ctx.r31.s64 + -28;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9B74;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9c0c
	if (!cr6.eq) goto loc_82EC9C0C;
	// stw r15,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r15.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stw r23,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r23.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r23,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r23.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// bl 0x82472fc0
	ctx.lr = 0x82EC9BB0;
	sub_82472FC0(ctx, base);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x82ec9bc4
	if (!cr6.lt) goto loc_82EC9BC4;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_82EC9BC4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EC9BC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec9bc8
	if (!cr6.eq) goto loc_82EC9BC8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,460
	ctx.r3.s64 = ctx.r17.s64 + 460;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EC9BEC;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ec9c00
	if (cr6.lt) goto loc_82EC9C00;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82EC9C00;
	sub_82416268(ctx, base);
loc_82EC9C00:
	// stw r15,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r15.u32);
	// stw r23,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r23.u32);
	// stb r23,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r23.u8);
loc_82EC9C0C:
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9C24;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9c64
	if (!cr6.eq) goto loc_82EC9C64;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,1072
	ctx.r10.s64 = ctx.r1.s64 + 1072;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1072(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82ec9c5c
	if (!cr6.eq) goto loc_82EC9C5C;
	// ld r11,1080(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1080);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec9c60
	goto loc_82EC9C60;
loc_82EC9C5C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC9C60:
	// stw r11,488(r17)
	PPC_STORE_U32(ctx.r17.u32 + 488, ctx.r11.u32);
loc_82EC9C64:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82EC9C7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec9cbc
	if (!cr6.eq) goto loc_82EC9CBC;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82ec9cb4
	if (!cr6.eq) goto loc_82EC9CB4;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ec9cb8
	goto loc_82EC9CB8;
loc_82EC9CB4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82EC9CB8:
	// stw r11,492(r17)
	PPC_STORE_U32(ctx.r17.u32 + 492, ctx.r11.u32);
loc_82EC9CBC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ec9cd0
	if (cr6.lt) goto loc_82EC9CD0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82EC9CD0;
	sub_82416268(ctx, base);
loc_82EC9CD0:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r14,r14,32
	ctx.r14.s64 = ctx.r14.s64 + 32;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// blt cr6,0x82ec8cf8
	if (cr6.lt) goto loc_82EC8CF8;
loc_82EC9CEC:
	// lwz r31,880(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ec9d08
	if (cr6.eq) goto loc_82EC9D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EC9D00;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EC9D08;
	sub_82416268(ctx, base);
loc_82EC9D08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1376
	ctx.r1.s64 = ctx.r1.s64 + 1376;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC9D14"))) PPC_WEAK_FUNC(sub_82EC9D14);
PPC_FUNC_IMPL(__imp__sub_82EC9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EC9D18"))) PPC_WEAK_FUNC(sub_82EC9D18);
PPC_FUNC_IMPL(__imp__sub_82EC9D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EC9D20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82d95768
	ctx.lr = 0x82EC9D30;
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
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r29,r4,-10680
	ctx.r29.s64 = ctx.r4.s64 + -10680;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82EC9D6C;
	sub_824208C8(ctx, base);
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r9,r3,12072
	ctx.r9.s64 = ctx.r3.s64 + 12072;
	// addi r8,r11,12060
	ctx.r8.s64 = ctx.r11.s64 + 12060;
	// addi r7,r10,12056
	ctx.r7.s64 = ctx.r10.s64 + 12056;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bl 0x835fe558
	ctx.lr = 0x82EC9DA0;
	sub_835FE558(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// std r30,400(r31)
	PPC_STORE_U64(ctx.r31.u32 + 400, ctx.r30.u64);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// stw r28,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82EC9DC4;
	sub_824208C8(ctx, base);
	// stw r28,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r28.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// stb r30,436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 436, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9DE0;
	sub_824208C8(ctx, base);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r28,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r28.u32);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// stb r30,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9E00;
	sub_824208C8(ctx, base);
	// stw r28,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r28.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// stb r30,496(r31)
	PPC_STORE_U8(ctx.r31.u32 + 496, ctx.r30.u8);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9E1C;
	sub_824208C8(ctx, base);
	// stw r28,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r28.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// stb r30,524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 524, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9E38;
	sub_824208C8(ctx, base);
	// stw r28,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r28.u32);
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// addi r3,r31,552
	ctx.r3.s64 = ctx.r31.s64 + 552;
	// stb r30,552(r31)
	PPC_STORE_U8(ctx.r31.u32 + 552, ctx.r30.u8);
	// addi r4,r29,100
	ctx.r4.s64 = ctx.r29.s64 + 100;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9E54;
	sub_824208C8(ctx, base);
	// std r30,584(r31)
	PPC_STORE_U64(ctx.r31.u32 + 584, ctx.r30.u64);
	// stw r28,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r28.u32);
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stb r30,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9E74;
	sub_824208C8(ctx, base);
	// stw r28,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r28.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// stb r30,620(r31)
	PPC_STORE_U8(ctx.r31.u32 + 620, ctx.r30.u8);
	// addi r4,r29,132
	ctx.r4.s64 = ctx.r29.s64 + 132;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9E90;
	sub_824208C8(ctx, base);
	// stw r27,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r27.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC9EA8"))) PPC_WEAK_FUNC(sub_82EC9EA8);
PPC_FUNC_IMPL(__imp__sub_82EC9EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EC9EB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82e75880
	ctx.lr = 0x82EC9EC0;
	sub_82E75880(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r29,r11,-10680
	ctx.r29.s64 = ctx.r11.s64 + -10680;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82EC9ED8;
	sub_824208C8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r10,-9808
	ctx.r7.s64 = ctx.r10.s64 + -9808;
	// addi r6,r9,-9820
	ctx.r6.s64 = ctx.r9.s64 + -9820;
	// addi r5,r8,-9824
	ctx.r5.s64 = ctx.r8.s64 + -9824;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// bl 0x835fe558
	ctx.lr = 0x82EC9F0C;
	sub_835FE558(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// std r30,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r30.u64);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// addi r4,r29,396
	ctx.r4.s64 = ctx.r29.s64 + 396;
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 448, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x82EC9F30;
	sub_824208C8(ctx, base);
	// stw r28,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r28.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// stb r30,476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 476, ctx.r30.u8);
	// addi r4,r29,412
	ctx.r4.s64 = ctx.r29.s64 + 412;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9F4C;
	sub_824208C8(ctx, base);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r28,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r28.u32);
	// addi r3,r31,508
	ctx.r3.s64 = ctx.r31.s64 + 508;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// addi r4,r29,428
	ctx.r4.s64 = ctx.r29.s64 + 428;
	// stb r30,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9F6C;
	sub_824208C8(ctx, base);
	// stw r28,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r28.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// stb r30,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r30.u8);
	// addi r4,r29,444
	ctx.r4.s64 = ctx.r29.s64 + 444;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9F88;
	sub_824208C8(ctx, base);
	// stw r28,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// stb r30,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r29,460
	ctx.r4.s64 = ctx.r29.s64 + 460;
	// bl 0x824208c8
	ctx.lr = 0x82EC9FA4;
	sub_824208C8(ctx, base);
	// stw r28,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r28.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// addi r3,r31,592
	ctx.r3.s64 = ctx.r31.s64 + 592;
	// stb r30,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r30.u8);
	// addi r4,r29,476
	ctx.r4.s64 = ctx.r29.s64 + 476;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9FC0;
	sub_824208C8(ctx, base);
	// std r30,624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 624, ctx.r30.u64);
	// stw r28,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r28.u32);
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// addi r4,r29,492
	ctx.r4.s64 = ctx.r29.s64 + 492;
	// stb r30,632(r31)
	PPC_STORE_U8(ctx.r31.u32 + 632, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9FE0;
	sub_824208C8(ctx, base);
	// stw r28,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r28.u32);
	// stw r30,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r30.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stb r30,660(r31)
	PPC_STORE_U8(ctx.r31.u32 + 660, ctx.r30.u8);
	// addi r4,r29,508
	ctx.r4.s64 = ctx.r29.s64 + 508;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x82EC9FFC;
	sub_824208C8(ctx, base);
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA014"))) PPC_WEAK_FUNC(sub_82ECA014);
PPC_FUNC_IMPL(__imp__sub_82ECA014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA018"))) PPC_WEAK_FUNC(sub_82ECA018);
PPC_FUNC_IMPL(__imp__sub_82ECA018) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82eca1f8
	sub_82ECA1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA020"))) PPC_WEAK_FUNC(sub_82ECA020);
PPC_FUNC_IMPL(__imp__sub_82ECA020) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82eca1f8
	sub_82ECA1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA028"))) PPC_WEAK_FUNC(sub_82ECA028);
PPC_FUNC_IMPL(__imp__sub_82ECA028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECA030;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,-9808
	ctx.r8.s64 = ctx.r11.s64 + -9808;
	// addi r7,r10,-9820
	ctx.r7.s64 = ctx.r10.s64 + -9820;
	// addi r6,r9,-9824
	ctx.r6.s64 = ctx.r9.s64 + -9824;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,660
	ctx.r29.s64 = ctx.r3.s64 + 660;
	// lwz r5,680(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82eca074
	if (cr6.lt) goto loc_82ECA074;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA074;
	sub_8386D088(ctx, base);
loc_82ECA074:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r27,r30,632
	ctx.r27.s64 = ctx.r30.s64 + 632;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca0a0
	if (cr6.lt) goto loc_82ECA0A0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA0A0;
	sub_8386D088(ctx, base);
loc_82ECA0A0:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r29,r30,592
	ctx.r29.s64 = ctx.r30.s64 + 592;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca0c4
	if (cr6.lt) goto loc_82ECA0C4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA0C4;
	sub_8386D088(ctx, base);
loc_82ECA0C4:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r27,r30,564
	ctx.r27.s64 = ctx.r30.s64 + 564;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca0e8
	if (cr6.lt) goto loc_82ECA0E8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA0E8;
	sub_8386D088(ctx, base);
loc_82ECA0E8:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r29,r30,536
	ctx.r29.s64 = ctx.r30.s64 + 536;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca10c
	if (cr6.lt) goto loc_82ECA10C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA10C;
	sub_8386D088(ctx, base);
loc_82ECA10C:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r27,r30,508
	ctx.r27.s64 = ctx.r30.s64 + 508;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca130
	if (cr6.lt) goto loc_82ECA130;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA130;
	sub_8386D088(ctx, base);
loc_82ECA130:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r29,r30,476
	ctx.r29.s64 = ctx.r30.s64 + 476;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca154
	if (cr6.lt) goto loc_82ECA154;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA154;
	sub_8386D088(ctx, base);
loc_82ECA154:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r27,r30,448
	ctx.r27.s64 = ctx.r30.s64 + 448;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca178
	if (cr6.lt) goto loc_82ECA178;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA178;
	sub_8386D088(ctx, base);
loc_82ECA178:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r29,r30,360
	ctx.r29.s64 = ctx.r30.s64 + 360;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x82ECA190;
	sub_824238B8(ctx, base);
	// addi r3,r29,48
	ctx.r3.s64 = ctx.r29.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x82ECA198;
	sub_824238B8(ctx, base);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x82ECA1A0;
	sub_824238B8(ctx, base);
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca1b4
	if (cr6.lt) goto loc_82ECA1B4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA1B4;
	sub_8386D088(ctx, base);
loc_82ECA1B4:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r27,r30,312
	ctx.r27.s64 = ctx.r30.s64 + 312;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eca1d8
	if (cr6.lt) goto loc_82ECA1D8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82ECA1D8;
	sub_8386D088(ctx, base);
loc_82ECA1D8:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x82ECA1EC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA1F4"))) PPC_WEAK_FUNC(sub_82ECA1F4);
PPC_FUNC_IMPL(__imp__sub_82ECA1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA1F8"))) PPC_WEAK_FUNC(sub_82ECA1F8);
PPC_FUNC_IMPL(__imp__sub_82ECA1F8) {
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
	// bl 0x82eca028
	ctx.lr = 0x82ECA218;
	sub_82ECA028(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca230
	if (cr6.eq) goto loc_82ECA230;
	// bl 0x82416268
	ctx.lr = 0x82ECA22C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECA230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA248"))) PPC_WEAK_FUNC(sub_82ECA248);
PPC_FUNC_IMPL(__imp__sub_82ECA248) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-9652
	ctx.r10.s64 = ctx.r11.s64 + -9652;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c684f8
	ctx.lr = 0x82ECA278;
	sub_82C684F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c682d8
	ctx.lr = 0x82ECA280;
	sub_82C682D8(ctx, base);
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

__attribute__((alias("__imp__sub_82ECA29C"))) PPC_WEAK_FUNC(sub_82ECA29C);
PPC_FUNC_IMPL(__imp__sub_82ECA29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA2A0"))) PPC_WEAK_FUNC(sub_82ECA2A0);
PPC_FUNC_IMPL(__imp__sub_82ECA2A0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,-9652
	ctx.r9.s64 = ctx.r11.s64 + -9652;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,29696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29696, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c683c8
	ctx.lr = 0x82ECA2DC;
	sub_82C683C8(ctx, base);
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eca2f4
	if (cr6.eq) goto loc_82ECA2F4;
	// bl 0x82416268
	ctx.lr = 0x82ECA2F0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECA2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA30C"))) PPC_WEAK_FUNC(sub_82ECA30C);
PPC_FUNC_IMPL(__imp__sub_82ECA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA310"))) PPC_WEAK_FUNC(sub_82ECA310);
PPC_FUNC_IMPL(__imp__sub_82ECA310) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-9248
	ctx.r9.s64 = ctx.r11.s64 + -9248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r3,134
	ctx.r3.s64 = 134;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// bl 0x832d37a0
	ctx.lr = 0x82ECA358;
	sub_832D37A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82ECA374"))) PPC_WEAK_FUNC(sub_82ECA374);
PPC_FUNC_IMPL(__imp__sub_82ECA374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA378"))) PPC_WEAK_FUNC(sub_82ECA378);
PPC_FUNC_IMPL(__imp__sub_82ECA378) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-9248
	ctx.r10.s64 = ctx.r11.s64 + -9248;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82eca3b8
	if (cr6.eq) goto loc_82ECA3B8;
	// bl 0x832d3798
	ctx.lr = 0x82ECA3B0;
	sub_832D3798(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82ECA3B8:
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,29704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29704, ctx.r11.u32);
	// beq cr6,0x82eca3dc
	if (cr6.eq) goto loc_82ECA3DC;
	// bl 0x82416268
	ctx.lr = 0x82ECA3D8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECA3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA3F4"))) PPC_WEAK_FUNC(sub_82ECA3F4);
PPC_FUNC_IMPL(__imp__sub_82ECA3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA3F8"))) PPC_WEAK_FUNC(sub_82ECA3F8);
PPC_FUNC_IMPL(__imp__sub_82ECA3F8) {
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
	// lwz r11,29704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29704);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eca45c
	if (!cr6.eq) goto loc_82ECA45C;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECA430;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca454
	if (cr6.eq) goto loc_82ECA454;
	// bl 0x82eca310
	ctx.lr = 0x82ECA43C;
	sub_82ECA310(ctx, base);
	// stw r3,29704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29704, ctx.r3.u32);
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
loc_82ECA454:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,29704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29704, ctx.r11.u32);
loc_82ECA45C:
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

__attribute__((alias("__imp__sub_82ECA470"))) PPC_WEAK_FUNC(sub_82ECA470);
PPC_FUNC_IMPL(__imp__sub_82ECA470) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,29704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29704);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca4d4
	if (cr6.eq) goto loc_82ECA4D4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82ECA4A4;
	sub_82595150(ctx, base);
	// lwz r3,29704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29704);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca4c4
	if (cr6.eq) goto loc_82ECA4C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECA4C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECA4C4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82ECA4CC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,29704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29704, ctx.r11.u32);
loc_82ECA4D4:
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

__attribute__((alias("__imp__sub_82ECA4E8"))) PPC_WEAK_FUNC(sub_82ECA4E8);
PPC_FUNC_IMPL(__imp__sub_82ECA4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ECA4F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eca6c4
	if (cr6.eq) goto loc_82ECA6C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83d756cc
	ctx.lr = 0x82ECA520;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eca6c4
	if (cr6.eq) goto loc_82ECA6C4;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lis r9,-32747
	ctx.r9.s64 = -2146107392;
	// lis r8,21
	ctx.r8.s64 = 1376256;
	// lis r7,-32747
	ctx.r7.s64 = -2146107392;
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// lis r5,1024
	ctx.r5.s64 = 67108864;
	// ori r30,r11,3
	ctx.r30.u64 = ctx.r11.u64 | 3;
	// ori r28,r10,1
	ctx.r28.u64 = ctx.r10.u64 | 1;
	// ori r31,r9,4100
	ctx.r31.u64 = ctx.r9.u64 | 4100;
	// ori r29,r8,4336
	ctx.r29.u64 = ctx.r8.u64 | 4336;
	// ori r25,r7,4108
	ctx.r25.u64 = ctx.r7.u64 | 4108;
	// ori r26,r6,1
	ctx.r26.u64 = ctx.r6.u64 | 1;
	// ori r27,r5,3
	ctx.r27.u64 = ctx.r5.u64 | 3;
loc_82ECA560:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82eca68c
	if (cr6.gt) goto loc_82ECA68C;
	// beq cr6,0x82eca61c
	if (cr6.eq) goto loc_82ECA61C;
	// subf. r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82eca58c
	if (cr0.eq) goto loc_82ECA58C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82eca6a8
	if (!cr6.eq) goto loc_82ECA6A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eca8e0
	ctx.lr = 0x82ECA588;
	sub_82ECA8E0(ctx, base);
	// b 0x82eca6a8
	goto loc_82ECA6A8;
loc_82ECA58C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82eca5b0
	if (cr6.gt) goto loc_82ECA5B0;
	// beq cr6,0x82eca5b8
	if (cr6.eq) goto loc_82ECA5B8;
	// subf. r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82eca6a8
	if (cr0.eq) goto loc_82ECA6A8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82eca5b8
	if (cr6.eq) goto loc_82ECA5B8;
	// b 0x82eca6a8
	goto loc_82ECA6A8;
loc_82ECA5B0:
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x82eca6a8
	if (!cr6.eq) goto loc_82ECA6A8;
loc_82ECA5B8:
	// bl 0x82e6f960
	ctx.lr = 0x82ECA5BC;
	sub_82E6F960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e6fa08
	ctx.lr = 0x82ECA5C4;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eca600
	if (!cr6.eq) goto loc_82ECA600;
	// bl 0x82e6f960
	ctx.lr = 0x82ECA5D4;
	sub_82E6F960(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e6fa08
	ctx.lr = 0x82ECA5DC;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eca600
	if (!cr6.eq) goto loc_82ECA600;
	// bl 0x82e6f960
	ctx.lr = 0x82ECA5EC;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82ECA5F4;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca6a8
	if (cr6.eq) goto loc_82ECA6A8;
loc_82ECA600:
	// bl 0x82e6f960
	ctx.lr = 0x82ECA604;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca6a8
	if (cr6.eq) goto loc_82ECA6A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82e6fe00
	ctx.lr = 0x82ECA618;
	sub_82E6FE00(ctx, base);
	// b 0x82eca6a8
	goto loc_82ECA6A8;
loc_82ECA61C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82eca6a8
	if (!cr6.eq) goto loc_82ECA6A8;
	// bl 0x82e6f960
	ctx.lr = 0x82ECA62C;
	sub_82E6F960(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e6fa08
	ctx.lr = 0x82ECA634;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eca670
	if (!cr6.eq) goto loc_82ECA670;
	// bl 0x82e6f960
	ctx.lr = 0x82ECA644;
	sub_82E6F960(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e6fa08
	ctx.lr = 0x82ECA64C;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eca670
	if (!cr6.eq) goto loc_82ECA670;
	// bl 0x82e6f960
	ctx.lr = 0x82ECA65C;
	sub_82E6F960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82e6fa08
	ctx.lr = 0x82ECA664;
	sub_82E6FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca6a8
	if (cr6.eq) goto loc_82ECA6A8;
loc_82ECA670:
	// bl 0x82e6f960
	ctx.lr = 0x82ECA674;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca6a8
	if (cr6.eq) goto loc_82ECA6A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82e6fe00
	ctx.lr = 0x82ECA688;
	sub_82E6FE00(ctx, base);
	// b 0x82eca6a8
	goto loc_82ECA6A8;
loc_82ECA68C:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// blt cr6,0x82eca6a8
	if (cr6.lt) goto loc_82ECA6A8;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bgt cr6,0x82eca6a8
	if (cr6.gt) goto loc_82ECA6A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e839c0
	ctx.lr = 0x82ECA6A8;
	sub_82E839C0(ctx, base);
loc_82ECA6A8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83d756cc
	ctx.lr = 0x82ECA6BC;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eca560
	if (!cr6.eq) goto loc_82ECA560;
loc_82ECA6C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA6CC"))) PPC_WEAK_FUNC(sub_82ECA6CC);
PPC_FUNC_IMPL(__imp__sub_82ECA6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA6D0"))) PPC_WEAK_FUNC(sub_82ECA6D0);
PPC_FUNC_IMPL(__imp__sub_82ECA6D0) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,30080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 30080, ctx.r3.u32);
	// std r30,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r30.u64);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stb r9,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r9.u8);
	// bl 0x83a7d958
	ctx.lr = 0x82ECA710;
	sub_83A7D958(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ECA724:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82eca724
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECA724;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82ECA74C"))) PPC_WEAK_FUNC(sub_82ECA74C);
PPC_FUNC_IMPL(__imp__sub_82ECA74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA750"))) PPC_WEAK_FUNC(sub_82ECA750);
PPC_FUNC_IMPL(__imp__sub_82ECA750) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,30080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eca790
	if (!cr6.eq) goto loc_82ECA790;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECA784;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca790
	if (cr6.eq) goto loc_82ECA790;
	// bl 0x82eca6d0
	ctx.lr = 0x82ECA790;
	sub_82ECA6D0(ctx, base);
loc_82ECA790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA7A0"))) PPC_WEAK_FUNC(sub_82ECA7A0);
PPC_FUNC_IMPL(__imp__sub_82ECA7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,30080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30080);
	// ld r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA7B0"))) PPC_WEAK_FUNC(sub_82ECA7B0);
PPC_FUNC_IMPL(__imp__sub_82ECA7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// li r5,84
	ctx.r5.s64 = 84;
	// lwz r4,30080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30080);
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA7C0"))) PPC_WEAK_FUNC(sub_82ECA7C0);
PPC_FUNC_IMPL(__imp__sub_82ECA7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,30080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30080);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA7D0"))) PPC_WEAK_FUNC(sub_82ECA7D0);
PPC_FUNC_IMPL(__imp__sub_82ECA7D0) {
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
	// lwz r11,30080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca830
	if (cr6.eq) goto loc_82ECA830;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82ECA804;
	sub_82595150(ctx, base);
	// lwz r11,30080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca820
	if (cr6.eq) goto loc_82ECA820;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,30080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30080, ctx.r10.u32);
	// bl 0x82416268
	ctx.lr = 0x82ECA820;
	sub_82416268(ctx, base);
loc_82ECA820:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82ECA828;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30080, ctx.r11.u32);
loc_82ECA830:
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

__attribute__((alias("__imp__sub_82ECA844"))) PPC_WEAK_FUNC(sub_82ECA844);
PPC_FUNC_IMPL(__imp__sub_82ECA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECA848"))) PPC_WEAK_FUNC(sub_82ECA848);
PPC_FUNC_IMPL(__imp__sub_82ECA848) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832df598
	ctx.lr = 0x82ECA870;
	sub_832DF598(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca880
	if (cr6.eq) goto loc_82ECA880;
	// bl 0x82417100
	ctx.lr = 0x82ECA87C;
	sub_82417100(ctx, base);
	// b 0x82eca8c8
	goto loc_82ECA8C8;
loc_82ECA880:
	// lis r11,18992
	ctx.r11.s64 = 1244659712;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// ori r9,r11,2001
	ctx.r9.u64 = ctx.r11.u64 | 2001;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82eca8c8
	if (!cr6.eq) goto loc_82ECA8C8;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82ECA89C;
	sub_83A7D958(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bl 0x83524138
	ctx.lr = 0x82ECA8A4;
	sub_83524138(ctx, base);
	// std r3,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r3.u64);
	// bl 0x8308e078
	ctx.lr = 0x82ECA8AC;
	sub_8308E078(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,30080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30080);
	// beq cr6,0x82eca8c4
	if (cr6.eq) goto loc_82ECA8C4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82ECA8C4:
	// stb r10,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r10.u8);
loc_82ECA8C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECA8E0"))) PPC_WEAK_FUNC(sub_82ECA8E0);
PPC_FUNC_IMPL(__imp__sub_82ECA8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,30080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30080);
	// b 0x82eca848
	sub_82ECA848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECA8F0"))) PPC_WEAK_FUNC(sub_82ECA8F0);
PPC_FUNC_IMPL(__imp__sub_82ECA8F0) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,24700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eca954
	if (cr6.eq) goto loc_82ECA954;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82ECA924;
	sub_82595150(ctx, base);
	// lwz r3,24700(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eca944
	if (cr6.eq) goto loc_82ECA944;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECA944;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECA944:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82ECA94C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24700, ctx.r11.u32);
loc_82ECA954:
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

__attribute__((alias("__imp__sub_82ECA968"))) PPC_WEAK_FUNC(sub_82ECA968);
PPC_FUNC_IMPL(__imp__sub_82ECA968) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r9,-31757
	ctx.r9.s64 = -2081226752;
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// addi r7,r11,-8632
	ctx.r7.s64 = ctx.r11.s64 + -8632;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,30092(r9)
	PPC_STORE_U8(ctx.r9.u32 + 30092, ctx.r11.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r10,30088(r8)
	PPC_STORE_U32(ctx.r8.u32 + 30088, ctx.r10.u32);
	// beq cr6,0x82eca9b4
	if (cr6.eq) goto loc_82ECA9B4;
	// bl 0x82416268
	ctx.lr = 0x82ECA9B0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECA9B4:
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

__attribute__((alias("__imp__sub_82ECA9C8"))) PPC_WEAK_FUNC(sub_82ECA9C8);
PPC_FUNC_IMPL(__imp__sub_82ECA9C8) {
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
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lbz r10,30092(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30092);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eca9f0
	if (cr6.eq) goto loc_82ECA9F0;
	// bl 0x82eca470
	ctx.lr = 0x82ECA9EC;
	sub_82ECA470(ctx, base);
	// bl 0x82eca8f0
	ctx.lr = 0x82ECA9F0;
	sub_82ECA8F0(ctx, base);
loc_82ECA9F0:
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r11,30088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecaa44
	if (cr6.eq) goto loc_82ECAA44;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82ECAA14;
	sub_82595150(ctx, base);
	// lwz r3,30088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30088);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecaa34
	if (cr6.eq) goto loc_82ECAA34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECAA34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECAA34:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82ECAA3C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r11.u32);
loc_82ECAA44:
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

__attribute__((alias("__imp__sub_82ECAA58"))) PPC_WEAK_FUNC(sub_82ECAA58);
PPC_FUNC_IMPL(__imp__sub_82ECAA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECAA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,24700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecaaac
	if (!cr6.eq) goto loc_82ECAAAC;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,3608
	ctx.r4.s64 = 3608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECAA90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecaaa4
	if (cr6.eq) goto loc_82ECAAA4;
	// bl 0x82e8d320
	ctx.lr = 0x82ECAA9C;
	sub_82E8D320(ctx, base);
	// stw r3,24700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24700, ctx.r3.u32);
	// b 0x82ecaaac
	goto loc_82ECAAAC;
loc_82ECAAA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,24700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24700, ctx.r30.u32);
loc_82ECAAAC:
	// bl 0x82eca3f8
	ctx.lr = 0x82ECAAB0;
	sub_82ECA3F8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82ECAAB4;
	sub_83102DB0(ctx, base);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r31,r11,-8724
	ctx.r31.s64 = ctx.r11.s64 + -8724;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// bl 0x83523f28
	ctx.lr = 0x82ECAAD8;
	sub_83523F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82ECAAE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecaae0
	if (!cr6.eq) goto loc_82ECAAE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82ECAB04;
	sub_82472FC0(ctx, base);
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83523fd8
	ctx.lr = 0x82ECAB10;
	sub_83523FD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ecab4c
	if (cr6.eq) goto loc_82ECAB4C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ecab30
	if (!cr6.lt) goto loc_82ECAB30;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_82ECAB30:
	// bl 0x82e6e978
	ctx.lr = 0x82ECAB34;
	sub_82E6E978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82eb2800
	ctx.lr = 0x82ECAB4C;
	sub_82EB2800(ctx, base);
loc_82ECAB4C:
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stb r11,30092(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30092, ctx.r11.u8);
	// blt cr6,0x82ecab6c
	if (cr6.lt) goto loc_82ECAB6C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82ECAB6C;
	sub_82416268(ctx, base);
loc_82ECAB6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECAB74"))) PPC_WEAK_FUNC(sub_82ECAB74);
PPC_FUNC_IMPL(__imp__sub_82ECAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECAB78"))) PPC_WEAK_FUNC(sub_82ECAB78);
PPC_FUNC_IMPL(__imp__sub_82ECAB78) {
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
	// lwz r11,30088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecabe0
	if (!cr6.eq) goto loc_82ECABE0;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECABB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecabd8
	if (cr6.eq) goto loc_82ECABD8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,-8632
	ctx.r9.s64 = ctx.r11.s64 + -8632;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r3.u32);
	// stb r11,30092(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30092, ctx.r11.u8);
	// b 0x82ecabe0
	goto loc_82ECABE0;
loc_82ECABD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30088, ctx.r11.u32);
loc_82ECABE0:
	// bl 0x82ecaa58
	ctx.lr = 0x82ECABE4;
	sub_82ECAA58(ctx, base);
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

__attribute__((alias("__imp__sub_82ECABF8"))) PPC_WEAK_FUNC(sub_82ECABF8);
PPC_FUNC_IMPL(__imp__sub_82ECABF8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-8144
	ctx.r10.s64 = ctx.r11.s64 + -8144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8353f200
	ctx.lr = 0x82ECAC1C;
	sub_8353F200(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ECAC2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ecac50
	if (cr6.eq) goto loc_82ECAC50;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECAC50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECAC50:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecac74
	if (cr6.eq) goto loc_82ECAC74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECAC6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
loc_82ECAC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82ECAC7C;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_82ECAC90"))) PPC_WEAK_FUNC(sub_82ECAC90);
PPC_FUNC_IMPL(__imp__sub_82ECAC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ecace0
	if (!cr6.eq) goto loc_82ECACE0;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// blt cr6,0x82ecacb8
	if (cr6.lt) goto loc_82ECACB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82ECACB8:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_82ECACE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECACE8"))) PPC_WEAK_FUNC(sub_82ECACE8);
PPC_FUNC_IMPL(__imp__sub_82ECACE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ecad2c
	if (!cr6.eq) goto loc_82ECAD2C;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// blt cr6,0x82ecad04
	if (cr6.lt) goto loc_82ECAD04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ecad1c
	goto loc_82ECAD1C;
loc_82ECAD04:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,88(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
loc_82ECAD1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82ECAD2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECAD34"))) PPC_WEAK_FUNC(sub_82ECAD34);
PPC_FUNC_IMPL(__imp__sub_82ECAD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECAD38"))) PPC_WEAK_FUNC(sub_82ECAD38);
PPC_FUNC_IMPL(__imp__sub_82ECAD38) {
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
	// bl 0x82e6e978
	ctx.lr = 0x82ECAD50;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecad6c
	if (!cr6.eq) goto loc_82ECAD6C;
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
loc_82ECAD6C:
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-18008
	ctx.r9.s64 = ctx.r11.s64 + -18008;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82ECAD7C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, xer);
	// beq cr6,0x82ecadbc
	if (cr6.eq) goto loc_82ECADBC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ecad7c
	if (cr6.lt) goto loc_82ECAD7C;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82ECADA0:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82eb0610
	ctx.lr = 0x82ECADA8;
	sub_82EB0610(ctx, base);
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
loc_82ECADBC:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82ecada0
	goto loc_82ECADA0;
}

__attribute__((alias("__imp__sub_82ECADCC"))) PPC_WEAK_FUNC(sub_82ECADCC);
PPC_FUNC_IMPL(__imp__sub_82ECADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECADD0"))) PPC_WEAK_FUNC(sub_82ECADD0);
PPC_FUNC_IMPL(__imp__sub_82ECADD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ecae2c
	if (!cr6.eq) goto loc_82ECAE2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// stb r10,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r10.u8);
	// bge cr6,0x82ecae08
	if (!cr6.lt) goto loc_82ECAE08;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,88(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 88);
loc_82ECAE08:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
loc_82ECAE2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECAE34"))) PPC_WEAK_FUNC(sub_82ECAE34);
PPC_FUNC_IMPL(__imp__sub_82ECAE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECAE38"))) PPC_WEAK_FUNC(sub_82ECAE38);
PPC_FUNC_IMPL(__imp__sub_82ECAE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ecae90
	if (!cr6.eq) goto loc_82ECAE90;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// stb r10,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r10.u8);
	// bge cr6,0x82ecae70
	if (!cr6.lt) goto loc_82ECAE70;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,88(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 88);
loc_82ECAE70:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r4,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r4.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
loc_82ECAE90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECAE98"))) PPC_WEAK_FUNC(sub_82ECAE98);
PPC_FUNC_IMPL(__imp__sub_82ECAE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecaee4
	if (cr6.eq) goto loc_82ECAEE4;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// blt cr6,0x82ecaeb4
	if (cr6.lt) goto loc_82ECAEB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ecaec8
	goto loc_82ECAEC8;
loc_82ECAEB4:
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,89(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 89);
loc_82ECAEC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecaedc
	if (cr6.eq) goto loc_82ECAEDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82ECAEDC:
	// lbz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// blr 
	return;
loc_82ECAEE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECAEEC"))) PPC_WEAK_FUNC(sub_82ECAEEC);
PPC_FUNC_IMPL(__imp__sub_82ECAEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECAEF0"))) PPC_WEAK_FUNC(sub_82ECAEF0);
PPC_FUNC_IMPL(__imp__sub_82ECAEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x82ecaf04
	if (cr6.eq) goto loc_82ECAF04;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82ECAF04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECAF10"))) PPC_WEAK_FUNC(sub_82ECAF10);
PPC_FUNC_IMPL(__imp__sub_82ECAF10) {
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
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECAF38;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecaf98
	if (cr6.eq) goto loc_82ECAF98;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,-8264
	ctx.r4.s64 = ctx.r11.s64 + -8264;
	// bl 0x83103328
	ctx.lr = 0x82ECAF50;
	sub_83103328(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-8144
	ctx.r9.s64 = ctx.r10.s64 + -8144;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
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
loc_82ECAF98:
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

__attribute__((alias("__imp__sub_82ECAFB0"))) PPC_WEAK_FUNC(sub_82ECAFB0);
PPC_FUNC_IMPL(__imp__sub_82ECAFB0) {
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
	// bl 0x82ecabf8
	ctx.lr = 0x82ECAFD0;
	sub_82ECABF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecafe8
	if (cr6.eq) goto loc_82ECAFE8;
	// bl 0x82416268
	ctx.lr = 0x82ECAFE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECAFE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECB000"))) PPC_WEAK_FUNC(sub_82ECB000);
PPC_FUNC_IMPL(__imp__sub_82ECB000) {
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
	// lis r11,263
	ctx.r11.s64 = 17235968;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 | 9;
	// li r9,284
	ctx.r9.s64 = 284;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82ecb054
	if (cr6.lt) goto loc_82ECB054;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82ECB054:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x831ce7d8
	ctx.lr = 0x82ECB060;
	sub_831CE7D8(ctx, base);
	// sth r30,280(r31)
	PPC_STORE_U16(ctx.r31.u32 + 280, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_82ECB080"))) PPC_WEAK_FUNC(sub_82ECB080);
PPC_FUNC_IMPL(__imp__sub_82ECB080) {
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
	// bl 0x82e6f5c8
	ctx.lr = 0x82ECB09C;
	sub_82E6F5C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecb0b0
	if (!cr6.eq) goto loc_82ECB0B0;
loc_82ECB0A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ecb0c4
	goto loc_82ECB0C4;
loc_82ECB0B0:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ecb0dc
	if (cr6.lt) goto loc_82ECB0DC;
	// beq cr6,0x82ecb10c
	if (cr6.eq) goto loc_82ECB10C;
loc_82ECB0C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ECB0C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82ECB0DC:
	// bl 0x82e6f960
	ctx.lr = 0x82ECB0E0;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb0ec
	if (cr6.eq) goto loc_82ECB0EC;
	// bl 0x82b80980
	ctx.lr = 0x82ECB0EC;
	sub_82B80980(ctx, base);
loc_82ECB0EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x82ECB0F4;
	sub_82DD3A30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb0a8
	if (cr6.eq) goto loc_82ECB0A8;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82ECB10C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dd3a30
	ctx.lr = 0x82ECB114;
	sub_82DD3A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ecb0c0
	if (cr6.eq) goto loc_82ECB0C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x82ecb0c4
	goto loc_82ECB0C4;
}

__attribute__((alias("__imp__sub_82ECB12C"))) PPC_WEAK_FUNC(sub_82ECB12C);
PPC_FUNC_IMPL(__imp__sub_82ECB12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECB130"))) PPC_WEAK_FUNC(sub_82ECB130);
PPC_FUNC_IMPL(__imp__sub_82ECB130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECB138;
	__savegprlr_29(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82ecb5a0
	if (cr6.gt) goto loc_82ECB5A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ecb5a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ECB5A0;
	// bdzf 4*cr6+eq,0x82ecb224
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ECB224;
	// bdzf 4*cr6+eq,0x82ecb314
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ECB314;
	// bdzf 4*cr6+eq,0x82ecb3b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ECB3B8;
	// bdzf 4*cr6+eq,0x82ecb454
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ECB454;
	// bdzf 4*cr6+eq,0x82ecb4c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ECB4C8;
	// bne cr6,0x82ecb528
	if (!cr6.eq) goto loc_82ECB528;
	// bl 0x8353f200
	ctx.lr = 0x82ECB174;
	sub_8353F200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECB184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,240
	ctx.r4.s64 = 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECB1A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb1b4
	if (cr6.eq) goto loc_82ECB1B4;
	// lis r4,1029
	ctx.r4.s64 = 67436544;
	// bl 0x82ee31f8
	ctx.lr = 0x82ECB1B0;
	sub_82EE31F8(ctx, base);
	// b 0x82ecb1b8
	goto loc_82ECB1B8;
loc_82ECB1B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ECB1B8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// beq cr6,0x82ecb1f8
	if (cr6.eq) goto loc_82ECB1F8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-8244
	ctx.r11.s64 = ctx.r11.s64 + -8244;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x8259afd8
	ctx.lr = 0x82ECB1D8;
	sub_8259AFD8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r6,1029
	ctx.r6.s64 = 67436544;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECB1F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECB1F8:
	// bl 0x82eb2d30
	ctx.lr = 0x82ECB1FC;
	sub_82EB2D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb214
	if (cr6.eq) goto loc_82ECB214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82ECB214;
	sub_83103100(ctx, base);
loc_82ECB214:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB224:
	// bl 0x82e6e978
	ctx.lr = 0x82ECB228;
	sub_82E6E978(ctx, base);
	// lis r11,-31774
	ctx.r11.s64 = -2082340864;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-18008
	ctx.r10.s64 = ctx.r11.s64 + -18008;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82ECB240:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x82ecb2ac
	if (cr6.eq) goto loc_82ECB2AC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ecb240
	if (cr6.lt) goto loc_82ECB240;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82ECB264:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82eb0748
	ctx.lr = 0x82ECB274;
	sub_82EB0748(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82eb0698
	ctx.lr = 0x82ECB28C;
	sub_82EB0698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecb2bc
	if (!cr6.eq) goto loc_82ECB2BC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB2AC:
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82ecb264
	goto loc_82ECB264;
loc_82ECB2BC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82475d40
	ctx.lr = 0x82ECB2C4;
	sub_82475D40(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ecb000
	ctx.lr = 0x82ECB2D8;
	sub_82ECB000(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824707c8
	ctx.lr = 0x82ECB2E0;
	sub_824707C8(ctx, base);
	// bl 0x8353f200
	ctx.lr = 0x82ECB2E4;
	sub_8353F200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECB2F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82ee1db8
	ctx.lr = 0x82ECB304;
	sub_82EE1DB8(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB314:
	// bl 0x82d48260
	ctx.lr = 0x82ECB318;
	sub_82D48260(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82ecb32c
	if (cr6.lt) goto loc_82ECB32C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ecb344
	goto loc_82ECB344;
loc_82ECB32C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
loc_82ECB344:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecb358
	if (cr6.eq) goto loc_82ECB358;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_82ECB358:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82ecb368
	if (cr6.lt) goto loc_82ECB368;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82ecb380
	goto loc_82ECB380;
loc_82ECB368:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,89(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 89);
loc_82ECB380:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecb390
	if (cr6.eq) goto loc_82ECB390;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_82ECB390:
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ecb5a0
	if (!cr6.eq) goto loc_82ECB5A0;
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB3B8:
	// bl 0x82e6f960
	ctx.lr = 0x82ECB3BC;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb5a0
	if (cr6.eq) goto loc_82ECB5A0;
	// bl 0x835d3140
	ctx.lr = 0x82ECB3C8;
	sub_835D3140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ecb444
	if (!cr6.eq) goto loc_82ECB444;
	// bl 0x831021a0
	ctx.lr = 0x82ECB3D4;
	sub_831021A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82da45f8
	ctx.lr = 0x82ECB3DC;
	sub_82DA45F8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-8244
	ctx.r4.s64 = ctx.r11.s64 + -8244;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82ECB3F0;
	sub_837B0C10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e887d8
	ctx.lr = 0x82ECB400;
	sub_82E887D8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82ECB40C;
	sub_8387E8E0(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r9,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bge cr6,0x82ecb430
	if (!cr6.lt) goto loc_82ECB430;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82ECB430:
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB444:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB454:
	// bl 0x82e6f960
	ctx.lr = 0x82ECB458;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb5a0
	if (cr6.eq) goto loc_82ECB5A0;
	// bl 0x835d3140
	ctx.lr = 0x82ECB464;
	sub_835D3140(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECB480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ecb494
	if (!cr6.eq) goto loc_82ECB494;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82ecb5a0
	if (cr6.eq) goto loc_82ECB5A0;
loc_82ECB494:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb5a0
	if (cr6.eq) goto loc_82ECB5A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECB4B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB4C8:
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r8,263
	ctx.r8.s64 = 17235968;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r8,10
	ctx.r11.u64 = ctx.r8.u64 | 10;
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8353f200
	ctx.lr = 0x82ECB4F8;
	sub_8353F200(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82ECB508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82ee1db8
	ctx.lr = 0x82ECB518;
	sub_82EE1DB8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB528:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82ecb53c
	if (cr6.lt) goto loc_82ECB53C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ecb554
	goto loc_82ECB554;
loc_82ECB53C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
loc_82ECB554:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecb568
	if (!cr6.eq) goto loc_82ECB568;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_82ECB568:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82ecb578
	if (cr6.lt) goto loc_82ECB578;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x82ecb590
	goto loc_82ECB590;
loc_82ECB578:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,90(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 90);
loc_82ECB590:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb5a0
	if (cr6.eq) goto loc_82ECB5A0;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_82ECB5A0:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECB5A8"))) PPC_WEAK_FUNC(sub_82ECB5A8);
PPC_FUNC_IMPL(__imp__sub_82ECB5A8) {
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
	// bl 0x82eab8c0
	ctx.lr = 0x82ECB5C8;
	sub_82EAB8C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb5e0
	if (cr6.eq) goto loc_82ECB5E0;
	// bl 0x82416268
	ctx.lr = 0x82ECB5DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECB5E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECB5F8"))) PPC_WEAK_FUNC(sub_82ECB5F8);
PPC_FUNC_IMPL(__imp__sub_82ECB5F8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stb r30,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r30.u8);
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// std r11,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ecb63c
	if (cr6.eq) goto loc_82ECB63C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x82ECB638;
	sub_8398A348(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82ECB63C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECB654"))) PPC_WEAK_FUNC(sub_82ECB654);
PPC_FUNC_IMPL(__imp__sub_82ECB654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECB658"))) PPC_WEAK_FUNC(sub_82ECB658);
PPC_FUNC_IMPL(__imp__sub_82ECB658) {
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
	// bl 0x82e6e978
	ctx.lr = 0x82ECB674;
	sub_82E6E978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb6b4
	if (cr6.eq) goto loc_82ECB6B4;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x835fa418
	ctx.lr = 0x82ECB68C;
	sub_835FA418(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82ECB690;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e80aa8
	ctx.lr = 0x82ECB69C;
	sub_82E80AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecb6b4
	if (cr6.eq) goto loc_82ECB6B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82ECB6B0;
	sub_837B0C10(ctx, base);
	// b 0x82ecb6dc
	goto loc_82ECB6DC;
loc_82ECB6B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r9,-8070
	ctx.r4.s64 = ctx.r9.s64 + -8070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82ECB6DC;
	sub_8259CC28(ctx, base);
loc_82ECB6DC:
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

__attribute__((alias("__imp__sub_82ECB6F8"))) PPC_WEAK_FUNC(sub_82ECB6F8);
PPC_FUNC_IMPL(__imp__sub_82ECB6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ECB700;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82ECB70C;
	sub_82E6E978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecb738
	if (!cr6.eq) goto loc_82ECB738;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8038
	ctx.r11.s64 = ctx.r11.s64 + -8038;
	// addi r4,r11,-31
	ctx.r4.s64 = ctx.r11.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82ECB72C;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ECB738:
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82e93398
	ctx.lr = 0x82ECB740;
	sub_82E93398(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecb768
	if (!cr6.eq) goto loc_82ECB768;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8038
	ctx.r4.s64 = ctx.r11.s64 + -8038;
	// bl 0x837b0c10
	ctx.lr = 0x82ECB75C;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ECB768:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82e93270
	ctx.lr = 0x82ECB788;
	sub_82E93270(ctx, base);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82ECB7A8;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82ECB7B0;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECB7BC"))) PPC_WEAK_FUNC(sub_82ECB7BC);
PPC_FUNC_IMPL(__imp__sub_82ECB7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECB7C0"))) PPC_WEAK_FUNC(sub_82ECB7C0);
PPC_FUNC_IMPL(__imp__sub_82ECB7C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECB7C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ecb658
	ctx.lr = 0x82ECB7D4;
	sub_82ECB658(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82ecb6f8
	ctx.lr = 0x82ECB7DC;
	sub_82ECB6F8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ecb81c
	if (cr6.eq) goto loc_82ECB81C;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x82ECB818;
	sub_8398A348(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82ECB81C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECB828"))) PPC_WEAK_FUNC(sub_82ECB828);
PPC_FUNC_IMPL(__imp__sub_82ECB828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECB830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb9b8
	if (cr6.eq) goto loc_82ECB9B8;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb9b8
	if (cr6.eq) goto loc_82ECB9B8;
	// bl 0x82e738c0
	ctx.lr = 0x82ECB854;
	sub_82E738C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bne cr6,0x82ecb880
	if (!cr6.eq) goto loc_82ECB880;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb874
	if (cr6.eq) goto loc_82ECB874;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecb5f8
	ctx.lr = 0x82ECB874;
	sub_82ECB5F8(ctx, base);
loc_82ECB874:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB880:
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecb904
	if (!cr6.eq) goto loc_82ECB904;
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecb8b4
	if (cr6.eq) goto loc_82ECB8B4;
	// bl 0x83a7d958
	ctx.lr = 0x82ECB89C;
	sub_83A7D958(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x83524138
	ctx.lr = 0x82ECB8A8;
	sub_83524138(ctx, base);
	// ld r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// blt cr6,0x82ecb874
	if (cr6.lt) goto loc_82ECB874;
loc_82ECB8B4:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECB8CC;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82ecb8fc
	if (cr6.eq) goto loc_82ECB8FC;
	// bl 0x82eabc08
	ctx.lr = 0x82ECB8E0;
	sub_82EABC08(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r9,r11,-7716
	ctx.r9.s64 = ctx.r11.s64 + -7716;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82ECB8FC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8398b528
	ctx.lr = 0x82ECB904;
	sub_8398B528(ctx, base);
loc_82ECB904:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECB918;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ECB92C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ecb944
	if (cr6.eq) goto loc_82ECB944;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ecb9ac
	if (!cr6.eq) goto loc_82ECB9AC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB944:
	// bl 0x83a7d958
	ctx.lr = 0x82ECB948;
	sub_83A7D958(ctx, base);
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecb964
	if (!cr6.eq) goto loc_82ECB964;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// b 0x82ecb984
	goto loc_82ECB984;
loc_82ECB964:
	// ld r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// bl 0x831ce710
	ctx.lr = 0x82ECB96C;
	sub_831CE710(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,-7804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.f11.u64);
loc_82ECB984:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ecb9ac
	if (cr6.eq) goto loc_82ECB9AC;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8398a348
	ctx.lr = 0x82ECB9A4;
	sub_8398A348(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82ECB9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82ECB9B8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECB9C4"))) PPC_WEAK_FUNC(sub_82ECB9C4);
PPC_FUNC_IMPL(__imp__sub_82ECB9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECB9C8"))) PPC_WEAK_FUNC(sub_82ECB9C8);
PPC_FUNC_IMPL(__imp__sub_82ECB9C8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82ECB9F0;
	sub_8259CB28(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82ECBA10"))) PPC_WEAK_FUNC(sub_82ECBA10);
PPC_FUNC_IMPL(__imp__sub_82ECBA10) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82ECBA38;
	sub_8259CB28(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82ECBA58"))) PPC_WEAK_FUNC(sub_82ECBA58);
PPC_FUNC_IMPL(__imp__sub_82ECBA58) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-6352
	ctx.r9.s64 = ctx.r11.s64 + -6352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ecba8c
	if (cr6.eq) goto loc_82ECBA8C;
	// bl 0x82416268
	ctx.lr = 0x82ECBA88;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECBA8C:
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

__attribute__((alias("__imp__sub_82ECBAA0"))) PPC_WEAK_FUNC(sub_82ECBAA0);
PPC_FUNC_IMPL(__imp__sub_82ECBAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ECBAA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839fbc30
	ctx.lr = 0x82ECBAC4;
	sub_839FBC30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ecbc3c
	if (cr6.lt) goto loc_82ECBC3C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecbc3c
	if (cr6.eq) goto loc_82ECBC3C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECBB08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ecbc1c
	if (cr6.lt) goto loc_82ECBC1C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecbc1c
	if (cr6.eq) goto loc_82ECBC1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,-10804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10804);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECBB38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r11,-18804(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18804);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82ECBB54;
	sub_831CDCF0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x832c3480
	ctx.lr = 0x82ECBB9C;
	sub_832C3480(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82ecbbec
	if (!cr6.lt) goto loc_82ECBBEC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-7200
	ctx.r11.s64 = ctx.r11.s64 + -7200;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// bl 0x83102db0
	ctx.lr = 0x82ECBBBC;
	sub_83102DB0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecbc50
	if (cr6.eq) goto loc_82ECBC50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECBBDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ECBBEC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x82416c48
	ctx.lr = 0x82ECBC00;
	sub_82416C48(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r3,r10,-7200
	ctx.r3.s64 = ctx.r10.s64 + -7200;
	// addi r4,r3,-28
	ctx.r4.s64 = ctx.r3.s64 + -28;
	// bl 0x83102db0
	ctx.lr = 0x82ECBC10;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ECBC1C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-7200
	ctx.r11.s64 = ctx.r11.s64 + -7200;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// bl 0x83102db0
	ctx.lr = 0x82ECBC30;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ECBC3C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-7200
	ctx.r11.s64 = ctx.r11.s64 + -7200;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// bl 0x83102db0
	ctx.lr = 0x82ECBC50;
	sub_83102DB0(ctx, base);
loc_82ECBC50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECBC5C"))) PPC_WEAK_FUNC(sub_82ECBC5C);
PPC_FUNC_IMPL(__imp__sub_82ECBC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECBC60"))) PPC_WEAK_FUNC(sub_82ECBC60);
PPC_FUNC_IMPL(__imp__sub_82ECBC60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,568
	ctx.r3.s64 = ctx.r3.s64 + 568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBC68"))) PPC_WEAK_FUNC(sub_82ECBC68);
PPC_FUNC_IMPL(__imp__sub_82ECBC68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1024
	ctx.r3.s64 = 1024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBC70"))) PPC_WEAK_FUNC(sub_82ECBC70);
PPC_FUNC_IMPL(__imp__sub_82ECBC70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1604(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1604);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBC78"))) PPC_WEAK_FUNC(sub_82ECBC78);
PPC_FUNC_IMPL(__imp__sub_82ECBC78) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBC80"))) PPC_WEAK_FUNC(sub_82ECBC80);
PPC_FUNC_IMPL(__imp__sub_82ECBC80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBC88"))) PPC_WEAK_FUNC(sub_82ECBC88);
PPC_FUNC_IMPL(__imp__sub_82ECBC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecbcb8
	if (cr6.eq) goto loc_82ECBCB8;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
loc_82ECBC9C:
	// lbz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ecbcc0
	if (cr6.eq) goto loc_82ECBCC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ecbc9c
	if (cr6.lt) goto loc_82ECBC9C;
loc_82ECBCB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82ECBCC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBCC8"))) PPC_WEAK_FUNC(sub_82ECBCC8);
PPC_FUNC_IMPL(__imp__sub_82ECBCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ECBCD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82ECBCDC;
	sub_8308E078(ctx, base);
	// addi r28,r31,84
	ctx.r28.s64 = ctx.r31.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82596fe8
	ctx.lr = 0x82ECBCF0;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecbdb8
	if (cr6.eq) goto loc_82ECBDB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832d34e8
	ctx.lr = 0x82ECBD08;
	sub_832D34E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecbda8
	if (!cr6.eq) goto loc_82ECBDA8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECBD28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ecbdb8
	if (!cr6.eq) goto loc_82ECBDB8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-18804
	ctx.r5.s64 = ctx.r11.s64 + -18804;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECBD54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r30,r11,-7024
	ctx.r30.s64 = ctx.r11.s64 + -7024;
	// beq cr6,0x82ecbd74
	if (cr6.eq) goto loc_82ECBD74;
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// addi r3,r30,-120
	ctx.r3.s64 = ctx.r30.s64 + -120;
	// bl 0x83102db0
	ctx.lr = 0x82ECBD74;
	sub_83102DB0(ctx, base);
loc_82ECBD74:
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r30,-68
	ctx.r3.s64 = ctx.r30.s64 + -68;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x83102db0
	ctx.lr = 0x82ECBD88;
	sub_83102DB0(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// bl 0x82597088
	ctx.lr = 0x82ECBD9C;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ECBDA8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// addi r4,r3,-60
	ctx.r4.s64 = ctx.r3.s64 + -60;
	// bl 0x83102db0
	ctx.lr = 0x82ECBDB8;
	sub_83102DB0(ctx, base);
loc_82ECBDB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECBDC0;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECBDCC"))) PPC_WEAK_FUNC(sub_82ECBDCC);
PPC_FUNC_IMPL(__imp__sub_82ECBDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECBDD0"))) PPC_WEAK_FUNC(sub_82ECBDD0);
PPC_FUNC_IMPL(__imp__sub_82ECBDD0) {
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
	// addi r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECBDF4;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecbe28
	if (cr6.eq) goto loc_82ECBE28;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,-6988
	ctx.r3.s64 = ctx.r11.s64 + -6988;
	// addi r4,r3,-28
	ctx.r4.s64 = ctx.r3.s64 + -28;
	// bl 0x83102db0
	ctx.lr = 0x82ECBE10;
	sub_83102DB0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECBE28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECBE28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECBE30;
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

__attribute__((alias("__imp__sub_82ECBE48"))) PPC_WEAK_FUNC(sub_82ECBE48);
PPC_FUNC_IMPL(__imp__sub_82ECBE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ECBE50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,84
	ctx.r28.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82596fe8
	ctx.lr = 0x82ECBE6C;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecbf18
	if (cr6.eq) goto loc_82ECBF18;
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// beq cr6,0x82ecbf04
	if (cr6.eq) goto loc_82ECBF04;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECBEA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ecbf18
	if (!cr6.eq) goto loc_82ECBF18;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,-18804
	ctx.r5.s64 = ctx.r11.s64 + -18804;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECBED0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r31,r11,-6812
	ctx.r31.s64 = ctx.r11.s64 + -6812;
	// beq cr6,0x82ecbef0
	if (cr6.eq) goto loc_82ECBEF0;
	// addi r4,r31,-168
	ctx.r4.s64 = ctx.r31.s64 + -168;
	// addi r3,r31,-120
	ctx.r3.s64 = ctx.r31.s64 + -120;
	// bl 0x83102db0
	ctx.lr = 0x82ECBEF0;
	sub_83102DB0(ctx, base);
loc_82ECBEF0:
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// addi r3,r31,-68
	ctx.r3.s64 = ctx.r31.s64 + -68;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82ecbf14
	goto loc_82ECBF14;
loc_82ECBF04:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-6812
	ctx.r3.s64 = ctx.r11.s64 + -6812;
	// addi r4,r3,-60
	ctx.r4.s64 = ctx.r3.s64 + -60;
loc_82ECBF14:
	// bl 0x83102db0
	ctx.lr = 0x82ECBF18;
	sub_83102DB0(ctx, base);
loc_82ECBF18:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECBF20;
	sub_82597088(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECBF2C"))) PPC_WEAK_FUNC(sub_82ECBF2C);
PPC_FUNC_IMPL(__imp__sub_82ECBF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECBF30"))) PPC_WEAK_FUNC(sub_82ECBF30);
PPC_FUNC_IMPL(__imp__sub_82ECBF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ECBF38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// beq cr6,0x82ecbfd4
	if (cr6.eq) goto loc_82ECBFD4;
	// lbz r11,1605(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1605);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecbfd4
	if (cr6.eq) goto loc_82ECBFD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecbfd4
	if (cr6.eq) goto loc_82ECBFD4;
	// addi r27,r3,116
	ctx.r27.s64 = ctx.r3.s64 + 116;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECBF7C;
	sub_82596FE8(ctx, base);
	// lhz r5,1592(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1592);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ecbfc0
	if (cr6.eq) goto loc_82ECBFC0;
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// ble cr6,0x82ecbfc0
	if (!cr6.gt) goto loc_82ECBFC0;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecbfac
	if (cr6.eq) goto loc_82ECBFAC;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x831ce980
	ctx.lr = 0x82ECBFAC;
	sub_831CE980(ctx, base);
loc_82ECBFAC:
	// sth r26,1592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1592, ctx.r26.u16);
	// bl 0x832d30f8
	ctx.lr = 0x82ECBFB4;
	sub_832D30F8(ctx, base);
	// stw r3,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
	// stb r26,1605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1605, ctx.r26.u8);
	// stb r26,1604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1604, ctx.r26.u8);
loc_82ECBFC0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECBFC8;
	sub_82597088(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82ECBFD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECBFE0"))) PPC_WEAK_FUNC(sub_82ECBFE0);
PPC_FUNC_IMPL(__imp__sub_82ECBFE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECBFF4"))) PPC_WEAK_FUNC(sub_82ECBFF4);
PPC_FUNC_IMPL(__imp__sub_82ECBFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECBFF8"))) PPC_WEAK_FUNC(sub_82ECBFF8);
PPC_FUNC_IMPL(__imp__sub_82ECBFF8) {
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
	// bl 0x82ecbaa0
	ctx.lr = 0x82ECC010;
	sub_82ECBAA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecbcc8
	ctx.lr = 0x82ECC018;
	sub_82ECBCC8(ctx, base);
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

__attribute__((alias("__imp__sub_82ECC030"))) PPC_WEAK_FUNC(sub_82ECC030);
PPC_FUNC_IMPL(__imp__sub_82ECC030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ecc078
	if (!cr6.gt) goto loc_82ECC078;
loc_82ECC054:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r7.u32 = ea;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecc054
	if (cr6.gt) goto loc_82ECC054;
	// blr 
	return;
loc_82ECC078:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECC084"))) PPC_WEAK_FUNC(sub_82ECC084);
PPC_FUNC_IMPL(__imp__sub_82ECC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECC088"))) PPC_WEAK_FUNC(sub_82ECC088);
PPC_FUNC_IMPL(__imp__sub_82ECC088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECC090;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82ECC09C;
	sub_8308E078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,255
	ctx.r3.s64 = 255;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x832d33d0
	ctx.lr = 0x82ECC0B4;
	sub_832D33D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecc160
	if (!cr6.eq) goto loc_82ECC160;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ecc154
	if (!cr6.eq) goto loc_82ECC154;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x832d33d0
	ctx.lr = 0x82ECC0D8;
	sub_832D33D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecc160
	if (!cr6.eq) goto loc_82ECC160;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ecc160
	if (cr6.eq) goto loc_82ECC160;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ecc160
	if (cr6.eq) goto loc_82ECC160;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x82ecc130
	if (cr6.eq) goto loc_82ECC130;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r31,r10,-8
	ctx.r31.s64 = ctx.r10.s64 + -8;
loc_82ECC114:
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stdu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r31.u32 = ea;
	// bl 0x83456c38
	ctx.lr = 0x82ECC124;
	sub_83456C38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ecc114
	if (!cr6.eq) goto loc_82ECC114;
loc_82ECC130:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832d33c8
	ctx.lr = 0x82ECC148;
	sub_832D33C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ecc160
	if (cr6.eq) goto loc_82ECC160;
loc_82ECC154:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82ECC160:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECC16C"))) PPC_WEAK_FUNC(sub_82ECC16C);
PPC_FUNC_IMPL(__imp__sub_82ECC16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECC170"))) PPC_WEAK_FUNC(sub_82ECC170);
PPC_FUNC_IMPL(__imp__sub_82ECC170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecc1b0
	if (!cr6.eq) goto loc_82ECC1B0;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_82ECC188:
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ecc19c
	if (!cr6.lt) goto loc_82ECC19C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ecc1a4
	goto loc_82ECC1A4;
loc_82ECC19C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECC1A4:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ecc188
	if (cr6.eq) goto loc_82ECC188;
loc_82ECC1B0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ecc1e0
	if (cr6.eq) goto loc_82ECC1E0;
	// lbz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ecc1e0
	if (cr6.lt) goto loc_82ECC1E0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82ECC1E0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECC1F4"))) PPC_WEAK_FUNC(sub_82ECC1F4);
PPC_FUNC_IMPL(__imp__sub_82ECC1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECC1F8"))) PPC_WEAK_FUNC(sub_82ECC1F8);
PPC_FUNC_IMPL(__imp__sub_82ECC1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ECC200;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,84
	ctx.r28.s64 = ctx.r3.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECC214;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc2c0
	if (cr6.eq) goto loc_82ECC2C0;
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,-6720
	ctx.r3.s64 = ctx.r10.s64 + -6720;
	// addi r4,r3,-32
	ctx.r4.s64 = ctx.r3.s64 + -32;
	// bl 0x83102db0
	ctx.lr = 0x82ECC238;
	sub_83102DB0(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82e66788
	ctx.lr = 0x82ECC248;
	sub_82E66788(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r6.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECC284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ecc2c0
	if (cr6.eq) goto loc_82ECC2C0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
loc_82ECC298:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ldu r4,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U64(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECC2B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ecc298
	if (cr6.lt) goto loc_82ECC298;
loc_82ECC2C0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECC2C8;
	sub_82597088(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECC2D0"))) PPC_WEAK_FUNC(sub_82ECC2D0);
PPC_FUNC_IMPL(__imp__sub_82ECC2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ECC2D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r4,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r4.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc3e4
	if (cr6.eq) goto loc_82ECC3E4;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// addi r5,r1,175
	ctx.r5.s64 = ctx.r1.s64 + 175;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ecc170
	ctx.lr = 0x82ECC308;
	sub_82ECC170(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ecc3e4
	if (cr6.eq) goto loc_82ECC3E4;
	// ld r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// beq cr6,0x82ecc3e4
	if (cr6.eq) goto loc_82ECC3E4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ecc34c
	if (cr6.eq) goto loc_82ECC34C;
loc_82ECC334:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r30,r9
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r9.u64, xer);
	// beq cr6,0x82ecc3ec
	if (cr6.eq) goto loc_82ECC3EC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ecc334
	if (!cr6.eq) goto loc_82ECC334;
loc_82ECC34C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ECC350:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecc3e4
	if (!cr6.eq) goto loc_82ECC3E4;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECC368;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc3dc
	if (cr6.eq) goto loc_82ECC3DC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECC398;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ecc3dc
	if (cr6.eq) goto loc_82ECC3DC;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82417100
	ctx.lr = 0x82ECC3AC;
	sub_82417100(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x832d30f8
	ctx.lr = 0x82ECC3B4;
	sub_832D30F8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-6608
	ctx.r3.s64 = ctx.r11.s64 + -6608;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r3,-104
	ctx.r4.s64 = ctx.r3.s64 + -104;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x83102db0
	ctx.lr = 0x82ECC3DC;
	sub_83102DB0(ctx, base);
loc_82ECC3DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECC3E4;
	sub_82597088(ctx, base);
loc_82ECC3E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82ECC3EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ecc350
	goto loc_82ECC350;
}

__attribute__((alias("__imp__sub_82ECC3F4"))) PPC_WEAK_FUNC(sub_82ECC3F4);
PPC_FUNC_IMPL(__imp__sub_82ECC3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECC3F8"))) PPC_WEAK_FUNC(sub_82ECC3F8);
PPC_FUNC_IMPL(__imp__sub_82ECC3F8) {
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
	// bl 0x82ecbdd0
	ctx.lr = 0x82ECC414;
	sub_82ECBDD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecc1f8
	ctx.lr = 0x82ECC41C;
	sub_82ECC1F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ecc434
	if (cr6.eq) goto loc_82ECC434;
	// bl 0x832d3798
	ctx.lr = 0x82ECC42C;
	sub_832D3798(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82ECC434:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc45c
	if (cr6.eq) goto loc_82ECC45C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECC458;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82ECC45C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecc47c
	if (cr6.eq) goto loc_82ECC47C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECC478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82ECC47C:
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

__attribute__((alias("__imp__sub_82ECC498"))) PPC_WEAK_FUNC(sub_82ECC498);
PPC_FUNC_IMPL(__imp__sub_82ECC498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82ECC4A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,84
	ctx.r23.s64 = ctx.r3.s64 + 84;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECC4B4;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc684
	if (cr6.eq) goto loc_82ECC684;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECC4E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8308e078
	ctx.lr = 0x82ECC4E8;
	sub_8308E078(ctx, base);
	// lwz r31,32(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r4,36(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r29,r25,32
	ctx.r29.s64 = ctx.r25.s64 + 32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ecc520
	if (cr6.eq) goto loc_82ECC520;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ECC518;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82ECC520:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc5c8
	if (cr6.eq) goto loc_82ECC5C8;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82ECC54C:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x832e0d90
	ctx.lr = 0x82ECC560;
	sub_832E0D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ecc5b0
	if (!cr6.eq) goto loc_82ECC5B0;
	// lwz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 & ctx.r30.u64;
	// lwz r11,84(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82ECC594;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ecc5ac
	if (!cr6.eq) goto loc_82ECC5AC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82ECC5AC:
	// bl 0x82e63600
	ctx.lr = 0x82ECC5B0;
	sub_82E63600(ctx, base);
loc_82ECC5B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ecc54c
	if (cr6.lt) goto loc_82ECC54C;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82ECC5C8:
	// lwz r31,48(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// addi r29,r25,48
	ctx.r29.s64 = ctx.r25.s64 + 48;
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ecc5f4
	if (cr6.eq) goto loc_82ECC5F4;
	// subf r30,r4,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ECC5EC;
	sub_831CE420(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82ECC5F4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82ecc674
	if (cr6.eq) goto loc_82ECC674;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
loc_82ECC614:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ecc65c
	if (cr6.eq) goto loc_82ECC65C;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// ble cr6,0x82ecc694
	if (!cr6.gt) goto loc_82ECC694;
loc_82ECC62C:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r7,r8
	cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, xer);
	// beq cr6,0x82ecc650
	if (cr6.eq) goto loc_82ECC650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecc62c
	if (cr6.gt) goto loc_82ECC62C;
	// b 0x82ecc65c
	goto loc_82ECC65C;
loc_82ECC650:
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b96d50
	ctx.lr = 0x82ECC65C;
	sub_82B96D50(ctx, base);
loc_82ECC65C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82ECC664;
	sub_83456C38(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ecc614
	if (!cr6.eq) goto loc_82ECC614;
loc_82ECC674:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82ecc684
	if (cr6.eq) goto loc_82ECC684;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x82ECC684;
	sub_82416268(ctx, base);
loc_82ECC684:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECC68C;
	sub_82597088(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82ECC694:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82ECC6A0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82ECC6A0"))) PPC_WEAK_FUNC(sub_82ECC6A0);
PPC_FUNC_IMPL(__imp__sub_82ECC6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ECC6A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// ble cr6,0x82ecc6d8
	if (!cr6.gt) goto loc_82ECC6D8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-6536
	ctx.r11.s64 = ctx.r11.s64 + -6536;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// bl 0x83102db0
	ctx.lr = 0x82ECC6D0;
	sub_83102DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82ECC6D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ecc1f8
	ctx.lr = 0x82ECC6E0;
	sub_82ECC1F8(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e66788
	ctx.lr = 0x82ECC6F4;
	sub_82E66788(ctx, base);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r28,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82ecc7c4
	if (cr6.eq) goto loc_82ECC7C4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r26,r11,-6536
	ctx.r26.s64 = ctx.r11.s64 + -6536;
loc_82ECC730:
	// addi r4,r26,-28
	ctx.r4.s64 = ctx.r26.s64 + -28;
	// lbz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// bl 0x83102db0
	ctx.lr = 0x82ECC744;
	sub_83102DB0(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82416260
	ctx.lr = 0x82ECC74C;
	sub_82416260(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecc7d4
	if (cr6.eq) goto loc_82ECC7D4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r28,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r28.u8);
	// stb r28,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r28.u8);
	// beq 0x82ecc790
	if (cr0.eq) goto loc_82ECC790;
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// ld r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_82ECC790:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e667f0
	ctx.lr = 0x82ECC7A0;
	sub_82E667F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// bl 0x82ecbe48
	ctx.lr = 0x82ECC7AC;
	sub_82ECBE48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82ECC7B4;
	sub_83456C38(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ecc730
	if (!cr6.eq) goto loc_82ECC730;
loc_82ECC7C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ecc498
	ctx.lr = 0x82ECC7CC;
	sub_82ECC498(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82ECC7D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82ECC7EC;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_82ECC7EC"))) PPC_WEAK_FUNC(sub_82ECC7EC);
PPC_FUNC_IMPL(__imp__sub_82ECC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECC7F0"))) PPC_WEAK_FUNC(sub_82ECC7F0);
PPC_FUNC_IMPL(__imp__sub_82ECC7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ECC7F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,11
	cr6.compare<uint32_t>(ctx.r5.u32, 11, xer);
	// ble cr6,0x82ecc82c
	if (!cr6.gt) goto loc_82ECC82C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-6760
	ctx.r11.s64 = ctx.r11.s64 + -6760;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// addi r3,r11,260
	ctx.r3.s64 = ctx.r11.s64 + 260;
	// bl 0x83102db0
	ctx.lr = 0x82ECC824;
	sub_83102DB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82ECC82C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82ecc918
	if (cr6.eq) goto loc_82ECC918;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r26,r11,-6760
	ctx.r26.s64 = ctx.r11.s64 + -6760;
loc_82ECC84C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ecc888
	if (cr6.eq) goto loc_82ECC888;
	// ld r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82ECC864:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r7
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, xer);
	// beq cr6,0x82ecc884
	if (cr6.eq) goto loc_82ECC884;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// blt cr6,0x82ecc864
	if (cr6.lt) goto loc_82ECC864;
	// b 0x82ecc888
	goto loc_82ECC888;
loc_82ECC884:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82ECC888:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecc900
	if (!cr6.eq) goto loc_82ECC900;
	// addi r31,r28,84
	ctx.r31.s64 = ctx.r28.s64 + 84;
	// ld r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECC8A4;
	sub_82596FE8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc8d8
	if (cr6.eq) goto loc_82ECC8D8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECC8C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x82ECC8D8;
	sub_83102DB0(ctx, base);
loc_82ECC8D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECC8E0;
	sub_82597088(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e663c8
	ctx.lr = 0x82ECC8F0;
	sub_82E663C8(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x82ecc90c
	goto loc_82ECC90C;
loc_82ECC900:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83456c38
	ctx.lr = 0x82ECC908;
	sub_83456C38(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82ECC90C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ecc84c
	if (!cr6.eq) goto loc_82ECC84C;
loc_82ECC918:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecc92c
	if (cr6.eq) goto loc_82ECC92C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ecc498
	ctx.lr = 0x82ECC92C;
	sub_82ECC498(ctx, base);
loc_82ECC92C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECC934"))) PPC_WEAK_FUNC(sub_82ECC934);
PPC_FUNC_IMPL(__imp__sub_82ECC934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECC938"))) PPC_WEAK_FUNC(sub_82ECC938);
PPC_FUNC_IMPL(__imp__sub_82ECC938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ECC940;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308e078
	ctx.lr = 0x82ECC94C;
	sub_8308E078(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecc970
	if (!cr6.eq) goto loc_82ECC970;
	// stb r11,1605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1605, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1604, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82ECC970:
	// bl 0x832d30f8
	ctx.lr = 0x82ECC974;
	sub_832D30F8(ctx, base);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,20
	cr6.compare<uint32_t>(ctx.r10.u32, 20, xer);
	// blt cr6,0x82eccabc
	if (cr6.lt) goto loc_82ECCABC;
	// bl 0x832d30f8
	ctx.lr = 0x82ECC988;
	sub_832D30F8(ctx, base);
	// stw r3,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecc088
	ctx.lr = 0x82ECC994;
	sub_82ECC088(ctx, base);
	// stb r3,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r3.u8);
	// bl 0x832d30f8
	ctx.lr = 0x82ECC99C;
	sub_832D30F8(ctx, base);
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,1000
	cr6.compare<uint32_t>(ctx.r10.u32, 1000, xer);
	// ble cr6,0x82ecc9bc
	if (!cr6.gt) goto loc_82ECC9BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecc498
	ctx.lr = 0x82ECC9B4;
	sub_82ECC498(ctx, base);
	// bl 0x832d30f8
	ctx.lr = 0x82ECC9B8;
	sub_832D30F8(ctx, base);
	// stw r3,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r3.u32);
loc_82ECC9BC:
	// addi r25,r31,116
	ctx.r25.s64 = ctx.r31.s64 + 116;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECC9C8;
	sub_82596FE8(ctx, base);
	// lhz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1592);
	// li r26,1
	ctx.r26.s64 = 1;
	// subfic r11,r11,420
	xer.ca = ctx.r11.u32 <= 420;
	ctx.r11.s64 = 420 - ctx.r11.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(ctx.r11.u32, 42, xer);
	// blt cr6,0x82ecca88
	if (cr6.lt) goto loc_82ECCA88;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r29,r31,84
	ctx.r29.s64 = ctx.r31.s64 + 84;
	// ori r28,r11,10
	ctx.r28.u64 = ctx.r11.u64 | 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82ECC9F8;
	sub_82596FE8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecca34
	if (cr6.eq) goto loc_82ECCA34;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lhz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1592);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,148
	ctx.r5.s64 = ctx.r11.s64 + 148;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ECCA30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ECCA34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECCA3C;
	sub_82597088(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82ecca6c
	if (cr6.eq) goto loc_82ECCA6C;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// beq cr6,0x82ecca8c
	if (cr6.eq) goto loc_82ECCA8C;
	// bl 0x82417100
	ctx.lr = 0x82ECCA50;
	sub_82417100(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r11,-6444
	ctx.r3.s64 = ctx.r11.s64 + -6444;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r3,-48
	ctx.r4.s64 = ctx.r3.s64 + -48;
	// bl 0x83102db0
	ctx.lr = 0x82ECCA68;
	sub_83102DB0(ctx, base);
	// b 0x82ecca8c
	goto loc_82ECCA8C;
loc_82ECCA6C:
	// lhz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1592);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,1592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1592, ctx.r10.u16);
	// cmplwi cr6,r10,294
	cr6.compare<uint32_t>(ctx.r10.u32, 294, xer);
	// ble cr6,0x82ecca8c
	if (!cr6.gt) goto loc_82ECCA8C;
loc_82ECCA88:
	// stb r26,1605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1605, ctx.r26.u8);
loc_82ECCA8C:
	// lhz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1592);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eccab4
	if (cr6.eq) goto loc_82ECCAB4;
	// bl 0x832d30f8
	ctx.lr = 0x82ECCA9C;
	sub_832D30F8(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,200
	cr6.compare<uint32_t>(ctx.r10.u32, 200, xer);
	// ble cr6,0x82eccab4
	if (!cr6.gt) goto loc_82ECCAB4;
	// stb r26,1605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1605, ctx.r26.u8);
	// stb r26,1604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1604, ctx.r26.u8);
loc_82ECCAB4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x82ECCABC;
	sub_82597088(ctx, base);
loc_82ECCABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECCAC8"))) PPC_WEAK_FUNC(sub_82ECCAC8);
PPC_FUNC_IMPL(__imp__sub_82ECCAC8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-6272
	ctx.r10.s64 = ctx.r11.s64 + -6272;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82ecc3f8
	ctx.lr = 0x82ECCAF0;
	sub_82ECC3F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eccb08
	if (cr6.eq) goto loc_82ECCB08;
	// bl 0x832d3798
	ctx.lr = 0x82ECCB00;
	sub_832D3798(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82ECCB08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eccb30
	if (cr6.eq) goto loc_82ECCB30;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECCB2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82ECCB30:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eccb50
	if (cr6.eq) goto loc_82ECCB50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECCB4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82ECCB50:
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82596f90
	ctx.lr = 0x82ECCB58;
	sub_82596F90(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82596f90
	ctx.lr = 0x82ECCB60;
	sub_82596F90(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eccb70
	if (cr6.eq) goto loc_82ECCB70;
	// bl 0x82416268
	ctx.lr = 0x82ECCB70;
	sub_82416268(ctx, base);
loc_82ECCB70:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eccb8c
	if (cr6.eq) goto loc_82ECCB8C;
	// bl 0x82416268
	ctx.lr = 0x82ECCB8C;
	sub_82416268(ctx, base);
loc_82ECCB8C:
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e66ac0
	ctx.lr = 0x82ECCBAC;
	sub_82E66AC0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82416268
	ctx.lr = 0x82ECCBB4;
	sub_82416268(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r11,-6352
	ctx.r10.s64 = ctx.r11.s64 + -6352;
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

__attribute__((alias("__imp__sub_82ECCBD8"))) PPC_WEAK_FUNC(sub_82ECCBD8);
PPC_FUNC_IMPL(__imp__sub_82ECCBD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ECCBE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,-6272
	ctx.r10.s64 = ctx.r11.s64 + -6272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e66338
	ctx.lr = 0x82ECCC08;
	sub_82E66338(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r28,r31,48
	ctx.r28.s64 = ctx.r31.s64 + 48;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x82596fa8
	ctx.lr = 0x82ECCC34;
	sub_82596FA8(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82596fa8
	ctx.lr = 0x82ECCC3C;
	sub_82596FA8(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x831cdcf0
	ctx.lr = 0x82ECCC4C;
	sub_831CDCF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x831cdcf0
	ctx.lr = 0x82ECCC5C;
	sub_831CDCF0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r30,1605(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1605, ctx.r30.u8);
	// stb r30,1604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1604, ctx.r30.u8);
	// bl 0x832d30f8
	ctx.lr = 0x82ECCC70;
	sub_832D30F8(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r3,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
	// sth r30,1592(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1592, ctx.r30.u16);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r26,r4
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ecccc4
	if (cr6.eq) goto loc_82ECCCC4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r25,r11,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ECCCBC;
	sub_831CE420(ctx, base);
	// add r10,r25,r26
	ctx.r10.u64 = ctx.r25.u64 + ctx.r26.u64;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_82ECCCC4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82e66788
	ctx.lr = 0x82ECCCD4;
	sub_82E66788(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eccd20
	if (cr6.eq) goto loc_82ECCD20;
	// subf r29,r4,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ECCD18;
	sub_831CE420(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82ECCD20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECCD2C"))) PPC_WEAK_FUNC(sub_82ECCD2C);
PPC_FUNC_IMPL(__imp__sub_82ECCD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECCD30"))) PPC_WEAK_FUNC(sub_82ECCD30);
PPC_FUNC_IMPL(__imp__sub_82ECCD30) {
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
	// bl 0x82eccac8
	ctx.lr = 0x82ECCD50;
	sub_82ECCAC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eccd68
	if (cr6.eq) goto loc_82ECCD68;
	// bl 0x82416268
	ctx.lr = 0x82ECCD64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECCD68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECCD80"))) PPC_WEAK_FUNC(sub_82ECCD80);
PPC_FUNC_IMPL(__imp__sub_82ECCD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECCD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,400
	ctx.r4.s64 = 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECCDA8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eccdbc
	if (cr6.eq) goto loc_82ECCDBC;
	// bl 0x837357d8
	ctx.lr = 0x82ECCDB4;
	sub_837357D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82eccdc0
	goto loc_82ECCDC0;
loc_82ECCDBC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82ECCDC0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ECCDD4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eccde8
	if (cr6.eq) goto loc_82ECCDE8;
	// bl 0x837359b8
	ctx.lr = 0x82ECCDE0;
	sub_837359B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82eccdec
	goto loc_82ECCDEC;
loc_82ECCDE8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82ECCDEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECCE04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECCE0C"))) PPC_WEAK_FUNC(sub_82ECCE0C);
PPC_FUNC_IMPL(__imp__sub_82ECCE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECCE10"))) PPC_WEAK_FUNC(sub_82ECCE10);
PPC_FUNC_IMPL(__imp__sub_82ECCE10) {
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
	// bl 0x82e8bae8
	ctx.lr = 0x82ECCE20;
	sub_82E8BAE8(ctx, base);
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECCE34"))) PPC_WEAK_FUNC(sub_82ECCE34);
PPC_FUNC_IMPL(__imp__sub_82ECCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECCE38"))) PPC_WEAK_FUNC(sub_82ECCE38);
PPC_FUNC_IMPL(__imp__sub_82ECCE38) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECCE68;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecce94
	if (cr6.eq) goto loc_82ECCE94;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82ECCE80;
	sub_82E8BA80(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-5792
	ctx.r10.s64 = ctx.r11.s64 + -5792;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82ecce98
	goto loc_82ECCE98;
loc_82ECCE94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ECCE98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECCEB0"))) PPC_WEAK_FUNC(sub_82ECCEB0);
PPC_FUNC_IMPL(__imp__sub_82ECCEB0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5792
	ctx.r10.s64 = ctx.r11.s64 + -5792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82ECCEDC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eccef4
	if (cr6.eq) goto loc_82ECCEF4;
	// bl 0x82416268
	ctx.lr = 0x82ECCEF0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECCEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECCF0C"))) PPC_WEAK_FUNC(sub_82ECCF0C);
PPC_FUNC_IMPL(__imp__sub_82ECCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECCF10"))) PPC_WEAK_FUNC(sub_82ECCF10);
PPC_FUNC_IMPL(__imp__sub_82ECCF10) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82ECCF28;
	sub_82E8BAE8(ctx, base);
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mulli r11,r31,152
	ctx.r11.s64 = ctx.r31.s64 * 152;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82ECCF48"))) PPC_WEAK_FUNC(sub_82ECCF48);
PPC_FUNC_IMPL(__imp__sub_82ECCF48) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82ECCF5C;
	sub_82E8BAE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x835fbfa8
	ctx.lr = 0x82ECCF68;
	sub_835FBFA8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82ECCF6C;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82ECCF74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eccf74
	if (!cr6.eq) goto loc_82ECCF74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82ECCF98;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82ECCFB0"))) PPC_WEAK_FUNC(sub_82ECCFB0);
PPC_FUNC_IMPL(__imp__sub_82ECCFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECCFB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECCFD8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eccfec
	if (cr6.eq) goto loc_82ECCFEC;
	// bl 0x837365b0
	ctx.lr = 0x82ECCFE4;
	sub_837365B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82eccff0
	goto loc_82ECCFF0;
loc_82ECCFEC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82ECCFF0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,456
	ctx.r4.s64 = 456;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ECD004;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd018
	if (cr6.eq) goto loc_82ECD018;
	// bl 0x83736758
	ctx.lr = 0x82ECD010;
	sub_83736758(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82ecd01c
	goto loc_82ECD01C;
loc_82ECD018:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82ECD01C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECD034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECD03C"))) PPC_WEAK_FUNC(sub_82ECD03C);
PPC_FUNC_IMPL(__imp__sub_82ECD03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD040"))) PPC_WEAK_FUNC(sub_82ECD040);
PPC_FUNC_IMPL(__imp__sub_82ECD040) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82ECD058;
	sub_82E8BAE0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 372, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82ECD07C"))) PPC_WEAK_FUNC(sub_82ECD07C);
PPC_FUNC_IMPL(__imp__sub_82ECD07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD080"))) PPC_WEAK_FUNC(sub_82ECD080);
PPC_FUNC_IMPL(__imp__sub_82ECD080) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82ECD09C;
	sub_82E8BA80(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-5280
	ctx.r9.s64 = ctx.r10.s64 + -5280;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r8,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r8.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// std r11,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r11.u64);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// std r11,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82ECD100"))) PPC_WEAK_FUNC(sub_82ECD100);
PPC_FUNC_IMPL(__imp__sub_82ECD100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECD108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-5280
	ctx.r10.s64 = ctx.r11.s64 + -5280;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd12c
	if (cr6.eq) goto loc_82ECD12C;
	// bl 0x82416268
	ctx.lr = 0x82ECD12C;
	sub_82416268(ctx, base);
loc_82ECD12C:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// stw r29,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r29.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ecd154
	if (cr6.lt) goto loc_82ECD154;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82ECD154;
	sub_82416268(ctx, base);
loc_82ECD154:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x82e8bdc0
	ctx.lr = 0x82ECD16C;
	sub_82E8BDC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECD174"))) PPC_WEAK_FUNC(sub_82ECD174);
PPC_FUNC_IMPL(__imp__sub_82ECD174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD178"))) PPC_WEAK_FUNC(sub_82ECD178);
PPC_FUNC_IMPL(__imp__sub_82ECD178) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,296
	ctx.r4.s64 = 296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECD1A4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd1c8
	if (cr6.eq) goto loc_82ECD1C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ecd080
	ctx.lr = 0x82ECD1B4;
	sub_82ECD080(ctx, base);
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
loc_82ECD1C8:
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

__attribute__((alias("__imp__sub_82ECD1E0"))) PPC_WEAK_FUNC(sub_82ECD1E0);
PPC_FUNC_IMPL(__imp__sub_82ECD1E0) {
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
	// bl 0x82ecd100
	ctx.lr = 0x82ECD200;
	sub_82ECD100(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecd218
	if (cr6.eq) goto loc_82ECD218;
	// bl 0x82416268
	ctx.lr = 0x82ECD214;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECD218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECD230"))) PPC_WEAK_FUNC(sub_82ECD230);
PPC_FUNC_IMPL(__imp__sub_82ECD230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ECD238;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82ECD244;
	sub_82E8BAE8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r3,348
	ctx.r27.s64 = ctx.r3.s64 + 348;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r28,15
	ctx.r28.s64 = 15;
loc_82ECD258:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ecd26c
	if (cr6.lt) goto loc_82ECD26C;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82ecd270
	goto loc_82ECD270;
loc_82ECD26C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82ECD270:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82ECD280:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecd280
	if (!cr6.eq) goto loc_82ECD280;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82ECD2A4;
	sub_824208C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835fa2c8
	ctx.lr = 0x82ECD2AC;
	sub_835FA2C8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82ECD2B0;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82ECD2B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecd2b8
	if (!cr6.eq) goto loc_82ECD2B8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82ECD2E4;
	sub_827A8810(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ecd31c
	if (cr6.eq) goto loc_82ECD31C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ecd300
	if (cr6.lt) goto loc_82ECD300;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82ECD300;
	sub_8386D088(ctx, base);
loc_82ECD300:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x82ecd258
	if (cr6.lt) goto loc_82ECD258;
	// b 0x82ecd33c
	goto loc_82ECD33C;
loc_82ECD31C:
	// stw r29,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ecd330
	if (cr6.lt) goto loc_82ECD330;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82ECD330;
	sub_8386D088(ctx, base);
loc_82ECD330:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
loc_82ECD33C:
	// lwz r11,376(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 376);
	// addi r4,r25,388
	ctx.r4.s64 = ctx.r25.s64 + 388;
	// stw r11,212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 212, ctx.r11.u32);
	// lwz r10,380(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 380);
	// stw r10,220(r26)
	PPC_STORE_U32(ctx.r26.u32 + 220, ctx.r10.u32);
	// lwz r9,384(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 384);
	// stw r9,216(r26)
	PPC_STORE_U32(ctx.r26.u32 + 216, ctx.r9.u32);
	// lwz r8,408(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 408);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82ecd368
	if (cr6.lt) goto loc_82ECD368;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82ECD368:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ECD36C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecd36c
	if (!cr6.eq) goto loc_82ECD36C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r26,224
	ctx.r3.s64 = ctx.r26.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82ECD390;
	sub_82472FC0(ctx, base);
	// ld r10,416(r25)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r25.u32 + 416);
	// addi r29,r26,268
	ctx.r29.s64 = ctx.r26.s64 + 268;
	// std r10,256(r26)
	PPC_STORE_U64(ctx.r26.u32 + 256, ctx.r10.u64);
	// lwz r9,440(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 440);
	// stw r9,264(r26)
	PPC_STORE_U32(ctx.r26.u32 + 264, ctx.r9.u32);
	// lwz r4,272(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 272);
	// lwz r28,268(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 268);
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ecd3d4
	if (cr6.eq) goto loc_82ECD3D4;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ECD3CC;
	sub_831CE420(ctx, base);
	// add r10,r27,r28
	ctx.r10.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82ECD3D4:
	// lwz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82ecd408
	if (!cr6.gt) goto loc_82ECD408;
loc_82ECD3E4:
	// lwz r11,432(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82ECD3F4;
	sub_82AB5F20(ctx, base);
	// lwz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ecd3e4
	if (cr6.lt) goto loc_82ECD3E4;
loc_82ECD408:
	// ld r11,448(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 448);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,288(r26)
	PPC_STORE_U64(ctx.r26.u32 + 288, ctx.r11.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECD41C"))) PPC_WEAK_FUNC(sub_82ECD41C);
PPC_FUNC_IMPL(__imp__sub_82ECD41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD420"))) PPC_WEAK_FUNC(sub_82ECD420);
PPC_FUNC_IMPL(__imp__sub_82ECD420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ECD428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ecd464
	if (cr6.eq) goto loc_82ECD464;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x82ECD45C;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_82ECD464:
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82ecd49c
	if (!cr6.gt) goto loc_82ECD49C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82ECD478:
	// lwz r11,268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x82ECD488;
	sub_82AB5F20(ctx, base);
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ecd478
	if (cr6.lt) goto loc_82ECD478;
loc_82ECD49C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECD4A4"))) PPC_WEAK_FUNC(sub_82ECD4A4);
PPC_FUNC_IMPL(__imp__sub_82ECD4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD4A8"))) PPC_WEAK_FUNC(sub_82ECD4A8);
PPC_FUNC_IMPL(__imp__sub_82ECD4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECD4B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECD4D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd4e4
	if (cr6.eq) goto loc_82ECD4E4;
	// bl 0x83736ff8
	ctx.lr = 0x82ECD4DC;
	sub_83736FF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ecd4e8
	goto loc_82ECD4E8;
loc_82ECD4E4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82ECD4E8:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ECD4FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd510
	if (cr6.eq) goto loc_82ECD510;
	// bl 0x837371a8
	ctx.lr = 0x82ECD508;
	sub_837371A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82ecd514
	goto loc_82ECD514;
loc_82ECD510:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82ECD514:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECD52C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECD534"))) PPC_WEAK_FUNC(sub_82ECD534);
PPC_FUNC_IMPL(__imp__sub_82ECD534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD538"))) PPC_WEAK_FUNC(sub_82ECD538);
PPC_FUNC_IMPL(__imp__sub_82ECD538) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82ECD550;
	sub_82E8BAE0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 372, ctx.r11.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r9,376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 376, ctx.r9.u32);
	// ld r8,216(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// std r8,384(r10)
	PPC_STORE_U64(ctx.r10.u32 + 384, ctx.r8.u64);
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

__attribute__((alias("__imp__sub_82ECD584"))) PPC_WEAK_FUNC(sub_82ECD584);
PPC_FUNC_IMPL(__imp__sub_82ECD584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD588"))) PPC_WEAK_FUNC(sub_82ECD588);
PPC_FUNC_IMPL(__imp__sub_82ECD588) {
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
	// li r11,29
	ctx.r11.s64 = 29;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECD5B8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd5f4
	if (cr6.eq) goto loc_82ECD5F4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82ECD5D0;
	sub_82E8BA80(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4768
	ctx.r9.s64 = ctx.r10.s64 + -4768;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// std r11,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r11.u64);
	// b 0x82ecd5f8
	goto loc_82ECD5F8;
loc_82ECD5F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ECD5F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECD610"))) PPC_WEAK_FUNC(sub_82ECD610);
PPC_FUNC_IMPL(__imp__sub_82ECD610) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4768
	ctx.r10.s64 = ctx.r11.s64 + -4768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82ECD63C;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ecd654
	if (cr6.eq) goto loc_82ECD654;
	// bl 0x82416268
	ctx.lr = 0x82ECD650;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECD654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECD66C"))) PPC_WEAK_FUNC(sub_82ECD66C);
PPC_FUNC_IMPL(__imp__sub_82ECD66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD670"))) PPC_WEAK_FUNC(sub_82ECD670);
PPC_FUNC_IMPL(__imp__sub_82ECD670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECD678;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,29
	ctx.r31.s64 = 29;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,432
	ctx.r4.u64 = ctx.r4.u64 | 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECD69C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd6b0
	if (cr6.eq) goto loc_82ECD6B0;
	// bl 0x83737c78
	ctx.lr = 0x82ECD6A8;
	sub_83737C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ecd6b4
	goto loc_82ECD6B4;
loc_82ECD6B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82ECD6B4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ECD6C8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd6dc
	if (cr6.eq) goto loc_82ECD6DC;
	// bl 0x83737ea0
	ctx.lr = 0x82ECD6D4;
	sub_83737EA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82ecd6e0
	goto loc_82ECD6E0;
loc_82ECD6DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82ECD6E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECD6F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECD700"))) PPC_WEAK_FUNC(sub_82ECD700);
PPC_FUNC_IMPL(__imp__sub_82ECD700) {
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
	// bl 0x82e8bae8
	ctx.lr = 0x82ECD718;
	sub_82E8BAE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 352);
	// std r10,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r10.u64);
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

__attribute__((alias("__imp__sub_82ECD73C"))) PPC_WEAK_FUNC(sub_82ECD73C);
PPC_FUNC_IMPL(__imp__sub_82ECD73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD740"))) PPC_WEAK_FUNC(sub_82ECD740);
PPC_FUNC_IMPL(__imp__sub_82ECD740) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e8ba80
	ctx.lr = 0x82ECD75C;
	sub_82E8BA80(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-4256
	ctx.r9.s64 = ctx.r10.s64 + -4256;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r8,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// std r11,248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 248, ctx.r11.u64);
	// std r11,256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 256, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82ECD7AC"))) PPC_WEAK_FUNC(sub_82ECD7AC);
PPC_FUNC_IMPL(__imp__sub_82ECD7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD7B0"))) PPC_WEAK_FUNC(sub_82ECD7B0);
PPC_FUNC_IMPL(__imp__sub_82ECD7B0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-4256
	ctx.r10.s64 = ctx.r11.s64 + -4256;
	// addi r31,r3,220
	ctx.r31.s64 = ctx.r3.s64 + 220;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,240(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82ecd7ec
	if (cr6.lt) goto loc_82ECD7EC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82ECD7EC;
	sub_82416268(ctx, base);
loc_82ECD7EC:
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
	// bl 0x82e8bdc0
	ctx.lr = 0x82ECD808;
	sub_82E8BDC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECD820"))) PPC_WEAK_FUNC(sub_82ECD820);
PPC_FUNC_IMPL(__imp__sub_82ECD820) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,264
	ctx.r4.s64 = 264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECD84C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ecd870
	if (cr6.eq) goto loc_82ECD870;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ecd740
	ctx.lr = 0x82ECD85C;
	sub_82ECD740(ctx, base);
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
loc_82ECD870:
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

__attribute__((alias("__imp__sub_82ECD888"))) PPC_WEAK_FUNC(sub_82ECD888);
PPC_FUNC_IMPL(__imp__sub_82ECD888) {
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
	// bl 0x82ecd7b0
	ctx.lr = 0x82ECD8A8;
	sub_82ECD7B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecd8c0
	if (cr6.eq) goto loc_82ECD8C0;
	// bl 0x82416268
	ctx.lr = 0x82ECD8BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECD8C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECD8D8"))) PPC_WEAK_FUNC(sub_82ECD8D8);
PPC_FUNC_IMPL(__imp__sub_82ECD8D8) {
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
	// bl 0x82e8bae0
	ctx.lr = 0x82ECD8F0;
	sub_82E8BAE0(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r11.u32);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r9,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r9.u32);
	// lwz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r8,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r8.u32);
	// lwz r7,240(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82ecd924
	if (cr6.lt) goto loc_82ECD924;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82ECD924:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ECD928:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecd928
	if (!cr6.eq) goto loc_82ECD928;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r3,388
	ctx.r3.s64 = ctx.r3.s64 + 388;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82ECD94C;
	sub_824208C8(ctx, base);
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

__attribute__((alias("__imp__sub_82ECD964"))) PPC_WEAK_FUNC(sub_82ECD964);
PPC_FUNC_IMPL(__imp__sub_82ECD964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD968"))) PPC_WEAK_FUNC(sub_82ECD968);
PPC_FUNC_IMPL(__imp__sub_82ECD968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,113(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecd9b4
	if (!cr6.eq) goto loc_82ECD9B4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,113(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecd9ac
	if (!cr6.eq) goto loc_82ECD9AC;
loc_82ECD998:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,113(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ecd998
	if (cr6.eq) goto loc_82ECD998;
loc_82ECD9AC:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82ECD9B4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecd9ec
	if (!cr6.eq) goto loc_82ECD9EC;
loc_82ECD9C4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecd9ec
	if (!cr6.eq) goto loc_82ECD9EC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecd9c4
	if (cr6.eq) goto loc_82ECD9C4;
loc_82ECD9EC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECD9F4"))) PPC_WEAK_FUNC(sub_82ECD9F4);
PPC_FUNC_IMPL(__imp__sub_82ECD9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECD9F8"))) PPC_WEAK_FUNC(sub_82ECD9F8);
PPC_FUNC_IMPL(__imp__sub_82ECD9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecda14
	if (cr6.eq) goto loc_82ECDA14;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82ECDA14:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,113(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecda50
	if (!cr6.eq) goto loc_82ECDA50;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,113(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecda48
	if (!cr6.eq) goto loc_82ECDA48;
loc_82ECDA34:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,113(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ecda34
	if (cr6.eq) goto loc_82ECDA34;
loc_82ECDA48:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82ECDA50:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ecda88
	if (!cr6.eq) goto loc_82ECDA88;
loc_82ECDA60:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecda88
	if (!cr6.eq) goto loc_82ECDA88;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,113(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecda60
	if (cr6.eq) goto loc_82ECDA60;
loc_82ECDA88:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,113(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECDAA0"))) PPC_WEAK_FUNC(sub_82ECDAA0);
PPC_FUNC_IMPL(__imp__sub_82ECDAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecdab4
	if (cr6.eq) goto loc_82ECDAB4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECDAB4:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecdad0
	if (cr6.gt) goto loc_82ECDAD0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82ECDAD0:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECDAE4"))) PPC_WEAK_FUNC(sub_82ECDAE4);
PPC_FUNC_IMPL(__imp__sub_82ECDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECDAE8"))) PPC_WEAK_FUNC(sub_82ECDAE8);
PPC_FUNC_IMPL(__imp__sub_82ECDAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,113(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecdb08
	if (!cr6.eq) goto loc_82ECDB08;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82ECDB08:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecdb30
	if (!cr6.eq) goto loc_82ECDB30;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ECDB30:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecdb50
	if (!cr6.eq) goto loc_82ECDB50;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ECDB50:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECDB60"))) PPC_WEAK_FUNC(sub_82ECDB60);
PPC_FUNC_IMPL(__imp__sub_82ECDB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,69(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecdb80
	if (!cr6.eq) goto loc_82ECDB80;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82ECDB80:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecdba8
	if (!cr6.eq) goto loc_82ECDBA8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ECDBA8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecdbc8
	if (!cr6.eq) goto loc_82ECDBC8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ECDBC8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECDBD8"))) PPC_WEAK_FUNC(sub_82ECDBD8);
PPC_FUNC_IMPL(__imp__sub_82ECDBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECDBE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82ecdc0c
	if (cr6.eq) goto loc_82ECDC0C;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82ECDC0C;
	sub_825749E0(ctx, base);
loc_82ECDC0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8387bf40
	ctx.lr = 0x82ECDC18;
	sub_8387BF40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8387bf40
	ctx.lr = 0x82ECDC24;
	sub_8387BF40(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ecdc50
	if (cr6.eq) goto loc_82ECDC50;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECDC34;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecdc50
	if (!cr6.eq) goto loc_82ECDC50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECDC50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECDC50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECDC58"))) PPC_WEAK_FUNC(sub_82ECDC58);
PPC_FUNC_IMPL(__imp__sub_82ECDC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,113(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecdc78
	if (!cr6.eq) goto loc_82ECDC78;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82ECDC78:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecdca0
	if (!cr6.eq) goto loc_82ECDCA0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ECDCA0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ecdcc0
	if (!cr6.eq) goto loc_82ECDCC0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82ECDCC0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECDCD0"))) PPC_WEAK_FUNC(sub_82ECDCD0);
PPC_FUNC_IMPL(__imp__sub_82ECDCD0) {
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
	// li r4,116
	ctx.r4.s64 = 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECDD04;
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
	// stb r11,112(r7)
	PPC_STORE_U8(ctx.r7.u32 + 112, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,113(r6)
	PPC_STORE_U8(ctx.r6.u32 + 113, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82ECDD48"))) PPC_WEAK_FUNC(sub_82ECDD48);
PPC_FUNC_IMPL(__imp__sub_82ECDD48) {
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
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ECDD7C;
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
	// stb r11,68(r7)
	PPC_STORE_U8(ctx.r7.u32 + 68, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,69(r6)
	PPC_STORE_U8(ctx.r6.u32 + 69, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82ECDDC0"))) PPC_WEAK_FUNC(sub_82ECDDC0);
PPC_FUNC_IMPL(__imp__sub_82ECDDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ECDDC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ecde88
	if (cr6.eq) goto loc_82ECDE88;
loc_82ECDDEC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8389e908
	ctx.lr = 0x82ECDE00;
	sub_8389E908(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x8389e908
	ctx.lr = 0x82ECDE18;
	sub_8389E908(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ecde78
	if (cr6.eq) goto loc_82ECDE78;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ecde44
	if (cr6.eq) goto loc_82ECDE44;
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82ECDE44;
	sub_825749E0(ctx, base);
loc_82ECDE44:
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ecde74
	if (cr6.eq) goto loc_82ECDE74;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECDE58;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecde74
	if (!cr6.eq) goto loc_82ECDE74;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECDE74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECDE74:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82ECDE78:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ecddec
	if (!cr6.eq) goto loc_82ECDDEC;
loc_82ECDE88:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82ecdeb4
	if (cr6.eq) goto loc_82ECDEB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecdeb4
	if (cr6.eq) goto loc_82ECDEB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82ECDEB4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECDEC8"))) PPC_WEAK_FUNC(sub_82ECDEC8);
PPC_FUNC_IMPL(__imp__sub_82ECDEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ECDED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ecdf90
	if (cr6.eq) goto loc_82ECDF90;
loc_82ECDEF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8389e908
	ctx.lr = 0x82ECDEFC;
	sub_8389E908(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8389e908
	ctx.lr = 0x82ECDF08;
	sub_8389E908(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r28,4(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ecdf68
	if (cr6.eq) goto loc_82ECDF68;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ecdf34
	if (cr6.eq) goto loc_82ECDF34;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82ECDF34;
	sub_825749E0(ctx, base);
loc_82ECDF34:
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ecdf64
	if (cr6.eq) goto loc_82ECDF64;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECDF48;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecdf64
	if (!cr6.eq) goto loc_82ECDF64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECDF64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECDF64:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82ECDF68:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ecdef4
	if (!cr6.eq) goto loc_82ECDEF4;
loc_82ECDF90:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82ecdfbc
	if (cr6.eq) goto loc_82ECDFBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecdfbc
	if (cr6.eq) goto loc_82ECDFBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82ECDFBC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECDFD0"))) PPC_WEAK_FUNC(sub_82ECDFD0);
PPC_FUNC_IMPL(__imp__sub_82ECDFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECDFD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ece040
	if (cr6.eq) goto loc_82ECE040;
loc_82ECDFFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82ecdaa0
	ctx.lr = 0x82ECE010;
	sub_82ECDAA0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x82ecdaa0
	ctx.lr = 0x82ECE028;
	sub_82ECDAA0(ctx, base);
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82ecdffc
	if (!cr6.eq) goto loc_82ECDFFC;
loc_82ECE040:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82ece06c
	if (cr6.eq) goto loc_82ECE06C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ece06c
	if (cr6.eq) goto loc_82ECE06C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82ECE06C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECE080"))) PPC_WEAK_FUNC(sub_82ECE080);
PPC_FUNC_IMPL(__imp__sub_82ECE080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECE088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ece0f0
	if (cr6.eq) goto loc_82ECE0F0;
loc_82ECE0AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ecdaa0
	ctx.lr = 0x82ECE0B4;
	sub_82ECDAA0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ecdaa0
	ctx.lr = 0x82ECE0C0;
	sub_82ECDAA0(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82ece0ac
	if (!cr6.eq) goto loc_82ECE0AC;
loc_82ECE0F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82ece11c
	if (cr6.eq) goto loc_82ECE11C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ece11c
	if (cr6.eq) goto loc_82ECE11C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82ECE11C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECE130"))) PPC_WEAK_FUNC(sub_82ECE130);
PPC_FUNC_IMPL(__imp__sub_82ECE130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r7,16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ECE158:
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ece170
	if (cr6.gt) goto loc_82ECE170;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82ECE170:
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lbzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82ece158
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECE158;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE194"))) PPC_WEAK_FUNC(sub_82ECE194);
PPC_FUNC_IMPL(__imp__sub_82ECE194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECE198"))) PPC_WEAK_FUNC(sub_82ECE198);
PPC_FUNC_IMPL(__imp__sub_82ECE198) {
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
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ece1d0
	if (cr6.gt) goto loc_82ECE1D0;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ECE1D0:
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ece1e8
	if (cr6.gt) goto loc_82ECE1E8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82ECE1E8:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r30,r7,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82586d48
	ctx.lr = 0x82ECE20C;
	sub_82586D48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586dc8
	ctx.lr = 0x82ECE218;
	sub_82586DC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82586dc8
	ctx.lr = 0x82ECE224;
	sub_82586DC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x82ECE22C;
	sub_82586BD8(ctx, base);
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

__attribute__((alias("__imp__sub_82ECE244"))) PPC_WEAK_FUNC(sub_82ECE244);
PPC_FUNC_IMPL(__imp__sub_82ECE244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECE248"))) PPC_WEAK_FUNC(sub_82ECE248);
PPC_FUNC_IMPL(__imp__sub_82ECE248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r7,24(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82ece268
	if (cr6.gt) goto loc_82ECE268;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82ECE268:
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ece280
	if (cr6.gt) goto loc_82ECE280;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82ECE280:
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// lwzx r7,r4,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ECE2AC:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82ece2ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECE2AC;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ECE2C8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82ece2c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECE2C8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r1,-36
	ctx.r11.s64 = ctx.r1.s64 + -36;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82ECE2E4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ece2e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECE2E4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE2F4"))) PPC_WEAK_FUNC(sub_82ECE2F4);
PPC_FUNC_IMPL(__imp__sub_82ECE2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECE2F8"))) PPC_WEAK_FUNC(sub_82ECE2F8);
PPC_FUNC_IMPL(__imp__sub_82ECE2F8) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ece32c
	if (cr6.gt) goto loc_82ECE32C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ECE32C:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ece34c
	if (cr6.gt) goto loc_82ECE34C;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82ECE34C:
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ecdbd8
	ctx.lr = 0x82ECE378;
	sub_82ECDBD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE388"))) PPC_WEAK_FUNC(sub_82ECE388);
PPC_FUNC_IMPL(__imp__sub_82ECE388) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83354c48
	ctx.lr = 0x82ECE3C8;
	sub_83354C48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ece3ec
	if (cr6.eq) goto loc_82ECE3EC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ece3e4
	if (cr6.lt) goto loc_82ECE3E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82ECE3E4;
	sub_8386D088(ctx, base);
loc_82ECE3E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ece430
	goto loc_82ECE430;
loc_82ECE3EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586d00
	ctx.lr = 0x82ECE3F4;
	sub_82586D00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ece410
	if (cr6.eq) goto loc_82ECE410;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e8
	ctx.lr = 0x82ECE404;
	sub_825832E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82ece414
	if (!cr6.eq) goto loc_82ECE414;
loc_82ECE410:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ECE414:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ece42c
	if (cr6.lt) goto loc_82ECE42C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8386d088
	ctx.lr = 0x82ECE42C;
	sub_8386D088(ctx, base);
loc_82ECE42C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ECE430:
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

__attribute__((alias("__imp__sub_82ECE448"))) PPC_WEAK_FUNC(sub_82ECE448);
PPC_FUNC_IMPL(__imp__sub_82ECE448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ece458
	if (!cr6.eq) goto loc_82ECE458;
	// blr 
	return;
loc_82ECE458:
	// b 0x82e96760
	sub_82E96760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECE45C"))) PPC_WEAK_FUNC(sub_82ECE45C);
PPC_FUNC_IMPL(__imp__sub_82ECE45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECE460"))) PPC_WEAK_FUNC(sub_82ECE460);
PPC_FUNC_IMPL(__imp__sub_82ECE460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ece470
	if (!cr6.eq) goto loc_82ECE470;
	// blr 
	return;
loc_82ECE470:
	// b 0x82e967f0
	sub_82E967F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECE474"))) PPC_WEAK_FUNC(sub_82ECE474);
PPC_FUNC_IMPL(__imp__sub_82ECE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECE478"))) PPC_WEAK_FUNC(sub_82ECE478);
PPC_FUNC_IMPL(__imp__sub_82ECE478) {
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
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ece520
	if (cr6.eq) goto loc_82ECE520;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82e965b0
	ctx.lr = 0x82ECE4A0;
	sub_82E965B0(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82e965b0
	ctx.lr = 0x82ECE4B4;
	sub_82E965B0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ece4d4
	if (!cr6.eq) goto loc_82ECE4D4;
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
loc_82ECE4D4:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// beq cr6,0x82ece50c
	if (cr6.eq) goto loc_82ECE50C;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// beq cr6,0x82ece520
	if (cr6.eq) goto loc_82ECE520;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82ece50c
	if (cr6.eq) goto loc_82ECE50C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82ece50c
	if (cr6.eq) goto loc_82ECE50C;
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
loc_82ECE50C:
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// beq cr6,0x82ece520
	if (cr6.eq) goto loc_82ECE520;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// li r3,5
	ctx.r3.s64 = 5;
	// bne cr6,0x82ece524
	if (!cr6.eq) goto loc_82ECE524;
loc_82ECE520:
	// li r3,6
	ctx.r3.s64 = 6;
loc_82ECE524:
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

__attribute__((alias("__imp__sub_82ECE538"))) PPC_WEAK_FUNC(sub_82ECE538);
PPC_FUNC_IMPL(__imp__sub_82ECE538) {
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
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ece56c
	if (cr6.lt) goto loc_82ECE56C;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82ece570
	goto loc_82ECE570;
loc_82ECE56C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82ECE570:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x82ECE580;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ece5d4
	if (cr6.lt) goto loc_82ECE5D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ece5a0
	if (cr6.lt) goto loc_82ECE5A0;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82ece5a4
	goto loc_82ECE5A4;
loc_82ECE5A0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82ECE5A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x82ECE5B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ece5cc
	if (cr6.lt) goto loc_82ECE5CC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ece5d4
	if (cr6.lt) goto loc_82ECE5D4;
loc_82ECE5CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ece5d8
	goto loc_82ECE5D8;
loc_82ECE5D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82ECE5D8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE5F4"))) PPC_WEAK_FUNC(sub_82ECE5F4);
PPC_FUNC_IMPL(__imp__sub_82ECE5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECE5F8"))) PPC_WEAK_FUNC(sub_82ECE5F8);
PPC_FUNC_IMPL(__imp__sub_82ECE5F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82ece63c
	if (cr6.eq) goto loc_82ECE63C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece63c
	if (cr6.eq) goto loc_82ECE63C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82ECE63C:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82ece66c
	if (cr6.eq) goto loc_82ECE66C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece66c
	if (cr6.eq) goto loc_82ECE66C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82ECE66C:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82ece69c
	if (cr6.eq) goto loc_82ECE69C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ece69c
	if (cr6.eq) goto loc_82ECE69C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82ECE69C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82ecddc0
	ctx.lr = 0x82ECE6B8;
	sub_82ECDDC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE6D0"))) PPC_WEAK_FUNC(sub_82ECE6D0);
PPC_FUNC_IMPL(__imp__sub_82ECE6D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82ece714
	if (cr6.eq) goto loc_82ECE714;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece714
	if (cr6.eq) goto loc_82ECE714;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82ECE714:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82ece744
	if (cr6.eq) goto loc_82ECE744;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece744
	if (cr6.eq) goto loc_82ECE744;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82ECE744:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82ece774
	if (cr6.eq) goto loc_82ECE774;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ece774
	if (cr6.eq) goto loc_82ECE774;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82ECE774:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82ecdec8
	ctx.lr = 0x82ECE790;
	sub_82ECDEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE7A8"))) PPC_WEAK_FUNC(sub_82ECE7A8);
PPC_FUNC_IMPL(__imp__sub_82ECE7A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82ece7ec
	if (cr6.eq) goto loc_82ECE7EC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece7ec
	if (cr6.eq) goto loc_82ECE7EC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82ECE7EC:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82ece81c
	if (cr6.eq) goto loc_82ECE81C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece81c
	if (cr6.eq) goto loc_82ECE81C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82ECE81C:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82ece84c
	if (cr6.eq) goto loc_82ECE84C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ece84c
	if (cr6.eq) goto loc_82ECE84C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82ECE84C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82ecdfd0
	ctx.lr = 0x82ECE868;
	sub_82ECDFD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE880"))) PPC_WEAK_FUNC(sub_82ECE880);
PPC_FUNC_IMPL(__imp__sub_82ECE880) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x82ece8c4
	if (cr6.eq) goto loc_82ECE8C4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece8c4
	if (cr6.eq) goto loc_82ECE8C4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82ECE8C4:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x82ece8f4
	if (cr6.eq) goto loc_82ECE8F4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ece8f4
	if (cr6.eq) goto loc_82ECE8F4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_82ECE8F4:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x82ece924
	if (cr6.eq) goto loc_82ECE924;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ece924
	if (cr6.eq) goto loc_82ECE924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82ECE924:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82ece080
	ctx.lr = 0x82ECE940;
	sub_82ECE080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE958"))) PPC_WEAK_FUNC(sub_82ECE958);
PPC_FUNC_IMPL(__imp__sub_82ECE958) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ece9b0
	if (cr6.eq) goto loc_82ECE9B0;
loc_82ECE984:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ece9b0
	if (cr6.eq) goto loc_82ECE9B0;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82ece198
	ctx.lr = 0x82ECE9A0;
	sub_82ECE198(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ece984
	if (!cr6.eq) goto loc_82ECE984;
loc_82ECE9B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECE9C8"))) PPC_WEAK_FUNC(sub_82ECE9C8);
PPC_FUNC_IMPL(__imp__sub_82ECE9C8) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ecea20
	if (cr6.eq) goto loc_82ECEA20;
loc_82ECE9F4:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ecea20
	if (cr6.eq) goto loc_82ECEA20;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82ece248
	ctx.lr = 0x82ECEA10;
	sub_82ECE248(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ece9f4
	if (!cr6.eq) goto loc_82ECE9F4;
loc_82ECEA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECEA38"))) PPC_WEAK_FUNC(sub_82ECEA38);
PPC_FUNC_IMPL(__imp__sub_82ECEA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82eceacc
	if (cr6.eq) goto loc_82ECEACC;
	// lwz r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r3,16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
loc_82ECEA5C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x82eceacc
	if (cr6.eq) goto loc_82ECEACC;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r9,r7,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r6,r7,28
	ctx.r6.u64 = ctx.r7.u32 & 0xF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ecea80
	if (cr6.gt) goto loc_82ECEA80;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82ECEA80:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ecea98
	if (cr6.gt) goto loc_82ECEA98;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_82ECEA98:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r5,r9,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbzx r31,r10,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r5,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u8);
	// stbx r31,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r31.u8);
	// bne cr6,0x82ecea5c
	if (!cr6.eq) goto loc_82ECEA5C;
loc_82ECEACC:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECEAD4"))) PPC_WEAK_FUNC(sub_82ECEAD4);
PPC_FUNC_IMPL(__imp__sub_82ECEAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECEAD8"))) PPC_WEAK_FUNC(sub_82ECEAD8);
PPC_FUNC_IMPL(__imp__sub_82ECEAD8) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82eceb30
	if (cr6.eq) goto loc_82ECEB30;
loc_82ECEB04:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x82eceb30
	if (cr6.eq) goto loc_82ECEB30;
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82ece2f8
	ctx.lr = 0x82ECEB20;
	sub_82ECE2F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x82eceb04
	if (!cr6.eq) goto loc_82ECEB04;
loc_82ECEB30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECEB48"))) PPC_WEAK_FUNC(sub_82ECEB48);
PPC_FUNC_IMPL(__imp__sub_82ECEB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ECEB50;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// subf r28,r27,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r27.s64;
	// subf r9,r27,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82ecebbc
	if (cr6.eq) goto loc_82ECEBBC;
loc_82ECEB90:
	// divw r8,r25,r11
	ctx.r8.s32 = PPCDivide(ctx.r25.s32, ctx.r11.s32);
	// rotlwi r10,r25,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82eceb90
	if (!cr0.eq) goto loc_82ECEB90;
loc_82ECEBBC:
	// cmpw cr6,r25,r9
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ecec84
	if (!cr6.lt) goto loc_82ECEC84;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x82ecec84
	if (!cr6.gt) goto loc_82ECEC84;
loc_82ECEBCC:
	// add r26,r27,r25
	ctx.r26.u64 = ctx.r27.u64 + ctx.r25.u64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ecebf4
	if (!cr6.eq) goto loc_82ECEBF4;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// b 0x82ecec08
	goto loc_82ECEC08;
loc_82ECEBF4:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82ECEC08:
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82ECEC14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ece198
	ctx.lr = 0x82ECEC1C;
	sub_82ECE198(ctx, base);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x82ecec4c
	if (!cr6.lt) goto loc_82ECEC4C;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// b 0x82ecec68
	goto loc_82ECEC68;
loc_82ECEC4C:
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
loc_82ECEC68:
	// ld r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x82ecec14
	if (!cr6.eq) goto loc_82ECEC14;
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bgt 0x82ecebcc
	if (cr0.gt) goto loc_82ECEBCC;
loc_82ECEC84:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECEC8C"))) PPC_WEAK_FUNC(sub_82ECEC8C);
PPC_FUNC_IMPL(__imp__sub_82ECEC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECEC90"))) PPC_WEAK_FUNC(sub_82ECEC90);
PPC_FUNC_IMPL(__imp__sub_82ECEC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ECEC98;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// lwz r29,228(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// subf r28,r27,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r27.s64;
	// subf r9,r27,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82eced04
	if (cr6.eq) goto loc_82ECED04;
loc_82ECECD8:
	// divw r8,r25,r11
	ctx.r8.s32 = PPCDivide(ctx.r25.s32, ctx.r11.s32);
	// rotlwi r10,r25,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82ececd8
	if (!cr0.eq) goto loc_82ECECD8;
loc_82ECED04:
	// cmpw cr6,r25,r9
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ecedcc
	if (!cr6.lt) goto loc_82ECEDCC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x82ecedcc
	if (!cr6.gt) goto loc_82ECEDCC;
loc_82ECED14:
	// add r26,r27,r25
	ctx.r26.u64 = ctx.r27.u64 + ctx.r25.u64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82eced3c
	if (!cr6.eq) goto loc_82ECED3C;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// b 0x82eced50
	goto loc_82ECED50;
loc_82ECED3C:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82ECED50:
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82ECED5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ece248
	ctx.lr = 0x82ECED64;
	sub_82ECE248(ctx, base);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x82eced94
	if (!cr6.lt) goto loc_82ECED94;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// b 0x82ecedb0
	goto loc_82ECEDB0;
loc_82ECED94:
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
loc_82ECEDB0:
	// ld r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eced5c
	if (!cr6.eq) goto loc_82ECED5C;
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bgt 0x82eced14
	if (cr0.gt) goto loc_82ECED14;
loc_82ECEDCC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECEDD4"))) PPC_WEAK_FUNC(sub_82ECEDD4);
PPC_FUNC_IMPL(__imp__sub_82ECEDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECEDD8"))) PPC_WEAK_FUNC(sub_82ECEDD8);
PPC_FUNC_IMPL(__imp__sub_82ECEDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ECEDE0;
	__savegprlr_26(ctx, base);
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lwz r30,36(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r28,20(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r9,r28,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r28.s64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, xer);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x82ecee44
	if (cr6.eq) goto loc_82ECEE44;
loc_82ECEE18:
	// divw r8,r26,r11
	ctx.r8.s32 = PPCDivide(ctx.r26.s32, ctx.r11.s32);
	// rotlwi r10,r26,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82ecee18
	if (!cr0.eq) goto loc_82ECEE18;
loc_82ECEE44:
	// cmpw cr6,r26,r9
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ecef68
	if (!cr6.lt) goto loc_82ECEF68;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x82ecef68
	if (!cr6.gt) goto loc_82ECEF68;
loc_82ECEE54:
	// add r27,r28,r26
	ctx.r27.u64 = ctx.r28.u64 + ctx.r26.u64;
	// std r3,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r3.u64);
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r27,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r27.u32);
	// ld r10,-88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// std r10,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r10.u64);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ecee7c
	if (!cr6.eq) goto loc_82ECEE7C;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// b 0x82ecee90
	goto loc_82ECEE90;
loc_82ECEE7C:
	// std r10,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// ld r11,-96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
loc_82ECEE90:
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r31.u64);
	// lwz r9,-92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
loc_82ECEE9C:
	// lwz r4,-96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// rlwinm r10,r9,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82eceeb8
	if (cr6.gt) goto loc_82ECEEB8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ECEEB8:
	// lwz r6,-88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r8,-84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82eceed8
	if (cr6.gt) goto loc_82ECEED8;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_82ECEED8:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// std r31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r31.u64);
	// lwzx r10,r5,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// lbzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stbx r6,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x82ecef30
	if (!cr6.lt) goto loc_82ECEF30;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r31.u64);
	// addi r11,r1,-72
	ctx.r11.s64 = ctx.r1.s64 + -72;
	// stw r10,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// ld r9,-96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// b 0x82ecef4c
	goto loc_82ECEF4C;
loc_82ECEF30:
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// std r3,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r3.u64);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r10,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r10.u32);
	// ld r9,-96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// std r9,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r9.u64);
loc_82ECEF4C:
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r31.u64);
	// lwz r9,-92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// bne cr6,0x82ecee9c
	if (!cr6.eq) goto loc_82ECEE9C;
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bgt 0x82ecee54
	if (cr0.gt) goto loc_82ECEE54;
loc_82ECEF68:
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECEF6C"))) PPC_WEAK_FUNC(sub_82ECEF6C);
PPC_FUNC_IMPL(__imp__sub_82ECEF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECEF70"))) PPC_WEAK_FUNC(sub_82ECEF70);
PPC_FUNC_IMPL(__imp__sub_82ECEF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82ECEF78;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r3.u64);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// std r4,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r4.u64);
	// std r5,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r5.u64);
	// lwz r23,276(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r21,260(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// subf r22,r21,r11
	ctx.r22.s64 = ctx.r11.s64 - ctx.r21.s64;
	// subf r9,r21,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r21.s64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, xer);
	// cmplw cr6,r21,r23
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r23.u32, xer);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// beq cr6,0x82ecefe4
	if (cr6.eq) goto loc_82ECEFE4;
loc_82ECEFB8:
	// divw r8,r19,r11
	ctx.r8.s32 = PPCDivide(ctx.r19.s32, ctx.r11.s32);
	// rotlwi r10,r19,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r19.u32, 1);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf. r10,r7,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// twlgei r5,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82ecefb8
	if (!cr0.eq) goto loc_82ECEFB8;
loc_82ECEFE4:
	// cmpw cr6,r19,r9
	cr6.compare<int32_t>(ctx.r19.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ecf1fc
	if (!cr6.lt) goto loc_82ECF1FC;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// ble cr6,0x82ecf1fc
	if (!cr6.gt) goto loc_82ECF1FC;
loc_82ECEFF4:
	// add r20,r21,r19
	ctx.r20.u64 = ctx.r21.u64 + ctx.r19.u64;
	// std r18,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r18.u64);
	// add r11,r20,r22
	ctx.r11.u64 = ctx.r20.u64 + ctx.r22.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bne cr6,0x82ecf01c
	if (!cr6.eq) goto loc_82ECF01C;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// b 0x82ecf030
	goto loc_82ECF030;
loc_82ECF01C:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_82ECF030:
	// ld r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82ECF03C:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r25,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r5,r25,31
	ctx.r5.u64 = ctx.r25.u32 & 0x1;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ecf058
	if (cr6.gt) goto loc_82ECF058;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82ECF058:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecf078
	if (cr6.gt) goto loc_82ECF078;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_82ECF078:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r7,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf0b8
	if (cr6.eq) goto loc_82ECF0B8;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82ECF0B8;
	sub_825749E0(ctx, base);
loc_82ECF0B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ecf114
	if (cr6.eq) goto loc_82ECF114;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ecf0e0
	if (cr6.eq) goto loc_82ECF0E0;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82ECF0E0;
	sub_825749E0(ctx, base);
loc_82ECF0E0:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ecf110
	if (cr6.eq) goto loc_82ECF110;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECF0F4;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecf110
	if (!cr6.eq) goto loc_82ECF110;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECF110;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECF110:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82ECF114:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ecf168
	if (cr6.eq) goto loc_82ECF168;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf134
	if (cr6.eq) goto loc_82ECF134;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x825749e0
	ctx.lr = 0x82ECF134;
	sub_825749E0(ctx, base);
loc_82ECF134:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ecf164
	if (cr6.eq) goto loc_82ECF164;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECF148;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecf164
	if (!cr6.eq) goto loc_82ECF164;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECF164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECF164:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_82ECF168:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf194
	if (cr6.eq) goto loc_82ECF194;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECF178;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecf194
	if (!cr6.eq) goto loc_82ECF194;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECF194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECF194:
	// subf r11,r25,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r25.s64;
	// std r24,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r24.u64);
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, xer);
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, xer);
	// bge cr6,0x82ecf1c4
	if (!cr6.lt) goto loc_82ECF1C4;
	// add r10,r25,r22
	ctx.r10.u64 = ctx.r25.u64 + ctx.r22.u64;
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// b 0x82ecf1e0
	goto loc_82ECF1E0;
loc_82ECF1C4:
	// subf r10,r11,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r11.s64;
	// std r18,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r18.u64);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
loc_82ECF1E0:
	// ld r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r24,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r24.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r25,r20
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r20.u32, xer);
	// bne cr6,0x82ecf03c
	if (!cr6.eq) goto loc_82ECF03C;
	// addic. r19,r19,-1
	xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bgt 0x82eceff4
	if (cr0.gt) goto loc_82ECEFF4;
loc_82ECF1FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECF204"))) PPC_WEAK_FUNC(sub_82ECF204);
PPC_FUNC_IMPL(__imp__sub_82ECF204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF208"))) PPC_WEAK_FUNC(sub_82ECF208);
PPC_FUNC_IMPL(__imp__sub_82ECF208) {
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
	// bl 0x82ece478
	ctx.lr = 0x82ECF218;
	sub_82ECE478(ctx, base);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
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

__attribute__((alias("__imp__sub_82ECF234"))) PPC_WEAK_FUNC(sub_82ECF234);
PPC_FUNC_IMPL(__imp__sub_82ECF234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF238"))) PPC_WEAK_FUNC(sub_82ECF238);
PPC_FUNC_IMPL(__imp__sub_82ECF238) {
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
	// bl 0x82ece478
	ctx.lr = 0x82ECF248;
	sub_82ECE478(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82ecf25c
	if (cr6.eq) goto loc_82ECF25C;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82ecf260
	if (!cr6.eq) goto loc_82ECF260;
loc_82ECF25C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82ECF260:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECF274"))) PPC_WEAK_FUNC(sub_82ECF274);
PPC_FUNC_IMPL(__imp__sub_82ECF274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF278"))) PPC_WEAK_FUNC(sub_82ECF278);
PPC_FUNC_IMPL(__imp__sub_82ECF278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,113(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ecf2b8
	if (!cr6.eq) goto loc_82ECF2B8;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_82ECF290:
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ecf2a4
	if (!cr6.lt) goto loc_82ECF2A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ecf2ac
	goto loc_82ECF2AC;
loc_82ECF2A4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECF2AC:
	// lbz r8,113(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ecf290
	if (cr6.eq) goto loc_82ECF290;
loc_82ECF2B8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ecf2e8
	if (cr6.eq) goto loc_82ECF2E8;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ecf2e8
	if (cr6.lt) goto loc_82ECF2E8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82ECF2E8:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECF2FC"))) PPC_WEAK_FUNC(sub_82ECF2FC);
PPC_FUNC_IMPL(__imp__sub_82ECF2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF300"))) PPC_WEAK_FUNC(sub_82ECF300);
PPC_FUNC_IMPL(__imp__sub_82ECF300) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf3a8
	if (cr6.eq) goto loc_82ECF3A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,1,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf370
	if (cr6.eq) goto loc_82ECF370;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECF354;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecf370
	if (!cr6.eq) goto loc_82ECF370;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECF370;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECF370:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecf394
	if (cr6.gt) goto loc_82ECF394;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82ECF394:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82ecf3a8
	if (!cr0.eq) goto loc_82ECF3A8;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82ECF3A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECF3C0"))) PPC_WEAK_FUNC(sub_82ECF3C0);
PPC_FUNC_IMPL(__imp__sub_82ECF3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECF3C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf438
	if (cr6.eq) goto loc_82ECF438;
loc_82ECF3E0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ecf42c
	if (cr6.eq) goto loc_82ECF42C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecf408
	if (cr6.gt) goto loc_82ECF408;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82ECF408:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82586bd8
	ctx.lr = 0x82ECF418;
	sub_82586BD8(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82ecf42c
	if (!cr0.eq) goto loc_82ECF42C;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_82ECF42C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecf3e0
	if (!cr6.eq) goto loc_82ECF3E0;
loc_82ECF438:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ecf47c
	if (cr6.eq) goto loc_82ECF47C;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82ECF44C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf474
	if (cr6.eq) goto loc_82ECF474;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82ECF474;
	sub_825952B8(ctx, base);
loc_82ECF474:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ecf44c
	if (!cr6.eq) goto loc_82ECF44C;
loc_82ECF47C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ecf494
	if (cr6.eq) goto loc_82ECF494;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82ECF494;
	sub_825952B8(ctx, base);
loc_82ECF494:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECF4A4"))) PPC_WEAK_FUNC(sub_82ECF4A4);
PPC_FUNC_IMPL(__imp__sub_82ECF4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF4A8"))) PPC_WEAK_FUNC(sub_82ECF4A8);
PPC_FUNC_IMPL(__imp__sub_82ECF4A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ECF4B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecf500
	if (!cr6.eq) goto loc_82ECF500;
loc_82ECF4CC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82ece538
	ctx.lr = 0x82ECF4D8;
	sub_82ECE538(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf4ec
	if (cr6.eq) goto loc_82ECF4EC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82ecf4f4
	goto loc_82ECF4F4;
loc_82ECF4EC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82ECF4F4:
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf4cc
	if (cr6.eq) goto loc_82ECF4CC;
loc_82ECF500:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECF50C"))) PPC_WEAK_FUNC(sub_82ECF50C);
PPC_FUNC_IMPL(__imp__sub_82ECF50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF510"))) PPC_WEAK_FUNC(sub_82ECF510);
PPC_FUNC_IMPL(__imp__sub_82ECF510) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf5b4
	if (cr6.eq) goto loc_82ECF5B4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecf554
	if (cr6.gt) goto loc_82ECF554;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82ECF554:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf59c
	if (cr6.eq) goto loc_82ECF59C;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECF580;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecf59c
	if (!cr6.eq) goto loc_82ECF59C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECF59C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECF59C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82ecf5b4
	if (!cr0.eq) goto loc_82ECF5B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82ECF5B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECF5CC"))) PPC_WEAK_FUNC(sub_82ECF5CC);
PPC_FUNC_IMPL(__imp__sub_82ECF5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF5D0"))) PPC_WEAK_FUNC(sub_82ECF5D0);
PPC_FUNC_IMPL(__imp__sub_82ECF5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECF5D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf684
	if (cr6.eq) goto loc_82ECF684;
loc_82ECF5F0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf678
	if (cr6.eq) goto loc_82ECF678;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecf61c
	if (cr6.gt) goto loc_82ECF61C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82ECF61C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf664
	if (cr6.eq) goto loc_82ECF664;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82574a08
	ctx.lr = 0x82ECF648;
	sub_82574A08(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82ecf664
	if (!cr6.eq) goto loc_82ECF664;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ECF664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ECF664:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82ecf678
	if (!cr0.eq) goto loc_82ECF678;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_82ECF678:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ecf5f0
	if (!cr6.eq) goto loc_82ECF5F0;
loc_82ECF684:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ecf6c8
	if (cr6.eq) goto loc_82ECF6C8;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82ECF698:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf6c0
	if (cr6.eq) goto loc_82ECF6C0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82ECF6C0;
	sub_825952B8(ctx, base);
loc_82ECF6C0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ecf698
	if (!cr6.eq) goto loc_82ECF698;
loc_82ECF6C8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ecf6e0
	if (cr6.eq) goto loc_82ECF6E0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82ECF6E0;
	sub_825952B8(ctx, base);
loc_82ECF6E0:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECF6F0"))) PPC_WEAK_FUNC(sub_82ECF6F0);
PPC_FUNC_IMPL(__imp__sub_82ECF6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ECF6F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x82ecf71c
	if (cr6.eq) goto loc_82ECF71C;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82ECF71C:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ecf730
	if (cr6.eq) goto loc_82ECF730;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82ECF730:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r30,r7,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r28,r8,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ecf820
	if (!cr6.lt) goto loc_82ECF820;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82ecf780
	if (cr6.eq) goto loc_82ECF780;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf780
	if (cr6.eq) goto loc_82ECF780;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82ECF780:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// beq cr6,0x82ecf7a8
	if (cr6.eq) goto loc_82ECF7A8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf7a8
	if (cr6.eq) goto loc_82ECF7A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82ECF7A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82ece7a8
	ctx.lr = 0x82ECF7D0;
	sub_82ECE7A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf8c0
	if (cr6.eq) goto loc_82ECF8C0;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_82ECF7DC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf818
	if (cr6.eq) goto loc_82ECF818;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ecf808
	if (cr6.gt) goto loc_82ECF808;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82ECF808:
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82ecf818
	if (!cr0.eq) goto loc_82ECF818;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82ECF818:
	// bdnz 0x82ecf7dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECF7DC;
	// b 0x82ecf8c0
	goto loc_82ECF8C0;
loc_82ECF820:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// beq cr6,0x82ecf844
	if (cr6.eq) goto loc_82ECF844;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf844
	if (cr6.eq) goto loc_82ECF844;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_82ECF844:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82ecf87c
	if (cr6.eq) goto loc_82ECF87C;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf87c
	if (cr6.eq) goto loc_82ECF87C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82ECF87C:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ece880
	ctx.lr = 0x82ECF894;
	sub_82ECE880(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ecf8c0
	if (cr6.eq) goto loc_82ECF8C0;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_82ECF8A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf8bc
	if (cr6.eq) goto loc_82ECF8BC;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bne 0x82ecf8bc
	if (!cr0.eq) goto loc_82ECF8BC;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82ECF8BC:
	// bdnz 0x82ecf8a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ECF8A0;
loc_82ECF8C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf8e4
	if (cr6.eq) goto loc_82ECF8E4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ecf8e4
	if (cr6.eq) goto loc_82ECF8E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82ECF8E4:
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x82ecf914
	if (cr6.eq) goto loc_82ECF914;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf914
	if (cr6.eq) goto loc_82ECF914;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82ECF914:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ECF91C"))) PPC_WEAK_FUNC(sub_82ECF91C);
PPC_FUNC_IMPL(__imp__sub_82ECF91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF920"))) PPC_WEAK_FUNC(sub_82ECF920);
PPC_FUNC_IMPL(__imp__sub_82ECF920) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf94c
	if (cr6.eq) goto loc_82ECF94C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf94c
	if (cr6.eq) goto loc_82ECF94C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECF94C:
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x82ecf960
	if (cr6.eq) goto loc_82ECF960;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82ECF960:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf988
	if (cr6.eq) goto loc_82ECF988;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf988
	if (cr6.eq) goto loc_82ECF988;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECF988:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82ecf99c
	if (cr6.eq) goto loc_82ECF99C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82ECF99C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82ece130
	ctx.lr = 0x82ECF9B4;
	sub_82ECE130(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECF9C4"))) PPC_WEAK_FUNC(sub_82ECF9C4);
PPC_FUNC_IMPL(__imp__sub_82ECF9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ECF9C8"))) PPC_WEAK_FUNC(sub_82ECF9C8);
PPC_FUNC_IMPL(__imp__sub_82ECF9C8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf9f8
	if (cr6.eq) goto loc_82ECF9F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecf9f8
	if (cr6.eq) goto loc_82ECF9F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECF9F8:
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x82ecfa0c
	if (cr6.eq) goto loc_82ECFA0C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82ECFA0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecfa34
	if (cr6.eq) goto loc_82ECFA34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ecfa34
	if (cr6.eq) goto loc_82ECFA34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82ECFA34:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82ecfa48
	if (cr6.eq) goto loc_82ECFA48;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82ECFA48:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82ece958
	ctx.lr = 0x82ECFA5C;
	sub_82ECE958(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ECFA6C"))) PPC_WEAK_FUNC(sub_82ECFA6C);
PPC_FUNC_IMPL(__imp__sub_82ECFA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

