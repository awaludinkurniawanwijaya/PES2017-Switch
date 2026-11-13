#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8347C9E0"))) PPC_WEAK_FUNC(sub_8347C9E0);
PPC_FUNC_IMPL(__imp__sub_8347C9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347C9EC"))) PPC_WEAK_FUNC(sub_8347C9EC);
PPC_FUNC_IMPL(__imp__sub_8347C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347C9F0"))) PPC_WEAK_FUNC(sub_8347C9F0);
PPC_FUNC_IMPL(__imp__sub_8347C9F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347C9FC"))) PPC_WEAK_FUNC(sub_8347C9FC);
PPC_FUNC_IMPL(__imp__sub_8347C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347CA00"))) PPC_WEAK_FUNC(sub_8347CA00);
PPC_FUNC_IMPL(__imp__sub_8347CA00) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,1856
	ctx.r9.s64 = ctx.r11.s64 + 1856;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8347ca68
	if (cr6.eq) goto loc_8347CA68;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8347CA40;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ca60
	if (cr6.eq) goto loc_8347CA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347CA60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347CA60:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8347CA68;
	sub_82595170(ctx, base);
loc_8347CA68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8347c350
	ctx.lr = 0x8347CA70;
	sub_8347C350(ctx, base);
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

__attribute__((alias("__imp__sub_8347CA84"))) PPC_WEAK_FUNC(sub_8347CA84);
PPC_FUNC_IMPL(__imp__sub_8347CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347CA88"))) PPC_WEAK_FUNC(sub_8347CA88);
PPC_FUNC_IMPL(__imp__sub_8347CA88) {
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
	// bl 0x8347ca00
	ctx.lr = 0x8347CAA8;
	sub_8347CA00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cac8
	if (cr6.eq) goto loc_8347CAC8;
	// bl 0x82595188
	ctx.lr = 0x8347CAB8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347CAC8;
	sub_825952B8(ctx, base);
loc_8347CAC8:
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

__attribute__((alias("__imp__sub_8347CAE4"))) PPC_WEAK_FUNC(sub_8347CAE4);
PPC_FUNC_IMPL(__imp__sub_8347CAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347CAE8"))) PPC_WEAK_FUNC(sub_8347CAE8);
PPC_FUNC_IMPL(__imp__sub_8347CAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347CAF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r29,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r29.u8);
	// bl 0x8347c9f0
	ctx.lr = 0x8347CB10;
	sub_8347C9F0(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cb24
	if (cr6.eq) goto loc_8347CB24;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
loc_8347CB24:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cb64
	if (cr6.eq) goto loc_8347CB64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8347CB48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347cb5c
	if (cr6.eq) goto loc_8347CB5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x834e0920
	ctx.lr = 0x8347CB58;
	sub_834E0920(ctx, base);
	// b 0x8347cb60
	goto loc_8347CB60;
loc_8347CB5C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8347CB60:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8347CB64:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cbac
	if (cr6.eq) goto loc_8347CBAC;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8347CB88;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347cba4
	if (cr6.eq) goto loc_8347CBA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x834e0920
	ctx.lr = 0x8347CB98;
	sub_834E0920(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8347CBA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_8347CBAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347CBB4"))) PPC_WEAK_FUNC(sub_8347CBB4);
PPC_FUNC_IMPL(__imp__sub_8347CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347CBB8"))) PPC_WEAK_FUNC(sub_8347CBB8);
PPC_FUNC_IMPL(__imp__sub_8347CBB8) {
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
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x834677d0
	ctx.lr = 0x8347CBD8;
	sub_834677D0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r11,1944
	ctx.r10.s64 = ctx.r11.s64 + 1944;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347CBFC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347cc30
	if (cr6.eq) goto loc_8347CC30;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stb r30,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r30.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,1936
	ctx.r9.s64 = ctx.r10.s64 + 1936;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// b 0x8347cc34
	goto loc_8347CC34;
loc_8347CC30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8347CC34:
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8347cc44
	if (cr6.eq) goto loc_8347CC44;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
loc_8347CC44:
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

__attribute__((alias("__imp__sub_8347CC60"))) PPC_WEAK_FUNC(sub_8347CC60);
PPC_FUNC_IMPL(__imp__sub_8347CC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347CC68;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8347cae8
	ctx.lr = 0x8347CC7C;
	sub_8347CAE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8347c9f0
	ctx.lr = 0x8347CC88;
	sub_8347C9F0(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cc98
	if (cr6.eq) goto loc_8347CC98;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8347CC98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e8cf0
	ctx.lr = 0x8347CCA0;
	sub_833E8CF0(ctx, base);
	// bl 0x833c25d8
	ctx.lr = 0x8347CCA4;
	sub_833C25D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x833e8c98
	ctx.lr = 0x8347CCB0;
	sub_833E8C98(ctx, base);
	// lbz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8347ccd4
	if (cr6.eq) goto loc_8347CCD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x833f2818
	ctx.lr = 0x8347CCC4;
	sub_833F2818(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e8408
	ctx.lr = 0x8347CCCC;
	sub_833E8408(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8347CCD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e8408
	ctx.lr = 0x8347CCDC;
	sub_833E8408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8347c9f0
	ctx.lr = 0x8347CCE8;
	sub_8347C9F0(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347ccf8
	if (cr6.eq) goto loc_8347CCF8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8347CCF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83467a80
	ctx.lr = 0x8347CD08;
	sub_83467A80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347CD10"))) PPC_WEAK_FUNC(sub_8347CD10);
PPC_FUNC_IMPL(__imp__sub_8347CD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347CD18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r11,1936
	ctx.r10.s64 = ctx.r11.s64 + 1936;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8347cd48
	if (cr6.eq) goto loc_8347CD48;
	// bl 0x833c99c0
	ctx.lr = 0x8347CD44;
	sub_833C99C0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8347CD48:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347cd5c
	if (cr6.eq) goto loc_8347CD5C;
	// bl 0x833c99c0
	ctx.lr = 0x8347CD58;
	sub_833C99C0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8347CD5C:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cd7c
	if (cr6.eq) goto loc_8347CD7C;
	// bl 0x82595188
	ctx.lr = 0x8347CD6C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347CD7C;
	sub_825952B8(ctx, base);
loc_8347CD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347CD88"))) PPC_WEAK_FUNC(sub_8347CD88);
PPC_FUNC_IMPL(__imp__sub_8347CD88) {
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
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347CDB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347cdd8
	if (cr6.eq) goto loc_8347CDD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8347cbb8
	ctx.lr = 0x8347CDC4;
	sub_8347CBB8(ctx, base);
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
loc_8347CDD8:
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

__attribute__((alias("__imp__sub_8347CDF0"))) PPC_WEAK_FUNC(sub_8347CDF0);
PPC_FUNC_IMPL(__imp__sub_8347CDF0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,1944
	ctx.r9.s64 = ctx.r11.s64 + 1944;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8347ce58
	if (cr6.eq) goto loc_8347CE58;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8347CE30;
	sub_82595150(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ce50
	if (cr6.eq) goto loc_8347CE50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347CE50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347CE50:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8347CE58;
	sub_82595170(ctx, base);
loc_8347CE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83466658
	ctx.lr = 0x8347CE60;
	sub_83466658(ctx, base);
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

__attribute__((alias("__imp__sub_8347CE74"))) PPC_WEAK_FUNC(sub_8347CE74);
PPC_FUNC_IMPL(__imp__sub_8347CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347CE78"))) PPC_WEAK_FUNC(sub_8347CE78);
PPC_FUNC_IMPL(__imp__sub_8347CE78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8347cc60
	sub_8347CC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347CE84"))) PPC_WEAK_FUNC(sub_8347CE84);
PPC_FUNC_IMPL(__imp__sub_8347CE84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347CE88"))) PPC_WEAK_FUNC(sub_8347CE88);
PPC_FUNC_IMPL(__imp__sub_8347CE88) {
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
	// bl 0x8347cdf0
	ctx.lr = 0x8347CEA8;
	sub_8347CDF0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cec8
	if (cr6.eq) goto loc_8347CEC8;
	// bl 0x82595188
	ctx.lr = 0x8347CEB8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347CEC8;
	sub_825952B8(ctx, base);
loc_8347CEC8:
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

__attribute__((alias("__imp__sub_8347CEE4"))) PPC_WEAK_FUNC(sub_8347CEE4);
PPC_FUNC_IMPL(__imp__sub_8347CEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347CEE8"))) PPC_WEAK_FUNC(sub_8347CEE8);
PPC_FUNC_IMPL(__imp__sub_8347CEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347CEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31744
	ctx.r29.s64 = -2080374784;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8400(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8400);
	// bl 0x8259f070
	ctx.lr = 0x8347CF14;
	sub_8259F070(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cfb4
	if (cr6.eq) goto loc_8347CFB4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347cf88
	if (cr6.eq) goto loc_8347CF88;
	// bl 0x834e6d90
	ctx.lr = 0x8347CF30;
	sub_834E6D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8347cf5c
	if (!cr6.eq) goto loc_8347CF5C;
loc_8347CF3C:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583480
	ctx.lr = 0x8347CF48;
	sub_82583480(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x834e6d90
	ctx.lr = 0x8347CF50;
	sub_834E6D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cf3c
	if (cr6.eq) goto loc_8347CF3C;
loc_8347CF5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x834e20a0
	ctx.lr = 0x8347CF68;
	sub_834E20A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833bd1b8
	ctx.lr = 0x8347CF74;
	sub_833BD1B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8347CF7C;
	sub_833D6D90(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x833c99c0
	ctx.lr = 0x8347CF84;
	sub_833C99C0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_8347CF88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cfb4
	if (cr6.eq) goto loc_8347CFB4;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8259f070
	ctx.lr = 0x8347CFA8;
	sub_8259F070(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83467438
	ctx.lr = 0x8347CFB4;
	sub_83467438(ctx, base);
loc_8347CFB4:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347d060
	if (cr6.eq) goto loc_8347D060;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8400(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8400);
	// bl 0x8259f070
	ctx.lr = 0x8347CFCC;
	sub_8259F070(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347d034
	if (cr6.eq) goto loc_8347D034;
	// bl 0x834e6d90
	ctx.lr = 0x8347CFDC;
	sub_834E6D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8347d008
	if (!cr6.eq) goto loc_8347D008;
loc_8347CFE8:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82583480
	ctx.lr = 0x8347CFF4;
	sub_82583480(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x834e6d90
	ctx.lr = 0x8347CFFC;
	sub_834E6D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347cfe8
	if (cr6.eq) goto loc_8347CFE8;
loc_8347D008:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x834e20a0
	ctx.lr = 0x8347D014;
	sub_834E20A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833bd1b8
	ctx.lr = 0x8347D020;
	sub_833BD1B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833d6d90
	ctx.lr = 0x8347D028;
	sub_833D6D90(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x833c99c0
	ctx.lr = 0x8347D030;
	sub_833C99C0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8347D034:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347d060
	if (cr6.eq) goto loc_8347D060;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8259f070
	ctx.lr = 0x8347D054;
	sub_8259F070(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83467438
	ctx.lr = 0x8347D060;
	sub_83467438(ctx, base);
loc_8347D060:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82574ba8
	ctx.lr = 0x8347D06C;
	sub_82574BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347d0b4
	if (cr6.eq) goto loc_8347D0B4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_8347D07C:
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
	// bne 0x8347d07c
	if (!cr0.eq) goto loc_8347D07C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bgt cr6,0x8347d0b4
	if (cr6.gt) goto loc_8347D0B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347D0B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347D0B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347D0BC"))) PPC_WEAK_FUNC(sub_8347D0BC);
PPC_FUNC_IMPL(__imp__sub_8347D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D0C0"))) PPC_WEAK_FUNC(sub_8347D0C0);
PPC_FUNC_IMPL(__imp__sub_8347D0C0) {
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
	// bl 0x834672f0
	ctx.lr = 0x8347D0D8;
	sub_834672F0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x8347cee8
	ctx.lr = 0x8347D0E0;
	sub_8347CEE8(ctx, base);
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

__attribute__((alias("__imp__sub_8347D0F4"))) PPC_WEAK_FUNC(sub_8347D0F4);
PPC_FUNC_IMPL(__imp__sub_8347D0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D0F8"))) PPC_WEAK_FUNC(sub_8347D0F8);
PPC_FUNC_IMPL(__imp__sub_8347D0F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D104"))) PPC_WEAK_FUNC(sub_8347D104);
PPC_FUNC_IMPL(__imp__sub_8347D104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D108"))) PPC_WEAK_FUNC(sub_8347D108);
PPC_FUNC_IMPL(__imp__sub_8347D108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D114"))) PPC_WEAK_FUNC(sub_8347D114);
PPC_FUNC_IMPL(__imp__sub_8347D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D118"))) PPC_WEAK_FUNC(sub_8347D118);
PPC_FUNC_IMPL(__imp__sub_8347D118) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D124"))) PPC_WEAK_FUNC(sub_8347D124);
PPC_FUNC_IMPL(__imp__sub_8347D124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D128"))) PPC_WEAK_FUNC(sub_8347D128);
PPC_FUNC_IMPL(__imp__sub_8347D128) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,2072
	ctx.r9.s64 = ctx.r11.s64 + 2072;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8347d190
	if (cr6.eq) goto loc_8347D190;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8347D168;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347d188
	if (cr6.eq) goto loc_8347D188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347D188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347D188:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8347D190;
	sub_82595170(ctx, base);
loc_8347D190:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83521f50
	ctx.lr = 0x8347D198;
	sub_83521F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eb270
	ctx.lr = 0x8347D1A0;
	sub_833EB270(ctx, base);
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

__attribute__((alias("__imp__sub_8347D1B4"))) PPC_WEAK_FUNC(sub_8347D1B4);
PPC_FUNC_IMPL(__imp__sub_8347D1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D1B8"))) PPC_WEAK_FUNC(sub_8347D1B8);
PPC_FUNC_IMPL(__imp__sub_8347D1B8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8347d214
	if (cr6.eq) goto loc_8347D214;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x831126c8
	ctx.lr = 0x8347D1F4;
	sub_831126C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831126c8
	ctx.lr = 0x8347D204;
	sub_831126C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831126c8
	ctx.lr = 0x8347D214;
	sub_831126C8(ctx, base);
loc_8347D214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D22C"))) PPC_WEAK_FUNC(sub_8347D22C);
PPC_FUNC_IMPL(__imp__sub_8347D22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D230"))) PPC_WEAK_FUNC(sub_8347D230);
PPC_FUNC_IMPL(__imp__sub_8347D230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347D238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r4,16
	ctx.r29.s64 = ctx.r4.s64 + 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r4,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r4.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8347D264:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347d264
	if (!cr6.eq) goto loc_8347D264;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce980
	ctx.lr = 0x8347D28C;
	sub_831CE980(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8347D298:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347d298
	if (!cr6.eq) goto loc_8347D298;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8347D2D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347d2d0
	if (!cr6.eq) goto loc_8347D2D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce980
	ctx.lr = 0x8347D2F8;
	sub_831CE980(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8347D304:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347d304
	if (!cr6.eq) goto loc_8347D304;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8347D33C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347d33c
	if (!cr6.eq) goto loc_8347D33C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce980
	ctx.lr = 0x8347D360;
	sub_831CE980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347D368"))) PPC_WEAK_FUNC(sub_8347D368);
PPC_FUNC_IMPL(__imp__sub_8347D368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347D370;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r11,2100
	ctx.r11.s64 = ctx.r11.s64 + 2100;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8347D390:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8347d3b4
	if (cr6.eq) goto loc_8347D3B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8347d390
	if (cr6.eq) goto loc_8347D390;
loc_8347D3B4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8347d444
	if (!cr6.eq) goto loc_8347D444;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// bl 0x838fc840
	ctx.lr = 0x8347D3CC;
	sub_838FC840(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8347D3D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347d3d0
	if (!cr6.eq) goto loc_8347D3D0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8347D3F0;
	sub_83522540(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,2092
	ctx.r4.s64 = ctx.r9.s64 + 2092;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83522bf8
	ctx.lr = 0x8347D40C;
	sub_83522BF8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ea878
	ctx.lr = 0x8347D420;
	sub_833EA878(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x8347D430;
	sub_83522040(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83521f50
	ctx.lr = 0x8347D43C;
	sub_83521F50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x8347D444;
	sub_83521F50(ctx, base);
loc_8347D444:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8347D44C;
	sub_83521F50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347D454"))) PPC_WEAK_FUNC(sub_8347D454);
PPC_FUNC_IMPL(__imp__sub_8347D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D458"))) PPC_WEAK_FUNC(sub_8347D458);
PPC_FUNC_IMPL(__imp__sub_8347D458) {
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
	// bl 0x8347d128
	ctx.lr = 0x8347D478;
	sub_8347D128(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347d498
	if (cr6.eq) goto loc_8347D498;
	// bl 0x82595188
	ctx.lr = 0x8347D488;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347D498;
	sub_825952B8(ctx, base);
loc_8347D498:
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

__attribute__((alias("__imp__sub_8347D4B4"))) PPC_WEAK_FUNC(sub_8347D4B4);
PPC_FUNC_IMPL(__imp__sub_8347D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D4B8"))) PPC_WEAK_FUNC(sub_8347D4B8);
PPC_FUNC_IMPL(__imp__sub_8347D4B8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8347D4D8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8347d4d8
	if (!cr6.eq) goto loc_8347D4D8;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8347D500:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8347d500
	if (!cr6.eq) goto loc_8347D500;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8347D528:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8347d528
	if (!cr6.eq) goto loc_8347D528;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r11,19
	ctx.r31.s64 = ctx.r11.s64 + 19;
	// bl 0x833ea398
	ctx.lr = 0x8347D554;
	sub_833EA398(ctx, base);
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_8347D578"))) PPC_WEAK_FUNC(sub_8347D578);
PPC_FUNC_IMPL(__imp__sub_8347D578) {
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
	// bl 0x833ea3a0
	ctx.lr = 0x8347D598;
	sub_833EA3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x8347D5A0;
	sub_833EA398(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8347d230
	ctx.lr = 0x8347D5AC;
	sub_8347D230(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D5C4"))) PPC_WEAK_FUNC(sub_8347D5C4);
PPC_FUNC_IMPL(__imp__sub_8347D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D5C8"))) PPC_WEAK_FUNC(sub_8347D5C8);
PPC_FUNC_IMPL(__imp__sub_8347D5C8) {
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
	// bl 0x833ec4b0
	ctx.lr = 0x8347D5E8;
	sub_833EC4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x8347D5F0;
	sub_833EA398(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8347d1b8
	ctx.lr = 0x8347D5FC;
	sub_8347D1B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D614"))) PPC_WEAK_FUNC(sub_8347D614);
PPC_FUNC_IMPL(__imp__sub_8347D614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D618"))) PPC_WEAK_FUNC(sub_8347D618);
PPC_FUNC_IMPL(__imp__sub_8347D618) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,2120
	ctx.r10.s64 = ctx.r11.s64 + 2120;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83522850
	ctx.lr = 0x8347D640;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8347d67c
	if (!cr6.eq) goto loc_8347D67C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8347D660:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8347d660
	if (!cr0.eq) goto loc_8347D660;
loc_8347D67C:
	// bl 0x83522850
	ctx.lr = 0x8347D680;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347d6b8
	if (!cr6.eq) goto loc_8347D6B8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8347D69C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8347d69c
	if (!cr0.eq) goto loc_8347D69C;
loc_8347D6B8:
	// bl 0x83522850
	ctx.lr = 0x8347D6BC;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347d6f4
	if (!cr6.eq) goto loc_8347D6F4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8347D6D8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8347d6d8
	if (!cr0.eq) goto loc_8347D6D8;
loc_8347D6F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8347D718"))) PPC_WEAK_FUNC(sub_8347D718);
PPC_FUNC_IMPL(__imp__sub_8347D718) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,2120
	ctx.r10.s64 = ctx.r11.s64 + 2120;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83521f50
	ctx.lr = 0x8347D748;
	sub_83521F50(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83521f50
	ctx.lr = 0x8347D750;
	sub_83521F50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83521f50
	ctx.lr = 0x8347D758;
	sub_83521F50(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8347d778
	if (cr6.eq) goto loc_8347D778;
	// bl 0x82595188
	ctx.lr = 0x8347D768;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347D778;
	sub_825952B8(ctx, base);
loc_8347D778:
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

__attribute__((alias("__imp__sub_8347D794"))) PPC_WEAK_FUNC(sub_8347D794);
PPC_FUNC_IMPL(__imp__sub_8347D794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D798"))) PPC_WEAK_FUNC(sub_8347D798);
PPC_FUNC_IMPL(__imp__sub_8347D798) {
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
	// bl 0x833ec430
	ctx.lr = 0x8347D7B4;
	sub_833EC430(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,2072
	ctx.r10.s64 = ctx.r11.s64 + 2072;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x835212a0
	ctx.lr = 0x8347D7C4;
	sub_835212A0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347D7E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347d7f0
	if (cr6.eq) goto loc_8347D7F0;
	// bl 0x8347d618
	ctx.lr = 0x8347D7EC;
	sub_8347D618(ctx, base);
	// b 0x8347d7f4
	goto loc_8347D7F4;
loc_8347D7F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8347D7F4:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,2037
	ctx.r3.s64 = ctx.r11.s64 + 2037;
	// bl 0x83522540
	ctx.lr = 0x8347D808;
	sub_83522540(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83522040
	ctx.lr = 0x8347D818;
	sub_83522040(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83521f50
	ctx.lr = 0x8347D824;
	sub_83521F50(ctx, base);
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

__attribute__((alias("__imp__sub_8347D840"))) PPC_WEAK_FUNC(sub_8347D840);
PPC_FUNC_IMPL(__imp__sub_8347D840) {
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
	// bl 0x833ec430
	ctx.lr = 0x8347D860;
	sub_833EC430(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,2072
	ctx.r10.s64 = ctx.r11.s64 + 2072;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x835212a0
	ctx.lr = 0x8347D870;
	sub_835212A0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347D88C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347d89c
	if (cr6.eq) goto loc_8347D89C;
	// bl 0x8347d618
	ctx.lr = 0x8347D898;
	sub_8347D618(ctx, base);
	// b 0x8347d8a0
	goto loc_8347D8A0;
loc_8347D89C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8347D8A0:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8347D8A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347d8a8
	if (!cr6.eq) goto loc_8347D8A8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x8347D8CC;
	sub_83522540(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83522040
	ctx.lr = 0x8347D8DC;
	sub_83522040(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83521f50
	ctx.lr = 0x8347D8E8;
	sub_83521F50(ctx, base);
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

__attribute__((alias("__imp__sub_8347D904"))) PPC_WEAK_FUNC(sub_8347D904);
PPC_FUNC_IMPL(__imp__sub_8347D904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D908"))) PPC_WEAK_FUNC(sub_8347D908);
PPC_FUNC_IMPL(__imp__sub_8347D908) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347d950
	if (!cr6.eq) goto loc_8347D950;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_8347D934:
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
	// bne 0x8347d934
	if (!cr0.eq) goto loc_8347D934;
loc_8347D950:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8347d368
	ctx.lr = 0x8347D95C;
	sub_8347D368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D96C"))) PPC_WEAK_FUNC(sub_8347D96C);
PPC_FUNC_IMPL(__imp__sub_8347D96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347D970"))) PPC_WEAK_FUNC(sub_8347D970);
PPC_FUNC_IMPL(__imp__sub_8347D970) {
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
	// beq cr6,0x8347d9ac
	if (cr6.eq) goto loc_8347D9AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0fd8
	ctx.lr = 0x8347D9A0;
	sub_831D0FD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8347d9b0
	if (!cr6.eq) goto loc_8347D9B0;
loc_8347D9AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8347D9B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347D9C8"))) PPC_WEAK_FUNC(sub_8347D9C8);
PPC_FUNC_IMPL(__imp__sub_8347D9C8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347da1c
	if (cr6.eq) goto loc_8347DA1C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8347da14
	if (cr6.eq) goto loc_8347DA14;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0fd8
	ctx.lr = 0x8347DA04;
	sub_831D0FD8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8347da18
	if (!cr6.eq) goto loc_8347DA18;
loc_8347DA14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8347DA18:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8347DA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DA34"))) PPC_WEAK_FUNC(sub_8347DA34);
PPC_FUNC_IMPL(__imp__sub_8347DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DA38"))) PPC_WEAK_FUNC(sub_8347DA38);
PPC_FUNC_IMPL(__imp__sub_8347DA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347DA40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347da8c
	if (cr6.eq) goto loc_8347DA8C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8347da80
	if (cr6.eq) goto loc_8347DA80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0fd8
	ctx.lr = 0x8347DA70;
	sub_831D0FD8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8347da84
	if (!cr6.eq) goto loc_8347DA84;
loc_8347DA80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8347DA84:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
loc_8347DA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DA94"))) PPC_WEAK_FUNC(sub_8347DA94);
PPC_FUNC_IMPL(__imp__sub_8347DA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DA98"))) PPC_WEAK_FUNC(sub_8347DA98);
PPC_FUNC_IMPL(__imp__sub_8347DA98) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347daf4
	if (cr6.eq) goto loc_8347DAF4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8347dae4
	if (cr6.eq) goto loc_8347DAE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0fd8
	ctx.lr = 0x8347DAD4;
	sub_831D0FD8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8347dae8
	if (!cr6.eq) goto loc_8347DAE8;
loc_8347DAE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8347DAE8:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
loc_8347DAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DB0C"))) PPC_WEAK_FUNC(sub_8347DB0C);
PPC_FUNC_IMPL(__imp__sub_8347DB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DB10"))) PPC_WEAK_FUNC(sub_8347DB10);
PPC_FUNC_IMPL(__imp__sub_8347DB10) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347db54
	if (cr6.eq) goto loc_8347DB54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831d3650
	ctx.lr = 0x8347DB40;
	sub_831D3650(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8347db54
	if (cr6.eq) goto loc_8347DB54;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8347DB54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DB6C"))) PPC_WEAK_FUNC(sub_8347DB6C);
PPC_FUNC_IMPL(__imp__sub_8347DB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DB70"))) PPC_WEAK_FUNC(sub_8347DB70);
PPC_FUNC_IMPL(__imp__sub_8347DB70) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347dbbc
	if (cr6.eq) goto loc_8347DBBC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8347dbbc
	if (cr0.eq) goto loc_8347DBBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831d3650
	ctx.lr = 0x8347DBA8;
	sub_831D3650(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8347dbbc
	if (cr6.eq) goto loc_8347DBBC;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8347DBBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DBD4"))) PPC_WEAK_FUNC(sub_8347DBD4);
PPC_FUNC_IMPL(__imp__sub_8347DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DBD8"))) PPC_WEAK_FUNC(sub_8347DBD8);
PPC_FUNC_IMPL(__imp__sub_8347DBD8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347dc28
	if (cr6.eq) goto loc_8347DC28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831d3650
	ctx.lr = 0x8347DC08;
	sub_831D3650(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8347dc28
	if (cr6.eq) goto loc_8347DC28;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lfs f0,17280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8347DC28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DC40"))) PPC_WEAK_FUNC(sub_8347DC40);
PPC_FUNC_IMPL(__imp__sub_8347DC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8347dbd8
	sub_8347DBD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DC58"))) PPC_WEAK_FUNC(sub_8347DC58);
PPC_FUNC_IMPL(__imp__sub_8347DC58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DC5C"))) PPC_WEAK_FUNC(sub_8347DC5C);
PPC_FUNC_IMPL(__imp__sub_8347DC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DC60"))) PPC_WEAK_FUNC(sub_8347DC60);
PPC_FUNC_IMPL(__imp__sub_8347DC60) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347dcc0
	if (cr6.eq) goto loc_8347DCC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0fd8
	ctx.lr = 0x8347DC94;
	sub_831D0FD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8347dcc0
	if (cr6.eq) goto loc_8347DCC0;
	// rlwinm r11,r3,16,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF00;
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r3,r6,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8347DCC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DCD8"))) PPC_WEAK_FUNC(sub_8347DCD8);
PPC_FUNC_IMPL(__imp__sub_8347DCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8347dc60
	sub_8347DC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DCF0"))) PPC_WEAK_FUNC(sub_8347DCF0);
PPC_FUNC_IMPL(__imp__sub_8347DCF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DCF4"))) PPC_WEAK_FUNC(sub_8347DCF4);
PPC_FUNC_IMPL(__imp__sub_8347DCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DCF8"))) PPC_WEAK_FUNC(sub_8347DCF8);
PPC_FUNC_IMPL(__imp__sub_8347DCF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347DD00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347dd74
	if (cr6.eq) goto loc_8347DD74;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8347dd74
	if (cr6.eq) goto loc_8347DD74;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8347DD20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3650
	ctx.lr = 0x8347DD2C;
	sub_831D3650(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8347dd68
	if (cr6.eq) goto loc_8347DD68;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8347DD40:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x8347dd58
	if (cr6.eq) goto loc_8347DD58;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x8347dd64
	if (!cr6.eq) goto loc_8347DD64;
loc_8347DD58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8347dd40
	goto loc_8347DD40;
loc_8347DD64:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8347DD68:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8347dd20
	if (!cr0.eq) goto loc_8347DD20;
loc_8347DD74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DD7C"))) PPC_WEAK_FUNC(sub_8347DD7C);
PPC_FUNC_IMPL(__imp__sub_8347DD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DD80"))) PPC_WEAK_FUNC(sub_8347DD80);
PPC_FUNC_IMPL(__imp__sub_8347DD80) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8347dcf8
	sub_8347DCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DD88"))) PPC_WEAK_FUNC(sub_8347DD88);
PPC_FUNC_IMPL(__imp__sub_8347DD88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8347dcf8
	sub_8347DCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DDA0"))) PPC_WEAK_FUNC(sub_8347DDA0);
PPC_FUNC_IMPL(__imp__sub_8347DDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DDA4"))) PPC_WEAK_FUNC(sub_8347DDA4);
PPC_FUNC_IMPL(__imp__sub_8347DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DDA8"))) PPC_WEAK_FUNC(sub_8347DDA8);
PPC_FUNC_IMPL(__imp__sub_8347DDA8) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8347dcf8
	sub_8347DCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DDB0"))) PPC_WEAK_FUNC(sub_8347DDB0);
PPC_FUNC_IMPL(__imp__sub_8347DDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8347dcf8
	sub_8347DCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DDD0"))) PPC_WEAK_FUNC(sub_8347DDD0);
PPC_FUNC_IMPL(__imp__sub_8347DDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DDD4"))) PPC_WEAK_FUNC(sub_8347DDD4);
PPC_FUNC_IMPL(__imp__sub_8347DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DDD8"))) PPC_WEAK_FUNC(sub_8347DDD8);
PPC_FUNC_IMPL(__imp__sub_8347DDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8347dcf8
	sub_8347DCF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DDF0"))) PPC_WEAK_FUNC(sub_8347DDF0);
PPC_FUNC_IMPL(__imp__sub_8347DDF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DDF4"))) PPC_WEAK_FUNC(sub_8347DDF4);
PPC_FUNC_IMPL(__imp__sub_8347DDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DDF8"))) PPC_WEAK_FUNC(sub_8347DDF8);
PPC_FUNC_IMPL(__imp__sub_8347DDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8347DE00;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347dea8
	if (cr6.eq) goto loc_8347DEA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8347DE30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3650
	ctx.lr = 0x8347DE3C;
	sub_831D3650(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8347de78
	if (cr6.eq) goto loc_8347DE78;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8347DE50:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x8347de68
	if (cr6.eq) goto loc_8347DE68;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x8347de74
	if (!cr6.eq) goto loc_8347DE74;
loc_8347DE68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8347de50
	goto loc_8347DE50;
loc_8347DE74:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8347DE78:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8347de30
	if (!cr0.eq) goto loc_8347DE30;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8347DEA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DEB0"))) PPC_WEAK_FUNC(sub_8347DEB0);
PPC_FUNC_IMPL(__imp__sub_8347DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8347DEB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347df6c
	if (cr6.eq) goto loc_8347DF6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r30,4
	ctx.r30.s64 = 4;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8347DEEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3650
	ctx.lr = 0x8347DEF8;
	sub_831D3650(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8347df34
	if (cr6.eq) goto loc_8347DF34;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8347DF0C:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x8347df24
	if (cr6.eq) goto loc_8347DF24;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x8347df30
	if (!cr6.eq) goto loc_8347DF30;
loc_8347DF24:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8347df0c
	goto loc_8347DF0C;
loc_8347DF30:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8347DF34:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8347deec
	if (!cr0.eq) goto loc_8347DEEC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8347DF6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347DF74"))) PPC_WEAK_FUNC(sub_8347DF74);
PPC_FUNC_IMPL(__imp__sub_8347DF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DF78"))) PPC_WEAK_FUNC(sub_8347DF78);
PPC_FUNC_IMPL(__imp__sub_8347DF78) {
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
	// bl 0x833ea398
	ctx.lr = 0x8347DF88;
	sub_833EA398(ctx, base);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347DF9C"))) PPC_WEAK_FUNC(sub_8347DF9C);
PPC_FUNC_IMPL(__imp__sub_8347DF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DFA0"))) PPC_WEAK_FUNC(sub_8347DFA0);
PPC_FUNC_IMPL(__imp__sub_8347DFA0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,2736
	ctx.r10.s64 = ctx.r11.s64 + 2736;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8347dfd0
	if (cr6.eq) goto loc_8347DFD0;
	// bl 0x833c99c0
	ctx.lr = 0x8347DFD0;
	sub_833C99C0(ctx, base);
loc_8347DFD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eb270
	ctx.lr = 0x8347DFD8;
	sub_833EB270(ctx, base);
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

__attribute__((alias("__imp__sub_8347DFEC"))) PPC_WEAK_FUNC(sub_8347DFEC);
PPC_FUNC_IMPL(__imp__sub_8347DFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347DFF0"))) PPC_WEAK_FUNC(sub_8347DFF0);
PPC_FUNC_IMPL(__imp__sub_8347DFF0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e01c
	if (cr6.eq) goto loc_8347E01C;
	// bl 0x833c99c0
	ctx.lr = 0x8347E01C;
	sub_833C99C0(ctx, base);
loc_8347E01C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8347E02C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8347e02c
	if (!cr0.eq) goto loc_8347E02C;
	// lwsync 
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

__attribute__((alias("__imp__sub_8347E068"))) PPC_WEAK_FUNC(sub_8347E068);
PPC_FUNC_IMPL(__imp__sub_8347E068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x833ea3a0
	ctx.lr = 0x8347E088;
	sub_833EA3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x8347E090;
	sub_833EA398(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r11,r3,r30
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_8347E0A4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ea = ctx.r6.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ea = ctx.r6.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8347e0a4
	if (!cr0.eq) goto loc_8347E0A4;
	// lwsync 
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347E0DC"))) PPC_WEAK_FUNC(sub_8347E0DC);
PPC_FUNC_IMPL(__imp__sub_8347E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E0E0"))) PPC_WEAK_FUNC(sub_8347E0E0);
PPC_FUNC_IMPL(__imp__sub_8347E0E0) {
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
	// bl 0x833ec4b0
	ctx.lr = 0x8347E100;
	sub_833EC4B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e110
	if (cr6.eq) goto loc_8347E110;
	// bl 0x833c99c0
	ctx.lr = 0x8347E110;
	sub_833C99C0(ctx, base);
loc_8347E110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x8347E118;
	sub_833EA398(ctx, base);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347E138"))) PPC_WEAK_FUNC(sub_8347E138);
PPC_FUNC_IMPL(__imp__sub_8347E138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r8,296(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r3,r7,r10
	ctx.r3.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347E154"))) PPC_WEAK_FUNC(sub_8347E154);
PPC_FUNC_IMPL(__imp__sub_8347E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E158"))) PPC_WEAK_FUNC(sub_8347E158);
PPC_FUNC_IMPL(__imp__sub_8347E158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,300(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwz r8,296(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// bge cr6,0x8347e190
	if (!cr6.lt) goto loc_8347E190;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8347E190:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347E198"))) PPC_WEAK_FUNC(sub_8347E198);
PPC_FUNC_IMPL(__imp__sub_8347E198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347E1A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,2760
	ctx.r30.s64 = ctx.r11.s64 + 2760;
loc_8347E1B4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E1BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347e1bc
	if (!cr6.eq) goto loc_8347E1BC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83521388
	ctx.lr = 0x8347E1E4;
	sub_83521388(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e20c
	if (!cr6.eq) goto loc_8347E20C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x8347e1b4
	if (cr6.lt) goto loc_8347E1B4;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8347E20C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347E218"))) PPC_WEAK_FUNC(sub_8347E218);
PPC_FUNC_IMPL(__imp__sub_8347E218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8347E220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17804
	ctx.r4.s64 = ctx.r11.s64 + -17804;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x838fc840
	ctx.lr = 0x8347E23C;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-31746
	ctx.r30.s64 = -2080505856;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e390
	if (cr6.eq) goto loc_8347E390;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8347E250:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e250
	if (!cr6.eq) goto loc_8347E250;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r3,-10948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x835213e0
	ctx.lr = 0x8347E278;
	sub_835213E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8347e390
	if (cr6.eq) goto loc_8347E390;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E288:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e288
	if (!cr6.eq) goto loc_8347E288;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-11248(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11248);
	// bl 0x83521388
	ctx.lr = 0x8347E2B4;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8347e2c8
	if (cr6.eq) goto loc_8347E2C8;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8347e390
	goto loc_8347E390;
loc_8347E2C8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E2CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e2cc
	if (!cr6.eq) goto loc_8347E2CC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-11008(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11008);
	// bl 0x83521388
	ctx.lr = 0x8347E2F8;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8347e30c
	if (cr6.eq) goto loc_8347E30C;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x8347e390
	goto loc_8347E390;
loc_8347E30C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E310:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e310
	if (!cr6.eq) goto loc_8347E310;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-10408(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10408);
	// bl 0x83521388
	ctx.lr = 0x8347E33C;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8347e350
	if (cr6.eq) goto loc_8347E350;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x8347e390
	goto loc_8347E390;
loc_8347E350:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E354:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e354
	if (!cr6.eq) goto loc_8347E354;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-10528(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10528);
	// bl 0x83521388
	ctx.lr = 0x8347E380;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8347e390
	if (cr6.eq) goto loc_8347E390;
	// li r28,8
	ctx.r28.s64 = 8;
loc_8347E390:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,7756
	ctx.r4.s64 = ctx.r11.s64 + 7756;
	// bl 0x838fc840
	ctx.lr = 0x8347E3A0;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e4a8
	if (cr6.eq) goto loc_8347E4A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8347E3B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e3b0
	if (!cr6.eq) goto loc_8347E3B0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r3,-10948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x835213e0
	ctx.lr = 0x8347E3D8;
	sub_835213E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8347e4a8
	if (cr6.eq) goto loc_8347E4A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E3E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e3e8
	if (!cr6.eq) goto loc_8347E3E8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-10048(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10048);
	// bl 0x83521388
	ctx.lr = 0x8347E414;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8347e4a8
	if (!cr6.eq) goto loc_8347E4A8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E424:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e424
	if (!cr6.eq) goto loc_8347E424;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-10708(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10708);
	// bl 0x83521388
	ctx.lr = 0x8347E450;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8347e468
	if (cr6.eq) goto loc_8347E468;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8347E468:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8347E46C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e46c
	if (!cr6.eq) goto loc_8347E46C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-9868(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9868);
	// bl 0x83521388
	ctx.lr = 0x8347E498;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r3,r28,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8347e4ac
	if (!cr6.eq) goto loc_8347E4AC;
loc_8347E4A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8347E4AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347E4B4"))) PPC_WEAK_FUNC(sub_8347E4B4);
PPC_FUNC_IMPL(__imp__sub_8347E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E4B8"))) PPC_WEAK_FUNC(sub_8347E4B8);
PPC_FUNC_IMPL(__imp__sub_8347E4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8347E4C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r19,r11,2832
	ctx.r19.s64 = ctx.r11.s64 + 2832;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x8347E4E0;
	sub_838FBBC8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e67c
	if (cr6.eq) goto loc_8347E67C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r23,r11,10060
	ctx.r23.s64 = ctx.r11.s64 + 10060;
	// addi r20,r10,32380
	ctx.r20.s64 = ctx.r10.s64 + 32380;
	// addi r22,r9,11620
	ctx.r22.s64 = ctx.r9.s64 + 11620;
	// addi r21,r8,12088
	ctx.r21.s64 = ctx.r8.s64 + 12088;
loc_8347E50C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8347e664
	if (cr6.eq) goto loc_8347E664;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fc840
	ctx.lr = 0x8347E520;
	sub_838FC840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fc840
	ctx.lr = 0x8347E530;
	sub_838FC840(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8347e664
	if (cr6.eq) goto loc_8347E664;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e664
	if (cr6.eq) goto loc_8347E664;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fc840
	ctx.lr = 0x8347E550;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e578
	if (cr6.eq) goto loc_8347E578;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0fd0
	ctx.lr = 0x8347E568;
	sub_831D0FD0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8347e57c
	if (!cr6.eq) goto loc_8347E57C;
loc_8347E578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8347E57C:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// and r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 & ctx.r11.u64;
	// beq cr6,0x8347e664
	if (cr6.eq) goto loc_8347E664;
	// addi r31,r24,12
	ctx.r31.s64 = ctx.r24.s64 + 12;
loc_8347E598:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8347E59C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e59c
	if (!cr6.eq) goto loc_8347E59C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83521388
	ctx.lr = 0x8347E5C4;
	sub_83521388(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8347e62c
	if (cr6.eq) goto loc_8347E62C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8347E5D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347e5d4
	if (!cr6.eq) goto loc_8347E5D4;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83521388
	ctx.lr = 0x8347E5FC;
	sub_83521388(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8347e62c
	if (cr6.eq) goto loc_8347E62C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x8347e62c
	if (!cr6.lt) goto loc_8347E62C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fc840
	ctx.lr = 0x8347E620;
	sub_838FC840(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8347e640
	if (!cr6.eq) goto loc_8347E640;
loc_8347E62C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// blt cr6,0x8347e598
	if (cr6.lt) goto loc_8347E598;
	// b 0x8347e664
	goto loc_8347E664;
loc_8347E640:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347E664;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347E664:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fbce0
	ctx.lr = 0x8347E670;
	sub_838FBCE0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8347e50c
	if (!cr6.eq) goto loc_8347E50C;
loc_8347E67C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347E684"))) PPC_WEAK_FUNC(sub_8347E684);
PPC_FUNC_IMPL(__imp__sub_8347E684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E688"))) PPC_WEAK_FUNC(sub_8347E688);
PPC_FUNC_IMPL(__imp__sub_8347E688) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,2736
	ctx.r10.s64 = ctx.r11.s64 + 2736;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8347e6c0
	if (cr6.eq) goto loc_8347E6C0;
	// bl 0x833c99c0
	ctx.lr = 0x8347E6C0;
	sub_833C99C0(ctx, base);
loc_8347E6C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eb270
	ctx.lr = 0x8347E6C8;
	sub_833EB270(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347e6e8
	if (cr6.eq) goto loc_8347E6E8;
	// bl 0x82595188
	ctx.lr = 0x8347E6D8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347E6E8;
	sub_825952B8(ctx, base);
loc_8347E6E8:
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

__attribute__((alias("__imp__sub_8347E704"))) PPC_WEAK_FUNC(sub_8347E704);
PPC_FUNC_IMPL(__imp__sub_8347E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E708"))) PPC_WEAK_FUNC(sub_8347E708);
PPC_FUNC_IMPL(__imp__sub_8347E708) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bge cr6,0x8347e768
	if (!cr6.lt) goto loc_8347E768;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// bl 0x833ecc50
	ctx.lr = 0x8347E740;
	sub_833ECC50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8347e768
	if (cr6.eq) goto loc_8347E768;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
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
loc_8347E768:
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

__attribute__((alias("__imp__sub_8347E780"))) PPC_WEAK_FUNC(sub_8347E780);
PPC_FUNC_IMPL(__imp__sub_8347E780) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bge cr6,0x8347e7d8
	if (!cr6.lt) goto loc_8347E7D8;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8347e7d8
	if (cr6.eq) goto loc_8347E7D8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x8347E7BC;
	sub_833E7410(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8347E7D8:
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

__attribute__((alias("__imp__sub_8347E7EC"))) PPC_WEAK_FUNC(sub_8347E7EC);
PPC_FUNC_IMPL(__imp__sub_8347E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E7F0"))) PPC_WEAK_FUNC(sub_8347E7F0);
PPC_FUNC_IMPL(__imp__sub_8347E7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8347E800:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e840
	if (cr6.eq) goto loc_8347E840;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8347e840
	if (!cr6.eq) goto loc_8347E840;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_8347E824:
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
	// bne 0x8347e824
	if (!cr0.eq) goto loc_8347E824;
loc_8347E840:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x8347e800
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8347E800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347E84C"))) PPC_WEAK_FUNC(sub_8347E84C);
PPC_FUNC_IMPL(__imp__sub_8347E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347E850"))) PPC_WEAK_FUNC(sub_8347E850);
PPC_FUNC_IMPL(__imp__sub_8347E850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347E858;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8347e8f0
	if (cr6.eq) goto loc_8347E8F0;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x833ecc50
	ctx.lr = 0x8347E888;
	sub_833ECC50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8347e8e0
	if (cr6.eq) goto loc_8347E8E0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347e8e0
	if (cr6.eq) goto loc_8347E8E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595150
	ctx.lr = 0x8347E8B8;
	sub_82595150(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347e8d8
	if (cr6.eq) goto loc_8347E8D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347E8D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347E8D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595170
	ctx.lr = 0x8347E8E0;
	sub_82595170(ctx, base);
loc_8347E8E0:
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833e3748
	ctx.lr = 0x8347E8EC;
	sub_833E3748(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
loc_8347E8F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347E8F8"))) PPC_WEAK_FUNC(sub_8347E8F8);
PPC_FUNC_IMPL(__imp__sub_8347E8F8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8347e7f0
	ctx.lr = 0x8347E930;
	sub_8347E7F0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347E950"))) PPC_WEAK_FUNC(sub_8347E950);
PPC_FUNC_IMPL(__imp__sub_8347E950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8347E958;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r10,r11,2840
	ctx.r10.s64 = ctx.r11.s64 + 2840;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,17
	ctx.r30.s64 = 17;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,2
	ctx.r26.s64 = 2;
loc_8347E988:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347E9A0;
	sub_82595718(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// lwzu r11,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stb r29,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r29.u8);
	// bge 0x8347e988
	if (!cr0.lt) goto loc_8347E988;
	// stw r28,296(r27)
	PPC_STORE_U32(ctx.r27.u32 + 296, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 300, ctx.r28.u32);
	// stw r28,304(r27)
	PPC_STORE_U32(ctx.r27.u32 + 304, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347E9E8"))) PPC_WEAK_FUNC(sub_8347E9E8);
PPC_FUNC_IMPL(__imp__sub_8347E9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8347E9F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r10,r11,2840
	ctx.r10.s64 = ctx.r11.s64 + 2840;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// li r27,18
	ctx.r27.s64 = 18;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8347EA18:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x8347ea88
	if (cr6.eq) goto loc_8347EA88;
loc_8347EA2C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347ea70
	if (cr6.eq) goto loc_8347EA70;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8347EA48;
	sub_82595150(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ea68
	if (cr6.eq) goto loc_8347EA68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8347EA68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8347EA68:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8347EA70;
	sub_82595170(ctx, base);
loc_8347EA70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x8347EA78;
	sub_8330EE50(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x8347ea2c
	if (!cr6.eq) goto loc_8347EA2C;
loc_8347EA88:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347eacc
	if (!cr6.eq) goto loc_8347EACC;
loc_8347EAA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cd17d8
	ctx.lr = 0x8347EAAC;
	sub_82CD17D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8347EAC0;
	sub_825952B8(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347eaa0
	if (cr6.eq) goto loc_8347EAA0;
loc_8347EACC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// bne 0x8347ea18
	if (!cr0.eq) goto loc_8347EA18;
	// lwz r4,296(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 296);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8347eb0c
	if (cr6.eq) goto loc_8347EB0C;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8347EB0C;
	sub_825952B8(ctx, base);
loc_8347EB0C:
	// stw r26,296(r24)
	PPC_STORE_U32(ctx.r24.u32 + 296, ctx.r26.u32);
	// addi r31,r24,296
	ctx.r31.s64 = ctx.r24.s64 + 296;
	// stw r26,300(r24)
	PPC_STORE_U32(ctx.r24.u32 + 300, ctx.r26.u32);
	// li r30,17
	ctx.r30.s64 = 17;
	// stw r26,304(r24)
	PPC_STORE_U32(ctx.r24.u32 + 304, ctx.r26.u32);
loc_8347EB20:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8347EB38;
	sub_82D0E798(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x8347EB48;
	sub_825952B8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8347eb20
	if (!cr0.lt) goto loc_8347EB20;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,14480
	ctx.r10.s64 = ctx.r11.s64 + 14480;
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347EB64"))) PPC_WEAK_FUNC(sub_8347EB64);
PPC_FUNC_IMPL(__imp__sub_8347EB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347EB68"))) PPC_WEAK_FUNC(sub_8347EB68);
PPC_FUNC_IMPL(__imp__sub_8347EB68) {
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
	// bl 0x8347e9e8
	ctx.lr = 0x8347EB88;
	sub_8347E9E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347eba8
	if (cr6.eq) goto loc_8347EBA8;
	// bl 0x82595188
	ctx.lr = 0x8347EB98;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347EBA8;
	sub_825952B8(ctx, base);
loc_8347EBA8:
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

__attribute__((alias("__imp__sub_8347EBC4"))) PPC_WEAK_FUNC(sub_8347EBC4);
PPC_FUNC_IMPL(__imp__sub_8347EBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347EBC8"))) PPC_WEAK_FUNC(sub_8347EBC8);
PPC_FUNC_IMPL(__imp__sub_8347EBC8) {
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
	// bl 0x833ec430
	ctx.lr = 0x8347EBE0;
	sub_833EC430(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,2736
	ctx.r9.s64 = ctx.r11.s64 + 2736;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,312
	ctx.r4.s64 = 312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347EC04;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ec18
	if (cr6.eq) goto loc_8347EC18;
	// bl 0x8347e950
	ctx.lr = 0x8347EC10;
	sub_8347E950(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8347ec1c
	goto loc_8347EC1C;
loc_8347EC18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8347EC1C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8347EC38"))) PPC_WEAK_FUNC(sub_8347EC38);
PPC_FUNC_IMPL(__imp__sub_8347EC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8347EC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,2864
	ctx.r10.s64 = ctx.r11.s64 + 2864;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ec84
	if (cr6.eq) goto loc_8347EC84;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d465d8
	ctx.lr = 0x8347EC74;
	sub_82D465D8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8347EC84;
	sub_825952B8(ctx, base);
loc_8347EC84:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ecc0
	if (cr6.eq) goto loc_8347ECC0;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d465d8
	ctx.lr = 0x8347ECB0;
	sub_82D465D8(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8347ECC0;
	sub_825952B8(ctx, base);
loc_8347ECC0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347ECD4"))) PPC_WEAK_FUNC(sub_8347ECD4);
PPC_FUNC_IMPL(__imp__sub_8347ECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347ECD8"))) PPC_WEAK_FUNC(sub_8347ECD8);
PPC_FUNC_IMPL(__imp__sub_8347ECD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8347ECE0;
	__savegprlr_24(ctx, base);
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8347efd0
	if (cr6.eq) goto loc_8347EFD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r8,r11,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r10,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x8347ed2c
	if (!cr6.lt) goto loc_8347ED2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8347ED2C;
	sub_831CC150(ctx, base);
loc_8347ED2C:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r11,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8347ee48
	if (!cr6.lt) goto loc_8347EE48;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8347ed5c
	if (!cr6.lt) goto loc_8347ED5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8347ed60
	goto loc_8347ED60;
loc_8347ED5C:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8347ED60:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8347ed6c
	if (!cr6.lt) goto loc_8347ED6C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8347ED6C:
	// li r24,2
	ctx.r24.s64 = 2;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8347ED88;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// srawi r26,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r26.s64 = ctx.r10.s32 >> 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8347e8f8
	ctx.lr = 0x8347EDB0;
	sub_8347E8F8(ctx, base);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x834cd8c0
	ctx.lr = 0x8347EDD0;
	sub_834CD8C0(ctx, base);
	// add r9,r26,r29
	ctx.r9.u64 = ctx.r26.u64 + ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x834cd8c0
	ctx.lr = 0x8347EDF4;
	sub_834CD8C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r11,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x8347ee28
	if (cr6.eq) goto loc_8347EE28;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82d465d8
	ctx.lr = 0x8347EE18;
	sub_82D465D8(ctx, base);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8347EE28;
	sub_825952B8(ctx, base);
loc_8347EE28:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// add r10,r25,r28
	ctx.r10.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8347EE48:
	// subf r11,r30,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r30.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bge cr6,0x8347ef14
	if (!cr6.lt) goto loc_8347EF14;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347ee94
	if (!cr6.eq) goto loc_8347EE94;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r27,8
	ctx.r8.s64 = ctx.r27.s64 + 8;
loc_8347EE78:
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
	// bne 0x8347ee78
	if (!cr0.eq) goto loc_8347EE78;
loc_8347EE94:
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r5,r28,r30
	ctx.r5.u64 = ctx.r28.u64 + ctx.r30.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x834cd8c0
	ctx.lr = 0x8347EEB4;
	sub_834CD8C0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// subf r5,r10,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r10.s64;
	// bl 0x8347e8f8
	ctx.lr = 0x8347EED0;
	sub_8347E8F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r29,r28,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8347ef04
	if (cr6.eq) goto loc_8347EF04;
loc_8347EEE8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x8347EEF4;
	sub_83522040(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x8347eee8
	if (!cr6.eq) goto loc_8347EEE8;
loc_8347EF04:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83521f50
	ctx.lr = 0x8347EF0C;
	sub_83521F50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8347EF14:
	// lwz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8347ef4c
	if (!cr6.eq) goto loc_8347EF4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r26,8
	ctx.r8.s64 = ctx.r26.s64 + 8;
loc_8347EF30:
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
	// bne 0x8347ef30
	if (!cr0.eq) goto loc_8347EF30;
loc_8347EF4C:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x834cd8c0
	ctx.lr = 0x8347EF74;
	sub_834CD8C0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8347ef9c
	if (cr6.eq) goto loc_8347EF9C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8347EF84:
	// lwzu r3,-4(r28)
	ea = -4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwzu r4,-4(r31)
	ea = -4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x83522040
	ctx.lr = 0x8347EF90;
	sub_83522040(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8347ef84
	if (!cr6.eq) goto loc_8347EF84;
loc_8347EF9C:
	// add r29,r27,r30
	ctx.r29.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x8347efc8
	if (cr6.eq) goto loc_8347EFC8;
loc_8347EFAC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83522040
	ctx.lr = 0x8347EFB8;
	sub_83522040(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8347efac
	if (!cr6.eq) goto loc_8347EFAC;
loc_8347EFC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83521f50
	ctx.lr = 0x8347EFD0;
	sub_83521F50(ctx, base);
loc_8347EFD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347EFD8"))) PPC_WEAK_FUNC(sub_8347EFD8);
PPC_FUNC_IMPL(__imp__sub_8347EFD8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,2848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lfs f13,2844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2844);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r10,r7,2864
	ctx.r10.s64 = ctx.r7.s64 + 2864;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,-29136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f10,9008(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9008);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F06C;
	sub_82BEE188(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F08C;
	sub_82BEE188(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F0AC;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F0CC;
	sub_82BEE188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F0F0"))) PPC_WEAK_FUNC(sub_8347F0F0);
PPC_FUNC_IMPL(__imp__sub_8347F0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8347F0F8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r9,2864
	ctx.r8.s64 = ctx.r9.s64 + 2864;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,-7352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7352);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f29,7396(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7396);
	ctx.f29.f64 = double(temp.f32);
	// li r28,2
	ctx.r28.s64 = 2;
	// lfs f30,18044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18044);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-4460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4460);
	ctx.f31.f64 = double(temp.f32);
loc_8347F164:
	// li r7,32
	ctx.r7.s64 = 32;
	// stfs f30,-20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + -20, temp.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stfs f29,-12(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + -12, temp.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stfs f31,-4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stfsu f31,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x8347F18C;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F1AC;
	sub_82BEE188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F1CC;
	sub_82BEE188(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F1EC;
	sub_82BEE188(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stwu r8,16(r29)
	ea = 16 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// bne 0x8347f164
	if (!cr0.eq) goto loc_8347F164;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// lfs f13,5884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5884);
	ctx.f13.f64 = double(temp.f32);
	// li r4,255
	ctx.r4.s64 = 255;
	// lfs f12,-6668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6668);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f0,16100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F23C;
	sub_82BEE188(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F25C;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F27C;
	sub_82BEE188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F29C;
	sub_82BEE188(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8347F2C0"))) PPC_WEAK_FUNC(sub_8347F2C0);
PPC_FUNC_IMPL(__imp__sub_8347F2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347F2C8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lfs f11,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lfs f13,-9980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9980);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f29.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f10,24504(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f31,16088(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16088);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f12,-23848(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23848);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,2864
	ctx.r8.s64 = ctx.r8.s64 + 2864;
	// lfs f9,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f9.f64 = double(temp.f32);
	// li r30,200
	ctx.r30.s64 = 200;
	// lfs f30,-20096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20096);
	ctx.f30.f64 = double(temp.f32);
	// li r29,100
	ctx.r29.s64 = 100;
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stfs f29,52(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stfs f10,124(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stfs f31,144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f9,64(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F3B0;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F3D0;
	sub_82BEE188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F3F0;
	sub_82BEE188(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F410;
	sub_82BEE188(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stfs f30,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f29,96(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f30,104(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F440;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F460;
	sub_82BEE188(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F480;
	sub_82BEE188(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// bl 0x82bee188
	ctx.lr = 0x8347F4A0;
	sub_82BEE188(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347F4C0"))) PPC_WEAK_FUNC(sub_8347F4C0);
PPC_FUNC_IMPL(__imp__sub_8347F4C0) {
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
	// bl 0x8347ec38
	ctx.lr = 0x8347F4E0;
	sub_8347EC38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347f4f8
	if (cr6.eq) goto loc_8347F4F8;
	// bl 0x82416268
	ctx.lr = 0x8347F4F4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8347F4F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F510"))) PPC_WEAK_FUNC(sub_8347F510);
PPC_FUNC_IMPL(__imp__sub_8347F510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f11,-25156(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lfs f10,21812(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21812);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lfs f9,16088(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16088);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,17280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f8,25360(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25360);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r6,r7,2864
	ctx.r6.s64 = ctx.r7.s64 + 2864;
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f12,-26260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f7,2852(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2852);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f6,-7352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7352);
	ctx.f6.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f5,-20096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20096);
	ctx.f5.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f4,20588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20588);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f3,52(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f7,56(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f6,60(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f5,64(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f2,80(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f1,84(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f4,88(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F5EC"))) PPC_WEAK_FUNC(sub_8347F5EC);
PPC_FUNC_IMPL(__imp__sub_8347F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347F5F0"))) PPC_WEAK_FUNC(sub_8347F5F0);
PPC_FUNC_IMPL(__imp__sub_8347F5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,9008
	ctx.r7.s64 = ctx.r11.s64 + 9008;
	// addi r8,r9,2856
	ctx.r8.s64 = ctx.r9.s64 + 2856;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r5,-26260
	ctx.r11.s64 = ctx.r5.s64 + -26260;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// vupkd3d128 v62,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// li r8,80
	ctx.r8.s64 = 80;
	// stvx128 v60,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v59,v63,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// lvlx128 v58,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// stvx128 v57,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// stvx128 v59,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-26260(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,1648
	ctx.r11.s64 = ctx.r3.s64 + 1648;
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// addi r9,r3,356
	ctx.r9.s64 = ctx.r3.s64 + 356;
	// lfs f13,17268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17268);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r3,2032
	ctx.r8.s64 = ctx.r3.s64 + 2032;
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_8347F694:
	// stfs f13,-1916(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + -1916, temp.u32);
	// stfs f13,-1788(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + -1788, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfs f13,-764(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -764, temp.u32);
	// stfs f13,-760(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -760, temp.u32);
	// stfs f0,-508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -508, temp.u32);
	// stfs f13,-504(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -504, temp.u32);
	// stfs f13,-252(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -252, temp.u32);
	// stfs f0,-248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -248, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f13,-124(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + -124, temp.u32);
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8347f694
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8347F694;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F6DC"))) PPC_WEAK_FUNC(sub_8347F6DC);
PPC_FUNC_IMPL(__imp__sub_8347F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347F6E0"))) PPC_WEAK_FUNC(sub_8347F6E0);
PPC_FUNC_IMPL(__imp__sub_8347F6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r7,r9,2864
	ctx.r7.s64 = ctx.r9.s64 + 2864;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f13,-4460(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4460);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r11,75
	ctx.r11.s64 = 75;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// li r8,59
	ctx.r8.s64 = 59;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r6,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// stw r5,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r8,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r8.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// stw r10,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F7A8"))) PPC_WEAK_FUNC(sub_8347F7A8);
PPC_FUNC_IMPL(__imp__sub_8347F7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,9008
	ctx.r8.s64 = ctx.r10.s64 + 9008;
	// addi r7,r9,2856
	ctx.r7.s64 = ctx.r9.s64 + 2856;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r4,r6,-26260
	ctx.r4.s64 = ctx.r6.s64 + -26260;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// vupkd3d128 v62,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	ctx.v62 = vTemp;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// li r8,64
	ctx.r8.s64 = 64;
	// stvx128 v60,r3,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v59,v63,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// li r7,80
	ctx.r7.s64 = 80;
	// stvx128 v57,r3,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r9,-2720
	ctx.r6.s64 = ctx.r9.s64 + -2720;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,112
	ctx.r4.s64 = 112;
	// stvx128 v59,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, ctx.r11.u8);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F844"))) PPC_WEAK_FUNC(sub_8347F844);
PPC_FUNC_IMPL(__imp__sub_8347F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347F848"))) PPC_WEAK_FUNC(sub_8347F848);
PPC_FUNC_IMPL(__imp__sub_8347F848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,9008
	ctx.r6.s64 = ctx.r8.s64 + 9008;
	// addi r5,r7,2856
	ctx.r5.s64 = ctx.r7.s64 + 2856;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// addi r9,r4,-26260
	ctx.r9.s64 = ctx.r4.s64 + -26260;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stvx128 v62,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,3
	ctx.r10.s64 = 3;
	// lvlx128 v61,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// li r9,1
	ctx.r9.s64 = 1;
	// stvx128 v60,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// lfs f13,-26260(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// lfs f12,-7352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -7352);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// lfs f11,2860(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2860);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f12,84(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f13,92(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f11,108(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,116(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f13,152(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
loc_8347F918:
	// stfs f13,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8347f918
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8347F918;
	// li r9,3
	ctx.r9.s64 = 3;
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r3,184
	ctx.r10.s64 = ctx.r3.s64 + 184;
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8347F93C:
	// stfs f13,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8347f93c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8347F93C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8347F950"))) PPC_WEAK_FUNC(sub_8347F950);
PPC_FUNC_IMPL(__imp__sub_8347F950) {
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
	// bl 0x8347ec38
	ctx.lr = 0x8347F970;
	sub_8347EC38(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8347f990
	if (cr6.eq) goto loc_8347F990;
	// bl 0x82595188
	ctx.lr = 0x8347F980;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8347F990;
	sub_825952B8(ctx, base);
loc_8347F990:
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

__attribute__((alias("__imp__sub_8347F9AC"))) PPC_WEAK_FUNC(sub_8347F9AC);
PPC_FUNC_IMPL(__imp__sub_8347F9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347F9B0"))) PPC_WEAK_FUNC(sub_8347F9B0);
PPC_FUNC_IMPL(__imp__sub_8347F9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347F9B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,2864
	ctx.r8.s64 = ctx.r9.s64 + 2864;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f0,-26260(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_8347FA04:
	// stfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8347fa04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8347FA04;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8347FA1C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bee188
	ctx.lr = 0x8347FA34;
	sub_82BEE188(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x8347fa1c
	if (!cr0.eq) goto loc_8347FA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347FA50"))) PPC_WEAK_FUNC(sub_8347FA50);
PPC_FUNC_IMPL(__imp__sub_8347FA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8347FA58;
	__savegprlr_23(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,-4660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4660);
	ctx.f12.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,2864
	ctx.r4.s64 = ctx.r5.s64 + 2864;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f0,-26260(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r11,r3,928
	ctx.r11.s64 = ctx.r3.s64 + 928;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,84(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
loc_8347FAE8:
	// addi r6,r10,133
	ctx.r6.s64 = ctx.r10.s64 + 133;
	// stw r10,-736(r11)
	PPC_STORE_U32(ctx.r11.u32 + -736, ctx.r10.u32);
	// addi r5,r10,153
	ctx.r5.s64 = ctx.r10.s64 + 153;
	// stw r10,-716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -716, ctx.r10.u32);
	// addi r4,r10,138
	ctx.r4.s64 = ctx.r10.s64 + 138;
	// stfs f0,-836(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -836, temp.u32);
	// addi r31,r10,158
	ctx.r31.s64 = ctx.r10.s64 + 158;
	// stfs f13,-816(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -816, temp.u32);
	// addi r30,r10,143
	ctx.r30.s64 = ctx.r10.s64 + 143;
	// stfs f12,-796(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -796, temp.u32);
	// addi r29,r10,163
	ctx.r29.s64 = ctx.r10.s64 + 163;
	// stfs f13,-696(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -696, temp.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,-676(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -676, temp.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,-656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -656, temp.u32);
	// addi r28,r10,173
	ctx.r28.s64 = ctx.r10.s64 + 173;
	// stfs f13,-636(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -636, temp.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,-616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -616, temp.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,-596(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -596, temp.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,-576(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -576, temp.u32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,-556(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -556, temp.u32);
	// addi r27,r10,193
	ctx.r27.s64 = ctx.r10.s64 + 193;
	// stfs f0,-536(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -536, temp.u32);
	// addi r26,r10,178
	ctx.r26.s64 = ctx.r10.s64 + 178;
	// stfs f13,-516(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -516, temp.u32);
	// stfs f13,-496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -496, temp.u32);
	// stw r8,-776(r11)
	PPC_STORE_U32(ctx.r11.u32 + -776, ctx.r8.u32);
	// stfs f13,-476(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -476, temp.u32);
	// stw r8,-756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -756, ctx.r8.u32);
	// stfs f13,-456(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -456, temp.u32);
	// addi r25,r10,198
	ctx.r25.s64 = ctx.r10.s64 + 198;
	// stfs f13,-436(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -436, temp.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,-416(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -416, temp.u32);
	// addi r24,r10,183
	ctx.r24.s64 = ctx.r10.s64 + 183;
	// stfs f0,-336(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -336, temp.u32);
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// addi r23,r10,203
	ctx.r23.s64 = ctx.r10.s64 + 203;
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r31,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r30,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r31,r23,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r29,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f13,-256(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -256, temp.u32);
	// stw r9,-176(r11)
	PPC_STORE_U32(ctx.r11.u32 + -176, ctx.r9.u32);
	// stfsx f0,r28,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r3.u32, temp.u32);
	// stwx r9,r27,r3
	PPC_STORE_U32(ctx.r27.u32 + ctx.r3.u32, ctx.r9.u32);
	// stfsx f0,r6,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, temp.u32);
	// stwx r9,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u32);
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// stfs f12,-16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// stw r7,-96(r11)
	PPC_STORE_U32(ctx.r11.u32 + -96, ctx.r7.u32);
	// stw r7,-76(r11)
	PPC_STORE_U32(ctx.r11.u32 + -76, ctx.r7.u32);
	// stw r8,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r8.u32);
	// stw r7,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r7.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8347fae8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8347FAE8;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347FC00"))) PPC_WEAK_FUNC(sub_8347FC00);
PPC_FUNC_IMPL(__imp__sub_8347FC00) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8347fc40
	if (!cr6.gt) goto loc_8347FC40;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r5,r10,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8347ecd8
	ctx.lr = 0x8347FC3C;
	sub_8347ECD8(ctx, base);
	// b 0x8347fc5c
	goto loc_8347FC5C;
loc_8347FC40:
	// bge cr6,0x8347fc5c
	if (!cr6.lt) goto loc_8347FC5C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x834472d0
	ctx.lr = 0x8347FC5C;
	sub_834472D0(ctx, base);
loc_8347FC5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8347FC64;
	sub_83521F50(ctx, base);
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

__attribute__((alias("__imp__sub_8347FC78"))) PPC_WEAK_FUNC(sub_8347FC78);
PPC_FUNC_IMPL(__imp__sub_8347FC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8347FC80;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347fd14
	if (cr6.eq) goto loc_8347FD14;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bgt cr6,0x8347fd00
	if (cr6.gt) goto loc_8347FD00;
	// bl 0x83522850
	ctx.lr = 0x8347FCB4;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8347fcf0
	if (!cr6.eq) goto loc_8347FCF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_8347FCD4:
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
	// bne 0x8347fcd4
	if (!cr0.eq) goto loc_8347FCD4;
loc_8347FCF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8347fc00
	ctx.lr = 0x8347FD00;
	sub_8347FC00(ctx, base);
loc_8347FD00:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831126c8
	ctx.lr = 0x8347FD14;
	sub_831126C8(ctx, base);
loc_8347FD14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347FD1C"))) PPC_WEAK_FUNC(sub_8347FD1C);
PPC_FUNC_IMPL(__imp__sub_8347FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347FD20"))) PPC_WEAK_FUNC(sub_8347FD20);
PPC_FUNC_IMPL(__imp__sub_8347FD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8347fc78
	sub_8347FC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347FD24"))) PPC_WEAK_FUNC(sub_8347FD24);
PPC_FUNC_IMPL(__imp__sub_8347FD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347FD28"))) PPC_WEAK_FUNC(sub_8347FD28);
PPC_FUNC_IMPL(__imp__sub_8347FD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8347FD30;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347FD58;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347fd6c
	if (cr6.eq) goto loc_8347FD6C;
	// bl 0x8347efd8
	ctx.lr = 0x8347FD64;
	sub_8347EFD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8347fd70
	goto loc_8347FD70;
loc_8347FD6C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8347FD70:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x8347FD84;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x8347FD94;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x8347FDA8;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,2916
	ctx.r3.s64 = ctx.r9.s64 + 2916;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x8347FDD4;
	sub_83522540(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r26,r6,11832
	ctx.r26.s64 = ctx.r6.s64 + 11832;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x8347FDEC;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9456
	ctx.r10.s64 = ctx.r4.s64 + -9456;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r3,r5,2908
	ctx.r3.s64 = ctx.r5.s64 + 2908;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8347FE18;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x8347FE28;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// addi r3,r9,2896
	ctx.r3.s64 = ctx.r9.s64 + 2896;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x8347FE54;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x8347FE64;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r10,r4,-9456
	ctx.r10.s64 = ctx.r4.s64 + -9456;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r3,r5,2884
	ctx.r3.s64 = ctx.r5.s64 + 2884;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8347FE90;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x8347FEA0;
	sub_83522540(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r3,r9,10472
	ctx.r3.s64 = ctx.r9.s64 + 10472;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x8347FECC;
	sub_83522540(ctx, base);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r5,2876
	ctx.r3.s64 = ctx.r5.s64 + 2876;
	// bl 0x83522540
	ctx.lr = 0x8347FEE0;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r4,2868
	ctx.r3.s64 = ctx.r4.s64 + 2868;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,-9000
	ctx.r8.s64 = ctx.r11.s64 + -9000;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// bl 0x83522540
	ctx.lr = 0x8347FF10;
	sub_83522540(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x8347FF20;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// bl 0x833c04d8
	ctx.lr = 0x8347FF48;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x8347FF60;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,236
	ctx.r31.s64 = ctx.r1.s64 + 236;
	// li r30,6
	ctx.r30.s64 = 6;
loc_8347FF68:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x8347FF74;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8347FF7C;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8347ff68
	if (!cr0.lt) goto loc_8347FF68;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8347FF8C"))) PPC_WEAK_FUNC(sub_8347FF8C);
PPC_FUNC_IMPL(__imp__sub_8347FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8347FF90"))) PPC_WEAK_FUNC(sub_8347FF90);
PPC_FUNC_IMPL(__imp__sub_8347FF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8347FF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8347FFC0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8347ffd4
	if (cr6.eq) goto loc_8347FFD4;
	// bl 0x8347f0f0
	ctx.lr = 0x8347FFCC;
	sub_8347F0F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8347ffd8
	goto loc_8347FFD8;
loc_8347FFD4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8347FFD8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8347e850
	ctx.lr = 0x8347FFEC;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x8347FFFC;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x83480014;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r7,r9,-904
	ctx.r7.s64 = ctx.r9.s64 + -904;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83480044;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x8348005C;
	sub_8347E4B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r4,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x8348008c
	if (cr6.lt) goto loc_8348008C;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r5,r10,2960
	ctx.r5.s64 = ctx.r10.s64 + 2960;
	// addi r4,r9,2936
	ctx.r4.s64 = ctx.r9.s64 + 2936;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x83522bf8
	ctx.lr = 0x8348008C;
	sub_83522BF8(ctx, base);
loc_8348008C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83521f50
	ctx.lr = 0x83480094;
	sub_83521F50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83521f50
	ctx.lr = 0x8348009C;
	sub_83521F50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834800A4"))) PPC_WEAK_FUNC(sub_834800A4);
PPC_FUNC_IMPL(__imp__sub_834800A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834800A8"))) PPC_WEAK_FUNC(sub_834800A8);
PPC_FUNC_IMPL(__imp__sub_834800A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x834800B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834800D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x834800ec
	if (cr6.eq) goto loc_834800EC;
	// bl 0x8347f2c0
	ctx.lr = 0x834800E4;
	sub_8347F2C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x834800f0
	goto loc_834800F0;
loc_834800EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_834800F0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8347e850
	ctx.lr = 0x83480104;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83480114;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x8348012C;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r8,r9,-904
	ctx.r8.s64 = ctx.r9.s64 + -904;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83480158;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83480170;
	sub_8347E4B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83521f50
	ctx.lr = 0x83480178;
	sub_83521F50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83521f50
	ctx.lr = 0x83480180;
	sub_83521F50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83480188"))) PPC_WEAK_FUNC(sub_83480188);
PPC_FUNC_IMPL(__imp__sub_83480188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83480190;
	__savegprlr_23(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834801B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x834801cc
	if (cr6.eq) goto loc_834801CC;
	// bl 0x8347f510
	ctx.lr = 0x834801C4;
	sub_8347F510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x834801d0
	goto loc_834801D0;
loc_834801CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_834801D0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8347e850
	ctx.lr = 0x834801E4;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x834801F4;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r28,r10,11628
	ctx.r28.s64 = ctx.r10.s64 + 11628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83522540
	ctx.lr = 0x8348020C;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r8,-736
	ctx.r6.s64 = ctx.r8.s64 + -736;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r9,3144
	ctx.r3.s64 = ctx.r9.s64 + 3144;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x8348023C;
	sub_83522540(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83522540
	ctx.lr = 0x8348024C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r11,r4,-904
	ctx.r11.s64 = ctx.r4.s64 + -904;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r28,r31,20
	ctx.r28.s64 = ctx.r31.s64 + 20;
	// addi r3,r5,3132
	ctx.r3.s64 = ctx.r5.s64 + 3132;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// bl 0x83522540
	ctx.lr = 0x83480278;
	sub_83522540(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r25,r10,3124
	ctx.r25.s64 = ctx.r10.s64 + 3124;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83480290;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-8792
	ctx.r6.s64 = ctx.r8.s64 + -8792;
	// addi r3,r9,3112
	ctx.r3.s64 = ctx.r9.s64 + 3112;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834802BC;
	sub_83522540(ctx, base);
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r24,r5,19980
	ctx.r24.s64 = ctx.r5.s64 + 19980;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x834802D4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,3100
	ctx.r3.s64 = ctx.r4.s64 + 3100;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r11,-9256
	ctx.r9.s64 = ctx.r11.s64 + -9256;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83480300;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83480310;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r5,r7,-9256
	ctx.r5.s64 = ctx.r7.s64 + -9256;
	// addi r3,r8,3084
	ctx.r3.s64 = ctx.r8.s64 + 3084;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x8348033C;
	sub_83522540(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r23,r11,11832
	ctx.r23.s64 = ctx.r11.s64 + 11832;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83522540
	ctx.lr = 0x83480354;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r7,r9,-9456
	ctx.r7.s64 = ctx.r9.s64 + -9456;
	// addi r3,r10,3072
	ctx.r3.s64 = ctx.r10.s64 + 3072;
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83480380;
	sub_83522540(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83480390;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r10,r5,-9456
	ctx.r10.s64 = ctx.r5.s64 + -9456;
	// addi r3,r6,3060
	ctx.r3.s64 = ctx.r6.s64 + 3060;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x834803BC;
	sub_83522540(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83522540
	ctx.lr = 0x834803CC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// addi r3,r9,3048
	ctx.r3.s64 = ctx.r9.s64 + 3048;
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834803F8;
	sub_83522540(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83480408;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r10,r4,-8792
	ctx.r10.s64 = ctx.r4.s64 + -8792;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// addi r3,r5,3036
	ctx.r3.s64 = ctx.r5.s64 + 3036;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83480434;
	sub_83522540(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83480444;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// addi r3,r9,3024
	ctx.r3.s64 = ctx.r9.s64 + 3024;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r7,r31,80
	ctx.r7.s64 = ctx.r31.s64 + 80;
	// addi r6,r8,-9256
	ctx.r6.s64 = ctx.r8.s64 + -9256;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// stw r6,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83480470;
	sub_83522540(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83480480;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r9,r5,-9256
	ctx.r9.s64 = ctx.r5.s64 + -9256;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// addi r3,r11,3008
	ctx.r3.s64 = ctx.r11.s64 + 3008;
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x834804AC;
	sub_83522540(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834804BC;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,2996
	ctx.r3.s64 = ctx.r8.s64 + 2996;
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x834804E8;
	sub_83522540(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834804F8;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// addi r3,r4,2984
	ctx.r3.s64 = ctx.r4.s64 + 2984;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83480524;
	sub_83522540(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83522540
	ctx.lr = 0x83480534;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,25428
	ctx.r3.s64 = ctx.r8.s64 + 25428;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83480560;
	sub_83522540(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83480570;
	sub_83522540(ctx, base);
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r11,r4,-9256
	ctx.r11.s64 = ctx.r4.s64 + -9256;
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83480598;
	sub_833C04D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833c04d8
	ctx.lr = 0x834805A4;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x834805BC;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,396
	ctx.r31.s64 = ctx.r1.s64 + 396;
	// li r30,14
	ctx.r30.s64 = 14;
loc_834805C4:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x834805D0;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x834805D8;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x834805c4
	if (!cr0.lt) goto loc_834805C4;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834805E8"))) PPC_WEAK_FUNC(sub_834805E8);
PPC_FUNC_IMPL(__imp__sub_834805E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x834805F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,2176
	ctx.r4.s64 = 2176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83480618;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8348062c
	if (cr6.eq) goto loc_8348062C;
	// bl 0x8347f5f0
	ctx.lr = 0x83480624;
	sub_8347F5F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83480630
	goto loc_83480630;
loc_8348062C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83480630:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x83480644;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83480654;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83480668;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r8,-904
	ctx.r6.s64 = ctx.r8.s64 + -904;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r9,3360
	ctx.r3.s64 = ctx.r9.s64 + 3360;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x83480698;
	sub_83522540(ctx, base);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r26,r5,3124
	ctx.r26.s64 = ctx.r5.s64 + 3124;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x834806B0;
	sub_83522540(ctx, base);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r3,r4,25404
	ctx.r3.s64 = ctx.r4.s64 + 25404;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r11,-8712
	ctx.r9.s64 = ctx.r11.s64 + -8712;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x834806DC;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x834806EC;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r6,r31,64
	ctx.r6.s64 = ctx.r31.s64 + 64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r5,r7,-8712
	ctx.r5.s64 = ctx.r7.s64 + -8712;
	// addi r3,r8,3352
	ctx.r3.s64 = ctx.r8.s64 + 3352;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83480718;
	sub_83522540(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r26,r11,3344
	ctx.r26.s64 = ctx.r11.s64 + 3344;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83480730;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r7,r9,-8528
	ctx.r7.s64 = ctx.r9.s64 + -8528;
	// addi r3,r10,3332
	ctx.r3.s64 = ctx.r10.s64 + 3332;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x8348075C;
	sub_83522540(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r25,r6,11832
	ctx.r25.s64 = ctx.r6.s64 + 11832;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83480774;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r10,r4,-9456
	ctx.r10.s64 = ctx.r4.s64 + -9456;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r3,r5,3320
	ctx.r3.s64 = ctx.r5.s64 + 3320;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x834807A0;
	sub_83522540(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r24,r9,19980
	ctx.r24.s64 = ctx.r9.s64 + 19980;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x834807B8;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r5,r7,-9256
	ctx.r5.s64 = ctx.r7.s64 + -9256;
	// addi r3,r8,3308
	ctx.r3.s64 = ctx.r8.s64 + 3308;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x834807E4;
	sub_83522540(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x834807F4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r3,r4,3300
	ctx.r3.s64 = ctx.r4.s64 + 3300;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// addi r9,r11,-9256
	ctx.r9.s64 = ctx.r11.s64 + -9256;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83480820;
	sub_83522540(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83480830;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r6,r31,108
	ctx.r6.s64 = ctx.r31.s64 + 108;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,3288
	ctx.r3.s64 = ctx.r8.s64 + 3288;
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x8348085C;
	sub_83522540(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r23,r11,-29388
	ctx.r23.s64 = ctx.r11.s64 + -29388;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83522540
	ctx.lr = 0x83480874;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r7,r9,-9784
	ctx.r7.s64 = ctx.r9.s64 + -9784;
	// addi r3,r10,3272
	ctx.r3.s64 = ctx.r10.s64 + 3272;
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x834808A0;
	sub_83522540(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834808B0;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// addi r10,r5,-9360
	ctx.r10.s64 = ctx.r5.s64 + -9360;
	// li r30,32
	ctx.r30.s64 = 32;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// addi r3,r6,3260
	ctx.r3.s64 = ctx.r6.s64 + 3260;
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// bl 0x83522540
	ctx.lr = 0x834808E0;
	sub_83522540(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x834808F0;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r7,r31,244
	ctx.r7.s64 = ctx.r31.s64 + 244;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r6,r9,-9360
	ctx.r6.s64 = ctx.r9.s64 + -9360;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r7,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// addi r3,r8,3248
	ctx.r3.s64 = ctx.r8.s64 + 3248;
	// stw r6,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x8348091C;
	sub_83522540(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x8348092C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// addi r10,r4,-8744
	ctx.r10.s64 = ctx.r4.s64 + -8744;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r11,r31,372
	ctx.r11.s64 = ctx.r31.s64 + 372;
	// addi r3,r5,3236
	ctx.r3.s64 = ctx.r5.s64 + 3236;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83480958;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r26,r9,3228
	ctx.r26.s64 = ctx.r9.s64 + 3228;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83480970;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// addi r6,r31,884
	ctx.r6.s64 = ctx.r31.s64 + 884;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r5,r7,-8824
	ctx.r5.s64 = ctx.r7.s64 + -8824;
	// addi r3,r8,3216
	ctx.r3.s64 = ctx.r8.s64 + 3216;
	// stw r6,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x8348099C;
	sub_83522540(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83522540
	ctx.lr = 0x834809AC;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// addi r10,r31,1140
	ctx.r10.s64 = ctx.r31.s64 + 1140;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r3,r4,3204
	ctx.r3.s64 = ctx.r4.s64 + 3204;
	// addi r9,r11,-8824
	ctx.r9.s64 = ctx.r11.s64 + -8824;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x834809D8;
	sub_83522540(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83522540
	ctx.lr = 0x834809E8;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// addi r3,r8,3192
	ctx.r3.s64 = ctx.r8.s64 + 3192;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r6,r31,1396
	ctx.r6.s64 = ctx.r31.s64 + 1396;
	// addi r5,r7,-8824
	ctx.r5.s64 = ctx.r7.s64 + -8824;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r6,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r6.u32);
	// stw r5,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83480A14;
	sub_83522540(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83480A24;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// addi r3,r4,3176
	ctx.r3.s64 = ctx.r4.s64 + 3176;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r10,r31,1652
	ctx.r10.s64 = ctx.r31.s64 + 1652;
	// addi r9,r11,-8824
	ctx.r9.s64 = ctx.r11.s64 + -8824;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// stw r9,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83480A50;
	sub_83522540(ctx, base);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83480A60;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// addi r6,r31,1908
	ctx.r6.s64 = ctx.r31.s64 + 1908;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r5,r8,-9152
	ctx.r5.s64 = ctx.r8.s64 + -9152;
	// addi r3,r7,3156
	ctx.r3.s64 = ctx.r7.s64 + 3156;
	// stw r6,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r6.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r5,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83480A8C;
	sub_83522540(ctx, base);
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83522540
	ctx.lr = 0x83480A9C;
	sub_83522540(ctx, base);
	// stw r3,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r3.u32);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// addi r3,r31,2036
	ctx.r3.s64 = ctx.r31.s64 + 2036;
	// addi r11,r4,-9672
	ctx.r11.s64 = ctx.r4.s64 + -9672;
	// stw r3,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83480AC4;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83480ADC;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,456
	ctx.r31.s64 = ctx.r1.s64 + 456;
	// li r30,17
	ctx.r30.s64 = 17;
loc_83480AE4:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83480AF0;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83480AF8;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83480ae4
	if (!cr0.lt) goto loc_83480AE4;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83480B08"))) PPC_WEAK_FUNC(sub_83480B08);
PPC_FUNC_IMPL(__imp__sub_83480B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83480B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83480B38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83480b78
	if (cr6.eq) goto loc_83480B78;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2864
	ctx.r9.s64 = ctx.r10.s64 + 2864;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// b 0x83480b7c
	goto loc_83480B7C;
loc_83480B78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83480B7C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e850
	ctx.lr = 0x83480B90;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83480BA0;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83480BB4;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,3368
	ctx.r3.s64 = ctx.r9.s64 + 3368;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x83522540
	ctx.lr = 0x83480BE0;
	sub_83522540(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r6,-29388
	ctx.r3.s64 = ctx.r6.s64 + -29388;
	// bl 0x83522540
	ctx.lr = 0x83480BF4;
	sub_83522540(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r11,r5,-9784
	ctx.r11.s64 = ctx.r5.s64 + -9784;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83480C1C;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83480C34;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83480C3C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83480C48;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83480C50;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83480c3c
	if (!cr0.lt) goto loc_83480C3C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83480C60"))) PPC_WEAK_FUNC(sub_83480C60);
PPC_FUNC_IMPL(__imp__sub_83480C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83480C68;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,148
	ctx.r4.s64 = 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83480C90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83480ca4
	if (cr6.eq) goto loc_83480CA4;
	// bl 0x8347f6e0
	ctx.lr = 0x83480C9C;
	sub_8347F6E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83480ca8
	goto loc_83480CA8;
loc_83480CA4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83480CA8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x83480CBC;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83480CCC;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83480CE0;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-736
	ctx.r7.s64 = ctx.r8.s64 + -736;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r9,3424
	ctx.r3.s64 = ctx.r9.s64 + 3424;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x83480D10;
	sub_83522540(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r25,r6,-29388
	ctx.r25.s64 = ctx.r6.s64 + -29388;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83480D28;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9672
	ctx.r10.s64 = ctx.r4.s64 + -9672;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 + 132;
	// addi r3,r5,3416
	ctx.r3.s64 = ctx.r5.s64 + 3416;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83480D54;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r24,r9,3124
	ctx.r24.s64 = ctx.r9.s64 + 3124;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83480D6C;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r5,r7,-8784
	ctx.r5.s64 = ctx.r7.s64 + -8784;
	// addi r3,r8,3408
	ctx.r3.s64 = ctx.r8.s64 + 3408;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83480D98;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83480DA8;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,3396
	ctx.r3.s64 = ctx.r4.s64 + 3396;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// addi r9,r11,-8784
	ctx.r9.s64 = ctx.r11.s64 + -8784;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83480DD4;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83480DE4;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r6,r31,108
	ctx.r6.s64 = ctx.r31.s64 + 108;
	// addi r5,r7,-9672
	ctx.r5.s64 = ctx.r7.s64 + -9672;
	// addi r3,r8,3388
	ctx.r3.s64 = ctx.r8.s64 + 3388;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83480E10;
	sub_83522540(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83480E20;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r4,3376
	ctx.r3.s64 = ctx.r4.s64 + 3376;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// addi r9,r11,-9672
	ctx.r9.s64 = ctx.r11.s64 + -9672;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83480E4C;
	sub_83522540(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r8,11832
	ctx.r3.s64 = ctx.r8.s64 + 11832;
	// bl 0x83522540
	ctx.lr = 0x83480E60;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83480E88;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83480EA0;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,236
	ctx.r31.s64 = ctx.r1.s64 + 236;
	// li r30,6
	ctx.r30.s64 = 6;
loc_83480EA8:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83480EB4;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83480EBC;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83480ea8
	if (!cr0.lt) goto loc_83480EA8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83480ECC"))) PPC_WEAK_FUNC(sub_83480ECC);
PPC_FUNC_IMPL(__imp__sub_83480ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83480ED0"))) PPC_WEAK_FUNC(sub_83480ED0);
PPC_FUNC_IMPL(__imp__sub_83480ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83480ED8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83480F00;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83480f4c
	if (cr6.eq) goto loc_83480F4C;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2864
	ctx.r9.s64 = ctx.r10.s64 + 2864;
	// li r8,250
	ctx.r8.s64 = 250;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// b 0x83480f50
	goto loc_83480F50;
loc_83480F4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83480F50:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x83480F64;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83480F74;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83480F88;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,3424
	ctx.r3.s64 = ctx.r9.s64 + 3424;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x83480FB4;
	sub_83522540(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r26,r6,-29388
	ctx.r26.s64 = ctx.r6.s64 + -29388;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83480FCC;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r3,r5,3396
	ctx.r3.s64 = ctx.r5.s64 + 3396;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83480FF8;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83481008;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83481034;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83481044;
	sub_83522540(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r11,r5,-9784
	ctx.r11.s64 = ctx.r5.s64 + -9784;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x8348106C;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83481084;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8348108C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83481098;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x834810A0;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8348108c
	if (!cr0.lt) goto loc_8348108C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834810B0"))) PPC_WEAK_FUNC(sub_834810B0);
PPC_FUNC_IMPL(__imp__sub_834810B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x834810B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834810E0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83481148
	if (cr6.eq) goto loc_83481148;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,2864
	ctx.r7.s64 = ctx.r8.s64 + 2864;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r4,1500
	ctx.r4.s64 = 1500;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f13,23372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// b 0x8348114c
	goto loc_8348114C;
loc_83481148:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8348114C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e850
	ctx.lr = 0x83481160;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,3396
	ctx.r3.s64 = ctx.r11.s64 + 3396;
	// bl 0x83522540
	ctx.lr = 0x83481170;
	sub_83522540(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r27,r10,-29388
	ctx.r27.s64 = ctx.r10.s64 + -29388;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x83481188;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834811B4;
	sub_83522540(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x834811C4;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r3,r5,3424
	ctx.r3.s64 = ctx.r5.s64 + 3424;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x834811F0;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x83481200;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3452
	ctx.r3.s64 = ctx.r9.s64 + 3452;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x8348122C;
	sub_83522540(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r27,r5,11832
	ctx.r27.s64 = ctx.r5.s64 + 11832;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x83481244;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,3436
	ctx.r3.s64 = ctx.r4.s64 + 3436;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481270;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x83481280;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x834812B4;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,196
	ctx.r31.s64 = ctx.r1.s64 + 196;
	// li r30,4
	ctx.r30.s64 = 4;
loc_834812BC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x834812C8;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x834812D0;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x834812bc
	if (!cr0.lt) goto loc_834812BC;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834812E0"))) PPC_WEAK_FUNC(sub_834812E0);
PPC_FUNC_IMPL(__imp__sub_834812E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x834812E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83481310;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83481374
	if (cr6.eq) goto loc_83481374;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,2864
	ctx.r7.s64 = ctx.r8.s64 + 2864;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r5,3000
	ctx.r5.s64 = 3000;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f13,11768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11768);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// b 0x83481378
	goto loc_83481378;
loc_83481374:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83481378:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e850
	ctx.lr = 0x8348138C;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,3396
	ctx.r3.s64 = ctx.r11.s64 + 3396;
	// bl 0x83522540
	ctx.lr = 0x8348139C;
	sub_83522540(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r27,r10,-29388
	ctx.r27.s64 = ctx.r10.s64 + -29388;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x834813B4;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834813E0;
	sub_83522540(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x834813F0;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r3,r5,3424
	ctx.r3.s64 = ctx.r5.s64 + 3424;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8348141C;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x8348142C;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3452
	ctx.r3.s64 = ctx.r9.s64 + 3452;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83481458;
	sub_83522540(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r27,r5,11832
	ctx.r27.s64 = ctx.r5.s64 + 11832;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x83481470;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,3436
	ctx.r3.s64 = ctx.r4.s64 + 3436;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x8348149C;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x834814AC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x834814E0;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,196
	ctx.r31.s64 = ctx.r1.s64 + 196;
	// li r30,4
	ctx.r30.s64 = 4;
loc_834814E8:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x834814F4;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x834814FC;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x834814e8
	if (!cr0.lt) goto loc_834814E8;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8348150C"))) PPC_WEAK_FUNC(sub_8348150C);
PPC_FUNC_IMPL(__imp__sub_8348150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83481510"))) PPC_WEAK_FUNC(sub_83481510);
PPC_FUNC_IMPL(__imp__sub_83481510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83481518;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83481540;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83481588
	if (cr6.eq) goto loc_83481588;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2864
	ctx.r9.s64 = ctx.r10.s64 + 2864;
	// li r8,1600
	ctx.r8.s64 = 1600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// b 0x8348158c
	goto loc_8348158C;
loc_83481588:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8348158C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e850
	ctx.lr = 0x834815A0;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r11,3396
	ctx.r3.s64 = ctx.r11.s64 + 3396;
	// bl 0x83522540
	ctx.lr = 0x834815B0;
	sub_83522540(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r27,r10,-29388
	ctx.r27.s64 = ctx.r10.s64 + -29388;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x834815C8;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r31,36
	ctx.r7.s64 = ctx.r31.s64 + 36;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3388
	ctx.r3.s64 = ctx.r9.s64 + 3388;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834815F4;
	sub_83522540(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83481604;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// addi r3,r5,3424
	ctx.r3.s64 = ctx.r5.s64 + 3424;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83481630;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83522540
	ctx.lr = 0x83481640;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r6,r9,-9784
	ctx.r6.s64 = ctx.r9.s64 + -9784;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83481674;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,156
	ctx.r31.s64 = ctx.r1.s64 + 156;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8348167C:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83481688;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83481690;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x8348167c
	if (!cr0.lt) goto loc_8348167C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834816A0"))) PPC_WEAK_FUNC(sub_834816A0);
PPC_FUNC_IMPL(__imp__sub_834816A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x834816A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834816D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x834816e4
	if (cr6.eq) goto loc_834816E4;
	// bl 0x8347f7a8
	ctx.lr = 0x834816DC;
	sub_8347F7A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x834816e8
	goto loc_834816E8;
loc_834816E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_834816E8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x834816FC;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x8348170C;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83481720;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,3488
	ctx.r3.s64 = ctx.r9.s64 + 3488;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x8348174C;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r26,r6,3124
	ctx.r26.s64 = ctx.r6.s64 + 3124;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83481764;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-8712
	ctx.r10.s64 = ctx.r4.s64 + -8712;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r3,r5,25404
	ctx.r3.s64 = ctx.r5.s64 + 25404;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83481790;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x834817A0;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-8712
	ctx.r6.s64 = ctx.r8.s64 + -8712;
	// addi r3,r9,3352
	ctx.r3.s64 = ctx.r9.s64 + 3352;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834817CC;
	sub_83522540(ctx, base);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r25,r5,3344
	ctx.r25.s64 = ctx.r5.s64 + 3344;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x834817E4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,3360
	ctx.r3.s64 = ctx.r4.s64 + 3360;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
	// addi r9,r11,-8528
	ctx.r9.s64 = ctx.r11.s64 + -8528;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481810;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83481820;
	sub_83522540(ctx, base);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r5,r7,-8712
	ctx.r5.s64 = ctx.r7.s64 + -8712;
	// addi r3,r8,26784
	ctx.r3.s64 = ctx.r8.s64 + 26784;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x8348184C;
	sub_83522540(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83522540
	ctx.lr = 0x8348185C;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r4,3480
	ctx.r3.s64 = ctx.r4.s64 + 3480;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// addi r9,r11,-8528
	ctx.r9.s64 = ctx.r11.s64 + -8528;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481888;
	sub_83522540(ctx, base);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r8,-29388
	ctx.r3.s64 = ctx.r8.s64 + -29388;
	// bl 0x83522540
	ctx.lr = 0x8348189C;
	sub_83522540(ctx, base);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r11,r6,-9576
	ctx.r11.s64 = ctx.r6.s64 + -9576;
	// addi r3,r7,3468
	ctx.r3.s64 = ctx.r7.s64 + 3468;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x834818C8;
	sub_83522540(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r10,19980
	ctx.r3.s64 = ctx.r10.s64 + 19980;
	// bl 0x83522540
	ctx.lr = 0x834818DC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r7,r31,132
	ctx.r7.s64 = ctx.r31.s64 + 132;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// addi r6,r8,-9256
	ctx.r6.s64 = ctx.r8.s64 + -9256;
	// addi r3,r9,3008
	ctx.r3.s64 = ctx.r9.s64 + 3008;
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83481908;
	sub_83522540(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r5,11832
	ctx.r3.s64 = ctx.r5.s64 + 11832;
	// bl 0x83522540
	ctx.lr = 0x8348191C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r10,r4,-9456
	ctx.r10.s64 = ctx.r4.s64 + -9456;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83481944;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,9
	ctx.r6.s64 = 9;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x8348195C;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,276
	ctx.r31.s64 = ctx.r1.s64 + 276;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83481964:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83481970;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83481978;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83481964
	if (!cr0.lt) goto loc_83481964;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83481988"))) PPC_WEAK_FUNC(sub_83481988);
PPC_FUNC_IMPL(__imp__sub_83481988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83481990;
	__savegprlr_24(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,224
	ctx.r4.s64 = 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834819B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x834819cc
	if (cr6.eq) goto loc_834819CC;
	// bl 0x8347f848
	ctx.lr = 0x834819C4;
	sub_8347F848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x834819d0
	goto loc_834819D0;
loc_834819CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_834819D0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x834819E4;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x834819F4;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83481A08;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,3732
	ctx.r3.s64 = ctx.r9.s64 + 3732;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x83481A34;
	sub_83522540(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r26,r6,-29388
	ctx.r26.s64 = ctx.r6.s64 + -29388;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83481A4C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r3,r5,3720
	ctx.r3.s64 = ctx.r5.s64 + 3720;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83481A78;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83481A88;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,204
	ctx.r7.s64 = ctx.r31.s64 + 204;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-9784
	ctx.r6.s64 = ctx.r8.s64 + -9784;
	// addi r3,r9,3704
	ctx.r3.s64 = ctx.r9.s64 + 3704;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83481AB4;
	sub_83522540(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r25,r5,11832
	ctx.r25.s64 = ctx.r5.s64 + 11832;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83481ACC;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,3700
	ctx.r3.s64 = ctx.r4.s64 + 3700;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481AF8;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r24,r8,3124
	ctx.r24.s64 = ctx.r8.s64 + 3124;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83481B10;
	sub_83522540(ctx, base);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r11,r6,-8712
	ctx.r11.s64 = ctx.r6.s64 + -8712;
	// addi r3,r7,-17804
	ctx.r3.s64 = ctx.r7.s64 + -17804;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83481B3C;
	sub_83522540(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83522540
	ctx.lr = 0x83481B4C;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r7,r9,-8712
	ctx.r7.s64 = ctx.r9.s64 + -8712;
	// addi r3,r10,3692
	ctx.r3.s64 = ctx.r10.s64 + 3692;
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83481B78;
	sub_83522540(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r24,r6,19980
	ctx.r24.s64 = ctx.r6.s64 + 19980;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83481B90;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r10,r4,-9256
	ctx.r10.s64 = ctx.r4.s64 + -9256;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r3,r5,3684
	ctx.r3.s64 = ctx.r5.s64 + 3684;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83481BBC;
	sub_83522540(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481BCC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// addi r3,r9,3672
	ctx.r3.s64 = ctx.r9.s64 + 3672;
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83481BF8;
	sub_83522540(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83481C08;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r10,r4,-9456
	ctx.r10.s64 = ctx.r4.s64 + -9456;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// addi r3,r5,3656
	ctx.r3.s64 = ctx.r5.s64 + 3656;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83481C34;
	sub_83522540(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481C44;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// addi r3,r9,3644
	ctx.r3.s64 = ctx.r9.s64 + 3644;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// stw r6,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83481C70;
	sub_83522540(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83481C80;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r9,r5,-9784
	ctx.r9.s64 = ctx.r5.s64 + -9784;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// addi r3,r11,3636
	ctx.r3.s64 = ctx.r11.s64 + 3636;
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481CAC;
	sub_83522540(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481CBC;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// addi r6,r31,100
	ctx.r6.s64 = ctx.r31.s64 + 100;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,3624
	ctx.r3.s64 = ctx.r8.s64 + 3624;
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83481CE8;
	sub_83522540(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481CF8;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// addi r3,r4,3616
	ctx.r3.s64 = ctx.r4.s64 + 3616;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481D24;
	sub_83522540(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83481D34;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// addi r6,r31,108
	ctx.r6.s64 = ctx.r31.s64 + 108;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,25404
	ctx.r3.s64 = ctx.r8.s64 + 25404;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83481D60;
	sub_83522540(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481D70;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// addi r3,r4,3604
	ctx.r3.s64 = ctx.r4.s64 + 3604;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r10,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481D9C;
	sub_83522540(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481DAC;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// addi r6,r31,116
	ctx.r6.s64 = ctx.r31.s64 + 116;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,3588
	ctx.r3.s64 = ctx.r8.s64 + 3588;
	// stw r6,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r6.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r5,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83481DD8;
	sub_83522540(ctx, base);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83481DE8;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// addi r9,r4,-9456
	ctx.r9.s64 = ctx.r4.s64 + -9456;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// addi r3,r11,-19204
	ctx.r3.s64 = ctx.r11.s64 + -19204;
	// stw r9,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r9.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r10,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x83481E14;
	sub_83522540(ctx, base);
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481E24;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r3.u32);
	// addi r6,r31,124
	ctx.r6.s64 = ctx.r31.s64 + 124;
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// addi r5,r7,-9256
	ctx.r5.s64 = ctx.r7.s64 + -9256;
	// addi r3,r8,3572
	ctx.r3.s64 = ctx.r8.s64 + 3572;
	// stw r6,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r5,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83481E50;
	sub_83522540(ctx, base);
	// stw r3,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481E60;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// addi r3,r4,3556
	ctx.r3.s64 = ctx.r4.s64 + 3556;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// addi r9,r11,-9256
	ctx.r9.s64 = ctx.r11.s64 + -9256;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r10,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// stw r9,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83481E8C;
	sub_83522540(ctx, base);
	// stw r3,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83481E9C;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r3.u32);
	// addi r6,r31,132
	ctx.r6.s64 = ctx.r31.s64 + 132;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// addi r5,r7,-9256
	ctx.r5.s64 = ctx.r7.s64 + -9256;
	// addi r3,r8,3540
	ctx.r3.s64 = ctx.r8.s64 + 3540;
	// stw r6,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r6.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r5,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83481EC8;
	sub_83522540(ctx, base);
	// stw r3,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481ED8;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// stw r3,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// addi r3,r4,3524
	ctx.r3.s64 = ctx.r4.s64 + 3524;
	// addi r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 + 136;
	// addi r9,r11,-9360
	ctx.r9.s64 = ctx.r11.s64 + -9360;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r10,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r10.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r9,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r9.u32);
	// stw r30,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// bl 0x83522540
	ctx.lr = 0x83481F08;
	sub_83522540(ctx, base);
	// stw r3,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83481F18;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// addi r5,r7,-9360
	ctx.r5.s64 = ctx.r7.s64 + -9360;
	// addi r3,r8,3512
	ctx.r3.s64 = ctx.r8.s64 + 3512;
	// stw r6,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r6.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r5,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83481F44;
	sub_83522540(ctx, base);
	// stw r3,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83481F54;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
	// addi r9,r4,-9360
	ctx.r9.s64 = ctx.r4.s64 + -9360;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// addi r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 + 168;
	// addi r3,r11,3496
	ctx.r3.s64 = ctx.r11.s64 + 3496;
	// stw r9,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r9.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x83481F80;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r8,2876
	ctx.r3.s64 = ctx.r8.s64 + 2876;
	// bl 0x83522540
	ctx.lr = 0x83481F94;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r3,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// addi r6,r31,184
	ctx.r6.s64 = ctx.r31.s64 + 184;
	// addi r5,r7,-9000
	ctx.r5.s64 = ctx.r7.s64 + -9000;
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r6.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r5,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r5.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83481FBC;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83481FD4;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,576
	ctx.r31.s64 = ctx.r1.s64 + 576;
	// li r30,23
	ctx.r30.s64 = 23;
loc_83481FDC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83481FE8;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83481FF0;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83481fdc
	if (!cr0.lt) goto loc_83481FDC;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83482000"))) PPC_WEAK_FUNC(sub_83482000);
PPC_FUNC_IMPL(__imp__sub_83482000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83482008;
	__savegprlr_24(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,952
	ctx.r4.s64 = 952;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83482030;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83482044
	if (cr6.eq) goto loc_83482044;
	// bl 0x8347fa50
	ctx.lr = 0x8348203C;
	sub_8347FA50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83482048
	goto loc_83482048;
loc_83482044:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83482048:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8347e850
	ctx.lr = 0x8348205C;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x8348206C;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83482080;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r9,4316
	ctx.r3.s64 = ctx.r9.s64 + 4316;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x83522540
	ctx.lr = 0x834820B0;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r25,r6,3124
	ctx.r25.s64 = ctx.r6.s64 + 3124;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x834820C8;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-8792
	ctx.r10.s64 = ctx.r4.s64 + -8792;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r3,r5,4304
	ctx.r3.s64 = ctx.r5.s64 + 4304;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x834820F4;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83522540
	ctx.lr = 0x83482104;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r6,r8,-8792
	ctx.r6.s64 = ctx.r8.s64 + -8792;
	// addi r3,r9,4292
	ctx.r3.s64 = ctx.r9.s64 + 4292;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482130;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83482140;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r10,r4,-8792
	ctx.r10.s64 = ctx.r4.s64 + -8792;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// addi r3,r5,4272
	ctx.r3.s64 = ctx.r5.s64 + 4272;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8348216C;
	sub_83522540(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r25,r9,11832
	ctx.r25.s64 = ctx.r9.s64 + 11832;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83482184;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// addi r6,r31,72
	ctx.r6.s64 = ctx.r31.s64 + 72;
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,4256
	ctx.r3.s64 = ctx.r8.s64 + 4256;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x834821B0;
	sub_83522540(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r24,r11,-29388
	ctx.r24.s64 = ctx.r11.s64 + -29388;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x834821C8;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r8,r31,76
	ctx.r8.s64 = ctx.r31.s64 + 76;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r7,r9,-9784
	ctx.r7.s64 = ctx.r9.s64 + -9784;
	// addi r3,r10,4240
	ctx.r3.s64 = ctx.r10.s64 + 4240;
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x834821F4;
	sub_83522540(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482204;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// addi r10,r5,-9784
	ctx.r10.s64 = ctx.r5.s64 + -9784;
	// addi r3,r6,4220
	ctx.r3.s64 = ctx.r6.s64 + 4220;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x83482230;
	sub_83522540(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83482240;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// addi r3,r9,4204
	ctx.r3.s64 = ctx.r9.s64 + 4204;
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x8348226C;
	sub_83522540(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x8348227C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// addi r3,r5,3684
	ctx.r3.s64 = ctx.r5.s64 + 3684;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x834822A8;
	sub_83522540(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834822B8;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// addi r3,r9,3672
	ctx.r3.s64 = ctx.r9.s64 + 3672;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r7,r31,92
	ctx.r7.s64 = ctx.r31.s64 + 92;
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r6,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834822E4;
	sub_83522540(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834822F4;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r9,r5,-9360
	ctx.r9.s64 = ctx.r5.s64 + -9360;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// addi r3,r11,3656
	ctx.r3.s64 = ctx.r11.s64 + 3656;
	// stw r9,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83482320;
	sub_83522540(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83482330;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// addi r6,r31,132
	ctx.r6.s64 = ctx.r31.s64 + 132;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r5,r7,-9360
	ctx.r5.s64 = ctx.r7.s64 + -9360;
	// addi r3,r8,3644
	ctx.r3.s64 = ctx.r8.s64 + 3644;
	// stw r6,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x8348235C;
	sub_83522540(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x8348236C;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// addi r3,r4,4188
	ctx.r3.s64 = ctx.r4.s64 + 4188;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// addi r9,r11,-9672
	ctx.r9.s64 = ctx.r11.s64 + -9672;
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r10,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r10.u32);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83482398;
	sub_83522540(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x834823A8;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// addi r6,r31,172
	ctx.r6.s64 = ctx.r31.s64 + 172;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r5,r7,-9672
	ctx.r5.s64 = ctx.r7.s64 + -9672;
	// addi r3,r8,4176
	ctx.r3.s64 = ctx.r8.s64 + 4176;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x834823D4;
	sub_83522540(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x834823E4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// addi r3,r4,4156
	ctx.r3.s64 = ctx.r4.s64 + 4156;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// addi r9,r11,-9672
	ctx.r9.s64 = ctx.r11.s64 + -9672;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83482410;
	sub_83522540(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83482420;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// addi r6,r31,212
	ctx.r6.s64 = ctx.r31.s64 + 212;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r5,r7,-9672
	ctx.r5.s64 = ctx.r7.s64 + -9672;
	// addi r3,r8,3692
	ctx.r3.s64 = ctx.r8.s64 + 3692;
	// stw r6,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r6.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r5,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x8348244C;
	sub_83522540(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r29,r11,19980
	ctx.r29.s64 = ctx.r11.s64 + 19980;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83482464;
	sub_83522540(ctx, base);
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// addi r8,r31,232
	ctx.r8.s64 = ctx.r31.s64 + 232;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r7,r10,-9152
	ctx.r7.s64 = ctx.r10.s64 + -9152;
	// addi r3,r9,4140
	ctx.r3.s64 = ctx.r9.s64 + 4140;
	// stw r8,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r7,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83482490;
	sub_83522540(ctx, base);
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x834824A0;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r3.u32);
	// addi r11,r31,252
	ctx.r11.s64 = ctx.r31.s64 + 252;
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// addi r10,r5,-9152
	ctx.r10.s64 = ctx.r5.s64 + -9152;
	// addi r3,r6,4124
	ctx.r3.s64 = ctx.r6.s64 + 4124;
	// stw r11,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x834824CC;
	sub_83522540(ctx, base);
	// stw r3,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834824DC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// addi r7,r31,332
	ctx.r7.s64 = ctx.r31.s64 + 332;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,4104
	ctx.r3.s64 = ctx.r9.s64 + 4104;
	// stw r7,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r7.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r6,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482508;
	sub_83522540(ctx, base);
	// stw r3,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83482518;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r3.u32);
	// addi r10,r4,-9152
	ctx.r10.s64 = ctx.r4.s64 + -9152;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// addi r11,r31,352
	ctx.r11.s64 = ctx.r31.s64 + 352;
	// addi r3,r5,4084
	ctx.r3.s64 = ctx.r5.s64 + 4084;
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482544;
	sub_83522540(ctx, base);
	// stw r3,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482554;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// addi r7,r31,372
	ctx.r7.s64 = ctx.r31.s64 + 372;
	// stw r30,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,3636
	ctx.r3.s64 = ctx.r9.s64 + 3636;
	// stw r7,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482580;
	sub_83522540(ctx, base);
	// stw r3,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482590;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// addi r3,r5,3624
	ctx.r3.s64 = ctx.r5.s64 + 3624;
	// stw r10,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r10.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x834825BC;
	sub_83522540(ctx, base);
	// stw r3,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834825CC;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
	// addi r7,r31,292
	ctx.r7.s64 = ctx.r31.s64 + 292;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// addi r6,r9,-9360
	ctx.r6.s64 = ctx.r9.s64 + -9360;
	// addi r3,r8,3616
	ctx.r3.s64 = ctx.r8.s64 + 3616;
	// stw r7,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r6,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834825F8;
	sub_83522540(ctx, base);
	// stw r3,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482608;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stw r3,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// addi r3,r5,25404
	ctx.r3.s64 = ctx.r5.s64 + 25404;
	// stw r10,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r10.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482634;
	sub_83522540(ctx, base);
	// stw r3,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482644;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r3.u32);
	// addi r7,r31,392
	ctx.r7.s64 = ctx.r31.s64 + 392;
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,3604
	ctx.r3.s64 = ctx.r9.s64 + 3604;
	// stw r7,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r7.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r6,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482670;
	sub_83522540(ctx, base);
	// stw r3,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482680;
	sub_83522540(ctx, base);
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// stw r3,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r3.u32);
	// addi r3,r5,3588
	ctx.r3.s64 = ctx.r5.s64 + 3588;
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// addi r11,r31,412
	ctx.r11.s64 = ctx.r31.s64 + 412;
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x834826AC;
	sub_83522540(ctx, base);
	// stw r3,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x834826BC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r3,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r3.u32);
	// addi r7,r31,432
	ctx.r7.s64 = ctx.r31.s64 + 432;
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,-19204
	ctx.r3.s64 = ctx.r9.s64 + -19204;
	// stw r7,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r7.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r6,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834826E8;
	sub_83522540(ctx, base);
	// stw r3,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834826F8;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r3.u32);
	// addi r10,r4,-9152
	ctx.r10.s64 = ctx.r4.s64 + -9152;
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// addi r11,r31,452
	ctx.r11.s64 = ctx.r31.s64 + 452;
	// addi r3,r5,3572
	ctx.r3.s64 = ctx.r5.s64 + 3572;
	// stw r10,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482724;
	sub_83522540(ctx, base);
	// stw r3,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482734;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// addi r7,r31,472
	ctx.r7.s64 = ctx.r31.s64 + 472;
	// stw r30,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r30.u32);
	// addi r6,r8,-9152
	ctx.r6.s64 = ctx.r8.s64 + -9152;
	// addi r3,r9,3556
	ctx.r3.s64 = ctx.r9.s64 + 3556;
	// stw r7,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r7.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r6,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482760;
	sub_83522540(ctx, base);
	// stw r3,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83482770;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r3.u32);
	// addi r10,r4,-9152
	ctx.r10.s64 = ctx.r4.s64 + -9152;
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// addi r11,r31,492
	ctx.r11.s64 = ctx.r31.s64 + 492;
	// addi r3,r5,4068
	ctx.r3.s64 = ctx.r5.s64 + 4068;
	// stw r10,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r11,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8348279C;
	sub_83522540(ctx, base);
	// stw r3,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834827AC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r3.u32);
	// addi r7,r31,512
	ctx.r7.s64 = ctx.r31.s64 + 512;
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,4052
	ctx.r3.s64 = ctx.r9.s64 + 4052;
	// stw r7,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r7.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r6,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834827D8;
	sub_83522540(ctx, base);
	// stw r3,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834827E8;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r30.u32);
	// addi r11,r31,532
	ctx.r11.s64 = ctx.r31.s64 + 532;
	// addi r3,r5,4036
	ctx.r3.s64 = ctx.r5.s64 + 4036;
	// stw r10,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r10.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r11,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482814;
	sub_83522540(ctx, base);
	// stw r3,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482824;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r3.u32);
	// addi r7,r31,552
	ctx.r7.s64 = ctx.r31.s64 + 552;
	// stw r30,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,4020
	ctx.r3.s64 = ctx.r9.s64 + 4020;
	// stw r7,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r7.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r6,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482850;
	sub_83522540(ctx, base);
	// stw r3,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482860;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r30.u32);
	// addi r11,r31,572
	ctx.r11.s64 = ctx.r31.s64 + 572;
	// addi r3,r5,4004
	ctx.r3.s64 = ctx.r5.s64 + 4004;
	// stw r10,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r10.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r11,764(r1)
	PPC_STORE_U32(ctx.r1.u32 + 764, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8348288C;
	sub_83522540(ctx, base);
	// stw r3,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x8348289C;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r3.u32);
	// addi r7,r31,592
	ctx.r7.s64 = ctx.r31.s64 + 592;
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,3988
	ctx.r3.s64 = ctx.r9.s64 + 3988;
	// stw r7,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r7.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r6,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834828C8;
	sub_83522540(ctx, base);
	// stw r3,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834828D8;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r30.u32);
	// addi r11,r31,612
	ctx.r11.s64 = ctx.r31.s64 + 612;
	// addi r3,r5,3972
	ctx.r3.s64 = ctx.r5.s64 + 3972;
	// stw r10,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r10.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r11,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482904;
	sub_83522540(ctx, base);
	// stw r3,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482914;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// addi r3,r9,3956
	ctx.r3.s64 = ctx.r9.s64 + 3956;
	// addi r7,r31,632
	ctx.r7.s64 = ctx.r31.s64 + 632;
	// stw r30,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r7,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r7.u32);
	// stw r6,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482940;
	sub_83522540(ctx, base);
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482950;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r30.u32);
	// addi r11,r31,652
	ctx.r11.s64 = ctx.r31.s64 + 652;
	// addi r3,r5,3940
	ctx.r3.s64 = ctx.r5.s64 + 3940;
	// stw r10,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8348297C;
	sub_83522540(ctx, base);
	// stw r3,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x8348298C;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r3.u32);
	// addi r7,r31,672
	ctx.r7.s64 = ctx.r31.s64 + 672;
	// stw r30,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r30.u32);
	// addi r6,r8,-9360
	ctx.r6.s64 = ctx.r8.s64 + -9360;
	// addi r3,r9,3924
	ctx.r3.s64 = ctx.r9.s64 + 3924;
	// stw r7,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x834829B8;
	sub_83522540(ctx, base);
	// stw r3,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834829C8;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r3,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r3.u32);
	// addi r10,r31,692
	ctx.r10.s64 = ctx.r31.s64 + 692;
	// stw r30,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r30.u32);
	// addi r9,r5,-9360
	ctx.r9.s64 = ctx.r5.s64 + -9360;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r10,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r10.u32);
	// addi r3,r11,3908
	ctx.r3.s64 = ctx.r11.s64 + 3908;
	// stw r9,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x834829F4;
	sub_83522540(ctx, base);
	// stw r3,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83482A04;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r3.u32);
	// addi r6,r31,712
	ctx.r6.s64 = ctx.r31.s64 + 712;
	// stw r30,908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 908, ctx.r30.u32);
	// addi r5,r7,-9360
	ctx.r5.s64 = ctx.r7.s64 + -9360;
	// addi r3,r8,3892
	ctx.r3.s64 = ctx.r8.s64 + 3892;
	// stw r6,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r6.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r5,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83482A30;
	sub_83522540(ctx, base);
	// stw r3,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83482A40;
	sub_83522540(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// stw r3,920(r1)
	PPC_STORE_U32(ctx.r1.u32 + 920, ctx.r3.u32);
	// addi r10,r31,732
	ctx.r10.s64 = ctx.r31.s64 + 732;
	// stw r30,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r30.u32);
	// addi r9,r11,-9360
	ctx.r9.s64 = ctx.r11.s64 + -9360;
	// addi r3,r4,3876
	ctx.r3.s64 = ctx.r4.s64 + 3876;
	// stw r10,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r10.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r9,932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 932, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83482A6C;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,936(r1)
	PPC_STORE_U32(ctx.r1.u32 + 936, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r29,r8,2876
	ctx.r29.s64 = ctx.r8.s64 + 2876;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83482A84;
	sub_83522540(ctx, base);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r3,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r3.u32);
	// addi r5,r31,752
	ctx.r5.s64 = ctx.r31.s64 + 752;
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// addi r11,r6,-9000
	ctx.r11.s64 = ctx.r6.s64 + -9000;
	// addi r3,r7,3860
	ctx.r3.s64 = ctx.r7.s64 + 3860;
	// stw r5,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r5.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r11,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482AB0;
	sub_83522540(ctx, base);
	// stw r3,956(r1)
	PPC_STORE_U32(ctx.r1.u32 + 956, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482AC0;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r3.u32);
	// addi r8,r31,772
	ctx.r8.s64 = ctx.r31.s64 + 772;
	// stw r30,968(r1)
	PPC_STORE_U32(ctx.r1.u32 + 968, ctx.r30.u32);
	// addi r7,r9,-9000
	ctx.r7.s64 = ctx.r9.s64 + -9000;
	// addi r3,r10,3844
	ctx.r3.s64 = ctx.r10.s64 + 3844;
	// stw r8,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, ctx.r8.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r7,972(r1)
	PPC_STORE_U32(ctx.r1.u32 + 972, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83482AEC;
	sub_83522540(ctx, base);
	// stw r3,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482AFC;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r3.u32);
	// addi r11,r31,792
	ctx.r11.s64 = ctx.r31.s64 + 792;
	// stw r30,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r30.u32);
	// addi r10,r5,-9000
	ctx.r10.s64 = ctx.r5.s64 + -9000;
	// addi r3,r6,3828
	ctx.r3.s64 = ctx.r6.s64 + 3828;
	// stw r11,984(r1)
	PPC_STORE_U32(ctx.r1.u32 + 984, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r10,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x83482B28;
	sub_83522540(ctx, base);
	// stw r3,996(r1)
	PPC_STORE_U32(ctx.r1.u32 + 996, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83482B38;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,1000(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1000, ctx.r3.u32);
	// addi r7,r31,812
	ctx.r7.s64 = ctx.r31.s64 + 812;
	// stw r30,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r30.u32);
	// addi r6,r9,-9000
	ctx.r6.s64 = ctx.r9.s64 + -9000;
	// addi r3,r8,3812
	ctx.r3.s64 = ctx.r8.s64 + 3812;
	// stw r7,1004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1004, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482B64;
	sub_83522540(ctx, base);
	// stw r3,1016(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1016, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482B74;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r3.u32);
	// addi r10,r4,-9672
	ctx.r10.s64 = ctx.r4.s64 + -9672;
	// stw r30,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, ctx.r30.u32);
	// addi r11,r31,832
	ctx.r11.s64 = ctx.r31.s64 + 832;
	// addi r3,r5,3796
	ctx.r3.s64 = ctx.r5.s64 + 3796;
	// stw r10,1032(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1032, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482BA0;
	sub_83522540(ctx, base);
	// stw r3,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482BB0;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r3.u32);
	// addi r7,r31,852
	ctx.r7.s64 = ctx.r31.s64 + 852;
	// stw r30,1048(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1048, ctx.r30.u32);
	// addi r6,r8,-9672
	ctx.r6.s64 = ctx.r8.s64 + -9672;
	// addi r3,r9,3788
	ctx.r3.s64 = ctx.r9.s64 + 3788;
	// stw r7,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r7.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r6,1052(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1052, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482BDC;
	sub_83522540(ctx, base);
	// stw r3,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482BEC;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,1060(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1060, ctx.r3.u32);
	// addi r10,r4,-9672
	ctx.r10.s64 = ctx.r4.s64 + -9672;
	// stw r30,1068(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1068, ctx.r30.u32);
	// addi r11,r31,872
	ctx.r11.s64 = ctx.r31.s64 + 872;
	// addi r3,r5,3772
	ctx.r3.s64 = ctx.r5.s64 + 3772;
	// stw r10,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r10.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r11,1064(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1064, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482C18;
	sub_83522540(ctx, base);
	// stw r3,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r3.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83482C28;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,1080(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1080, ctx.r3.u32);
	// addi r7,r31,892
	ctx.r7.s64 = ctx.r31.s64 + 892;
	// stw r30,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r30.u32);
	// addi r6,r8,-9672
	ctx.r6.s64 = ctx.r8.s64 + -9672;
	// addi r3,r9,3756
	ctx.r3.s64 = ctx.r9.s64 + 3756;
	// stw r7,1084(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1084, ctx.r7.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// stw r6,1092(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1092, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482C54;
	sub_83522540(ctx, base);
	// stw r3,1096(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1096, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83522540
	ctx.lr = 0x83482C64;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,1100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1100, ctx.r3.u32);
	// addi r10,r4,-9360
	ctx.r10.s64 = ctx.r4.s64 + -9360;
	// stw r30,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r30.u32);
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
	// addi r3,r5,3744
	ctx.r3.s64 = ctx.r5.s64 + 3744;
	// stw r10,1112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1112, ctx.r10.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482C90;
	sub_83522540(ctx, base);
	// stw r3,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83522540
	ctx.lr = 0x83482CA0;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// stw r3,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r3.u32);
	// addi r8,r31,932
	ctx.r8.s64 = ctx.r31.s64 + 932;
	// addi r7,r9,-9672
	ctx.r7.s64 = ctx.r9.s64 + -9672;
	// stw r30,1128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1128, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,1124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1124, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r7,1132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1132, ctx.r7.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83482CC8;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83482CE0;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,1136
	ctx.r31.s64 = ctx.r1.s64 + 1136;
	// li r30,51
	ctx.r30.s64 = 51;
loc_83482CE8:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83482CF4;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83482CFC;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83482ce8
	if (!cr0.lt) goto loc_83482CE8;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83482D0C"))) PPC_WEAK_FUNC(sub_83482D0C);
PPC_FUNC_IMPL(__imp__sub_83482D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83482D10"))) PPC_WEAK_FUNC(sub_83482D10);
PPC_FUNC_IMPL(__imp__sub_83482D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83482D18;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83482D40;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83482d54
	if (cr6.eq) goto loc_83482D54;
	// bl 0x8347f9b0
	ctx.lr = 0x83482D4C;
	sub_8347F9B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83482d58
	goto loc_83482D58;
loc_83482D54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83482D58:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x83482D6C;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83482D7C;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83482D90;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,4328
	ctx.r3.s64 = ctx.r9.s64 + 4328;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x83482DBC;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r26,r6,3228
	ctx.r26.s64 = ctx.r6.s64 + 3228;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83482DD4;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-8832
	ctx.r10.s64 = ctx.r4.s64 + -8832;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r3,r5,3636
	ctx.r3.s64 = ctx.r5.s64 + 3636;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482E00;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83522540
	ctx.lr = 0x83482E10;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r6,r8,-8832
	ctx.r6.s64 = ctx.r8.s64 + -8832;
	// addi r3,r9,25404
	ctx.r3.s64 = ctx.r9.s64 + 25404;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83482E3C;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83482E4C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r10,r4,-8832
	ctx.r10.s64 = ctx.r4.s64 + -8832;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r3,r5,10472
	ctx.r3.s64 = ctx.r5.s64 + 10472;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83482E78;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r9,2876
	ctx.r3.s64 = ctx.r9.s64 + 2876;
	// bl 0x83522540
	ctx.lr = 0x83482E8C;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r6,r8,-9000
	ctx.r6.s64 = ctx.r8.s64 + -9000;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83482EB8;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83482ED0;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,196
	ctx.r31.s64 = ctx.r1.s64 + 196;
loc_83482ED4:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83482EE0;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x83482EE8;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83482ed4
	if (!cr0.lt) goto loc_83482ED4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83482EF8"))) PPC_WEAK_FUNC(sub_83482EF8);
PPC_FUNC_IMPL(__imp__sub_83482EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83482F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83482F28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq cr6,0x83482f7c
	if (cr6.eq) goto loc_83482F7C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,2864
	ctx.r8.s64 = ctx.r9.s64 + 2864;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// lfs f0,-8532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8532);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// lfs f13,-3404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3404);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// b 0x83482f80
	goto loc_83482F80;
loc_83482F7C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83482F80:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8347e850
	ctx.lr = 0x83482F94;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83482FA4;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83482FB8;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,4360
	ctx.r3.s64 = ctx.r9.s64 + 4360;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x83522540
	ctx.lr = 0x83482FE4;
	sub_83522540(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r29,r6,11832
	ctx.r29.s64 = ctx.r6.s64 + 11832;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83482FFC;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9456
	ctx.r10.s64 = ctx.r4.s64 + -9456;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r3,r5,4340
	ctx.r3.s64 = ctx.r5.s64 + 4340;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83483028;
	sub_83522540(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483038;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r7,r31,40
	ctx.r7.s64 = ctx.r31.s64 + 40;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// addi r3,r9,4332
	ctx.r3.s64 = ctx.r9.s64 + 4332;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83483064;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83522540
	ctx.lr = 0x83483074;
	sub_83522540(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// addi r11,r5,-9456
	ctx.r11.s64 = ctx.r5.s64 + -9456;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x8348309C;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x834830B4;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,3
	ctx.r30.s64 = 3;
loc_834830BC:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x834830C8;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x834830D0;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x834830bc
	if (!cr0.lt) goto loc_834830BC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834830E0"))) PPC_WEAK_FUNC(sub_834830E0);
PPC_FUNC_IMPL(__imp__sub_834830E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x834830E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfs f0,4276(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4276);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// lfs f13,14608(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14608);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r3,-32219
	ctx.r3.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f12,-23848(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23848);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,9008
	ctx.r9.s64 = ctx.r9.s64 + 9008;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r8,r3,2864
	ctx.r8.s64 = ctx.r3.s64 + 2864;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f11,-20096(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -20096);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f10,-25188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25188);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r10,-16
	ctx.r10.s64 = -16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r29,64
	ctx.r29.s64 = 64;
	// li r3,80
	ctx.r3.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r6,128
	ctx.r6.s64 = 128;
loc_834831A4:
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bdnz 0x834831a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_834831A4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// bge cr6,0x83483278
	if (!cr6.lt) goto loc_83483278;
	// bl 0x83522850
	ctx.lr = 0x834831F0;
	sub_83522850(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8348322c
	if (!cr6.eq) goto loc_8348322C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
loc_83483210:
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
	// bne 0x83483210
	if (!cr0.eq) goto loc_83483210;
loc_8348322C:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x83483258
	if (!cr6.lt) goto loc_83483258;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subfic r5,r11,2
	xer.ca = ctx.r11.u32 <= 2;
	ctx.r5.s64 = 2 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8347ecd8
	ctx.lr = 0x83483254;
	sub_8347ECD8(ctx, base);
	// b 0x83483270
	goto loc_83483270;
loc_83483258:
	// ble cr6,0x83483270
	if (!cr6.gt) goto loc_83483270;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x834472d0
	ctx.lr = 0x83483270;
	sub_834472D0(ctx, base);
loc_83483270:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83521f50
	ctx.lr = 0x83483278;
	sub_83521F50(ctx, base);
loc_83483278:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,78
	ctx.r4.s64 = 78;
	// addi r29,r11,2616
	ctx.r29.s64 = ctx.r11.s64 + 2616;
	// addi r3,r29,-80
	ctx.r3.s64 = ctx.r29.s64 + -80;
	// bl 0x83522540
	ctx.lr = 0x83483290;
	sub_83522540(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83522040
	ctx.lr = 0x834832A0;
	sub_83522040(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83521f50
	ctx.lr = 0x834832AC;
	sub_83521F50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83522540
	ctx.lr = 0x834832BC;
	sub_83522540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83522040
	ctx.lr = 0x834832CC;
	sub_83522040(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83521f50
	ctx.lr = 0x834832D8;
	sub_83521F50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834832E4"))) PPC_WEAK_FUNC(sub_834832E4);
PPC_FUNC_IMPL(__imp__sub_834832E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834832E8"))) PPC_WEAK_FUNC(sub_834832E8);
PPC_FUNC_IMPL(__imp__sub_834832E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x834832F0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,21588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fctidz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f12,-10804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10804);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f12,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r9,2864
	ctx.r8.s64 = ctx.r9.s64 + 2864;
	// lfs f9,8976(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8976);
	ctx.f9.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lfs f11,21708(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21708);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// stfs f9,40(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f8,9640(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 9640);
	ctx.f8.f64 = double(temp.f32);
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// lis r28,-32251
	ctx.r28.s64 = -2113601536;
	// fctidz f3,f12
	ctx.f3.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lis r27,-32219
	ctx.r27.s64 = -2111504384;
	// lfs f10,-11340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -11340);
	ctx.f10.f64 = double(temp.f32);
	// li r3,48
	ctx.r3.s64 = 48;
	// lfs f7,23372(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23372);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-23848(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -23848);
	ctx.f6.f64 = double(temp.f32);
	// fctidz f2,f0
	ctx.f2.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lfs f5,-11392(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -11392);
	ctx.f5.f64 = double(temp.f32);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f1,f0
	ctx.f1.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,103(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r5,111(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// fctidz f31,f0
	ctx.f31.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lfs f4,-7352(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -7352);
	ctx.f4.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f12,4388(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4388);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// or r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stfs f7,52(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f10,60(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fctidz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// stfs f6,84(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stfs f5,92(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfd f2,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f2.u64);
	// stfd f1,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// stfd f31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f31.u64);
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// lfs f12,4384(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4384);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f7,f0
	ctx.f7.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// lfs f10,-12968(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -12968);
	ctx.f10.f64 = double(temp.f32);
	// fctidz f6,f12
	ctx.f6.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f8.u64);
	// fctidz f5,f10
	ctx.f5.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lfs f12,4380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4380);
	ctx.f12.f64 = double(temp.f32);
	// fctidz f3,f0
	ctx.f3.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// fctidz f2,f12
	ctx.f2.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f2,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f2.u64);
	// lbz r7,111(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// stfd f3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f3.u64);
	// fctidz f1,f0
	ctx.f1.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f6.u64);
	// lbz r4,103(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lfs f10,4376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4376);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r3,r7,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stfd f1,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f1.u64);
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// fctidz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// fctidz f7,f0
	ctx.f7.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.f9.u64);
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// rlwinm r3,r7,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r4,r10,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stfs f4,96(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lbz r7,119(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stb r11,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r11.u8);
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stb r11,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r11.u8);
	// or r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 | ctx.r7.u64;
	// lbz r6,127(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r4,135(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// lbz r9,143(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lbz r6,151(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// rotlwi r4,r9,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r3,159(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// lbz r9,167(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stb r30,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// lbz r4,175(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 175);
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// lbz r28,111(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r30,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// or r7,r5,r4
	ctx.r7.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stb r30,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r30.u8);
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
	// rlwinm r6,r3,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r4,r10,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r3,103(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r11,183(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// or r5,r9,r28
	ctx.r5.u64 = ctx.r9.u64 | ctx.r28.u64;
	// lbz r10,95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// or r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 | ctx.r3.u64;
	// or r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 | ctx.r11.u64;
	// or r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r11,r3,2
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83483604
	if (!cr6.lt) goto loc_83483604;
	// bl 0x83522850
	ctx.lr = 0x834835BC;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x834835f4
	if (!cr6.eq) goto loc_834835F4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_834835D8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x834835d8
	if (!cr0.eq) goto loc_834835D8;
loc_834835F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347fc00
	ctx.lr = 0x83483604;
	sub_8347FC00(ctx, base);
loc_83483604:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,2696
	ctx.r4.s64 = ctx.r11.s64 + 2696;
	// bl 0x831126c8
	ctx.lr = 0x83483614;
	sub_831126C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83483624"))) PPC_WEAK_FUNC(sub_83483624);
PPC_FUNC_IMPL(__imp__sub_83483624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83483628"))) PPC_WEAK_FUNC(sub_83483628);
PPC_FUNC_IMPL(__imp__sub_83483628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83483630;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,384
	ctx.r4.s64 = 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83483658;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8348366c
	if (cr6.eq) goto loc_8348366C;
	// bl 0x834830e0
	ctx.lr = 0x83483664;
	sub_834830E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83483670
	goto loc_83483670;
loc_8348366C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83483670:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e850
	ctx.lr = 0x83483684;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x83483694;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x834836A8;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r8,-904
	ctx.r6.s64 = ctx.r8.s64 + -904;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r9,3732
	ctx.r3.s64 = ctx.r9.s64 + 3732;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x834836D8;
	sub_83522540(ctx, base);
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r5,-29388
	ctx.r3.s64 = ctx.r5.s64 + -29388;
	// bl 0x83522540
	ctx.lr = 0x834836EC;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r3,r4,4440
	ctx.r3.s64 = ctx.r4.s64 + 4440;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// addi r9,r11,-9784
	ctx.r9.s64 = ctx.r11.s64 + -9784;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483718;
	sub_83522540(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r26,r8,11832
	ctx.r26.s64 = ctx.r8.s64 + 11832;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83483730;
	sub_83522540(ctx, base);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r11,r6,-9456
	ctx.r11.s64 = ctx.r6.s64 + -9456;
	// addi r3,r7,4432
	ctx.r3.s64 = ctx.r7.s64 + 4432;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x8348375C;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x8348376C;
	sub_83522540(ctx, base);
	// lis r9,-31928
	ctx.r9.s64 = -2092433408;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r7,r9,-9456
	ctx.r7.s64 = ctx.r9.s64 + -9456;
	// addi r3,r10,4424
	ctx.r3.s64 = ctx.r10.s64 + 4424;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83483798;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834837A8;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r10,r5,-9456
	ctx.r10.s64 = ctx.r5.s64 + -9456;
	// addi r3,r6,4416
	ctx.r3.s64 = ctx.r6.s64 + 4416;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x834837D4;
	sub_83522540(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834837E4;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r6,r8,-9456
	ctx.r6.s64 = ctx.r8.s64 + -9456;
	// addi r3,r9,4392
	ctx.r3.s64 = ctx.r9.s64 + 4392;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83483810;
	sub_83522540(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83522540
	ctx.lr = 0x83483820;
	sub_83522540(ctx, base);
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// addi r11,r5,-9456
	ctx.r11.s64 = ctx.r5.s64 + -9456;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83483848;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x83483860;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,236
	ctx.r31.s64 = ctx.r1.s64 + 236;
	// li r30,6
	ctx.r30.s64 = 6;
loc_83483868:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x83483874;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x8348387C;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x83483868
	if (!cr0.lt) goto loc_83483868;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8348388C"))) PPC_WEAK_FUNC(sub_8348388C);
PPC_FUNC_IMPL(__imp__sub_8348388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83483890"))) PPC_WEAK_FUNC(sub_83483890);
PPC_FUNC_IMPL(__imp__sub_83483890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83483898;
	__savegprlr_18(ctx, base);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834838C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x834838d4
	if (cr6.eq) goto loc_834838D4;
	// bl 0x834832e8
	ctx.lr = 0x834838CC;
	sub_834832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x834838d8
	goto loc_834838D8;
loc_834838D4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_834838D8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8347e850
	ctx.lr = 0x834838EC;
	sub_8347E850(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,2924
	ctx.r3.s64 = ctx.r11.s64 + 2924;
	// bl 0x83522540
	ctx.lr = 0x834838FC;
	sub_83522540(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r10,11628
	ctx.r3.s64 = ctx.r10.s64 + 11628;
	// bl 0x83522540
	ctx.lr = 0x83483910;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r7,r8,-904
	ctx.r7.s64 = ctx.r8.s64 + -904;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// addi r3,r9,4928
	ctx.r3.s64 = ctx.r9.s64 + 4928;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x83522540
	ctx.lr = 0x8348393C;
	sub_83522540(ctx, base);
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r22,r6,-29388
	ctx.r22.s64 = ctx.r6.s64 + -29388;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83522540
	ctx.lr = 0x83483954;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r10,r4,-9784
	ctx.r10.s64 = ctx.r4.s64 + -9784;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r3,r5,4916
	ctx.r3.s64 = ctx.r5.s64 + 4916;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83483980;
	sub_83522540(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r28,r9,11832
	ctx.r28.s64 = ctx.r9.s64 + 11832;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83522540
	ctx.lr = 0x83483998;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,4892
	ctx.r3.s64 = ctx.r8.s64 + 4892;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x834839C4;
	sub_83522540(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x834839D4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r4,4880
	ctx.r3.s64 = ctx.r4.s64 + 4880;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483A00;
	sub_83522540(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483A10;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,4868
	ctx.r3.s64 = ctx.r8.s64 + 4868;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483A3C;
	sub_83522540(ctx, base);
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483A4C;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r4,4844
	ctx.r3.s64 = ctx.r4.s64 + 4844;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483A78;
	sub_83522540(ctx, base);
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483A88;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,4832
	ctx.r3.s64 = ctx.r8.s64 + 4832;
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483AB4;
	sub_83522540(ctx, base);
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483AC4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// addi r3,r4,4816
	ctx.r3.s64 = ctx.r4.s64 + 4816;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483AF0;
	sub_83522540(ctx, base);
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483B00;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// addi r6,r31,64
	ctx.r6.s64 = ctx.r31.s64 + 64;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,4804
	ctx.r3.s64 = ctx.r8.s64 + 4804;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r5,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483B2C;
	sub_83522540(ctx, base);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483B3C;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r4,4776
	ctx.r3.s64 = ctx.r4.s64 + 4776;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// li r4,25
	ctx.r4.s64 = 25;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483B68;
	sub_83522540(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483B78;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// addi r6,r31,72
	ctx.r6.s64 = ctx.r31.s64 + 72;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r5,r8,-9456
	ctx.r5.s64 = ctx.r8.s64 + -9456;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// addi r3,r7,4756
	ctx.r3.s64 = ctx.r7.s64 + 4756;
	// stw r5,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483BA4;
	sub_83522540(ctx, base);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483BB4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// addi r3,r4,4736
	ctx.r3.s64 = ctx.r4.s64 + 4736;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// addi r9,r11,-9784
	ctx.r9.s64 = ctx.r11.s64 + -9784;
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483BE0;
	sub_83522540(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83522540
	ctx.lr = 0x83483BF0;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r5,r7,-9784
	ctx.r5.s64 = ctx.r7.s64 + -9784;
	// addi r3,r8,4712
	ctx.r3.s64 = ctx.r8.s64 + 4712;
	// stw r6,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// stw r5,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483C1C;
	sub_83522540(ctx, base);
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483C2C;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// addi r3,r4,4692
	ctx.r3.s64 = ctx.r4.s64 + 4692;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// stw r9,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483C58;
	sub_83522540(ctx, base);
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483C68;
	sub_83522540(ctx, base);
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// stw r3,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r3.u32);
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// addi r3,r8,4672
	ctx.r3.s64 = ctx.r8.s64 + 4672;
	// stw r6,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r6.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r5,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483C94;
	sub_83522540(ctx, base);
	// stw r3,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483CA4;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r30.u32);
	// addi r3,r4,4652
	ctx.r3.s64 = ctx.r4.s64 + 4652;
	// addi r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 + 92;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r10.u32);
	// stw r9,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483CD0;
	sub_83522540(ctx, base);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483CE0;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// stw r3,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// addi r6,r31,96
	ctx.r6.s64 = ctx.r31.s64 + 96;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r5,r8,-9456
	ctx.r5.s64 = ctx.r8.s64 + -9456;
	// addi r3,r7,4632
	ctx.r3.s64 = ctx.r7.s64 + 4632;
	// stw r6,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r6.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r5,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483D0C;
	sub_83522540(ctx, base);
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x83522540
	ctx.lr = 0x83483D1C;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r3.u32);
	// addi r3,r4,4612
	ctx.r3.s64 = ctx.r4.s64 + 4612;
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r9,r11,-9456
	ctx.r9.s64 = ctx.r11.s64 + -9456;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// stw r9,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483D48;
	sub_83522540(ctx, base);
	// stw r3,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83522540
	ctx.lr = 0x83483D58;
	sub_83522540(ctx, base);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r7,-31928
	ctx.r7.s64 = -2092433408;
	// stw r3,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// addi r21,r8,4592
	ctx.r21.s64 = ctx.r8.s64 + 4592;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r6,r31,104
	ctx.r6.s64 = ctx.r31.s64 + 104;
	// addi r5,r7,-9456
	ctx.r5.s64 = ctx.r7.s64 + -9456;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r6,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r6.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r5,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483D88;
	sub_83522540(ctx, base);
	// stw r3,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483D98;
	sub_83522540(ctx, base);
	// lis r4,-32219
	ctx.r4.s64 = -2111504384;
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r3.u32);
	// addi r20,r4,4572
	ctx.r20.s64 = ctx.r4.s64 + 4572;
	// stw r30,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// addi r10,r11,-9576
	ctx.r10.s64 = ctx.r11.s64 + -9576;
	// addi r28,r31,108
	ctx.r28.s64 = ctx.r31.s64 + 108;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// bl 0x83522540
	ctx.lr = 0x83483DC8;
	sub_83522540(ctx, base);
	// stw r3,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483DD8;
	sub_83522540(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r3.u32);
	// addi r19,r9,4552
	ctx.r19.s64 = ctx.r9.s64 + 4552;
	// addi r7,r8,-9576
	ctx.r7.s64 = ctx.r8.s64 + -9576;
	// stw r30,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// addi r27,r31,109
	ctx.r27.s64 = ctx.r31.s64 + 109;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r7,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r7.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r27,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r27.u32);
	// bl 0x83522540
	ctx.lr = 0x83483E08;
	sub_83522540(ctx, base);
	// stw r3,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483E18;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// addi r18,r6,4532
	ctx.r18.s64 = ctx.r6.s64 + 4532;
	// stw r30,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r30.u32);
	// addi r11,r5,-9576
	ctx.r11.s64 = ctx.r5.s64 + -9576;
	// addi r26,r31,110
	ctx.r26.s64 = ctx.r31.s64 + 110;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r11,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r26,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r26.u32);
	// bl 0x83522540
	ctx.lr = 0x83483E48;
	sub_83522540(ctx, base);
	// stw r3,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483E58;
	sub_83522540(ctx, base);
	// lis r10,-31928
	ctx.r10.s64 = -2092433408;
	// stw r3,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r3.u32);
	// addi r25,r31,111
	ctx.r25.s64 = ctx.r31.s64 + 111;
	// addi r9,r10,-9576
	ctx.r9.s64 = ctx.r10.s64 + -9576;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r25,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r25.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r9.u32);
	// bl 0x83522540
	ctx.lr = 0x83483E80;
	sub_83522540(ctx, base);
	// stw r3,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483E90;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r3.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r7,r8,-9576
	ctx.r7.s64 = ctx.r8.s64 + -9576;
	// stw r28,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r28.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// stw r7,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83483EB4;
	sub_83522540(ctx, base);
	// stw r3,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483EC4;
	sub_83522540(ctx, base);
	// lis r6,-31928
	ctx.r6.s64 = -2092433408;
	// stw r3,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r3.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r5,r6,-9576
	ctx.r5.s64 = ctx.r6.s64 + -9576;
	// stw r27,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r27.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r30,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r30.u32);
	// stw r5,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r5.u32);
	// bl 0x83522540
	ctx.lr = 0x83483EE8;
	sub_83522540(ctx, base);
	// stw r3,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483EF8;
	sub_83522540(ctx, base);
	// lis r11,-31928
	ctx.r11.s64 = -2092433408;
	// stw r3,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r3.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// addi r10,r11,-9576
	ctx.r10.s64 = ctx.r11.s64 + -9576;
	// stw r26,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r26.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// stw r10,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r10.u32);
	// bl 0x83522540
	ctx.lr = 0x83483F1C;
	sub_83522540(ctx, base);
	// stw r3,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83522540
	ctx.lr = 0x83483F2C;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// stw r3,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r3.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r25,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r25.u32);
	// addi r7,r8,-9576
	ctx.r7.s64 = ctx.r8.s64 + -9576;
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// addi r3,r9,4520
	ctx.r3.s64 = ctx.r9.s64 + 4520;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r7,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r7.u32);
	// bl 0x83522540
	ctx.lr = 0x83483F54;
	sub_83522540(ctx, base);
	// lis r6,-32219
	ctx.r6.s64 = -2111504384;
	// stw r3,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r28,r6,2876
	ctx.r28.s64 = ctx.r6.s64 + 2876;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83522540
	ctx.lr = 0x83483F6C;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r3.u32);
	// addi r10,r4,-9120
	ctx.r10.s64 = ctx.r4.s64 + -9120;
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r10,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// addi r3,r5,4508
	ctx.r3.s64 = ctx.r5.s64 + 4508;
	// stw r11,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r30,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r30.u32);
	// bl 0x83522540
	ctx.lr = 0x83483F9C;
	sub_83522540(ctx, base);
	// stw r3,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483FAC;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// stw r30,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r30.u32);
	// addi r6,r8,-9120
	ctx.r6.s64 = ctx.r8.s64 + -9120;
	// addi r3,r9,4492
	ctx.r3.s64 = ctx.r9.s64 + 4492;
	// stw r7,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r7.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r6,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83483FD8;
	sub_83522540(ctx, base);
	// stw r3,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83483FE8;
	sub_83522540(ctx, base);
	// lis r4,-31928
	ctx.r4.s64 = -2092433408;
	// lis r5,-32219
	ctx.r5.s64 = -2111504384;
	// stw r3,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r3.u32);
	// addi r10,r4,-9120
	ctx.r10.s64 = ctx.r4.s64 + -9120;
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// addi r3,r5,4472
	ctx.r3.s64 = ctx.r5.s64 + 4472;
	// stw r10,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r10.u32);
	// li r4,18
	ctx.r4.s64 = 18;
	// stw r11,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r11.u32);
	// bl 0x83522540
	ctx.lr = 0x83484014;
	sub_83522540(ctx, base);
	// stw r3,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83522540
	ctx.lr = 0x83484024;
	sub_83522540(ctx, base);
	// lis r8,-31928
	ctx.r8.s64 = -2092433408;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r3,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r3.u32);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// stw r30,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r30.u32);
	// addi r6,r8,-9120
	ctx.r6.s64 = ctx.r8.s64 + -9120;
	// addi r3,r9,4448
	ctx.r3.s64 = ctx.r9.s64 + 4448;
	// stw r7,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r7.u32);
	// li r4,21
	ctx.r4.s64 = 21;
	// stw r6,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r6.u32);
	// bl 0x83522540
	ctx.lr = 0x83484050;
	sub_83522540(ctx, base);
	// stw r3,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83522540
	ctx.lr = 0x83484060;
	sub_83522540(ctx, base);
	// lis r5,-31928
	ctx.r5.s64 = -2092433408;
	// stw r3,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r3.u32);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// addi r11,r5,-9120
	ctx.r11.s64 = ctx.r5.s64 + -9120;
	// stw r3,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r30.u32);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
	// bl 0x833c04d8
	ctx.lr = 0x83484088;
	sub_833C04D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8347e4b8
	ctx.lr = 0x834840A0;
	sub_8347E4B8(ctx, base);
	// addi r31,r1,736
	ctx.r31.s64 = ctx.r1.s64 + 736;
	// li r30,31
	ctx.r30.s64 = 31;
loc_834840A8:
	// addi r31,r31,-20
	ctx.r31.s64 = ctx.r31.s64 + -20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83521f50
	ctx.lr = 0x834840B4;
	sub_83521F50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83521f50
	ctx.lr = 0x834840BC;
	sub_83521F50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge 0x834840a8
	if (!cr0.lt) goto loc_834840A8;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834840CC"))) PPC_WEAK_FUNC(sub_834840CC);
PPC_FUNC_IMPL(__imp__sub_834840CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834840D0"))) PPC_WEAK_FUNC(sub_834840D0);
PPC_FUNC_IMPL(__imp__sub_834840D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x834840D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_834840F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x834840f0
	if (!cr6.eq) goto loc_834840F0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-11308(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11308);
	// bl 0x83521388
	ctx.lr = 0x8348411C;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x834843b8
	if (cr6.eq) goto loc_834843B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11620
	ctx.r4.s64 = ctx.r11.s64 + 11620;
	// bl 0x838fc840
	ctx.lr = 0x83484138;
	sub_838FC840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e198
	ctx.lr = 0x83484144;
	sub_8347E198(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,32380
	ctx.r28.s64 = ctx.r11.s64 + 32380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x838fc840
	ctx.lr = 0x8348415C;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484184
	if (cr6.eq) goto loc_83484184;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831d0fd0
	ctx.lr = 0x83484174;
	sub_831D0FD0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83484188
	if (!cr6.eq) goto loc_83484188;
loc_83484184:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83484188:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bl 0x838fc840
	ctx.lr = 0x834841A0;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r27,17
	cr6.compare<uint32_t>(ctx.r27.u32, 17, xer);
	// bgt cr6,0x83484454
	if (cr6.gt) goto loc_83484454;
	// lis r12,-31928
	ctx.r12.s64 = -2092433408;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16832
	ctx.r12.s64 = ctx.r12.s64 + 16832;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_83484208;
	case 1:
		goto loc_83484220;
	case 2:
		goto loc_83484238;
	case 3:
		goto loc_83484250;
	case 4:
		goto loc_83484268;
	case 5:
		goto loc_83484280;
	case 6:
		goto loc_83484298;
	case 7:
		goto loc_834842B0;
	case 8:
		goto loc_834842C8;
	case 9:
		goto loc_834842E0;
	case 10:
		goto loc_834842F8;
	case 11:
		goto loc_83484310;
	case 12:
		goto loc_83484328;
	case 13:
		goto loc_83484340;
	case 14:
		goto loc_83484358;
	case 15:
		goto loc_83484370;
	case 16:
		goto loc_83484388;
	case 17:
		goto loc_834843A0;
	default:
		return;
	}
	// lwz r26,16904(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16904);
	// lwz r26,16928(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16928);
	// lwz r26,16952(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16952);
	// lwz r26,16976(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16976);
	// lwz r26,17000(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17000);
	// lwz r26,17024(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17024);
	// lwz r26,17048(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17048);
	// lwz r26,17072(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17072);
	// lwz r26,17096(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17096);
	// lwz r26,17120(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17120);
	// lwz r26,17144(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17144);
	// lwz r26,17168(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17168);
	// lwz r26,17192(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17192);
	// lwz r26,17216(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17216);
	// lwz r26,17240(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17240);
	// lwz r26,17264(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17264);
	// lwz r26,17288(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17288);
	// lwz r26,17312(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17312);
loc_83484208:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347fd28
	ctx.lr = 0x83484218;
	sub_8347FD28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484220:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x834800a8
	ctx.lr = 0x83484230;
	sub_834800A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484238:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83480188
	ctx.lr = 0x83484248;
	sub_83480188(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484250:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x834805e8
	ctx.lr = 0x83484260;
	sub_834805E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484268:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83480b08
	ctx.lr = 0x83484278;
	sub_83480B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484280:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83480c60
	ctx.lr = 0x83484290;
	sub_83480C60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484298:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83480ed0
	ctx.lr = 0x834842A8;
	sub_83480ED0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_834842B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x834810b0
	ctx.lr = 0x834842C0;
	sub_834810B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_834842C8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x834812e0
	ctx.lr = 0x834842D8;
	sub_834812E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_834842E0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83481510
	ctx.lr = 0x834842F0;
	sub_83481510(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_834842F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x834816a0
	ctx.lr = 0x83484308;
	sub_834816A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484310:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83481988
	ctx.lr = 0x83484320;
	sub_83481988(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484328:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83482d10
	ctx.lr = 0x83484338;
	sub_83482D10(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484340:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83482000
	ctx.lr = 0x83484350;
	sub_83482000(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484358:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347ff90
	ctx.lr = 0x83484368;
	sub_8347FF90(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484370:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83483628
	ctx.lr = 0x83484380;
	sub_83483628(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83484388:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83483890
	ctx.lr = 0x83484398;
	sub_83483890(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_834843A0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83482ef8
	ctx.lr = 0x834843B0;
	sub_83482EF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_834843B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_834843BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x834843bc
	if (!cr6.eq) goto loc_834843BC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r3,-11188(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11188);
	// bl 0x83521388
	ctx.lr = 0x834843E8;
	sub_83521388(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83484454
	if (cr6.eq) goto loc_83484454;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,11620
	ctx.r4.s64 = ctx.r11.s64 + 11620;
	// bl 0x838fc840
	ctx.lr = 0x83484404;
	sub_838FC840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8347e198
	ctx.lr = 0x83484410;
	sub_8347E198(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,4944
	ctx.r4.s64 = ctx.r10.s64 + 4944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x83484424;
	sub_838FC840(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8347d970
	ctx.lr = 0x8348442C;
	sub_8347D970(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x8347e218
	ctx.lr = 0x83484444;
	sub_8347E218(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,296
	ctx.r3.s64 = ctx.r29.s64 + 296;
	// bl 0x82d54828
	ctx.lr = 0x83484454;
	sub_82D54828(ctx, base);
loc_83484454:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8348445C"))) PPC_WEAK_FUNC(sub_8348445C);
PPC_FUNC_IMPL(__imp__sub_8348445C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484460"))) PPC_WEAK_FUNC(sub_83484460);
PPC_FUNC_IMPL(__imp__sub_83484460) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x834840d0
	sub_834840D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83484468"))) PPC_WEAK_FUNC(sub_83484468);
PPC_FUNC_IMPL(__imp__sub_83484468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83484474"))) PPC_WEAK_FUNC(sub_83484474);
PPC_FUNC_IMPL(__imp__sub_83484474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484478"))) PPC_WEAK_FUNC(sub_83484478);
PPC_FUNC_IMPL(__imp__sub_83484478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83484484"))) PPC_WEAK_FUNC(sub_83484484);
PPC_FUNC_IMPL(__imp__sub_83484484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484488"))) PPC_WEAK_FUNC(sub_83484488);
PPC_FUNC_IMPL(__imp__sub_83484488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83484494"))) PPC_WEAK_FUNC(sub_83484494);
PPC_FUNC_IMPL(__imp__sub_83484494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484498"))) PPC_WEAK_FUNC(sub_83484498);
PPC_FUNC_IMPL(__imp__sub_83484498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834844A4"))) PPC_WEAK_FUNC(sub_834844A4);
PPC_FUNC_IMPL(__imp__sub_834844A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834844A8"))) PPC_WEAK_FUNC(sub_834844A8);
PPC_FUNC_IMPL(__imp__sub_834844A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834844B4"))) PPC_WEAK_FUNC(sub_834844B4);
PPC_FUNC_IMPL(__imp__sub_834844B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834844B8"))) PPC_WEAK_FUNC(sub_834844B8);
PPC_FUNC_IMPL(__imp__sub_834844B8) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,5008
	ctx.r9.s64 = ctx.r11.s64 + 5008;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83484520
	if (cr6.eq) goto loc_83484520;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x834844F8;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484518
	if (cr6.eq) goto loc_83484518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83484518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83484518:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83484520;
	sub_82595170(ctx, base);
loc_83484520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833eb270
	ctx.lr = 0x83484528;
	sub_833EB270(ctx, base);
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

__attribute__((alias("__imp__sub_8348453C"))) PPC_WEAK_FUNC(sub_8348453C);
PPC_FUNC_IMPL(__imp__sub_8348453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484540"))) PPC_WEAK_FUNC(sub_83484540);
PPC_FUNC_IMPL(__imp__sub_83484540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83484548;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x834845b4
	if (cr0.eq) goto loc_834845B4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83484578:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83484590;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// blt cr6,0x83484578
	if (cr6.lt) goto loc_83484578;
loc_834845B4:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_834845C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x834845c0
	if (!cr6.eq) goto loc_834845C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_834845EC"))) PPC_WEAK_FUNC(sub_834845EC);
PPC_FUNC_IMPL(__imp__sub_834845EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834845F0"))) PPC_WEAK_FUNC(sub_834845F0);
PPC_FUNC_IMPL(__imp__sub_834845F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x834845F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r10,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x834846c8
	if (cr0.eq) goto loc_834846C8;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
loc_83484668:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r26.u32 = ea;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8348468C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r8,r28,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x834846A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r3,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x83484668
	if (cr6.lt) goto loc_83484668;
loc_834846C8:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_834846DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x834846dc
	if (!cr6.eq) goto loc_834846DC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x831ce980
	ctx.lr = 0x83484704;
	sub_831CE980(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8348470C"))) PPC_WEAK_FUNC(sub_8348470C);
PPC_FUNC_IMPL(__imp__sub_8348470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484710"))) PPC_WEAK_FUNC(sub_83484710);
PPC_FUNC_IMPL(__imp__sub_83484710) {
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
	// bl 0x834844b8
	ctx.lr = 0x83484730;
	sub_834844B8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83484750
	if (cr6.eq) goto loc_83484750;
	// bl 0x82595188
	ctx.lr = 0x83484740;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83484750;
	sub_825952B8(ctx, base);
loc_83484750:
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

__attribute__((alias("__imp__sub_8348476C"))) PPC_WEAK_FUNC(sub_8348476C);
PPC_FUNC_IMPL(__imp__sub_8348476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484770"))) PPC_WEAK_FUNC(sub_83484770);
PPC_FUNC_IMPL(__imp__sub_83484770) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83484540
	ctx.lr = 0x83484790;
	sub_83484540(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x8348479C;
	sub_833EA398(ctx, base);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834847B8"))) PPC_WEAK_FUNC(sub_834847B8);
PPC_FUNC_IMPL(__imp__sub_834847B8) {
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
	// bl 0x833ea3a0
	ctx.lr = 0x834847D8;
	sub_833EA3A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x834847E0;
	sub_833EA398(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x834845f0
	ctx.lr = 0x834847EC;
	sub_834845F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83484804"))) PPC_WEAK_FUNC(sub_83484804);
PPC_FUNC_IMPL(__imp__sub_83484804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484808"))) PPC_WEAK_FUNC(sub_83484808);
PPC_FUNC_IMPL(__imp__sub_83484808) {
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,5028
	ctx.r9.s64 = ctx.r10.s64 + 5028;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// bl 0x83522850
	ctx.lr = 0x83484848;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83484884
	if (!cr6.eq) goto loc_83484884;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_83484868:
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
	// bne 0x83484868
	if (!cr0.eq) goto loc_83484868;
loc_83484884:
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

__attribute__((alias("__imp__sub_8348489C"))) PPC_WEAK_FUNC(sub_8348489C);
PPC_FUNC_IMPL(__imp__sub_8348489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834848A0"))) PPC_WEAK_FUNC(sub_834848A0);
PPC_FUNC_IMPL(__imp__sub_834848A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x834848A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83484a1c
	if (cr6.eq) goto loc_83484A1C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x834849bc
	if (!cr6.gt) goto loc_834849BC;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
loc_834848D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x833eb7f8
	ctx.lr = 0x834848E8;
	sub_833EB7F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e9ca0
	ctx.lr = 0x834848F0;
	sub_833E9CA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83484914
	if (!cr6.lt) goto loc_83484914;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x83484918
	if (!cr6.gt) goto loc_83484918;
loc_83484914:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83484918:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83484968
	if (cr6.eq) goto loc_83484968;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// srawi r30,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 3;
	// bne cr6,0x8348494c
	if (!cr6.eq) goto loc_8348494C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833d3568
	ctx.lr = 0x8348494C;
	sub_833D3568(ctx, base);
loc_8348494C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484994
	if (cr6.eq) goto loc_83484994;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83484990
	goto loc_83484990;
loc_83484968:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83484980
	if (!cr6.eq) goto loc_83484980;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833d3568
	ctx.lr = 0x83484980;
	sub_833D3568(ctx, base);
loc_83484980:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484994
	if (cr6.eq) goto loc_83484994;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_83484990:
	// bl 0x833eb8f0
	ctx.lr = 0x83484994;
	sub_833EB8F0(ctx, base);
loc_83484994:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x833e9840
	ctx.lr = 0x834849AC;
	sub_833E9840(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x834848d8
	if (cr6.lt) goto loc_834848D8;
loc_834849BC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r10.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r9,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r9.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_834849E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x834849e0
	if (!cr6.eq) goto loc_834849E0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x83484A00;
	sub_83522540(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83522040
	ctx.lr = 0x83484A10;
	sub_83522040(ctx, base);
	// stw r3,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83521f50
	ctx.lr = 0x83484A1C;
	sub_83521F50(ctx, base);
loc_83484A1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83484A24"))) PPC_WEAK_FUNC(sub_83484A24);
PPC_FUNC_IMPL(__imp__sub_83484A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484A28"))) PPC_WEAK_FUNC(sub_83484A28);
PPC_FUNC_IMPL(__imp__sub_83484A28) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,5028
	ctx.r10.s64 = ctx.r11.s64 + 5028;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83521f50
	ctx.lr = 0x83484A50;
	sub_83521F50(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484a84
	if (cr6.eq) goto loc_83484A84;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x833ea3a8
	ctx.lr = 0x83484A70;
	sub_833EA3A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83484A84;
	sub_825952B8(ctx, base);
loc_83484A84:
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

__attribute__((alias("__imp__sub_83484AA8"))) PPC_WEAK_FUNC(sub_83484AA8);
PPC_FUNC_IMPL(__imp__sub_83484AA8) {
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
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23376
	ctx.r11.s64 = ctx.r11.s64 + -23376;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_83484ACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x83484af0
	if (cr6.eq) goto loc_83484AF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83484acc
	if (cr6.eq) goto loc_83484ACC;
loc_83484AF0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83484b14
	if (!cr6.eq) goto loc_83484B14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833eb878
	ctx.lr = 0x83484B00;
	sub_833EB878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x833d3840
	ctx.lr = 0x83484B0C;
	sub_833D3840(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e9840
	ctx.lr = 0x83484B14;
	sub_833E9840(ctx, base);
loc_83484B14:
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

__attribute__((alias("__imp__sub_83484B28"))) PPC_WEAK_FUNC(sub_83484B28);
PPC_FUNC_IMPL(__imp__sub_83484B28) {
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
	// bl 0x83484a28
	ctx.lr = 0x83484B48;
	sub_83484A28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83484b68
	if (cr6.eq) goto loc_83484B68;
	// bl 0x82595188
	ctx.lr = 0x83484B58;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83484B68;
	sub_825952B8(ctx, base);
loc_83484B68:
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

__attribute__((alias("__imp__sub_83484B84"))) PPC_WEAK_FUNC(sub_83484B84);
PPC_FUNC_IMPL(__imp__sub_83484B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484B88"))) PPC_WEAK_FUNC(sub_83484B88);
PPC_FUNC_IMPL(__imp__sub_83484B88) {
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
	// bl 0x833ec430
	ctx.lr = 0x83484BA0;
	sub_833EC430(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,5008
	ctx.r9.s64 = ctx.r11.s64 + 5008;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83484BC4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484bd8
	if (cr6.eq) goto loc_83484BD8;
	// bl 0x83484808
	ctx.lr = 0x83484BD0;
	sub_83484808(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x83484bdc
	goto loc_83484BDC;
loc_83484BD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83484BDC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83484BF8"))) PPC_WEAK_FUNC(sub_83484BF8);
PPC_FUNC_IMPL(__imp__sub_83484BF8) {
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
	// bl 0x833ec4b0
	ctx.lr = 0x83484C18;
	sub_833EC4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833ea398
	ctx.lr = 0x83484C20;
	sub_833EA398(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x834848a0
	ctx.lr = 0x83484C2C;
	sub_834848A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83484C44"))) PPC_WEAK_FUNC(sub_83484C44);
PPC_FUNC_IMPL(__imp__sub_83484C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484C48"))) PPC_WEAK_FUNC(sub_83484C48);
PPC_FUNC_IMPL(__imp__sub_83484C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83484aa8
	sub_83484AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83484C50"))) PPC_WEAK_FUNC(sub_83484C50);
PPC_FUNC_IMPL(__imp__sub_83484C50) {
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
	// lis r31,-31746
	ctx.r31.s64 = -2080505856;
	// lwz r11,-9804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9804);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83484cac
	if (cr6.eq) goto loc_83484CAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83484C84;
	sub_82595150(ctx, base);
	// lwz r3,-9804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9804);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83484ca4
	if (cr6.eq) goto loc_83484CA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83484CA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83484CA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83484CAC;
	sub_82595170(ctx, base);
loc_83484CAC:
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

__attribute__((alias("__imp__sub_83484CC0"))) PPC_WEAK_FUNC(sub_83484CC0);
PPC_FUNC_IMPL(__imp__sub_83484CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83484cec
	if (cr6.eq) goto loc_83484CEC;
loc_83484CD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x83484cf4
	if (cr6.eq) goto loc_83484CF4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83484cd0
	if (!cr6.eq) goto loc_83484CD0;
loc_83484CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83484CF4:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
loc_83484CFC:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r5
	ea = ctx.r5.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r5
	ea = ctx.r5.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83484cfc
	if (!cr0.eq) goto loc_83484CFC;
	// lwsync 
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83484D24"))) PPC_WEAK_FUNC(sub_83484D24);
PPC_FUNC_IMPL(__imp__sub_83484D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83484D28"))) PPC_WEAK_FUNC(sub_83484D28);
PPC_FUNC_IMPL(__imp__sub_83484D28) {
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
	// lis r30,-31746
	ctx.r30.s64 = -2080505856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-9804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9804);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82596fe8
	ctx.lr = 0x83484D50;
	sub_82596FE8(ctx, base);
	// lwz r9,-9804(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9804);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83484d80
	if (cr6.eq) goto loc_83484D80;
loc_83484D64:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// beq cr6,0x83484da8
	if (cr6.eq) goto loc_83484DA8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83484d64
	if (!cr6.eq) goto loc_83484D64;
loc_83484D80:
	// li r31,1
	ctx.r31.s64 = 1;
loc_83484D84:
	// addi r3,r9,20
	ctx.r3.s64 = ctx.r9.s64 + 20;
	// bl 0x82597088
	ctx.lr = 0x83484D8C;
	sub_82597088(ctx, base);
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
loc_83484DA8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x83484d84
	goto loc_83484D84;
}

__attribute__((alias("__imp__sub_83484DB0"))) PPC_WEAK_FUNC(sub_83484DB0);
PPC_FUNC_IMPL(__imp__sub_83484DB0) {
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
	// lis r30,-31746
	ctx.r30.s64 = -2080505856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-9804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9804);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82596fe8
	ctx.lr = 0x83484DD8;
	sub_82596FE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-9804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9804);
	// bl 0x83484cc0
	ctx.lr = 0x83484DE4;
	sub_83484CC0(ctx, base);
	// lwz r11,-9804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9804);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82597088
	ctx.lr = 0x83484DF4;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_83484E10"))) PPC_WEAK_FUNC(sub_83484E10);
PPC_FUNC_IMPL(__imp__sub_83484E10) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x83484e84
	if (cr6.eq) goto loc_83484E84;
loc_83484E34:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83484e60
	if (cr6.eq) goto loc_83484E60;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x83484e34
	if (!cr6.eq) goto loc_83484E34;
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
loc_83484E60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x83484E78;
	sub_831CE420(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_83484E84:
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

__attribute__((alias("__imp__sub_83484E98"))) PPC_WEAK_FUNC(sub_83484E98);
PPC_FUNC_IMPL(__imp__sub_83484E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83484EA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r27,-31746
	ctx.r27.s64 = -2080505856;
	// addi r10,r11,5104
	ctx.r10.s64 = ctx.r11.s64 + 5104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,-9804(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9804);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82596fe8
	ctx.lr = 0x83484EC4;
	sub_82596FE8(ctx, base);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83484f34
	if (cr6.eq) goto loc_83484F34;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83484EE4;
	sub_82595150(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83484f2c
	if (cr6.eq) goto loc_83484F2C;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x83484f18
	if (cr0.lt) goto loc_83484F18;
loc_83484F08:
	// lwzu r3,-4(r30)
	ea = -4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83521f50
	ctx.lr = 0x83484F10;
	sub_83521F50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x83484f08
	if (!cr0.lt) goto loc_83484F08;
loc_83484F18:
	// bl 0x82595188
	ctx.lr = 0x83484F1C;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83484F2C;
	sub_825952B8(ctx, base);
loc_83484F2C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83484F34;
	sub_82595170(ctx, base);
loc_83484F34:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-9804(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9804);
	// bl 0x83484e10
	ctx.lr = 0x83484F40;
	sub_83484E10(ctx, base);
	// lwz r11,-9804(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9804);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82597088
	ctx.lr = 0x83484F4C;
	sub_82597088(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r10,r11,14480
	ctx.r10.s64 = ctx.r11.s64 + 14480;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83484F60"))) PPC_WEAK_FUNC(sub_83484F60);
PPC_FUNC_IMPL(__imp__sub_83484F60) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r10,5108
	ctx.r8.s64 = ctx.r10.s64 + 5108;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// beq cr6,0x83484fa8
	if (cr6.eq) goto loc_83484FA8;
loc_83484F90:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x833c99c0
	ctx.lr = 0x83484F98;
	sub_833C99C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83484f90
	if (!cr6.eq) goto loc_83484F90;
loc_83484FA8:
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82596f90
	ctx.lr = 0x83484FB0;
	sub_82596F90(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83484fcc
	if (cr6.eq) goto loc_83484FCC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83484FCC;
	sub_825952B8(ctx, base);
loc_83484FCC:
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

__attribute__((alias("__imp__sub_83484FF0"))) PPC_WEAK_FUNC(sub_83484FF0);
PPC_FUNC_IMPL(__imp__sub_83484FF0) {
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
	// bl 0x83484f60
	ctx.lr = 0x83485010;
	sub_83484F60(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83485030
	if (cr6.eq) goto loc_83485030;
	// bl 0x82595188
	ctx.lr = 0x83485020;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83485030;
	sub_825952B8(ctx, base);
loc_83485030:
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

__attribute__((alias("__imp__sub_8348504C"))) PPC_WEAK_FUNC(sub_8348504C);
PPC_FUNC_IMPL(__imp__sub_8348504C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485050"))) PPC_WEAK_FUNC(sub_83485050);
PPC_FUNC_IMPL(__imp__sub_83485050) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83485078;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x834850c4
	if (cr6.eq) goto loc_834850C4;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r9,r10,5108
	ctx.r9.s64 = ctx.r10.s64 + 5108;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82596fa8
	ctx.lr = 0x834850A8;
	sub_82596FA8(ctx, base);
	// lis r8,-31746
	ctx.r8.s64 = -2080505856;
	// stw r31,-9804(r8)
	PPC_STORE_U32(ctx.r8.u32 + -9804, ctx.r31.u32);
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
loc_834850C4:
	// lis r10,-31746
	ctx.r10.s64 = -2080505856;
	// stw r11,-9804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -9804, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_834850E0"))) PPC_WEAK_FUNC(sub_834850E0);
PPC_FUNC_IMPL(__imp__sub_834850E0) {
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
	// bl 0x83484e98
	ctx.lr = 0x83485100;
	sub_83484E98(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83485120
	if (cr6.eq) goto loc_83485120;
	// bl 0x82595188
	ctx.lr = 0x83485110;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83485120;
	sub_825952B8(ctx, base);
loc_83485120:
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

__attribute__((alias("__imp__sub_8348513C"))) PPC_WEAK_FUNC(sub_8348513C);
PPC_FUNC_IMPL(__imp__sub_8348513C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485140"))) PPC_WEAK_FUNC(sub_83485140);
PPC_FUNC_IMPL(__imp__sub_83485140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83485148;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r9,r11,5104
	ctx.r9.s64 = ctx.r11.s64 + 5104;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83485230
	if (cr6.eq) goto loc_83485230;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bgt cr6,0x834851a0
	if (cr6.gt) goto loc_834851A0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-5
	ctx.r9.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x834851a4
	if (!cr6.gt) goto loc_834851A4;
loc_834851A0:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_834851A4:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834851B4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x834851f8
	if (cr6.eq) goto loc_834851F8;
	// addic. r31,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// blt 0x834851f0
	if (cr0.lt) goto loc_834851F0;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r29,r26,-4
	ctx.r29.s64 = ctx.r26.s64 + -4;
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
loc_834851D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83522540
	ctx.lr = 0x834851E4;
	sub_83522540(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bge 0x834851d8
	if (!cr0.lt) goto loc_834851D8;
loc_834851F0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x834851fc
	goto loc_834851FC;
loc_834851F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_834851FC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// beq cr6,0x83485238
	if (cr6.eq) goto loc_83485238;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8348520C:
	// lwz r29,12(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r4,r31,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x83522040
	ctx.lr = 0x8348521C;
	sub_83522040(ctx, base);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8348520c
	if (!cr0.eq) goto loc_8348520C;
	// b 0x83485238
	goto loc_83485238;
loc_83485230:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_83485238:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r11,-31746
	ctx.r11.s64 = -2080505856;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,-9804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9804);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x835977d8
	ctx.lr = 0x83485250;
	sub_835977D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8348525C"))) PPC_WEAK_FUNC(sub_8348525C);
PPC_FUNC_IMPL(__imp__sub_8348525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485260"))) PPC_WEAK_FUNC(sub_83485260);
PPC_FUNC_IMPL(__imp__sub_83485260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83485268;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31746
	ctx.r31.s64 = -2080505856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-9804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9804);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82596fe8
	ctx.lr = 0x8348528C;
	sub_82596FE8(ctx, base);
	// lwz r10,-9804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9804);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x834852bc
	if (cr6.eq) goto loc_834852BC;
loc_834852A0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x83485304
	if (cr6.eq) goto loc_83485304;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x834852a0
	if (!cr6.eq) goto loc_834852A0;
loc_834852BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_834852C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83485314
	if (cr6.eq) goto loc_83485314;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x834852E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8348530c
	if (cr6.eq) goto loc_8348530C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83485140
	ctx.lr = 0x834852FC;
	sub_83485140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83485310
	goto loc_83485310;
loc_83485304:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x834852c0
	goto loc_834852C0;
loc_8348530C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_83485310:
	// lwz r10,-9804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9804);
loc_83485314:
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// bl 0x82597088
	ctx.lr = 0x8348531C;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83485328"))) PPC_WEAK_FUNC(sub_83485328);
PPC_FUNC_IMPL(__imp__sub_83485328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// addi r30,r1,-32
	ctx.r30.s64 = ctx.r1.s64 + -32;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// lvx128 v61,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,344(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// lvx128 v59,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// stvx128 v58,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,348(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// lvx128 v57,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v56,v57,3
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0x0));
	// stvx128 v56,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,352(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// lvx128 v55,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// stvx128 v54,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,356(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// lvx128 v53,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v52,v53,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xAA));
	// stvx128 v52,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,360(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// lvx128 v51,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v50,v51,2
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0x55));
	// stvx128 v50,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,364(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lvx128 v49,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v48,v49,3
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x0));
	// stvx128 v48,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,368(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 368, temp.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834853FC"))) PPC_WEAK_FUNC(sub_834853FC);
PPC_FUNC_IMPL(__imp__sub_834853FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485400"))) PPC_WEAK_FUNC(sub_83485400);
PPC_FUNC_IMPL(__imp__sub_83485400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348540C"))) PPC_WEAK_FUNC(sub_8348540C);
PPC_FUNC_IMPL(__imp__sub_8348540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485410"))) PPC_WEAK_FUNC(sub_83485410);
PPC_FUNC_IMPL(__imp__sub_83485410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348541C"))) PPC_WEAK_FUNC(sub_8348541C);
PPC_FUNC_IMPL(__imp__sub_8348541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485420"))) PPC_WEAK_FUNC(sub_83485420);
PPC_FUNC_IMPL(__imp__sub_83485420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348542C"))) PPC_WEAK_FUNC(sub_8348542C);
PPC_FUNC_IMPL(__imp__sub_8348542C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485430"))) PPC_WEAK_FUNC(sub_83485430);
PPC_FUNC_IMPL(__imp__sub_83485430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348543C"))) PPC_WEAK_FUNC(sub_8348543C);
PPC_FUNC_IMPL(__imp__sub_8348543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485440"))) PPC_WEAK_FUNC(sub_83485440);
PPC_FUNC_IMPL(__imp__sub_83485440) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348544C"))) PPC_WEAK_FUNC(sub_8348544C);
PPC_FUNC_IMPL(__imp__sub_8348544C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485450"))) PPC_WEAK_FUNC(sub_83485450);
PPC_FUNC_IMPL(__imp__sub_83485450) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348545C"))) PPC_WEAK_FUNC(sub_8348545C);
PPC_FUNC_IMPL(__imp__sub_8348545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485460"))) PPC_WEAK_FUNC(sub_83485460);
PPC_FUNC_IMPL(__imp__sub_83485460) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348546C"))) PPC_WEAK_FUNC(sub_8348546C);
PPC_FUNC_IMPL(__imp__sub_8348546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485470"))) PPC_WEAK_FUNC(sub_83485470);
PPC_FUNC_IMPL(__imp__sub_83485470) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348547C"))) PPC_WEAK_FUNC(sub_8348547C);
PPC_FUNC_IMPL(__imp__sub_8348547C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485480"))) PPC_WEAK_FUNC(sub_83485480);
PPC_FUNC_IMPL(__imp__sub_83485480) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stb r4,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348548C"))) PPC_WEAK_FUNC(sub_8348548C);
PPC_FUNC_IMPL(__imp__sub_8348548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83485490"))) PPC_WEAK_FUNC(sub_83485490);
PPC_FUNC_IMPL(__imp__sub_83485490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8348549C"))) PPC_WEAK_FUNC(sub_8348549C);
PPC_FUNC_IMPL(__imp__sub_8348549C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834854A0"))) PPC_WEAK_FUNC(sub_834854A0);
PPC_FUNC_IMPL(__imp__sub_834854A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834854AC"))) PPC_WEAK_FUNC(sub_834854AC);
PPC_FUNC_IMPL(__imp__sub_834854AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834854B0"))) PPC_WEAK_FUNC(sub_834854B0);
PPC_FUNC_IMPL(__imp__sub_834854B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834854BC"))) PPC_WEAK_FUNC(sub_834854BC);
PPC_FUNC_IMPL(__imp__sub_834854BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834854C0"))) PPC_WEAK_FUNC(sub_834854C0);
PPC_FUNC_IMPL(__imp__sub_834854C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834854CC"))) PPC_WEAK_FUNC(sub_834854CC);
PPC_FUNC_IMPL(__imp__sub_834854CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834854D0"))) PPC_WEAK_FUNC(sub_834854D0);
PPC_FUNC_IMPL(__imp__sub_834854D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834854DC"))) PPC_WEAK_FUNC(sub_834854DC);
PPC_FUNC_IMPL(__imp__sub_834854DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834854E0"))) PPC_WEAK_FUNC(sub_834854E0);
PPC_FUNC_IMPL(__imp__sub_834854E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_834854EC"))) PPC_WEAK_FUNC(sub_834854EC);
PPC_FUNC_IMPL(__imp__sub_834854EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_834854F0"))) PPC_WEAK_FUNC(sub_834854F0);
PPC_FUNC_IMPL(__imp__sub_834854F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// blr 
	return;
}

