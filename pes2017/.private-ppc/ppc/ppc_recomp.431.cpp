#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837647FC"))) PPC_WEAK_FUNC(sub_837647FC);
PPC_FUNC_IMPL(__imp__sub_837647FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764800"))) PPC_WEAK_FUNC(sub_83764800);
PPC_FUNC_IMPL(__imp__sub_83764800) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376482C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83764858
	if (cr6.eq) goto loc_83764858;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83764848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82a7dee0
	ctx.lr = 0x83764854;
	sub_82A7DEE0(ctx, base);
	// b 0x8376485c
	goto loc_8376485C;
loc_83764858:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8376485C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83764874"))) PPC_WEAK_FUNC(sub_83764874);
PPC_FUNC_IMPL(__imp__sub_83764874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764878"))) PPC_WEAK_FUNC(sub_83764878);
PPC_FUNC_IMPL(__imp__sub_83764878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83764880;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8373fae8
	ctx.lr = 0x837648A0;
	sub_8373FAE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x825a10c0
	ctx.lr = 0x837648B0;
	sub_825A10C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83763e30
	ctx.lr = 0x837648B8;
	sub_83763E30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837648d0
	if (cr6.eq) goto loc_837648D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837648D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x83763f08
	ctx.lr = 0x837648DC;
	sub_83763F08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764904
	if (cr6.eq) goto loc_83764904;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8377f590
	ctx.lr = 0x837648F8;
	sub_8377F590(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83764904
	if (!cr6.eq) goto loc_83764904;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83764904:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83764910"))) PPC_WEAK_FUNC(sub_83764910);
PPC_FUNC_IMPL(__imp__sub_83764910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83764918;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83764944;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83764954;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764964;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764974;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764984;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764994;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x837649A4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,29
	ctx.r5.s64 = 29;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x837649B4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,42
	ctx.r5.s64 = 42;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x837649C4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,43
	ctx.r5.s64 = 43;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x837649D4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x837649E4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,54
	ctx.r5.s64 = 54;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x837649F4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,55
	ctx.r5.s64 = 55;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A04;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A14;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A24;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A34;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A44;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A54;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A64;
	sub_82AAF090(ctx, base);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83764A74;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A84;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764A94;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764AA4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764AB4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764AC4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764AD4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764AE4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764AF4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B04;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B14;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B24;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B34;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B44;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B54;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B64;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B74;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B84;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764B94;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764BA4;
	sub_82AAF090(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83764BB4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,41
	ctx.r5.s64 = 41;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764BC4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764BD4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764BE4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764BF4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C04;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C14;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,50
	ctx.r5.s64 = 50;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C24;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C34;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C44;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,53
	ctx.r5.s64 = 53;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C54;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C64;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,58
	ctx.r5.s64 = 58;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C74;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,59
	ctx.r5.s64 = 59;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C84;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764C94;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,61
	ctx.r5.s64 = 61;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764CA4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764CB4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764CC4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,122
	ctx.r5.s64 = 122;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764CD4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,123
	ctx.r5.s64 = 123;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764CE4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764CF4;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,125
	ctx.r5.s64 = 125;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764D04;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,126
	ctx.r5.s64 = 126;
	// li r4,54
	ctx.r4.s64 = 54;
	// bl 0x82aaf090
	ctx.lr = 0x83764D14;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,118
	ctx.r5.s64 = 118;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82aaf090
	ctx.lr = 0x83764D24;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,119
	ctx.r4.s64 = 119;
	// bl 0x82aaccf8
	ctx.lr = 0x83764D30;
	sub_82AACCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,119
	ctx.r5.s64 = 119;
	// bl 0x82aaf090
	ctx.lr = 0x83764D40;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,102
	ctx.r5.s64 = 102;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82aaf090
	ctx.lr = 0x83764D50;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,103
	ctx.r5.s64 = 103;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82aaf090
	ctx.lr = 0x83764D60;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82aaf090
	ctx.lr = 0x83764D70;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,105
	ctx.r5.s64 = 105;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaf090
	ctx.lr = 0x83764D80;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,106
	ctx.r5.s64 = 106;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaf090
	ctx.lr = 0x83764D90;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,107
	ctx.r5.s64 = 107;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82aaf090
	ctx.lr = 0x83764DA0;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82aaf090
	ctx.lr = 0x83764DB0;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,109
	ctx.r5.s64 = 109;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaf090
	ctx.lr = 0x83764DC0;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,110
	ctx.r5.s64 = 110;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82aaf090
	ctx.lr = 0x83764DD0;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82aaf090
	ctx.lr = 0x83764DE0;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82aaf090
	ctx.lr = 0x83764DF0;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,113
	ctx.r5.s64 = 113;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82aaf090
	ctx.lr = 0x83764E00;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82aaf090
	ctx.lr = 0x83764E10;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82aaf090
	ctx.lr = 0x83764E20;
	sub_82AAF090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82aaf090
	ctx.lr = 0x83764E30;
	sub_82AAF090(ctx, base);
	// li r5,117
	ctx.r5.s64 = 117;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaf090
	ctx.lr = 0x83764E40;
	sub_82AAF090(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377d6d8
	ctx.lr = 0x83764E4C;
	sub_8377D6D8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r27,r23,328
	ctx.r27.s64 = ctx.r23.s64 + 328;
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// lis r25,-31770
	ctx.r25.s64 = -2082078720;
loc_83764E64:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83764f14
	if (cr6.eq) goto loc_83764F14;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a713f0
	ctx.lr = 0x83764E80;
	sub_82A713F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764f14
	if (cr6.eq) goto loc_83764F14;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83764f14
	if (!cr6.eq) goto loc_83764F14;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83764ef0
	if (cr6.eq) goto loc_83764EF0;
	// rlwinm r11,r29,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x3FFFF;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x83764eb4
	if (!cr6.gt) goto loc_83764EB4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_83764EB4:
	// lwz r10,30436(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 30436);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83764edc
	if (!cr6.eq) goto loc_83764EDC;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83764ee0
	if (cr6.eq) goto loc_83764EE0;
loc_83764EDC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_83764EE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x83764ef4
	if (cr6.eq) goto loc_83764EF4;
loc_83764EF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83764EF4:
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83764f08
	if (cr6.eq) goto loc_83764F08;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_83764F08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83764f30
	if (cr6.eq) goto loc_83764F30;
loc_83764F14:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(ctx.r26.u32, 10, xer);
	// blt cr6,0x83764e64
	if (cr6.lt) goto loc_83764E64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83764F30:
	// addi r11,r26,82
	ctx.r11.s64 = ctx.r26.s64 + 82;
	// li r5,132
	ctx.r5.s64 = 132;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// bl 0x831ce980
	ctx.lr = 0x83764F48;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83764F54"))) PPC_WEAK_FUNC(sub_83764F54);
PPC_FUNC_IMPL(__imp__sub_83764F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83764F58"))) PPC_WEAK_FUNC(sub_83764F58);
PPC_FUNC_IMPL(__imp__sub_83764F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83764F60;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,91
	ctx.r11.s64 = 91;
	// li r10,92
	ctx.r10.s64 = 92;
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,95
	ctx.r7.s64 = 95;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,97
	ctx.r5.s64 = 97;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// bl 0x82efe820
	ctx.lr = 0x83764FAC;
	sub_82EFE820(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83765130
	if (cr6.eq) goto loc_83765130;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83765130
	if (!cr6.gt) goto loc_83765130;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83764fd4
	if (!cr6.gt) goto loc_83764FD4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83765130
	if (!cr6.eq) goto loc_83765130;
loc_83764FD4:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x83764FDC;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765130
	if (cr6.eq) goto loc_83765130;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a68858
	ctx.lr = 0x83764FF4;
	sub_82A68858(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83765038
	if (cr6.eq) goto loc_83765038;
loc_83765004:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83765018;
	sub_82A7DE40(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a7de40
	ctx.lr = 0x8376502C;
	sub_82A7DE40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// blt cr6,0x83765004
	if (cr6.lt) goto loc_83765004;
loc_83765038:
	// clrlwi r23,r30,14
	ctx.r23.u64 = ctx.r30.u32 & 0x3FFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306ca70
	ctx.lr = 0x8376504C;
	sub_8306CA70(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r22,r1,80
	ctx.r22.s64 = ctx.r1.s64 + 80;
loc_83765054:
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82efe8d8
	ctx.lr = 0x83765064;
	sub_82EFE8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765120
	if (cr6.eq) goto loc_83765120;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82efe958
	ctx.lr = 0x83765080;
	sub_82EFE958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83765120
	if (cr6.eq) goto loc_83765120;
loc_83765090:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82efe928
	ctx.lr = 0x837650A0;
	sub_82EFE928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376510c
	if (cr6.eq) goto loc_8376510C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8311c708
	ctx.lr = 0x837650B8;
	sub_8311C708(ctx, base);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, xer);
	// bne cr6,0x83765104
	if (!cr6.eq) goto loc_83765104;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8311c750
	ctx.lr = 0x837650CC;
	sub_8311C750(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// rlwinm r20,r11,14,26,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3F;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a7de40
	ctx.lr = 0x837650EC;
	sub_82A7DE40(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a7de40
	ctx.lr = 0x83765100;
	sub_82A7DE40(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83765104:
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bge cr6,0x83765118
	if (!cr6.lt) goto loc_83765118;
loc_8376510C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x83765090
	if (cr6.lt) goto loc_83765090;
loc_83765118:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8376513c
	if (!cr6.eq) goto loc_8376513C;
loc_83765120:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(ctx.r27.u32, 7, xer);
	// blt cr6,0x83765054
	if (cr6.lt) goto loc_83765054;
loc_83765130:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8376513C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765148"))) PPC_WEAK_FUNC(sub_83765148);
PPC_FUNC_IMPL(__imp__sub_83765148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83765150;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e58f28
	ctx.lr = 0x83765168;
	sub_82E58F28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x83763f08
	ctx.lr = 0x83765174;
	sub_83763F08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837651f8
	if (cr6.eq) goto loc_837651F8;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x83765188;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837651d8
	if (cr6.eq) goto loc_837651D8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837651b0
	if (cr6.eq) goto loc_837651B0;
	// bl 0x83115808
	ctx.lr = 0x837651A0;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837651b4
	if (!cr6.eq) goto loc_837651B4;
loc_837651B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837651B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837651d8
	if (cr6.eq) goto loc_837651D8;
	// bl 0x831156e8
	ctx.lr = 0x837651C4;
	sub_831156E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x837651D0;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r31,r11,23,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
loc_837651D8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8377f418
	ctx.lr = 0x837651EC;
	sub_8377F418(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837651f8
	if (!cr6.eq) goto loc_837651F8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_837651F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765204"))) PPC_WEAK_FUNC(sub_83765204);
PPC_FUNC_IMPL(__imp__sub_83765204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765208"))) PPC_WEAK_FUNC(sub_83765208);
PPC_FUNC_IMPL(__imp__sub_83765208) {
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
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765284
	if (cr6.eq) goto loc_83765284;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8376523C;
	sub_82595150(ctx, base);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376525c
	if (cr6.eq) goto loc_8376525C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376525C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376525C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83765264;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
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
loc_83765284:
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

__attribute__((alias("__imp__sub_8376529C"))) PPC_WEAK_FUNC(sub_8376529C);
PPC_FUNC_IMPL(__imp__sub_8376529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837652A0"))) PPC_WEAK_FUNC(sub_837652A0);
PPC_FUNC_IMPL(__imp__sub_837652A0) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837652ec
	if (cr6.eq) goto loc_837652EC;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837652D4;
	sub_82595150(ctx, base);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82416268
	ctx.lr = 0x837652DC;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837652E4;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
loc_837652EC:
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

__attribute__((alias("__imp__sub_83765300"))) PPC_WEAK_FUNC(sub_83765300);
PPC_FUNC_IMPL(__imp__sub_83765300) {
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
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376534c
	if (cr6.eq) goto loc_8376534C;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83765334;
	sub_82595150(ctx, base);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x82416268
	ctx.lr = 0x8376533C;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83765344;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
loc_8376534C:
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

__attribute__((alias("__imp__sub_83765360"))) PPC_WEAK_FUNC(sub_83765360);
PPC_FUNC_IMPL(__imp__sub_83765360) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837653ac
	if (cr6.eq) goto loc_837653AC;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83765394;
	sub_82595150(ctx, base);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82416268
	ctx.lr = 0x8376539C;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837653A4;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
loc_837653AC:
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

__attribute__((alias("__imp__sub_837653C0"))) PPC_WEAK_FUNC(sub_837653C0);
PPC_FUNC_IMPL(__imp__sub_837653C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837653C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,240(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765400
	if (!cr6.eq) goto loc_83765400;
	// lwz r30,196(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r29,192(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82aacdd8
	ctx.lr = 0x837653E4;
	sub_82AACDD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x837cb018
	ctx.lr = 0x837653F0;
	sub_837CB018(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83765400
	if (cr6.eq) goto loc_83765400;
	// bl 0x837cd328
	ctx.lr = 0x837653FC;
	sub_837CD328(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83765400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376540C"))) PPC_WEAK_FUNC(sub_8376540C);
PPC_FUNC_IMPL(__imp__sub_8376540C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765410"))) PPC_WEAK_FUNC(sub_83765410);
PPC_FUNC_IMPL(__imp__sub_83765410) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376545c
	if (cr6.eq) goto loc_8376545C;
	// li r11,43
	ctx.r11.s64 = 43;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83765444;
	sub_82595150(ctx, base);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x8376544C;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83765454;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
loc_8376545C:
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

__attribute__((alias("__imp__sub_83765470"))) PPC_WEAK_FUNC(sub_83765470);
PPC_FUNC_IMPL(__imp__sub_83765470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x837643b0
	sub_837643B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765480"))) PPC_WEAK_FUNC(sub_83765480);
PPC_FUNC_IMPL(__imp__sub_83765480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83765484"))) PPC_WEAK_FUNC(sub_83765484);
PPC_FUNC_IMPL(__imp__sub_83765484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765488"))) PPC_WEAK_FUNC(sub_83765488);
PPC_FUNC_IMPL(__imp__sub_83765488) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837654b0
	if (!cr6.eq) goto loc_837654B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837654d8
	goto loc_837654D8;
loc_837654B0:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837654BC;
	sub_82596FE8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x837654D4;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837654D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837654F0"))) PPC_WEAK_FUNC(sub_837654F0);
PPC_FUNC_IMPL(__imp__sub_837654F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837654F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765518
	if (!cr6.eq) goto loc_83765518;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83765518:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83765524;
	sub_82596FE8(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x83765538;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765544"))) PPC_WEAK_FUNC(sub_83765544);
PPC_FUNC_IMPL(__imp__sub_83765544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765548"))) PPC_WEAK_FUNC(sub_83765548);
PPC_FUNC_IMPL(__imp__sub_83765548) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765570
	if (!cr6.eq) goto loc_83765570;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83765598
	goto loc_83765598;
loc_83765570:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8376557C;
	sub_82596FE8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x83765594;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83765598:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837655B0"))) PPC_WEAK_FUNC(sub_837655B0);
PPC_FUNC_IMPL(__imp__sub_837655B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837655B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837655d8
	if (!cr6.eq) goto loc_837655D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837655D8:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837655E4;
	sub_82596FE8(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837655F8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765604"))) PPC_WEAK_FUNC(sub_83765604);
PPC_FUNC_IMPL(__imp__sub_83765604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765608"))) PPC_WEAK_FUNC(sub_83765608);
PPC_FUNC_IMPL(__imp__sub_83765608) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765630
	if (!cr6.eq) goto loc_83765630;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83765658
	goto loc_83765658;
loc_83765630:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8376563C;
	sub_82596FE8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x83765654;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83765658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83765670"))) PPC_WEAK_FUNC(sub_83765670);
PPC_FUNC_IMPL(__imp__sub_83765670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83765678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765698
	if (!cr6.eq) goto loc_83765698;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83765698:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837656A4;
	sub_82596FE8(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837656B8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837656C4"))) PPC_WEAK_FUNC(sub_837656C4);
PPC_FUNC_IMPL(__imp__sub_837656C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837656C8"))) PPC_WEAK_FUNC(sub_837656C8);
PPC_FUNC_IMPL(__imp__sub_837656C8) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837656f0
	if (!cr6.eq) goto loc_837656F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83765718
	goto loc_83765718;
loc_837656F0:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837656FC;
	sub_82596FE8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x83765714;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83765718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83765730"))) PPC_WEAK_FUNC(sub_83765730);
PPC_FUNC_IMPL(__imp__sub_83765730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83765738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765758
	if (!cr6.eq) goto loc_83765758;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83765758:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83765764;
	sub_82596FE8(ctx, base);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x83765778;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765784"))) PPC_WEAK_FUNC(sub_83765784);
PPC_FUNC_IMPL(__imp__sub_83765784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765788"))) PPC_WEAK_FUNC(sub_83765788);
PPC_FUNC_IMPL(__imp__sub_83765788) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837657b0
	if (!cr6.eq) goto loc_837657B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837657d8
	goto loc_837657D8;
loc_837657B0:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837657BC;
	sub_82596FE8(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x837657D4;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837657D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837657F0"))) PPC_WEAK_FUNC(sub_837657F0);
PPC_FUNC_IMPL(__imp__sub_837657F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837657F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765818
	if (!cr6.eq) goto loc_83765818;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83765818:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x83765824;
	sub_82596FE8(ctx, base);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x83765838;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765844"))) PPC_WEAK_FUNC(sub_83765844);
PPC_FUNC_IMPL(__imp__sub_83765844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765848"))) PPC_WEAK_FUNC(sub_83765848);
PPC_FUNC_IMPL(__imp__sub_83765848) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765870
	if (!cr6.eq) goto loc_83765870;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83765898
	goto loc_83765898;
loc_83765870:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8376587C;
	sub_82596FE8(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x83765894;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83765898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837658B0"))) PPC_WEAK_FUNC(sub_837658B0);
PPC_FUNC_IMPL(__imp__sub_837658B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837658B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837658d8
	if (!cr6.eq) goto loc_837658D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837658D8:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837658E4;
	sub_82596FE8(ctx, base);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837658F8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765904"))) PPC_WEAK_FUNC(sub_83765904);
PPC_FUNC_IMPL(__imp__sub_83765904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765908"))) PPC_WEAK_FUNC(sub_83765908);
PPC_FUNC_IMPL(__imp__sub_83765908) {
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
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765930
	if (!cr6.eq) goto loc_83765930;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83765958
	goto loc_83765958;
loc_83765930:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x8376593C;
	sub_82596FE8(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r31,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// bl 0x82597088
	ctx.lr = 0x83765954;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83765958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83765970"))) PPC_WEAK_FUNC(sub_83765970);
PPC_FUNC_IMPL(__imp__sub_83765970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83765978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83765998
	if (!cr6.eq) goto loc_83765998;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83765998:
	// addi r30,r31,188
	ctx.r30.s64 = ctx.r31.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x837659A4;
	sub_82596FE8(ctx, base);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x837659B8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837659C4"))) PPC_WEAK_FUNC(sub_837659C4);
PPC_FUNC_IMPL(__imp__sub_837659C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837659C8"))) PPC_WEAK_FUNC(sub_837659C8);
PPC_FUNC_IMPL(__imp__sub_837659C8) {
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
	ctx.lr = 0x837659D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x837659E4;
	sub_831CDCF0(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r27,76
	ctx.r11.s64 = ctx.r27.s64 + 76;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837659F4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837659f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837659F4;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r31,r27,120
	ctx.r31.s64 = ctx.r27.s64 + 120;
	// li r29,21000
	ctx.r29.s64 = 21000;
	// addi r28,r11,30388
	ctx.r28.s64 = ctx.r11.s64 + 30388;
loc_83765A0C:
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765A1C;
	sub_831CDCF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x83070638
	ctx.lr = 0x83765A34;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765a78
	if (cr6.eq) goto loc_83765A78;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765a78
	if (cr6.eq) goto loc_83765A78;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765a78
	if (cr6.lt) goto loc_83765A78;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765a78
	if (cr6.gt) goto loc_83765A78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765A78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765A78:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x83765A90;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765ad4
	if (cr6.eq) goto loc_83765AD4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765ad4
	if (cr6.eq) goto loc_83765AD4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765ad4
	if (cr6.lt) goto loc_83765AD4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765ad4
	if (cr6.gt) goto loc_83765AD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83765AD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765AD4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,188
	ctx.r31.s64 = ctx.r31.s64 + 188;
	// bne 0x83765a0c
	if (!cr0.eq) goto loc_83765A0C;
	// addis r31,r27,60
	ctx.r31.s64 = ctx.r27.s64 + 3932160;
	// li r30,650
	ctx.r30.s64 = 650;
	// addi r31,r31,15960
	ctx.r31.s64 = ctx.r31.s64 + 15960;
	// lis r28,-31770
	ctx.r28.s64 = -2082078720;
loc_83765AF0:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765B00;
	sub_831CDCF0(ctx, base);
	// lwz r11,30436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30436);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83765B1C;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765b60
	if (cr6.eq) goto loc_83765B60;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765b60
	if (cr6.eq) goto loc_83765B60;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765b60
	if (cr6.lt) goto loc_83765B60;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765b60
	if (cr6.gt) goto loc_83765B60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765B60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765B60:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,480
	ctx.r31.s64 = ctx.r31.s64 + 480;
	// bne 0x83765af0
	if (!cr0.eq) goto loc_83765AF0;
	// addis r31,r27,65
	ctx.r31.s64 = ctx.r27.s64 + 4259840;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// li r30,850
	ctx.r30.s64 = 850;
	// addi r31,r31,280
	ctx.r31.s64 = ctx.r31.s64 + 280;
	// addi r29,r11,30452
	ctx.r29.s64 = ctx.r11.s64 + 30452;
loc_83765B80:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765B90;
	sub_831CDCF0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83071e38
	ctx.lr = 0x83765BA8;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765bec
	if (cr6.eq) goto loc_83765BEC;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765bec
	if (cr6.eq) goto loc_83765BEC;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765bec
	if (cr6.lt) goto loc_83765BEC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765bec
	if (cr6.gt) goto loc_83765BEC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765BEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765BEC:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bne 0x83765b80
	if (!cr0.eq) goto loc_83765B80;
	// addis r31,r27,66
	ctx.r31.s64 = ctx.r27.s64 + 4325376;
	// li r30,50
	ctx.r30.s64 = 50;
	// addi r31,r31,9544
	ctx.r31.s64 = ctx.r31.s64 + 9544;
loc_83765C04:
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765C14;
	sub_831CDCF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83071998
	ctx.lr = 0x83765C24;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765c38
	if (cr6.eq) goto loc_83765C38;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x83765c5c
	goto loc_83765C5C;
loc_83765C38:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x83765C48;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_83765C5C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83071998
	ctx.lr = 0x83765C70;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765cb4
	if (cr6.eq) goto loc_83765CB4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765cb4
	if (cr6.eq) goto loc_83765CB4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765cb4
	if (cr6.lt) goto loc_83765CB4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765cb4
	if (cr6.gt) goto loc_83765CB4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765CB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765CB4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,124
	ctx.r31.s64 = ctx.r31.s64 + 124;
	// bne 0x83765c04
	if (!cr0.eq) goto loc_83765C04;
	// addis r31,r27,66
	ctx.r31.s64 = ctx.r27.s64 + 4325376;
	// li r30,40
	ctx.r30.s64 = 40;
	// addi r31,r31,15744
	ctx.r31.s64 = ctx.r31.s64 + 15744;
loc_83765CCC:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765CDC;
	sub_831CDCF0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83070868
	ctx.lr = 0x83765CEC;
	sub_83070868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765d00
	if (cr6.eq) goto loc_83765D00;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x83765d24
	goto loc_83765D24;
loc_83765D00:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x83765D10;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_83765D24:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83070868
	ctx.lr = 0x83765D38;
	sub_83070868(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83765d7c
	if (cr6.eq) goto loc_83765D7C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765d7c
	if (cr6.eq) goto loc_83765D7C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765d7c
	if (cr6.lt) goto loc_83765D7C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765d7c
	if (cr6.gt) goto loc_83765D7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765D7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765D7C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bne 0x83765ccc
	if (!cr0.eq) goto loc_83765CCC;
	// addis r31,r27,66
	ctx.r31.s64 = ctx.r27.s64 + 4325376;
	// li r30,2500
	ctx.r30.s64 = 2500;
	// addi r31,r31,20864
	ctx.r31.s64 = ctx.r31.s64 + 20864;
loc_83765D94:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765DA4;
	sub_831CDCF0(ctx, base);
	// lwz r11,30436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30436);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744a28
	ctx.lr = 0x83765DC0;
	sub_83744A28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765e04
	if (cr6.eq) goto loc_83765E04;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765e04
	if (cr6.eq) goto loc_83765E04;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765e04
	if (cr6.lt) goto loc_83765E04;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765e04
	if (cr6.gt) goto loc_83765E04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765E04:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// bne 0x83765d94
	if (!cr0.eq) goto loc_83765D94;
	// addis r31,r27,71
	ctx.r31.s64 = ctx.r27.s64 + 4653056;
	// li r30,650
	ctx.r30.s64 = 650;
	// addi r31,r31,23184
	ctx.r31.s64 = ctx.r31.s64 + 23184;
loc_83765E1C:
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765E2C;
	sub_831CDCF0(ctx, base);
	// lwz r11,30436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30436);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306a818
	ctx.lr = 0x83765E48;
	sub_8306A818(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765e8c
	if (cr6.eq) goto loc_83765E8C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765e8c
	if (cr6.eq) goto loc_83765E8C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765e8c
	if (cr6.lt) goto loc_83765E8C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765e8c
	if (cr6.gt) goto loc_83765E8C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765E8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765E8C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// bne 0x83765e1c
	if (!cr0.eq) goto loc_83765E1C;
	// addis r31,r27,73
	ctx.r31.s64 = ctx.r27.s64 + 4784128;
	// li r30,650
	ctx.r30.s64 = 650;
	// addi r31,r31,1600
	ctx.r31.s64 = ctx.r31.s64 + 1600;
loc_83765EA4:
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83765EB4;
	sub_831CDCF0(ctx, base);
	// lwz r11,30436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30436);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8307e348
	ctx.lr = 0x83765ED0;
	sub_8307E348(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765f14
	if (cr6.eq) goto loc_83765F14;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83765f14
	if (cr6.eq) goto loc_83765F14;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83765f14
	if (cr6.lt) goto loc_83765F14;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83765f14
	if (cr6.gt) goto loc_83765F14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x83765F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83765F14:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,628
	ctx.r31.s64 = ctx.r31.s64 + 628;
	// bne 0x83765ea4
	if (!cr0.eq) goto loc_83765EA4;
	// addis r3,r27,73
	ctx.r3.s64 = ctx.r27.s64 + 4784128;
	// li r5,2888
	ctx.r5.s64 = 2888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-1288
	ctx.r3.s64 = ctx.r3.s64 + -1288;
	// bl 0x831cdcf0
	ctx.lr = 0x83765F34;
	sub_831CDCF0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addis r3,r27,79
	ctx.r3.s64 = ctx.r27.s64 + 5177344;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,6714
	ctx.r5.u64 = ctx.r5.u64 | 6714;
	// addi r3,r3,16584
	ctx.r3.s64 = ctx.r3.s64 + 16584;
	// bl 0x831cdcf0
	ctx.lr = 0x83765F4C;
	sub_831CDCF0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83765F54"))) PPC_WEAK_FUNC(sub_83765F54);
PPC_FUNC_IMPL(__imp__sub_83765F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83765F58"))) PPC_WEAK_FUNC(sub_83765F58);
PPC_FUNC_IMPL(__imp__sub_83765F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83765F60;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8376610c
	if (cr6.eq) goto loc_8376610C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8376610c
	if (cr6.eq) goto loc_8376610C;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// bl 0x837810a8
	ctx.lr = 0x83765F94;
	sub_837810A8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x837660bc
	if (cr6.lt) goto loc_837660BC;
	// beq cr6,0x83766034
	if (cr6.eq) goto loc_83766034;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x8376610c
	if (!cr6.lt) goto loc_8376610C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837645e0
	ctx.lr = 0x83765FB4;
	sub_837645E0(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83765FCC;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83780fe0
	ctx.lr = 0x83765FE8;
	sub_83780FE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766018
	if (cr6.eq) goto loc_83766018;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83764408
	ctx.lr = 0x83766008;
	sub_83764408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766018
	if (cr6.eq) goto loc_83766018;
	// li r24,1
	ctx.r24.s64 = 1;
loc_83766018:
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83766028;
	sub_825952B8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83766034:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83764680
	ctx.lr = 0x83766044;
	sub_83764680(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837660b0
	if (cr6.eq) goto loc_837660B0;
loc_83766054:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83780f28
	ctx.lr = 0x8376606C;
	sub_83780F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376609c
	if (cr6.eq) goto loc_8376609C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83764540
	ctx.lr = 0x8376608C;
	sub_83764540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376609c
	if (cr6.eq) goto loc_8376609C;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8376609C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x83766054
	if (cr6.lt) goto loc_83766054;
loc_837660B0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837660BC:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83780e70
	ctx.lr = 0x837660D4;
	sub_83780E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766100
	if (cr6.eq) goto loc_83766100;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a78580
	ctx.lr = 0x837660F0;
	sub_82A78580(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766100
	if (cr6.eq) goto loc_83766100;
	// li r24,1
	ctx.r24.s64 = 1;
loc_83766100:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8376610C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83766118"))) PPC_WEAK_FUNC(sub_83766118);
PPC_FUNC_IMPL(__imp__sub_83766118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83766120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x837661a0
	if (!cr6.lt) goto loc_837661A0;
loc_8376613C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x83766168
	if (!cr6.lt) goto loc_83766168;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83766168:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// blt cr6,0x8376613c
	if (cr6.lt) goto loc_8376613C;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
loc_837661A0:
	// bne cr6,0x837661c8
	if (!cr6.eq) goto loc_837661C8;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_837661C8:
	// bl 0x837646f8
	ctx.lr = 0x837661CC;
	sub_837646F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837661D4"))) PPC_WEAK_FUNC(sub_837661D4);
PPC_FUNC_IMPL(__imp__sub_837661D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837661D8"))) PPC_WEAK_FUNC(sub_837661D8);
PPC_FUNC_IMPL(__imp__sub_837661D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837661E0;
	__savegprlr_29(ctx, base);
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8306e6b8
	ctx.lr = 0x837661F8;
	sub_8306E6B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83766228
	if (!cr6.eq) goto loc_83766228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306dec0
	ctx.lr = 0x83766208;
	sub_8306DEC0(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e6b8
	ctx.lr = 0x83766214;
	sub_8306E6B8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83766228
	if (!cr6.eq) goto loc_83766228;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83766228:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83766234;
	sub_831CE980(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83766260
	if (cr6.eq) goto loc_83766260;
	// bl 0x8306e8d8
	ctx.lr = 0x83766254;
	sub_8306E8D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83766260:
	// bl 0x8306df38
	ctx.lr = 0x83766264;
	sub_8306DF38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83766270"))) PPC_WEAK_FUNC(sub_83766270);
PPC_FUNC_IMPL(__imp__sub_83766270) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x837659c8
	sub_837659C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83766278"))) PPC_WEAK_FUNC(sub_83766278);
PPC_FUNC_IMPL(__imp__sub_83766278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83766280;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8308d9f8
	ctx.lr = 0x8376628C;
	sub_8308D9F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837662a4
	if (cr6.eq) goto loc_837662A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837662A4:
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766308
	if (cr6.eq) goto loc_83766308;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x837662C0;
	sub_835242E8(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwsync 
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_837662CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r9,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837662cc
	if (!cr0.eq) goto loc_837662CC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83766304
	if (!cr6.eq) goto loc_83766304;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83766304;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766304:
	// stw r27,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r27.u32);
loc_83766308:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766364
	if (cr6.eq) goto loc_83766364;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x8376631C;
	sub_835242E8(ctx, base);
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwsync 
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_83766328:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r9,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83766328
	if (!cr0.eq) goto loc_83766328;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83766360
	if (!cr6.eq) goto loc_83766360;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83766360;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766360:
	// stw r27,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r27.u32);
loc_83766364:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837663c0
	if (cr6.eq) goto loc_837663C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x83766378;
	sub_835242E8(ctx, base);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwsync 
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_83766384:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r9,0,r10
	ea = ctx.r10.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83766384
	if (!cr0.eq) goto loc_83766384;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837663bc
	if (!cr6.eq) goto loc_837663BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837663BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837663BC:
	// stw r27,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r27.u32);
loc_837663C0:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8376ea18
	ctx.lr = 0x837663C8;
	sub_8376EA18(ctx, base);
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x831478f8
	ctx.lr = 0x837663D0;
	sub_831478F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837652a0
	ctx.lr = 0x837663D8;
	sub_837652A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83765300
	ctx.lr = 0x837663E0;
	sub_83765300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83765410
	ctx.lr = 0x837663E8;
	sub_83765410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83765360
	ctx.lr = 0x837663F0;
	sub_83765360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83765208
	ctx.lr = 0x837663F8;
	sub_83765208(ctx, base);
	// addi r30,r31,328
	ctx.r30.s64 = ctx.r31.s64 + 328;
	// li r29,10
	ctx.r29.s64 = 10;
	// li r28,43
	ctx.r28.s64 = 43;
loc_83766404:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766434
	if (cr6.eq) goto loc_83766434;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83766420;
	sub_82595150(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x83766428;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83766430;
	sub_82595170(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_83766434:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83766404
	if (!cr0.eq) goto loc_83766404;
	// bl 0x8399f8b8
	ctx.lr = 0x83766444;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766450
	if (cr6.eq) goto loc_83766450;
	// bl 0x839a04b8
	ctx.lr = 0x83766450;
	sub_839A04B8(ctx, base);
loc_83766450:
	// bl 0x8377de00
	ctx.lr = 0x83766454;
	sub_8377DE00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837730a0
	ctx.lr = 0x8376645C;
	sub_837730A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83766464"))) PPC_WEAK_FUNC(sub_83766464);
PPC_FUNC_IMPL(__imp__sub_83766464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83766468"))) PPC_WEAK_FUNC(sub_83766468);
PPC_FUNC_IMPL(__imp__sub_83766468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83766470;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83766494;
	sub_831CDCF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_83766498:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83070638
	ctx.lr = 0x837664A8;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837664f0
	if (cr6.eq) goto loc_837664F0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837664f0
	if (cr6.eq) goto loc_837664F0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x837664f0
	if (cr6.lt) goto loc_837664F0;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837664f0
	if (cr6.gt) goto loc_837664F0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x837664F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837664F0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,105
	cr6.compare<uint32_t>(ctx.r31.u32, 105, xer);
	// ble cr6,0x83766498
	if (!cr6.gt) goto loc_83766498;
	// li r11,260
	ctx.r11.s64 = 260;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83070638
	ctx.lr = 0x83766514;
	sub_83070638(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766558
	if (cr6.eq) goto loc_83766558;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766558
	if (cr6.eq) goto loc_83766558;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766558
	if (cr6.lt) goto loc_83766558;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766558
	if (cr6.gt) goto loc_83766558;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766558:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83070638
	ctx.lr = 0x83766570;
	sub_83070638(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837665b4
	if (cr6.eq) goto loc_837665B4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837665b4
	if (cr6.eq) goto loc_837665B4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837665b4
	if (cr6.lt) goto loc_837665B4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837665b4
	if (cr6.gt) goto loc_837665B4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x837665B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837665B4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83070638
	ctx.lr = 0x837665D0;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766614
	if (cr6.eq) goto loc_83766614;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766614
	if (cr6.eq) goto loc_83766614;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766614
	if (cr6.lt) goto loc_83766614;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766614
	if (cr6.gt) goto loc_83766614;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766614:
	// lwz r23,244(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x83070638
	ctx.lr = 0x8376662C;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766670
	if (cr6.eq) goto loc_83766670;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766670
	if (cr6.eq) goto loc_83766670;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766670
	if (cr6.lt) goto loc_83766670;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766670
	if (cr6.gt) goto loc_83766670;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766670;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766670:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r24,116
	ctx.r4.s64 = ctx.r24.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376668C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837667e0
	if (cr6.eq) goto loc_837667E0;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// blt cr6,0x837666b8
	if (cr6.lt) goto loc_837666B8;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r10,r11,159
	ctx.r10.u64 = ctx.r11.u64 | 159;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// ble cr6,0x837666bc
	if (!cr6.gt) goto loc_837666BC;
loc_837666B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837666BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837666e4
	if (!cr6.eq) goto loc_837666E4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8311c6c8
	ctx.lr = 0x837666D0;
	sub_8311C6C8(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r10,r11,160
	ctx.r10.u64 = ctx.r11.u64 | 160;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x837666e8
	if (cr6.lt) goto loc_837666E8;
loc_837666E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837666E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83766c38
	if (!cr6.eq) goto loc_83766C38;
	// bl 0x82efe820
	ctx.lr = 0x837666F8;
	sub_82EFE820(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837667e0
	if (cr6.eq) goto loc_837667E0;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83766720
	if (cr6.eq) goto loc_83766720;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83766720
	if (cr6.eq) goto loc_83766720;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x837667e0
	if (!cr6.eq) goto loc_837667E0;
loc_83766720:
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x83766728;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837667e0
	if (cr6.eq) goto loc_837667E0;
	// li r11,84
	ctx.r11.s64 = 84;
	// li r10,85
	ctx.r10.s64 = 85;
	// li r9,86
	ctx.r9.s64 = 86;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,87
	ctx.r8.s64 = 87;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,88
	ctx.r7.s64 = 88;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r6,89
	ctx.r6.s64 = 89;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,90
	ctx.r5.s64 = 90;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
loc_83766774:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82efe958
	ctx.lr = 0x83766784;
	sub_82EFE958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837667d0
	if (cr6.eq) goto loc_837667D0;
loc_83766794:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82efe928
	ctx.lr = 0x837667A4;
	sub_82EFE928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837667c4
	if (cr6.eq) goto loc_837667C4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8311c750
	ctx.lr = 0x837667BC;
	sub_8311C750(ctx, base);
	// cmplw cr6,r3,r23
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, xer);
	// beq cr6,0x837667ec
	if (cr6.eq) goto loc_837667EC;
loc_837667C4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83766794
	if (cr6.lt) goto loc_83766794;
loc_837667D0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r26,7
	cr6.compare<uint32_t>(ctx.r26.u32, 7, xer);
	// blt cr6,0x83766774
	if (cr6.lt) goto loc_83766774;
loc_837667E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837667EC:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r31,r30,52
	ctx.r31.s64 = ctx.r30.s64 + 52;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83766804
	if (cr6.eq) goto loc_83766804;
	// addi r31,r30,144
	ctx.r31.s64 = ctx.r30.s64 + 144;
loc_83766804:
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830706a8
	ctx.lr = 0x83766814;
	sub_830706A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766840
	if (cr6.eq) goto loc_83766840;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766840
	if (cr6.eq) goto loc_83766840;
	// li r5,46
	ctx.r5.s64 = 46;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766840;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766840:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r4,r11,9,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// bl 0x82a78580
	ctx.lr = 0x83766854;
	sub_82A78580(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,18
	ctx.r5.s64 = 18;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x82a78580
	ctx.lr = 0x83766870;
	sub_82A78580(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8311c6c8
	ctx.lr = 0x83766878;
	sub_8311C6C8(ctx, base);
	// clrlwi r11,r3,3
	ctx.r11.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// rlwinm r8,r3,14,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0x1;
	// rlwinm r11,r11,0,14,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// oris r4,r11,32768
	ctx.r4.u64 = ctx.r11.u64 | 2147483648;
	// bne cr6,0x83766894
	if (!cr6.eq) goto loc_83766894;
	// clrlwi r4,r11,1
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_83766894:
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a78580
	ctx.lr = 0x837668A0;
	sub_82A78580(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r4,r11,13,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xF;
	// bl 0x82a78580
	ctx.lr = 0x837668B4;
	sub_82A78580(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_837668B8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83765f58
	ctx.lr = 0x837668CC;
	sub_83765F58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,108
	cr6.compare<uint32_t>(ctx.r31.u32, 108, xer);
	// blt cr6,0x837668b8
	if (cr6.lt) goto loc_837668B8;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,97
	ctx.r5.s64 = 97;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x837668F4;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766938
	if (cr6.eq) goto loc_83766938;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766938
	if (cr6.eq) goto loc_83766938;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766938
	if (cr6.lt) goto loc_83766938;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766938
	if (cr6.gt) goto loc_83766938;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766938;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766938:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,98
	ctx.r5.s64 = 98;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,22,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766954;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766998
	if (cr6.eq) goto loc_83766998;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766998
	if (cr6.eq) goto loc_83766998;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766998
	if (cr6.lt) goto loc_83766998;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766998
	if (cr6.gt) goto loc_83766998;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766998:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r5,99
	ctx.r5.s64 = 99;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x837669B4;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837669f8
	if (cr6.eq) goto loc_837669F8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837669f8
	if (cr6.eq) goto loc_837669F8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837669f8
	if (cr6.lt) goto loc_837669F8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837669f8
	if (cr6.gt) goto loc_837669F8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x837669F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837669F8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,25,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766A14;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766a58
	if (cr6.eq) goto loc_83766A58;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766a58
	if (cr6.eq) goto loc_83766A58;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766a58
	if (cr6.lt) goto loc_83766A58;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766a58
	if (cr6.gt) goto loc_83766A58;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766A58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766A58:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,101
	ctx.r5.s64 = 101;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,9,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766A74;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766ab8
	if (cr6.eq) goto loc_83766AB8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766ab8
	if (cr6.eq) goto loc_83766AB8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766ab8
	if (cr6.lt) goto loc_83766AB8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766ab8
	if (cr6.gt) goto loc_83766AB8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766AB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766AB8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r5,102
	ctx.r5.s64 = 102;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766AD4;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766b18
	if (cr6.eq) goto loc_83766B18;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766b18
	if (cr6.eq) goto loc_83766B18;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766b18
	if (cr6.lt) goto loc_83766B18;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766b18
	if (cr6.gt) goto loc_83766B18;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766B18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766B18:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r5,103
	ctx.r5.s64 = 103;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,19,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766B34;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766b78
	if (cr6.eq) goto loc_83766B78;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766b78
	if (cr6.eq) goto loc_83766B78;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766b78
	if (cr6.lt) goto loc_83766B78;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766b78
	if (cr6.gt) goto loc_83766B78;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766B78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766B78:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766B94;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766bd8
	if (cr6.eq) goto loc_83766BD8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766bd8
	if (cr6.eq) goto loc_83766BD8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766bd8
	if (cr6.lt) goto loc_83766BD8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766bd8
	if (cr6.gt) goto loc_83766BD8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766BD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766BD8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,105
	ctx.r5.s64 = 105;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83070638
	ctx.lr = 0x83766BF4;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83766c38
	if (cr6.eq) goto loc_83766C38;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83766c38
	if (cr6.eq) goto loc_83766C38;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83766c38
	if (cr6.lt) goto loc_83766C38;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83766c38
	if (cr6.gt) goto loc_83766C38;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x83766C38;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83766C38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83766C44"))) PPC_WEAK_FUNC(sub_83766C44);
PPC_FUNC_IMPL(__imp__sub_83766C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83766C48"))) PPC_WEAK_FUNC(sub_83766C48);
PPC_FUNC_IMPL(__imp__sub_83766C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83766C50;
	__savegprlr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,91
	ctx.r11.s64 = 91;
	// li r10,92
	ctx.r10.s64 = 92;
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r7,95
	ctx.r7.s64 = 95;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,96
	ctx.r6.s64 = 96;
	// li r5,97
	ctx.r5.s64 = 97;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82efe820
	ctx.lr = 0x83766CD4;
	sub_82EFE820(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766d8c
	if (cr6.eq) goto loc_83766D8C;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83766cf4
	if (cr6.eq) goto loc_83766CF4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83766d8c
	if (!cr6.eq) goto loc_83766D8C;
loc_83766CF4:
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x83766CFC;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766d8c
	if (cr6.eq) goto loc_83766D8C;
	// addic. r20,r31,4
	xer.ca = ctx.r31.u32 > 4294967291;
	ctx.r20.s64 = ctx.r31.s64 + 4;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq 0x83766d8c
	if (cr0.eq) goto loc_83766D8C;
	// clrlwi r21,r29,14
	ctx.r21.u64 = ctx.r29.u32 & 0x3FFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r21,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_83766D20:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82efe958
	ctx.lr = 0x83766D30;
	sub_82EFE958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766d7c
	if (cr6.eq) goto loc_83766D7C;
loc_83766D40:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82efe928
	ctx.lr = 0x83766D50;
	sub_82EFE928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766d68
	if (cr6.eq) goto loc_83766D68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// beq cr6,0x83766d74
	if (cr6.eq) goto loc_83766D74;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83766D68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x83766d40
	if (cr6.lt) goto loc_83766D40;
loc_83766D74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83766d98
	if (!cr6.eq) goto loc_83766D98;
loc_83766D7C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(ctx.r27.u32, 7, xer);
	// blt cr6,0x83766d20
	if (cr6.lt) goto loc_83766D20;
loc_83766D8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83766D98:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,255
	ctx.r22.s64 = 255;
loc_83766DA0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac0af0
	ctx.lr = 0x83766DA8;
	sub_82AC0AF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac0800
	ctx.lr = 0x83766DB0;
	sub_82AC0800(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83766DC0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83766dc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83766DC0;
	// li r9,32
	ctx.r9.s64 = 32;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83766DE4:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83766de4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83766DE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83766DF4:
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x83766e04
	if (!cr6.lt) goto loc_83766E04;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
loc_83766E04:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83766df4
	if (cr6.lt) goto loc_83766DF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,118
	ctx.r9.s64 = ctx.r1.s64 + 118;
loc_83766E20:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r22,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r22.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x83766e20
	if (cr6.lt) goto loc_83766E20;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
loc_83766E40:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82efe958
	ctx.lr = 0x83766E54;
	sub_82EFE958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766f20
	if (cr6.eq) goto loc_83766F20;
loc_83766E64:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82efe928
	ctx.lr = 0x83766E74;
	sub_82EFE928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83766f14
	if (cr6.eq) goto loc_83766F14;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8311c708
	ctx.lr = 0x83766E8C;
	sub_8311C708(ctx, base);
	// cmplw cr6,r3,r21
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, xer);
	// bne cr6,0x83766f14
	if (!cr6.eq) goto loc_83766F14;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83766f10
	if (!cr6.eq) goto loc_83766F10;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r10,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766ebc
	if (cr6.eq) goto loc_83766EBC;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x83766eb8
	if (cr6.lt) goto loc_83766EB8;
	// li r30,10
	ctx.r30.s64 = 10;
loc_83766EB8:
	// stb r30,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r30.u8);
loc_83766EBC:
	// rlwinm r11,r10,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766ecc
	if (cr6.eq) goto loc_83766ECC;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83766ECC:
	// rlwinm r11,r10,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766ee0
	if (cr6.eq) goto loc_83766EE0;
	// stb r30,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r30.u8);
	// stb r30,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r30.u8);
loc_83766EE0:
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766ef0
	if (cr6.eq) goto loc_83766EF0;
	// stb r30,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r30.u8);
loc_83766EF0:
	// rlwinm r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766f00
	if (cr6.eq) goto loc_83766F00;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
loc_83766F00:
	// rlwinm r11,r10,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83766f10
	if (cr6.eq) goto loc_83766F10;
	// stb r30,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r30.u8);
loc_83766F10:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83766F14:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x83766e64
	if (cr6.lt) goto loc_83766E64;
loc_83766F20:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r26,7
	cr6.compare<uint32_t>(ctx.r26.u32, 7, xer);
	// blt cr6,0x83766e40
	if (cr6.lt) goto loc_83766E40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83155950
	ctx.lr = 0x83766F40;
	sub_83155950(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83766f5c
	if (!cr6.eq) goto loc_83766F5C;
	// addi r3,r20,480
	ctx.r3.s64 = ctx.r20.s64 + 480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83766F58;
	sub_831CE980(ctx, base);
	// b 0x83766f64
	goto loc_83766F64;
loc_83766F5C:
	// cmplwi cr6,r23,3
	cr6.compare<uint32_t>(ctx.r23.u32, 3, xer);
	// bge cr6,0x83766f7c
	if (!cr6.lt) goto loc_83766F7C;
loc_83766F64:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r20
	ctx.r3.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83766F7C;
	sub_82ABFDA0(ctx, base);
loc_83766F7C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,3
	cr6.compare<uint32_t>(ctx.r23.u32, 3, xer);
	// blt cr6,0x83766da0
	if (cr6.lt) goto loc_83766DA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83766F94"))) PPC_WEAK_FUNC(sub_83766F94);
PPC_FUNC_IMPL(__imp__sub_83766F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83766F98"))) PPC_WEAK_FUNC(sub_83766F98);
PPC_FUNC_IMPL(__imp__sub_83766F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83766FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,210(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 210);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83766fc8
	if (!cr6.eq) goto loc_83766FC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83766FC8:
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x831cdcf0
	ctx.lr = 0x83766FD8;
	sub_831CDCF0(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83766FE8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83766fe8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83766FE8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83763b20
	ctx.lr = 0x83767008;
	sub_83763B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767094
	if (cr6.eq) goto loc_83767094;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a7dc90
	ctx.lr = 0x83767024;
	sub_82A7DC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767094
	if (cr6.eq) goto loc_83767094;
	// addi r30,r1,308
	ctx.r30.s64 = ctx.r1.s64 + 308;
loc_83767034:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// blt cr6,0x83767044
	if (cr6.lt) goto loc_83767044;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
loc_83767044:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ed80
	ctx.lr = 0x83767050;
	sub_8399ED80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83767034
	if (cr6.lt) goto loc_83767034;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,788
	ctx.r4.s64 = ctx.r1.s64 + 788;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83767070;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8399ee10
	ctx.lr = 0x8376707C;
	sub_8399EE10(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a68958
	ctx.lr = 0x83767084;
	sub_82A68958(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a504f0
	ctx.lr = 0x83767090;
	sub_82A504F0(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_83767094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837670A0"))) PPC_WEAK_FUNC(sub_837670A0);
PPC_FUNC_IMPL(__imp__sub_837670A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837670A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,210(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 210);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837670d0
	if (!cr6.eq) goto loc_837670D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837670D0:
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831cdcf0
	ctx.lr = 0x837670E0;
	sub_831CDCF0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83763b20
	ctx.lr = 0x837670F0;
	sub_83763B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767154
	if (cr6.eq) goto loc_83767154;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,132
	ctx.r30.s64 = ctx.r1.s64 + 132;
loc_83767104:
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8399edb0
	ctx.lr = 0x83767114;
	sub_8399EDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x83767128
	if (!cr6.lt) goto loc_83767128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83767128;
	sub_82ABFDA0(ctx, base);
loc_83767128:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83767104
	if (cr6.lt) goto loc_83767104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x83767144;
	sub_8399EE20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83767154;
	sub_831CE980(ctx, base);
loc_83767154:
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767190
	if (cr6.eq) goto loc_83767190;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x837639d8
	ctx.lr = 0x8376716C;
	sub_837639D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767190
	if (cr6.eq) goto loc_83767190;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r28)
	PPC_STORE_U8(ctx.r28.u32 + 80, ctx.r11.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83774f48
	ctx.lr = 0x83767190;
	sub_83774F48(ctx, base);
loc_83767190:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376719C"))) PPC_WEAK_FUNC(sub_8376719C);
PPC_FUNC_IMPL(__imp__sub_8376719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837671A0"))) PPC_WEAK_FUNC(sub_837671A0);
PPC_FUNC_IMPL(__imp__sub_837671A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837671A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,91
	ctx.r11.s64 = 91;
	// li r10,92
	ctx.r10.s64 = 92;
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,95
	ctx.r7.s64 = 95;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r6,96
	ctx.r6.s64 = 96;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r5,97
	ctx.r5.s64 = 97;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// bl 0x82efe820
	ctx.lr = 0x837671EC;
	sub_82EFE820(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767358
	if (cr6.eq) goto loc_83767358;
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83767358
	if (!cr6.eq) goto loc_83767358;
	// addi r3,r27,84
	ctx.r3.s64 = ctx.r27.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x8376720C;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767358
	if (cr6.eq) goto loc_83767358;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83767228:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83767228
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83767228;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r22,r1,80
	ctx.r22.s64 = ctx.r1.s64 + 80;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_83767248:
	// lwz r28,0(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82efe958
	ctx.lr = 0x8376725C;
	sub_82EFE958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767348
	if (cr6.eq) goto loc_83767348;
loc_8376726C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82efe928
	ctx.lr = 0x8376727C;
	sub_82EFE928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376733c
	if (cr6.eq) goto loc_8376733C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8311c708
	ctx.lr = 0x83767290;
	sub_8311C708(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// beq cr6,0x8376733c
	if (cr6.eq) goto loc_8376733C;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r31,r3,14
	ctx.r31.u64 = ctx.r3.u32 & 0x3FFFF;
	// cmplw cr6,r3,r24
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, xer);
	// ble cr6,0x837672ac
	if (!cr6.gt) goto loc_837672AC;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_837672AC:
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837672f4
	if (cr6.eq) goto loc_837672F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8306e7c8
	ctx.lr = 0x837672C0;
	sub_8306E7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837672d4
	if (!cr6.eq) goto loc_837672D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x837672e4
	goto loc_837672E4;
loc_837672D4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,164
	ctx.r5.s64 = 164;
	// bl 0x831ce980
	ctx.lr = 0x837672E0;
	sub_831CE980(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_837672E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83774208
	ctx.lr = 0x837672F4;
	sub_83774208(ctx, base);
loc_837672F4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376733c
	if (!cr6.eq) goto loc_8376733C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376731C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376733c
	if (cr6.eq) goto loc_8376733C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a7df70
	ctx.lr = 0x8376733C;
	sub_82A7DF70(ctx, base);
loc_8376733C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x8376726c
	if (cr6.lt) goto loc_8376726C;
loc_83767348:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplwi cr6,r25,7
	cr6.compare<uint32_t>(ctx.r25.u32, 7, xer);
	// blt cr6,0x83767248
	if (cr6.lt) goto loc_83767248;
loc_83767358:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83767360"))) PPC_WEAK_FUNC(sub_83767360);
PPC_FUNC_IMPL(__imp__sub_83767360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83767368;
	__savegprlr_27(ctx, base);
	// stwu r1,-1920(r1)
	ea = -1920 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r1,452
	ctx.r30.s64 = ctx.r1.s64 + 452;
	// li r31,2
	ctx.r31.s64 = 2;
loc_8376737C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x83767384;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x8376737c
	if (!cr0.lt) goto loc_8376737C;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0ad8
	ctx.lr = 0x83767398;
	sub_839A0AD8(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82ac0af0
	ctx.lr = 0x837673A0;
	sub_82AC0AF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83149418
	ctx.lr = 0x837673A8;
	sub_83149418(ctx, base);
	// bl 0x8399f8b8
	ctx.lr = 0x837673AC;
	sub_8399F8B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837673d0
	if (!cr6.eq) goto loc_837673D0;
	// bl 0x839a1610
	ctx.lr = 0x837673B8;
	sub_839A1610(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x839a1aa8
	ctx.lr = 0x837673CC;
	sub_839A1AA8(ctx, base);
	// b 0x837673e8
	goto loc_837673E8;
loc_837673D0:
	// bl 0x8399f8b8
	ctx.lr = 0x837673D4;
	sub_8399F8B8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x837673e8
	if (cr6.eq) goto loc_837673E8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_837673E8:
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// stb r29,210(r27)
	PPC_STORE_U8(ctx.r27.u32 + 210, ctx.r29.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83766f98
	ctx.lr = 0x83767400;
	sub_83766F98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837675ac
	if (cr6.eq) goto loc_837675AC;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,312
	ctx.r30.s64 = ctx.r1.s64 + 312;
loc_83767414:
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x83767420;
	sub_8399EE20(ctx, base);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x83767430
	if (!cr6.lt) goto loc_83767430;
	// lbzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// b 0x83767434
	goto loc_83767434;
loc_83767430:
	// li r11,255
	ctx.r11.s64 = 255;
loc_83767434:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x83767414
	if (cr6.lt) goto loc_83767414;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x8399edb0
	ctx.lr = 0x83767454;
	sub_8399EDB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82abfda0
	ctx.lr = 0x83767460;
	sub_82ABFDA0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x8376746C;
	sub_8399EE20(ctx, base);
	// lbz r11,41(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8376747C:
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8399ee20
	ctx.lr = 0x83767488;
	sub_8399EE20(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r31,6
	cr6.compare<uint32_t>(ctx.r31.u32, 6, xer);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x8376747c
	if (cr6.lt) goto loc_8376747C;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82d8c428
	ctx.lr = 0x837674AC;
	sub_82D8C428(ctx, base);
	// stb r29,1152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1152, ctx.r29.u8);
	// stw r29,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r29.u32);
	// bl 0x831156e8
	ctx.lr = 0x837674B8;
	sub_831156E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x837674C4;
	sub_8311C148(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8314aa40
	ctx.lr = 0x837674DC;
	sub_8314AA40(ctx, base);
	// li r30,255
	ctx.r30.s64 = 255;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r1,312
	ctx.r29.s64 = ctx.r1.s64 + 312;
loc_837674E8:
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// and r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 & ctx.r5.u64;
	// bl 0x8399e9a0
	ctx.lr = 0x83767500;
	sub_8399E9A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x837674e8
	if (cr6.lt) goto loc_837674E8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x837675ac
	if (cr6.eq) goto loc_837675AC;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8399ea60
	ctx.lr = 0x83767524;
	sub_8399EA60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0818
	ctx.lr = 0x83767538;
	sub_839A0818(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0818
	ctx.lr = 0x8376754C;
	sub_839A0818(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0818
	ctx.lr = 0x83767560;
	sub_839A0818(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0818
	ctx.lr = 0x83767574;
	sub_839A0818(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0818
	ctx.lr = 0x83767588;
	sub_839A0818(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x839a0818
	ctx.lr = 0x8376759C;
	sub_839A0818(ctx, base);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837670a0
	ctx.lr = 0x837675AC;
	sub_837670A0(ctx, base);
loc_837675AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,210(r27)
	PPC_STORE_U8(ctx.r27.u32 + 210, ctx.r11.u8);
	// addi r1,r1,1920
	ctx.r1.s64 = ctx.r1.s64 + 1920;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837675C0"))) PPC_WEAK_FUNC(sub_837675C0);
PPC_FUNC_IMPL(__imp__sub_837675C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837675C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767790
	if (cr6.eq) goto loc_83767790;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r28,r3,120
	ctx.r28.s64 = ctx.r3.s64 + 120;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83767608
	if (cr6.eq) goto loc_83767608;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x8376760c
	if (!cr6.eq) goto loc_8376760C;
loc_83767608:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8376760C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83767790
	if (cr6.eq) goto loc_83767790;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r30,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r30.u8);
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r27,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r27.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stb r30,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r30.u8);
	// stb r30,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r30.u8);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// stb r10,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r10.u8);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// stb r9,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r9.u8);
	// stb r30,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r30.u8);
	// stb r8,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r8.u8);
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// stb r7,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r7.u8);
	// stb r30,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r30.u8);
	// stb r6,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r6.u8);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// stb r5,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r5.u8);
	// stb r30,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r30.u8);
	// stb r4,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r4.u8);
	// bge cr6,0x83767790
	if (!cr6.lt) goto loc_83767790;
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x83767790
	if (!cr6.lt) goto loc_83767790;
	// addi r11,r11,82
	ctx.r11.s64 = ctx.r11.s64 + 82;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376771c
	if (!cr6.eq) goto loc_8376771C;
	// li r11,43
	ctx.r11.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837676CC;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837676ec
	if (cr6.eq) goto loc_837676EC;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837676E4;
	sub_831CDCF0(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x837676f0
	goto loc_837676F0;
loc_837676EC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_837676F0:
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// addi r11,r11,82
	ctx.r11.s64 = ctx.r11.s64 + 82;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// addi r8,r11,82
	ctx.r8.s64 = ctx.r11.s64 + 82;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83767790
	if (cr6.eq) goto loc_83767790;
loc_8376771C:
	// lbz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x83781130
	ctx.lr = 0x83767744;
	sub_83781130(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8376776c
	if (cr6.eq) goto loc_8376776C;
	// lbz r11,207(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 207);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r10.u8);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x8376776c
	if (cr6.lt) goto loc_8376776C;
	// stb r30,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r30.u8);
loc_8376776C:
	// stb r27,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r27.u8);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r10.u8);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x83767790
	if (!cr6.eq) goto loc_83767790;
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stb r30,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r30.u8);
loc_83767790:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83767798"))) PPC_WEAK_FUNC(sub_83767798);
PPC_FUNC_IMPL(__imp__sub_83767798) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83767808
	if (!cr6.eq) goto loc_83767808;
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837677D4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767800
	if (cr6.eq) goto loc_83767800;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837677EC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837677ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837677EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x83767804
	goto loc_83767804;
loc_83767800:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83767804:
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_83767808:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
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

__attribute__((alias("__imp__sub_83767820"))) PPC_WEAK_FUNC(sub_83767820);
PPC_FUNC_IMPL(__imp__sub_83767820) {
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
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83767890
	if (!cr6.eq) goto loc_83767890;
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8376785C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767888
	if (cr6.eq) goto loc_83767888;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83767874:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83767874
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83767874;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x8376788c
	goto loc_8376788C;
loc_83767888:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376788C:
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
loc_83767890:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
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

__attribute__((alias("__imp__sub_837678A8"))) PPC_WEAK_FUNC(sub_837678A8);
PPC_FUNC_IMPL(__imp__sub_837678A8) {
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
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83767918
	if (!cr6.eq) goto loc_83767918;
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837678E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767910
	if (cr6.eq) goto loc_83767910;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837678FC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837678fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837678FC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x83767914
	goto loc_83767914;
loc_83767910:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83767914:
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
loc_83767918:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
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

__attribute__((alias("__imp__sub_83767930"))) PPC_WEAK_FUNC(sub_83767930);
PPC_FUNC_IMPL(__imp__sub_83767930) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837679a0
	if (!cr6.eq) goto loc_837679A0;
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8376796C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767998
	if (cr6.eq) goto loc_83767998;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83767984:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83767984
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83767984;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x8376799c
	goto loc_8376799C;
loc_83767998:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376799C:
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
loc_837679A0:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
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

__attribute__((alias("__imp__sub_837679B8"))) PPC_WEAK_FUNC(sub_837679B8);
PPC_FUNC_IMPL(__imp__sub_837679B8) {
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
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837679ec
	if (!cr6.eq) goto loc_837679EC;
	// bl 0x83767930
	ctx.lr = 0x837679E4;
	sub_83767930(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83767a00
	if (cr6.eq) goto loc_83767A00;
loc_837679EC:
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x831ce980
	ctx.lr = 0x83767A00;
	sub_831CE980(ctx, base);
loc_83767A00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767A18"))) PPC_WEAK_FUNC(sub_83767A18);
PPC_FUNC_IMPL(__imp__sub_83767A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83767A20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r30,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// srawi r10,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 1;
	// addze. r29,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble 0x83767b18
	if (!cr0.gt) goto loc_83767B18;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83767A50:
	// ldu r10,-8(r27)
	ea = -8 + ctx.r27.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r27.u32 = ea;
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bge cr6,0x83767ad0
	if (!cr6.lt) goto loc_83767AD0;
loc_83767A70:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// bge cr6,0x83767a9c
	if (!cr6.lt) goto loc_83767A9C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83767A9C:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// stwx r5,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// blt cr6,0x83767a70
	if (cr6.lt) goto loc_83767A70;
loc_83767AD0:
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bne cr6,0x83767afc
	if (!cr6.eq) goto loc_83767AFC;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_83767AFC:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837646f8
	ctx.lr = 0x83767B10;
	sub_837646F8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x83767a50
	if (cr6.gt) goto loc_83767A50;
loc_83767B18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83767B20"))) PPC_WEAK_FUNC(sub_83767B20);
PPC_FUNC_IMPL(__imp__sub_83767B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83767B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83767B40:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83767b40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83767B40;
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// li r30,20999
	ctx.r30.s64 = 20999;
loc_83767B50:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x831cdcf0
	ctx.lr = 0x83767B60;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83767B70;
	sub_831CDCF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,188
	ctx.r31.s64 = ctx.r31.s64 + 188;
	// bge 0x83767b50
	if (!cr0.lt) goto loc_83767B50;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addis r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 3932160;
	// ori r5,r5,49856
	ctx.r5.u64 = ctx.r5.u64 | 49856;
	// addi r3,r3,15960
	ctx.r3.s64 = ctx.r3.s64 + 15960;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767B94;
	sub_831CDCF0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addis r3,r29,65
	ctx.r3.s64 = ctx.r29.s64 + 4259840;
	// ori r5,r5,9264
	ctx.r5.u64 = ctx.r5.u64 | 9264;
	// addi r3,r3,280
	ctx.r3.s64 = ctx.r3.s64 + 280;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767BAC;
	sub_831CDCF0(ctx, base);
	// addis r3,r29,66
	ctx.r3.s64 = ctx.r29.s64 + 4325376;
	// li r5,6200
	ctx.r5.s64 = 6200;
	// addi r3,r3,9544
	ctx.r3.s64 = ctx.r3.s64 + 9544;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767BC0;
	sub_831CDCF0(ctx, base);
	// addis r3,r29,66
	ctx.r3.s64 = ctx.r29.s64 + 4325376;
	// li r5,5120
	ctx.r5.s64 = 5120;
	// addi r3,r3,15744
	ctx.r3.s64 = ctx.r3.s64 + 15744;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767BD4;
	sub_831CDCF0(ctx, base);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addis r3,r29,66
	ctx.r3.s64 = ctx.r29.s64 + 4325376;
	// ori r5,r5,2320
	ctx.r5.u64 = ctx.r5.u64 | 2320;
	// addi r3,r3,20864
	ctx.r3.s64 = ctx.r3.s64 + 20864;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767BEC;
	sub_831CDCF0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addis r3,r29,71
	ctx.r3.s64 = ctx.r29.s64 + 4653056;
	// ori r5,r5,41064
	ctx.r5.u64 = ctx.r5.u64 | 41064;
	// addi r3,r3,23184
	ctx.r3.s64 = ctx.r3.s64 + 23184;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767C04;
	sub_831CDCF0(ctx, base);
	// addis r3,r29,73
	ctx.r3.s64 = ctx.r29.s64 + 4784128;
	// li r5,2888
	ctx.r5.s64 = 2888;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-1288
	ctx.r3.s64 = ctx.r3.s64 + -1288;
	// bl 0x831cdcf0
	ctx.lr = 0x83767C18;
	sub_831CDCF0(ctx, base);
	// lis r5,6
	ctx.r5.s64 = 393216;
	// addis r3,r29,73
	ctx.r3.s64 = ctx.r29.s64 + 4784128;
	// ori r5,r5,14984
	ctx.r5.u64 = ctx.r5.u64 | 14984;
	// addi r3,r3,1600
	ctx.r3.s64 = ctx.r3.s64 + 1600;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83767C30;
	sub_831CDCF0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addis r3,r29,79
	ctx.r3.s64 = ctx.r29.s64 + 5177344;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,6714
	ctx.r5.u64 = ctx.r5.u64 | 6714;
	// addi r3,r3,16584
	ctx.r3.s64 = ctx.r3.s64 + 16584;
	// bl 0x831cdcf0
	ctx.lr = 0x83767C48;
	sub_831CDCF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837659c8
	ctx.lr = 0x83767C50;
	sub_837659C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83767C5C"))) PPC_WEAK_FUNC(sub_83767C5C);
PPC_FUNC_IMPL(__imp__sub_83767C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767C60"))) PPC_WEAK_FUNC(sub_83767C60);
PPC_FUNC_IMPL(__imp__sub_83767C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83767C74:
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x83767cd0
	if (!cr6.lt) goto loc_83767CD0;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x83767cc8
	if (cr6.eq) goto loc_83767CC8;
loc_83767CAC:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// bne cr6,0x83767cac
	if (!cr6.eq) goto loc_83767CAC;
loc_83767CC8:
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// b 0x83767d08
	goto loc_83767D08;
loc_83767CD0:
	// lwzu r6,-8(r11)
	ea = -8 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x83767d04
	if (!cr6.lt) goto loc_83767D04;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x83767cd0
	goto loc_83767CD0;
loc_83767D04:
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
loc_83767D08:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x83767c74
	if (!cr6.eq) goto loc_83767C74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D18"))) PPC_WEAK_FUNC(sub_83767D18);
PPC_FUNC_IMPL(__imp__sub_83767D18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D20"))) PPC_WEAK_FUNC(sub_83767D20);
PPC_FUNC_IMPL(__imp__sub_83767D20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D28"))) PPC_WEAK_FUNC(sub_83767D28);
PPC_FUNC_IMPL(__imp__sub_83767D28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D30"))) PPC_WEAK_FUNC(sub_83767D30);
PPC_FUNC_IMPL(__imp__sub_83767D30) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 3932160;
	// addi r3,r3,15964
	ctx.r3.s64 = ctx.r3.s64 + 15964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D3C"))) PPC_WEAK_FUNC(sub_83767D3C);
PPC_FUNC_IMPL(__imp__sub_83767D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767D40"))) PPC_WEAK_FUNC(sub_83767D40);
PPC_FUNC_IMPL(__imp__sub_83767D40) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,65
	ctx.r3.s64 = ctx.r3.s64 + 4259840;
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D4C"))) PPC_WEAK_FUNC(sub_83767D4C);
PPC_FUNC_IMPL(__imp__sub_83767D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767D50"))) PPC_WEAK_FUNC(sub_83767D50);
PPC_FUNC_IMPL(__imp__sub_83767D50) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,66
	ctx.r3.s64 = ctx.r3.s64 + 4325376;
	// addi r3,r3,9548
	ctx.r3.s64 = ctx.r3.s64 + 9548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D5C"))) PPC_WEAK_FUNC(sub_83767D5C);
PPC_FUNC_IMPL(__imp__sub_83767D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767D60"))) PPC_WEAK_FUNC(sub_83767D60);
PPC_FUNC_IMPL(__imp__sub_83767D60) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,66
	ctx.r3.s64 = ctx.r3.s64 + 4325376;
	// addi r3,r3,15748
	ctx.r3.s64 = ctx.r3.s64 + 15748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D6C"))) PPC_WEAK_FUNC(sub_83767D6C);
PPC_FUNC_IMPL(__imp__sub_83767D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767D70"))) PPC_WEAK_FUNC(sub_83767D70);
PPC_FUNC_IMPL(__imp__sub_83767D70) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,66
	ctx.r3.s64 = ctx.r3.s64 + 4325376;
	// addi r3,r3,20868
	ctx.r3.s64 = ctx.r3.s64 + 20868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D7C"))) PPC_WEAK_FUNC(sub_83767D7C);
PPC_FUNC_IMPL(__imp__sub_83767D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767D80"))) PPC_WEAK_FUNC(sub_83767D80);
PPC_FUNC_IMPL(__imp__sub_83767D80) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,71
	ctx.r3.s64 = ctx.r3.s64 + 4653056;
	// addi r3,r3,23188
	ctx.r3.s64 = ctx.r3.s64 + 23188;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D8C"))) PPC_WEAK_FUNC(sub_83767D8C);
PPC_FUNC_IMPL(__imp__sub_83767D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767D90"))) PPC_WEAK_FUNC(sub_83767D90);
PPC_FUNC_IMPL(__imp__sub_83767D90) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,73
	ctx.r3.s64 = ctx.r3.s64 + 4784128;
	// addi r3,r3,-1284
	ctx.r3.s64 = ctx.r3.s64 + -1284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767D9C"))) PPC_WEAK_FUNC(sub_83767D9C);
PPC_FUNC_IMPL(__imp__sub_83767D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767DA0"))) PPC_WEAK_FUNC(sub_83767DA0);
PPC_FUNC_IMPL(__imp__sub_83767DA0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,73
	ctx.r3.s64 = ctx.r3.s64 + 4784128;
	// addi r3,r3,1604
	ctx.r3.s64 = ctx.r3.s64 + 1604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DAC"))) PPC_WEAK_FUNC(sub_83767DAC);
PPC_FUNC_IMPL(__imp__sub_83767DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767DB0"))) PPC_WEAK_FUNC(sub_83767DB0);
PPC_FUNC_IMPL(__imp__sub_83767DB0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,79
	ctx.r3.s64 = ctx.r3.s64 + 5177344;
	// addi r3,r3,16588
	ctx.r3.s64 = ctx.r3.s64 + 16588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DBC"))) PPC_WEAK_FUNC(sub_83767DBC);
PPC_FUNC_IMPL(__imp__sub_83767DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767DC0"))) PPC_WEAK_FUNC(sub_83767DC0);
PPC_FUNC_IMPL(__imp__sub_83767DC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,21000
	ctx.r3.s64 = 21000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DC8"))) PPC_WEAK_FUNC(sub_83767DC8);
PPC_FUNC_IMPL(__imp__sub_83767DC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,650
	ctx.r3.s64 = 650;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DD0"))) PPC_WEAK_FUNC(sub_83767DD0);
PPC_FUNC_IMPL(__imp__sub_83767DD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,850
	ctx.r3.s64 = 850;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DD8"))) PPC_WEAK_FUNC(sub_83767DD8);
PPC_FUNC_IMPL(__imp__sub_83767DD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DE0"))) PPC_WEAK_FUNC(sub_83767DE0);
PPC_FUNC_IMPL(__imp__sub_83767DE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DE8"))) PPC_WEAK_FUNC(sub_83767DE8);
PPC_FUNC_IMPL(__imp__sub_83767DE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2500
	ctx.r3.s64 = 2500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83767DF0"))) PPC_WEAK_FUNC(sub_83767DF0);
PPC_FUNC_IMPL(__imp__sub_83767DF0) {
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
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-13216
	ctx.r9.s64 = ctx.r11.s64 + -13216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83767e30
	if (cr6.eq) goto loc_83767E30;
	// bl 0x82595188
	ctx.lr = 0x83767E20;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83767E30;
	sub_825952B8(ctx, base);
loc_83767E30:
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

__attribute__((alias("__imp__sub_83767E48"))) PPC_WEAK_FUNC(sub_83767E48);
PPC_FUNC_IMPL(__imp__sub_83767E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83767E50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r3,448
	ctx.r3.s64 = ctx.r3.s64 + 448;
	// addi r10,r11,-13008
	ctx.r10.s64 = ctx.r11.s64 + -13008;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x831478f8
	ctx.lr = 0x83767E6C;
	sub_831478F8(ctx, base);
	// lwz r9,432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r30,r31,412
	ctx.r30.s64 = ctx.r31.s64 + 412;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x83767e90
	if (cr6.lt) goto loc_83767E90;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83767E90;
	sub_825952B8(ctx, base);
loc_83767E90:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r29,r31,292
	ctx.r29.s64 = ctx.r31.s64 + 292;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83767ec4
	if (cr6.lt) goto loc_83767EC4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83767EC4;
	sub_825952B8(ctx, base);
loc_83767EC4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// bl 0x83102db0
	ctx.lr = 0x83767EDC;
	sub_83102DB0(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8376ed10
	ctx.lr = 0x83767EE4;
	sub_8376ED10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773010
	ctx.lr = 0x83767EEC;
	sub_83773010(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83767EF4"))) PPC_WEAK_FUNC(sub_83767EF4);
PPC_FUNC_IMPL(__imp__sub_83767EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83767EF8"))) PPC_WEAK_FUNC(sub_83767EF8);
PPC_FUNC_IMPL(__imp__sub_83767EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83767F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r4.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x831cdcf0
	ctx.lr = 0x83767F20;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x831cdcf0
	ctx.lr = 0x83767F30;
	sub_831CDCF0(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83767F44:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83767f44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83767F44;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775138
	ctx.lr = 0x83767F60;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768034
	if (cr6.eq) goto loc_83768034;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a72110
	ctx.lr = 0x83767F80;
	sub_82A72110(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x831a0018
	ctx.lr = 0x83767F90;
	sub_831A0018(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,30436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30436);
	// xor r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83767fc0
	if (!cr6.eq) goto loc_83767FC0;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83767fc4
	if (cr6.eq) goto loc_83767FC4;
loc_83767FC0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83767FC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83768034
	if (!cr6.eq) goto loc_83768034;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a7dc90
	ctx.lr = 0x83767FDC;
	sub_82A7DC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768034
	if (cr6.eq) goto loc_83768034;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a68958
	ctx.lr = 0x83767FF0;
	sub_82A68958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768034
	if (cr6.eq) goto loc_83768034;
	// lwz r29,540(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
loc_83768004:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a687b8
	ctx.lr = 0x8376801C;
	sub_82A687B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x83768040
	if (cr6.eq) goto loc_83768040;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83768004
	if (cr6.lt) goto loc_83768004;
loc_83768034:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83768040:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376804C"))) PPC_WEAK_FUNC(sub_8376804C);
PPC_FUNC_IMPL(__imp__sub_8376804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83768050"))) PPC_WEAK_FUNC(sub_83768050);
PPC_FUNC_IMPL(__imp__sub_83768050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83768058;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r27,-21400(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21400);
	// beq cr6,0x83768190
	if (cr6.eq) goto loc_83768190;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x83768190
	if (!cr6.eq) goto loc_83768190;
	// lwz r30,72(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x837680ac
	if (!cr6.eq) goto loc_837680AC;
	// li r11,2
	ctx.r11.s64 = 2;
	// std r26,272(r27)
	PPC_STORE_U64(ctx.r27.u32 + 272, ctx.r26.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,216(r27)
	PPC_STORE_U32(ctx.r27.u32 + 216, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,248(r27)
	PPC_STORE_U8(ctx.r27.u32 + 248, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837680AC:
	// li r24,43
	ctx.r24.s64 = 43;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,23304
	ctx.r4.u64 = ctx.r4.u64 | 23304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837680C8;
	sub_82595718(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768178
	if (cr6.eq) goto loc_83768178;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-13096
	ctx.r10.s64 = ctx.r11.s64 + -13096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x83767b20
	ctx.lr = 0x837680EC;
	sub_83767B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837659c8
	ctx.lr = 0x837680F4;
	sub_837659C8(ctx, base);
	// lis r9,80
	ctx.r9.s64 = 5242880;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// ori r30,r9,23300
	ctx.r30.u64 = ctx.r9.u64 | 23300;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0080
	ctx.lr = 0x83768114;
	sub_831D0080(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83778438
	ctx.lr = 0x83768120;
	sub_83778438(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83768148
	if (cr6.eq) goto loc_83768148;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d0080
	ctx.lr = 0x83768140;
	sub_831D0080(ctx, base);
	// li r26,4
	ctx.r26.s64 = 4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83768148:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83768158;
	sub_82595150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83768170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83768178;
	sub_82595170(ctx, base);
loc_83768178:
	// li r11,1
	ctx.r11.s64 = 1;
	// std r26,272(r27)
	PPC_STORE_U64(ctx.r27.u32 + 272, ctx.r26.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,248(r27)
	PPC_STORE_U8(ctx.r27.u32 + 248, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83768190:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376819C"))) PPC_WEAK_FUNC(sub_8376819C);
PPC_FUNC_IMPL(__imp__sub_8376819C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837681A0"))) PPC_WEAK_FUNC(sub_837681A0);
PPC_FUNC_IMPL(__imp__sub_837681A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837681A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r29,-21400(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21400);
	// beq cr6,0x837682a8
	if (cr6.eq) goto loc_837682A8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x837682a8
	if (!cr6.eq) goto loc_837682A8;
	// lwz r28,72(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83768290
	if (cr6.eq) goto loc_83768290;
	// li r27,43
	ctx.r27.s64 = 43;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,23304
	ctx.r4.u64 = ctx.r4.u64 | 23304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837681F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768290
	if (cr6.eq) goto loc_83768290;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-13096
	ctx.r10.s64 = ctx.r11.s64 + -13096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83767b20
	ctx.lr = 0x8376821C;
	sub_83767B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837659c8
	ctx.lr = 0x83768224;
	sub_837659C8(ctx, base);
	// lis r9,80
	ctx.r9.s64 = 5242880;
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// ori r4,r9,23300
	ctx.r4.u64 = ctx.r9.u64 | 23300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x831d0080
	ctx.lr = 0x8376823C;
	sub_831D0080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83778e30
	ctx.lr = 0x8376824C;
	sub_83778E30(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83768260
	if (cr6.eq) goto loc_83768260;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r25,0
	ctx.r25.s64 = 0;
loc_83768260:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83768270;
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
	ctx.lr = 0x83768288;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83768290;
	sub_82595170(ctx, base);
loc_83768290:
	// li r11,1
	ctx.r11.s64 = 1;
	// std r26,272(r29)
	PPC_STORE_U64(ctx.r29.u32 + 272, ctx.r26.u64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,249(r29)
	PPC_STORE_U8(ctx.r29.u32 + 249, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837682A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837682B4"))) PPC_WEAK_FUNC(sub_837682B4);
PPC_FUNC_IMPL(__imp__sub_837682B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837682B8"))) PPC_WEAK_FUNC(sub_837682B8);
PPC_FUNC_IMPL(__imp__sub_837682B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837682C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// ble cr6,0x8376832c
	if (!cr6.gt) goto loc_8376832C;
	// addi r31,r4,-8
	ctx.r31.s64 = ctx.r4.s64 + -8;
loc_837682E0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// srawi r5,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x83766118
	ctx.lr = 0x83768314;
	sub_83766118(ctx, base);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bgt cr6,0x837682e0
	if (cr6.gt) goto loc_837682E0;
loc_8376832C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83768334"))) PPC_WEAK_FUNC(sub_83768334);
PPC_FUNC_IMPL(__imp__sub_83768334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83768338"))) PPC_WEAK_FUNC(sub_83768338);
PPC_FUNC_IMPL(__imp__sub_83768338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83768340;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// bl 0x837779b0
	ctx.lr = 0x83768354;
	sub_837779B0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// addi r10,r11,-13008
	ctx.r10.s64 = ctx.r11.s64 + -13008;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8376ee28
	ctx.lr = 0x8376836C;
	sub_8376EE28(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x837811a0
	ctx.lr = 0x83768378;
	sub_837811A0(ctx, base);
	// lis r9,-31770
	ctx.r9.s64 = -2082078720;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r8,-31770
	ctx.r8.s64 = -2082078720;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r5,-31770
	ctx.r5.s64 = -2082078720;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r4,-31770
	ctx.r4.s64 = -2082078720;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// ld r11,30388(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 30388);
	// std r11,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r11.u64);
	// lwz r11,30436(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30436);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,30436(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 30436);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// sth r10,176(r31)
	PPC_STORE_U16(ctx.r31.u32 + 176, ctx.r10.u16);
	// ld r11,30452(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 30452);
	// std r11,180(r31)
	PPC_STORE_U64(ctx.r31.u32 + 180, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r6,30384(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30384);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// stw r27,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r27.u32);
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
	// stb r25,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r25.u8);
	// stw r5,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r5.u32);
	// stb r24,205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 205, ctx.r24.u8);
	// stb r8,206(r31)
	PPC_STORE_U8(ctx.r31.u32 + 206, ctx.r8.u8);
	// stb r30,207(r31)
	PPC_STORE_U8(ctx.r31.u32 + 207, ctx.r30.u8);
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// stb r7,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r7.u8);
	// stb r30,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r30.u8);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r30.u32);
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
	// stb r30,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r30.u8);
	// stb r30,249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 249, ctx.r30.u8);
	// stb r30,250(r31)
	PPC_STORE_U8(ctx.r31.u32 + 250, ctx.r30.u8);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// addi r29,r31,448
	ctx.r29.s64 = ctx.r31.s64 + 448;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r28,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r28.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r30.u8);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stb r30,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r30.u8);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stb r11,320(r31)
	PPC_STORE_U8(ctx.r31.u32 + 320, ctx.r11.u8);
	// stb r11,321(r31)
	PPC_STORE_U8(ctx.r31.u32 + 321, ctx.r11.u8);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r4,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r4.u32);
	// sth r30,412(r31)
	PPC_STORE_U16(ctx.r31.u32 + 412, ctx.r30.u16);
	// stb r30,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r30.u8);
	// stb r30,441(r31)
	PPC_STORE_U8(ctx.r31.u32 + 441, ctx.r30.u8);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r3,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r3.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8376e9f8
	ctx.lr = 0x8376850C;
	sub_8376E9F8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x837810e0
	ctx.lr = 0x83768514;
	sub_837810E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83763f08
	ctx.lr = 0x8376851C;
	sub_83763F08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83147858
	ctx.lr = 0x83768524;
	sub_83147858(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r31,328
	ctx.r10.s64 = ctx.r31.s64 + 328;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83768534:
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83768534
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83768534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83768548"))) PPC_WEAK_FUNC(sub_83768548);
PPC_FUNC_IMPL(__imp__sub_83768548) {
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
	// bl 0x83767e48
	ctx.lr = 0x83768568;
	sub_83767E48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768580
	if (cr6.eq) goto loc_83768580;
	// bl 0x82416268
	ctx.lr = 0x8376857C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83768580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83768598"))) PPC_WEAK_FUNC(sub_83768598);
PPC_FUNC_IMPL(__imp__sub_83768598) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-21400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83768614
	if (!cr6.eq) goto loc_83768614;
	// li r11,43
	ctx.r11.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,464
	ctx.r4.s64 = 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837685D8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837685f0
	if (cr6.eq) goto loc_837685F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83768338
	ctx.lr = 0x837685E8;
	sub_83768338(ctx, base);
	// stw r3,-21400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21400, ctx.r3.u32);
	// b 0x837685f8
	goto loc_837685F8;
loc_837685F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-21400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -21400, ctx.r11.u32);
loc_837685F8:
	// bl 0x831021a0
	ctx.lr = 0x837685FC;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x83768604;
	sub_82DA45F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768614
	if (cr6.eq) goto loc_83768614;
	// lwz r4,-21400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -21400);
	// bl 0x83103100
	ctx.lr = 0x83768614;
	sub_83103100(ctx, base);
loc_83768614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376862C"))) PPC_WEAK_FUNC(sub_8376862C);
PPC_FUNC_IMPL(__imp__sub_8376862C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83768630"))) PPC_WEAK_FUNC(sub_83768630);
PPC_FUNC_IMPL(__imp__sub_83768630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83768638;
	__savegprlr_19(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// bl 0x82efe820
	ctx.lr = 0x8376864C;
	sub_82EFE820(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376878c
	if (cr6.eq) goto loc_8376878C;
	// lwz r11,88(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 88);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83768674
	if (cr6.eq) goto loc_83768674;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x8376878c
	if (!cr6.gt) goto loc_8376878C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bgt cr6,0x8376878c
	if (cr6.gt) goto loc_8376878C;
loc_83768674:
	// addi r19,r20,84
	ctx.r19.s64 = ctx.r20.s64 + 84;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8376eaa0
	ctx.lr = 0x83768680;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376878c
	if (cr6.eq) goto loc_8376878C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83763f08
	ctx.lr = 0x83768694;
	sub_83763F08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376878c
	if (cr6.eq) goto loc_8376878C;
	// addi r31,r20,448
	ctx.r31.s64 = ctx.r20.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831478b0
	ctx.lr = 0x837686AC;
	sub_831478B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376878c
	if (cr6.eq) goto loc_8376878C;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// bl 0x83147938
	ctx.lr = 0x837686D4;
	sub_83147938(ctx, base);
	// li r11,132
	ctx.r11.s64 = 132;
	// li r10,133
	ctx.r10.s64 = 133;
	// li r9,134
	ctx.r9.s64 = 134;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,135
	ctx.r8.s64 = 135;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r7,136
	ctx.r7.s64 = 136;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r6,137
	ctx.r6.s64 = 137;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,138
	ctx.r5.s64 = 138;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
loc_83768714:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82efe958
	ctx.lr = 0x83768724;
	sub_82EFE958(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768774
	if (cr6.eq) goto loc_83768774;
loc_83768734:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82efe928
	ctx.lr = 0x83768744;
	sub_82EFE928(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768768
	if (cr6.eq) goto loc_83768768;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r30,r21,14
	ctx.r30.u64 = ctx.r21.u32 & 0x3FFFF;
	// bl 0x8311c708
	ctx.lr = 0x83768760;
	sub_8311C708(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x83768798
	if (cr6.eq) goto loc_83768798;
loc_83768768:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x83768734
	if (cr6.lt) goto loc_83768734;
loc_83768774:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r26,7
	cr6.compare<uint32_t>(ctx.r26.u32, 7, xer);
	// blt cr6,0x83768714
	if (cr6.lt) goto loc_83768714;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f73d60
	ctx.lr = 0x8376878C;
	sub_82F73D60(ctx, base);
loc_8376878C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83768798:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837687A8;
	sub_82A9BC48(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x837688a8
	if (cr6.gt) goto loc_837688A8;
	// lis r12,-31881
	ctx.r12.s64 = -2089353216;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30764
	ctx.r12.s64 = ctx.r12.s64 + -30764;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83768820;
	case 1:
		goto loc_83768828;
	case 2:
		goto loc_83768830;
	case 3:
		goto loc_83768838;
	case 4:
		goto loc_83768840;
	case 5:
		goto loc_83768848;
	case 6:
		goto loc_83768850;
	case 7:
		goto loc_83768858;
	case 8:
		goto loc_837688A8;
	case 9:
		goto loc_83768860;
	case 10:
		goto loc_83768868;
	case 11:
		goto loc_83768870;
	case 12:
		goto loc_83768878;
	case 13:
		goto loc_83768880;
	case 14:
		goto loc_83768888;
	case 15:
		goto loc_83768890;
	case 16:
		goto loc_83768898;
	case 17:
		goto loc_837688A8;
	case 18:
		goto loc_837688A0;
	default:
		return;
	}
	// lwz r27,-30688(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30688);
	// lwz r27,-30680(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30680);
	// lwz r27,-30672(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30672);
	// lwz r27,-30664(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30664);
	// lwz r27,-30656(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30656);
	// lwz r27,-30648(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30648);
	// lwz r27,-30640(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30640);
	// lwz r27,-30632(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30632);
	// lwz r27,-30552(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30552);
	// lwz r27,-30624(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30624);
	// lwz r27,-30616(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30616);
	// lwz r27,-30608(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30608);
	// lwz r27,-30600(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30600);
	// lwz r27,-30592(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30592);
	// lwz r27,-30584(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30584);
	// lwz r27,-30576(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30576);
	// lwz r27,-30568(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30568);
	// lwz r27,-30552(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30552);
	// lwz r27,-30560(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -30560);
loc_83768820:
	// addi r4,r23,444
	ctx.r4.s64 = ctx.r23.s64 + 444;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768828:
	// addi r4,r23,678
	ctx.r4.s64 = ctx.r23.s64 + 678;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768830:
	// addi r4,r23,1108
	ctx.r4.s64 = ctx.r23.s64 + 1108;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768838:
	// addi r4,r23,374
	ctx.r4.s64 = ctx.r23.s64 + 374;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768840:
	// addi r4,r23,24
	ctx.r4.s64 = ctx.r23.s64 + 24;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768848:
	// addi r4,r23,304
	ctx.r4.s64 = ctx.r23.s64 + 304;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768850:
	// addi r4,r23,968
	ctx.r4.s64 = ctx.r23.s64 + 968;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768858:
	// addi r4,r23,1328
	ctx.r4.s64 = ctx.r23.s64 + 1328;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768860:
	// addi r4,r23,584
	ctx.r4.s64 = ctx.r23.s64 + 584;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768868:
	// addi r4,r23,94
	ctx.r4.s64 = ctx.r23.s64 + 94;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768870:
	// addi r4,r23,1178
	ctx.r4.s64 = ctx.r23.s64 + 1178;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768878:
	// addi r4,r23,164
	ctx.r4.s64 = ctx.r23.s64 + 164;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768880:
	// addi r4,r23,1038
	ctx.r4.s64 = ctx.r23.s64 + 1038;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768888:
	// addi r4,r23,898
	ctx.r4.s64 = ctx.r23.s64 + 898;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768890:
	// addi r4,r23,758
	ctx.r4.s64 = ctx.r23.s64 + 758;
	// b 0x837688ac
	goto loc_837688AC;
loc_83768898:
	// addi r4,r23,514
	ctx.r4.s64 = ctx.r23.s64 + 514;
	// b 0x837688ac
	goto loc_837688AC;
loc_837688A0:
	// addi r4,r23,1258
	ctx.r4.s64 = ctx.r23.s64 + 1258;
	// b 0x837688ac
	goto loc_837688AC;
loc_837688A8:
	// addi r4,r23,234
	ctx.r4.s64 = ctx.r23.s64 + 234;
loc_837688AC:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837688bc
	if (!cr6.eq) goto loc_837688BC;
	// addi r4,r23,234
	ctx.r4.s64 = ctx.r23.s64 + 234;
loc_837688BC:
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,70
	ctx.r5.s64 = 70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83764470
	ctx.lr = 0x837688CC;
	sub_83764470(ctx, base);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837688f8
	if (!cr6.eq) goto loc_837688F8;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837688f8
	if (!cr6.eq) goto loc_837688F8;
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// addi r4,r23,1248
	ctx.r4.s64 = ctx.r23.s64 + 1248;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837688fc
	if (cr6.eq) goto loc_837688FC;
loc_837688F8:
	// addi r4,r23,748
	ctx.r4.s64 = ctx.r23.s64 + 748;
loc_837688FC:
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83764470
	ctx.lr = 0x8376890C;
	sub_83764470(ctx, base);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ab2f88
	ctx.lr = 0x83768918;
	sub_82AB2F88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83768928;
	sub_82A9BC48(ctx, base);
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r11,r1,300
	ctx.r11.s64 = ctx.r1.s64 + 300;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83768938:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83768938
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83768938;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,121
	ctx.r5.s64 = 121;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83764470
	ctx.lr = 0x83768958;
	sub_83764470(ctx, base);
	// lhz r4,16(r23)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83768968
	if (!cr6.eq) goto loc_83768968;
	// li r4,29
	ctx.r4.s64 = 29;
loc_83768968:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837689a0
	if (cr6.eq) goto loc_837689A0;
loc_83768978:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x83768994
	if (cr6.eq) goto loc_83768994;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83768978
	if (!cr6.eq) goto loc_83768978;
	// b 0x8376899c
	goto loc_8376899C;
loc_83768994:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837689a0
	if (!cr6.eq) goto loc_837689A0;
loc_8376899C:
	// li r4,29
	ctx.r4.s64 = 29;
loc_837689A0:
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x837689AC;
	sub_82A9BC48(ctx, base);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,9,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// bl 0x82a9bc48
	ctx.lr = 0x837689C0;
	sub_82A9BC48(ctx, base);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x837689CC;
	sub_82AA9D18(ctx, base);
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,30436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30436);
	// rlwinm r29,r11,14,0,17
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// beq cr6,0x83768a08
	if (cr6.eq) goto loc_83768A08;
loc_837689E8:
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aaa108
	ctx.lr = 0x837689FC;
	sub_82AAA108(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x837689e8
	if (cr6.lt) goto loc_837689E8;
loc_83768A08:
	// li r6,33
	ctx.r6.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r21,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 14) & 0xFFFFC000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83768A1C;
	sub_82AAA108(ctx, base);
	// rlwinm r31,r21,14,0,17
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 14) & 0xFFFFC000;
	// li r6,33
	ctx.r6.s64 = 33;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83768A34;
	sub_82AAA108(ctx, base);
	// li r6,33
	ctx.r6.s64 = 33;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aaa108
	ctx.lr = 0x83768A48;
	sub_82AAA108(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83768A60;
	sub_82A9BC48(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8311c738
	ctx.lr = 0x83768A6C;
	sub_8311C738(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x83768a84
	if (!cr6.eq) goto loc_83768A84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c750
	ctx.lr = 0x83768A80;
	sub_8311C750(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83768A84:
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83768A94;
	sub_82A9BC48(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83768AA4;
	sub_82A9BC48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a9bc48
	ctx.lr = 0x83768AB4;
	sub_82A9BC48(ctx, base);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r4,r11,26,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bl 0x82a9bc48
	ctx.lr = 0x83768AC8;
	sub_82A9BC48(ctx, base);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82aa9d18
	ctx.lr = 0x83768AD4;
	sub_82AA9D18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83768b50
	if (cr6.eq) goto loc_83768B50;
loc_83768AE4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c810
	ctx.lr = 0x83768AFC;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768b44
	if (cr6.eq) goto loc_83768B44;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768b44
	if (cr6.eq) goto loc_83768B44;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768b44
	if (cr6.lt) goto loc_83768B44;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768b44
	if (cr6.gt) goto loc_83768B44;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768B44:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83768ae4
	if (cr6.lt) goto loc_83768AE4;
loc_83768B50:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_83768B5C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c810
	ctx.lr = 0x83768B74;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768bbc
	if (cr6.eq) goto loc_83768BBC;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768bbc
	if (cr6.eq) goto loc_83768BBC;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768bbc
	if (cr6.lt) goto loc_83768BBC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768bbc
	if (cr6.gt) goto loc_83768BBC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768BBC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x83768b5c
	if (cr6.lt) goto loc_83768B5C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768BDC;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768c20
	if (cr6.eq) goto loc_83768C20;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768c20
	if (cr6.eq) goto loc_83768C20;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768c20
	if (cr6.lt) goto loc_83768C20;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768c20
	if (cr6.gt) goto loc_83768C20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768C20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768C20:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768C34;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768c78
	if (cr6.eq) goto loc_83768C78;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768c78
	if (cr6.eq) goto loc_83768C78;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768c78
	if (cr6.lt) goto loc_83768C78;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768c78
	if (cr6.gt) goto loc_83768C78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768C78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768C78:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768C8C;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768cd0
	if (cr6.eq) goto loc_83768CD0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768cd0
	if (cr6.eq) goto loc_83768CD0;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768cd0
	if (cr6.lt) goto loc_83768CD0;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768cd0
	if (cr6.gt) goto loc_83768CD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768CD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768CD0:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768CE4;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768d28
	if (cr6.eq) goto loc_83768D28;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768d28
	if (cr6.eq) goto loc_83768D28;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768d28
	if (cr6.lt) goto loc_83768D28;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768d28
	if (cr6.gt) goto loc_83768D28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768D28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768D28:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768D3C;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768d80
	if (cr6.eq) goto loc_83768D80;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768d80
	if (cr6.eq) goto loc_83768D80;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768d80
	if (cr6.lt) goto loc_83768D80;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768d80
	if (cr6.gt) goto loc_83768D80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768D80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768D80:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768D94;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768dd8
	if (cr6.eq) goto loc_83768DD8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768dd8
	if (cr6.eq) goto loc_83768DD8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768dd8
	if (cr6.lt) goto loc_83768DD8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768dd8
	if (cr6.gt) goto loc_83768DD8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768DD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768DD8:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83768DEC;
	sub_8306C7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768e30
	if (cr6.eq) goto loc_83768E30;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768e30
	if (cr6.eq) goto loc_83768E30;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768e30
	if (cr6.lt) goto loc_83768E30;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768e30
	if (cr6.gt) goto loc_83768E30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768E30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768E30:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r3,156(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 156);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8377f1a0
	ctx.lr = 0x83768E40;
	sub_8377F1A0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c810
	ctx.lr = 0x83768E50;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768e64
	if (cr6.eq) goto loc_83768E64;
	// lwz r30,280(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// b 0x83768e88
	goto loc_83768E88;
loc_83768E64:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c890
	ctx.lr = 0x83768E74;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_83768E88:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83768f00
	if (cr6.eq) goto loc_83768F00;
loc_83768E94:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c810
	ctx.lr = 0x83768EAC;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83768ef4
	if (cr6.eq) goto loc_83768EF4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768ef4
	if (cr6.eq) goto loc_83768EF4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768ef4
	if (cr6.lt) goto loc_83768EF4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768ef4
	if (cr6.gt) goto loc_83768EF4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768EF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768EF4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x83768e94
	if (cr6.lt) goto loc_83768E94;
loc_83768F00:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83769194
	if (cr6.eq) goto loc_83769194;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8376ec90
	ctx.lr = 0x83768F50;
	sub_8376EC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837693e8
	if (cr6.eq) goto loc_837693E8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x83768F78;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83768fbc
	if (cr6.eq) goto loc_83768FBC;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83768fbc
	if (cr6.eq) goto loc_83768FBC;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83768fbc
	if (cr6.lt) goto loc_83768FBC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83768fbc
	if (cr6.gt) goto loc_83768FBC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83768FBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83768FBC:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x83768FD8;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376901c
	if (cr6.eq) goto loc_8376901C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376901c
	if (cr6.eq) goto loc_8376901C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376901c
	if (cr6.lt) goto loc_8376901C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376901c
	if (cr6.gt) goto loc_8376901C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8376901C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376901C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,26
	ctx.r5.s64 = 26;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x83769038;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376907c
	if (cr6.eq) goto loc_8376907C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376907c
	if (cr6.eq) goto loc_8376907C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376907c
	if (cr6.lt) goto loc_8376907C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376907c
	if (cr6.gt) goto loc_8376907C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8376907C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376907C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x83769098;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837690dc
	if (cr6.eq) goto loc_837690DC;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837690dc
	if (cr6.eq) goto loc_837690DC;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837690dc
	if (cr6.lt) goto loc_837690DC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837690dc
	if (cr6.gt) goto loc_837690DC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x837690DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837690DC:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x837690F8;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376913c
	if (cr6.eq) goto loc_8376913C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376913c
	if (cr6.eq) goto loc_8376913C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376913c
	if (cr6.lt) goto loc_8376913C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376913c
	if (cr6.gt) goto loc_8376913C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8376913C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376913C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,29
	ctx.r5.s64 = 29;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x83769158;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837693e8
	if (cr6.eq) goto loc_837693E8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837693e8
	if (cr6.eq) goto loc_837693E8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837693e8
	if (cr6.lt) goto loc_837693E8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837693e8
	if (cr6.gt) goto loc_837693E8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x837693dc
	goto loc_837693DC;
loc_83769194:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,156(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 156);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x8377f418
	ctx.lr = 0x837691A8;
	sub_8377F418(ctx, base);
	// lbz r11,178(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 178);
	// li r5,24
	ctx.r5.s64 = 24;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r31,179(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 179);
	// lbz r30,180(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// bl 0x8306c7a0
	ctx.lr = 0x837691CC;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83769210
	if (cr6.eq) goto loc_83769210;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83769210
	if (cr6.eq) goto loc_83769210;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83769210
	if (cr6.lt) goto loc_83769210;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83769210
	if (cr6.gt) goto loc_83769210;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83769210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83769210:
	// rlwinm r11,r31,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3F;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83769228;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376926c
	if (cr6.eq) goto loc_8376926C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376926c
	if (cr6.eq) goto loc_8376926C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376926c
	if (cr6.lt) goto loc_8376926C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376926c
	if (cr6.gt) goto loc_8376926C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8376926C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376926C:
	// rlwinm r11,r30,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3F;
	// li r5,26
	ctx.r5.s64 = 26;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83769284;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837692c8
	if (cr6.eq) goto loc_837692C8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837692c8
	if (cr6.eq) goto loc_837692C8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837692c8
	if (cr6.lt) goto loc_837692C8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837692c8
	if (cr6.gt) goto loc_837692C8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x837692C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837692C8:
	// lbz r11,181(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 181);
	// li r5,27
	ctx.r5.s64 = 27;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r31,182(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 182);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r30,183(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 183);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x837692EC;
	sub_8306C7A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83769330
	if (cr6.eq) goto loc_83769330;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83769330
	if (cr6.eq) goto loc_83769330;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83769330
	if (cr6.lt) goto loc_83769330;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83769330
	if (cr6.gt) goto loc_83769330;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x83769330;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83769330:
	// rlwinm r11,r31,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3F;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x83769348;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376938c
	if (cr6.eq) goto loc_8376938C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376938c
	if (cr6.eq) goto loc_8376938C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376938c
	if (cr6.lt) goto loc_8376938C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376938c
	if (cr6.gt) goto loc_8376938C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8376938C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376938C:
	// rlwinm r11,r30,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3F;
	// li r5,29
	ctx.r5.s64 = 29;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c7a0
	ctx.lr = 0x837693A4;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837693e8
	if (cr6.eq) goto loc_837693E8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837693e8
	if (cr6.eq) goto loc_837693E8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837693e8
	if (cr6.lt) goto loc_837693E8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837693e8
	if (cr6.gt) goto loc_837693E8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
loc_837693DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837693E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837693E8:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83769404
	if (cr6.eq) goto loc_83769404;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83769404;
	sub_825952B8(ctx, base);
loc_83769404:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83769410"))) PPC_WEAK_FUNC(sub_83769410);
PPC_FUNC_IMPL(__imp__sub_83769410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83769418;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82efe820
	ctx.lr = 0x8376942C;
	sub_82EFE820(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837694b8
	if (cr6.eq) goto loc_837694B8;
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8376944c
	if (cr6.eq) goto loc_8376944C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x837694b8
	if (!cr6.eq) goto loc_837694B8;
loc_8376944C:
	// addi r3,r25,84
	ctx.r3.s64 = ctx.r25.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x83769454;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837694b8
	if (cr6.eq) goto loc_837694B8;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efe958
	ctx.lr = 0x8376946C;
	sub_82EFE958(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// beq cr6,0x837694b8
	if (cr6.eq) goto loc_837694B8;
loc_83769480:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efe928
	ctx.lr = 0x83769490;
	sub_82EFE928(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837694ac
	if (cr6.eq) goto loc_837694AC;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r29,r24,24
	ctx.r29.u64 = ctx.r24.u32 & 0xFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x837694c4
	if (cr6.eq) goto loc_837694C4;
loc_837694AC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x83769480
	if (cr6.lt) goto loc_83769480;
loc_837694B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837694C4:
	// addi r31,r25,448
	ctx.r31.s64 = ctx.r25.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831478b0
	ctx.lr = 0x837694D0;
	sub_831478B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837694b8
	if (cr6.eq) goto loc_837694B8;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x83147938
	ctx.lr = 0x837694F4;
	sub_83147938(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8376953c
	if (cr6.eq) goto loc_8376953C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83769538
	if (cr6.eq) goto loc_83769538;
loc_83769514:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x83769530
	if (cr6.eq) goto loc_83769530;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83769514
	if (!cr6.eq) goto loc_83769514;
	// b 0x83769538
	goto loc_83769538;
loc_83769530:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376953c
	if (!cr6.eq) goto loc_8376953C;
loc_83769538:
	// li r24,29
	ctx.r24.s64 = 29;
loc_8376953C:
	// clrlwi r4,r24,24
	ctx.r4.u64 = ctx.r24.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a74b38
	ctx.lr = 0x8376954C;
	sub_82A74B38(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83769564
	if (cr6.eq) goto loc_83769564;
	// addi r4,r27,129
	ctx.r4.s64 = ctx.r27.s64 + 129;
loc_83769564:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,121
	ctx.r5.s64 = 121;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x837644d8
	ctx.lr = 0x83769574;
	sub_837644D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x8376957C;
	sub_82F73D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83769588"))) PPC_WEAK_FUNC(sub_83769588);
PPC_FUNC_IMPL(__imp__sub_83769588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83769590;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r5.u64);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837695B4;
	sub_831CDCF0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x82aa8e60
	ctx.lr = 0x837695C4;
	sub_82AA8E60(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x82aa8e60
	ctx.lr = 0x837695D8;
	sub_82AA8E60(ctx, base);
	// lwz r25,292(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x837695EC;
	sub_82AA8E60(ctx, base);
	// bl 0x82efe820
	ctx.lr = 0x837695F0;
	sub_82EFE820(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837696e0
	if (cr6.eq) goto loc_837696E0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83769610
	if (cr6.eq) goto loc_83769610;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x837696e0
	if (!cr6.eq) goto loc_837696E0;
loc_83769610:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x83769618;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837696e0
	if (cr6.eq) goto loc_837696E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83763f08
	ctx.lr = 0x8376962C;
	sub_83763F08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837696e0
	if (cr6.eq) goto loc_837696E0;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// addi r24,r1,128
	ctx.r24.s64 = ctx.r1.s64 + 128;
loc_8376967C:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82efe958
	ctx.lr = 0x8376968C;
	sub_82EFE958(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837696d0
	if (cr6.eq) goto loc_837696D0;
loc_8376969C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82efe928
	ctx.lr = 0x837696AC;
	sub_82EFE928(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8311c750
	ctx.lr = 0x837696BC;
	sub_8311C750(ctx, base);
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r3.u32, xer);
	// beq cr6,0x837696ec
	if (cr6.eq) goto loc_837696EC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, xer);
	// blt cr6,0x8376969c
	if (cr6.lt) goto loc_8376969C;
loc_837696D0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r27,7
	cr6.compare<uint32_t>(ctx.r27.u32, 7, xer);
	// blt cr6,0x8376967c
	if (cr6.lt) goto loc_8376967C;
loc_837696E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837696EC:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_83769704:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83769704
	if (!cr6.eq) goto loc_83769704;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8376972C;
	sub_8259CC28(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,-13652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13652);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8376975c
	if (cr6.eq) goto loc_8376975C;
	// addi r4,r30,62
	ctx.r4.s64 = ctx.r30.s64 + 62;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83769744:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83769744
	if (!cr6.eq) goto loc_83769744;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// b 0x83769778
	goto loc_83769778;
loc_8376975C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83769760:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83769760
	if (!cr6.eq) goto loc_83769760;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_83769778:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83769788;
	sub_8259CC28(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82aa8fc8
	ctx.lr = 0x83769798;
	sub_82AA8FC8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r4,r11,9,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// bl 0x82aa8e60
	ctx.lr = 0x837697AC;
	sub_82AA8E60(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x837697C0;
	sub_82AA8E60(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x837697C4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769808
	if (cr6.eq) goto loc_83769808;
	// bl 0x831156e8
	ctx.lr = 0x837697D0;
	sub_831156E8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x837697DC;
	sub_8311C260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r4,r11,15,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// bl 0x82aa8e60
	ctx.lr = 0x837697F4;
	sub_82AA8E60(ctx, base);
	// lhz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// clrlwi r4,r10,31
	ctx.r4.u64 = ctx.r10.u32 & 0x1;
	// bl 0x82aa8e60
	ctx.lr = 0x83769808;
	sub_82AA8E60(ctx, base);
loc_83769808:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83769828
	if (cr6.lt) goto loc_83769828;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83769828;
	sub_825952B8(ctx, base);
loc_83769828:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83769834"))) PPC_WEAK_FUNC(sub_83769834);
PPC_FUNC_IMPL(__imp__sub_83769834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83769838"))) PPC_WEAK_FUNC(sub_83769838);
PPC_FUNC_IMPL(__imp__sub_83769838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83769840;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769860
	if (cr6.eq) goto loc_83769860;
loc_83769854:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83769860:
	// ld r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 272);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83769854
	if (!cr6.eq) goto loc_83769854;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83769884;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769898
	if (cr6.eq) goto loc_83769898;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83763c58
	ctx.lr = 0x83769894;
	sub_83763C58(ctx, base);
	// b 0x8376989c
	goto loc_8376989C;
loc_83769898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8376989C:
	// stw r3,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769854
	if (cr6.eq) goto loc_83769854;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r29,3
	ctx.r29.s64 = 3;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// std r11,272(r30)
	PPC_STORE_U64(ctx.r30.u32 + 272, ctx.r11.u64);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r9,-13372
	ctx.r4.s64 = ctx.r9.s64 + -13372;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x837698E8;
	sub_8259CC28(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x835249e8
	ctx.lr = 0x83769900;
	sub_835249E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83769908;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83769914"))) PPC_WEAK_FUNC(sub_83769914);
PPC_FUNC_IMPL(__imp__sub_83769914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83769918"))) PPC_WEAK_FUNC(sub_83769918);
PPC_FUNC_IMPL(__imp__sub_83769918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83769920;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769940
	if (cr6.eq) goto loc_83769940;
loc_83769934:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83769940:
	// ld r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 272);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83769934
	if (!cr6.eq) goto loc_83769934;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83769964;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769978
	if (cr6.eq) goto loc_83769978;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83763d10
	ctx.lr = 0x83769974;
	sub_83763D10(ctx, base);
	// b 0x8376997c
	goto loc_8376997C;
loc_83769978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8376997C:
	// stw r3,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769934
	if (cr6.eq) goto loc_83769934;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r29,3
	ctx.r29.s64 = 3;
	// std r31,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r31.u64);
	// std r11,272(r30)
	PPC_STORE_U64(ctx.r30.u32 + 272, ctx.r11.u64);
	// lis r9,-32213
	ctx.r9.s64 = -2111111168;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r9,-13348
	ctx.r4.s64 = ctx.r9.s64 + -13348;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// bl 0x8259cc28
	ctx.lr = 0x837699C8;
	sub_8259CC28(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lwz r3,260(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x835249e8
	ctx.lr = 0x837699E0;
	sub_835249E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837699E8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837699F4"))) PPC_WEAK_FUNC(sub_837699F4);
PPC_FUNC_IMPL(__imp__sub_837699F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837699F8"))) PPC_WEAK_FUNC(sub_837699F8);
PPC_FUNC_IMPL(__imp__sub_837699F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83769A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769a20
	if (cr6.eq) goto loc_83769A20;
loc_83769A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83769A20:
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83769a14
	if (!cr6.eq) goto loc_83769A14;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r29.u32);
	// bl 0x83763b90
	ctx.lr = 0x83769A3C;
	sub_83763B90(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r7,95
	ctx.r7.s64 = 6225920;
	// ori r6,r11,60640
	ctx.r6.u64 = ctx.r11.u64 | 60640;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// ori r3,r7,60644
	ctx.r3.u64 = ctx.r7.u64 | 60644;
	// ori r7,r11,60636
	ctx.r7.u64 = ctx.r11.u64 | 60636;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r6.u32);
	// bl 0x82595718
	ctx.lr = 0x83769A8C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769abc
	if (cr6.eq) goto loc_83769ABC;
	// lwz r28,252(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x835242a0
	ctx.lr = 0x83769AA0;
	sub_835242A0(ctx, base);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r9,r10,-13108
	ctx.r9.s64 = ctx.r10.s64 + -13108;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x83769ac0
	goto loc_83769AC0;
loc_83769ABC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83769AC0:
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769a14
	if (cr6.eq) goto loc_83769A14;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// lis r10,-32213
	ctx.r10.s64 = -2111111168;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// std r29,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// addi r4,r10,-13324
	ctx.r4.s64 = ctx.r10.s64 + -13324;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// bl 0x8259cc28
	ctx.lr = 0x83769B08;
	sub_8259CC28(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x835249e8
	ctx.lr = 0x83769B28;
	sub_835249E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x83769B30;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83769B3C"))) PPC_WEAK_FUNC(sub_83769B3C);
PPC_FUNC_IMPL(__imp__sub_83769B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83769B40"))) PPC_WEAK_FUNC(sub_83769B40);
PPC_FUNC_IMPL(__imp__sub_83769B40) {
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
	// bl 0x8376ef08
	ctx.lr = 0x83769B64;
	sub_8376EF08(ctx, base);
	// addi r5,r31,206
	ctx.r5.s64 = ctx.r31.s64 + 206;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x837675c0
	ctx.lr = 0x83769B74;
	sub_837675C0(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x83781c08
	ctx.lr = 0x83769B7C;
	sub_83781C08(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x83769d3c
	if (cr6.gt) goto loc_83769D3C;
	// lis r12,-31881
	ctx.r12.s64 = -2089353216;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25692
	ctx.r12.s64 = ctx.r12.s64 + -25692;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83769D94;
	case 1:
		goto loc_83769BD0;
	case 2:
		goto loc_83769BF0;
	case 3:
		goto loc_83769C20;
	case 4:
		goto loc_83769C58;
	case 5:
		goto loc_83769C6C;
	case 6:
		goto loc_83769C74;
	case 7:
		goto loc_83769C90;
	case 8:
		goto loc_83769CC4;
	case 9:
		goto loc_83769CD8;
	case 10:
		goto loc_83769CF4;
	default:
		return;
	}
	// lwz r27,-25196(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25196);
	// lwz r27,-25648(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25648);
	// lwz r27,-25616(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25616);
	// lwz r27,-25568(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25568);
	// lwz r27,-25512(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25512);
	// lwz r27,-25492(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25492);
	// lwz r27,-25484(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25484);
	// lwz r27,-25456(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25456);
	// lwz r27,-25404(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25404);
	// lwz r27,-25384(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25384);
	// lwz r27,-25356(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + -25356);
loc_83769BD0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8376eb58
	ctx.lr = 0x83769BDC;
	sub_8376EB58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x83769d90
	goto loc_83769D90;
loc_83769BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8376eaa0
	ctx.lr = 0x83769BF8;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83769838
	ctx.lr = 0x83769C0C;
	sub_83769838(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x83769d90
	goto loc_83769D90;
loc_83769C20:
	// lbz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769c48
	if (cr6.eq) goto loc_83769C48;
	// bl 0x83b4b558
	ctx.lr = 0x83769C40;
	sub_83B4B558(ctx, base);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_83769C48:
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r30,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r30.u8);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// b 0x83769d90
	goto loc_83769D90;
loc_83769C58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837671a0
	ctx.lr = 0x83769C60;
	sub_837671A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8376ea18
	ctx.lr = 0x83769C68;
	sub_8376EA18(ctx, base);
	// b 0x83769d8c
	goto loc_83769D8C;
loc_83769C6C:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83769d90
	goto loc_83769D90;
loc_83769C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83769918
	ctx.lr = 0x83769C7C;
	sub_83769918(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x83769d90
	goto loc_83769D90;
loc_83769C90:
	// lbz r11,249(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 249);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769cb8
	if (cr6.eq) goto loc_83769CB8;
	// bl 0x83b4b558
	ctx.lr = 0x83769CB0;
	sub_83B4B558(ctx, base);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_83769CB8:
	// stb r30,249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 249, ctx.r30.u8);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// b 0x83769d8c
	goto loc_83769D8C;
loc_83769CC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d17b90
	ctx.lr = 0x83769CCC;
	sub_82D17B90(ctx, base);
	// bl 0x82d73e70
	ctx.lr = 0x83769CD0;
	sub_82D73E70(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x83769d90
	goto loc_83769D90;
loc_83769CD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837699f8
	ctx.lr = 0x83769CE0;
	sub_837699F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x83769d90
	goto loc_83769D90;
loc_83769CF4:
	// lbz r11,250(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 250);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83769d94
	if (cr6.eq) goto loc_83769D94;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769d1c
	if (cr6.eq) goto loc_83769D1C;
	// bl 0x83b4b558
	ctx.lr = 0x83769D14;
	sub_83B4B558(ctx, base);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
loc_83769D1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,250(r31)
	PPC_STORE_U8(ctx.r31.u32 + 250, ctx.r30.u8);
	// std r30,272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 272, ctx.r30.u64);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// bl 0x82d73f90
	ctx.lr = 0x83769D30;
	sub_82D73F90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d17b90
	ctx.lr = 0x83769D38;
	sub_82D17B90(ctx, base);
	// b 0x83769d94
	goto loc_83769D94;
loc_83769D3C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83769d8c
	if (!cr6.eq) goto loc_83769D8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,220
	ctx.r4.s64 = 220;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83769D60;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83769d74
	if (cr6.eq) goto loc_83769D74;
	// bl 0x837801e8
	ctx.lr = 0x83769D6C;
	sub_837801E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83769d78
	goto loc_83769D78;
loc_83769D74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83769D78:
	// stw r4,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83769d8c
	if (cr6.eq) goto loc_83769D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x83769D8C;
	sub_83103100(ctx, base);
loc_83769D8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83769D90:
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_83769D94:
	// ld r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// cmpldi cr6,r11,1
	cr6.compare<uint64_t>(ctx.r11.u64, 1, xer);
	// beq cr6,0x83769db0
	if (cr6.eq) goto loc_83769DB0;
	// cmpldi cr6,r11,2
	cr6.compare<uint64_t>(ctx.r11.u64, 2, xer);
	// beq cr6,0x83769db0
	if (cr6.eq) goto loc_83769DB0;
	// cmpldi cr6,r11,3
	cr6.compare<uint64_t>(ctx.r11.u64, 3, xer);
	// bne cr6,0x83769dbc
	if (!cr6.eq) goto loc_83769DBC;
loc_83769DB0:
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
loc_83769DBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83769DD4"))) PPC_WEAK_FUNC(sub_83769DD4);
PPC_FUNC_IMPL(__imp__sub_83769DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83769DD8"))) PPC_WEAK_FUNC(sub_83769DD8);
PPC_FUNC_IMPL(__imp__sub_83769DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x83769DE0;
	__savegprlr_17(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,21
	ctx.r10.s64 = 21;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r6,25
	ctx.r6.s64 = 25;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,41
	ctx.r4.s64 = 41;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// li r3,42
	ctx.r3.s64 = 42;
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r10,44
	ctx.r10.s64 = 44;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r9,45
	ctx.r9.s64 = 45;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r8,46
	ctx.r8.s64 = 46;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r7,47
	ctx.r7.s64 = 47;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// bl 0x82efe820
	ctx.lr = 0x83769E64;
	sub_82EFE820(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a1e8
	if (cr6.eq) goto loc_8376A1E8;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8376a1e8
	if (cr6.lt) goto loc_8376A1E8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bgt cr6,0x8376a1e8
	if (cr6.gt) goto loc_8376A1E8;
	// bl 0x831156e8
	ctx.lr = 0x83769E88;
	sub_831156E8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r9,236
	ctx.r9.s64 = 15466496;
	// addi r19,r1,112
	ctx.r19.s64 = ctx.r1.s64 + 112;
	// li r17,7
	ctx.r17.s64 = 7;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// ori r26,r9,19252
	ctx.r26.u64 = ctx.r9.u64 | 19252;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r29,r11,-13642
	ctx.r29.s64 = ctx.r11.s64 + -13642;
loc_83769EB4:
	// lwz r21,0(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82efe958
	ctx.lr = 0x83769EC4;
	sub_82EFE958(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a108
	if (cr6.eq) goto loc_8376A108;
loc_83769ED4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82efe928
	ctx.lr = 0x83769EE4;
	sub_82EFE928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a0fc
	if (cr6.eq) goto loc_8376A0FC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,31,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7F;
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376a0fc
	if (!cr6.eq) goto loc_8376A0FC;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8376a0fc
	if (cr6.gt) goto loc_8376A0FC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83769f70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83769F70;
	// bdzf 4*cr6+eq,0x83769f4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83769F4C;
	// bne cr6,0x83769f4c
	if (!cr6.eq) goto loc_83769F4C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x8376a0fc
	if (!cr6.lt) goto loc_8376A0FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,262
	ctx.r10.s64 = ctx.r29.s64 + 262;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a9f728
	ctx.lr = 0x83769F4C;
	sub_82A9F728(ctx, base);
loc_83769F4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a0fc
	if (cr6.eq) goto loc_8376A0FC;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x8376a0fc
	if (!cr6.lt) goto loc_8376A0FC;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x83769fa4
	goto loc_83769FA4;
loc_83769F70:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,11,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x8376a0fc
	if (!cr6.lt) goto loc_8376A0FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,250
	ctx.r10.s64 = ctx.r29.s64 + 250;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a9f728
	ctx.lr = 0x83769F98;
	sub_82A9F728(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,11
	ctx.r5.s64 = 11;
	// rlwinm r4,r9,20,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1;
loc_83769FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83769FAC;
	sub_82A9F728(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,9,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x8376a0fc
	if (!cr6.lt) goto loc_8376A0FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,218
	ctx.r10.s64 = ctx.r29.s64 + 218;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a9f728
	ctx.lr = 0x83769FD4;
	sub_82A9F728(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83769FE4;
	sub_82A9F728(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x83769FF4;
	sub_82A9F728(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// add r3,r22,r26
	ctx.r3.u64 = ctx.r22.u64 + ctx.r26.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bl 0x8312a278
	ctx.lr = 0x8376A014;
	sub_8312A278(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8376a02c
	if (cr6.eq) goto loc_8376A02C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
loc_8376A02C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d9af88
	ctx.lr = 0x8376A034;
	sub_82D9AF88(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x8376A044;
	sub_82A9F728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x8376A050;
	sub_837B0C10(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9ebf0
	ctx.lr = 0x8376A060;
	sub_82A9EBF0(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r1,564
	ctx.r11.s64 = ctx.r1.s64 + 564;
	// stw r28,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r28.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376A070:
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376a070
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376A070;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f20860
	ctx.lr = 0x8376A080;
	sub_82F20860(ctx, base);
	// stw r23,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r23.u32);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83125548
	ctx.lr = 0x8376A098;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cb28
	ctx.lr = 0x8376A0AC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x8376A0B4;
	sub_8387E8E0(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9ebf0
	ctx.lr = 0x8376A0C4;
	sub_82A9EBF0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x8376A0D4;
	sub_82A9F728(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x8376A0E4;
	sub_82A9F728(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a9f728
	ctx.lr = 0x8376A0F4;
	sub_82A9F728(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x8376A0FC;
	sub_8387E8E0(ctx, base);
loc_8376A0FC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r20
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, xer);
	// blt cr6,0x83769ed4
	if (cr6.lt) goto loc_83769ED4;
loc_8376A108:
	// addic. r17,r17,-1
	xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	cr0.compare<int32_t>(ctx.r17.s32, 0, xer);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// bne 0x83769eb4
	if (!cr0.eq) goto loc_83769EB4;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// li r26,7
	ctx.r26.s64 = 7;
loc_8376A11C:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82efe958
	ctx.lr = 0x8376A12C;
	sub_82EFE958(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a1d0
	if (cr6.eq) goto loc_8376A1D0;
loc_8376A13C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82efe928
	ctx.lr = 0x8376A14C;
	sub_82EFE928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a164
	if (cr6.eq) goto loc_8376A164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,22,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7F;
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// beq cr6,0x8376a174
	if (cr6.eq) goto loc_8376A174;
loc_8376A164:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x8376a13c
	if (cr6.lt) goto loc_8376A13C;
	// b 0x8376a1d0
	goto loc_8376A1D0;
loc_8376A174:
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83071998
	ctx.lr = 0x8376A18C;
	sub_83071998(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376a1d0
	if (cr6.eq) goto loc_8376A1D0;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376a1d0
	if (cr6.eq) goto loc_8376A1D0;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376a1d0
	if (cr6.lt) goto loc_8376A1D0;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376a1d0
	if (cr6.gt) goto loc_8376A1D0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8376A1D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376A1D0:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8376a11c
	if (!cr0.eq) goto loc_8376A11C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_8376A1E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376A1F4"))) PPC_WEAK_FUNC(sub_8376A1F4);
PPC_FUNC_IMPL(__imp__sub_8376A1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376A1F8"))) PPC_WEAK_FUNC(sub_8376A1F8);
PPC_FUNC_IMPL(__imp__sub_8376A1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8376A200;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r6,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r5,66
	ctx.r5.s64 = 66;
	// stw r6,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r8,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r4,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r4.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// li r5,69
	ctx.r5.s64 = 69;
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// li r3,67
	ctx.r3.s64 = 67;
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r4,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r6,23
	ctx.r6.s64 = 23;
	// stw r7,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r7.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r9,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r7,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r7.u32);
	// stw r6,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r6.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// li r7,17
	ctx.r7.s64 = 17;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r5,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r4,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r4.u32);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r14,3
	ctx.r14.s64 = 3;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// li r15,6
	ctx.r15.s64 = 6;
	// stw r9,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// li r18,7
	ctx.r18.s64 = 7;
	// stw r7,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// li r16,21
	ctx.r16.s64 = 21;
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// li r17,22
	ctx.r17.s64 = 22;
	// stw r6,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// li r8,19
	ctx.r8.s64 = 19;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// li r5,51
	ctx.r5.s64 = 51;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// stw r14,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r14.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r15,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r15.u32);
	// stw r18,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r18.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// stw r16,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r16.u32);
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r17,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r17.u32);
	// li r6,31
	ctx.r6.s64 = 31;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r8,133
	ctx.r8.s64 = 133;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r7,134
	ctx.r7.s64 = 134;
	// li r6,135
	ctx.r6.s64 = 135;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r4,137
	ctx.r4.s64 = 137;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r3,138
	ctx.r3.s64 = 138;
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// stw r4,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r4.u32);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// bl 0x82efe820
	ctx.lr = 0x8376A398;
	sub_82EFE820(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376a3b0
	if (!cr6.eq) goto loc_8376A3B0;
loc_8376A3A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376A3B0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8376a3a4
	if (!cr6.eq) goto loc_8376A3A4;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8376eaa0
	ctx.lr = 0x8376A3C4;
	sub_8376EAA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a3a4
	if (cr6.eq) goto loc_8376A3A4;
	// li r10,23
	ctx.r10.s64 = 23;
	// addi r11,r1,412
	ctx.r11.s64 = ctx.r1.s64 + 412;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376A3E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8376a3e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376A3E0;
	// addi r19,r1,96
	ctx.r19.s64 = ctx.r1.s64 + 96;
loc_8376A3EC:
	// lwz r21,0(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82efe958
	ctx.lr = 0x8376A3FC;
	sub_82EFE958(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r25,r1,416
	ctx.r25.s64 = ctx.r1.s64 + 416;
loc_8376A408:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82efe928
	ctx.lr = 0x8376A418;
	sub_82EFE928(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a554
	if (cr6.eq) goto loc_8376A554;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x8376a554
	if (cr6.eq) goto loc_8376A554;
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
loc_8376A434:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r11,r10,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8376a540
	if (!cr6.eq) goto loc_8376A540;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwzx r29,r27,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830714d8
	ctx.lr = 0x8376A464;
	sub_830714D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376a478
	if (cr6.eq) goto loc_8376A478;
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// b 0x8376a498
	goto loc_8376A498;
loc_8376A478:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83572958
	ctx.lr = 0x8376A488;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a554
	if (cr6.eq) goto loc_8376A554;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_8376A498:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376a554
	if (!cr6.lt) goto loc_8376A554;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x8376a4d0
	if (cr6.eq) goto loc_8376A4D0;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(ctx.r30.s32, 6, xer);
	// beq cr6,0x8376a4c8
	if (cr6.eq) goto loc_8376A4C8;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bne cr6,0x8376a4d8
	if (!cr6.eq) goto loc_8376A4D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8376a4d4
	goto loc_8376A4D4;
loc_8376A4C8:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8376a4d4
	goto loc_8376A4D4;
loc_8376A4D0:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8376A4D4:
	// bl 0x8311c708
	ctx.lr = 0x8376A4D8;
	sub_8311C708(ctx, base);
loc_8376A4D8:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830714d8
	ctx.lr = 0x8376A4F0;
	sub_830714D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a538
	if (cr6.eq) goto loc_8376A538;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376a538
	if (cr6.eq) goto loc_8376A538;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376a538
	if (cr6.lt) goto loc_8376A538;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376a538
	if (cr6.gt) goto loc_8376A538;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8376A538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376A538:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_8376A540:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// blt cr6,0x8376a434
	if (cr6.lt) goto loc_8376A434;
loc_8376A554:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r27,152
	cr6.compare<uint32_t>(ctx.r27.u32, 152, xer);
	// blt cr6,0x8376a408
	if (cr6.lt) goto loc_8376A408;
	// addic. r18,r18,-1
	xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	cr0.compare<int32_t>(ctx.r18.s32, 0, xer);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// bne 0x8376a3ec
	if (!cr0.eq) goto loc_8376A3EC;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
loc_8376A584:
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82efe958
	ctx.lr = 0x8376A594;
	sub_82EFE958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a5d4
	if (cr6.eq) goto loc_8376A5D4;
loc_8376A5A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82efe928
	ctx.lr = 0x8376A5B4;
	sub_82EFE928(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8313f560
	ctx.lr = 0x8376A5C8;
	sub_8313F560(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x8376a5a4
	if (cr6.lt) goto loc_8376A5A4;
loc_8376A5D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x8376a584
	if (cr6.lt) goto loc_8376A584;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// subf r10,r21,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r21.s64;
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// srawi r22,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r22.s64 = ctx.r10.s32 >> 3;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8313dff8
	ctx.lr = 0x8376A60C;
	sub_8313DFF8(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
loc_8376A630:
	// lwzx r27,r24,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8376a748
	if (cr6.eq) goto loc_8376A748;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
loc_8376A644:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r26,4(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8376a73c
	if (cr6.eq) goto loc_8376A73C;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r9,r10,13,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xF;
	// lwzx r8,r24,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8376a73c
	if (!cr6.eq) goto loc_8376A73C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830714d8
	ctx.lr = 0x8376A67C;
	sub_830714D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a690
	if (cr6.eq) goto loc_8376A690;
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// b 0x8376a6b4
	goto loc_8376A6B4;
loc_8376A690:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83572958
	ctx.lr = 0x8376A6A0;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_8376A6B4:
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,416
	ctx.r30.s64 = ctx.r1.s64 + 416;
	// lwzx r31,r29,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376a73c
	if (!cr6.lt) goto loc_8376A73C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8311c708
	ctx.lr = 0x8376A6D8;
	sub_8311C708(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x830714d8
	ctx.lr = 0x8376A6EC;
	sub_830714D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a734
	if (cr6.eq) goto loc_8376A734;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376a734
	if (cr6.eq) goto loc_8376A734;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376a734
	if (cr6.lt) goto loc_8376A734;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376a734
	if (cr6.gt) goto loc_8376A734;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bctrl 
	ctx.lr = 0x8376A734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376A734:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
loc_8376A73C:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x8376a644
	if (!cr0.eq) goto loc_8376A644;
loc_8376A748:
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r24,24
	cr6.compare<uint32_t>(ctx.r24.u32, 24, xer);
	// blt cr6,0x8376a630
	if (cr6.lt) goto loc_8376A630;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8376a768
	if (cr6.eq) goto loc_8376A768;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82416268
	ctx.lr = 0x8376A768;
	sub_82416268(ctx, base);
loc_8376A768:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376A774"))) PPC_WEAK_FUNC(sub_8376A774);
PPC_FUNC_IMPL(__imp__sub_8376A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376A778"))) PPC_WEAK_FUNC(sub_8376A778);
PPC_FUNC_IMPL(__imp__sub_8376A778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8376A780;
	__savegprlr_14(ctx, base);
	// stwu r1,-2864(r1)
	ea = -2864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r5,2900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2900, ctx.r5.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8376b6f0
	if (cr6.eq) goto loc_8376B6F0;
	// bl 0x83108968
	ctx.lr = 0x8376A7A0;
	sub_83108968(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b6f0
	if (cr6.eq) goto loc_8376B6F0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83763b90
	ctx.lr = 0x8376A7B4;
	sub_83763B90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b6f0
	if (cr6.eq) goto loc_8376B6F0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r18,0
	ctx.r18.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a7e8
	if (cr6.eq) goto loc_8376A7E8;
	// bl 0x83115808
	ctx.lr = 0x8376A7D8;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x8376a7ec
	if (!cr6.eq) goto loc_8376A7EC;
loc_8376A7E8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8376A7EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b6f0
	if (cr6.eq) goto loc_8376B6F0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376a81c
	if (cr6.eq) goto loc_8376A81C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83115808
	ctx.lr = 0x8376A80C;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x8376a820
	if (!cr6.eq) goto loc_8376A820;
loc_8376A81C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8376A820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b6f0
	if (cr6.eq) goto loc_8376B6F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r16,48(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r25,60(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x83108978
	ctx.lr = 0x8376A840;
	sub_83108978(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa87f0
	ctx.lr = 0x8376A84C;
	sub_82AA87F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83108978
	ctx.lr = 0x8376A858;
	sub_83108978(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83764788
	ctx.lr = 0x8376A868;
	sub_83764788(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83764800
	ctx.lr = 0x8376A874;
	sub_83764800(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// lwzx r26,r16,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8376aa3c
	if (cr6.eq) goto loc_8376AA3C;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// ori r24,r11,13856
	ctx.r24.u64 = ctx.r11.u64 | 13856;
loc_8376A898:
	// bl 0x830ff290
	ctx.lr = 0x8376A89C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376a8b4
	if (cr6.eq) goto loc_8376A8B4;
	// bl 0x830ff290
	ctx.lr = 0x8376A8A8;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ac4c
	if (!cr6.eq) goto loc_8376AC4C;
loc_8376A8B4:
	// cmplwi cr6,r28,21097
	cr6.compare<uint32_t>(ctx.r28.u32, 21097, xer);
	// add r29,r16,r24
	ctx.r29.u64 = ctx.r16.u64 + ctx.r24.u64;
	// bge cr6,0x8376a8c4
	if (!cr6.lt) goto loc_8376A8C4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8376A8C4:
	// ld r30,44(r29)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r29.u32 + 44);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// bl 0x8306ef60
	ctx.lr = 0x8376A8D8;
	sub_8306EF60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376a9a0
	if (!cr6.eq) goto loc_8376A9A0;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,360
	ctx.r11.s64 = ctx.r1.s64 + 360;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376A8F4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376a8f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376A8F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311d1d0
	ctx.lr = 0x8376A90C;
	sub_8311D1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376a92c
	if (!cr6.eq) goto loc_8376A92C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8373fae8
	ctx.lr = 0x8376A924;
	sub_8373FAE8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
loc_8376A92C:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1140
	ctx.r3.s64 = ctx.r1.s64 + 1140;
	// bl 0x831cdcf0
	ctx.lr = 0x8376A93C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x831cdcf0
	ctx.lr = 0x8376A94C;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837739f0
	ctx.lr = 0x8376A964;
	sub_837739F0(ctx, base);
	// addi r3,r1,1140
	ctx.r3.s64 = ctx.r1.s64 + 1140;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x8376A974;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bne cr6,0x8376a98c
	if (!cr6.eq) goto loc_8376A98C;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82a78580
	ctx.lr = 0x8376A98C;
	sub_82A78580(ctx, base);
loc_8376A98C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306ed00
	ctx.lr = 0x8376A99C;
	sub_8306ED00(ctx, base);
	// b 0x8376aa20
	goto loc_8376AA20;
loc_8376A9A0:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8376a9b0
	if (cr6.eq) goto loc_8376A9B0;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(ctx.r20.s32, 1, xer);
	// bne cr6,0x8376aa20
	if (!cr6.eq) goto loc_8376AA20;
loc_8376A9B0:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,280
	ctx.r11.s64 = ctx.r1.s64 + 280;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376A9C0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376a9c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376A9C0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8311d1d0
	ctx.lr = 0x8376A9D8;
	sub_8311D1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376a9f8
	if (!cr6.eq) goto loc_8376A9F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8373fae8
	ctx.lr = 0x8376A9F0;
	sub_8373FAE8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
loc_8376A9F8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83773198
	ctx.lr = 0x8376AA10;
	sub_83773198(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a78580
	ctx.lr = 0x8376AA20;
	sub_82A78580(ctx, base);
loc_8376AA20:
	// lwz r11,452(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 452);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,224
	ctx.r27.s64 = ctx.r27.s64 + 224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// stw r11,452(r19)
	PPC_STORE_U32(ctx.r19.u32 + 452, ctx.r11.u32);
	// blt cr6,0x8376a898
	if (cr6.lt) goto loc_8376A898;
loc_8376AA3C:
	// addis r24,r16,96
	ctx.r24.s64 = ctx.r16.s64 + 6291456;
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// lis r11,72
	ctx.r11.s64 = 4718592;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r18.u32);
	// addi r24,r24,-4896
	ctx.r24.s64 = ctx.r24.s64 + -4896;
	// stw r18,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r18.u32);
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// mr r15,r18
	ctx.r15.u64 = ctx.r18.u64;
	// ori r21,r11,7136
	ctx.r21.u64 = ctx.r11.u64 | 7136;
	// ori r14,r10,58144
	ctx.r14.u64 = ctx.r10.u64 | 58144;
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8376ab78
	if (cr6.eq) goto loc_8376AB78;
	// add r27,r16,r21
	ctx.r27.u64 = ctx.r16.u64 + ctx.r21.u64;
loc_8376AA78:
	// bl 0x830ff290
	ctx.lr = 0x8376AA7C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376aa94
	if (cr6.eq) goto loc_8376AA94;
	// bl 0x830ff290
	ctx.lr = 0x8376AA88;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ac44
	if (!cr6.eq) goto loc_8376AC44;
loc_8376AA94:
	// cmplwi cr6,r28,653
	cr6.compare<uint32_t>(ctx.r28.u32, 653, xer);
	// add r30,r16,r14
	ctx.r30.u64 = ctx.r16.u64 + ctx.r14.u64;
	// bge cr6,0x8376aaa4
	if (!cr6.lt) goto loc_8376AAA4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8376AAA4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8306ea38
	ctx.lr = 0x8376AAB8;
	sub_8306EA38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376ab0c
	if (!cr6.eq) goto loc_8376AB0C;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// bl 0x831cdcf0
	ctx.lr = 0x8376AAD4;
	sub_831CDCF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,1600
	ctx.r4.s64 = ctx.r1.s64 + 1600;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83773ab0
	ctx.lr = 0x8376AAEC;
	sub_83773AB0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1600
	ctx.r4.s64 = ctx.r1.s64 + 1600;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x837638a8
	ctx.lr = 0x8376AAFC;
	sub_837638A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x835977d8
	ctx.lr = 0x8376AB08;
	sub_835977D8(ctx, base);
	// b 0x8376ab58
	goto loc_8376AB58;
loc_8376AB0C:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8376ab1c
	if (cr6.eq) goto loc_8376AB1C;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(ctx.r20.s32, 1, xer);
	// bne cr6,0x8376ab30
	if (!cr6.eq) goto loc_8376AB30;
loc_8376AB1C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837754e0
	ctx.lr = 0x8376AB30;
	sub_837754E0(ctx, base);
loc_8376AB30:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8376ab40
	if (cr6.eq) goto loc_8376AB40;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bne cr6,0x8376ab58
	if (!cr6.eq) goto loc_8376AB58;
loc_8376AB40:
	// ld r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 504);
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82a9bc48
	ctx.lr = 0x8376AB58;
	sub_82A9BC48(ctx, base);
loc_8376AB58:
	// lwz r11,452(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 452);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,1312
	ctx.r27.s64 = ctx.r27.s64 + 1312;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// stw r11,452(r19)
	PPC_STORE_U32(ctx.r19.u32 + 452, ctx.r11.u32);
	// blt cr6,0x8376aa78
	if (cr6.lt) goto loc_8376AA78;
	// lwz r15,208(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
loc_8376AB78:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// ori r10,r11,60644
	ctx.r10.u64 = ctx.r11.u64 | 60644;
	// lwzx r26,r16,r10
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8376aca8
	if (cr6.eq) goto loc_8376ACA8;
	// addis r27,r16,88
	ctx.r27.s64 = ctx.r16.s64 + 5767168;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r27,r27,-20304
	ctx.r27.s64 = ctx.r27.s64 + -20304;
	// ori r25,r11,60004
	ctx.r25.u64 = ctx.r11.u64 | 60004;
loc_8376ABA0:
	// bl 0x830ff290
	ctx.lr = 0x8376ABA4;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376abbc
	if (cr6.eq) goto loc_8376ABBC;
	// bl 0x830ff290
	ctx.lr = 0x8376ABB0;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ad00
	if (!cr6.eq) goto loc_8376AD00;
loc_8376ABBC:
	// cmplwi cr6,r28,850
	cr6.compare<uint32_t>(ctx.r28.u32, 850, xer);
	// add r30,r16,r25
	ctx.r30.u64 = ctx.r16.u64 + ctx.r25.u64;
	// bge cr6,0x8376abcc
	if (!cr6.lt) goto loc_8376ABCC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8376ABCC:
	// ld r29,44(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8306ead0
	ctx.lr = 0x8376ABDC;
	sub_8306EAD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376ac58
	if (!cr6.eq) goto loc_8376AC58;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,792
	ctx.r11.s64 = ctx.r1.s64 + 792;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376ABF8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376abf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376ABF8;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83773b68
	ctx.lr = 0x8376AC18;
	sub_83773B68(ctx, base);
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bne cr6,0x8376ac30
	if (!cr6.eq) goto loc_8376AC30;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82aa8e60
	ctx.lr = 0x8376AC30;
	sub_82AA8E60(ctx, base);
loc_8376AC30:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83763940
	ctx.lr = 0x8376AC40;
	sub_83763940(ctx, base);
	// b 0x8376ac8c
	goto loc_8376AC8C;
loc_8376AC44:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f73d60
	ctx.lr = 0x8376AC4C;
	sub_82F73D60(ctx, base);
loc_8376AC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376AC58:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8376ac68
	if (cr6.eq) goto loc_8376AC68;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(ctx.r20.s32, 1, xer);
	// bne cr6,0x8376ac8c
	if (!cr6.eq) goto loc_8376AC8C;
loc_8376AC68:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837785b0
	ctx.lr = 0x8376AC7C;
	sub_837785B0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa8e60
	ctx.lr = 0x8376AC8C;
	sub_82AA8E60(ctx, base);
loc_8376AC8C:
	// lwz r11,452(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 452);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,632
	ctx.r27.s64 = ctx.r27.s64 + 632;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// stw r11,452(r19)
	PPC_STORE_U32(ctx.r19.u32 + 452, ctx.r11.u32);
	// blt cr6,0x8376aba0
	if (cr6.lt) goto loc_8376ABA0;
loc_8376ACA8:
	// li r17,2
	ctx.r17.s64 = 2;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8376acbc
	if (cr6.eq) goto loc_8376ACBC;
	// cmpwi cr6,r20,1
	cr6.compare<int32_t>(ctx.r20.s32, 1, xer);
	// bne cr6,0x8376b1f8
	if (!cr6.eq) goto loc_8376B1F8;
loc_8376ACBC:
	// bl 0x830ff290
	ctx.lr = 0x8376ACC0;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ad28
	if (cr6.eq) goto loc_8376AD28;
	// bl 0x830ff290
	ctx.lr = 0x8376ACCC;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ad28
	if (cr6.eq) goto loc_8376AD28;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x8376acf4
	if (cr6.eq) goto loc_8376ACF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x825952b8
	ctx.lr = 0x8376ACF4;
	sub_825952B8(ctx, base);
loc_8376ACF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376AD00:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x8376ad1c
	if (cr6.eq) goto loc_8376AD1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x825952b8
	ctx.lr = 0x8376AD1C;
	sub_825952B8(ctx, base);
loc_8376AD1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376AD28:
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82595718
	ctx.lr = 0x8376AD40;
	sub_82595718(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r22,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r22.u8);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r22,21(r8)
	PPC_STORE_U8(ctx.r8.u32 + 21, ctx.r22.u8);
	// bl 0x8306e2a0
	ctx.lr = 0x8376AD80;
	sub_8306E2A0(ctx, base);
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8376AD98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8376adfc
	if (cr6.eq) goto loc_8376ADFC;
loc_8376ADA4:
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83071998
	ctx.lr = 0x8376ADB8;
	sub_83071998(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ade0
	if (cr6.eq) goto loc_8376ADE0;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ade0
	if (cr6.eq) goto loc_8376ADE0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8376ADE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376ADE0:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833e3748
	ctx.lr = 0x8376ADEC;
	sub_833E3748(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,124
	ctx.r31.s64 = ctx.r31.s64 + 124;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// bne 0x8376ada4
	if (!cr0.eq) goto loc_8376ADA4;
loc_8376ADFC:
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,888
	ctx.r11.s64 = ctx.r1.s64 + 888;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376AE0C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376ae0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376AE0C;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// ori r8,r9,60648
	ctx.r8.u64 = ctx.r9.u64 | 60648;
	// lwzx r28,r16,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r8.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8376af18
	if (cr6.eq) goto loc_8376AF18;
	// addis r29,r16,85
	ctx.r29.s64 = ctx.r16.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r29,r29,11904
	ctx.r29.s64 = ctx.r29.s64 + 11904;
	// ori r27,r11,59456
	ctx.r27.u64 = ctx.r11.u64 | 59456;
loc_8376AE40:
	// cmplwi cr6,r30,300
	cr6.compare<uint32_t>(ctx.r30.u32, 300, xer);
	// add r31,r16,r27
	ctx.r31.u64 = ctx.r16.u64 + ctx.r27.u64;
	// bge cr6,0x8376ae50
	if (!cr6.lt) goto loc_8376AE50;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8376AE50:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x8376b8b8
	ctx.lr = 0x8376AE5C;
	sub_8376B8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376af08
	if (cr6.eq) goto loc_8376AF08;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ecc50
	ctx.lr = 0x8376AE78;
	sub_833ECC50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376ae98
	if (cr6.eq) goto loc_8376AE98;
	// lbz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 536);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376af08
	if (!cr6.eq) goto loc_8376AF08;
loc_8376AE98:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306ebd8
	ctx.lr = 0x8376AEA4;
	sub_8306EBD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376aec4
	if (cr6.eq) goto loc_8376AEC4;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306ec08
	ctx.lr = 0x8376AEC0;
	sub_8306EC08(ctx, base);
	// b 0x8376aee0
	goto loc_8376AEE0;
loc_8376AEC4:
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r1,888
	ctx.r11.s64 = ctx.r1.s64 + 888;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376AED4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376aed4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376AED4;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8376AEE0:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83773de8
	ctx.lr = 0x8376AEF8;
	sub_83773DE8(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8306ec68
	ctx.lr = 0x8376AF08;
	sub_8306EC68(ctx, base);
loc_8376AF08:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x8376ae40
	if (cr6.lt) goto loc_8376AE40;
loc_8376AF18:
	// bl 0x830ff290
	ctx.lr = 0x8376AF1C;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376af7c
	if (cr6.eq) goto loc_8376AF7C;
	// bl 0x830ff290
	ctx.lr = 0x8376AF28;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376af7c
	if (cr6.eq) goto loc_8376AF7C;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376AF48;
	sub_82D0E798(ctx, base);
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376AF58;
	sub_825952B8(ctx, base);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x8376af70
	if (cr6.eq) goto loc_8376AF70;
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825952b8
	ctx.lr = 0x8376AF70;
	sub_825952B8(ctx, base);
loc_8376AF70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376AF7C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376AF8C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376af8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376AF8C;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// ori r10,r11,10656
	ctx.r10.u64 = ctx.r11.u64 | 10656;
	// lwzx r27,r16,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8376b1d4
	if (cr6.eq) goto loc_8376B1D4;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8376AFB0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83117e18
	ctx.lr = 0x8376AFBC;
	sub_83117E18(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c448
	ctx.lr = 0x8376AFCC;
	sub_8311C448(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b1c8
	if (cr6.eq) goto loc_8376B1C8;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,488
	ctx.r11.s64 = ctx.r1.s64 + 488;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376AFE8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376afe8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376AFE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306e6b8
	ctx.lr = 0x8376AFFC;
	sub_8306E6B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b0d0
	if (cr6.eq) goto loc_8376B0D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306e6b8
	ctx.lr = 0x8376B010;
	sub_8306E6B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b028
	if (cr6.eq) goto loc_8376B028;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x831ce980
	ctx.lr = 0x8376B028;
	sub_831CE980(ctx, base);
loc_8376B028:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83773f68
	ctx.lr = 0x8376B03C;
	sub_83773F68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x8306e6b8
	ctx.lr = 0x8376B04C;
	sub_8306E6B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376b198
	if (!cr6.eq) goto loc_8376B198;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376B068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b17c
	if (cr6.eq) goto loc_8376B17C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376B084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83070868
	ctx.lr = 0x8376B094;
	sub_83070868(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376b0a8
	if (cr6.eq) goto loc_8376B0A8;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// b 0x8376b180
	goto loc_8376B180;
loc_8376B0A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x8376B0B8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x8376b180
	goto loc_8376B180;
loc_8376B0D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83774040
	ctx.lr = 0x8376B0E8;
	sub_83774040(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x8306e6b8
	ctx.lr = 0x8376B0F8;
	sub_8306E6B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376b198
	if (!cr6.eq) goto loc_8376B198;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376B114;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b17c
	if (cr6.eq) goto loc_8376B17C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376B130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83070868
	ctx.lr = 0x8376B140;
	sub_83070868(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376b154
	if (cr6.eq) goto loc_8376B154;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x8376b180
	goto loc_8376B180;
loc_8376B154:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x8376B164;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x8376b180
	goto loc_8376B180;
loc_8376B17C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8376B180:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306e6b8
	ctx.lr = 0x8376B18C;
	sub_8306E6B8(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b1c8
	if (cr6.eq) goto loc_8376B1C8;
loc_8376B198:
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x831ce980
	ctx.lr = 0x8376B1A4;
	sub_831CE980(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// beq cr6,0x8376b1c4
	if (cr6.eq) goto loc_8376B1C4;
	// bl 0x8306e8d8
	ctx.lr = 0x8376B1C0;
	sub_8306E8D8(ctx, base);
	// b 0x8376b1c8
	goto loc_8376B1C8;
loc_8376B1C4:
	// bl 0x8306df38
	ctx.lr = 0x8376B1C8;
	sub_8306DF38(ctx, base);
loc_8376B1C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x8376afb0
	if (cr6.lt) goto loc_8376AFB0;
loc_8376B1D4:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376B1E8;
	sub_82D0E798(ctx, base);
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376B1F8;
	sub_825952B8(ctx, base);
loc_8376B1F8:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq cr6,0x8376b208
	if (cr6.eq) goto loc_8376B208;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// bne cr6,0x8376b654
	if (!cr6.eq) goto loc_8376B654;
loc_8376B208:
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,616
	ctx.r11.s64 = ctx.r1.s64 + 616;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376B218:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376b218
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376B218;
	// li r5,628
	ctx.r5.s64 = 628;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x831cdcf0
	ctx.lr = 0x8376B234;
	sub_831CDCF0(ctx, base);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// lwz r22,0(r24)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x8376b654
	if (cr6.eq) goto loc_8376B654;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// add r24,r16,r21
	ctx.r24.u64 = ctx.r16.u64 + ctx.r21.u64;
	// li r20,6
	ctx.r20.s64 = 6;
	// li r21,8
	ctx.r21.s64 = 8;
	// lis r26,-31770
	ctx.r26.s64 = -2082078720;
	// addi r27,r11,30388
	ctx.r27.s64 = ctx.r11.s64 + 30388;
loc_8376B25C:
	// bl 0x830ff290
	ctx.lr = 0x8376B260;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b278
	if (cr6.eq) goto loc_8376B278;
	// bl 0x830ff290
	ctx.lr = 0x8376B26C;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376b69c
	if (!cr6.eq) goto loc_8376B69C;
loc_8376B278:
	// cmplwi cr6,r25,653
	cr6.compare<uint32_t>(ctx.r25.u32, 653, xer);
	// add r29,r16,r14
	ctx.r29.u64 = ctx.r16.u64 + ctx.r14.u64;
	// bge cr6,0x8376b288
	if (!cr6.lt) goto loc_8376B288;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8376B288:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,504(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x8376B298;
	sub_8311BE78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376b2b4
	if (!cr6.eq) goto loc_8376B2B4;
	// lwz r11,452(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 452);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r11,452(r19)
	PPC_STORE_U32(ctx.r19.u32 + 452, ctx.r11.u32);
	// b 0x8376b640
	goto loc_8376B640;
loc_8376B2B4:
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,616
	ctx.r11.s64 = ctx.r1.s64 + 616;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376B2C4:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376b2c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376B2C4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83774198
	ctx.lr = 0x8376B2E8;
	sub_83774198(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x8306e7c8
	ctx.lr = 0x8376B2F8;
	sub_8306E7C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376b318
	if (!cr6.eq) goto loc_8376B318;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,30436(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30436);
	// bl 0x8306e7c8
	ctx.lr = 0x8376B30C;
	sub_8306E7C8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b348
	if (cr6.eq) goto loc_8376B348;
loc_8376B318:
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// li r5,164
	ctx.r5.s64 = 164;
	// bl 0x831ce980
	ctx.lr = 0x8376B324;
	sub_831CE980(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// beq cr6,0x8376b344
	if (cr6.eq) goto loc_8376B344;
	// bl 0x8306e8d8
	ctx.lr = 0x8376B340;
	sub_8306E8D8(ctx, base);
	// b 0x8376b348
	goto loc_8376B348;
loc_8376B344:
	// bl 0x8306df38
	ctx.lr = 0x8376B348;
	sub_8306DF38(ctx, base);
loc_8376B348:
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x831cdcf0
	ctx.lr = 0x8376B358;
	sub_831CDCF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,2080
	ctx.r4.s64 = ctx.r1.s64 + 2080;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837742e8
	ctx.lr = 0x8376B374;
	sub_837742E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x8306e850
	ctx.lr = 0x8376B384;
	sub_8306E850(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376b3a4
	if (!cr6.eq) goto loc_8376B3A4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,30436(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30436);
	// bl 0x8306e850
	ctx.lr = 0x8376B398;
	sub_8306E850(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b3d4
	if (cr6.eq) goto loc_8376B3D4;
loc_8376B3A4:
	// addi r4,r1,2080
	ctx.r4.s64 = ctx.r1.s64 + 2080;
	// li r5,628
	ctx.r5.s64 = 628;
	// bl 0x831ce980
	ctx.lr = 0x8376B3B0;
	sub_831CE980(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// beq cr6,0x8376b3d0
	if (cr6.eq) goto loc_8376B3D0;
	// bl 0x8306e8d8
	ctx.lr = 0x8376B3CC;
	sub_8306E8D8(ctx, base);
	// b 0x8376b3d4
	goto loc_8376B3D4;
loc_8376B3D0:
	// bl 0x8306df38
	ctx.lr = 0x8376B3D4;
	sub_8306DF38(ctx, base);
loc_8376B3D4:
	// lwz r11,796(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x8376b518
	if (!cr6.eq) goto loc_8376B518;
loc_8376B3E8:
	// cmplwi cr6,r30,23
	cr6.compare<uint32_t>(ctx.r30.u32, 23, xer);
	// bge cr6,0x8376b4fc
	if (!cr6.lt) goto loc_8376B4FC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8306a888
	ctx.lr = 0x8376B408;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b434
	if (cr6.eq) goto loc_8376B434;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b434
	if (cr6.eq) goto loc_8376B434;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bctrl 
	ctx.lr = 0x8376B434;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376B434:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376b4fc
	if (cr6.eq) goto loc_8376B4FC;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// sth r18,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r18.u16);
	// ld r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8376B45C;
	sub_8311BF98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1524
	ctx.r3.s64 = ctx.r1.s64 + 1524;
	// lhz r29,188(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 188);
	// bl 0x831cdcf0
	ctx.lr = 0x8376B474;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x831cdcf0
	ctx.lr = 0x8376B484;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x8376B494;
	sub_8306EEB0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x83070638
	ctx.lr = 0x8376B4A8;
	sub_83070638(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376b4ec
	if (cr6.eq) goto loc_8376B4EC;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376b4ec
	if (cr6.eq) goto loc_8376B4EC;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376b4ec
	if (cr6.lt) goto loc_8376B4EC;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376b4ec
	if (cr6.gt) goto loc_8376B4EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bctrl 
	ctx.lr = 0x8376B4EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376B4EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306ed00
	ctx.lr = 0x8376B4FC;
	sub_8306ED00(ctx, base);
loc_8376B4FC:
	// lwz r11,452(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 452);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// stw r11,452(r19)
	PPC_STORE_U32(ctx.r19.u32 + 452, ctx.r11.u32);
	// blt cr6,0x8376b3e8
	if (cr6.lt) goto loc_8376B3E8;
	// b 0x8376b640
	goto loc_8376B640;
loc_8376B518:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8306a888
	ctx.lr = 0x8376B530;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b55c
	if (cr6.eq) goto loc_8376B55C;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b55c
	if (cr6.eq) goto loc_8376B55C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bctrl 
	ctx.lr = 0x8376B55C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376B55C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376b628
	if (cr6.eq) goto loc_8376B628;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// sth r18,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r18.u16);
	// ld r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8376B584;
	sub_8311BF98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1332
	ctx.r3.s64 = ctx.r1.s64 + 1332;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// rlwinm r29,r10,29,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// bl 0x831cdcf0
	ctx.lr = 0x8376B5A0;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x831cdcf0
	ctx.lr = 0x8376B5B0;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x8376B5C0;
	sub_8306EEB0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x83070638
	ctx.lr = 0x8376B5D4;
	sub_83070638(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376b618
	if (cr6.eq) goto loc_8376B618;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376b618
	if (cr6.eq) goto loc_8376B618;
	// lwz r9,188(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376b618
	if (cr6.lt) goto loc_8376B618;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376b618
	if (cr6.gt) goto loc_8376B618;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bctrl 
	ctx.lr = 0x8376B618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376B618:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8306ed00
	ctx.lr = 0x8376B628;
	sub_8306ED00(ctx, base);
loc_8376B628:
	// lwz r11,452(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 452);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// stw r11,452(r19)
	PPC_STORE_U32(ctx.r19.u32 + 452, ctx.r11.u32);
	// blt cr6,0x8376b518
	if (cr6.lt) goto loc_8376B518;
loc_8376B640:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,1312
	ctx.r24.s64 = ctx.r24.s64 + 1312;
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, xer);
	// blt cr6,0x8376b25c
	if (cr6.lt) goto loc_8376B25C;
	// lwz r20,2900(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2900);
loc_8376B654:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// bne cr6,0x8376b6cc
	if (!cr6.eq) goto loc_8376B6CC;
	// bl 0x830ff290
	ctx.lr = 0x8376B660;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b6c0
	if (cr6.eq) goto loc_8376B6C0;
	// bl 0x830ff290
	ctx.lr = 0x8376B66C;
	sub_830FF290(ctx, base);
	// lbz r11,65(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376b6c0
	if (cr6.eq) goto loc_8376B6C0;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x8376b690
	if (cr6.eq) goto loc_8376B690;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825952b8
	ctx.lr = 0x8376B690;
	sub_825952B8(ctx, base);
loc_8376B690:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376B69C:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x8376b6b4
	if (cr6.eq) goto loc_8376B6B4;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x825952b8
	ctx.lr = 0x8376B6B4;
	sub_825952B8(ctx, base);
loc_8376B6B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376B6C0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837760f8
	ctx.lr = 0x8376B6CC;
	sub_837760F8(ctx, base);
loc_8376B6CC:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x8376b6e4
	if (cr6.eq) goto loc_8376B6E4;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825952b8
	ctx.lr = 0x8376B6E4;
	sub_825952B8(ctx, base);
loc_8376B6E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376B6F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2864
	ctx.r1.s64 = ctx.r1.s64 + 2864;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376B6FC"))) PPC_WEAK_FUNC(sub_8376B6FC);
PPC_FUNC_IMPL(__imp__sub_8376B6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376B700"))) PPC_WEAK_FUNC(sub_8376B700);
PPC_FUNC_IMPL(__imp__sub_8376B700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8376B708;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,3
	ctx.r25.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r27,-21400(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21400);
	// beq cr6,0x8376b828
	if (cr6.eq) goto loc_8376B828;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x8376b828
	if (!cr6.eq) goto loc_8376B828;
	// lwz r29,72(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8376b810
	if (cr6.eq) goto loc_8376B810;
	// li r23,43
	ctx.r23.s64 = 43;
	// lis r4,80
	ctx.r4.s64 = 5242880;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// ori r4,r4,23304
	ctx.r4.u64 = ctx.r4.u64 | 23304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8376B75C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b810
	if (cr6.eq) goto loc_8376B810;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-13096
	ctx.r10.s64 = ctx.r11.s64 + -13096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x83767b20
	ctx.lr = 0x8376B780;
	sub_83767B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837659c8
	ctx.lr = 0x8376B788;
	sub_837659C8(ctx, base);
	// lis r9,80
	ctx.r9.s64 = 5242880;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// ori r29,r9,23300
	ctx.r29.u64 = ctx.r9.u64 | 23300;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d0080
	ctx.lr = 0x8376B7A8;
	sub_831D0080(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// bl 0x8376a778
	ctx.lr = 0x8376B7B8;
	sub_8376A778(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8376b7e0
	if (cr6.eq) goto loc_8376B7E0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d0080
	ctx.lr = 0x8376B7D8;
	sub_831D0080(ctx, base);
	// li r25,4
	ctx.r25.s64 = 4;
	// li r24,0
	ctx.r24.s64 = 0;
loc_8376B7E0:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8376B7F0;
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
	ctx.lr = 0x8376B808;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8376B810;
	sub_82595170(ctx, base);
loc_8376B810:
	// li r11,1
	ctx.r11.s64 = 1;
	// std r25,272(r27)
	PPC_STORE_U64(ctx.r27.u32 + 272, ctx.r25.u64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,250(r27)
	PPC_STORE_U8(ctx.r27.u32 + 250, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8376B828:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376B834"))) PPC_WEAK_FUNC(sub_8376B834);
PPC_FUNC_IMPL(__imp__sub_8376B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376B838"))) PPC_WEAK_FUNC(sub_8376B838);
PPC_FUNC_IMPL(__imp__sub_8376B838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,21944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21944);
	// b 0x83089f30
	sub_83089F30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376B848"))) PPC_WEAK_FUNC(sub_8376B848);
PPC_FUNC_IMPL(__imp__sub_8376B848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8376B850;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// bl 0x83763ef8
	ctx.lr = 0x8376B85C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376b870
	if (!cr6.eq) goto loc_8376B870;
loc_8376B864:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8376B870:
	// bl 0x83763ef8
	ctx.lr = 0x8376B874;
	sub_83763EF8(ctx, base);
	// bl 0x83765608
	ctx.lr = 0x8376B878;
	sub_83765608(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376b8ac
	if (cr6.eq) goto loc_8376B8AC;
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8376B88C:
	// bl 0x83763ef8
	ctx.lr = 0x8376B890;
	sub_83763EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83765670
	ctx.lr = 0x8376B898;
	sub_83765670(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x8376b864
	if (cr6.eq) goto loc_8376B864;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x8376b88c
	if (cr6.lt) goto loc_8376B88C;
loc_8376B8AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376B8B8"))) PPC_WEAK_FUNC(sub_8376B8B8);
PPC_FUNC_IMPL(__imp__sub_8376B8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-11936
	ctx.r11.s64 = ctx.r11.s64 + -11936;
loc_8376B8C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// beq cr6,0x8376b8e8
	if (cr6.eq) goto loc_8376B8E8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x8376b8c4
	if (cr6.lt) goto loc_8376B8C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8376B8E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376B8F0"))) PPC_WEAK_FUNC(sub_8376B8F0);
PPC_FUNC_IMPL(__imp__sub_8376B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12168
	ctx.r11.s64 = ctx.r11.s64 + -12168;
loc_8376B8FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x8376b920
	if (cr6.eq) goto loc_8376B920;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,160
	cr6.compare<uint32_t>(ctx.r10.u32, 160, xer);
	// blt cr6,0x8376b8fc
	if (cr6.lt) goto loc_8376B8FC;
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_8376B920:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376B928"))) PPC_WEAK_FUNC(sub_8376B928);
PPC_FUNC_IMPL(__imp__sub_8376B928) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311c6e8
	ctx.lr = 0x8376B944;
	sub_8311C6E8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8378cba8
	ctx.lr = 0x8376B94C;
	sub_8378CBA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8378cd88
	ctx.lr = 0x8376B954;
	sub_8378CD88(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
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

__attribute__((alias("__imp__sub_8376B96C"))) PPC_WEAK_FUNC(sub_8376B96C);
PPC_FUNC_IMPL(__imp__sub_8376B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376B970"))) PPC_WEAK_FUNC(sub_8376B970);
PPC_FUNC_IMPL(__imp__sub_8376B970) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311c6e8
	ctx.lr = 0x8376B98C;
	sub_8311C6E8(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8378cba8
	ctx.lr = 0x8376B994;
	sub_8378CBA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8378cdf8
	ctx.lr = 0x8376B99C;
	sub_8378CDF8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
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

__attribute__((alias("__imp__sub_8376B9B4"))) PPC_WEAK_FUNC(sub_8376B9B4);
PPC_FUNC_IMPL(__imp__sub_8376B9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376B9B8"))) PPC_WEAK_FUNC(sub_8376B9B8);
PPC_FUNC_IMPL(__imp__sub_8376B9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r3,30644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30644);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376B9C4"))) PPC_WEAK_FUNC(sub_8376B9C4);
PPC_FUNC_IMPL(__imp__sub_8376B9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376B9C8"))) PPC_WEAK_FUNC(sub_8376B9C8);
PPC_FUNC_IMPL(__imp__sub_8376B9C8) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314e0e0
	ctx.lr = 0x8376B9EC;
	sub_8314E0E0(ctx, base);
	// cmpwi cr6,r3,69
	cr6.compare<int32_t>(ctx.r3.s32, 69, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// cmpwi cr6,r3,72
	cr6.compare<int32_t>(ctx.r3.s32, 72, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// clrlwi r11,r31,14
	ctx.r11.u64 = ctx.r31.u32 & 0x3FFFF;
	// cmplwi cr6,r11,140
	cr6.compare<uint32_t>(ctx.r11.u32, 140, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// cmplwi cr6,r11,1416
	cr6.compare<uint32_t>(ctx.r11.u32, 1416, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// cmplwi cr6,r11,2469
	cr6.compare<uint32_t>(ctx.r11.u32, 2469, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// cmplwi cr6,r11,2696
	cr6.compare<uint32_t>(ctx.r11.u32, 2696, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// cmplwi cr6,r11,1386
	cr6.compare<uint32_t>(ctx.r11.u32, 1386, xer);
	// beq cr6,0x8376ba44
	if (cr6.eq) goto loc_8376BA44;
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,-1
	ctx.r9.s64 = -1;
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// subfc r11,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8376ba48
	goto loc_8376BA48;
loc_8376BA44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8376BA48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376BA60"))) PPC_WEAK_FUNC(sub_8376BA60);
PPC_FUNC_IMPL(__imp__sub_8376BA60) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a68858
	ctx.lr = 0x8376BA84;
	sub_82A68858(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// bge cr6,0x8376bab8
	if (!cr6.lt) goto loc_8376BAB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a687b8
	ctx.lr = 0x8376BAA8;
	sub_82A687B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376babc
	if (!cr6.eq) goto loc_8376BABC;
loc_8376BAB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8376BABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376BAD4"))) PPC_WEAK_FUNC(sub_8376BAD4);
PPC_FUNC_IMPL(__imp__sub_8376BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376BAD8"))) PPC_WEAK_FUNC(sub_8376BAD8);
PPC_FUNC_IMPL(__imp__sub_8376BAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8376BAE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r25,30588(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// bl 0x83763ef8
	ctx.lr = 0x8376BAF8;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376bba4
	if (cr6.eq) goto loc_8376BBA4;
	// lwz r30,72(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8376bba4
	if (cr6.eq) goto loc_8376BBA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376BB20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376BB38;
	sub_8306E2A0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x8376bba4
	if (cr6.eq) goto loc_8376BBA4;
	// lwz r26,188(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_8376BB50:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a70db0
	ctx.lr = 0x8376BB64;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376bb7c
	if (cr6.eq) goto loc_8376BB7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x8376bb9c
	if (cr6.eq) goto loc_8376BB9C;
loc_8376BB7C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,480
	ctx.r31.s64 = ctx.r31.s64 + 480;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8376bb50
	if (cr6.lt) goto loc_8376BB50;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8376BB9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r25,r11,14
	ctx.r25.u64 = ctx.r11.u32 & 0x3FFFF;
loc_8376BBA4:
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376BBB4"))) PPC_WEAK_FUNC(sub_8376BBB4);
PPC_FUNC_IMPL(__imp__sub_8376BBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376BBB8"))) PPC_WEAK_FUNC(sub_8376BBB8);
PPC_FUNC_IMPL(__imp__sub_8376BBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8376BBC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-12168
	ctx.r11.s64 = ctx.r11.s64 + -12168;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8376BBD8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8376bc6c
	if (cr6.eq) goto loc_8376BC6C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,160
	cr6.compare<uint32_t>(ctx.r10.u32, 160, xer);
	// blt cr6,0x8376bbd8
	if (cr6.lt) goto loc_8376BBD8;
	// li r29,23
	ctx.r29.s64 = 23;
loc_8376BBF8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a9cb98
	ctx.lr = 0x8376BC04;
	sub_82A9CB98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376bc60
	if (cr6.eq) goto loc_8376BC60;
	// lis r26,-31770
	ctx.r26.s64 = -2082078720;
loc_8376BC1C:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a9bb08
	ctx.lr = 0x8376BC34;
	sub_82A9BB08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376bc60
	if (cr6.eq) goto loc_8376BC60;
	// lwz r10,30588(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 30588);
	// clrlwi r10,r10,14
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376bc60
	if (cr6.eq) goto loc_8376BC60;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x8376bc1c
	if (cr6.lt) goto loc_8376BC1C;
loc_8376BC60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8376BC6C:
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8376bbf8
	goto loc_8376BBF8;
}

__attribute__((alias("__imp__sub_8376BC74"))) PPC_WEAK_FUNC(sub_8376BC74);
PPC_FUNC_IMPL(__imp__sub_8376BC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376BC78"))) PPC_WEAK_FUNC(sub_8376BC78);
PPC_FUNC_IMPL(__imp__sub_8376BC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8376BC80;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// std r4,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r4.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376BC94;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376bdb4
	if (cr6.eq) goto loc_8376BDB4;
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8376bdb4
	if (cr6.eq) goto loc_8376BDB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376BCBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376bdb4
	if (cr6.eq) goto loc_8376BDB4;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376BCDC;
	sub_8306E2A0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// beq cr6,0x8376bdb4
	if (cr6.eq) goto loc_8376BDB4;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r26,220(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// clrlwi r20,r29,24
	ctx.r20.u64 = ctx.r29.u32 & 0xFF;
	// li r21,-1
	ctx.r21.s64 = -1;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_8376BD04:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8306c9d8
	ctx.lr = 0x8376BD18;
	sub_8306C9D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// clrlwi r27,r11,14
	ctx.r27.u64 = ctx.r11.u32 & 0x3FFFF;
	// ble cr6,0x8376bd2c
	if (!cr6.gt) goto loc_8376BD2C;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_8376BD2C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x8376bd4c
	if (cr6.eq) goto loc_8376BD4C;
	// bl 0x8319fea0
	ctx.lr = 0x8376BD3C;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376bda4
	if (cr6.eq) goto loc_8376BDA4;
	// b 0x8376bd5c
	goto loc_8376BD5C;
loc_8376BD4C:
	// bl 0x8319fea0
	ctx.lr = 0x8376BD50;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376bda4
	if (!cr6.eq) goto loc_8376BDA4;
loc_8376BD5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a68958
	ctx.lr = 0x8376BD64;
	sub_82A68958(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376bda4
	if (cr6.eq) goto loc_8376BDA4;
loc_8376BD74:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a687b8
	ctx.lr = 0x8376BD8C;
	sub_82A687B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x8376bdcc
	if (cr6.eq) goto loc_8376BDCC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x8376bd74
	if (cr6.lt) goto loc_8376BD74;
loc_8376BDA4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,164
	ctx.r30.s64 = ctx.r30.s64 + 164;
	// cmplw cr6,r24,r23
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, xer);
	// blt cr6,0x8376bd04
	if (cr6.lt) goto loc_8376BD04;
loc_8376BDB4:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,30588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8376BDCC:
	// stw r27,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r27.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376BDDC"))) PPC_WEAK_FUNC(sub_8376BDDC);
PPC_FUNC_IMPL(__imp__sub_8376BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376BDE0"))) PPC_WEAK_FUNC(sub_8376BDE0);
PPC_FUNC_IMPL(__imp__sub_8376BDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8376BDE8;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// beq cr6,0x8376c288
	if (cr6.eq) goto loc_8376C288;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
	// addi r25,r11,30540
	ctx.r25.s64 = ctx.r11.s64 + 30540;
loc_8376BE10:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376BE20;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376be34
	if (cr6.eq) goto loc_8376BE34;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x8376be54
	goto loc_8376BE54;
loc_8376BE34:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x8376BE44;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376be78
	if (cr6.eq) goto loc_8376BE78;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8376BE54:
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376be78
	if (!cr6.lt) goto loc_8376BE78;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376be78
	if (cr6.eq) goto loc_8376BE78;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x8376be88
	goto loc_8376BE88;
loc_8376BE78:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
loc_8376BE88:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376BE98;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376beac
	if (cr6.eq) goto loc_8376BEAC;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x8376becc
	goto loc_8376BECC;
loc_8376BEAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x8376BEBC;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376beec
	if (cr6.eq) goto loc_8376BEEC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8376BECC:
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376beec
	if (!cr6.lt) goto loc_8376BEEC;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a687b8
	ctx.lr = 0x8376BEEC;
	sub_82A687B8(ctx, base);
loc_8376BEEC:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376bf04
	if (!cr6.eq) goto loc_8376BF04;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8376bf28
	goto loc_8376BF28;
loc_8376BF04:
	// lhz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8376bf20
	if (!cr6.eq) goto loc_8376BF20;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376bf24
	if (cr6.eq) goto loc_8376BF24;
loc_8376BF20:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376BF24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8376BF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c278
	if (cr6.eq) goto loc_8376C278;
	// addi r28,r21,-1
	ctx.r28.s64 = ctx.r21.s64 + -1;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, xer);
	// ble cr6,0x8376c278
	if (!cr6.gt) goto loc_8376C278;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_8376BF4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376BF5C;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376bf70
	if (cr6.eq) goto loc_8376BF70;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x8376bf90
	goto loc_8376BF90;
loc_8376BF70:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x8376BF80;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376bfb4
	if (cr6.eq) goto loc_8376BFB4;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8376BF90:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376bfb4
	if (!cr6.lt) goto loc_8376BFB4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376bfb4
	if (cr6.eq) goto loc_8376BFB4;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x8376bfc4
	goto loc_8376BFC4;
loc_8376BFB4:
	// ld r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8376BFC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376BFD4;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376bfe8
	if (cr6.eq) goto loc_8376BFE8;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x8376c008
	goto loc_8376C008;
loc_8376BFE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83572958
	ctx.lr = 0x8376BFF8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c094
	if (cr6.eq) goto loc_8376C094;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8376C008:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376c094
	if (!cr6.lt) goto loc_8376C094;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376C028;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c080
	if (cr6.eq) goto loc_8376C080;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c080
	if (cr6.eq) goto loc_8376C080;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8376C054;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c080
	if (cr6.eq) goto loc_8376C080;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8376c080
	if (cr6.lt) goto loc_8376C080;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8376c084
	if (!cr6.gt) goto loc_8376C084;
loc_8376C080:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376C084:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376c098
	if (!cr6.eq) goto loc_8376C098;
loc_8376C094:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8376C098:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376c0b0
	if (!cr6.eq) goto loc_8376C0B0;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8376c0d4
	goto loc_8376C0D4;
loc_8376C0B0:
	// lhz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8376c0cc
	if (!cr6.eq) goto loc_8376C0CC;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376c0d0
	if (cr6.eq) goto loc_8376C0D0;
loc_8376C0CC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376C0D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8376C0D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c0f4
	if (cr6.eq) goto loc_8376C0F4;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, xer);
	// bgt cr6,0x8376bf4c
	if (cr6.gt) goto loc_8376BF4C;
	// b 0x8376c278
	goto loc_8376C278;
loc_8376C0F4:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376C10C;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c154
	if (cr6.eq) goto loc_8376C154;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376c154
	if (cr6.eq) goto loc_8376C154;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376c154
	if (cr6.lt) goto loc_8376C154;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376c154
	if (cr6.gt) goto loc_8376C154;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8376C154;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376C154:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376C16C;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c1b4
	if (cr6.eq) goto loc_8376C1B4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376c1b4
	if (cr6.eq) goto loc_8376C1B4;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376c1b4
	if (cr6.lt) goto loc_8376C1B4;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376c1b4
	if (cr6.gt) goto loc_8376C1B4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8376C1B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376C1B4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8306a888
	ctx.lr = 0x8376C1D0;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c218
	if (cr6.eq) goto loc_8376C218;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376c218
	if (cr6.eq) goto loc_8376C218;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376c218
	if (cr6.lt) goto loc_8376C218;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376c218
	if (cr6.gt) goto loc_8376C218;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8376C218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376C218:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376C230;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c278
	if (cr6.eq) goto loc_8376C278;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376c278
	if (cr6.eq) goto loc_8376C278;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376c278
	if (cr6.lt) goto loc_8376C278;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376c278
	if (cr6.gt) goto loc_8376C278;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8376C278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376C278:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x8376be10
	if (cr6.lt) goto loc_8376BE10;
loc_8376C288:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376C290"))) PPC_WEAK_FUNC(sub_8376C290);
PPC_FUNC_IMPL(__imp__sub_8376C290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376C298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8376C2B0:
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a687b8
	ctx.lr = 0x8376C2CC;
	sub_82A687B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x8376c2f0
	if (cr6.eq) goto loc_8376C2F0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8376c2b0
	if (cr6.lt) goto loc_8376C2B0;
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8376C2F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376C2FC"))) PPC_WEAK_FUNC(sub_8376C2FC);
PPC_FUNC_IMPL(__imp__sub_8376C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376C300"))) PPC_WEAK_FUNC(sub_8376C300);
PPC_FUNC_IMPL(__imp__sub_8376C300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8376C308;
	__savegprlr_27(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376C318;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376c530
	if (cr6.eq) goto loc_8376C530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376C32C;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,20
	ctx.r10.s64 = 20;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// li r28,0
	ctx.r28.s64 = 0;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// rlwinm r9,r8,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r27,r9,32
	ctx.r27.s64 = ctx.r9.s64 + 32;
loc_8376C354:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376c354
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376C354;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a7dc90
	ctx.lr = 0x8376C370;
	sub_82A7DC90(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8376c424
	if (cr6.eq) goto loc_8376C424;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8376c410
	if (cr6.eq) goto loc_8376C410;
loc_8376C384:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8306a888
	ctx.lr = 0x8376C394;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c3a8
	if (cr6.eq) goto loc_8376C3A8;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8376c3c8
	goto loc_8376C3C8;
loc_8376C3A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83572958
	ctx.lr = 0x8376C3B8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c3f8
	if (cr6.eq) goto loc_8376C3F8;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_8376C3C8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376c3f8
	if (!cr6.lt) goto loc_8376C3F8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a687b8
	ctx.lr = 0x8376C3E8;
	sub_82A687B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x8376c3fc
	if (!cr6.eq) goto loc_8376C3FC;
loc_8376C3F8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8376C3FC:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x8376c410
	if (cr6.eq) goto loc_8376C410;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x8376c384
	if (cr6.lt) goto loc_8376C384;
loc_8376C410:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x8376c424
	if (!cr6.eq) goto loc_8376C424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8376C424:
	// li r30,12
	ctx.r30.s64 = 12;
loc_8376C428:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8376c51c
	if (cr6.eq) goto loc_8376C51C;
loc_8376C434:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8306a888
	ctx.lr = 0x8376C444;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c458
	if (cr6.eq) goto loc_8376C458;
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// b 0x8376c478
	goto loc_8376C478;
loc_8376C458:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83572958
	ctx.lr = 0x8376C468;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c504
	if (cr6.eq) goto loc_8376C504;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_8376C478:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376c504
	if (!cr6.lt) goto loc_8376C504;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8306a888
	ctx.lr = 0x8376C498;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c4f0
	if (cr6.eq) goto loc_8376C4F0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c4f0
	if (cr6.eq) goto loc_8376C4F0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bctrl 
	ctx.lr = 0x8376C4C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c4f0
	if (cr6.eq) goto loc_8376C4F0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8376c4f0
	if (cr6.lt) goto loc_8376C4F0;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8376c4f4
	if (!cr6.gt) goto loc_8376C4F4;
loc_8376C4F0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8376C4F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x8376c508
	if (!cr6.eq) goto loc_8376C508;
loc_8376C504:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8376C508:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x8376c51c
	if (cr6.eq) goto loc_8376C51C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x8376c434
	if (cr6.lt) goto loc_8376C434;
loc_8376C51C:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x8376c53c
	if (cr6.eq) goto loc_8376C53C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,99
	cr6.compare<uint32_t>(ctx.r30.u32, 99, xer);
	// ble cr6,0x8376c428
	if (!cr6.gt) goto loc_8376C428;
loc_8376C530:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8376C53C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376C548"))) PPC_WEAK_FUNC(sub_8376C548);
PPC_FUNC_IMPL(__imp__sub_8376C548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8376C550;
	__savegprlr_27(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r28,30604(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 30604);
	// std r28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r28.u64);
	// bl 0x83763ef8
	ctx.lr = 0x8376C56C;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376c588
	if (!cr6.eq) goto loc_8376C588;
loc_8376C578:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8376C588:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8376C598;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376c5b0
	if (!cr6.eq) goto loc_8376C5B0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8376c5d0
	goto loc_8376C5D0;
loc_8376C5B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8306e988
	ctx.lr = 0x8376C5BC;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83773c28
	ctx.lr = 0x8376C5D0;
	sub_83773C28(ctx, base);
loc_8376C5D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c578
	if (cr6.eq) goto loc_8376C578;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70db0
	ctx.lr = 0x8376C5F0;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c578
	if (cr6.eq) goto loc_8376C578;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376C61C"))) PPC_WEAK_FUNC(sub_8376C61C);
PPC_FUNC_IMPL(__imp__sub_8376C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376C620"))) PPC_WEAK_FUNC(sub_8376C620);
PPC_FUNC_IMPL(__imp__sub_8376C620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8376C628;
	__savegprlr_21(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// std r4,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r4.u64);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r21,30588(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// bl 0x83763ef8
	ctx.lr = 0x8376C640;
	sub_83763EF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376c748
	if (cr6.eq) goto loc_8376C748;
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8376c748
	if (cr6.eq) goto loc_8376C748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376C66C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376C684;
	sub_8306E2A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8376C698;
	sub_831CDCF0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// beq cr6,0x8376c748
	if (cr6.eq) goto loc_8376C748;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r23,700(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// li r24,-1
	ctx.r24.s64 = -1;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_8376C6B8:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r31,r11,14
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// ble cr6,0x8376c6d4
	if (!cr6.gt) goto loc_8376C6D4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8376C6D4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376C6F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376c724
	if (cr6.eq) goto loc_8376C724;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70db0
	ctx.lr = 0x8376C70C;
	sub_82A70DB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c724
	if (cr6.eq) goto loc_8376C724;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// beq cr6,0x8376c744
	if (cr6.eq) goto loc_8376C744;
loc_8376C724:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,480
	ctx.r30.s64 = ctx.r30.s64 + 480;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x8376c6b8
	if (cr6.lt) goto loc_8376C6B8;
	// stw r21,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_8376C744:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_8376C748:
	// stw r21,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376C758"))) PPC_WEAK_FUNC(sub_8376C758);
PPC_FUNC_IMPL(__imp__sub_8376C758) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376c780
	if (cr6.eq) goto loc_8376C780;
	// bl 0x8376c620
	ctx.lr = 0x8376C77C;
	sub_8376C620(ctx, base);
	// b 0x8376c784
	goto loc_8376C784;
loc_8376C780:
	// bl 0x8376bad8
	ctx.lr = 0x8376C784;
	sub_8376BAD8(ctx, base);
loc_8376C784:
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

__attribute__((alias("__imp__sub_8376C79C"))) PPC_WEAK_FUNC(sub_8376C79C);
PPC_FUNC_IMPL(__imp__sub_8376C79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376C7A0"))) PPC_WEAK_FUNC(sub_8376C7A0);
PPC_FUNC_IMPL(__imp__sub_8376C7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8376C7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,1112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1112, ctx.r4.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376C7BC;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376c7d4
	if (!cr6.eq) goto loc_8376C7D4;
loc_8376C7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8376C7D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8376bad8
	ctx.lr = 0x8376C7E0;
	sub_8376BAD8(ctx, base);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8376C7F0;
	sub_831CDCF0(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376c81c
	if (cr6.eq) goto loc_8376C81C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8306e988
	ctx.lr = 0x8376C808;
	sub_8306E988(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83773c28
	ctx.lr = 0x8376C81C;
	sub_83773C28(ctx, base);
loc_8376C81C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70db0
	ctx.lr = 0x8376C834;
	sub_82A70DB0(ctx, base);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r11,r11,30604
	ctx.r11.s64 = ctx.r11.s64 + 30604;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376c85c
	if (!cr6.eq) goto loc_8376C85C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376c860
	if (cr6.eq) goto loc_8376C860;
loc_8376C85C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376C860:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376c7c8
	if (!cr6.eq) goto loc_8376C7C8;
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r4,1116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a9bc48
	ctx.lr = 0x8376C87C;
	sub_82A9BC48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775270
	ctx.lr = 0x8376C890;
	sub_83775270(ctx, base);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,30588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376c8c0
	if (!cr6.eq) goto loc_8376C8C0;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376c8c4
	if (cr6.eq) goto loc_8376C8C4;
loc_8376C8C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376C8C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376c914
	if (!cr6.eq) goto loc_8376C914;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x831cdcf0
	ctx.lr = 0x8376C8E0;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9ba28
	ctx.lr = 0x8376C8F0;
	sub_82A9BA28(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a9bc48
	ctx.lr = 0x8376C900;
	sub_82A9BC48(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83775270
	ctx.lr = 0x8376C914;
	sub_83775270(ctx, base);
loc_8376C914:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376C920"))) PPC_WEAK_FUNC(sub_8376C920);
PPC_FUNC_IMPL(__imp__sub_8376C920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8376C928;
	__savegprlr_19(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// std r4,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r4.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376C93C;
	sub_83763EF8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ca88
	if (cr6.eq) goto loc_8376CA88;
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8376ca88
	if (cr6.eq) goto loc_8376CA88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376C968;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376C980;
	sub_8306E2A0(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376C998:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376c998
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376C998;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x8376ca88
	if (cr6.eq) goto loc_8376CA88;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r26,412(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// clrlwi r21,r30,24
	ctx.r21.u64 = ctx.r30.u32 & 0xFF;
	// li r22,-1
	ctx.r22.s64 = -1;
	// ori r24,r11,65535
	ctx.r24.u64 = ctx.r11.u64 | 65535;
loc_8376C9C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r29,r11,14
	ctx.r29.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// ble cr6,0x8376c9d8
	if (!cr6.gt) goto loc_8376C9D8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8376C9D8:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8376c9f8
	if (cr6.eq) goto loc_8376C9F8;
	// bl 0x8319fea0
	ctx.lr = 0x8376C9E8;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ca78
	if (cr6.eq) goto loc_8376CA78;
	// b 0x8376ca08
	goto loc_8376CA08;
loc_8376C9F8:
	// bl 0x8319fea0
	ctx.lr = 0x8376C9FC;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ca78
	if (!cr6.eq) goto loc_8376CA78;
loc_8376CA08:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376CA24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376ca78
	if (cr6.eq) goto loc_8376CA78;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a68958
	ctx.lr = 0x8376CA38;
	sub_82A68958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ca78
	if (cr6.eq) goto loc_8376CA78;
loc_8376CA48:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a687b8
	ctx.lr = 0x8376CA60;
	sub_82A687B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// beq cr6,0x8376caa0
	if (cr6.eq) goto loc_8376CAA0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x8376ca48
	if (cr6.lt) goto loc_8376CA48;
loc_8376CA78:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,480
	ctx.r27.s64 = ctx.r27.s64 + 480;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, xer);
	// blt cr6,0x8376c9c4
	if (cr6.lt) goto loc_8376C9C4;
loc_8376CA88:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,30588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// stw r11,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8376CAA0:
	// stw r29,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r29.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376CAB0"))) PPC_WEAK_FUNC(sub_8376CAB0);
PPC_FUNC_IMPL(__imp__sub_8376CAB0) {
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
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cad8
	if (cr6.eq) goto loc_8376CAD8;
	// bl 0x8376c920
	ctx.lr = 0x8376CAD4;
	sub_8376C920(ctx, base);
	// b 0x8376cadc
	goto loc_8376CADC;
loc_8376CAD8:
	// bl 0x8376bc78
	ctx.lr = 0x8376CADC;
	sub_8376BC78(ctx, base);
loc_8376CADC:
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

__attribute__((alias("__imp__sub_8376CAF4"))) PPC_WEAK_FUNC(sub_8376CAF4);
PPC_FUNC_IMPL(__imp__sub_8376CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376CAF8"))) PPC_WEAK_FUNC(sub_8376CAF8);
PPC_FUNC_IMPL(__imp__sub_8376CAF8) {
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
	ctx.lr = 0x8376CB00;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	// std r3,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r3.u64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8376cb28
	if (cr6.eq) goto loc_8376CB28;
	// bl 0x8376c920
	ctx.lr = 0x8376CB24;
	sub_8376C920(ctx, base);
	// b 0x8376cb2c
	goto loc_8376CB2C;
loc_8376CB28:
	// bl 0x8376bc78
	ctx.lr = 0x8376CB2C;
	sub_8376BC78(ctx, base);
loc_8376CB2C:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,30588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376cb5c
	if (!cr6.eq) goto loc_8376CB5C;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376cb60
	if (cr6.eq) goto loc_8376CB60;
loc_8376CB5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376CB60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376cd38
	if (!cr6.eq) goto loc_8376CD38;
	// bl 0x83763ef8
	ctx.lr = 0x8376CB70;
	sub_83763EF8(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376CB80:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376cb80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376CB80;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// beq cr6,0x8376cbb0
	if (cr6.eq) goto loc_8376CBB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376CBAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8376cbb4
	goto loc_8376CBB4;
loc_8376CBB0:
	// bl 0x82a7dc90
	ctx.lr = 0x8376CBB4;
	sub_82A7DC90(ctx, base);
loc_8376CBB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376CBBC;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addic. r28,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r28.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8376cd38
	if (cr0.eq) goto loc_8376CD38;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r27,420(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lhz r26,416(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 416);
	// addi r29,r1,180
	ctx.r29.s64 = ctx.r1.s64 + 180;
	// addi r31,r11,30540
	ctx.r31.s64 = ctx.r11.s64 + 30540;
loc_8376CBEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8306a888
	ctx.lr = 0x8376CBFC;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cc10
	if (cr6.eq) goto loc_8376CC10;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x8376cc30
	goto loc_8376CC30;
loc_8376CC10:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83572958
	ctx.lr = 0x8376CC20;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cc50
	if (cr6.eq) goto loc_8376CC50;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8376CC30:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376cc50
	if (!cr6.lt) goto loc_8376CC50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376cc50
	if (cr6.eq) goto loc_8376CC50;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8376cc60
	goto loc_8376CC60;
loc_8376CC50:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_8376CC60:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8376cc74
	if (!cr6.eq) goto loc_8376CC74;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8376cc98
	goto loc_8376CC98;
loc_8376CC74:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8376cc90
	if (!cr6.eq) goto loc_8376CC90;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376cc94
	if (cr6.eq) goto loc_8376CC94;
loc_8376CC90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376CC94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8376CC98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ccc0
	if (!cr6.eq) goto loc_8376CCC0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x8376cbec
	if (cr6.lt) goto loc_8376CBEC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8376CCC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8306a888
	ctx.lr = 0x8376CCD0;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cce4
	if (cr6.eq) goto loc_8376CCE4;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x8376cd04
	goto loc_8376CD04;
loc_8376CCE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83572958
	ctx.lr = 0x8376CCF4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cd38
	if (cr6.eq) goto loc_8376CD38;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8376CD04:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376cd38
	if (!cr6.lt) goto loc_8376CD38;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a687b8
	ctx.lr = 0x8376CD28;
	sub_82A687B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376cd3c
	if (!cr6.eq) goto loc_8376CD3C;
loc_8376CD38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8376CD3C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376CD44"))) PPC_WEAK_FUNC(sub_8376CD44);
PPC_FUNC_IMPL(__imp__sub_8376CD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376CD48"))) PPC_WEAK_FUNC(sub_8376CD48);
PPC_FUNC_IMPL(__imp__sub_8376CD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376CD50;
	__savegprlr_28(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8376CD60;
	sub_831156E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ce64
	if (cr6.eq) goto loc_8376CE64;
	// bl 0x83763ef8
	ctx.lr = 0x8376CD70;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ce64
	if (cr6.eq) goto loc_8376CE64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319ff60
	ctx.lr = 0x8376CD84;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ce64
	if (cr6.eq) goto loc_8376CE64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376CD98;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ce64
	if (!cr6.eq) goto loc_8376CE64;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8376CDB4;
	sub_831CDCF0(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8376cdf4
	if (cr6.eq) goto loc_8376CDF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376CDDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376ce08
	if (!cr6.eq) goto loc_8376CE08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8376CDF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a9ba28
	ctx.lr = 0x8376CDFC;
	sub_82A9BA28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ce64
	if (cr6.eq) goto loc_8376CE64;
loc_8376CE08:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70db0
	ctx.lr = 0x8376CE20;
	sub_82A70DB0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c448
	ctx.lr = 0x8376CE30;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ce64
	if (cr6.eq) goto loc_8376CE64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83124aa8
	ctx.lr = 0x8376CE48;
	sub_83124AA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ce64
	if (cr6.eq) goto loc_8376CE64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ce68
	if (cr6.eq) goto loc_8376CE68;
loc_8376CE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8376CE68:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376CE70"))) PPC_WEAK_FUNC(sub_8376CE70);
PPC_FUNC_IMPL(__imp__sub_8376CE70) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376CE88;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376cea4
	if (!cr6.eq) goto loc_8376CEA4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8376CEA4:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376CEB4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376ceb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376CEB4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa6118
	ctx.lr = 0x8376CEC8;
	sub_82AA6118(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376ceec
	if (!cr6.eq) goto loc_8376CEEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8376CEEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82aa8dc8
	ctx.lr = 0x8376CF04;
	sub_82AA8DC8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376CF24"))) PPC_WEAK_FUNC(sub_8376CF24);
PPC_FUNC_IMPL(__imp__sub_8376CF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376CF28"))) PPC_WEAK_FUNC(sub_8376CF28);
PPC_FUNC_IMPL(__imp__sub_8376CF28) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r3,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r3.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83763ef8
	ctx.lr = 0x8376CF4C;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376cfd8
	if (cr6.eq) goto loc_8376CFD8;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376CF64:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376cf64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376CF64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83777e50
	ctx.lr = 0x8376CF78;
	sub_83777E50(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a76558
	ctx.lr = 0x8376CF8C;
	sub_82A76558(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a76558
	ctx.lr = 0x8376CFA0;
	sub_82A76558(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x837b7300
	ctx.lr = 0x8376CFAC;
	sub_837B7300(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376cfc4
	if (!cr6.eq) goto loc_8376CFC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cfd0
	if (cr6.eq) goto loc_8376CFD0;
loc_8376CFC4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376cfd4
	if (cr6.eq) goto loc_8376CFD4;
loc_8376CFD0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8376CFD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8376CFD8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376CFF0"))) PPC_WEAK_FUNC(sub_8376CFF0);
PPC_FUNC_IMPL(__imp__sub_8376CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376CFF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376D004;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d190
	if (cr6.eq) goto loc_8376D190;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376D024:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D024;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777e50
	ctx.lr = 0x8376D03C;
	sub_83777E50(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376D04C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d04c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D04C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8373fae8
	ctx.lr = 0x8376D060;
	sub_8373FAE8(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82429688
	ctx.lr = 0x8376D068;
	sub_82429688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d0b4
	if (cr6.eq) goto loc_8376D0B4;
loc_8376D070:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c778
	ctx.lr = 0x8376D07C;
	sub_8377C778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a76558
	ctx.lr = 0x8376D08C;
	sub_82A76558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c778
	ctx.lr = 0x8376D094;
	sub_8377C778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8376D0A4;
	sub_825A10C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82429688
	ctx.lr = 0x8376D0AC;
	sub_82429688(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8376d070
	if (cr6.lt) goto loc_8376D070;
loc_8376D0B4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x8377c758
	ctx.lr = 0x8376D0BC;
	sub_8377C758(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d17c
	if (cr6.eq) goto loc_8376D17C;
loc_8376D0C4:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c760
	ctx.lr = 0x8376D0D0;
	sub_8377C760(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8373f5f8
	ctx.lr = 0x8376D0E0;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d108
	if (cr6.eq) goto loc_8376D108;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d108
	if (cr6.eq) goto loc_8376D108;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bctrl 
	ctx.lr = 0x8376D108;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376D108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c760
	ctx.lr = 0x8376D110;
	sub_8377C760(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x8376D128;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376d16c
	if (cr6.eq) goto loc_8376D16C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376d16c
	if (cr6.eq) goto loc_8376D16C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8376d16c
	if (cr6.lt) goto loc_8376D16C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376d16c
	if (cr6.gt) goto loc_8376D16C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bctrl 
	ctx.lr = 0x8376D16C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376D16C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8377c758
	ctx.lr = 0x8376D174;
	sub_8377C758(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8376d0c4
	if (cr6.lt) goto loc_8376D0C4;
loc_8376D17C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777d88
	ctx.lr = 0x8376D190;
	sub_83777D88(ctx, base);
loc_8376D190:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376D198"))) PPC_WEAK_FUNC(sub_8376D198);
PPC_FUNC_IMPL(__imp__sub_8376D198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376D1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r3,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376D1B4;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d2cc
	if (cr6.eq) goto loc_8376D2CC;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376D1D4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d1d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D1D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777e50
	ctx.lr = 0x8376D1EC;
	sub_83777E50(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376D1FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d1fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D1FC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d238
	if (cr6.eq) goto loc_8376D238;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x837b7300
	ctx.lr = 0x8376D21C;
	sub_837B7300(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d238
	if (cr6.eq) goto loc_8376D238;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8373fae8
	ctx.lr = 0x8376D234;
	sub_8373FAE8(ctx, base);
	// b 0x8376d264
	goto loc_8376D264;
loc_8376D238:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376D254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a10c0
	ctx.lr = 0x8376D264;
	sub_825A10C0(ctx, base);
loc_8376D264:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x8377c758
	ctx.lr = 0x8376D26C;
	sub_8377C758(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d2b8
	if (cr6.eq) goto loc_8376D2B8;
loc_8376D274:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c760
	ctx.lr = 0x8376D280;
	sub_8377C760(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a76558
	ctx.lr = 0x8376D290;
	sub_82A76558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c760
	ctx.lr = 0x8376D298;
	sub_8377C760(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8376D2A8;
	sub_825A10C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8377c758
	ctx.lr = 0x8376D2B0;
	sub_8377C758(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8376d274
	if (cr6.lt) goto loc_8376D274;
loc_8376D2B8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777d88
	ctx.lr = 0x8376D2CC;
	sub_83777D88(ctx, base);
loc_8376D2CC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376D2D4"))) PPC_WEAK_FUNC(sub_8376D2D4);
PPC_FUNC_IMPL(__imp__sub_8376D2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376D2D8"))) PPC_WEAK_FUNC(sub_8376D2D8);
PPC_FUNC_IMPL(__imp__sub_8376D2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376D2E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r3,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376D2F4;
	sub_83763EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d40c
	if (cr6.eq) goto loc_8376D40C;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376D314:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d314
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D314;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777e50
	ctx.lr = 0x8376D32C;
	sub_83777E50(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376D33C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d33c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D33C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d378
	if (cr6.eq) goto loc_8376D378;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x837b7300
	ctx.lr = 0x8376D35C;
	sub_837B7300(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d378
	if (cr6.eq) goto loc_8376D378;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8373fae8
	ctx.lr = 0x8376D374;
	sub_8373FAE8(ctx, base);
	// b 0x8376d3a4
	goto loc_8376D3A4;
loc_8376D378:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376D394;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a10c0
	ctx.lr = 0x8376D3A4;
	sub_825A10C0(ctx, base);
loc_8376D3A4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82429688
	ctx.lr = 0x8376D3AC;
	sub_82429688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d3f8
	if (cr6.eq) goto loc_8376D3F8;
loc_8376D3B4:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c778
	ctx.lr = 0x8376D3C0;
	sub_8377C778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a76558
	ctx.lr = 0x8376D3D0;
	sub_82A76558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377c778
	ctx.lr = 0x8376D3D8;
	sub_8377C778(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a10c0
	ctx.lr = 0x8376D3E8;
	sub_825A10C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82429688
	ctx.lr = 0x8376D3F0;
	sub_82429688(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x8376d3b4
	if (cr6.lt) goto loc_8376D3B4;
loc_8376D3F8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83777d88
	ctx.lr = 0x8376D40C;
	sub_83777D88(ctx, base);
loc_8376D40C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376D414"))) PPC_WEAK_FUNC(sub_8376D414);
PPC_FUNC_IMPL(__imp__sub_8376D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376D418"))) PPC_WEAK_FUNC(sub_8376D418);
PPC_FUNC_IMPL(__imp__sub_8376D418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8376D420;
	__savegprlr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r4.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376D434;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376d44c
	if (!cr6.eq) goto loc_8376D44C;
loc_8376D440:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8376D44C:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r10,524(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// addi r28,r11,30540
	ctx.r28.s64 = ctx.r11.s64 + 30540;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8376d440
	if (cr6.eq) goto loc_8376D440;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r11,30588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// xor r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376d490
	if (!cr6.eq) goto loc_8376D490;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376d494
	if (cr6.eq) goto loc_8376D494;
loc_8376D490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376D494:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376d440
	if (!cr6.eq) goto loc_8376D440;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376D4B0:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d4b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D4B0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a7dc90
	ctx.lr = 0x8376D4CC;
	sub_82A7DC90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8376c290
	ctx.lr = 0x8376D4D8;
	sub_8376C290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a68958
	ctx.lr = 0x8376D4E4;
	sub_82A68958(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// ble cr6,0x8376d440
	if (!cr6.gt) goto loc_8376D440;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7de40
	ctx.lr = 0x8376D500;
	sub_82A7DE40(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7de40
	ctx.lr = 0x8376D514;
	sub_82A7DE40(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8376bde0
	ctx.lr = 0x8376D520;
	sub_8376BDE0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a7df70
	ctx.lr = 0x8376D534;
	sub_82A7DF70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83767360
	ctx.lr = 0x8376D540;
	sub_83767360(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376D548;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376d5b4
	if (!cr6.eq) goto loc_8376D5B4;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x831cdcf0
	ctx.lr = 0x8376D564;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831cdcf0
	ctx.lr = 0x8376D574;
	sub_831CDCF0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83775138
	ctx.lr = 0x8376D584;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d440
	if (cr6.eq) goto loc_8376D440;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a78580
	ctx.lr = 0x8376D5A0;
	sub_82A78580(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83777d30
	ctx.lr = 0x8376D5B4;
	sub_83777D30(ctx, base);
loc_8376D5B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376D5C0"))) PPC_WEAK_FUNC(sub_8376D5C0);
PPC_FUNC_IMPL(__imp__sub_8376D5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8376D5C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,536(r1)
	PPC_STORE_U64(ctx.r1.u32 + 536, ctx.r4.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376D5DC;
	sub_83763EF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376d5f4
	if (!cr6.eq) goto loc_8376D5F4;
loc_8376D5E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8376D5F4:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r25,540(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// addi r31,r11,30540
	ctx.r31.s64 = ctx.r11.s64 + 30540;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// beq cr6,0x8376d5e8
	if (cr6.eq) goto loc_8376D5E8;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376D61C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8376d61c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376D61C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a7dc90
	ctx.lr = 0x8376D638;
	sub_82A7DC90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d5e8
	if (cr6.eq) goto loc_8376D5E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376D64C;
	sub_8319FEA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8376caf8
	ctx.lr = 0x8376D660;
	sub_8376CAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8376c300
	ctx.lr = 0x8376D66C;
	sub_8376C300(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8376c290
	ctx.lr = 0x8376D67C;
	sub_8376C290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bge cr6,0x8376d5e8
	if (!cr6.lt) goto loc_8376D5E8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7de40
	ctx.lr = 0x8376D69C;
	sub_82A7DE40(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a7de40
	ctx.lr = 0x8376D6B0;
	sub_82A7DE40(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a7df70
	ctx.lr = 0x8376D6C4;
	sub_82A7DF70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83767360
	ctx.lr = 0x8376D6D0;
	sub_83767360(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376d73c
	if (!cr6.eq) goto loc_8376D73C;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// bl 0x831cdcf0
	ctx.lr = 0x8376D6EC;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831cdcf0
	ctx.lr = 0x8376D6FC;
	sub_831CDCF0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83775138
	ctx.lr = 0x8376D70C;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d5e8
	if (cr6.eq) goto loc_8376D5E8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a78580
	ctx.lr = 0x8376D728;
	sub_82A78580(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83777d30
	ctx.lr = 0x8376D73C;
	sub_83777D30(ctx, base);
loc_8376D73C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376D748"))) PPC_WEAK_FUNC(sub_8376D748);
PPC_FUNC_IMPL(__imp__sub_8376D748) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376D764;
	sub_83763EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376d7d8
	if (cr6.eq) goto loc_8376D7D8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x8376D780;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x8376D790;
	sub_831CDCF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83775138
	ctx.lr = 0x8376D7A0;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376d7b4
	if (!cr6.eq) goto loc_8376D7B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8376d7d8
	goto loc_8376D7D8;
loc_8376D7B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x8376D7CC;
	sub_82A72110(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8376D7D8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376D7F0"))) PPC_WEAK_FUNC(sub_8376D7F0);
PPC_FUNC_IMPL(__imp__sub_8376D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8376D7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// clrlwi r31,r3,14
	ctx.r31.u64 = ctx.r3.u32 & 0x3FFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,30588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30588);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376d848
	if (!cr6.eq) goto loc_8376D848;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-12196
	ctx.r11.s64 = ctx.r11.s64 + -12196;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-645
	ctx.r4.s64 = ctx.r11.s64 + -645;
	// bl 0x8259cc28
	ctx.lr = 0x8376D83C;
	sub_8259CC28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8376D848:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,30500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30500);
	// bl 0x837b0c10
	ctx.lr = 0x8376D858;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c738
	ctx.lr = 0x8376D860;
	sub_8311C738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c6c0
	ctx.lr = 0x8376D868;
	sub_8311C6C0(ctx, base);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r31,r11,-12196
	ctx.r31.s64 = ctx.r11.s64 + -12196;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r31,-124
	ctx.r5.s64 = ctx.r31.s64 + -124;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b6140
	ctx.lr = 0x8376D884;
	sub_837B6140(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8376D88C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376d88c
	if (!cr6.eq) goto loc_8376D88C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8376D8B4;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x8376D8C4;
	sub_825A1EB8(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8376D8CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376d8cc
	if (!cr6.eq) goto loc_8376D8CC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x8376D8F4;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x8376D904;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x8376D914;
	sub_825A1EB8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x8376d92c
	if (!cr6.eq) goto loc_8376D92C;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x8376D92C;
	sub_825A1EB8(ctx, base);
loc_8376D92C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8376d99c
	if (cr6.gt) goto loc_8376D99C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8376d964
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376D964;
	// bdzf 4*cr6+eq,0x8376d96c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376D96C;
	// bdzf 4*cr6+eq,0x8376d974
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376D974;
	// bdzf 4*cr6+eq,0x8376d97c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376D97C;
	// bdzf 4*cr6+eq,0x8376d984
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376D984;
	// bdzf 4*cr6+eq,0x8376d98c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376D98C;
	// bne cr6,0x8376d994
	if (!cr6.eq) goto loc_8376D994;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D964:
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D96C:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D974:
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D97C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D984:
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D98C:
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D994:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// b 0x8376d9a0
	goto loc_8376D9A0;
loc_8376D99C:
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
loc_8376D9A0:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x8376D9AC;
	sub_825A1EB8(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376d9c8
	if (cr6.eq) goto loc_8376D9C8;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x8376d9d0
	goto loc_8376D9D0;
loc_8376D9C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
loc_8376D9D0:
	// bl 0x825a1eb8
	ctx.lr = 0x8376D9D4;
	sub_825A1EB8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8376D9E8;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8376da08
	if (cr6.lt) goto loc_8376DA08;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8376DA08;
	sub_825952B8(ctx, base);
loc_8376DA08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376DA14"))) PPC_WEAK_FUNC(sub_8376DA14);
PPC_FUNC_IMPL(__imp__sub_8376DA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376DA18"))) PPC_WEAK_FUNC(sub_8376DA18);
PPC_FUNC_IMPL(__imp__sub_8376DA18) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x8376d7f0
	ctx.lr = 0x8376DA48;
	sub_8376D7F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8376da94
	if (cr6.eq) goto loc_8376DA94;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8376da68
	if (!cr6.lt) goto loc_8376DA68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8376DA68:
	// bl 0x83104018
	ctx.lr = 0x8376DA6C;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376da94
	if (cr6.eq) goto loc_8376DA94;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x8376DA80;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8376DA94:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8376dab4
	if (cr6.lt) goto loc_8376DAB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8376DAB4;
	sub_825952B8(ctx, base);
loc_8376DAB4:
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

__attribute__((alias("__imp__sub_8376DAC8"))) PPC_WEAK_FUNC(sub_8376DAC8);
PPC_FUNC_IMPL(__imp__sub_8376DAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8376DAD0;
	__savegprlr_18(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83763ef8
	ctx.lr = 0x8376DAD8;
	sub_83763EF8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376e0c8
	if (cr6.eq) goto loc_8376E0C8;
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8376e0c8
	if (cr6.eq) goto loc_8376E0C8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8381b9d0
	ctx.lr = 0x8376DB00;
	sub_8381B9D0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8381b9d0
	ctx.lr = 0x8376DB10;
	sub_8381B9D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376DB24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376DB3C;
	sub_8306E2A0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// beq cr6,0x8376dbdc
	if (cr6.eq) goto loc_8376DBDC;
loc_8376DB50:
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a70db0
	ctx.lr = 0x8376DB64;
	sub_82A70DB0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x833e3748
	ctx.lr = 0x8376DB70;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e07c
	if (!cr6.eq) goto loc_8376E07C;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x833e3748
	ctx.lr = 0x8376DB88;
	sub_833E3748(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a70db0
	ctx.lr = 0x8376DBA0;
	sub_82A70DB0(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x833e3748
	ctx.lr = 0x8376DBAC;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e0d4
	if (!cr6.eq) goto loc_8376E0D4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x833e3748
	ctx.lr = 0x8376DBC4;
	sub_833E3748(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,480
	ctx.r30.s64 = ctx.r30.s64 + 480;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8376db50
	if (cr6.lt) goto loc_8376DB50;
loc_8376DBDC:
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376DBF0;
	sub_82D0E798(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// stw r29,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x8376DC04;
	sub_825952B8(ctx, base);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376DC18;
	sub_82D0E798(ctx, base);
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x825952b8
	ctx.lr = 0x8376DC28;
	sub_825952B8(ctx, base);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// stw r29,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82595718
	ctx.lr = 0x8376DC40;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stb r26,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r26.u8);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stb r26,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r26.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8376DC80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376DC94;
	sub_8306E2A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376dd18
	if (cr6.eq) goto loc_8376DD18;
loc_8376DCA4:
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83071e38
	ctx.lr = 0x8376DCB8;
	sub_83071E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376dce0
	if (cr6.eq) goto loc_8376DCE0;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376dce0
	if (cr6.eq) goto loc_8376DCE0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8376DCE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376DCE0:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x833e3748
	ctx.lr = 0x8376DCEC;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e12c
	if (!cr6.eq) goto loc_8376E12C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x833e3748
	ctx.lr = 0x8376DD04;
	sub_833E3748(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x8376dca4
	if (cr6.lt) goto loc_8376DCA4;
loc_8376DD18:
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376DD2C;
	sub_82D0E798(ctx, base);
	// stw r29,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r29.u32);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x8376DD3C;
	sub_825952B8(ctx, base);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r25.u32);
	// stw r29,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,388
	ctx.r3.s64 = ctx.r1.s64 + 388;
	// bl 0x82595718
	ctx.lr = 0x8376DD54;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stb r26,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r26.u8);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stb r26,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r26.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8376DD94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376DDA8;
	sub_8306E2A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376de2c
	if (cr6.eq) goto loc_8376DE2C;
loc_8376DDB8:
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83070638
	ctx.lr = 0x8376DDCC;
	sub_83070638(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ddf4
	if (cr6.eq) goto loc_8376DDF4;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376ddf4
	if (cr6.eq) goto loc_8376DDF4;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8376DDF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376DDF4:
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x833e3748
	ctx.lr = 0x8376DE00;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e15c
	if (!cr6.eq) goto loc_8376E15C;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x833e3748
	ctx.lr = 0x8376DE18;
	sub_833E3748(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,188
	ctx.r30.s64 = ctx.r30.s64 + 188;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x8376ddb8
	if (cr6.lt) goto loc_8376DDB8;
loc_8376DE2C:
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376DE40;
	sub_82D0E798(ctx, base);
	// stw r29,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r29.u32);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x825952b8
	ctx.lr = 0x8376DE50;
	sub_825952B8(ctx, base);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82595718
	ctx.lr = 0x8376DE68;
	sub_82595718(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r26,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r26.u8);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r26,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r26.u8);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x8376DEAC;
	sub_82595718(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r26,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r26.u8);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stb r26,21(r8)
	PPC_STORE_U8(ctx.r8.u32 + 21, ctx.r26.u8);
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// bl 0x82595718
	ctx.lr = 0x8376DEF0;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stb r26,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r26.u8);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stb r26,21(r6)
	PPC_STORE_U8(ctx.r6.u32 + 21, ctx.r26.u8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,36(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8376DF30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306e2a0
	ctx.lr = 0x8376DF48;
	sub_8306E2A0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376e300
	if (cr6.eq) goto loc_8376E300;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// li r19,-1
	ctx.r19.s64 = -1;
	// ori r20,r10,65535
	ctx.r20.u64 = ctx.r10.u64 | 65535;
	// addi r23,r11,30540
	ctx.r23.s64 = ctx.r11.s64 + 30540;
loc_8376DF6C:
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306a818
	ctx.lr = 0x8376DF80;
	sub_8306A818(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376dfa8
	if (cr6.eq) goto loc_8376DFA8;
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376dfa8
	if (cr6.eq) goto loc_8376DFA8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8376DFA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8376DFA8:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833e3748
	ctx.lr = 0x8376DFB4;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e378
	if (!cr6.eq) goto loc_8376E378;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833e3748
	ctx.lr = 0x8376DFCC;
	sub_833E3748(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// bl 0x82a68958
	ctx.lr = 0x8376DFDC;
	sub_82A68958(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r11,14
	ctx.r31.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// ble cr6,0x8376dff4
	if (!cr6.gt) goto loc_8376DFF4;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_8376DFF4:
	// clrlwi r24,r31,14
	ctx.r24.u64 = ctx.r31.u32 & 0x3FFFF;
	// cmplwi cr6,r24,4971
	cr6.compare<uint32_t>(ctx.r24.u32, 4971, xer);
	// beq cr6,0x8376e2f0
	if (cr6.eq) goto loc_8376E2F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83151d00
	ctx.lr = 0x8376E008;
	sub_83151D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e2f0
	if (!cr6.eq) goto loc_8376E2F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376E01C;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376e230
	if (cr6.eq) goto loc_8376E230;
	// cmplwi cr6,r30,23
	cr6.compare<uint32_t>(ctx.r30.u32, 23, xer);
	// bne cr6,0x8376e3f0
	if (!cr6.eq) goto loc_8376E3F0;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// bl 0x831cdcf0
	ctx.lr = 0x8376E040;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x831cdcf0
	ctx.lr = 0x8376E050;
	sub_831CDCF0(ctx, base);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
loc_8376E058:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8306a888
	ctx.lr = 0x8376E068;
	sub_8306A888(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376e18c
	if (cr6.eq) goto loc_8376E18C;
	// lwz r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// b 0x8376e1ac
	goto loc_8376E1AC;
loc_8376E07C:
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E090;
	sub_82D0E798(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// stw r29,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x8376E0A4;
	sub_825952B8(ctx, base);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E0B8;
	sub_82D0E798(ctx, base);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x825952b8
	ctx.lr = 0x8376E0C8;
	sub_825952B8(ctx, base);
loc_8376E0C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E0D4:
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E0E8;
	sub_82D0E798(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x8376E0FC;
	sub_825952B8(ctx, base);
	// lwz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E110;
	sub_82D0E798(ctx, base);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x825952b8
	ctx.lr = 0x8376E120;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E12C:
	// lwz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E140;
	sub_82D0E798(ctx, base);
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x825952b8
	ctx.lr = 0x8376E150;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E15C:
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E170;
	sub_82D0E798(ctx, base);
	// stw r29,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r29.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x825952b8
	ctx.lr = 0x8376E180;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E18C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83572958
	ctx.lr = 0x8376E19C;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376e1d0
	if (cr6.eq) goto loc_8376E1D0;
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
loc_8376E1AC:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bge cr6,0x8376e1d0
	if (!cr6.lt) goto loc_8376E1D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376e1d0
	if (cr6.eq) goto loc_8376E1D0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r25,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r25.u16);
	// b 0x8376e1d8
	goto loc_8376E1D8;
loc_8376E1D0:
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8376E1D8:
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83775138
	ctx.lr = 0x8376E1E8;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376e468
	if (cr6.eq) goto loc_8376E468;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x8376E200;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e4e0
	if (!cr6.eq) goto loc_8376E4E0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833e3748
	ctx.lr = 0x8376E218;
	sub_833E3748(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r30,23
	cr6.compare<uint32_t>(ctx.r30.u32, 23, xer);
	// blt cr6,0x8376e058
	if (cr6.lt) goto loc_8376E058;
	// b 0x8376e2f0
	goto loc_8376E2F0;
loc_8376E230:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,596
	ctx.r3.s64 = ctx.r1.s64 + 596;
	// bl 0x831cdcf0
	ctx.lr = 0x8376E240;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x831cdcf0
	ctx.lr = 0x8376E250;
	sub_831CDCF0(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8376e2e8
	if (cr6.eq) goto loc_8376E2E8;
loc_8376E260:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82a7f5a0
	ctx.lr = 0x8376E270;
	sub_82A7F5A0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// bl 0x83775138
	ctx.lr = 0x8376E280;
	sub_83775138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376e558
	if (cr6.eq) goto loc_8376E558;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833e3748
	ctx.lr = 0x8376E298;
	sub_833E3748(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376e5d0
	if (!cr6.eq) goto loc_8376E5D0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833e3748
	ctx.lr = 0x8376E2B0;
	sub_833E3748(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x82a72110
	ctx.lr = 0x8376E2CC;
	sub_82A72110(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376e2dc
	if (cr6.eq) goto loc_8376E2DC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_8376E2DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x8376e260
	if (cr6.lt) goto loc_8376E260;
loc_8376E2E8:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(ctx.r28.u32, 16, xer);
	// blt cr6,0x8376e648
	if (cr6.lt) goto loc_8376E648;
loc_8376E2F0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r27,r27,164
	ctx.r27.s64 = ctx.r27.s64 + 164;
	// cmplw cr6,r21,r22
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r22.u32, xer);
	// blt cr6,0x8376df6c
	if (cr6.lt) goto loc_8376DF6C;
loc_8376E300:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E314;
	sub_82D0E798(ctx, base);
	// stw r29,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E324;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E338;
	sub_82D0E798(ctx, base);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E348;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E35C;
	sub_82D0E798(ctx, base);
	// stw r29,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E36C;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E378:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E38C;
	sub_82D0E798(ctx, base);
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E39C;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E3B0;
	sub_82D0E798(ctx, base);
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E3C0;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E3D4;
	sub_82D0E798(ctx, base);
	// stw r29,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E3E4;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E3F0:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E404;
	sub_82D0E798(ctx, base);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E414;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E428;
	sub_82D0E798(ctx, base);
	// stw r29,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E438;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E44C;
	sub_82D0E798(ctx, base);
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E45C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E468:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E47C;
	sub_82D0E798(ctx, base);
	// stw r29,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r29.u32);
	// addi r3,r1,380
	ctx.r3.s64 = ctx.r1.s64 + 380;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E48C;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E4A0;
	sub_82D0E798(ctx, base);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E4B0;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E4C4;
	sub_82D0E798(ctx, base);
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r3,r1,356
	ctx.r3.s64 = ctx.r1.s64 + 356;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E4D4;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E4E0:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E4F4;
	sub_82D0E798(ctx, base);
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E504;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E518;
	sub_82D0E798(ctx, base);
	// stw r29,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r29.u32);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E528;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E53C;
	sub_82D0E798(ctx, base);
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// addi r3,r1,316
	ctx.r3.s64 = ctx.r1.s64 + 316;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E54C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E558:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E56C;
	sub_82D0E798(ctx, base);
	// stw r29,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r29.u32);
	// addi r3,r1,364
	ctx.r3.s64 = ctx.r1.s64 + 364;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E57C;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E590;
	sub_82D0E798(ctx, base);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E5A0;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E5B4;
	sub_82D0E798(ctx, base);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E5C4;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E5D0:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E5E4;
	sub_82D0E798(ctx, base);
	// stw r29,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r29.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E5F4;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E608;
	sub_82D0E798(ctx, base);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E618;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E62C;
	sub_82D0E798(ctx, base);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E63C;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_8376E648:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E65C;
	sub_82D0E798(ctx, base);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x825952b8
	ctx.lr = 0x8376E66C;
	sub_825952B8(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E680;
	sub_82D0E798(ctx, base);
	// stw r29,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r29.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x825952b8
	ctx.lr = 0x8376E690;
	sub_825952B8(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8376E6A4;
	sub_82D0E798(ctx, base);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825952b8
	ctx.lr = 0x8376E6B4;
	sub_825952B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376E6C0"))) PPC_WEAK_FUNC(sub_8376E6C0);
PPC_FUNC_IMPL(__imp__sub_8376E6C0) {
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
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E6E8;
	sub_835977D8(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E6FC;
	sub_835977D8(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E710;
	sub_835977D8(ctx, base);
	// li r8,50
	ctx.r8.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E724;
	sub_835977D8(ctx, base);
	// li r7,9
	ctx.r7.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E738;
	sub_835977D8(ctx, base);
	// li r6,51
	ctx.r6.s64 = 51;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E74C;
	sub_835977D8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E760;
	sub_835977D8(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E774;
	sub_835977D8(ctx, base);
	// li r11,49
	ctx.r11.s64 = 49;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E788;
	sub_835977D8(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E79C;
	sub_835977D8(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E7B0;
	sub_835977D8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E7C0;
	sub_835977D8(ctx, base);
	// li r9,67
	ctx.r9.s64 = 67;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E7D4;
	sub_835977D8(ctx, base);
	// li r8,13
	ctx.r8.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E7E8;
	sub_835977D8(ctx, base);
	// li r7,14
	ctx.r7.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E7FC;
	sub_835977D8(ctx, base);
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E810;
	sub_835977D8(ctx, base);
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E824;
	sub_835977D8(ctx, base);
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E838;
	sub_835977D8(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E84C;
	sub_835977D8(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E860;
	sub_835977D8(ctx, base);
	// li r9,30
	ctx.r9.s64 = 30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E874;
	sub_835977D8(ctx, base);
	// li r8,68
	ctx.r8.s64 = 68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E888;
	sub_835977D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376E8A0"))) PPC_WEAK_FUNC(sub_8376E8A0);
PPC_FUNC_IMPL(__imp__sub_8376E8A0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E8C4;
	sub_835977D8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E8D8;
	sub_835977D8(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E8EC;
	sub_835977D8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x8376E900;
	sub_835977D8(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E914;
	sub_835977D8(ctx, base);
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

__attribute__((alias("__imp__sub_8376E928"))) PPC_WEAK_FUNC(sub_8376E928);
PPC_FUNC_IMPL(__imp__sub_8376E928) {
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
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E94C;
	sub_835977D8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E960;
	sub_835977D8(ctx, base);
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

__attribute__((alias("__imp__sub_8376E974"))) PPC_WEAK_FUNC(sub_8376E974);
PPC_FUNC_IMPL(__imp__sub_8376E974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376E978"))) PPC_WEAK_FUNC(sub_8376E978);
PPC_FUNC_IMPL(__imp__sub_8376E978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8376E980;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x8376e9b8
	if (cr6.eq) goto loc_8376E9B8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x8376E9B0;
	sub_831CE420(ctx, base);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8376E9B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8376e6c0
	ctx.lr = 0x8376E9C0;
	sub_8376E6C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8376e8a0
	ctx.lr = 0x8376E9C8;
	sub_8376E8A0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E9DC;
	sub_835977D8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x8376E9F0;
	sub_835977D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376E9F8"))) PPC_WEAK_FUNC(sub_8376E9F8);
PPC_FUNC_IMPL(__imp__sub_8376E9F8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376EA14"))) PPC_WEAK_FUNC(sub_8376EA14);
PPC_FUNC_IMPL(__imp__sub_8376EA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376EA18"))) PPC_WEAK_FUNC(sub_8376EA18);
PPC_FUNC_IMPL(__imp__sub_8376EA18) {
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
	// bl 0x82efe820
	ctx.lr = 0x8376EA34;
	sub_82EFE820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ea84
	if (cr6.eq) goto loc_8376EA84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8376ea50
	if (cr6.eq) goto loc_8376EA50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8376ea88
	goto loc_8376EA88;
loc_8376EA50:
	// bl 0x82efe820
	ctx.lr = 0x8376EA54;
	sub_82EFE820(ctx, base);
	// bl 0x82efea38
	ctx.lr = 0x8376EA58;
	sub_82EFEA38(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// beq cr6,0x8376ea84
	if (cr6.eq) goto loc_8376EA84;
	// bl 0x83103e98
	ctx.lr = 0x8376EA80;
	sub_83103E98(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_8376EA84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8376EA88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376EAA0"))) PPC_WEAK_FUNC(sub_8376EAA0);
PPC_FUNC_IMPL(__imp__sub_8376EAA0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376eb38
	if (!cr6.eq) goto loc_8376EB38;
	// bl 0x82efe820
	ctx.lr = 0x8376EAC8;
	sub_82EFE820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376eb38
	if (cr6.eq) goto loc_8376EB38;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8376eae4
	if (cr6.eq) goto loc_8376EAE4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8376eb38
	if (!cr6.eq) goto loc_8376EB38;
loc_8376EAE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bge cr6,0x8376eb38
	if (!cr6.lt) goto loc_8376EB38;
	// lis r10,-31770
	ctx.r10.s64 = -2082078720;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,30828
	ctx.r8.s64 = ctx.r10.s64 + 30828;
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,139
	cr6.compare<int32_t>(ctx.r31.s32, 139, xer);
	// beq cr6,0x8376eb30
	if (cr6.eq) goto loc_8376EB30;
loc_8376EB0C:
	// bl 0x82efe820
	ctx.lr = 0x8376EB10;
	sub_82EFE820(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82efe8d8
	ctx.lr = 0x8376EB18;
	sub_82EFE8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376eb38
	if (cr6.eq) goto loc_8376EB38;
	// lwzu r31,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,139
	cr6.compare<int32_t>(ctx.r31.s32, 139, xer);
	// bne cr6,0x8376eb0c
	if (!cr6.eq) goto loc_8376EB0C;
loc_8376EB30:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8376eb3c
	goto loc_8376EB3C;
loc_8376EB38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8376EB3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376EB54"))) PPC_WEAK_FUNC(sub_8376EB54);
PPC_FUNC_IMPL(__imp__sub_8376EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376EB58"))) PPC_WEAK_FUNC(sub_8376EB58);
PPC_FUNC_IMPL(__imp__sub_8376EB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376EB60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82efe820
	ctx.lr = 0x8376EB70;
	sub_82EFE820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376eb84
	if (!cr6.eq) goto loc_8376EB84;
loc_8376EB78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8376EB84:
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// bge cr6,0x8376eb78
	if (!cr6.lt) goto loc_8376EB78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8376eba0
	if (cr6.eq) goto loc_8376EBA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8376ea18
	ctx.lr = 0x8376EBA0;
	sub_8376EA18(ctx, base);
loc_8376EBA0:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r9,r11,30828
	ctx.r9.s64 = ctx.r11.s64 + 30828;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// beq cr6,0x8376ebdc
	if (cr6.eq) goto loc_8376EBDC;
	// bl 0x83103e98
	ctx.lr = 0x8376EBD8;
	sub_83103E98(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_8376EBDC:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x8376ec08
	if (!cr6.eq) goto loc_8376EC08;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-11372
	ctx.r3.s64 = ctx.r11.s64 + -11372;
	// bl 0x83104938
	ctx.lr = 0x8376EBF8;
	sub_83104938(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376ec08
	if (cr6.eq) goto loc_8376EC08;
	// bl 0x83103b18
	ctx.lr = 0x8376EC08;
	sub_83103B18(ctx, base);
loc_8376EC08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376EC14"))) PPC_WEAK_FUNC(sub_8376EC14);
PPC_FUNC_IMPL(__imp__sub_8376EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376EC18"))) PPC_WEAK_FUNC(sub_8376EC18);
PPC_FUNC_IMPL(__imp__sub_8376EC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8376ec88
	if (cr6.eq) goto loc_8376EC88;
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
loc_8376EC24:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,-5(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r8,-5(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r6,4(r5)
	PPC_STORE_U8(ctx.r5.u32 + 4, ctx.r6.u8);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r3,5(r5)
	PPC_STORE_U8(ctx.r5.u32 + 5, ctx.r3.u8);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,6(r5)
	PPC_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,7(r5)
	PPC_STORE_U8(ctx.r5.u32 + 7, ctx.r9.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r8,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r8.u8);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stb r7,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r7.u8);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// addi r6,r11,-5
	ctx.r6.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bne cr6,0x8376ec24
	if (!cr6.eq) goto loc_8376EC24;
loc_8376EC88:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376EC90"))) PPC_WEAK_FUNC(sub_8376EC90);
PPC_FUNC_IMPL(__imp__sub_8376EC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x8376ecc4
	if (cr6.eq) goto loc_8376ECC4;
	// clrlwi r4,r4,14
	ctx.r4.u64 = ctx.r4.u32 & 0x3FFFF;
loc_8376ECA8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r31,14
	ctx.r31.u64 = ctx.r31.u32 & 0x3FFFF;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8376ecd0
	if (cr6.eq) goto loc_8376ECD0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8376eca8
	if (!cr6.eq) goto loc_8376ECA8;
loc_8376ECC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8376ECD0:
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lbz r7,7(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lbz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376ED0C"))) PPC_WEAK_FUNC(sub_8376ED0C);
PPC_FUNC_IMPL(__imp__sub_8376ED0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376ED10"))) PPC_WEAK_FUNC(sub_8376ED10);
PPC_FUNC_IMPL(__imp__sub_8376ED10) {
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
	// bl 0x8376ea18
	ctx.lr = 0x8376ED28;
	sub_8376EA18(ctx, base);
	// bl 0x82efead8
	ctx.lr = 0x8376ED2C;
	sub_82EFEAD8(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8376ed48
	if (cr6.eq) goto loc_8376ED48;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8376ED48;
	sub_825952B8(ctx, base);
loc_8376ED48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8376ED6C"))) PPC_WEAK_FUNC(sub_8376ED6C);
PPC_FUNC_IMPL(__imp__sub_8376ED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376ED70"))) PPC_WEAK_FUNC(sub_8376ED70);
PPC_FUNC_IMPL(__imp__sub_8376ED70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8376ED78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8376eda8
	if (cr6.eq) goto loc_8376EDA8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8376ec18
	ctx.lr = 0x8376EDA4;
	sub_8376EC18(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
loc_8376EDA8:
	// rldicl r28,r30,60,4
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(ctx.r28.u64, 0, xer);
	// ble cr6,0x8376ee1c
	if (!cr6.gt) goto loc_8376EE1C;
loc_8376EDB8:
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_8376EDC4:
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376EDD8:
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stbx r7,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8376edd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376EDD8;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// blt cr6,0x8376edc4
	if (cr6.lt) goto loc_8376EDC4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d54828
	ctx.lr = 0x8376EE08;
	sub_82D54828(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// blt cr6,0x8376edb8
	if (cr6.lt) goto loc_8376EDB8;
loc_8376EE1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376EE24"))) PPC_WEAK_FUNC(sub_8376EE24);
PPC_FUNC_IMPL(__imp__sub_8376EE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376EE28"))) PPC_WEAK_FUNC(sub_8376EE28);
PPC_FUNC_IMPL(__imp__sub_8376EE28) {
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
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x82efe980
	ctx.lr = 0x8376EE68;
	sub_82EFE980(ctx, base);
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

__attribute__((alias("__imp__sub_8376EE80"))) PPC_WEAK_FUNC(sub_8376EE80);
PPC_FUNC_IMPL(__imp__sub_8376EE80) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376eef0
	if (cr6.eq) goto loc_8376EEF0;
	// bl 0x83103bb8
	ctx.lr = 0x8376EEA8;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376eef0
	if (!cr6.eq) goto loc_8376EEF0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83103d20
	ctx.lr = 0x8376EEBC;
	sub_83103D20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83103d60
	ctx.lr = 0x8376EEC8;
	sub_83103D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8376ed70
	ctx.lr = 0x8376EED8;
	sub_8376ED70(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376eef0
	if (cr6.eq) goto loc_8376EEF0;
	// bl 0x83103e98
	ctx.lr = 0x8376EEE8;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8376EEF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376EF08"))) PPC_WEAK_FUNC(sub_8376EF08);
PPC_FUNC_IMPL(__imp__sub_8376EF08) {
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
	// bl 0x8376ee80
	ctx.lr = 0x8376EF24;
	sub_8376EE80(ctx, base);
	// bl 0x82efe820
	ctx.lr = 0x8376EF28;
	sub_82EFE820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376f01c
	if (cr6.eq) goto loc_8376F01C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8376f01c
	if (cr6.gt) goto loc_8376F01C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8376ef90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376EF90;
	// bdzf 4*cr6+eq,0x8376efdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8376EFDC;
	// bne cr6,0x8376f014
	if (!cr6.eq) goto loc_8376F014;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8376f01c
	if (!cr6.eq) goto loc_8376F01C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f01c
	if (cr6.eq) goto loc_8376F01C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,139
	cr6.compare<int32_t>(ctx.r9.s32, 139, xer);
	// bne cr6,0x8376f01c
	if (!cr6.eq) goto loc_8376F01C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8376f01c
	goto loc_8376F01C;
loc_8376EF90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,139
	cr6.compare<int32_t>(ctx.r30.s32, 139, xer);
	// bne cr6,0x8376efc0
	if (!cr6.eq) goto loc_8376EFC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f01c
	if (!cr6.eq) goto loc_8376F01C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8376f01c
	goto loc_8376F01C;
loc_8376EFC0:
	// bl 0x82efe820
	ctx.lr = 0x8376EFC4;
	sub_82EFE820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82efe830
	ctx.lr = 0x8376EFCC;
	sub_82EFE830(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8376f01c
	goto loc_8376F01C;
loc_8376EFDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82efe820
	ctx.lr = 0x8376EFE8;
	sub_82EFE820(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82efe8d8
	ctx.lr = 0x8376EFF0;
	sub_82EFE8D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f01c
	if (cr6.eq) goto loc_8376F01C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// b 0x8376f01c
	goto loc_8376F01C;
loc_8376F014:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8376F01C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376F034"))) PPC_WEAK_FUNC(sub_8376F034);
PPC_FUNC_IMPL(__imp__sub_8376F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376F038"))) PPC_WEAK_FUNC(sub_8376F038);
PPC_FUNC_IMPL(__imp__sub_8376F038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8376f060
	if (!cr6.eq) goto loc_8376F060;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f064
	if (cr6.eq) goto loc_8376F064;
loc_8376F060:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F064:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f078
	if (!cr6.eq) goto loc_8376F078;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8376F078:
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376F088"))) PPC_WEAK_FUNC(sub_8376F088);
PPC_FUNC_IMPL(__imp__sub_8376F088) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f0b4
	if (!cr6.eq) goto loc_8376F0B4;
loc_8376F0AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8376f140
	goto loc_8376F140;
loc_8376F0B4:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r31,r30,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// lwz r11,31040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31040);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376f0e0
	if (!cr6.eq) goto loc_8376F0E0;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f0e4
	if (cr6.eq) goto loc_8376F0E4;
loc_8376F0E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F0E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f0ac
	if (!cr6.eq) goto loc_8376F0AC;
	// bl 0x83763ef8
	ctx.lr = 0x8376F0F4;
	sub_83763EF8(ctx, base);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x8376f118
	if (!cr6.eq) goto loc_8376F118;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f11c
	if (cr6.eq) goto loc_8376F11C;
loc_8376F118:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F11C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f134
	if (cr6.eq) goto loc_8376F134;
	// lbz r11,206(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 206);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8376F134:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8376F140:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376F158"))) PPC_WEAK_FUNC(sub_8376F158);
PPC_FUNC_IMPL(__imp__sub_8376F158) {
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
	// bl 0x83763ef8
	ctx.lr = 0x8376F168;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376f180
	if (!cr6.eq) goto loc_8376F180;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8376F180:
	// bl 0x83763ef8
	ctx.lr = 0x8376F184;
	sub_83763EF8(ctx, base);
	// bl 0x83763f08
	ctx.lr = 0x8376F188;
	sub_83763F08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8376F198"))) PPC_WEAK_FUNC(sub_8376F198);
PPC_FUNC_IMPL(__imp__sub_8376F198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8376F1A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,85
	ctx.r5.s64 = 5570560;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,8144
	ctx.r5.u64 = ctx.r5.u64 | 8144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F1B8;
	sub_831CDCF0(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8376F1D0:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8376f1d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376F1D0;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// stbx r27,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r27.u8);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F1F0;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,652
	ctx.r3.s64 = ctx.r3.s64 + 652;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F204;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,816
	ctx.r3.s64 = ctx.r3.s64 + 816;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F218;
	sub_831CDCF0(ctx, base);
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addis r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 65536;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// addi r31,r31,2104
	ctx.r31.s64 = ctx.r31.s64 + 2104;
	// addi r29,r29,1444
	ctx.r29.s64 = ctx.r29.s64 + 1444;
	// li r28,5
	ctx.r28.s64 = 5;
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// ori r25,r11,1
	ctx.r25.u64 = ctx.r11.u64 | 1;
loc_8376F238:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F248;
	sub_831CDCF0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_8376F258:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8376f258
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376F258;
	// stbx r27,r31,r26
	PPC_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r27.u8);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bne 0x8376f238
	if (!cr0.eq) goto loc_8376F238;
	// addis r3,r30,81
	ctx.r3.s64 = ctx.r30.s64 + 5308416;
	// li r5,6016
	ctx.r5.s64 = 6016;
	// addi r3,r3,2112
	ctx.r3.s64 = ctx.r3.s64 + 2112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F288;
	sub_831CDCF0(ctx, base);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addis r9,r30,81
	ctx.r9.s64 = ctx.r30.s64 + 5308416;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r9,r9,8128
	ctx.r9.s64 = ctx.r9.s64 + 8128;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8376F2A0:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8376f2a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8376F2A0;
	// stbx r27,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u8);
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lis r9,85
	ctx.r9.s64 = 5570560;
	// ori r8,r11,8132
	ctx.r8.u64 = ctx.r11.u64 | 8132;
	// ori r7,r10,8136
	ctx.r7.u64 = ctx.r10.u64 | 8136;
	// ori r6,r9,8140
	ctx.r6.u64 = ctx.r9.u64 | 8140;
	// stwx r27,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r27.u32);
	// stwx r27,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r27.u32);
	// stwx r27,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376F2D8"))) PPC_WEAK_FUNC(sub_8376F2D8);
PPC_FUNC_IMPL(__imp__sub_8376F2D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8376F2E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f304
	if (!cr6.eq) goto loc_8376F304;
loc_8376F2F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8376F304:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f2f8
	if (cr6.eq) goto loc_8376F2F8;
	// bl 0x83763ef8
	ctx.lr = 0x8376F314;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376f2f8
	if (cr6.eq) goto loc_8376F2F8;
	// lis r28,-31770
	ctx.r28.s64 = -2082078720;
	// rlwinm r29,r31,14,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r11,31040(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31040);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376f350
	if (!cr6.eq) goto loc_8376F350;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f354
	if (cr6.eq) goto loc_8376F354;
loc_8376F350:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376F354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f2f8
	if (!cr6.eq) goto loc_8376F2F8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82a70e48
	ctx.lr = 0x8376F36C;
	sub_82A70E48(ctx, base);
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// ori r9,r10,8128
	ctx.r9.u64 = ctx.r10.u64 | 8128;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// beq cr6,0x8376f420
	if (cr6.eq) goto loc_8376F420;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r30,564
	ctx.r30.s64 = ctx.r30.s64 + 564;
	// bl 0x8376c548
	ctx.lr = 0x8376F39C;
	sub_8376C548(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8376F3A0;
	sub_831156E8(ctx, base);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x8376F3AC;
	sub_8311C260(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f3dc
	if (cr6.eq) goto loc_8376F3DC;
	// rlwinm r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f3dc
	if (cr6.eq) goto loc_8376F3DC;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82d427a8
	ctx.lr = 0x8376F3D0;
	sub_82D427A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f420
	if (!cr6.eq) goto loc_8376F420;
loc_8376F3DC:
	// rlwinm r11,r23,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8376f3fc
	if (!cr6.eq) goto loc_8376F3FC;
	// xor r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f400
	if (cr6.eq) goto loc_8376F400;
loc_8376F3FC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376F400:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f41c
	if (cr6.eq) goto loc_8376F41C;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f420
	if (cr6.eq) goto loc_8376F420;
loc_8376F41C:
	// stw r22,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r22.u32);
loc_8376F420:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// ori r9,r10,80
	ctx.r9.u64 = ctx.r10.u64 | 80;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8376f4c4
	if (cr6.eq) goto loc_8376F4C4;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x8376F450;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x8306e988
	ctx.lr = 0x8376F460;
	sub_8306E988(ctx, base);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a70db0
	ctx.lr = 0x8376F474;
	sub_82A70DB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f4c4
	if (!cr6.eq) goto loc_8376F4C4;
	// rlwinm r11,r23,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8376f4a0
	if (!cr6.eq) goto loc_8376F4A0;
	// xor r11,r23,r31
	ctx.r11.u64 = ctx.r23.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f4a4
	if (cr6.eq) goto loc_8376F4A4;
loc_8376F4A0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376F4A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f4c0
	if (cr6.eq) goto loc_8376F4C0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f4c4
	if (cr6.eq) goto loc_8376F4C4;
loc_8376F4C0:
	// stw r22,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r22.u32);
loc_8376F4C4:
	// lwz r11,31040(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31040);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rlwinm r26,r11,14,0,17
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r25,116
	ctx.r29.s64 = ctx.r25.s64 + 116;
	// ori r28,r11,1444
	ctx.r28.u64 = ctx.r11.u64 | 1444;
loc_8376F4E0:
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(ctx.r27.u32, 5, xer);
	// bge cr6,0x8376f564
	if (!cr6.lt) goto loc_8376F564;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8376f564
	if (cr6.eq) goto loc_8376F564;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x8376F510;
	sub_82A713F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x8376f564
	if (cr6.eq) goto loc_8376F564;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f564
	if (cr6.eq) goto loc_8376F564;
	// rlwinm r11,r11,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r10,r23,14
	ctx.r10.u64 = ctx.r23.u32 & 0x3FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376f564
	if (!cr6.eq) goto loc_8376F564;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a713f0
	ctx.lr = 0x8376F548;
	sub_82A713F0(ctx, base);
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aaccf8
	ctx.lr = 0x8376F554;
	sub_82AACCF8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x8376f564
	if (cr6.eq) goto loc_8376F564;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_8376F564:
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,660
	cr6.compare<uint32_t>(ctx.r30.u32, 660, xer);
	// blt cr6,0x8376f4e0
	if (cr6.lt) goto loc_8376F4E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376F584"))) PPC_WEAK_FUNC(sub_8376F584);
PPC_FUNC_IMPL(__imp__sub_8376F584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376F588"))) PPC_WEAK_FUNC(sub_8376F588);
PPC_FUNC_IMPL(__imp__sub_8376F588) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r6,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r6.s64;
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8376f63c
	if (cr6.eq) goto loc_8376F63C;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,30992
	ctx.r8.s64 = ctx.r11.s64 + 30992;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// lhz r5,30992(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30992);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// ble cr6,0x8376f650
	if (!cr6.gt) goto loc_8376F650;
loc_8376F5D8:
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8376f5f4
	if (!cr6.eq) goto loc_8376F5F4;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// b 0x8376f61c
	goto loc_8376F61C;
loc_8376F5F4:
	// lhz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// bne cr6,0x8376f614
	if (!cr6.eq) goto loc_8376F614;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376f618
	if (cr6.eq) goto loc_8376F618;
loc_8376F614:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F618:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8376F61C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f62c
	if (!cr6.eq) goto loc_8376F62C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8376F62C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8376f5d8
	if (cr6.gt) goto loc_8376F5D8;
loc_8376F63C:
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
loc_8376F650:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F65C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8376F65C"))) PPC_WEAK_FUNC(sub_8376F65C);
PPC_FUNC_IMPL(__imp__sub_8376F65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376F660"))) PPC_WEAK_FUNC(sub_8376F660);
PPC_FUNC_IMPL(__imp__sub_8376F660) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srawi r6,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 5;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8376f720
	if (cr6.eq) goto loc_8376F720;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,30992
	ctx.r10.s64 = ctx.r11.s64 + 30992;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// lhz r4,30992(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30992);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ble cr6,0x8376f734
	if (!cr6.gt) goto loc_8376F734;
loc_8376F6B0:
	// add r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8376f6cc
	if (!cr6.eq) goto loc_8376F6CC;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8376f6f4
	goto loc_8376F6F4;
loc_8376F6CC:
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8376f6ec
	if (!cr6.eq) goto loc_8376F6EC;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376f6f0
	if (cr6.eq) goto loc_8376F6F0;
loc_8376F6EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F6F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8376F6F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f70c
	if (!cr6.eq) goto loc_8376F70C;
	// lbz r11,29(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f710
	if (cr6.eq) goto loc_8376F710;
loc_8376F70C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8376F710:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8376f6b0
	if (cr6.gt) goto loc_8376F6B0;
loc_8376F720:
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
loc_8376F734:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F740;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8376F740"))) PPC_WEAK_FUNC(sub_8376F740);
PPC_FUNC_IMPL(__imp__sub_8376F740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8376F748;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,32(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// subf r9,r27,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r27.s64;
	// lis r25,-31770
	ctx.r25.s64 = -2082078720;
	// srawi r26,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 5;
	// addi r23,r11,30992
	ctx.r23.s64 = ctx.r11.s64 + 30992;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x8376f934
	if (!cr6.lt) goto loc_8376F934;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f7a0
	if (!cr6.eq) goto loc_8376F7A0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8376f7c8
	goto loc_8376F7C8;
loc_8376F7A0:
	// lhz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8376f7c0
	if (!cr6.eq) goto loc_8376F7C0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// beq cr6,0x8376f7c4
	if (cr6.eq) goto loc_8376F7C4;
loc_8376F7C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F7C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8376F7C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f934
	if (!cr6.eq) goto loc_8376F934;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8376f7e8
	if (cr6.gt) goto loc_8376F7E8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F7E8;
	sub_831CC188(ctx, base);
loc_8376F7E8:
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x825a2298
	ctx.lr = 0x8376F804;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f934
	if (cr6.eq) goto loc_8376F934;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8376f824
	if (cr6.gt) goto loc_8376F824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F824;
	sub_831CC188(ctx, base);
loc_8376F824:
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r24,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r24.u8);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8376f858
	if (cr6.gt) goto loc_8376F858;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F858;
	sub_831CC188(ctx, base);
loc_8376F858:
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r5,r6,5
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8376f898
	if (cr6.gt) goto loc_8376F898;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F898;
	sub_831CC188(ctx, base);
loc_8376F898:
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,31040(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31040);
	// xor r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r4,r5,0,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8376f8f0
	if (!cr6.eq) goto loc_8376F8F0;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376f8f4
	if (cr6.eq) goto loc_8376F8F4;
loc_8376F8F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8376F8F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376f934
	if (!cr6.eq) goto loc_8376F934;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8376f928
	if (cr6.gt) goto loc_8376F928;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376F928;
	sub_831CC188(ctx, base);
loc_8376F928:
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r24,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r24.u8);
loc_8376F934:
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r11.u64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,31040(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31040);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,31040(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31040);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8376F964"))) PPC_WEAK_FUNC(sub_8376F964);
PPC_FUNC_IMPL(__imp__sub_8376F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376F968"))) PPC_WEAK_FUNC(sub_8376F968);
PPC_FUNC_IMPL(__imp__sub_8376F968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8376F970;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// bl 0x83763ef8
	ctx.lr = 0x8376F9A4;
	sub_83763EF8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// clrlwi r15,r26,14
	ctx.r15.u64 = ctx.r26.u32 & 0x3FFFF;
	// lwz r11,31040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31040);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r15,r10
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r14,r24
	ctx.r14.u64 = ctx.r24.u64;
	// bl 0x8319fea0
	ctx.lr = 0x8376F9DC;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376f9ec
	if (cr6.eq) goto loc_8376F9EC;
	// li r14,1
	ctx.r14.s64 = 1;
loc_8376F9EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8376f588
	ctx.lr = 0x8376F9F4;
	sub_8376F588(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8376fe3c
	if (cr6.lt) goto loc_8376FE3C;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r27,r29,32
	ctx.r27.s64 = ctx.r29.s64 + 32;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r18,r9,1
	ctx.r18.s64 = ctx.r9.s64 + 65536;
	// srawi. r10,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r18,r18,652
	ctx.r18.s64 = ctx.r18.s64 + 652;
	// beq 0x8376fa68
	if (cr0.eq) goto loc_8376FA68;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// ble cr6,0x8376fb0c
	if (!cr6.gt) goto loc_8376FB0C;
loc_8376FA30:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82a7de40
	ctx.lr = 0x8376FA48;
	sub_82A7DE40(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x8376fa30
	if (cr6.gt) goto loc_8376FA30;
loc_8376FA68:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8306ca70
	ctx.lr = 0x8376FA78;
	sub_8306CA70(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8306e2a0
	ctx.lr = 0x8376FA8C;
	sub_8306E2A0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8376FAAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,399
	ctx.r9.s64 = 26148864;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r8,r9,39960
	ctx.r8.u64 = ctx.r9.u64 | 39960;
	// li r23,-1
	ctx.r23.s64 = -1;
	// cmplw cr6,r21,r8
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r8.u32, xer);
	// mulli r4,r21,164
	ctx.r4.s64 = ctx.r21.s64 * 164;
	// ble cr6,0x8376facc
	if (!cr6.gt) goto loc_8376FACC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8376FACC:
	// li r25,43
	ctx.r25.s64 = 43;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x8376FAE0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376fb18
	if (cr6.eq) goto loc_8376FB18;
	// addic. r11,r21,-1
	xer.ca = ctx.r21.u32 > 0;
	ctx.r11.s64 = ctx.r21.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x8376fb04
	if (cr0.lt) goto loc_8376FB04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,164
	ctx.r5.s64 = ctx.r11.s64 * 164;
	// bl 0x831cdcf0
	ctx.lr = 0x8376FB04;
	sub_831CDCF0(ctx, base);
loc_8376FB04:
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// b 0x8376fb1c
	goto loc_8376FB1C;
loc_8376FB0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376FB18;
	sub_831CC188(ctx, base);
loc_8376FB18:
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
loc_8376FB1C:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r4,r21,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r21,r10
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, xer);
	// ble cr6,0x8376fb34
	if (!cr6.gt) goto loc_8376FB34;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8376FB34:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x8376FB44;
	sub_82595718(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x8376fe24
	if (cr6.eq) goto loc_8376FE24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376fe04
	if (cr6.eq) goto loc_8376FE04;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8376fb98
	if (cr6.eq) goto loc_8376FB98;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8376FB6C:
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8376FB7C;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a68958
	ctx.lr = 0x8376FB84;
	sub_82A68958(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// addi r28,r28,164
	ctx.r28.s64 = ctx.r28.s64 + 164;
	// bne 0x8376fb6c
	if (!cr0.eq) goto loc_8376FB6C;
loc_8376FB98:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// ori r19,r11,65535
	ctx.r19.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8376fd38
	if (cr6.eq) goto loc_8376FD38;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// rlwinm r20,r26,14,18,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x3FFF;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// addi r23,r11,30992
	ctx.r23.s64 = ctx.r11.s64 + 30992;
loc_8376FBBC:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8306c9d8
	ctx.lr = 0x8376FBD0;
	sub_8306C9D8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// clrlwi r25,r11,14
	ctx.r25.u64 = ctx.r11.u32 & 0x3FFFF;
	// ble cr6,0x8376fbe4
	if (!cr6.gt) goto loc_8376FBE4;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_8376FBE4:
	// rlwinm r26,r25,14,18,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r26,r20
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, xer);
	// bne cr6,0x8376fc00
	if (!cr6.eq) goto loc_8376FC00;
	// clrlwi r11,r25,14
	ctx.r11.u64 = ctx.r25.u32 & 0x3FFFF;
	// cmplw cr6,r11,r15
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r15.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8376fc04
	if (cr6.eq) goto loc_8376FC04;
loc_8376FC00:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376FC04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fc24
	if (cr6.eq) goto loc_8376FC24;
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x8376FC20;
	sub_831CE980(ctx, base);
	// b 0x8376fd1c
	goto loc_8376FD1C;
loc_8376FC24:
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8376fd1c
	if (!cr6.eq) goto loc_8376FD1C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r10,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8376fd1c
	if (cr0.eq) goto loc_8376FD1C;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// ble cr6,0x8376fe44
	if (!cr6.gt) goto loc_8376FE44;
loc_8376FC54:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// bne cr6,0x8376fc80
	if (!cr6.eq) goto loc_8376FC80;
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8376fc84
	if (cr6.eq) goto loc_8376FC84;
loc_8376FC80:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8376FC84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fcfc
	if (cr6.eq) goto loc_8376FCFC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8376FC94:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a687b8
	ctx.lr = 0x8376FCAC;
	sub_82A687B8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x8376fe50
	if (!cr6.gt) goto loc_8376FE50;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8376fce8
	if (cr6.eq) goto loc_8376FCE8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// blt cr6,0x8376fc94
	if (cr6.lt) goto loc_8376FC94;
	// b 0x8376fcfc
	goto loc_8376FCFC;
loc_8376FCE8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a7de40
	ctx.lr = 0x8376FCFC;
	sub_82A7DE40(ctx, base);
loc_8376FCFC:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bgt cr6,0x8376fc54
	if (cr6.gt) goto loc_8376FC54;
loc_8376FD1C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r28,r28,164
	ctx.r28.s64 = ctx.r28.s64 + 164;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, xer);
	// blt cr6,0x8376fbbc
	if (cr6.lt) goto loc_8376FBBC;
	// lwz r20,104(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r25,43
	ctx.r25.s64 = 43;
	// li r23,-1
	ctx.r23.s64 = -1;
loc_8376FD38:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83784a90
	ctx.lr = 0x8376FD4C;
	sub_83784A90(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8376fe04
	if (cr6.eq) goto loc_8376FE04;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_8376FD60:
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8306c9d8
	ctx.lr = 0x8376FD74;
	sub_8306C9D8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, xer);
	// clrlwi r30,r11,14
	ctx.r30.u64 = ctx.r11.u32 & 0x3FFFF;
	// ble cr6,0x8376fd88
	if (!cr6.gt) goto loc_8376FD88;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8376FD88:
	// lwz r3,72(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376fdc4
	if (cr6.eq) goto loc_8376FDC4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a7dbf8
	ctx.lr = 0x8376FDA0;
	sub_82A7DBF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fdc4
	if (cr6.eq) goto loc_8376FDC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r20)
	PPC_STORE_U8(ctx.r20.u32 + 80, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83774e98
	ctx.lr = 0x8376FDC4;
	sub_83774E98(ctx, base);
loc_8376FDC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a68958
	ctx.lr = 0x8376FDCC;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x8376fdf4
	if (cr6.lt) goto loc_8376FDF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,0(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82a68958
	ctx.lr = 0x8376FDE0;
	sub_82A68958(ctx, base);
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bge cr6,0x8376fdf4
	if (!cr6.lt) goto loc_8376FDF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83767360
	ctx.lr = 0x8376FDF4;
	sub_83767360(ctx, base);
loc_8376FDF4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8376fd60
	if (!cr0.eq) goto loc_8376FD60;
loc_8376FE04:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595150
	ctx.lr = 0x8376FE14;
	sub_82595150(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82416268
	ctx.lr = 0x8376FE1C;
	sub_82416268(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595170
	ctx.lr = 0x8376FE24;
	sub_82595170(ctx, base);
loc_8376FE24:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(ctx.r16.u32, 0, xer);
	// beq cr6,0x8376fe3c
	if (cr6.eq) goto loc_8376FE3C;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x8376FE3C;
	sub_825952B8(ctx, base);
loc_8376FE3C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8376FE44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376FE50;
	sub_831CC188(ctx, base);
loc_8376FE50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x8376FE5C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_8376FE5C"))) PPC_WEAK_FUNC(sub_8376FE5C);
PPC_FUNC_IMPL(__imp__sub_8376FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8376FE60"))) PPC_WEAK_FUNC(sub_8376FE60);
PPC_FUNC_IMPL(__imp__sub_8376FE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8376FE68;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x83763ef8
	ctx.lr = 0x8376FE80;
	sub_83763EF8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376fea4
	if (!cr6.eq) goto loc_8376FEA4;
loc_8376FE8C:
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
loc_8376FE90:
	// ld r11,30992(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 30992);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8376FEA4:
	// lwz r11,72(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8376fe8c
	if (cr6.eq) goto loc_8376FE8C;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fe8c
	if (cr6.eq) goto loc_8376FE8C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fe8c
	if (cr6.eq) goto loc_8376FE8C;
	// bl 0x831156e8
	ctx.lr = 0x8376FECC;
	sub_831156E8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8376fe8c
	if (cr6.eq) goto loc_8376FE8C;
	// bl 0x83115808
	ctx.lr = 0x8376FEDC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8376fe8c
	if (cr6.eq) goto loc_8376FE8C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// beq cr6,0x8376fe90
	if (cr6.eq) goto loc_8376FE90;
	// li r29,0
	ctx.r29.s64 = 0;
	// ld r22,30992(r11)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r11.u32 + 30992);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r23,r11,30992
	ctx.r23.s64 = ctx.r11.s64 + 30992;
	// std r22,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r22.u64);
	// bl 0x82a72110
	ctx.lr = 0x8376FF18;
	sub_82A72110(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ori r27,r9,159
	ctx.r27.u64 = ctx.r9.u64 | 159;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// blt cr6,0x8376ff44
	if (cr6.lt) goto loc_8376FF44;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8376ff48
	if (!cr6.gt) goto loc_8376FF48;
loc_8376FF44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8376FF48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ld r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770018
	if (cr6.eq) goto loc_83770018;
	// lis r31,16
	ctx.r31.s64 = 1048576;
loc_8376FF5C:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,72(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 72);
	// bl 0x8306ef60
	ctx.lr = 0x8376FF78;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8376fff8
	if (!cr6.eq) goto loc_8376FFF8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8376ffec
	if (cr6.eq) goto loc_8376FFEC;
loc_8376FF90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8376ffa8
	if (!cr6.eq) goto loc_8376FFA8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x8376ffcc
	goto loc_8376FFCC;
loc_8376FFA8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376ffc4
	if (!cr6.eq) goto loc_8376FFC4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8376ffc8
	if (cr6.eq) goto loc_8376FFC8;
loc_8376FFC4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8376FFC8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8376FFCC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8376ffe8
	if (!cr6.eq) goto loc_8376FFE8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8376ff90
	if (!cr6.eq) goto loc_8376FF90;
	// b 0x8376ffec
	goto loc_8376FFEC;
loc_8376FFE8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8376FFEC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770008
	if (cr6.eq) goto loc_83770008;
loc_8376FFF8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x8376ff5c
	if (!cr6.gt) goto loc_8376FF5C;
	// b 0x83770054
	goto loc_83770054;
loc_83770008:
	// std r28,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r28.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83770018:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x8306ef60
	ctx.lr = 0x83770024;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377004c
	if (!cr6.eq) goto loc_8377004C;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x83770040;
	sub_82A72110(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770054
	if (cr6.eq) goto loc_83770054;
loc_8377004C:
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// std r24,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r24.u64);
loc_83770054:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83770078
	if (!cr6.eq) goto loc_83770078;
loc_83770064:
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83770078:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// bl 0x82a70e48
	ctx.lr = 0x83770084;
	sub_82A70E48(ctx, base);
	// lwz r3,48(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 48);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x83770094;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x83770128
	if (!cr6.eq) goto loc_83770128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x8306ef60
	ctx.lr = 0x837700B0;
	sub_8306EF60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83770128
	if (cr6.eq) goto loc_83770128;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82a72110
	ctx.lr = 0x837700C8;
	sub_82A72110(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x831a0018
	ctx.lr = 0x837700D8;
	sub_831A0018(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83770100
	if (!cr6.eq) goto loc_83770100;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83770104
	if (cr6.eq) goto loc_83770104;
loc_83770100:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83770104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770128
	if (!cr6.eq) goto loc_83770128;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x83767ef8
	ctx.lr = 0x8377011C;
	sub_83767EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770064
	if (!cr6.eq) goto loc_83770064;
loc_83770128:
	// std r22,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r22.u64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83770138"))) PPC_WEAK_FUNC(sub_83770138);
PPC_FUNC_IMPL(__imp__sub_83770138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83770140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83770160:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83770160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83770160;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83770180;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,564
	ctx.r3.s64 = ctx.r3.s64 + 564;
	// bl 0x831cdcf0
	ctx.lr = 0x83770194;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,652
	ctx.r3.s64 = ctx.r3.s64 + 652;
	// bl 0x831cdcf0
	ctx.lr = 0x837701A8;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,816
	ctx.r3.s64 = ctx.r3.s64 + 816;
	// bl 0x831cdcf0
	ctx.lr = 0x837701BC;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,660
	ctx.r5.s64 = 660;
	// addi r3,r3,1444
	ctx.r3.s64 = ctx.r3.s64 + 1444;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x837701D0;
	sub_831CDCF0(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 + 2104;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// ori r6,r10,1
	ctx.r6.u64 = ctx.r10.u64 | 1;
loc_837701E8:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_837701F4:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x837701f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837701F4;
	// stbx r28,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u8);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bge 0x837701e8
	if (!cr0.lt) goto loc_837701E8;
	// addis r30,r31,81
	ctx.r30.s64 = ctx.r31.s64 + 5308416;
	// li r29,31
	ctx.r29.s64 = 31;
	// addi r30,r30,2112
	ctx.r30.s64 = ctx.r30.s64 + 2112;
loc_83770218:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x831cdcf0
	ctx.lr = 0x83770228;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83770238;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83770248;
	sub_831CDCF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,188
	ctx.r30.s64 = ctx.r30.s64 + 188;
	// bge 0x83770218
	if (!cr0.lt) goto loc_83770218;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addis r9,r31,81
	ctx.r9.s64 = ctx.r31.s64 + 5308416;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r9,r9,8128
	ctx.r9.s64 = ctx.r9.s64 + 8128;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8377026C:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8377026c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8377026C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r28,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u8);
	// bl 0x8376f198
	ctx.lr = 0x83770280;
	sub_8376F198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8377028C"))) PPC_WEAK_FUNC(sub_8377028C);
PPC_FUNC_IMPL(__imp__sub_8377028C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83770290"))) PPC_WEAK_FUNC(sub_83770290);
PPC_FUNC_IMPL(__imp__sub_83770290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83770298;
	__savegprlr_21(ctx, base);
	// stwu r1,-1824(r1)
	ea = -1824 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837702bc
	if (!cr6.eq) goto loc_837702BC;
loc_837702B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837702BC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837702b0
	if (cr6.eq) goto loc_837702B0;
	// bl 0x83763ef8
	ctx.lr = 0x837702CC;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837702b0
	if (cr6.eq) goto loc_837702B0;
	// lis r29,-31770
	ctx.r29.s64 = -2082078720;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r11,31040(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31040);
	// xor r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r24.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83770308
	if (!cr6.eq) goto loc_83770308;
	// xor r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r24.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377030c
	if (cr6.eq) goto loc_8377030C;
loc_83770308:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8377030C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837702b0
	if (!cr6.eq) goto loc_837702B0;
	// bl 0x83763ef8
	ctx.lr = 0x8377031C;
	sub_83763EF8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8376f038
	ctx.lr = 0x83770324;
	sub_8376F038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837702b0
	if (cr6.eq) goto loc_837702B0;
	// bl 0x831156e8
	ctx.lr = 0x83770334;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837702b0
	if (cr6.eq) goto loc_837702B0;
	// bl 0x831156e8
	ctx.lr = 0x83770340;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x83770344;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837702b0
	if (cr6.eq) goto loc_837702B0;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8376f198
	ctx.lr = 0x83770358;
	sub_8376F198(ctx, base);
	// bl 0x83108968
	ctx.lr = 0x8377035C;
	sub_83108968(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837703dc
	if (cr6.eq) goto loc_837703DC;
	// bl 0x83108968
	ctx.lr = 0x83770368;
	sub_83108968(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x8377036C;
	sub_82AA87F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83108968
	ctx.lr = 0x83770374;
	sub_83108968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83108988
	ctx.lr = 0x8377037C;
	sub_83108988(ctx, base);
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r9,r11,8132
	ctx.r9.u64 = ctx.r11.u64 | 8132;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// bl 0x83108968
	ctx.lr = 0x83770390;
	sub_83108968(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x83770394;
	sub_82AA87F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83108968
	ctx.lr = 0x8377039C;
	sub_83108968(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831089d8
	ctx.lr = 0x837703A4;
	sub_831089D8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x83108968
	ctx.lr = 0x837703B4;
	sub_83108968(ctx, base);
	// bl 0x82aa87f0
	ctx.lr = 0x837703B8;
	sub_82AA87F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83108968
	ctx.lr = 0x837703C0;
	sub_83108968(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x83108ac0
	ctx.lr = 0x837703C8;
	sub_83108AC0(ctx, base);
	// lis r7,85
	ctx.r7.s64 = 5570560;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// ori r4,r7,8136
	ctx.r4.u64 = ctx.r7.u64 | 8136;
	// stwx r5,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r5.u32);
loc_837703DC:
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r31,r11,8140
	ctx.r31.u64 = ctx.r11.u64 | 8140;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,0,30,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// bl 0x831156e8
	ctx.lr = 0x83770410;
	sub_831156E8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8377041C;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// bne cr6,0x83770440
	if (!cr6.eq) goto loc_83770440;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_83770440:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// li r5,480
	ctx.r5.s64 = 480;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ori r31,r11,84
	ctx.r31.u64 = ctx.r11.u64 | 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// add r28,r10,r31
	ctx.r28.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83770464;
	sub_831CDCF0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8306e988
	ctx.lr = 0x83770474;
	sub_8306E988(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83770484;
	sub_831CE980(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// stb r21,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r21.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83770498:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83770498
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83770498;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,564
	ctx.r28.s64 = ctx.r28.s64 + 564;
	// bl 0x8376c548
	ctx.lr = 0x837704B8;
	sub_8376C548(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82aa60b8
	ctx.lr = 0x837704CC;
	sub_82AA60B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x837704DC;
	sub_831CE980(ctx, base);
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x831cdcf0
	ctx.lr = 0x837704EC;
	sub_831CDCF0(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addis r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 65536;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// addi r28,r28,816
	ctx.r28.s64 = ctx.r28.s64 + 816;
	// bl 0x83763848
	ctx.lr = 0x83770508;
	sub_83763848(ctx, base);
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// li r5,628
	ctx.r5.s64 = 628;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83770518;
	sub_831CE980(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83770528:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83770528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83770528;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,31040(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31040);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// rlwinm r23,r10,14,0,17
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r26,r8,r31
	ctx.r26.u64 = ctx.r8.u64 + ctx.r31.u64;
	// ori r25,r11,1444
	ctx.r25.u64 = ctx.r11.u64 | 1444;
loc_83770554:
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(ctx.r29.u32, 5, xer);
	// bge cr6,0x83770610
	if (!cr6.lt) goto loc_83770610;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83770610
	if (cr6.eq) goto loc_83770610;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82aa9c78
	ctx.lr = 0x83770588;
	sub_82AA9C78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r5,r11,25
	ctx.r5.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x8376da18
	ctx.lr = 0x837705A0;
	sub_8376DA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770610
	if (!cr6.eq) goto loc_83770610;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, xer);
	// beq cr6,0x83770610
	if (cr6.eq) goto loc_83770610;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83770610
	if (cr6.eq) goto loc_83770610;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82aaaaf0
	ctx.lr = 0x837705CC;
	sub_82AAAAF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770600
	if (!cr6.eq) goto loc_83770600;
	// bl 0x83763ef8
	ctx.lr = 0x837705DC;
	sub_83763EF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837705F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83770610
	if (cr6.eq) goto loc_83770610;
loc_83770600:
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x83770610;
	sub_831CE980(ctx, base);
loc_83770610:
	// addi r28,r28,132
	ctx.r28.s64 = ctx.r28.s64 + 132;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r28,660
	cr6.compare<uint32_t>(ctx.r28.u32, 660, xer);
	// blt cr6,0x83770554
	if (cr6.lt) goto loc_83770554;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83770630:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83770630
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83770630;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r31,r9,652
	ctx.r31.u64 = ctx.r9.u64 | 652;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// add r29,r8,r31
	ctx.r29.u64 = ctx.r8.u64 + ctx.r31.u64;
	// bl 0x82a7db98
	ctx.lr = 0x8377065C;
	sub_82A7DB98(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x8377066C;
	sub_831CE980(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,532
	ctx.r3.s64 = ctx.r1.s64 + 532;
	// bl 0x831cdcf0
	ctx.lr = 0x8377067C;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x831cdcf0
	ctx.lr = 0x8377068C;
	sub_831CDCF0(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// add r29,r7,r6
	ctx.r29.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a68958
	ctx.lr = 0x837706A4;
	sub_82A68958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83770750
	if (cr6.eq) goto loc_83770750;
	// lis r10,81
	ctx.r10.s64 = 5308416;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// ori r25,r10,2112
	ctx.r25.u64 = ctx.r10.u64 | 2112;
	// addi r26,r11,30992
	ctx.r26.s64 = ctx.r11.s64 + 30992;
loc_837706C0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x83770738
	if (!cr6.lt) goto loc_83770738;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83770738
	if (cr6.eq) goto loc_83770738;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a687b8
	ctx.lr = 0x837706F4;
	sub_82A687B8(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83770738
	if (cr6.eq) goto loc_83770738;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// sth r22,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r22.u16);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8306eeb0
	ctx.lr = 0x8377071C;
	sub_8306EEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770738
	if (cr6.eq) goto loc_83770738;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83770738;
	sub_831CE980(ctx, base);
loc_83770738:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,188
	ctx.r27.s64 = ctx.r27.s64 + 188;
	// bl 0x82a68958
	ctx.lr = 0x83770748;
	sub_82A68958(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x837706c0
	if (cr6.lt) goto loc_837706C0;
loc_83770750:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83770768:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x83770768
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83770768;
	// stbx r22,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r22.u8);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lis r8,80
	ctx.r8.s64 = 5242880;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// ori r6,r11,2104
	ctx.r6.u64 = ctx.r11.u64 | 2104;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// ori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 | 1;
	// ori r4,r8,5
	ctx.r4.u64 = ctx.r8.u64 | 5;
loc_83770798:
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bge cr6,0x837707cc
	if (!cr6.lt) goto loc_837707CC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837707cc
	if (cr6.eq) goto loc_837707CC;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_837707C0:
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x837707c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837707C0;
	// stbx r22,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r22.u8);
loc_837707CC:
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blt cr6,0x83770798
	if (cr6.lt) goto loc_83770798;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addis r10,r11,81
	ctx.r10.s64 = ctx.r11.s64 + 5308416;
	// addi r10,r10,8128
	ctx.r10.s64 = ctx.r10.s64 + 8128;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_837707F8:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x837707f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837707F8;
	// stbx r22,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r22.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r21,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r21.u32);
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83770814"))) PPC_WEAK_FUNC(sub_83770814);
PPC_FUNC_IMPL(__imp__sub_83770814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83770818"))) PPC_WEAK_FUNC(sub_83770818);
PPC_FUNC_IMPL(__imp__sub_83770818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x83770820;
	__savegprlr_16(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r11,31040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31040);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83770858
	if (!cr6.eq) goto loc_83770858;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377085c
	if (cr6.eq) goto loc_8377085C;
loc_83770858:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8377085C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770a9c
	if (!cr6.eq) goto loc_83770A9C;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770a9c
	if (cr6.eq) goto loc_83770A9C;
	// bl 0x83763ef8
	ctx.lr = 0x83770878;
	sub_83763EF8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83770a9c
	if (cr6.eq) goto loc_83770A9C;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770a9c
	if (cr6.eq) goto loc_83770A9C;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770a9c
	if (cr6.eq) goto loc_83770A9C;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x831cdcf0
	ctx.lr = 0x837708AC;
	sub_831CDCF0(ctx, base);
	// li r5,188
	ctx.r5.s64 = 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831cdcf0
	ctx.lr = 0x837708BC;
	sub_831CDCF0(ctx, base);
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// lwz r10,36(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// addi r23,r18,32
	ctx.r23.s64 = ctx.r18.s64 + 32;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r20,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r20.s64 = ctx.r9.s32 >> 5;
	cr0.compare<int32_t>(ctx.r20.s32, 0, xer);
	// beq 0x83770a9c
	if (cr0.eq) goto loc_83770A9C;
	// lis r10,81
	ctx.r10.s64 = 5308416;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// ori r22,r10,2112
	ctx.r22.u64 = ctx.r10.u64 | 2112;
	// ori r27,r9,65535
	ctx.r27.u64 = ctx.r9.u64 | 65535;
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// ori r17,r8,159
	ctx.r17.u64 = ctx.r8.u64 | 159;
	// addi r24,r11,30992
	ctx.r24.s64 = ctx.r11.s64 + 30992;
loc_83770904:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x83770aa4
	if (!cr6.gt) goto loc_83770AA4;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// ld r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x83770a88
	if (cr6.eq) goto loc_83770A88;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83770a88
	if (cr6.eq) goto loc_83770A88;
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// bge cr6,0x83770a88
	if (!cr6.lt) goto loc_83770A88;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r31,r10,r22
	ctx.r31.u64 = ctx.r10.u64 + ctx.r22.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83770a88
	if (cr6.eq) goto loc_83770A88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8306eeb0
	ctx.lr = 0x83770970;
	sub_8306EEB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837709f0
	if (cr6.eq) goto loc_837709F0;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x83770990;
	sub_82A72110(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a72110
	ctx.lr = 0x837709A4;
	sub_82A72110(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x837709B4;
	sub_831CE980(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a78580
	ctx.lr = 0x837709C4;
	sub_82A78580(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83767ef8
	ctx.lr = 0x837709D0;
	sub_83767EF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770a44
	if (cr6.eq) goto loc_83770A44;
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a78580
	ctx.lr = 0x837709EC;
	sub_82A78580(ctx, base);
	// b 0x83770a44
	goto loc_83770A44;
loc_837709F0:
	// cmplw cr6,r30,r16
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, xer);
	// blt cr6,0x83770a04
	if (cr6.lt) goto loc_83770A04;
	// cmplw cr6,r30,r17
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r17.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x83770a08
	if (!cr6.gt) goto loc_83770A08;
loc_83770A04:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_83770A08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770a34
	if (!cr6.eq) goto loc_83770A34;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x83770A28;
	sub_82A72110(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770a88
	if (cr6.eq) goto loc_83770A88;
loc_83770A34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x83770A44;
	sub_831CE980(ctx, base);
loc_83770A44:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a78580
	ctx.lr = 0x83770A54;
	sub_82A78580(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x825a10c0
	ctx.lr = 0x83770A64;
	sub_825A10C0(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a78580
	ctx.lr = 0x83770A74;
	sub_82A78580(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83777d30
	ctx.lr = 0x83770A88;
	sub_83777D30(ctx, base);
loc_83770A88:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r25,r25,188
	ctx.r25.s64 = ctx.r25.s64 + 188;
	// cmplw cr6,r28,r20
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, xer);
	// blt cr6,0x83770904
	if (cr6.lt) goto loc_83770904;
loc_83770A9C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_83770AA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x83770AB0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_83770AB0"))) PPC_WEAK_FUNC(sub_83770AB0);
PPC_FUNC_IMPL(__imp__sub_83770AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83770AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-10892
	ctx.r9.s64 = ctx.r11.s64 + -10892;
	// li r29,43
	ctx.r29.s64 = 43;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83770b04
	if (cr6.eq) goto loc_83770B04;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83770AF0;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82416268
	ctx.lr = 0x83770AF8;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83770B00;
	sub_82595170(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_83770B04:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83770b20
	if (cr6.eq) goto loc_83770B20;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83770B1C;
	sub_825952B8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83770B20:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83770b3c
	if (cr6.eq) goto loc_83770B3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83770B3C;
	sub_825952B8(ctx, base);
loc_83770B3C:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83770B50"))) PPC_WEAK_FUNC(sub_83770B50);
PPC_FUNC_IMPL(__imp__sub_83770B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83770B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32213
	ctx.r11.s64 = -2111111168;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-10892
	ctx.r10.s64 = ctx.r11.s64 + -10892;
	// lis r9,-31770
	ctx.r9.s64 = -2082078720;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lis r7,-31770
	ctx.r7.s64 = -2082078720;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// ld r11,30992(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 30992);
	// std r11,52(r3)
	PPC_STORE_U64(ctx.r3.u32 + 52, ctx.r11.u64);
	// lwz r11,31040(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 31040);
	// stb r30,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r30.u8);
	// stb r6,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r6.u8);
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// stw r30,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r30.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r29,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r29.u32);
	// stw r29,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r29.u32);
	// stw r30,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r30.u32);
	// stw r30,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r30.u32);
	// stw r30,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r30.u32);
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x83770c08
	if (cr6.eq) goto loc_83770C08;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a721a8
	ctx.lr = 0x83770C04;
	sub_82A721A8(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
loc_83770C08:
	// li r11,43
	ctx.r11.s64 = 43;
	// lis r4,85
	ctx.r4.s64 = 5570560;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,8144
	ctx.r4.u64 = ctx.r4.u64 | 8144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83770C24;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83770c34
	if (cr6.eq) goto loc_83770C34;
	// bl 0x83770138
	ctx.lr = 0x83770C30;
	sub_83770138(ctx, base);
	// b 0x83770c38
	goto loc_83770C38;
loc_83770C34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83770C38:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83770C48:
	// stw r29,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r29.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83770c48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83770C48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83770C60"))) PPC_WEAK_FUNC(sub_83770C60);
PPC_FUNC_IMPL(__imp__sub_83770C60) {
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
	// bl 0x83770ab0
	ctx.lr = 0x83770C80;
	sub_83770AB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770c98
	if (cr6.eq) goto loc_83770C98;
	// bl 0x82416268
	ctx.lr = 0x83770C94;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83770C98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83770CB0"))) PPC_WEAK_FUNC(sub_83770CB0);
PPC_FUNC_IMPL(__imp__sub_83770CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83770CB8;
	__savegprlr_15(ctx, base);
	// stwu r1,-3616(r1)
	ea = -3616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r4,3644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3644, ctx.r4.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770dc0
	if (cr6.eq) goto loc_83770DC0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83770dc0
	if (cr6.eq) goto loc_83770DC0;
	// bl 0x83763ef8
	ctx.lr = 0x83770CE4;
	sub_83763EF8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83770dc0
	if (cr6.eq) goto loc_83770DC0;
	// lis r25,-31770
	ctx.r25.s64 = -2082078720;
	// lwz r10,3644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,31040(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31040);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83770d24
	if (!cr6.eq) goto loc_83770D24;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83770d28
	if (cr6.eq) goto loc_83770D28;
loc_83770D24:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83770D28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770dc0
	if (!cr6.eq) goto loc_83770DC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// bl 0x82a70e48
	ctx.lr = 0x83770D40;
	sub_82A70E48(ctx, base);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8319ff60
	ctx.lr = 0x83770D4C;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770d70
	if (!cr6.eq) goto loc_83770D70;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8319fea0
	ctx.lr = 0x83770D60;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// beq cr6,0x83770d74
	if (cr6.eq) goto loc_83770D74;
loc_83770D70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83770D74:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83770dcc
	if (cr6.eq) goto loc_83770DCC;
	// lwz r31,3644(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// xor r11,r16,r31
	ctx.r11.u64 = ctx.r16.u64 ^ ctx.r31.u64;
	// rlwinm r10,r11,0,0,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83770da8
	if (!cr6.eq) goto loc_83770DA8;
	// xor r11,r16,r31
	ctx.r11.u64 = ctx.r16.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83770dac
	if (cr6.eq) goto loc_83770DAC;
loc_83770DA8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83770DAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770df8
	if (!cr6.eq) goto loc_83770DF8;
loc_83770DB8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24, ctx.r11.u32);
loc_83770DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3616
	ctx.r1.s64 = ctx.r1.s64 + 3616;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_83770DCC:
	// lwz r3,3644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// bl 0x8319ff60
	ctx.lr = 0x83770DD4;
	sub_8319FF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770db8
	if (!cr6.eq) goto loc_83770DB8;
	// lwz r3,3644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// bl 0x8319fea0
	ctx.lr = 0x83770DE8;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770db8
	if (!cr6.eq) goto loc_83770DB8;
	// lwz r31,3644(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
loc_83770DF8:
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,480
	ctx.r5.s64 = 480;
	// lwz r11,31040(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31040);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r18,r10,1
	ctx.r18.s64 = ctx.r10.s64 + 65536;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r18,r18,84
	ctx.r18.s64 = ctx.r18.s64 + 84;
	// rlwinm r17,r11,14,0,17
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x831cdcf0
	ctx.lr = 0x83770E1C;
	sub_831CDCF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// bl 0x8306e988
	ctx.lr = 0x83770E2C;
	sub_8306E988(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_83770E30:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,3644
	ctx.r4.s64 = ctx.r1.s64 + 3644;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83776c58
	ctx.lr = 0x83770E40;
	sub_83776C58(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,21
	cr6.compare<uint32_t>(ctx.r31.u32, 21, xer);
	// blt cr6,0x83770e30
	if (cr6.lt) goto loc_83770E30;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82a70db0
	ctx.lr = 0x83770E60;
	sub_82A70DB0(ctx, base);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r23,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r23.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// stb r23,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r23.u8);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82ab4a90
	ctx.lr = 0x83770E80;
	sub_82AB4A90(ctx, base);
	// stw r23,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// stw r23,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r23.u32);
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// bl 0x82aabcb0
	ctx.lr = 0x83770E90;
	sub_82AABCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ad5e38
	ctx.lr = 0x83770E9C;
	sub_82AD5E38(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// bl 0x82aabcb0
	ctx.lr = 0x83770EA4;
	sub_82AABCB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83770ee4
	if (cr6.eq) goto loc_83770EE4;
loc_83770EAC:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377cf90
	ctx.lr = 0x83770EB8;
	sub_8377CF90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82a70db0
	ctx.lr = 0x83770EC8;
	sub_82A70DB0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x835977d8
	ctx.lr = 0x83770ED4;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82aabcb0
	ctx.lr = 0x83770EDC;
	sub_82AABCB0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x83770eac
	if (cr6.lt) goto loc_83770EAC;
loc_83770EE4:
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a70db0
	ctx.lr = 0x83770EF8;
	sub_82A70DB0(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// sth r23,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r23.u16);
	// lwz r3,3644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8376c7a0
	ctx.lr = 0x83770F10;
	sub_8376C7A0(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// li r5,480
	ctx.r5.s64 = 480;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x831ce980
	ctx.lr = 0x83770F20;
	sub_831CE980(ctx, base);
	// lwz r10,3644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82a9bc48
	ctx.lr = 0x83770F34;
	sub_82A9BC48(ctx, base);
	// lwz r31,3644(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// xor r9,r16,r31
	ctx.r9.u64 = ctx.r16.u64 ^ ctx.r31.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83770f5c
	if (!cr6.eq) goto loc_83770F5C;
	// xor r11,r16,r31
	ctx.r11.u64 = ctx.r16.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83770f60
	if (cr6.eq) goto loc_83770F60;
loc_83770F5C:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83770F60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83771000
	if (!cr6.eq) goto loc_83771000;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_83770F70:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// li r6,33
	ctx.r6.s64 = 33;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82aa9c78
	ctx.lr = 0x83770F88;
	sub_82AA9C78(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,3644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// clrlwi r31,r11,25
	ctx.r31.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r29,r11,25,7,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x8376da18
	ctx.lr = 0x83770FA8;
	sub_8376DA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83770ff0
	if (!cr6.eq) goto loc_83770FF0;
	// cmplw cr6,r28,r17
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r17.u32, xer);
	// beq cr6,0x83770ff0
	if (cr6.eq) goto loc_83770FF0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83770ff0
	if (cr6.eq) goto loc_83770FF0;
	// lwz r11,3644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// clrlwi r10,r29,25
	ctx.r10.u64 = ctx.r29.u32 & 0x7F;
	// li r6,33
	ctx.r6.s64 = 33;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x82aaa108
	ctx.lr = 0x83770FF0;
	sub_82AAA108(ctx, base);
loc_83770FF0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x83770f70
	if (cr6.lt) goto loc_83770F70;
	// lwz r31,3644(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
loc_83771000:
	// li r5,480
	ctx.r5.s64 = 480;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x831cdcf0
	ctx.lr = 0x83771010;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1328
	ctx.r4.s64 = ctx.r1.s64 + 1328;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8377102C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82ab4a90
	ctx.lr = 0x83771048;
	sub_82AB4A90(ctx, base);
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r23,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r23.u8);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x82ab4a90
	ctx.lr = 0x83771064;
	sub_82AB4A90(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8377109c
	if (cr6.eq) goto loc_8377109C;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82ab4630
	ctx.lr = 0x8377107C;
	sub_82AB4630(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82ab4630
	ctx.lr = 0x8377108C;
	sub_82AB4630(ctx, base);
	// lwz r11,720(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// lwz r10,1344(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// rlwimi r11,r10,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r11.u32);
loc_8377109C:
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r23,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r23.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stb r23,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r23.u8);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82ab4a90
	ctx.lr = 0x837710B8;
	sub_82AB4A90(ctx, base);
	// stw r26,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r26.u32);
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82ab4a90
	ctx.lr = 0x837710D4;
	sub_82AB4A90(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r20,2
	ctx.r20.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837710f4
	if (cr6.lt) goto loc_837710F4;
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x837710F4;
	sub_825952B8(ctx, base);
loc_837710F4:
	// lwz r11,452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r26,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r26.u32);
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r23.u8);
	// blt cr6,0x8377111c
	if (cr6.lt) goto loc_8377111C;
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x825952b8
	ctx.lr = 0x8377111C;
	sub_825952B8(ctx, base);
loc_8377111C:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// stw r23,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r23.u8);
	// blt cr6,0x83771144
	if (cr6.lt) goto loc_83771144;
	// stw r20,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r20.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x83771144;
	sub_825952B8(ctx, base);
loc_83771144:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r23.u8);
	// blt cr6,0x8377116c
	if (cr6.lt) goto loc_8377116C;
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x8377116C;
	sub_825952B8(ctx, base);
loc_8377116C:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c810
	ctx.lr = 0x83771188;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377119c
	if (cr6.eq) goto loc_8377119C;
	// lwz r29,488(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// b 0x837711c0
	goto loc_837711C0;
loc_8377119C:
	// li r5,34
	ctx.r5.s64 = 34;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c890
	ctx.lr = 0x837711AC;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r10
	ctx.r29.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_837711C0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8377129c
	if (cr6.eq) goto loc_8377129C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_837711D4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c810
	ctx.lr = 0x837711EC;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771218
	if (cr6.eq) goto loc_83771218;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771218
	if (cr6.eq) goto loc_83771218;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bctrl 
	ctx.lr = 0x83771218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771218:
	// lwz r11,3644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83771290
	if (!cr6.eq) goto loc_83771290;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c810
	ctx.lr = 0x83771248;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771290
	if (cr6.eq) goto loc_83771290;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771290
	if (cr6.eq) goto loc_83771290;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771290
	if (cr6.lt) goto loc_83771290;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771290
	if (cr6.gt) goto loc_83771290;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bctrl 
	ctx.lr = 0x83771290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771290:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x837711d4
	if (cr6.lt) goto loc_837711D4;
loc_8377129C:
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c810
	ctx.lr = 0x837712AC;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837712c0
	if (cr6.eq) goto loc_837712C0;
	// lwz r30,488(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// b 0x837712e4
	goto loc_837712E4;
loc_837712C0:
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c890
	ctx.lr = 0x837712D0;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r10
	ctx.r30.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_837712E4:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83771364
	if (cr6.eq) goto loc_83771364;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_837712F8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c810
	ctx.lr = 0x83771310;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771358
	if (cr6.eq) goto loc_83771358;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771358
	if (cr6.eq) goto loc_83771358;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771358
	if (cr6.lt) goto loc_83771358;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771358
	if (cr6.gt) goto loc_83771358;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bctrl 
	ctx.lr = 0x83771358;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771358:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x837712f8
	if (cr6.lt) goto loc_837712F8;
loc_83771364:
	// lwz r11,108(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 108);
	// lwz r10,1336(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83771384
	if (!cr6.eq) goto loc_83771384;
	// lwz r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// lwz r9,68(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x83771390
	goto loc_83771390;
loc_83771384:
	// lwz r9,712(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwimi r11,r9,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
loc_83771390:
	// lwz r9,728(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// stw r11,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r11.u32);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837713ac
	if (cr6.eq) goto loc_837713AC;
	// rlwimi r10,r11,0,16,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// stw r10,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r10.u32);
loc_837713AC:
	// bl 0x831156e8
	ctx.lr = 0x837713B0;
	sub_831156E8(ctx, base);
	// lwz r22,240(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771750
	if (cr6.eq) goto loc_83771750;
	// bl 0x831156e8
	ctx.lr = 0x837713C0;
	sub_831156E8(ctx, base);
	// bl 0x83115808
	ctx.lr = 0x837713C4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771750
	if (cr6.eq) goto loc_83771750;
	// bl 0x831156e8
	ctx.lr = 0x837713D4;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// lwz r11,1336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c448
	ctx.lr = 0x837713EC;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771400
	if (cr6.eq) goto loc_83771400;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83124aa8
	ctx.lr = 0x83771400;
	sub_83124AA8(ctx, base);
loc_83771400:
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r26.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stb r23,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r23.u8);
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bl 0x8306c890
	ctx.lr = 0x8377141C;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377149c
	if (cr6.eq) goto loc_8377149C;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377149c
	if (cr6.eq) goto loc_8377149C;
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// bgt cr6,0x8377149c
	if (cr6.gt) goto loc_8377149C;
	// addi r4,r1,2448
	ctx.r4.s64 = ctx.r1.s64 + 2448;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// bctrl 
	ctx.lr = 0x83771454;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377149c
	if (cr6.eq) goto loc_8377149C;
	// addi r11,r1,2448
	ctx.r11.s64 = ctx.r1.s64 + 2448;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r1,2448
	ctx.r11.s64 = ctx.r1.s64 + 2448;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r23,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r23.u8);
loc_83771474:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83771474
	if (!cr6.eq) goto loc_83771474;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,2448
	ctx.r4.s64 = ctx.r1.s64 + 2448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8377149C;
	sub_8259CC28(ctx, base);
loc_8377149C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// bl 0x8311c148
	ctx.lr = 0x837714AC;
	sub_8311C148(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837714d4
	if (!cr6.eq) goto loc_837714D4;
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x837714d4
	if (cr6.eq) goto loc_837714D4;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x837715cc
	goto loc_837715CC;
loc_837714D4:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c148
	ctx.lr = 0x837714E0;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 784);
	// lhz r28,784(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 784);
	// bl 0x8311c628
	ctx.lr = 0x837714F4;
	sub_8311C628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c628
	ctx.lr = 0x83771504;
	sub_8311C628(ctx, base);
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// rlwinm r6,r7,0,25,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837715cc
	if (cr6.eq) goto loc_837715CC;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// addis r3,r30,236
	ctx.r3.s64 = ctx.r30.s64 + 15466496;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// addi r3,r3,10660
	ctx.r3.s64 = ctx.r3.s64 + 10660;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r4,r11,28,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// bl 0x83125ba0
	ctx.lr = 0x83771540;
	sub_83125BA0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r7,712(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837715a4
	if (cr6.eq) goto loc_837715A4;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, xer);
	// ble cr6,0x83771594
	if (!cr6.gt) goto loc_83771594;
loc_83771570:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x837715a0
	if (cr6.eq) goto loc_837715A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83771570
	if (cr6.gt) goto loc_83771570;
	// b 0x837715a4
	goto loc_837715A4;
loc_83771594:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x837715A0;
	sub_831CC188(ctx, base);
loc_837715A0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_837715A4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837715b4
	if (!cr6.eq) goto loc_837715B4;
	// li r29,1
	ctx.r29.s64 = 1;
loc_837715B4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837715c0
	if (cr6.eq) goto loc_837715C0;
	// bl 0x82416268
	ctx.lr = 0x837715C0;
	sub_82416268(ctx, base);
loc_837715C0:
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
loc_837715CC:
	// lwz r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c448
	ctx.lr = 0x837715DC;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837715e8
	if (!cr6.eq) goto loc_837715E8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_837715E8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771728
	if (cr6.eq) goto loc_83771728;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x8377160C;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771650
	if (cr6.eq) goto loc_83771650;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771650
	if (cr6.eq) goto loc_83771650;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771650
	if (cr6.lt) goto loc_83771650;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771650
	if (cr6.gt) goto loc_83771650;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bctrl 
	ctx.lr = 0x83771650;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771650:
	// li r5,38
	ctx.r5.s64 = 38;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8306c890
	ctx.lr = 0x83771660;
	sub_8306C890(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377169c
	if (cr6.eq) goto loc_8377169C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377169c
	if (cr6.eq) goto loc_8377169C;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8377168c
	if (!cr6.lt) goto loc_8377168C;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_8377168C:
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8377169C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8377169C:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// bl 0x82aabcb0
	ctx.lr = 0x837716A4;
	sub_82AABCB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771728
	if (cr6.eq) goto loc_83771728;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_837716B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8377cf90
	ctx.lr = 0x837716B8;
	sub_8377CF90(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8306c7a0
	ctx.lr = 0x837716D0;
	sub_8306C7A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771714
	if (cr6.eq) goto loc_83771714;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771714
	if (cr6.eq) goto loc_83771714;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771714
	if (cr6.lt) goto loc_83771714;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771714
	if (cr6.gt) goto loc_83771714;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bctrl 
	ctx.lr = 0x83771714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771714:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bl 0x82aabcb0
	ctx.lr = 0x83771720;
	sub_82AABCB0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x837716b0
	if (cr6.lt) goto loc_837716B0;
loc_83771728:
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83771744
	if (cr6.lt) goto loc_83771744;
	// stw r20,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r20.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x83771744;
	sub_825952B8(ctx, base);
loc_83771744:
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r26.u32);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// stb r23,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r23.u8);
loc_83771750:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,3644(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83775270
	ctx.lr = 0x83771764;
	sub_83775270(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,3644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,564
	ctx.r31.s64 = ctx.r31.s64 + 564;
	// bl 0x8376c548
	ctx.lr = 0x8377177C;
	sub_8376C548(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r10,r1,600
	ctx.r10.s64 = ctx.r1.s64 + 600;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8377178C:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8377178c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8377178C;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837717B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,504
	ctx.r11.s64 = ctx.r1.s64 + 504;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_837717C0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837717c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837717C0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x837717D8;
	sub_831CE980(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
	// bl 0x83071ea8
	ctx.lr = 0x837717FC;
	sub_83071EA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377187c
	if (cr6.eq) goto loc_8377187C;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377187c
	if (cr6.eq) goto loc_8377187C;
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// bgt cr6,0x8377187c
	if (cr6.gt) goto loc_8377187C;
	// addi r4,r1,2960
	ctx.r4.s64 = ctx.r1.s64 + 2960;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bctrl 
	ctx.lr = 0x83771834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377187c
	if (cr6.eq) goto loc_8377187C;
	// addi r11,r1,2960
	ctx.r11.s64 = ctx.r1.s64 + 2960;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r1,2960
	ctx.r11.s64 = ctx.r1.s64 + 2960;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r23,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r23.u8);
loc_83771854:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83771854
	if (!cr6.eq) goto loc_83771854;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,2960
	ctx.r4.s64 = ctx.r1.s64 + 2960;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8377187C;
	sub_8259CC28(ctx, base);
loc_8377187C:
	// lbz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 616);
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837718ec
	if (cr6.eq) goto loc_837718EC;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x83071ea8
	ctx.lr = 0x8377189C;
	sub_83071EA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837718d8
	if (cr6.eq) goto loc_837718D8;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837718d8
	if (cr6.eq) goto loc_837718D8;
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837718c8
	if (!cr6.lt) goto loc_837718C8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_837718C8:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x837718D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837718D8:
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lbz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 616);
	// rlwimi r11,r9,0,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x837718f0
	goto loc_837718F0;
loc_837718EC:
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
loc_837718F0:
	// lwz r9,104(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 104);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x83771910
	if (!cr6.eq) goto loc_83771910;
	// lhz r9,98(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 98);
	// rlwinm r8,r11,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r7.u32);
	// b 0x8377191c
	goto loc_8377191C;
loc_83771910:
	// lwz r9,612(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// rlwimi r11,r9,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
loc_8377191C:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377195c
	if (cr6.eq) goto loc_8377195C;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377195c
	if (cr6.eq) goto loc_8377195C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d427a8
	ctx.lr = 0x83771940;
	sub_82D427A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377195c
	if (cr6.eq) goto loc_8377195C;
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// rlwimi r11,r10,0,16,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0000);
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
loc_8377195C:
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837776a8
	ctx.lr = 0x83771970;
	sub_837776A8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8377198c
	if (cr6.lt) goto loc_8377198C;
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x8377198C;
	sub_825952B8(ctx, base);
loc_8377198C:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// beq cr6,0x83771afc
	if (cr6.eq) goto loc_83771AFC;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,628
	ctx.r5.s64 = 628;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// addi r31,r31,816
	ctx.r31.s64 = ctx.r31.s64 + 816;
	// bl 0x831cdcf0
	ctx.lr = 0x837719C0;
	sub_831CDCF0(ctx, base);
	// lwz r4,3644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x8306e850
	ctx.lr = 0x837719CC;
	sub_8306E850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837719e4
	if (cr6.eq) goto loc_837719E4;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// li r5,628
	ctx.r5.s64 = 628;
	// bl 0x831ce980
	ctx.lr = 0x837719E4;
	sub_831CE980(ctx, base);
loc_837719E4:
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// li r5,628
	ctx.r5.s64 = 628;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x837719F4;
	sub_831CE980(ctx, base);
	// lwz r11,3644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bl 0x8307e348
	ctx.lr = 0x83771A10;
	sub_8307E348(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83771a54
	if (cr6.eq) goto loc_83771A54;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771a54
	if (cr6.eq) goto loc_83771A54;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771a54
	if (cr6.lt) goto loc_83771A54;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771a54
	if (cr6.gt) goto loc_83771A54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// bctrl 
	ctx.lr = 0x83771A54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771A54:
	// lwz r31,72(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 72);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83771afc
	if (cr6.eq) goto loc_83771AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x8306e850
	ctx.lr = 0x83771A70;
	sub_8306E850(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83771a98
	if (!cr6.eq) goto loc_83771A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,31040(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 31040);
	// bl 0x8306e850
	ctx.lr = 0x83771A84;
	sub_8306E850(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83771a98
	if (!cr6.eq) goto loc_83771A98;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x83771ad8
	goto loc_83771AD8;
loc_83771A98:
	// addi r4,r1,1808
	ctx.r4.s64 = ctx.r1.s64 + 1808;
	// li r5,628
	ctx.r5.s64 = 628;
	// bl 0x831ce980
	ctx.lr = 0x83771AA4;
	sub_831CE980(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// beq cr6,0x83771ac8
	if (cr6.eq) goto loc_83771AC8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8306e8d8
	ctx.lr = 0x83771AC4;
	sub_8306E8D8(ctx, base);
	// b 0x83771ad4
	goto loc_83771AD4;
loc_83771AC8:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8306df38
	ctx.lr = 0x83771AD4;
	sub_8306DF38(ctx, base);
loc_83771AD4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83771AD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771afc
	if (cr6.eq) goto loc_83771AFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r19)
	PPC_STORE_U8(ctx.r19.u32 + 80, ctx.r11.u8);
	// addi r4,r1,1808
	ctx.r4.s64 = ctx.r1.s64 + 1808;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83774f48
	ctx.lr = 0x83771AFC;
	sub_83774F48(ctx, base);
loc_83771AFC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r24,r21,72
	ctx.r24.s64 = ctx.r21.s64 + 72;
	// ori r25,r11,1444
	ctx.r25.u64 = ctx.r11.u64 | 1444;
loc_83771B10:
	// cmplwi cr6,r26,5
	cr6.compare<uint32_t>(ctx.r26.u32, 5, xer);
	// bge cr6,0x83771d5c
	if (!cr6.lt) goto loc_83771D5C;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83771d5c
	if (cr6.eq) goto loc_83771D5C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,33
	ctx.r5.s64 = 33;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8306c810
	ctx.lr = 0x83771B44;
	sub_8306C810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771b70
	if (cr6.eq) goto loc_83771B70;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771b70
	if (cr6.eq) goto loc_83771B70;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bctrl 
	ctx.lr = 0x83771B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771B70:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,3644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// clrlwi r31,r11,25
	ctx.r31.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r30,r11,25,7,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x8376da18
	ctx.lr = 0x83771B90;
	sub_8376DA18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83771d5c
	if (!cr6.eq) goto loc_83771D5C;
	// cmplw cr6,r29,r17
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r17.u32, xer);
	// beq cr6,0x83771d5c
	if (cr6.eq) goto loc_83771D5C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83771d5c
	if (cr6.eq) goto loc_83771D5C;
	// rlwinm r11,r29,18,14,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0x3FFFF;
	// clrlwi r10,r16,14
	ctx.r10.u64 = ctx.r16.u32 & 0x3FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83771d5c
	if (!cr6.eq) goto loc_83771D5C;
	// lwz r11,3644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// clrlwi r9,r30,25
	ctx.r9.u64 = ctx.r30.u32 & 0x7F;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// addi r8,r1,1184
	ctx.r8.s64 = ctx.r1.s64 + 1184;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_83771BE8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83771be8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83771BE8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// bl 0x8306e740
	ctx.lr = 0x83771C00;
	sub_8306E740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771c18
	if (cr6.eq) goto loc_83771C18;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x831ce980
	ctx.lr = 0x83771C18;
	sub_831CE980(ctx, base);
loc_83771C18:
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x83771C28;
	sub_831CE980(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x83744a28
	ctx.lr = 0x83771C3C;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771c80
	if (cr6.eq) goto loc_83771C80;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771c80
	if (cr6.eq) goto loc_83771C80;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771c80
	if (cr6.lt) goto loc_83771C80;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771c80
	if (cr6.gt) goto loc_83771C80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bctrl 
	ctx.lr = 0x83771C80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771C80:
	// lwz r11,44(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83771cb0
	if (!cr6.eq) goto loc_83771CB0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83744a28
	ctx.lr = 0x83771CA4;
	sub_83744A28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x83771d0c
	goto loc_83771D0C;
loc_83771CB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83744a28
	ctx.lr = 0x83771CB8;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771ccc
	if (cr6.eq) goto loc_83771CCC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x83771cf0
	goto loc_83771CF0;
loc_83771CCC:
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83572958
	ctx.lr = 0x83771CDC;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_83771CF0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,119
	ctx.r5.s64 = 119;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x83744a28
	ctx.lr = 0x83771D04;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
loc_83771D0C:
	// beq cr6,0x83771d48
	if (cr6.eq) goto loc_83771D48;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83771d48
	if (cr6.eq) goto loc_83771D48;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83771d48
	if (cr6.lt) goto loc_83771D48;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83771d48
	if (cr6.gt) goto loc_83771D48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bctrl 
	ctx.lr = 0x83771D48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83771D48:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837772d8
	ctx.lr = 0x83771D5C;
	sub_837772D8(ctx, base);
loc_83771D5C:
	// addi r27,r27,132
	ctx.r27.s64 = ctx.r27.s64 + 132;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r27,660
	cr6.compare<uint32_t>(ctx.r27.u32, 660, xer);
	// blt cr6,0x83771b10
	if (cr6.lt) goto loc_83771B10;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,3644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83770818
	ctx.lr = 0x83771D80;
	sub_83770818(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,3644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3644);
	// bl 0x8376f968
	ctx.lr = 0x83771D90;
	sub_8376F968(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// stw r11,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r11.u32);
	// beq cr6,0x83771db0
	if (cr6.eq) goto loc_83771DB0;
	// stw r20,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r20.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x825952b8
	ctx.lr = 0x83771DB0;
	sub_825952B8(ctx, base);
loc_83771DB0:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83771dcc
	if (cr6.lt) goto loc_83771DCC;
	// stw r20,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r20.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x83771DCC;
	sub_825952B8(ctx, base);
loc_83771DCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,3616
	ctx.r1.s64 = ctx.r1.s64 + 3616;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83771DD8"))) PPC_WEAK_FUNC(sub_83771DD8);
PPC_FUNC_IMPL(__imp__sub_83771DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83771DE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83771e00
	if (!cr6.eq) goto loc_83771E00;
loc_83771DF4:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83771E00:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771df4
	if (cr6.eq) goto loc_83771DF4;
	// bl 0x831156e8
	ctx.lr = 0x83771E10;
	sub_831156E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771df4
	if (cr6.eq) goto loc_83771DF4;
	// bl 0x83115808
	ctx.lr = 0x83771E20;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771df4
	if (cr6.eq) goto loc_83771DF4;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ori r10,r11,8140
	ctx.r10.u64 = ctx.r11.u64 | 8140;
	// lwzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// clrlwi r30,r9,31
	ctx.r30.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82a70e48
	ctx.lr = 0x83771E4C;
	sub_82A70E48(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x83771E5C;
	sub_8311C148(ctx, base);
	// lwz r7,796(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r6,r7,23,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x1;
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// beq cr6,0x83771e7c
	if (cr6.eq) goto loc_83771E7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83771E7C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// addi r3,r3,652
	ctx.r3.s64 = ctx.r3.s64 + 652;
	// bl 0x82a68958
	ctx.lr = 0x83771E94;
	sub_82A68958(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771f40
	if (cr6.eq) goto loc_83771F40;
	// lis r10,81
	ctx.r10.s64 = 5308416;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// ori r30,r10,2112
	ctx.r30.u64 = ctx.r10.u64 | 2112;
	// addi r26,r11,30992
	ctx.r26.s64 = ctx.r11.s64 + 30992;
loc_83771EB8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// bge cr6,0x83771f30
	if (!cr6.lt) goto loc_83771F30;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83771f30
	if (cr6.eq) goto loc_83771F30;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r22,r11,r30
	ctx.r22.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a72110
	ctx.lr = 0x83771EF0;
	sub_82A72110(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8376fe60
	ctx.lr = 0x83771F10;
	sub_8376FE60(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// beq cr6,0x83771f30
	if (cr6.eq) goto loc_83771F30;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_83771F30:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// blt cr6,0x83771eb8
	if (cr6.lt) goto loc_83771EB8;
loc_83771F40:
	// cmplw cr6,r25,r24
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, xer);
	// beq cr6,0x83771f7c
	if (cr6.eq) goto loc_83771F7C;
	// lwz r11,796(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 796);
	// rlwinm r11,r11,19,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83771f60
	if (!cr6.eq) goto loc_83771F60;
	// cmplwi cr6,r24,16
	cr6.compare<uint32_t>(ctx.r24.u32, 16, xer);
	// blt cr6,0x83771f70
	if (cr6.lt) goto loc_83771F70;
loc_83771F60:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83771f7c
	if (!cr6.eq) goto loc_83771F7C;
	// cmplwi cr6,r24,23
	cr6.compare<uint32_t>(ctx.r24.u32, 23, xer);
	// beq cr6,0x83771f7c
	if (cr6.eq) goto loc_83771F7C;
loc_83771F70:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83771F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83771F88"))) PPC_WEAK_FUNC(sub_83771F88);
PPC_FUNC_IMPL(__imp__sub_83771F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83771F90;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83771fb4
	if (!cr6.eq) goto loc_83771FB4;
loc_83771FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_83771FB4:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83771fa8
	if (cr6.eq) goto loc_83771FA8;
	// bl 0x83763ef8
	ctx.lr = 0x83771FC4;
	sub_83763EF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83771fa8
	if (cr6.eq) goto loc_83771FA8;
	// addi r19,r28,32
	ctx.r19.s64 = ctx.r28.s64 + 32;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a72f28
	ctx.lr = 0x83771FD8;
	sub_82A72F28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x8319fea0
	ctx.lr = 0x83771FF4;
	sub_8319FEA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83772008
	if (cr6.eq) goto loc_83772008;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_83772008:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,652
	ctx.r3.s64 = ctx.r3.s64 + 652;
	// bl 0x82a68958
	ctx.lr = 0x83772018;
	sub_82A68958(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837721b8
	if (cr6.eq) goto loc_837721B8;
	// lis r10,81
	ctx.r10.s64 = 5308416;
	// lis r11,-31770
	ctx.r11.s64 = -2082078720;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ori r22,r10,2112
	ctx.r22.u64 = ctx.r10.u64 | 2112;
	// lis r26,-31770
	ctx.r26.s64 = -2082078720;
	// addi r24,r11,30992
	ctx.r24.s64 = ctx.r11.s64 + 30992;
loc_83772040:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bge cr6,0x8377218c
	if (!cr6.lt) goto loc_8377218C;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8377218c
	if (cr6.eq) goto loc_8377218C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a72110
	ctx.lr = 0x83772070;
	sub_82A72110(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// sth r30,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r30.u16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8376fe60
	ctx.lr = 0x83772090;
	sub_8376FE60(ctx, base);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stb r30,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r30.u8);
	// std r10,132(r1)
	PPC_STORE_U64(ctx.r1.u32 + 132, ctx.r10.u64);
	// ld r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// bl 0x825a2298
	ctx.lr = 0x837720B8;
	sub_825A2298(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837720f8
	if (cr6.eq) goto loc_837720F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8376cab0
	ctx.lr = 0x837720D8;
	sub_8376CAB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// bl 0x83546fd8
	ctx.lr = 0x837720F0;
	sub_83546FD8(ctx, base);
	// lwz r11,31040(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31040);
	// b 0x83772104
	goto loc_83772104;
loc_837720F8:
	// lwz r11,31040(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 31040);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_83772104:
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// stb r20,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r20.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8377217c
	if (!cr6.eq) goto loc_8377217C;
	// rlwinm r10,r31,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83772138
	if (!cr6.eq) goto loc_83772138;
	// xor r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8377213c
	if (cr6.eq) goto loc_8377213C;
loc_83772138:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8377213C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377217c
	if (!cr6.eq) goto loc_8377217C;
	// rlwinm r11,r27,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x83772168
	if (!cr6.eq) goto loc_83772168;
	// xor r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r27.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377216c
	if (cr6.eq) goto loc_8377216C;
loc_83772168:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8377216C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r20,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r20.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83772180
	if (cr6.eq) goto loc_83772180;
loc_8377217C:
	// stb r30,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r30.u8);
loc_83772180:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x835bc5a0
	ctx.lr = 0x8377218C;
	sub_835BC5A0(ctx, base);
loc_8377218C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r25,r25,188
	ctx.r25.s64 = ctx.r25.s64 + 188;
	// cmplw cr6,r29,r21
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, xer);
	// blt cr6,0x83772040
	if (cr6.lt) goto loc_83772040;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837721b8
	if (cr6.eq) goto loc_837721B8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837721B8;
	sub_825952B8(ctx, base);
loc_837721B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837721C4"))) PPC_WEAK_FUNC(sub_837721C4);
PPC_FUNC_IMPL(__imp__sub_837721C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837721C8"))) PPC_WEAK_FUNC(sub_837721C8);
PPC_FUNC_IMPL(__imp__sub_837721C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837721D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8377237c
	if (cr6.eq) goto loc_8377237C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi. r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83772228
	if (!cr0.eq) goto loc_83772228;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8377237c
	if (cr6.eq) goto loc_8377237C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a721a8
	ctx.lr = 0x83772214;
	sub_82A721A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83772228:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi r11,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83772270
	if (cr6.gt) goto loc_83772270;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82a721a8
	ctx.lr = 0x83772244;
	sub_82A721A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83772270:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x837722f0
	if (cr6.gt) goto loc_837722F0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a721a8
	ctx.lr = 0x83772298;
	sub_82A721A8(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// beq cr6,0x837722e0
	if (cr6.eq) goto loc_837722E0;
loc_837722AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837722d0
	if (cr6.eq) goto loc_837722D0;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_837722C4:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x837722c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837722C4;
loc_837722D0:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x837722ac
	if (!cr6.eq) goto loc_837722AC;
loc_837722E0:
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837722F0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8377230c
	if (cr6.eq) goto loc_8377230C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8377230C;
	sub_825952B8(ctx, base);
loc_8377230C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 5;
	// bl 0x82d18e90
	ctx.lr = 0x83772324;
	sub_82D18E90(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8377237c
	if (cr6.eq) goto loc_8377237C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x83772378
	if (cr6.eq) goto loc_83772378;
loc_83772344:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83772368
	if (cr6.eq) goto loc_83772368;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8377235C:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8377235c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8377235C;
loc_83772368:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x83772344
	if (!cr6.eq) goto loc_83772344;
loc_83772378:
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_8377237C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83772388"))) PPC_WEAK_FUNC(sub_83772388);
PPC_FUNC_IMPL(__imp__sub_83772388) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x837721c8
	ctx.lr = 0x837723A4;
	sub_837721C8(ctx, base);
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

__attribute__((alias("__imp__sub_837723B8"))) PPC_WEAK_FUNC(sub_837723B8);
PPC_FUNC_IMPL(__imp__sub_837723B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,2000
	cr6.compare<uint32_t>(ctx.r5.u32, 2000, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr6,r11,250
	cr6.compare<uint32_t>(ctx.r11.u32, 250, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r8,r8,6464
	ctx.r8.s64 = ctx.r8.s64 + 6464;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// beq cr6,0x83772400
	if (cr6.eq) goto loc_83772400;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// blr 
	return;
loc_83772400:
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377240C"))) PPC_WEAK_FUNC(sub_8377240C);
PPC_FUNC_IMPL(__imp__sub_8377240C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772410"))) PPC_WEAK_FUNC(sub_83772410);
PPC_FUNC_IMPL(__imp__sub_83772410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x837724cc
	if (cr6.gt) goto loc_837724CC;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83772444
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83772444;
	// bdzf 4*cr6+eq,0x837724cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837724CC;
	// bdzf 4*cr6+eq,0x83772438
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83772438;
	// bne cr6,0x83772450
	if (!cr6.eq) goto loc_83772450;
	// li r7,250
	ctx.r7.s64 = 250;
	// b 0x83772454
	goto loc_83772454;
loc_83772438:
	// li r11,250
	ctx.r11.s64 = 250;
	// li r7,300
	ctx.r7.s64 = 300;
	// b 0x83772458
	goto loc_83772458;
loc_83772444:
	// li r11,300
	ctx.r11.s64 = 300;
	// li r7,2000
	ctx.r7.s64 = 2000;
	// b 0x83772458
	goto loc_83772458;
loc_83772450:
	// li r7,2000
	ctx.r7.s64 = 2000;
loc_83772454:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83772458:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x837724bc
	if (!cr6.lt) goto loc_837724BC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r10,6464
	ctx.r9.u64 = ctx.r10.u64 | 6464;
loc_8377246C:
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x837724a0
	if (!cr6.lt) goto loc_837724A0;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x837724a0
	if (!cr6.lt) goto loc_837724A0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// slw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// and r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837724a4
	goto loc_837724A4;
loc_837724A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837724A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837724c4
	if (cr6.eq) goto loc_837724C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8377246c
	if (cr6.lt) goto loc_8377246C;
loc_837724BC:
	// li r3,2000
	ctx.r3.s64 = 2000;
	// blr 
	return;
loc_837724C4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_837724CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837724D4"))) PPC_WEAK_FUNC(sub_837724D4);
PPC_FUNC_IMPL(__imp__sub_837724D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837724D8"))) PPC_WEAK_FUNC(sub_837724D8);
PPC_FUNC_IMPL(__imp__sub_837724D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x8377259c
	if (cr6.gt) goto loc_8377259C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8377250c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377250C;
	// bdzf 4*cr6+eq,0x8377259c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8377259C;
	// bdzf 4*cr6+eq,0x83772500
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83772500;
	// bne cr6,0x83772518
	if (!cr6.eq) goto loc_83772518;
	// li r10,250
	ctx.r10.s64 = 250;
	// b 0x8377251c
	goto loc_8377251C;
loc_83772500:
	// li r11,250
	ctx.r11.s64 = 250;
	// li r10,300
	ctx.r10.s64 = 300;
	// b 0x83772520
	goto loc_83772520;
loc_8377250C:
	// li r11,300
	ctx.r11.s64 = 300;
	// li r10,2000
	ctx.r10.s64 = 2000;
	// b 0x83772520
	goto loc_83772520;
loc_83772518:
	// li r10,2000
	ctx.r10.s64 = 2000;
loc_8377251C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83772520:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83772594
	if (!cr6.lt) goto loc_83772594;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,6464
	ctx.r10.u64 = ctx.r11.u64 | 6464;
loc_83772544:
	// cmplwi cr6,r9,2000
	cr6.compare<uint32_t>(ctx.r9.u32, 2000, xer);
	// bge cr6,0x83772578
	if (!cr6.lt) goto loc_83772578;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,250
	cr6.compare<uint32_t>(ctx.r11.u32, 250, xer);
	// bge cr6,0x83772578
	if (!cr6.lt) goto loc_83772578;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// slw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// and r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + ctx.r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8377257c
	goto loc_8377257C;
loc_83772578:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8377257C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377258c
	if (cr6.eq) goto loc_8377258C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8377258C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x83772544
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83772544;
loc_83772594:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_8377259C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837725A4"))) PPC_WEAK_FUNC(sub_837725A4);
PPC_FUNC_IMPL(__imp__sub_837725A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837725A8"))) PPC_WEAK_FUNC(sub_837725A8);
PPC_FUNC_IMPL(__imp__sub_837725A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837725dc
	if (cr6.eq) goto loc_837725DC;
	// bl 0x82416268
	ctx.lr = 0x837725D8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837725DC:
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

__attribute__((alias("__imp__sub_837725F0"))) PPC_WEAK_FUNC(sub_837725F0);
PPC_FUNC_IMPL(__imp__sub_837725F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8377260c
	if (!cr6.eq) goto loc_8377260C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8377260C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83772614"))) PPC_WEAK_FUNC(sub_83772614);
PPC_FUNC_IMPL(__imp__sub_83772614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772618"))) PPC_WEAK_FUNC(sub_83772618);
PPC_FUNC_IMPL(__imp__sub_83772618) {
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
	// bl 0x83763b90
	ctx.lr = 0x83772630;
	sub_83763B90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8377264c
	if (!cr6.eq) goto loc_8377264C;
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
loc_8377264C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// addis r4,r10,96
	ctx.r4.s64 = ctx.r10.s64 + 6291456;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,-4872
	ctx.r4.s64 = ctx.r4.s64 + -4872;
	// bl 0x83784c00
	ctx.lr = 0x83772670;
	sub_83784C00(ctx, base);
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

__attribute__((alias("__imp__sub_83772688"))) PPC_WEAK_FUNC(sub_83772688);
PPC_FUNC_IMPL(__imp__sub_83772688) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837726e0
	if (cr6.eq) goto loc_837726E0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837726BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837726e0
	if (cr6.eq) goto loc_837726E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837724d8
	ctx.lr = 0x837726CC;
	sub_837724D8(ctx, base);
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
loc_837726E0:
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

__attribute__((alias("__imp__sub_837726F8"))) PPC_WEAK_FUNC(sub_837726F8);
PPC_FUNC_IMPL(__imp__sub_837726F8) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83772688
	ctx.lr = 0x83772708;
	sub_83772688(ctx, base);
	// subfic r3,r3,250
	xer.ca = ctx.r3.u32 <= 250;
	ctx.r3.s64 = 250 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377271C"))) PPC_WEAK_FUNC(sub_8377271C);
PPC_FUNC_IMPL(__imp__sub_8377271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772720"))) PPC_WEAK_FUNC(sub_83772720);
PPC_FUNC_IMPL(__imp__sub_83772720) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8377291c
	if (cr6.eq) goto loc_8377291C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83772754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8377291c
	if (cr6.eq) goto loc_8377291C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,302
	ctx.r8.s64 = 302;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r11,r11,6464
	ctx.r11.u64 = ctx.r11.u64 | 6464;
loc_83772774:
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x837727b0
	if (!cr6.lt) goto loc_837727B0;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x837727b0
	if (!cr6.lt) goto loc_837727B0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// clrlwi r5,r9,29
	ctx.r5.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837727b4
	goto loc_837727B4;
loc_837727B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837727B4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837727c4
	if (cr6.eq) goto loc_837727C4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_837727C4:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83772800
	if (!cr6.lt) goto loc_83772800;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83772800
	if (!cr6.lt) goto loc_83772800;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// clrlwi r5,r9,29
	ctx.r5.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83772804
	goto loc_83772804;
loc_83772800:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83772804:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83772814
	if (cr6.eq) goto loc_83772814;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83772814:
	// cmplwi cr6,r8,2000
	cr6.compare<uint32_t>(ctx.r8.u32, 2000, xer);
	// bge cr6,0x83772848
	if (!cr6.lt) goto loc_83772848;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83772848
	if (!cr6.lt) goto loc_83772848;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r9,r8,29
	ctx.r9.u64 = ctx.r8.u32 & 0x7;
	// slw r5,r7,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8377284c
	goto loc_8377284C;
loc_83772848:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8377284C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8377285c
	if (cr6.eq) goto loc_8377285C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8377285C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83772894
	if (!cr6.lt) goto loc_83772894;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,250
	cr6.compare<uint32_t>(ctx.r9.u32, 250, xer);
	// bge cr6,0x83772894
	if (!cr6.lt) goto loc_83772894;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	// slw r4,r7,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// and r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 & ctx.r10.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83772898
	goto loc_83772898;
loc_83772894:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83772898:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837728a8
	if (cr6.eq) goto loc_837728A8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_837728A8:
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x837728e4
	if (!cr6.lt) goto loc_837728E4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x837728e4
	if (!cr6.lt) goto loc_837728E4;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// clrlwi r5,r9,29
	ctx.r5.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837728e8
	goto loc_837728E8;
loc_837728E4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837728E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837728f8
	if (cr6.eq) goto loc_837728F8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_837728F8:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// blt cr6,0x83772774
	if (cr6.lt) goto loc_83772774;
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
loc_8377291C:
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

__attribute__((alias("__imp__sub_83772934"))) PPC_WEAK_FUNC(sub_83772934);
PPC_FUNC_IMPL(__imp__sub_83772934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772938"))) PPC_WEAK_FUNC(sub_83772938);
PPC_FUNC_IMPL(__imp__sub_83772938) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83772720
	ctx.lr = 0x83772948;
	sub_83772720(ctx, base);
	// subfic r3,r3,1700
	xer.ca = ctx.r3.u32 <= 1700;
	ctx.r3.s64 = 1700 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8377295C"))) PPC_WEAK_FUNC(sub_8377295C);
PPC_FUNC_IMPL(__imp__sub_8377295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772960"))) PPC_WEAK_FUNC(sub_83772960);
PPC_FUNC_IMPL(__imp__sub_83772960) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83772b5c
	if (cr6.eq) goto loc_83772B5C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83772994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83772b5c
	if (cr6.eq) goto loc_83772B5C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,252
	ctx.r8.s64 = 252;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r11,r11,6464
	ctx.r11.u64 = ctx.r11.u64 | 6464;
loc_837729B4:
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x837729f0
	if (!cr6.lt) goto loc_837729F0;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x837729f0
	if (!cr6.lt) goto loc_837729F0;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// clrlwi r5,r9,29
	ctx.r5.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837729f4
	goto loc_837729F4;
loc_837729F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837729F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83772a04
	if (cr6.eq) goto loc_83772A04;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83772A04:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83772a40
	if (!cr6.lt) goto loc_83772A40;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83772a40
	if (!cr6.lt) goto loc_83772A40;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// clrlwi r5,r9,29
	ctx.r5.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83772a44
	goto loc_83772A44;
loc_83772A40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83772A44:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83772a54
	if (cr6.eq) goto loc_83772A54;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83772A54:
	// cmplwi cr6,r8,2000
	cr6.compare<uint32_t>(ctx.r8.u32, 2000, xer);
	// bge cr6,0x83772a88
	if (!cr6.lt) goto loc_83772A88;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83772a88
	if (!cr6.lt) goto loc_83772A88;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// clrlwi r9,r8,29
	ctx.r9.u64 = ctx.r8.u32 & 0x7;
	// slw r5,r7,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83772a8c
	goto loc_83772A8C;
loc_83772A88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83772A8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83772a9c
	if (cr6.eq) goto loc_83772A9C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83772A9C:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83772ad4
	if (!cr6.lt) goto loc_83772AD4;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,250
	cr6.compare<uint32_t>(ctx.r9.u32, 250, xer);
	// bge cr6,0x83772ad4
	if (!cr6.lt) goto loc_83772AD4;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	// slw r4,r7,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// and r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 & ctx.r10.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83772ad8
	goto loc_83772AD8;
loc_83772AD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83772AD8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83772ae8
	if (cr6.eq) goto loc_83772AE8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83772AE8:
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x83772b24
	if (!cr6.lt) goto loc_83772B24;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// bge cr6,0x83772b24
	if (!cr6.lt) goto loc_83772B24;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r9,r8,2
	ctx.r9.s64 = ctx.r8.s64 + 2;
	// clrlwi r5,r9,29
	ctx.r5.u64 = ctx.r9.u32 & 0x7;
	// lbzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// slw r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// and r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 & ctx.r4.u64;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subfe r10,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83772b28
	goto loc_83772B28;
loc_83772B24:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83772B28:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83772b38
	if (cr6.eq) goto loc_83772B38;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83772B38:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r10,300
	cr6.compare<uint32_t>(ctx.r10.u32, 300, xer);
	// blt cr6,0x837729b4
	if (cr6.lt) goto loc_837729B4;
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
loc_83772B5C:
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

__attribute__((alias("__imp__sub_83772B74"))) PPC_WEAK_FUNC(sub_83772B74);
PPC_FUNC_IMPL(__imp__sub_83772B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772B78"))) PPC_WEAK_FUNC(sub_83772B78);
PPC_FUNC_IMPL(__imp__sub_83772B78) {
	PPC_FUNC_PROLOGUE();
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
	// bl 0x83772960
	ctx.lr = 0x83772B88;
	sub_83772960(ctx, base);
	// subfic r3,r3,50
	xer.ca = ctx.r3.u32 <= 50;
	ctx.r3.s64 = 50 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83772B9C"))) PPC_WEAK_FUNC(sub_83772B9C);
PPC_FUNC_IMPL(__imp__sub_83772B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83772BA0"))) PPC_WEAK_FUNC(sub_83772BA0);
PPC_FUNC_IMPL(__imp__sub_83772BA0) {
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
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x83772c14
	if (cr6.eq) goto loc_83772C14;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83772c14
	if (!cr6.lt) goto loc_83772C14;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r6,r8,6464
	ctx.r6.u64 = ctx.r8.u64 | 6464;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x83772c14
	if (!cr6.lt) goto loc_83772C14;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83772c14
	if (cr6.eq) goto loc_83772C14;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x831ce980
	ctx.lr = 0x83772C00;
	sub_831CE980(ctx, base);
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
loc_83772C14:
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

__attribute__((alias("__imp__sub_83772C28"))) PPC_WEAK_FUNC(sub_83772C28);
PPC_FUNC_IMPL(__imp__sub_83772C28) {
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
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x83772c94
	if (cr6.eq) goto loc_83772C94;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83772c94
	if (!cr6.lt) goto loc_83772C94;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,6464
	ctx.r7.u64 = ctx.r9.u64 | 6464;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83772c94
	if (!cr6.lt) goto loc_83772C94;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83772c94
	if (cr6.eq) goto loc_83772C94;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x831ce980
	ctx.lr = 0x83772C80;
	sub_831CE980(ctx, base);
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
loc_83772C94:
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

__attribute__((alias("__imp__sub_83772CA8"))) PPC_WEAK_FUNC(sub_83772CA8);
PPC_FUNC_IMPL(__imp__sub_83772CA8) {
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
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x83772d18
	if (cr6.eq) goto loc_83772D18;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83772d18
	if (!cr6.lt) goto loc_83772D18;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,6464
	ctx.r7.u64 = ctx.r9.u64 | 6464;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83772d18
	if (!cr6.lt) goto loc_83772D18;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83772d18
	if (cr6.eq) goto loc_83772D18;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83772D04;
	sub_831CDCF0(ctx, base);
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
loc_83772D18:
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

