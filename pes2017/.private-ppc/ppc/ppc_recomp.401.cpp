#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_835F9914"))) PPC_WEAK_FUNC(sub_835F9914);
PPC_FUNC_IMPL(__imp__sub_835F9914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9918"))) PPC_WEAK_FUNC(sub_835F9918);
PPC_FUNC_IMPL(__imp__sub_835F9918) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// addi r10,r11,24476
	ctx.r10.s64 = ctx.r11.s64 + 24476;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8258bf48
	ctx.lr = 0x835F9948;
	sub_8258BF48(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8258bf48
	ctx.lr = 0x835F9950;
	sub_8258BF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583b60
	ctx.lr = 0x835F9958;
	sub_82583B60(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x835f9978
	if (cr6.eq) goto loc_835F9978;
	// bl 0x82595188
	ctx.lr = 0x835F9968;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x835F9978;
	sub_825952B8(ctx, base);
loc_835F9978:
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

__attribute__((alias("__imp__sub_835F9994"))) PPC_WEAK_FUNC(sub_835F9994);
PPC_FUNC_IMPL(__imp__sub_835F9994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9998"))) PPC_WEAK_FUNC(sub_835F9998);
PPC_FUNC_IMPL(__imp__sub_835F9998) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x835F99D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835f99e8
	if (cr6.eq) goto loc_835F99E8;
	// bl 0x835f9878
	ctx.lr = 0x835F99E0;
	sub_835F9878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x835f99ec
	goto loc_835F99EC;
loc_835F99E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_835F99EC:
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82583340
	ctx.lr = 0x835F99FC;
	sub_82583340(ctx, base);
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

__attribute__((alias("__imp__sub_835F9A18"))) PPC_WEAK_FUNC(sub_835F9A18);
PPC_FUNC_IMPL(__imp__sub_835F9A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// lwz r3,19104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835F9A24"))) PPC_WEAK_FUNC(sub_835F9A24);
PPC_FUNC_IMPL(__imp__sub_835F9A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9A28"))) PPC_WEAK_FUNC(sub_835F9A28);
PPC_FUNC_IMPL(__imp__sub_835F9A28) {
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
	ctx.lr = 0x835F9A4C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x835f9a5c
	if (cr6.eq) goto loc_835F9A5C;
	// bl 0x835f9998
	ctx.lr = 0x835F9A58;
	sub_835F9998(ctx, base);
	// b 0x835f9a60
	goto loc_835F9A60;
loc_835F9A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_835F9A60:
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// stw r3,19104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19104, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_835F9A78"))) PPC_WEAK_FUNC(sub_835F9A78);
PPC_FUNC_IMPL(__imp__sub_835F9A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x835F9A80;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258be28
	ctx.lr = 0x835F9AA4;
	sub_8258BE28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,136(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258bdc8
	ctx.lr = 0x835F9ABC;
	sub_8258BDC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be88
	ctx.lr = 0x835F9AC8;
	sub_8258BE88(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9ADC"))) PPC_WEAK_FUNC(sub_835F9ADC);
PPC_FUNC_IMPL(__imp__sub_835F9ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9AE0"))) PPC_WEAK_FUNC(sub_835F9AE0);
PPC_FUNC_IMPL(__imp__sub_835F9AE0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8379f778
	ctx.lr = 0x835F9AFC;
	sub_8379F778(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_835F9B18"))) PPC_WEAK_FUNC(sub_835F9B18);
PPC_FUNC_IMPL(__imp__sub_835F9B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x835F9B20;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832d22f8
	ctx.lr = 0x835F9B2C;
	sub_832D22F8(ctx, base);
	// addi r29,r31,120
	ctx.r29.s64 = ctx.r31.s64 + 120;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r27,-31766
	ctx.r27.s64 = -2081816576;
loc_835F9B3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8258be28
	ctx.lr = 0x835F9B48;
	sub_8258BE28(ctx, base);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x835f9b6c
	if (!cr6.eq) goto loc_835F9B6C;
loc_835F9B54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8258bd68
	ctx.lr = 0x835F9B60;
	sub_8258BD68(ctx, base);
	// lwz r30,128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835f9b54
	if (cr6.eq) goto loc_835F9B54;
loc_835F9B6C:
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8258be88
	ctx.lr = 0x835F9B7C;
	sub_8258BE88(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x835f9be8
	if (cr6.eq) goto loc_835F9BE8;
	// bl 0x8379f5d8
	ctx.lr = 0x835F9B88;
	sub_8379F5D8(ctx, base);
	// std r28,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r28.u64);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,-17544(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17544);
	// bl 0x82572fa0
	ctx.lr = 0x835F9B98;
	sub_82572FA0(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82581eb8
	ctx.lr = 0x835F9BA0;
	sub_82581EB8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825811b0
	ctx.lr = 0x835F9BA8;
	sub_825811B0(ctx, base);
	// bl 0x8379fdc8
	ctx.lr = 0x835F9BAC;
	sub_8379FDC8(ctx, base);
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8258be28
	ctx.lr = 0x835F9BBC;
	sub_8258BE28(ctx, base);
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8258bdc8
	ctx.lr = 0x835F9BCC;
	sub_8258BDC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8258be88
	ctx.lr = 0x835F9BD8;
	sub_8258BE88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x835F9BE4;
	sub_82572FA0(ctx, base);
	// b 0x835f9b3c
	goto loc_835F9B3C;
loc_835F9BE8:
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8258be28
	ctx.lr = 0x835F9BF8;
	sub_8258BE28(ctx, base);
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8258bdc8
	ctx.lr = 0x835F9C08;
	sub_8258BDC8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8258be88
	ctx.lr = 0x835F9C14;
	sub_8258BE88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9C1C"))) PPC_WEAK_FUNC(sub_835F9C1C);
PPC_FUNC_IMPL(__imp__sub_835F9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9C20"))) PPC_WEAK_FUNC(sub_835F9C20);
PPC_FUNC_IMPL(__imp__sub_835F9C20) {
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
	// lis r31,-31744
	ctx.r31.s64 = -2080374784;
	// lwz r11,19104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x835f9c88
	if (cr6.eq) goto loc_835F9C88;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x835F9C58;
	sub_82595150(ctx, base);
	// lwz r30,19104(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19104);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x835f9c80
	if (cr6.eq) goto loc_835F9C80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8379f9b8
	ctx.lr = 0x835F9C6C;
	sub_8379F9B8(ctx, base);
	// bl 0x82595188
	ctx.lr = 0x835F9C70;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x835F9C80;
	sub_825952B8(ctx, base);
loc_835F9C80:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x835F9C88;
	sub_82595170(ctx, base);
loc_835F9C88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_835F9CA8"))) PPC_WEAK_FUNC(sub_835F9CA8);
PPC_FUNC_IMPL(__imp__sub_835F9CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,19128
	ctx.r29.s64 = ctx.r11.s64 + 19128;
	// lwz r11,19320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19320);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9d04
	if (!cr6.eq) goto loc_835F9D04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,19320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19320, ctx.r11.u32);
	// li r31,11
	ctx.r31.s64 = 11;
loc_835F9CE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9CEC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9ce4
	if (!cr0.lt) goto loc_835F9CE4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17976
	ctx.r3.s64 = ctx.r11.s64 + -17976;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9D04;
	sub_831CDCC8(ctx, base);
loc_835F9D04:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9D14"))) PPC_WEAK_FUNC(sub_835F9D14);
PPC_FUNC_IMPL(__imp__sub_835F9D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9D18"))) PPC_WEAK_FUNC(sub_835F9D18);
PPC_FUNC_IMPL(__imp__sub_835F9D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,19328
	ctx.r29.s64 = ctx.r11.s64 + 19328;
	// lwz r11,19376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19376);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9d74
	if (!cr6.eq) goto loc_835F9D74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,19376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19376, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835F9D54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9D5C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9d54
	if (!cr0.lt) goto loc_835F9D54;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17896
	ctx.r3.s64 = ctx.r11.s64 + -17896;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9D74;
	sub_831CDCC8(ctx, base);
loc_835F9D74:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9D84"))) PPC_WEAK_FUNC(sub_835F9D84);
PPC_FUNC_IMPL(__imp__sub_835F9D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9D88"))) PPC_WEAK_FUNC(sub_835F9D88);
PPC_FUNC_IMPL(__imp__sub_835F9D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,19384
	ctx.r29.s64 = ctx.r11.s64 + 19384;
	// lwz r11,19416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19416);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9de4
	if (!cr6.eq) goto loc_835F9DE4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,19416(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19416, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835F9DC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9DCC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9dc4
	if (!cr0.lt) goto loc_835F9DC4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17816
	ctx.r3.s64 = ctx.r11.s64 + -17816;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9DE4;
	sub_831CDCC8(ctx, base);
loc_835F9DE4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9DF4"))) PPC_WEAK_FUNC(sub_835F9DF4);
PPC_FUNC_IMPL(__imp__sub_835F9DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9DF8"))) PPC_WEAK_FUNC(sub_835F9DF8);
PPC_FUNC_IMPL(__imp__sub_835F9DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,19424
	ctx.r29.s64 = ctx.r11.s64 + 19424;
	// lwz r11,19568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19568);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9e54
	if (!cr6.eq) goto loc_835F9E54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,19568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19568, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
loc_835F9E34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9E3C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9e34
	if (!cr0.lt) goto loc_835F9E34;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17736
	ctx.r3.s64 = ctx.r11.s64 + -17736;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9E54;
	sub_831CDCC8(ctx, base);
loc_835F9E54:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9E64"))) PPC_WEAK_FUNC(sub_835F9E64);
PPC_FUNC_IMPL(__imp__sub_835F9E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9E68"))) PPC_WEAK_FUNC(sub_835F9E68);
PPC_FUNC_IMPL(__imp__sub_835F9E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,19576
	ctx.r29.s64 = ctx.r11.s64 + 19576;
	// lwz r11,19640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19640);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9ec4
	if (!cr6.eq) goto loc_835F9EC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,19640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19640, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835F9EA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9EAC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9ea4
	if (!cr0.lt) goto loc_835F9EA4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17656
	ctx.r3.s64 = ctx.r11.s64 + -17656;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9EC4;
	sub_831CDCC8(ctx, base);
loc_835F9EC4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9ED4"))) PPC_WEAK_FUNC(sub_835F9ED4);
PPC_FUNC_IMPL(__imp__sub_835F9ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9ED8"))) PPC_WEAK_FUNC(sub_835F9ED8);
PPC_FUNC_IMPL(__imp__sub_835F9ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9EE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,19648
	ctx.r29.s64 = ctx.r11.s64 + 19648;
	// lwz r11,20992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9f34
	if (!cr6.eq) goto loc_835F9F34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,20992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20992, ctx.r11.u32);
	// li r31,83
	ctx.r31.s64 = 83;
loc_835F9F14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9F1C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9f14
	if (!cr0.lt) goto loc_835F9F14;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17576
	ctx.r3.s64 = ctx.r11.s64 + -17576;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9F34;
	sub_831CDCC8(ctx, base);
loc_835F9F34:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9F44"))) PPC_WEAK_FUNC(sub_835F9F44);
PPC_FUNC_IMPL(__imp__sub_835F9F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9F48"))) PPC_WEAK_FUNC(sub_835F9F48);
PPC_FUNC_IMPL(__imp__sub_835F9F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9F50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21000
	ctx.r29.s64 = ctx.r11.s64 + 21000;
	// lwz r11,21032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21032);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835f9fa4
	if (!cr6.eq) goto loc_835F9FA4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21032, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835F9F84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9F8C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9f84
	if (!cr0.lt) goto loc_835F9F84;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x831cdcc8
	ctx.lr = 0x835F9FA4;
	sub_831CDCC8(ctx, base);
loc_835F9FA4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835F9FB4"))) PPC_WEAK_FUNC(sub_835F9FB4);
PPC_FUNC_IMPL(__imp__sub_835F9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835F9FB8"))) PPC_WEAK_FUNC(sub_835F9FB8);
PPC_FUNC_IMPL(__imp__sub_835F9FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835F9FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21040
	ctx.r29.s64 = ctx.r11.s64 + 21040;
	// lwz r11,21120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21120);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa014
	if (!cr6.eq) goto loc_835FA014;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21120, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835F9FF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835F9FFC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835f9ff4
	if (!cr0.lt) goto loc_835F9FF4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17416
	ctx.r3.s64 = ctx.r11.s64 + -17416;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA014;
	sub_831CDCC8(ctx, base);
loc_835FA014:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA024"))) PPC_WEAK_FUNC(sub_835FA024);
PPC_FUNC_IMPL(__imp__sub_835FA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA028"))) PPC_WEAK_FUNC(sub_835FA028);
PPC_FUNC_IMPL(__imp__sub_835FA028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA030;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21128
	ctx.r29.s64 = ctx.r11.s64 + 21128;
	// lwz r11,21160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21160);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa084
	if (!cr6.eq) goto loc_835FA084;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21160, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FA064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA06C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa064
	if (!cr0.lt) goto loc_835FA064;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA084;
	sub_831CDCC8(ctx, base);
loc_835FA084:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA094"))) PPC_WEAK_FUNC(sub_835FA094);
PPC_FUNC_IMPL(__imp__sub_835FA094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA098"))) PPC_WEAK_FUNC(sub_835FA098);
PPC_FUNC_IMPL(__imp__sub_835FA098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA0A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21168
	ctx.r29.s64 = ctx.r11.s64 + 21168;
	// lwz r11,21472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21472);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa0f4
	if (!cr6.eq) goto loc_835FA0F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21472, ctx.r11.u32);
	// li r31,18
	ctx.r31.s64 = 18;
loc_835FA0D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA0DC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa0d4
	if (!cr0.lt) goto loc_835FA0D4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17256
	ctx.r3.s64 = ctx.r11.s64 + -17256;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA0F4;
	sub_831CDCC8(ctx, base);
loc_835FA0F4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA104"))) PPC_WEAK_FUNC(sub_835FA104);
PPC_FUNC_IMPL(__imp__sub_835FA104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA108"))) PPC_WEAK_FUNC(sub_835FA108);
PPC_FUNC_IMPL(__imp__sub_835FA108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21480
	ctx.r29.s64 = ctx.r11.s64 + 21480;
	// lwz r11,21560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa164
	if (!cr6.eq) goto loc_835FA164;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21560, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FA144:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA14C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa144
	if (!cr0.lt) goto loc_835FA144;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17176
	ctx.r3.s64 = ctx.r11.s64 + -17176;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA164;
	sub_831CDCC8(ctx, base);
loc_835FA164:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA174"))) PPC_WEAK_FUNC(sub_835FA174);
PPC_FUNC_IMPL(__imp__sub_835FA174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA178"))) PPC_WEAK_FUNC(sub_835FA178);
PPC_FUNC_IMPL(__imp__sub_835FA178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21568
	ctx.r29.s64 = ctx.r11.s64 + 21568;
	// lwz r11,21696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21696);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa1d4
	if (!cr6.eq) goto loc_835FA1D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21696, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
loc_835FA1B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA1BC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa1b4
	if (!cr0.lt) goto loc_835FA1B4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17096
	ctx.r3.s64 = ctx.r11.s64 + -17096;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA1D4;
	sub_831CDCC8(ctx, base);
loc_835FA1D4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA1E4"))) PPC_WEAK_FUNC(sub_835FA1E4);
PPC_FUNC_IMPL(__imp__sub_835FA1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA1E8"))) PPC_WEAK_FUNC(sub_835FA1E8);
PPC_FUNC_IMPL(__imp__sub_835FA1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA1F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21704
	ctx.r29.s64 = ctx.r11.s64 + 21704;
	// lwz r11,21752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21752);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa244
	if (!cr6.eq) goto loc_835FA244;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21752, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FA224:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA22C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa224
	if (!cr0.lt) goto loc_835FA224;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-17016
	ctx.r3.s64 = ctx.r11.s64 + -17016;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA244;
	sub_831CDCC8(ctx, base);
loc_835FA244:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA254"))) PPC_WEAK_FUNC(sub_835FA254);
PPC_FUNC_IMPL(__imp__sub_835FA254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA258"))) PPC_WEAK_FUNC(sub_835FA258);
PPC_FUNC_IMPL(__imp__sub_835FA258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21760
	ctx.r29.s64 = ctx.r11.s64 + 21760;
	// lwz r11,21824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21824);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa2b4
	if (!cr6.eq) goto loc_835FA2B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21824, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FA294:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA29C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa294
	if (!cr0.lt) goto loc_835FA294;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA2B4;
	sub_831CDCC8(ctx, base);
loc_835FA2B4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA2C4"))) PPC_WEAK_FUNC(sub_835FA2C4);
PPC_FUNC_IMPL(__imp__sub_835FA2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA2C8"))) PPC_WEAK_FUNC(sub_835FA2C8);
PPC_FUNC_IMPL(__imp__sub_835FA2C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA2D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21832
	ctx.r29.s64 = ctx.r11.s64 + 21832;
	// lwz r11,21864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21864);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa324
	if (!cr6.eq) goto loc_835FA324;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21864, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FA304:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA30C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa304
	if (!cr0.lt) goto loc_835FA304;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16856
	ctx.r3.s64 = ctx.r11.s64 + -16856;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA324;
	sub_831CDCC8(ctx, base);
loc_835FA324:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA334"))) PPC_WEAK_FUNC(sub_835FA334);
PPC_FUNC_IMPL(__imp__sub_835FA334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA338"))) PPC_WEAK_FUNC(sub_835FA338);
PPC_FUNC_IMPL(__imp__sub_835FA338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21872
	ctx.r29.s64 = ctx.r11.s64 + 21872;
	// lwz r11,21904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21904);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa394
	if (!cr6.eq) goto loc_835FA394;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21904, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FA374:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA37C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa374
	if (!cr0.lt) goto loc_835FA374;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16776
	ctx.r3.s64 = ctx.r11.s64 + -16776;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA394;
	sub_831CDCC8(ctx, base);
loc_835FA394:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA3A4"))) PPC_WEAK_FUNC(sub_835FA3A4);
PPC_FUNC_IMPL(__imp__sub_835FA3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA3A8"))) PPC_WEAK_FUNC(sub_835FA3A8);
PPC_FUNC_IMPL(__imp__sub_835FA3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21912
	ctx.r29.s64 = ctx.r11.s64 + 21912;
	// lwz r11,21960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21960);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa404
	if (!cr6.eq) goto loc_835FA404;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,21960(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21960, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FA3E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA3EC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa3e4
	if (!cr0.lt) goto loc_835FA3E4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16696
	ctx.r3.s64 = ctx.r11.s64 + -16696;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA404;
	sub_831CDCC8(ctx, base);
loc_835FA404:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA414"))) PPC_WEAK_FUNC(sub_835FA414);
PPC_FUNC_IMPL(__imp__sub_835FA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA418"))) PPC_WEAK_FUNC(sub_835FA418);
PPC_FUNC_IMPL(__imp__sub_835FA418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,21968
	ctx.r29.s64 = ctx.r11.s64 + 21968;
	// lwz r11,22928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22928);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa474
	if (!cr6.eq) goto loc_835FA474;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,22928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22928, ctx.r11.u32);
	// li r31,59
	ctx.r31.s64 = 59;
loc_835FA454:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA45C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa454
	if (!cr0.lt) goto loc_835FA454;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16616
	ctx.r3.s64 = ctx.r11.s64 + -16616;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA474;
	sub_831CDCC8(ctx, base);
loc_835FA474:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA484"))) PPC_WEAK_FUNC(sub_835FA484);
PPC_FUNC_IMPL(__imp__sub_835FA484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA488"))) PPC_WEAK_FUNC(sub_835FA488);
PPC_FUNC_IMPL(__imp__sub_835FA488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,22936
	ctx.r29.s64 = ctx.r11.s64 + 22936;
	// lwz r11,22984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22984);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa4e4
	if (!cr6.eq) goto loc_835FA4E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,22984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22984, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FA4C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA4CC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa4c4
	if (!cr0.lt) goto loc_835FA4C4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16536
	ctx.r3.s64 = ctx.r11.s64 + -16536;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA4E4;
	sub_831CDCC8(ctx, base);
loc_835FA4E4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA4F4"))) PPC_WEAK_FUNC(sub_835FA4F4);
PPC_FUNC_IMPL(__imp__sub_835FA4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA4F8"))) PPC_WEAK_FUNC(sub_835FA4F8);
PPC_FUNC_IMPL(__imp__sub_835FA4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,22992
	ctx.r29.s64 = ctx.r11.s64 + 22992;
	// lwz r11,23040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23040);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa554
	if (!cr6.eq) goto loc_835FA554;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23040, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FA534:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA53C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa534
	if (!cr0.lt) goto loc_835FA534;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16456
	ctx.r3.s64 = ctx.r11.s64 + -16456;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA554;
	sub_831CDCC8(ctx, base);
loc_835FA554:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA564"))) PPC_WEAK_FUNC(sub_835FA564);
PPC_FUNC_IMPL(__imp__sub_835FA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA568"))) PPC_WEAK_FUNC(sub_835FA568);
PPC_FUNC_IMPL(__imp__sub_835FA568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA570;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23048
	ctx.r29.s64 = ctx.r11.s64 + 23048;
	// lwz r11,23160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23160);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa5c4
	if (!cr6.eq) goto loc_835FA5C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23160, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FA5A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA5AC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa5a4
	if (!cr0.lt) goto loc_835FA5A4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16376
	ctx.r3.s64 = ctx.r11.s64 + -16376;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA5C4;
	sub_831CDCC8(ctx, base);
loc_835FA5C4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA5D4"))) PPC_WEAK_FUNC(sub_835FA5D4);
PPC_FUNC_IMPL(__imp__sub_835FA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA5D8"))) PPC_WEAK_FUNC(sub_835FA5D8);
PPC_FUNC_IMPL(__imp__sub_835FA5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23168
	ctx.r29.s64 = ctx.r11.s64 + 23168;
	// lwz r11,23328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23328);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa634
	if (!cr6.eq) goto loc_835FA634;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23328, ctx.r11.u32);
	// li r31,9
	ctx.r31.s64 = 9;
loc_835FA614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA61C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa614
	if (!cr0.lt) goto loc_835FA614;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16296
	ctx.r3.s64 = ctx.r11.s64 + -16296;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA634;
	sub_831CDCC8(ctx, base);
loc_835FA634:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA644"))) PPC_WEAK_FUNC(sub_835FA644);
PPC_FUNC_IMPL(__imp__sub_835FA644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA648"))) PPC_WEAK_FUNC(sub_835FA648);
PPC_FUNC_IMPL(__imp__sub_835FA648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA650;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23336
	ctx.r29.s64 = ctx.r11.s64 + 23336;
	// lwz r11,23432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23432);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa6a4
	if (!cr6.eq) goto loc_835FA6A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23432, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FA684:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA68C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa684
	if (!cr0.lt) goto loc_835FA684;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA6A4;
	sub_831CDCC8(ctx, base);
loc_835FA6A4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA6B4"))) PPC_WEAK_FUNC(sub_835FA6B4);
PPC_FUNC_IMPL(__imp__sub_835FA6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA6B8"))) PPC_WEAK_FUNC(sub_835FA6B8);
PPC_FUNC_IMPL(__imp__sub_835FA6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA6C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23440
	ctx.r29.s64 = ctx.r11.s64 + 23440;
	// lwz r11,23536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23536);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa714
	if (!cr6.eq) goto loc_835FA714;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23536, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FA6F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA6FC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa6f4
	if (!cr0.lt) goto loc_835FA6F4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA714;
	sub_831CDCC8(ctx, base);
loc_835FA714:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA724"))) PPC_WEAK_FUNC(sub_835FA724);
PPC_FUNC_IMPL(__imp__sub_835FA724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA728"))) PPC_WEAK_FUNC(sub_835FA728);
PPC_FUNC_IMPL(__imp__sub_835FA728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23544
	ctx.r29.s64 = ctx.r11.s64 + 23544;
	// lwz r11,23576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23576);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa784
	if (!cr6.eq) goto loc_835FA784;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23576, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FA764:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA76C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa764
	if (!cr0.lt) goto loc_835FA764;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-16056
	ctx.r3.s64 = ctx.r11.s64 + -16056;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA784;
	sub_831CDCC8(ctx, base);
loc_835FA784:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA794"))) PPC_WEAK_FUNC(sub_835FA794);
PPC_FUNC_IMPL(__imp__sub_835FA794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA798"))) PPC_WEAK_FUNC(sub_835FA798);
PPC_FUNC_IMPL(__imp__sub_835FA798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA7A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23584
	ctx.r29.s64 = ctx.r11.s64 + 23584;
	// lwz r11,23616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23616);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa7f4
	if (!cr6.eq) goto loc_835FA7F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23616, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FA7D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA7DC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa7d4
	if (!cr0.lt) goto loc_835FA7D4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15976
	ctx.r3.s64 = ctx.r11.s64 + -15976;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA7F4;
	sub_831CDCC8(ctx, base);
loc_835FA7F4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA804"))) PPC_WEAK_FUNC(sub_835FA804);
PPC_FUNC_IMPL(__imp__sub_835FA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA808"))) PPC_WEAK_FUNC(sub_835FA808);
PPC_FUNC_IMPL(__imp__sub_835FA808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23624
	ctx.r29.s64 = ctx.r11.s64 + 23624;
	// lwz r11,23720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23720);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa864
	if (!cr6.eq) goto loc_835FA864;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23720, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FA844:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA84C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa844
	if (!cr0.lt) goto loc_835FA844;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15896
	ctx.r3.s64 = ctx.r11.s64 + -15896;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA864;
	sub_831CDCC8(ctx, base);
loc_835FA864:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA874"))) PPC_WEAK_FUNC(sub_835FA874);
PPC_FUNC_IMPL(__imp__sub_835FA874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA878"))) PPC_WEAK_FUNC(sub_835FA878);
PPC_FUNC_IMPL(__imp__sub_835FA878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23728
	ctx.r29.s64 = ctx.r11.s64 + 23728;
	// lwz r11,23840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23840);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa8d4
	if (!cr6.eq) goto loc_835FA8D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23840, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FA8B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA8BC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa8b4
	if (!cr0.lt) goto loc_835FA8B4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15816
	ctx.r3.s64 = ctx.r11.s64 + -15816;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA8D4;
	sub_831CDCC8(ctx, base);
loc_835FA8D4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA8E4"))) PPC_WEAK_FUNC(sub_835FA8E4);
PPC_FUNC_IMPL(__imp__sub_835FA8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA8E8"))) PPC_WEAK_FUNC(sub_835FA8E8);
PPC_FUNC_IMPL(__imp__sub_835FA8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA8F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23848
	ctx.r29.s64 = ctx.r11.s64 + 23848;
	// lwz r11,23912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23912);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa944
	if (!cr6.eq) goto loc_835FA944;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,23912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23912, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FA924:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA92C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa924
	if (!cr0.lt) goto loc_835FA924;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15736
	ctx.r3.s64 = ctx.r11.s64 + -15736;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA944;
	sub_831CDCC8(ctx, base);
loc_835FA944:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA954"))) PPC_WEAK_FUNC(sub_835FA954);
PPC_FUNC_IMPL(__imp__sub_835FA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA958"))) PPC_WEAK_FUNC(sub_835FA958);
PPC_FUNC_IMPL(__imp__sub_835FA958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA960;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,23920
	ctx.r29.s64 = ctx.r11.s64 + 23920;
	// lwz r11,24016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24016);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fa9b4
	if (!cr6.eq) goto loc_835FA9B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24016, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FA994:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FA99C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fa994
	if (!cr0.lt) goto loc_835FA994;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15656
	ctx.r3.s64 = ctx.r11.s64 + -15656;
	// bl 0x831cdcc8
	ctx.lr = 0x835FA9B4;
	sub_831CDCC8(ctx, base);
loc_835FA9B4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FA9C4"))) PPC_WEAK_FUNC(sub_835FA9C4);
PPC_FUNC_IMPL(__imp__sub_835FA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FA9C8"))) PPC_WEAK_FUNC(sub_835FA9C8);
PPC_FUNC_IMPL(__imp__sub_835FA9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FA9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24024
	ctx.r29.s64 = ctx.r11.s64 + 24024;
	// lwz r11,24072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24072);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835faa24
	if (!cr6.eq) goto loc_835FAA24;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24072, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FAA04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAA0C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835faa04
	if (!cr0.lt) goto loc_835FAA04;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15576
	ctx.r3.s64 = ctx.r11.s64 + -15576;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAA24;
	sub_831CDCC8(ctx, base);
loc_835FAA24:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAA34"))) PPC_WEAK_FUNC(sub_835FAA34);
PPC_FUNC_IMPL(__imp__sub_835FAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAA38"))) PPC_WEAK_FUNC(sub_835FAA38);
PPC_FUNC_IMPL(__imp__sub_835FAA38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAA40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24080
	ctx.r29.s64 = ctx.r11.s64 + 24080;
	// lwz r11,24128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24128);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835faa94
	if (!cr6.eq) goto loc_835FAA94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24128, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FAA74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAA7C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835faa74
	if (!cr0.lt) goto loc_835FAA74;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15496
	ctx.r3.s64 = ctx.r11.s64 + -15496;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAA94;
	sub_831CDCC8(ctx, base);
loc_835FAA94:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAAA4"))) PPC_WEAK_FUNC(sub_835FAAA4);
PPC_FUNC_IMPL(__imp__sub_835FAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAAA8"))) PPC_WEAK_FUNC(sub_835FAAA8);
PPC_FUNC_IMPL(__imp__sub_835FAAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24136
	ctx.r29.s64 = ctx.r11.s64 + 24136;
	// lwz r11,24184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24184);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fab04
	if (!cr6.eq) goto loc_835FAB04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24184, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FAAE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAAEC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835faae4
	if (!cr0.lt) goto loc_835FAAE4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15416
	ctx.r3.s64 = ctx.r11.s64 + -15416;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAB04;
	sub_831CDCC8(ctx, base);
loc_835FAB04:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAB14"))) PPC_WEAK_FUNC(sub_835FAB14);
PPC_FUNC_IMPL(__imp__sub_835FAB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAB18"))) PPC_WEAK_FUNC(sub_835FAB18);
PPC_FUNC_IMPL(__imp__sub_835FAB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAB20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24192
	ctx.r29.s64 = ctx.r11.s64 + 24192;
	// lwz r11,24272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24272);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fab74
	if (!cr6.eq) goto loc_835FAB74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24272, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FAB54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAB5C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fab54
	if (!cr0.lt) goto loc_835FAB54;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15336
	ctx.r3.s64 = ctx.r11.s64 + -15336;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAB74;
	sub_831CDCC8(ctx, base);
loc_835FAB74:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAB84"))) PPC_WEAK_FUNC(sub_835FAB84);
PPC_FUNC_IMPL(__imp__sub_835FAB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAB88"))) PPC_WEAK_FUNC(sub_835FAB88);
PPC_FUNC_IMPL(__imp__sub_835FAB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAB90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24280
	ctx.r29.s64 = ctx.r11.s64 + 24280;
	// lwz r11,24312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24312);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fabe4
	if (!cr6.eq) goto loc_835FABE4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24312, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FABC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FABCC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fabc4
	if (!cr0.lt) goto loc_835FABC4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15256
	ctx.r3.s64 = ctx.r11.s64 + -15256;
	// bl 0x831cdcc8
	ctx.lr = 0x835FABE4;
	sub_831CDCC8(ctx, base);
loc_835FABE4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FABF4"))) PPC_WEAK_FUNC(sub_835FABF4);
PPC_FUNC_IMPL(__imp__sub_835FABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FABF8"))) PPC_WEAK_FUNC(sub_835FABF8);
PPC_FUNC_IMPL(__imp__sub_835FABF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAC00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24320
	ctx.r29.s64 = ctx.r11.s64 + 24320;
	// lwz r11,24384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24384);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fac54
	if (!cr6.eq) goto loc_835FAC54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24384, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FAC34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAC3C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fac34
	if (!cr0.lt) goto loc_835FAC34;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15176
	ctx.r3.s64 = ctx.r11.s64 + -15176;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAC54;
	sub_831CDCC8(ctx, base);
loc_835FAC54:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAC64"))) PPC_WEAK_FUNC(sub_835FAC64);
PPC_FUNC_IMPL(__imp__sub_835FAC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAC68"))) PPC_WEAK_FUNC(sub_835FAC68);
PPC_FUNC_IMPL(__imp__sub_835FAC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAC70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24392
	ctx.r29.s64 = ctx.r11.s64 + 24392;
	// lwz r11,24424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24424);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835facc4
	if (!cr6.eq) goto loc_835FACC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24424, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FACA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FACAC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835faca4
	if (!cr0.lt) goto loc_835FACA4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15096
	ctx.r3.s64 = ctx.r11.s64 + -15096;
	// bl 0x831cdcc8
	ctx.lr = 0x835FACC4;
	sub_831CDCC8(ctx, base);
loc_835FACC4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FACD4"))) PPC_WEAK_FUNC(sub_835FACD4);
PPC_FUNC_IMPL(__imp__sub_835FACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FACD8"))) PPC_WEAK_FUNC(sub_835FACD8);
PPC_FUNC_IMPL(__imp__sub_835FACD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FACE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24432
	ctx.r29.s64 = ctx.r11.s64 + 24432;
	// lwz r11,24480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24480);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fad34
	if (!cr6.eq) goto loc_835FAD34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24480, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FAD14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAD1C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fad14
	if (!cr0.lt) goto loc_835FAD14;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-15016
	ctx.r3.s64 = ctx.r11.s64 + -15016;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAD34;
	sub_831CDCC8(ctx, base);
loc_835FAD34:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAD44"))) PPC_WEAK_FUNC(sub_835FAD44);
PPC_FUNC_IMPL(__imp__sub_835FAD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAD48"))) PPC_WEAK_FUNC(sub_835FAD48);
PPC_FUNC_IMPL(__imp__sub_835FAD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAD50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24488
	ctx.r29.s64 = ctx.r11.s64 + 24488;
	// lwz r11,24520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24520);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fada4
	if (!cr6.eq) goto loc_835FADA4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24520, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FAD84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAD8C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fad84
	if (!cr0.lt) goto loc_835FAD84;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14936
	ctx.r3.s64 = ctx.r11.s64 + -14936;
	// bl 0x831cdcc8
	ctx.lr = 0x835FADA4;
	sub_831CDCC8(ctx, base);
loc_835FADA4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FADB4"))) PPC_WEAK_FUNC(sub_835FADB4);
PPC_FUNC_IMPL(__imp__sub_835FADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FADB8"))) PPC_WEAK_FUNC(sub_835FADB8);
PPC_FUNC_IMPL(__imp__sub_835FADB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FADC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24528
	ctx.r29.s64 = ctx.r11.s64 + 24528;
	// lwz r11,24576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24576);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fae14
	if (!cr6.eq) goto loc_835FAE14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24576, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FADF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FADFC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fadf4
	if (!cr0.lt) goto loc_835FADF4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14856
	ctx.r3.s64 = ctx.r11.s64 + -14856;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAE14;
	sub_831CDCC8(ctx, base);
loc_835FAE14:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAE24"))) PPC_WEAK_FUNC(sub_835FAE24);
PPC_FUNC_IMPL(__imp__sub_835FAE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAE28"))) PPC_WEAK_FUNC(sub_835FAE28);
PPC_FUNC_IMPL(__imp__sub_835FAE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAE30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24584
	ctx.r29.s64 = ctx.r11.s64 + 24584;
	// lwz r11,24680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24680);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fae84
	if (!cr6.eq) goto loc_835FAE84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24680, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FAE64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAE6C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fae64
	if (!cr0.lt) goto loc_835FAE64;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14776
	ctx.r3.s64 = ctx.r11.s64 + -14776;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAE84;
	sub_831CDCC8(ctx, base);
loc_835FAE84:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAE94"))) PPC_WEAK_FUNC(sub_835FAE94);
PPC_FUNC_IMPL(__imp__sub_835FAE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAE98"))) PPC_WEAK_FUNC(sub_835FAE98);
PPC_FUNC_IMPL(__imp__sub_835FAE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lwz r11,24784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24784);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835faef4
	if (!cr6.eq) goto loc_835FAEF4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24784, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FAED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAEDC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835faed4
	if (!cr0.lt) goto loc_835FAED4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14696
	ctx.r3.s64 = ctx.r11.s64 + -14696;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAEF4;
	sub_831CDCC8(ctx, base);
loc_835FAEF4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAF04"))) PPC_WEAK_FUNC(sub_835FAF04);
PPC_FUNC_IMPL(__imp__sub_835FAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAF08"))) PPC_WEAK_FUNC(sub_835FAF08);
PPC_FUNC_IMPL(__imp__sub_835FAF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAF10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24792
	ctx.r29.s64 = ctx.r11.s64 + 24792;
	// lwz r11,24824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24824);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835faf64
	if (!cr6.eq) goto loc_835FAF64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24824, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FAF44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAF4C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835faf44
	if (!cr0.lt) goto loc_835FAF44;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAF64;
	sub_831CDCC8(ctx, base);
loc_835FAF64:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAF74"))) PPC_WEAK_FUNC(sub_835FAF74);
PPC_FUNC_IMPL(__imp__sub_835FAF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAF78"))) PPC_WEAK_FUNC(sub_835FAF78);
PPC_FUNC_IMPL(__imp__sub_835FAF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAF80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24832
	ctx.r29.s64 = ctx.r11.s64 + 24832;
	// lwz r11,24864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24864);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fafd4
	if (!cr6.eq) goto loc_835FAFD4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24864, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FAFB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FAFBC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fafb4
	if (!cr0.lt) goto loc_835FAFB4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14536
	ctx.r3.s64 = ctx.r11.s64 + -14536;
	// bl 0x831cdcc8
	ctx.lr = 0x835FAFD4;
	sub_831CDCC8(ctx, base);
loc_835FAFD4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FAFE4"))) PPC_WEAK_FUNC(sub_835FAFE4);
PPC_FUNC_IMPL(__imp__sub_835FAFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FAFE8"))) PPC_WEAK_FUNC(sub_835FAFE8);
PPC_FUNC_IMPL(__imp__sub_835FAFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FAFF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24872
	ctx.r29.s64 = ctx.r11.s64 + 24872;
	// lwz r11,24952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24952);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb044
	if (!cr6.eq) goto loc_835FB044;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,24952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24952, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FB024:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB02C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb024
	if (!cr0.lt) goto loc_835FB024;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB044;
	sub_831CDCC8(ctx, base);
loc_835FB044:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB054"))) PPC_WEAK_FUNC(sub_835FB054);
PPC_FUNC_IMPL(__imp__sub_835FB054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB058"))) PPC_WEAK_FUNC(sub_835FB058);
PPC_FUNC_IMPL(__imp__sub_835FB058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24960
	ctx.r29.s64 = ctx.r11.s64 + 24960;
	// lwz r11,25024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25024);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb0b4
	if (!cr6.eq) goto loc_835FB0B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25024, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FB094:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB09C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb094
	if (!cr0.lt) goto loc_835FB094;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14376
	ctx.r3.s64 = ctx.r11.s64 + -14376;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB0B4;
	sub_831CDCC8(ctx, base);
loc_835FB0B4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB0C4"))) PPC_WEAK_FUNC(sub_835FB0C4);
PPC_FUNC_IMPL(__imp__sub_835FB0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB0C8"))) PPC_WEAK_FUNC(sub_835FB0C8);
PPC_FUNC_IMPL(__imp__sub_835FB0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB0D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25032
	ctx.r29.s64 = ctx.r11.s64 + 25032;
	// lwz r11,25176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25176);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb124
	if (!cr6.eq) goto loc_835FB124;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25176, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
loc_835FB104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB10C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb104
	if (!cr0.lt) goto loc_835FB104;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14296
	ctx.r3.s64 = ctx.r11.s64 + -14296;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB124;
	sub_831CDCC8(ctx, base);
loc_835FB124:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB134"))) PPC_WEAK_FUNC(sub_835FB134);
PPC_FUNC_IMPL(__imp__sub_835FB134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB138"))) PPC_WEAK_FUNC(sub_835FB138);
PPC_FUNC_IMPL(__imp__sub_835FB138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25184
	ctx.r29.s64 = ctx.r11.s64 + 25184;
	// lwz r11,25232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25232);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb194
	if (!cr6.eq) goto loc_835FB194;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25232, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FB174:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB17C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb174
	if (!cr0.lt) goto loc_835FB174;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14216
	ctx.r3.s64 = ctx.r11.s64 + -14216;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB194;
	sub_831CDCC8(ctx, base);
loc_835FB194:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB1A4"))) PPC_WEAK_FUNC(sub_835FB1A4);
PPC_FUNC_IMPL(__imp__sub_835FB1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB1A8"))) PPC_WEAK_FUNC(sub_835FB1A8);
PPC_FUNC_IMPL(__imp__sub_835FB1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25240
	ctx.r29.s64 = ctx.r11.s64 + 25240;
	// lwz r11,25352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25352);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb204
	if (!cr6.eq) goto loc_835FB204;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25352, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FB1E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB1EC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb1e4
	if (!cr0.lt) goto loc_835FB1E4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14136
	ctx.r3.s64 = ctx.r11.s64 + -14136;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB204;
	sub_831CDCC8(ctx, base);
loc_835FB204:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB214"))) PPC_WEAK_FUNC(sub_835FB214);
PPC_FUNC_IMPL(__imp__sub_835FB214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB218"))) PPC_WEAK_FUNC(sub_835FB218);
PPC_FUNC_IMPL(__imp__sub_835FB218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25360
	ctx.r29.s64 = ctx.r11.s64 + 25360;
	// lwz r11,25472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25472);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb274
	if (!cr6.eq) goto loc_835FB274;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25472, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FB254:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB25C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb254
	if (!cr0.lt) goto loc_835FB254;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-14056
	ctx.r3.s64 = ctx.r11.s64 + -14056;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB274;
	sub_831CDCC8(ctx, base);
loc_835FB274:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB284"))) PPC_WEAK_FUNC(sub_835FB284);
PPC_FUNC_IMPL(__imp__sub_835FB284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB288"))) PPC_WEAK_FUNC(sub_835FB288);
PPC_FUNC_IMPL(__imp__sub_835FB288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25480
	ctx.r29.s64 = ctx.r11.s64 + 25480;
	// lwz r11,25560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb2e4
	if (!cr6.eq) goto loc_835FB2E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25560, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FB2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB2CC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb2c4
	if (!cr0.lt) goto loc_835FB2C4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13976
	ctx.r3.s64 = ctx.r11.s64 + -13976;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB2E4;
	sub_831CDCC8(ctx, base);
loc_835FB2E4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB2F4"))) PPC_WEAK_FUNC(sub_835FB2F4);
PPC_FUNC_IMPL(__imp__sub_835FB2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB2F8"))) PPC_WEAK_FUNC(sub_835FB2F8);
PPC_FUNC_IMPL(__imp__sub_835FB2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB300;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25568
	ctx.r29.s64 = ctx.r11.s64 + 25568;
	// lwz r11,25616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25616);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb354
	if (!cr6.eq) goto loc_835FB354;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25616, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FB334:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB33C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb334
	if (!cr0.lt) goto loc_835FB334;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13896
	ctx.r3.s64 = ctx.r11.s64 + -13896;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB354;
	sub_831CDCC8(ctx, base);
loc_835FB354:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB364"))) PPC_WEAK_FUNC(sub_835FB364);
PPC_FUNC_IMPL(__imp__sub_835FB364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB368"))) PPC_WEAK_FUNC(sub_835FB368);
PPC_FUNC_IMPL(__imp__sub_835FB368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25624
	ctx.r29.s64 = ctx.r11.s64 + 25624;
	// lwz r11,25656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25656);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb3c4
	if (!cr6.eq) goto loc_835FB3C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,25656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25656, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FB3A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB3AC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb3a4
	if (!cr0.lt) goto loc_835FB3A4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13816
	ctx.r3.s64 = ctx.r11.s64 + -13816;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB3C4;
	sub_831CDCC8(ctx, base);
loc_835FB3C4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB3D4"))) PPC_WEAK_FUNC(sub_835FB3D4);
PPC_FUNC_IMPL(__imp__sub_835FB3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB3D8"))) PPC_WEAK_FUNC(sub_835FB3D8);
PPC_FUNC_IMPL(__imp__sub_835FB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,25664
	ctx.r29.s64 = ctx.r11.s64 + 25664;
	// lwz r11,27488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27488);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb434
	if (!cr6.eq) goto loc_835FB434;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,27488(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27488, ctx.r11.u32);
	// li r31,113
	ctx.r31.s64 = 113;
loc_835FB414:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB41C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb414
	if (!cr0.lt) goto loc_835FB414;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13736
	ctx.r3.s64 = ctx.r11.s64 + -13736;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB434;
	sub_831CDCC8(ctx, base);
loc_835FB434:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB444"))) PPC_WEAK_FUNC(sub_835FB444);
PPC_FUNC_IMPL(__imp__sub_835FB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB448"))) PPC_WEAK_FUNC(sub_835FB448);
PPC_FUNC_IMPL(__imp__sub_835FB448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,27496
	ctx.r29.s64 = ctx.r11.s64 + 27496;
	// lwz r11,27624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27624);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb4a4
	if (!cr6.eq) goto loc_835FB4A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,27624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27624, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
loc_835FB484:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB48C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb484
	if (!cr0.lt) goto loc_835FB484;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13656
	ctx.r3.s64 = ctx.r11.s64 + -13656;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB4A4;
	sub_831CDCC8(ctx, base);
loc_835FB4A4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB4B4"))) PPC_WEAK_FUNC(sub_835FB4B4);
PPC_FUNC_IMPL(__imp__sub_835FB4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB4B8"))) PPC_WEAK_FUNC(sub_835FB4B8);
PPC_FUNC_IMPL(__imp__sub_835FB4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB4C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,27632
	ctx.r29.s64 = ctx.r11.s64 + 27632;
	// lwz r11,27680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27680);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb514
	if (!cr6.eq) goto loc_835FB514;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,27680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27680, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FB4F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB4FC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb4f4
	if (!cr0.lt) goto loc_835FB4F4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13576
	ctx.r3.s64 = ctx.r11.s64 + -13576;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB514;
	sub_831CDCC8(ctx, base);
loc_835FB514:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB524"))) PPC_WEAK_FUNC(sub_835FB524);
PPC_FUNC_IMPL(__imp__sub_835FB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB528"))) PPC_WEAK_FUNC(sub_835FB528);
PPC_FUNC_IMPL(__imp__sub_835FB528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB530;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,27688
	ctx.r29.s64 = ctx.r11.s64 + 27688;
	// lwz r11,27800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27800);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb584
	if (!cr6.eq) goto loc_835FB584;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,27800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27800, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FB564:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB56C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb564
	if (!cr0.lt) goto loc_835FB564;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13496
	ctx.r3.s64 = ctx.r11.s64 + -13496;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB584;
	sub_831CDCC8(ctx, base);
loc_835FB584:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB594"))) PPC_WEAK_FUNC(sub_835FB594);
PPC_FUNC_IMPL(__imp__sub_835FB594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB598"))) PPC_WEAK_FUNC(sub_835FB598);
PPC_FUNC_IMPL(__imp__sub_835FB598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,27808
	ctx.r29.s64 = ctx.r11.s64 + 27808;
	// lwz r11,27888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27888);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb5f4
	if (!cr6.eq) goto loc_835FB5F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,27888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27888, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FB5D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB5DC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb5d4
	if (!cr0.lt) goto loc_835FB5D4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13416
	ctx.r3.s64 = ctx.r11.s64 + -13416;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB5F4;
	sub_831CDCC8(ctx, base);
loc_835FB5F4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB604"))) PPC_WEAK_FUNC(sub_835FB604);
PPC_FUNC_IMPL(__imp__sub_835FB604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB608"))) PPC_WEAK_FUNC(sub_835FB608);
PPC_FUNC_IMPL(__imp__sub_835FB608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,27896
	ctx.r29.s64 = ctx.r11.s64 + 27896;
	// lwz r11,28008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28008);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb664
	if (!cr6.eq) goto loc_835FB664;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28008(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28008, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FB644:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB64C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb644
	if (!cr0.lt) goto loc_835FB644;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13336
	ctx.r3.s64 = ctx.r11.s64 + -13336;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB664;
	sub_831CDCC8(ctx, base);
loc_835FB664:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB674"))) PPC_WEAK_FUNC(sub_835FB674);
PPC_FUNC_IMPL(__imp__sub_835FB674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB678"))) PPC_WEAK_FUNC(sub_835FB678);
PPC_FUNC_IMPL(__imp__sub_835FB678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB680;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28016
	ctx.r29.s64 = ctx.r11.s64 + 28016;
	// lwz r11,28128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28128);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb6d4
	if (!cr6.eq) goto loc_835FB6D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28128, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FB6B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB6BC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb6b4
	if (!cr0.lt) goto loc_835FB6B4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13256
	ctx.r3.s64 = ctx.r11.s64 + -13256;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB6D4;
	sub_831CDCC8(ctx, base);
loc_835FB6D4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB6E4"))) PPC_WEAK_FUNC(sub_835FB6E4);
PPC_FUNC_IMPL(__imp__sub_835FB6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB6E8"))) PPC_WEAK_FUNC(sub_835FB6E8);
PPC_FUNC_IMPL(__imp__sub_835FB6E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB6F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28136
	ctx.r29.s64 = ctx.r11.s64 + 28136;
	// lwz r11,28216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28216);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb744
	if (!cr6.eq) goto loc_835FB744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28216, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FB724:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB72C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb724
	if (!cr0.lt) goto loc_835FB724;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13176
	ctx.r3.s64 = ctx.r11.s64 + -13176;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB744;
	sub_831CDCC8(ctx, base);
loc_835FB744:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB754"))) PPC_WEAK_FUNC(sub_835FB754);
PPC_FUNC_IMPL(__imp__sub_835FB754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB758"))) PPC_WEAK_FUNC(sub_835FB758);
PPC_FUNC_IMPL(__imp__sub_835FB758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28224
	ctx.r29.s64 = ctx.r11.s64 + 28224;
	// lwz r11,28256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb7b4
	if (!cr6.eq) goto loc_835FB7B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28256, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FB794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB79C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb794
	if (!cr0.lt) goto loc_835FB794;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13096
	ctx.r3.s64 = ctx.r11.s64 + -13096;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB7B4;
	sub_831CDCC8(ctx, base);
loc_835FB7B4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB7C4"))) PPC_WEAK_FUNC(sub_835FB7C4);
PPC_FUNC_IMPL(__imp__sub_835FB7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB7C8"))) PPC_WEAK_FUNC(sub_835FB7C8);
PPC_FUNC_IMPL(__imp__sub_835FB7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB7D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28264
	ctx.r29.s64 = ctx.r11.s64 + 28264;
	// lwz r11,28296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28296);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb824
	if (!cr6.eq) goto loc_835FB824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28296, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FB804:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB80C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb804
	if (!cr0.lt) goto loc_835FB804;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-13016
	ctx.r3.s64 = ctx.r11.s64 + -13016;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB824;
	sub_831CDCC8(ctx, base);
loc_835FB824:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB834"))) PPC_WEAK_FUNC(sub_835FB834);
PPC_FUNC_IMPL(__imp__sub_835FB834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB838"))) PPC_WEAK_FUNC(sub_835FB838);
PPC_FUNC_IMPL(__imp__sub_835FB838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28304
	ctx.r29.s64 = ctx.r11.s64 + 28304;
	// lwz r11,28352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28352);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb894
	if (!cr6.eq) goto loc_835FB894;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28352, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FB874:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB87C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb874
	if (!cr0.lt) goto loc_835FB874;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12936
	ctx.r3.s64 = ctx.r11.s64 + -12936;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB894;
	sub_831CDCC8(ctx, base);
loc_835FB894:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB8A4"))) PPC_WEAK_FUNC(sub_835FB8A4);
PPC_FUNC_IMPL(__imp__sub_835FB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB8A8"))) PPC_WEAK_FUNC(sub_835FB8A8);
PPC_FUNC_IMPL(__imp__sub_835FB8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB8B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28360
	ctx.r29.s64 = ctx.r11.s64 + 28360;
	// lwz r11,28648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28648);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb904
	if (!cr6.eq) goto loc_835FB904;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28648, ctx.r11.u32);
	// li r31,17
	ctx.r31.s64 = 17;
loc_835FB8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB8EC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb8e4
	if (!cr0.lt) goto loc_835FB8E4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12856
	ctx.r3.s64 = ctx.r11.s64 + -12856;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB904;
	sub_831CDCC8(ctx, base);
loc_835FB904:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB914"))) PPC_WEAK_FUNC(sub_835FB914);
PPC_FUNC_IMPL(__imp__sub_835FB914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB918"))) PPC_WEAK_FUNC(sub_835FB918);
PPC_FUNC_IMPL(__imp__sub_835FB918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB920;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28656
	ctx.r29.s64 = ctx.r11.s64 + 28656;
	// lwz r11,28752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28752);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb974
	if (!cr6.eq) goto loc_835FB974;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28752, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FB954:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB95C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb954
	if (!cr0.lt) goto loc_835FB954;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12776
	ctx.r3.s64 = ctx.r11.s64 + -12776;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB974;
	sub_831CDCC8(ctx, base);
loc_835FB974:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB984"))) PPC_WEAK_FUNC(sub_835FB984);
PPC_FUNC_IMPL(__imp__sub_835FB984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB988"))) PPC_WEAK_FUNC(sub_835FB988);
PPC_FUNC_IMPL(__imp__sub_835FB988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FB990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28760
	ctx.r29.s64 = ctx.r11.s64 + 28760;
	// lwz r11,28840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28840);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fb9e4
	if (!cr6.eq) goto loc_835FB9E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28840, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FB9C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FB9CC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fb9c4
	if (!cr0.lt) goto loc_835FB9C4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12696
	ctx.r3.s64 = ctx.r11.s64 + -12696;
	// bl 0x831cdcc8
	ctx.lr = 0x835FB9E4;
	sub_831CDCC8(ctx, base);
loc_835FB9E4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FB9F4"))) PPC_WEAK_FUNC(sub_835FB9F4);
PPC_FUNC_IMPL(__imp__sub_835FB9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FB9F8"))) PPC_WEAK_FUNC(sub_835FB9F8);
PPC_FUNC_IMPL(__imp__sub_835FB9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBA00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28848
	ctx.r29.s64 = ctx.r11.s64 + 28848;
	// lwz r11,28992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28992);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fba54
	if (!cr6.eq) goto loc_835FBA54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,28992(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28992, ctx.r11.u32);
	// li r31,8
	ctx.r31.s64 = 8;
loc_835FBA34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBA3C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fba34
	if (!cr0.lt) goto loc_835FBA34;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12616
	ctx.r3.s64 = ctx.r11.s64 + -12616;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBA54;
	sub_831CDCC8(ctx, base);
loc_835FBA54:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBA64"))) PPC_WEAK_FUNC(sub_835FBA64);
PPC_FUNC_IMPL(__imp__sub_835FBA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBA68"))) PPC_WEAK_FUNC(sub_835FBA68);
PPC_FUNC_IMPL(__imp__sub_835FBA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBA70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29000
	ctx.r29.s64 = ctx.r11.s64 + 29000;
	// lwz r11,29048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29048);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbac4
	if (!cr6.eq) goto loc_835FBAC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29048, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FBAA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBAAC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbaa4
	if (!cr0.lt) goto loc_835FBAA4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12536
	ctx.r3.s64 = ctx.r11.s64 + -12536;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBAC4;
	sub_831CDCC8(ctx, base);
loc_835FBAC4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBAD4"))) PPC_WEAK_FUNC(sub_835FBAD4);
PPC_FUNC_IMPL(__imp__sub_835FBAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBAD8"))) PPC_WEAK_FUNC(sub_835FBAD8);
PPC_FUNC_IMPL(__imp__sub_835FBAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBAE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29056
	ctx.r29.s64 = ctx.r11.s64 + 29056;
	// lwz r11,29264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbb34
	if (!cr6.eq) goto loc_835FBB34;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29264, ctx.r11.u32);
	// li r31,12
	ctx.r31.s64 = 12;
loc_835FBB14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBB1C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbb14
	if (!cr0.lt) goto loc_835FBB14;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12456
	ctx.r3.s64 = ctx.r11.s64 + -12456;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBB34;
	sub_831CDCC8(ctx, base);
loc_835FBB34:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBB44"))) PPC_WEAK_FUNC(sub_835FBB44);
PPC_FUNC_IMPL(__imp__sub_835FBB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBB48"))) PPC_WEAK_FUNC(sub_835FBB48);
PPC_FUNC_IMPL(__imp__sub_835FBB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBB50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29272
	ctx.r29.s64 = ctx.r11.s64 + 29272;
	// lwz r11,29384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29384);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbba4
	if (!cr6.eq) goto loc_835FBBA4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29384, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FBB84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBB8C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbb84
	if (!cr0.lt) goto loc_835FBB84;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBBA4;
	sub_831CDCC8(ctx, base);
loc_835FBBA4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBBB4"))) PPC_WEAK_FUNC(sub_835FBBB4);
PPC_FUNC_IMPL(__imp__sub_835FBBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBBB8"))) PPC_WEAK_FUNC(sub_835FBBB8);
PPC_FUNC_IMPL(__imp__sub_835FBBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBBC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29392
	ctx.r29.s64 = ctx.r11.s64 + 29392;
	// lwz r11,29440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29440);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbc14
	if (!cr6.eq) goto loc_835FBC14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29440, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FBBF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBBFC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbbf4
	if (!cr0.lt) goto loc_835FBBF4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12296
	ctx.r3.s64 = ctx.r11.s64 + -12296;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBC14;
	sub_831CDCC8(ctx, base);
loc_835FBC14:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBC24"))) PPC_WEAK_FUNC(sub_835FBC24);
PPC_FUNC_IMPL(__imp__sub_835FBC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBC28"))) PPC_WEAK_FUNC(sub_835FBC28);
PPC_FUNC_IMPL(__imp__sub_835FBC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBC30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29448
	ctx.r29.s64 = ctx.r11.s64 + 29448;
	// lwz r11,29768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29768);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbc84
	if (!cr6.eq) goto loc_835FBC84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29768, ctx.r11.u32);
	// li r31,19
	ctx.r31.s64 = 19;
loc_835FBC64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBC6C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbc64
	if (!cr0.lt) goto loc_835FBC64;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12216
	ctx.r3.s64 = ctx.r11.s64 + -12216;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBC84;
	sub_831CDCC8(ctx, base);
loc_835FBC84:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBC94"))) PPC_WEAK_FUNC(sub_835FBC94);
PPC_FUNC_IMPL(__imp__sub_835FBC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBC98"))) PPC_WEAK_FUNC(sub_835FBC98);
PPC_FUNC_IMPL(__imp__sub_835FBC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBCA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29776
	ctx.r29.s64 = ctx.r11.s64 + 29776;
	// lwz r11,29808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29808);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbcf4
	if (!cr6.eq) goto loc_835FBCF4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29808, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FBCD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBCDC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbcd4
	if (!cr0.lt) goto loc_835FBCD4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBCF4;
	sub_831CDCC8(ctx, base);
loc_835FBCF4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBD04"))) PPC_WEAK_FUNC(sub_835FBD04);
PPC_FUNC_IMPL(__imp__sub_835FBD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBD08"))) PPC_WEAK_FUNC(sub_835FBD08);
PPC_FUNC_IMPL(__imp__sub_835FBD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBD10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29816
	ctx.r29.s64 = ctx.r11.s64 + 29816;
	// lwz r11,29912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29912);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbd64
	if (!cr6.eq) goto loc_835FBD64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29912, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FBD44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBD4C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbd44
	if (!cr0.lt) goto loc_835FBD44;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBD64;
	sub_831CDCC8(ctx, base);
loc_835FBD64:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBD74"))) PPC_WEAK_FUNC(sub_835FBD74);
PPC_FUNC_IMPL(__imp__sub_835FBD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBD78"))) PPC_WEAK_FUNC(sub_835FBD78);
PPC_FUNC_IMPL(__imp__sub_835FBD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBD80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29920
	ctx.r29.s64 = ctx.r11.s64 + 29920;
	// lwz r11,29952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29952);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbdd4
	if (!cr6.eq) goto loc_835FBDD4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,29952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29952, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FBDB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBDBC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbdb4
	if (!cr0.lt) goto loc_835FBDB4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11976
	ctx.r3.s64 = ctx.r11.s64 + -11976;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBDD4;
	sub_831CDCC8(ctx, base);
loc_835FBDD4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBDE4"))) PPC_WEAK_FUNC(sub_835FBDE4);
PPC_FUNC_IMPL(__imp__sub_835FBDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBDE8"))) PPC_WEAK_FUNC(sub_835FBDE8);
PPC_FUNC_IMPL(__imp__sub_835FBDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBDF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,29960
	ctx.r29.s64 = ctx.r11.s64 + 29960;
	// lwz r11,30088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30088);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbe44
	if (!cr6.eq) goto loc_835FBE44;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,30088(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30088, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
loc_835FBE24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBE2C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbe24
	if (!cr0.lt) goto loc_835FBE24;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11896
	ctx.r3.s64 = ctx.r11.s64 + -11896;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBE44;
	sub_831CDCC8(ctx, base);
loc_835FBE44:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBE54"))) PPC_WEAK_FUNC(sub_835FBE54);
PPC_FUNC_IMPL(__imp__sub_835FBE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBE58"))) PPC_WEAK_FUNC(sub_835FBE58);
PPC_FUNC_IMPL(__imp__sub_835FBE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBE60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30096
	ctx.r29.s64 = ctx.r11.s64 + 30096;
	// lwz r11,30592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30592);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbeb4
	if (!cr6.eq) goto loc_835FBEB4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,30592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30592, ctx.r11.u32);
	// li r31,30
	ctx.r31.s64 = 30;
loc_835FBE94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBE9C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbe94
	if (!cr0.lt) goto loc_835FBE94;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11816
	ctx.r3.s64 = ctx.r11.s64 + -11816;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBEB4;
	sub_831CDCC8(ctx, base);
loc_835FBEB4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBEC4"))) PPC_WEAK_FUNC(sub_835FBEC4);
PPC_FUNC_IMPL(__imp__sub_835FBEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBEC8"))) PPC_WEAK_FUNC(sub_835FBEC8);
PPC_FUNC_IMPL(__imp__sub_835FBEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30600
	ctx.r29.s64 = ctx.r11.s64 + 30600;
	// lwz r11,30632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30632);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbf24
	if (!cr6.eq) goto loc_835FBF24;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,30632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30632, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FBF04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBF0C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbf04
	if (!cr0.lt) goto loc_835FBF04;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11736
	ctx.r3.s64 = ctx.r11.s64 + -11736;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBF24;
	sub_831CDCC8(ctx, base);
loc_835FBF24:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBF34"))) PPC_WEAK_FUNC(sub_835FBF34);
PPC_FUNC_IMPL(__imp__sub_835FBF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBF38"))) PPC_WEAK_FUNC(sub_835FBF38);
PPC_FUNC_IMPL(__imp__sub_835FBF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30640
	ctx.r29.s64 = ctx.r11.s64 + 30640;
	// lwz r11,30704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30704);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fbf94
	if (!cr6.eq) goto loc_835FBF94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,30704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30704, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FBF74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBF7C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbf74
	if (!cr0.lt) goto loc_835FBF74;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11656
	ctx.r3.s64 = ctx.r11.s64 + -11656;
	// bl 0x831cdcc8
	ctx.lr = 0x835FBF94;
	sub_831CDCC8(ctx, base);
loc_835FBF94:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FBFA4"))) PPC_WEAK_FUNC(sub_835FBFA4);
PPC_FUNC_IMPL(__imp__sub_835FBFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FBFA8"))) PPC_WEAK_FUNC(sub_835FBFA8);
PPC_FUNC_IMPL(__imp__sub_835FBFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FBFB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30712
	ctx.r29.s64 = ctx.r11.s64 + 30712;
	// lwz r11,30808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30808);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc004
	if (!cr6.eq) goto loc_835FC004;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,30808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30808, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FBFE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FBFEC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fbfe4
	if (!cr0.lt) goto loc_835FBFE4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11576
	ctx.r3.s64 = ctx.r11.s64 + -11576;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC004;
	sub_831CDCC8(ctx, base);
loc_835FC004:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC014"))) PPC_WEAK_FUNC(sub_835FC014);
PPC_FUNC_IMPL(__imp__sub_835FC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC018"))) PPC_WEAK_FUNC(sub_835FC018);
PPC_FUNC_IMPL(__imp__sub_835FC018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30816
	ctx.r29.s64 = ctx.r11.s64 + 30816;
	// lwz r11,30976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30976);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc074
	if (!cr6.eq) goto loc_835FC074;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,30976(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30976, ctx.r11.u32);
	// li r31,9
	ctx.r31.s64 = 9;
loc_835FC054:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC05C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc054
	if (!cr0.lt) goto loc_835FC054;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC074;
	sub_831CDCC8(ctx, base);
loc_835FC074:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC084"))) PPC_WEAK_FUNC(sub_835FC084);
PPC_FUNC_IMPL(__imp__sub_835FC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC088"))) PPC_WEAK_FUNC(sub_835FC088);
PPC_FUNC_IMPL(__imp__sub_835FC088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC090;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,30984
	ctx.r29.s64 = ctx.r11.s64 + 30984;
	// lwz r11,31256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31256);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc0e4
	if (!cr6.eq) goto loc_835FC0E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,31256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31256, ctx.r11.u32);
	// li r31,16
	ctx.r31.s64 = 16;
loc_835FC0C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC0CC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc0c4
	if (!cr0.lt) goto loc_835FC0C4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11416
	ctx.r3.s64 = ctx.r11.s64 + -11416;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC0E4;
	sub_831CDCC8(ctx, base);
loc_835FC0E4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC0F4"))) PPC_WEAK_FUNC(sub_835FC0F4);
PPC_FUNC_IMPL(__imp__sub_835FC0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC0F8"))) PPC_WEAK_FUNC(sub_835FC0F8);
PPC_FUNC_IMPL(__imp__sub_835FC0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31264
	ctx.r29.s64 = ctx.r11.s64 + 31264;
	// lwz r11,31296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31296);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc154
	if (!cr6.eq) goto loc_835FC154;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,31296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31296, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FC134:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC13C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc134
	if (!cr0.lt) goto loc_835FC134;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11336
	ctx.r3.s64 = ctx.r11.s64 + -11336;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC154;
	sub_831CDCC8(ctx, base);
loc_835FC154:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC164"))) PPC_WEAK_FUNC(sub_835FC164);
PPC_FUNC_IMPL(__imp__sub_835FC164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC168"))) PPC_WEAK_FUNC(sub_835FC168);
PPC_FUNC_IMPL(__imp__sub_835FC168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31304
	ctx.r29.s64 = ctx.r11.s64 + 31304;
	// lwz r11,31368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31368);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc1c4
	if (!cr6.eq) goto loc_835FC1C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,31368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31368, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FC1A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC1AC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc1a4
	if (!cr0.lt) goto loc_835FC1A4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11256
	ctx.r3.s64 = ctx.r11.s64 + -11256;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC1C4;
	sub_831CDCC8(ctx, base);
loc_835FC1C4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC1D4"))) PPC_WEAK_FUNC(sub_835FC1D4);
PPC_FUNC_IMPL(__imp__sub_835FC1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC1D8"))) PPC_WEAK_FUNC(sub_835FC1D8);
PPC_FUNC_IMPL(__imp__sub_835FC1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC1E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31376
	ctx.r29.s64 = ctx.r11.s64 + 31376;
	// lwz r11,31504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31504);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc234
	if (!cr6.eq) goto loc_835FC234;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,31504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31504, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
loc_835FC214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC21C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc214
	if (!cr0.lt) goto loc_835FC214;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11176
	ctx.r3.s64 = ctx.r11.s64 + -11176;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC234;
	sub_831CDCC8(ctx, base);
loc_835FC234:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC244"))) PPC_WEAK_FUNC(sub_835FC244);
PPC_FUNC_IMPL(__imp__sub_835FC244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC248"))) PPC_WEAK_FUNC(sub_835FC248);
PPC_FUNC_IMPL(__imp__sub_835FC248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31512
	ctx.r29.s64 = ctx.r11.s64 + 31512;
	// lwz r11,31560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc2a4
	if (!cr6.eq) goto loc_835FC2A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,31560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31560, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC28C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc284
	if (!cr0.lt) goto loc_835FC284;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11096
	ctx.r3.s64 = ctx.r11.s64 + -11096;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC2A4;
	sub_831CDCC8(ctx, base);
loc_835FC2A4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC2B4"))) PPC_WEAK_FUNC(sub_835FC2B4);
PPC_FUNC_IMPL(__imp__sub_835FC2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC2B8"))) PPC_WEAK_FUNC(sub_835FC2B8);
PPC_FUNC_IMPL(__imp__sub_835FC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC2C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31568
	ctx.r29.s64 = ctx.r11.s64 + 31568;
	// lwz r11,31664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31664);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc314
	if (!cr6.eq) goto loc_835FC314;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,31664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31664, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FC2F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC2FC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc2f4
	if (!cr0.lt) goto loc_835FC2F4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-11016
	ctx.r3.s64 = ctx.r11.s64 + -11016;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC314;
	sub_831CDCC8(ctx, base);
loc_835FC314:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC324"))) PPC_WEAK_FUNC(sub_835FC324);
PPC_FUNC_IMPL(__imp__sub_835FC324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC328"))) PPC_WEAK_FUNC(sub_835FC328);
PPC_FUNC_IMPL(__imp__sub_835FC328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC330;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31672
	ctx.r29.s64 = ctx.r11.s64 + 31672;
	// lwz r11,32120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32120);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc384
	if (!cr6.eq) goto loc_835FC384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32120, ctx.r11.u32);
	// li r31,27
	ctx.r31.s64 = 27;
loc_835FC364:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC36C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc364
	if (!cr0.lt) goto loc_835FC364;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10936
	ctx.r3.s64 = ctx.r11.s64 + -10936;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC384;
	sub_831CDCC8(ctx, base);
loc_835FC384:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC394"))) PPC_WEAK_FUNC(sub_835FC394);
PPC_FUNC_IMPL(__imp__sub_835FC394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC398"))) PPC_WEAK_FUNC(sub_835FC398);
PPC_FUNC_IMPL(__imp__sub_835FC398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32128
	ctx.r29.s64 = ctx.r11.s64 + 32128;
	// lwz r11,32176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32176);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc3f4
	if (!cr6.eq) goto loc_835FC3F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32176, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC3D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC3DC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc3d4
	if (!cr0.lt) goto loc_835FC3D4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10856
	ctx.r3.s64 = ctx.r11.s64 + -10856;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC3F4;
	sub_831CDCC8(ctx, base);
loc_835FC3F4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC404"))) PPC_WEAK_FUNC(sub_835FC404);
PPC_FUNC_IMPL(__imp__sub_835FC404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC408"))) PPC_WEAK_FUNC(sub_835FC408);
PPC_FUNC_IMPL(__imp__sub_835FC408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC410;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32184
	ctx.r29.s64 = ctx.r11.s64 + 32184;
	// lwz r11,32248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32248);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc464
	if (!cr6.eq) goto loc_835FC464;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32248, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FC444:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC44C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc444
	if (!cr0.lt) goto loc_835FC444;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10776
	ctx.r3.s64 = ctx.r11.s64 + -10776;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC464;
	sub_831CDCC8(ctx, base);
loc_835FC464:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC474"))) PPC_WEAK_FUNC(sub_835FC474);
PPC_FUNC_IMPL(__imp__sub_835FC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC478"))) PPC_WEAK_FUNC(sub_835FC478);
PPC_FUNC_IMPL(__imp__sub_835FC478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32256
	ctx.r29.s64 = ctx.r11.s64 + 32256;
	// lwz r11,32304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32304);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc4d4
	if (!cr6.eq) goto loc_835FC4D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32304, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC4B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC4BC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc4b4
	if (!cr0.lt) goto loc_835FC4B4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10696
	ctx.r3.s64 = ctx.r11.s64 + -10696;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC4D4;
	sub_831CDCC8(ctx, base);
loc_835FC4D4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC4E4"))) PPC_WEAK_FUNC(sub_835FC4E4);
PPC_FUNC_IMPL(__imp__sub_835FC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC4E8"))) PPC_WEAK_FUNC(sub_835FC4E8);
PPC_FUNC_IMPL(__imp__sub_835FC4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC4F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32312
	ctx.r29.s64 = ctx.r11.s64 + 32312;
	// lwz r11,32376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32376);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc544
	if (!cr6.eq) goto loc_835FC544;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32376, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FC524:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC52C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc524
	if (!cr0.lt) goto loc_835FC524;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC544;
	sub_831CDCC8(ctx, base);
loc_835FC544:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC554"))) PPC_WEAK_FUNC(sub_835FC554);
PPC_FUNC_IMPL(__imp__sub_835FC554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC558"))) PPC_WEAK_FUNC(sub_835FC558);
PPC_FUNC_IMPL(__imp__sub_835FC558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC560;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32384
	ctx.r29.s64 = ctx.r11.s64 + 32384;
	// lwz r11,32464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32464);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc5b4
	if (!cr6.eq) goto loc_835FC5B4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32464, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FC594:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC59C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc594
	if (!cr0.lt) goto loc_835FC594;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10536
	ctx.r3.s64 = ctx.r11.s64 + -10536;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC5B4;
	sub_831CDCC8(ctx, base);
loc_835FC5B4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC5C4"))) PPC_WEAK_FUNC(sub_835FC5C4);
PPC_FUNC_IMPL(__imp__sub_835FC5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC5C8"))) PPC_WEAK_FUNC(sub_835FC5C8);
PPC_FUNC_IMPL(__imp__sub_835FC5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC5D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32472
	ctx.r29.s64 = ctx.r11.s64 + 32472;
	// lwz r11,32504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32504);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc624
	if (!cr6.eq) goto loc_835FC624;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32504, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FC604:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC60C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc604
	if (!cr0.lt) goto loc_835FC604;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10456
	ctx.r3.s64 = ctx.r11.s64 + -10456;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC624;
	sub_831CDCC8(ctx, base);
loc_835FC624:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC634"))) PPC_WEAK_FUNC(sub_835FC634);
PPC_FUNC_IMPL(__imp__sub_835FC634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC638"))) PPC_WEAK_FUNC(sub_835FC638);
PPC_FUNC_IMPL(__imp__sub_835FC638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32512
	ctx.r29.s64 = ctx.r11.s64 + 32512;
	// lwz r11,32560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc694
	if (!cr6.eq) goto loc_835FC694;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32560, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC674:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC67C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc674
	if (!cr0.lt) goto loc_835FC674;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10376
	ctx.r3.s64 = ctx.r11.s64 + -10376;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC694;
	sub_831CDCC8(ctx, base);
loc_835FC694:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC6A4"))) PPC_WEAK_FUNC(sub_835FC6A4);
PPC_FUNC_IMPL(__imp__sub_835FC6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC6A8"))) PPC_WEAK_FUNC(sub_835FC6A8);
PPC_FUNC_IMPL(__imp__sub_835FC6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC6B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32568
	ctx.r29.s64 = ctx.r11.s64 + 32568;
	// lwz r11,32632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32632);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc704
	if (!cr6.eq) goto loc_835FC704;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32632, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FC6E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC6EC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc6e4
	if (!cr0.lt) goto loc_835FC6E4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10296
	ctx.r3.s64 = ctx.r11.s64 + -10296;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC704;
	sub_831CDCC8(ctx, base);
loc_835FC704:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC714"))) PPC_WEAK_FUNC(sub_835FC714);
PPC_FUNC_IMPL(__imp__sub_835FC714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC718"))) PPC_WEAK_FUNC(sub_835FC718);
PPC_FUNC_IMPL(__imp__sub_835FC718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31744
	ctx.r10.s64 = -2080374784;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32640
	ctx.r29.s64 = ctx.r11.s64 + 32640;
	// lwz r11,32736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32736);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc774
	if (!cr6.eq) goto loc_835FC774;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,32736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32736, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FC754:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC75C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc754
	if (!cr0.lt) goto loc_835FC754;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10216
	ctx.r3.s64 = ctx.r11.s64 + -10216;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC774;
	sub_831CDCC8(ctx, base);
loc_835FC774:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC784"))) PPC_WEAK_FUNC(sub_835FC784);
PPC_FUNC_IMPL(__imp__sub_835FC784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC788"))) PPC_WEAK_FUNC(sub_835FC788);
PPC_FUNC_IMPL(__imp__sub_835FC788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31744
	ctx.r11.s64 = -2080374784;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,32744
	ctx.r29.s64 = ctx.r11.s64 + 32744;
	// lwz r11,-32760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32760);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc7e4
	if (!cr6.eq) goto loc_835FC7E4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32760, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FC7C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC7CC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc7c4
	if (!cr0.lt) goto loc_835FC7C4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC7E4;
	sub_831CDCC8(ctx, base);
loc_835FC7E4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC7F4"))) PPC_WEAK_FUNC(sub_835FC7F4);
PPC_FUNC_IMPL(__imp__sub_835FC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC7F8"))) PPC_WEAK_FUNC(sub_835FC7F8);
PPC_FUNC_IMPL(__imp__sub_835FC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32752
	ctx.r29.s64 = ctx.r11.s64 + -32752;
	// lwz r11,-32704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32704);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc854
	if (!cr6.eq) goto loc_835FC854;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32704, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC834:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC83C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc834
	if (!cr0.lt) goto loc_835FC834;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-10056
	ctx.r3.s64 = ctx.r11.s64 + -10056;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC854;
	sub_831CDCC8(ctx, base);
loc_835FC854:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC864"))) PPC_WEAK_FUNC(sub_835FC864);
PPC_FUNC_IMPL(__imp__sub_835FC864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC868"))) PPC_WEAK_FUNC(sub_835FC868);
PPC_FUNC_IMPL(__imp__sub_835FC868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32696
	ctx.r29.s64 = ctx.r11.s64 + -32696;
	// lwz r11,-32616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc8c4
	if (!cr6.eq) goto loc_835FC8C4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32616, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FC8A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC8AC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc8a4
	if (!cr0.lt) goto loc_835FC8A4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9976
	ctx.r3.s64 = ctx.r11.s64 + -9976;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC8C4;
	sub_831CDCC8(ctx, base);
loc_835FC8C4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC8D4"))) PPC_WEAK_FUNC(sub_835FC8D4);
PPC_FUNC_IMPL(__imp__sub_835FC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC8D8"))) PPC_WEAK_FUNC(sub_835FC8D8);
PPC_FUNC_IMPL(__imp__sub_835FC8D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32608
	ctx.r29.s64 = ctx.r11.s64 + -32608;
	// lwz r11,-32560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32560);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc934
	if (!cr6.eq) goto loc_835FC934;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32560, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC914:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC91C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc914
	if (!cr0.lt) goto loc_835FC914;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9896
	ctx.r3.s64 = ctx.r11.s64 + -9896;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC934;
	sub_831CDCC8(ctx, base);
loc_835FC934:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC944"))) PPC_WEAK_FUNC(sub_835FC944);
PPC_FUNC_IMPL(__imp__sub_835FC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC948"))) PPC_WEAK_FUNC(sub_835FC948);
PPC_FUNC_IMPL(__imp__sub_835FC948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32552
	ctx.r29.s64 = ctx.r11.s64 + -32552;
	// lwz r11,-32504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32504);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fc9a4
	if (!cr6.eq) goto loc_835FC9A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32504, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FC984:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC98C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc984
	if (!cr0.lt) goto loc_835FC984;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9816
	ctx.r3.s64 = ctx.r11.s64 + -9816;
	// bl 0x831cdcc8
	ctx.lr = 0x835FC9A4;
	sub_831CDCC8(ctx, base);
loc_835FC9A4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FC9B4"))) PPC_WEAK_FUNC(sub_835FC9B4);
PPC_FUNC_IMPL(__imp__sub_835FC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FC9B8"))) PPC_WEAK_FUNC(sub_835FC9B8);
PPC_FUNC_IMPL(__imp__sub_835FC9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FC9C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32496
	ctx.r29.s64 = ctx.r11.s64 + -32496;
	// lwz r11,-32288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32288);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fca14
	if (!cr6.eq) goto loc_835FCA14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32288, ctx.r11.u32);
	// li r31,12
	ctx.r31.s64 = 12;
loc_835FC9F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FC9FC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fc9f4
	if (!cr0.lt) goto loc_835FC9F4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9736
	ctx.r3.s64 = ctx.r11.s64 + -9736;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCA14;
	sub_831CDCC8(ctx, base);
loc_835FCA14:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCA24"))) PPC_WEAK_FUNC(sub_835FCA24);
PPC_FUNC_IMPL(__imp__sub_835FCA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCA28"))) PPC_WEAK_FUNC(sub_835FCA28);
PPC_FUNC_IMPL(__imp__sub_835FCA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCA30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32280
	ctx.r29.s64 = ctx.r11.s64 + -32280;
	// lwz r11,-32152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32152);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fca84
	if (!cr6.eq) goto loc_835FCA84;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-32152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32152, ctx.r11.u32);
	// li r31,7
	ctx.r31.s64 = 7;
loc_835FCA64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCA6C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fca64
	if (!cr0.lt) goto loc_835FCA64;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9656
	ctx.r3.s64 = ctx.r11.s64 + -9656;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCA84;
	sub_831CDCC8(ctx, base);
loc_835FCA84:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCA94"))) PPC_WEAK_FUNC(sub_835FCA94);
PPC_FUNC_IMPL(__imp__sub_835FCA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCA98"))) PPC_WEAK_FUNC(sub_835FCA98);
PPC_FUNC_IMPL(__imp__sub_835FCA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCAA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-32144
	ctx.r29.s64 = ctx.r11.s64 + -32144;
	// lwz r11,-31888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31888);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcaf4
	if (!cr6.eq) goto loc_835FCAF4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31888, ctx.r11.u32);
	// li r31,15
	ctx.r31.s64 = 15;
loc_835FCAD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCADC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcad4
	if (!cr0.lt) goto loc_835FCAD4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9576
	ctx.r3.s64 = ctx.r11.s64 + -9576;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCAF4;
	sub_831CDCC8(ctx, base);
loc_835FCAF4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCB04"))) PPC_WEAK_FUNC(sub_835FCB04);
PPC_FUNC_IMPL(__imp__sub_835FCB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCB08"))) PPC_WEAK_FUNC(sub_835FCB08);
PPC_FUNC_IMPL(__imp__sub_835FCB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31880
	ctx.r29.s64 = ctx.r11.s64 + -31880;
	// lwz r11,-31800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31800);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcb64
	if (!cr6.eq) goto loc_835FCB64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31800, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FCB44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCB4C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcb44
	if (!cr0.lt) goto loc_835FCB44;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9496
	ctx.r3.s64 = ctx.r11.s64 + -9496;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCB64;
	sub_831CDCC8(ctx, base);
loc_835FCB64:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCB74"))) PPC_WEAK_FUNC(sub_835FCB74);
PPC_FUNC_IMPL(__imp__sub_835FCB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCB78"))) PPC_WEAK_FUNC(sub_835FCB78);
PPC_FUNC_IMPL(__imp__sub_835FCB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCB80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31792
	ctx.r29.s64 = ctx.r11.s64 + -31792;
	// lwz r11,-31760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31760);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcbd4
	if (!cr6.eq) goto loc_835FCBD4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31760, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FCBB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCBBC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcbb4
	if (!cr0.lt) goto loc_835FCBB4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9416
	ctx.r3.s64 = ctx.r11.s64 + -9416;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCBD4;
	sub_831CDCC8(ctx, base);
loc_835FCBD4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCBE4"))) PPC_WEAK_FUNC(sub_835FCBE4);
PPC_FUNC_IMPL(__imp__sub_835FCBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCBE8"))) PPC_WEAK_FUNC(sub_835FCBE8);
PPC_FUNC_IMPL(__imp__sub_835FCBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCBF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31752
	ctx.r29.s64 = ctx.r11.s64 + -31752;
	// lwz r11,-31720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31720);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcc44
	if (!cr6.eq) goto loc_835FCC44;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31720, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FCC24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCC2C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcc24
	if (!cr0.lt) goto loc_835FCC24;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9336
	ctx.r3.s64 = ctx.r11.s64 + -9336;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCC44;
	sub_831CDCC8(ctx, base);
loc_835FCC44:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCC54"))) PPC_WEAK_FUNC(sub_835FCC54);
PPC_FUNC_IMPL(__imp__sub_835FCC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCC58"))) PPC_WEAK_FUNC(sub_835FCC58);
PPC_FUNC_IMPL(__imp__sub_835FCC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCC60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31712
	ctx.r29.s64 = ctx.r11.s64 + -31712;
	// lwz r11,-31648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31648);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fccb4
	if (!cr6.eq) goto loc_835FCCB4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31648, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FCC94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCC9C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcc94
	if (!cr0.lt) goto loc_835FCC94;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9256
	ctx.r3.s64 = ctx.r11.s64 + -9256;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCCB4;
	sub_831CDCC8(ctx, base);
loc_835FCCB4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCCC4"))) PPC_WEAK_FUNC(sub_835FCCC4);
PPC_FUNC_IMPL(__imp__sub_835FCCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCCC8"))) PPC_WEAK_FUNC(sub_835FCCC8);
PPC_FUNC_IMPL(__imp__sub_835FCCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCCD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31640
	ctx.r29.s64 = ctx.r11.s64 + -31640;
	// lwz r11,-31544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31544);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcd24
	if (!cr6.eq) goto loc_835FCD24;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31544, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
loc_835FCD04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCD0C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcd04
	if (!cr0.lt) goto loc_835FCD04;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9176
	ctx.r3.s64 = ctx.r11.s64 + -9176;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCD24;
	sub_831CDCC8(ctx, base);
loc_835FCD24:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCD34"))) PPC_WEAK_FUNC(sub_835FCD34);
PPC_FUNC_IMPL(__imp__sub_835FCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCD38"))) PPC_WEAK_FUNC(sub_835FCD38);
PPC_FUNC_IMPL(__imp__sub_835FCD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCD40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31536
	ctx.r29.s64 = ctx.r11.s64 + -31536;
	// lwz r11,-31504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31504);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcd94
	if (!cr6.eq) goto loc_835FCD94;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31504, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FCD74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCD7C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcd74
	if (!cr0.lt) goto loc_835FCD74;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9096
	ctx.r3.s64 = ctx.r11.s64 + -9096;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCD94;
	sub_831CDCC8(ctx, base);
loc_835FCD94:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCDA4"))) PPC_WEAK_FUNC(sub_835FCDA4);
PPC_FUNC_IMPL(__imp__sub_835FCDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCDA8"))) PPC_WEAK_FUNC(sub_835FCDA8);
PPC_FUNC_IMPL(__imp__sub_835FCDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCDB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31496
	ctx.r29.s64 = ctx.r11.s64 + -31496;
	// lwz r11,-31432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31432);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fce04
	if (!cr6.eq) goto loc_835FCE04;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31432, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FCDE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCDEC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcde4
	if (!cr0.lt) goto loc_835FCDE4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-9016
	ctx.r3.s64 = ctx.r11.s64 + -9016;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCE04;
	sub_831CDCC8(ctx, base);
loc_835FCE04:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCE14"))) PPC_WEAK_FUNC(sub_835FCE14);
PPC_FUNC_IMPL(__imp__sub_835FCE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCE18"))) PPC_WEAK_FUNC(sub_835FCE18);
PPC_FUNC_IMPL(__imp__sub_835FCE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCE20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31424
	ctx.r29.s64 = ctx.r11.s64 + -31424;
	// lwz r11,-31392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31392);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fce74
	if (!cr6.eq) goto loc_835FCE74;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31392, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FCE54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCE5C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fce54
	if (!cr0.lt) goto loc_835FCE54;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCE74;
	sub_831CDCC8(ctx, base);
loc_835FCE74:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCE84"))) PPC_WEAK_FUNC(sub_835FCE84);
PPC_FUNC_IMPL(__imp__sub_835FCE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCE88"))) PPC_WEAK_FUNC(sub_835FCE88);
PPC_FUNC_IMPL(__imp__sub_835FCE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCE90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31384
	ctx.r29.s64 = ctx.r11.s64 + -31384;
	// lwz r11,-31352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31352);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcee4
	if (!cr6.eq) goto loc_835FCEE4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31352, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FCEC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCECC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcec4
	if (!cr0.lt) goto loc_835FCEC4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCEE4;
	sub_831CDCC8(ctx, base);
loc_835FCEE4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCEF4"))) PPC_WEAK_FUNC(sub_835FCEF4);
PPC_FUNC_IMPL(__imp__sub_835FCEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCEF8"))) PPC_WEAK_FUNC(sub_835FCEF8);
PPC_FUNC_IMPL(__imp__sub_835FCEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCF00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31344
	ctx.r29.s64 = ctx.r11.s64 + -31344;
	// lwz r11,-31280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31280);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcf54
	if (!cr6.eq) goto loc_835FCF54;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31280, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FCF34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCF3C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcf34
	if (!cr0.lt) goto loc_835FCF34;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCF54;
	sub_831CDCC8(ctx, base);
loc_835FCF54:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCF64"))) PPC_WEAK_FUNC(sub_835FCF64);
PPC_FUNC_IMPL(__imp__sub_835FCF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCF68"))) PPC_WEAK_FUNC(sub_835FCF68);
PPC_FUNC_IMPL(__imp__sub_835FCF68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31272
	ctx.r29.s64 = ctx.r11.s64 + -31272;
	// lwz r11,-31240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fcfc4
	if (!cr6.eq) goto loc_835FCFC4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31240, ctx.r11.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_835FCFA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FCFAC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fcfa4
	if (!cr0.lt) goto loc_835FCFA4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8696
	ctx.r3.s64 = ctx.r11.s64 + -8696;
	// bl 0x831cdcc8
	ctx.lr = 0x835FCFC4;
	sub_831CDCC8(ctx, base);
loc_835FCFC4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FCFD4"))) PPC_WEAK_FUNC(sub_835FCFD4);
PPC_FUNC_IMPL(__imp__sub_835FCFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FCFD8"))) PPC_WEAK_FUNC(sub_835FCFD8);
PPC_FUNC_IMPL(__imp__sub_835FCFD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FCFE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31232
	ctx.r29.s64 = ctx.r11.s64 + -31232;
	// lwz r11,-31184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31184);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fd034
	if (!cr6.eq) goto loc_835FD034;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31184, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_835FD014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FD01C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fd014
	if (!cr0.lt) goto loc_835FD014;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8616
	ctx.r3.s64 = ctx.r11.s64 + -8616;
	// bl 0x831cdcc8
	ctx.lr = 0x835FD034;
	sub_831CDCC8(ctx, base);
loc_835FD034:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FD044"))) PPC_WEAK_FUNC(sub_835FD044);
PPC_FUNC_IMPL(__imp__sub_835FD044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FD048"))) PPC_WEAK_FUNC(sub_835FD048);
PPC_FUNC_IMPL(__imp__sub_835FD048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FD050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31176
	ctx.r29.s64 = ctx.r11.s64 + -31176;
	// lwz r11,-31064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31064);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fd0a4
	if (!cr6.eq) goto loc_835FD0A4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-31064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31064, ctx.r11.u32);
	// li r31,6
	ctx.r31.s64 = 6;
loc_835FD084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FD08C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fd084
	if (!cr0.lt) goto loc_835FD084;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// bl 0x831cdcc8
	ctx.lr = 0x835FD0A4;
	sub_831CDCC8(ctx, base);
loc_835FD0A4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FD0B4"))) PPC_WEAK_FUNC(sub_835FD0B4);
PPC_FUNC_IMPL(__imp__sub_835FD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FD0B8"))) PPC_WEAK_FUNC(sub_835FD0B8);
PPC_FUNC_IMPL(__imp__sub_835FD0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FD0C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-31056
	ctx.r29.s64 = ctx.r11.s64 + -31056;
	// lwz r11,-30976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30976);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fd114
	if (!cr6.eq) goto loc_835FD114;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-30976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30976, ctx.r11.u32);
	// li r31,4
	ctx.r31.s64 = 4;
loc_835FD0F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FD0FC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fd0f4
	if (!cr0.lt) goto loc_835FD0F4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8456
	ctx.r3.s64 = ctx.r11.s64 + -8456;
	// bl 0x831cdcc8
	ctx.lr = 0x835FD114;
	sub_831CDCC8(ctx, base);
loc_835FD114:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FD124"))) PPC_WEAK_FUNC(sub_835FD124);
PPC_FUNC_IMPL(__imp__sub_835FD124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FD128"))) PPC_WEAK_FUNC(sub_835FD128);
PPC_FUNC_IMPL(__imp__sub_835FD128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FD130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-30968
	ctx.r29.s64 = ctx.r11.s64 + -30968;
	// lwz r11,-30904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30904);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fd184
	if (!cr6.eq) goto loc_835FD184;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-30904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30904, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FD164:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FD16C;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fd164
	if (!cr0.lt) goto loc_835FD164;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8376
	ctx.r3.s64 = ctx.r11.s64 + -8376;
	// bl 0x831cdcc8
	ctx.lr = 0x835FD184;
	sub_831CDCC8(ctx, base);
loc_835FD184:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_835FD194"))) PPC_WEAK_FUNC(sub_835FD194);
PPC_FUNC_IMPL(__imp__sub_835FD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_835FD198"))) PPC_WEAK_FUNC(sub_835FD198);
PPC_FUNC_IMPL(__imp__sub_835FD198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x835FD1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-30896
	ctx.r29.s64 = ctx.r11.s64 + -30896;
	// lwz r11,-30832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x835fd1f4
	if (!cr6.eq) goto loc_835FD1F4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,-30832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30832, ctx.r11.u32);
	// li r31,3
	ctx.r31.s64 = 3;
loc_835FD1D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82574258
	ctx.lr = 0x835FD1DC;
	sub_82574258(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x835fd1d4
	if (!cr0.lt) goto loc_835FD1D4;
	// lis r11,-31786
	ctx.r11.s64 = -2083127296;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// bl 0x831cdcc8
	ctx.lr = 0x835FD1F4;
	sub_831CDCC8(ctx, base);
loc_835FD1F4:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

